using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Assertions;

namespace UnityEngine.XR.ARKit
{
    sealed class ARKitImageDatabase : MutableRuntimeReferenceImageLibrary
    {
        internal IntPtr nativePtr { get; }

        ~ARKitImageDatabase()
        {
            Assert.AreNotEqual(nativePtr, IntPtr.Zero);

            // Release references
            int n = count;
            for (int i = 0; i < n; ++i)
            {
                UnityARKit_ImageDatabase_GetReferenceImage(nativePtr, i).Dispose();
            }

            UnityARKit_CFRelease(nativePtr);
        }

        public unsafe ARKitImageDatabase(XRReferenceImageLibrary serializedLibrary)
        {
            if (serializedLibrary == null)
            {
                nativePtr = UnityARKit_ImageDatabase_CreateEmpty();
            }
            else
            {
                var managedReferenceImages = new NativeArray<ManagedReferenceImage>(serializedLibrary.count, Allocator.Temp);
                for (int i = 0; i < serializedLibrary.count; ++i)
                {
                    managedReferenceImages[i] = new ManagedReferenceImage(serializedLibrary[i]);
                }

                using (managedReferenceImages)
                {
                    var nativeReturnCode = UnityARKit_ImageDatabase_TryCreateFromResourceGroup(
                        serializedLibrary.name, serializedLibrary.name.Length, serializedLibrary.guid,
                        managedReferenceImages.GetUnsafePtr(), managedReferenceImages.Length,
                        out IntPtr ptr);

                    switch (nativeReturnCode)
                    {
                        case SetReferenceLibraryResult.Success:
                            nativePtr = ptr;
                            break;

                        case SetReferenceLibraryResult.FeatureUnavailable:
                            throw new InvalidOperationException($"Failed to resolve image library '{serializedLibrary.name}'. This feature only works on versions of ARKit 11.3 and newer.");

                        case SetReferenceLibraryResult.ResourceDoesNotExist:
                            throw new InvalidOperationException($"Failed to resolve image library '{serializedLibrary.name}'. There is no matching resource group, or the resource group does not contain any reference images.");

                        default:
                            throw new InvalidOperationException($"Unexpected return code {nativeReturnCode} encountered while trying to create a reference image library with name {serializedLibrary.name}.");
                    }
                }
            }
        }

        /// <summary>
        /// (Read Only) Whether image validation is supported. `True` on iOS 13 and later.
        /// </summary>
        public override bool supportsValidation => Api.AtLeast13_0();

        protected override AddReferenceImageJobState ScheduleAddImageWithValidationJobImpl(
            NativeSlice<byte> imageBytes,
            Vector2Int sizeInPixels,
            TextureFormat format,
            XRReferenceImage referenceImage,
            JobHandle inputDeps)
        {
            if (!referenceImage.specifySize)
                throw new InvalidOperationException("ARKit requires physical dimensions for all reference images.");

            // Add a reference to keep the native object alive even if we get finalized while a job is running
            var convertedImage = new NativeArray<byte>();
            var validator = IntPtr.Zero;
            try
            {
                UnityARKit_CFRetain(nativePtr);

                // Schedules a job to convert the image bytes if necessary
                convertedImage = GetImageBytesToConvert(imageBytes, sizeInPixels, ref format, ref inputDeps);

                // Create a native object to contain the validation status
                validator = CreateValidator(nativePtr);

                inputDeps = new AddImageJob
                {
                    image = convertedImage.IsCreated ? new NativeSlice<byte>(convertedImage) : imageBytes,
                    database = nativePtr,
                    validator = validator,
                    width = sizeInPixels.x,
                    height = sizeInPixels.y,
                    physicalWidth = referenceImage.size.x,
                    format = format,
                    managedReferenceImage = new ManagedReferenceImage(referenceImage)
                }.Schedule(inputDeps);
            }
            catch
            {
                DestroyValidator(nativePtr, validator);
                throw;
            }
            finally
            {
                // Release our native counterpart that we previously retained
                inputDeps = ScheduleReleaseJob(inputDeps);

                // If we had to perform a conversion, then release that memory
                if (convertedImage.IsCreated)
                {
                    inputDeps = new DeallocateNativeArrayJob<byte> { array = convertedImage }.Schedule(inputDeps);
                }
            }

            return CreateAddJobState(validator, inputDeps);
        }

        protected override AddReferenceImageJobStatus GetAddReferenceImageJobStatus(AddReferenceImageJobState handle)
            => GetValidatorStatus((IntPtr)handle);

        NativeArray<byte> GetImageBytesToConvert(
            NativeSlice<byte> imageBytes, Vector2Int sizeInPixels, ref TextureFormat format, ref JobHandle inputDeps)
        {
            // RGBA32 is not supported by CVPixelBuffer, but ARGB32 is, so
            // we offer a conversion for this common case.
            if (format == TextureFormat.RGBA32)
            {
                int numPixels = sizeInPixels.x * sizeInPixels.y;
                var argb32ImageBytes = new NativeArray<byte>(
                    numPixels * 4,
                    Allocator.Persistent,
                    NativeArrayOptions.UninitializedMemory);

                inputDeps = new ConvertRGBA32ToARGB32Job
                {
                    rgbaImage = imageBytes.SliceConvert<uint>(),
                    argbImage = argb32ImageBytes.Slice().SliceConvert<uint>()
                }.Schedule(numPixels, 64, inputDeps);

                // Format is now ARGB32
                format = TextureFormat.ARGB32;

                return argb32ImageBytes;
            }

            // No conversion necessary; echo back inputs
            return default;
        }

        // Just forwards the call to ScheduleAddImageWithValidationJobImpl
        protected override JobHandle ScheduleAddImageJobImpl(
            NativeSlice<byte> imageBytes,
            Vector2Int sizeInPixels,
            TextureFormat format,
            XRReferenceImage referenceImage,
            JobHandle inputDeps) =>
            ScheduleAddImageWithValidationJobImpl(imageBytes, sizeInPixels, format, referenceImage, inputDeps).jobHandle;

        static readonly TextureFormat[] k_SupportedFormats =
        {
            TextureFormat.Alpha8,
            TextureFormat.R8,
            TextureFormat.R16,
            TextureFormat.RFloat,
            TextureFormat.RGB24,
            TextureFormat.RGBA32,
            TextureFormat.ARGB32,
            TextureFormat.BGRA32,
        };

        public override int supportedTextureFormatCount => k_SupportedFormats.Length;

        protected override TextureFormat GetSupportedTextureFormatAtImpl(int index) => k_SupportedFormats[index];

        protected override XRReferenceImage GetReferenceImageAt(int index)
        {
            Assert.AreNotEqual(nativePtr, IntPtr.Zero);
            return UnityARKit_ImageDatabase_GetReferenceImage(nativePtr, index).ToReferenceImage();
        }

        public override int count
        {
            get
            {
                Assert.AreNotEqual(nativePtr, IntPtr.Zero);
                return UnityARKit_ImageDatabase_GetReferenceImageCount(nativePtr);
            }
        }

        JobHandle ScheduleReleaseJob(JobHandle inputDeps) => new ReleaseDatabaseJob
        {
            database = nativePtr
        }.Schedule(inputDeps);

        struct ReleaseDatabaseJob : IJob
        {
            public IntPtr database;
            public void Execute() => UnityARKit_CFRelease(database);
        }

        struct DeallocateNativeArrayJob<T> : IJob where T : struct
        {
            [DeallocateOnJobCompletion]
            public NativeArray<T> array;

            public void Execute() {}
        }

        struct ConvertRGBA32ToARGB32Job : IJobParallelFor
        {
            public NativeSlice<uint> rgbaImage;

            public NativeSlice<uint> argbImage;

            public unsafe void Execute(int index)
            {
                uint rgba = rgbaImage[index];
                argbImage[index] = (rgba << 8) | ((rgba & 0xff000000) >> 24);
            }
        }

        struct AddImageJob : IJob
        {
            public NativeSlice<byte> image;
            public IntPtr database;
            public IntPtr validator;
            public int width;
            public int height;
            public float physicalWidth;
            public TextureFormat format;
            public ManagedReferenceImage managedReferenceImage;

            public unsafe void Execute()
            {
                if (!AddImage(database, validator, image.GetUnsafePtr(), format, width, height, physicalWidth, ref managedReferenceImage))
                {
                    managedReferenceImage.Dispose();
                }
            }

#if UNITY_XR_ARKIT_LOADER_ENABLED && !UNITY_EDITOR
            [DllImport("__Internal", EntryPoint = "UnityARKit_ImageDatabase_AddImage")]
            static extern unsafe bool AddImage(
                IntPtr database, IntPtr validator, void* bytes, TextureFormat format,
                int width, int height, float physicalWidth,
                ref ManagedReferenceImage managedReferenceImage);
#else
            static unsafe bool AddImage(
                IntPtr database, IntPtr validator, void* bytes, TextureFormat format,
                int width, int height, float physicalWidth,
                ref ManagedReferenceImage managedReferenceImage)
            {
                throw new NotImplementedException("ARKit Plugin Provider not enabled in project settings.");
            }
#endif
        }

#if UNITY_XR_ARKIT_LOADER_ENABLED && !UNITY_EDITOR
        [DllImport("__Internal")]
        static extern void UnityARKit_CFRetain(IntPtr ptr);

        [DllImport("__Internal")]
        static extern void UnityARKit_CFRelease(IntPtr ptr);

        [DllImport("__Internal")]
        static extern IntPtr UnityARKit_ImageDatabase_CreateEmpty();

        [DllImport("__Internal")]
        static extern unsafe SetReferenceLibraryResult UnityARKit_ImageDatabase_TryCreateFromResourceGroup(
            [MarshalAs(UnmanagedType.LPWStr)] string name, int nameLength, Guid guid,
            void* managedReferenceImages, int managedReferenceImageCount,
            out IntPtr ptr);

        [DllImport("__Internal")]
        static extern ManagedReferenceImage UnityARKit_ImageDatabase_GetReferenceImage(IntPtr database, int index);

        [DllImport("__Internal")]
        static extern int UnityARKit_ImageDatabase_GetReferenceImageCount(IntPtr database);

        [DllImport("__Internal", EntryPoint = "UnityARKit_ImageDatabase_CreateValidator")]
        static extern IntPtr CreateValidator(IntPtr database);

        [DllImport("__Internal", EntryPoint = "UnityARKit_ReferenceImageValidator_get_status")]
        static extern AddReferenceImageJobStatus GetValidatorStatus(IntPtr validator);

        [DllImport("__Internal", EntryPoint = "UnityARKit_ImageDatabase_DestroyValidator")]
        static extern void DestroyValidator(IntPtr database, IntPtr validator);
#else
        static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

        static void UnityARKit_CFRetain(IntPtr ptr) => throw new NotImplementedException(k_ExceptionMsg);

        static void UnityARKit_CFRelease(IntPtr ptr) => throw new NotImplementedException(k_ExceptionMsg);

        static IntPtr UnityARKit_ImageDatabase_CreateEmpty() => throw new NotImplementedException(k_ExceptionMsg);

        static unsafe SetReferenceLibraryResult UnityARKit_ImageDatabase_TryCreateFromResourceGroup(
            [MarshalAs(UnmanagedType.LPWStr)] string name, int nameLength, Guid guid,
            void* managedReferenceImages, int managedReferenceImageCount,
            out IntPtr ptr) => throw new System.NotImplementedException(k_ExceptionMsg);

        static ManagedReferenceImage UnityARKit_ImageDatabase_GetReferenceImage(IntPtr database, int index) =>
            throw new System.NotImplementedException(k_ExceptionMsg);

        static int UnityARKit_ImageDatabase_GetReferenceImageCount(IntPtr database) =>
            throw new System.NotImplementedException(k_ExceptionMsg);

        static IntPtr CreateValidator(IntPtr database) => default;
        static AddReferenceImageJobStatus GetValidatorStatus(IntPtr validator) => default;
        static void DestroyValidator(IntPtr database, IntPtr validator) { }
#endif
    }
}
