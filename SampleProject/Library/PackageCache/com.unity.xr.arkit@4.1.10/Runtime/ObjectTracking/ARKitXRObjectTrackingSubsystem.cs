using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// An ARKit-specific implementation of the <c>XRObjectTrackingSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARKitXRObjectTrackingSubsystem : XRObjectTrackingSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARKit-specific implementation which will service the `XRObjectTrackingSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARKit.</returns>
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        class ARKitProvider : Provider
        {
#if UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Invoked when <c>Start</c> is called on the subsystem. This method is only called if the subsystem was not previously running.
            /// </summary>
            public override void Start() { }

            /// <summary>
            /// Invoked when <c>Stop</c> is called on the subsystem. This method is only called if the subsystem was previously running.
            /// </summary>
            public override void Stop() { }
#endif

#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal")]
            static extern void UnityARKit_ObjectTracking_Initialize();

            [DllImport("__Internal")]
            static extern void UnityARKit_ObjectTracking_Shutdown();

            [DllImport("__Internal")]
            static extern void UnityARKit_ObjectTracking_Stop();

            [DllImport("__Internal")]
            static extern SetReferenceLibraryResult UnityARKit_ObjectTracking_TrySetLibrary(
                [MarshalAs(UnmanagedType.LPWStr)] string name, int nameLength, Guid guid);

            [DllImport("__Internal")]
            static extern unsafe void* UnityARKit_ObjectTracking_AcquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize);

            [DllImport("__Internal")]
            static extern unsafe void UnityARKit_ObjectTracking_ReleaseChanges(void* changes);
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            static void UnityARKit_ObjectTracking_Initialize()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static void UnityARKit_ObjectTracking_Shutdown()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static void UnityARKit_ObjectTracking_Stop()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static SetReferenceLibraryResult UnityARKit_ObjectTracking_TrySetLibrary(
                [MarshalAs(UnmanagedType.LPWStr)] string name, int nameLength, Guid guid)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void* UnityARKit_ObjectTracking_AcquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void UnityARKit_ObjectTracking_ReleaseChanges(void* changes)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }
#endif
            public override unsafe XRReferenceObjectLibrary library
            {
                set
                {
                    if (value == null)
                    {
                        UnityARKit_ObjectTracking_Stop();
                    }
                    else
                    {
                        switch (UnityARKit_ObjectTracking_TrySetLibrary(value.name, value.name.Length, value.guid))
                        {
                            case SetReferenceLibraryResult.Success:
                                break;
                            case SetReferenceLibraryResult.FeatureUnavailable:
                                throw new InvalidOperationException(string.Format(
                                    "Failed to set requested image library '{0}' on ARKit - this feature only works on versions of ARKit 12.0 and newer.",
                                    value.name));
                            case SetReferenceLibraryResult.ResourceDoesNotExist:
                                throw new InvalidOperationException(string.Format(
                                    "Failed to find requested image library '{0}' on ARKit - there is no matching resource group, or the resource group does not contain any reference objects.",
                                    value.name));
                        }
                    }
                }
            }

            public override unsafe TrackableChanges<XRTrackedObject> GetChanges(
                XRTrackedObject defaultTrackedObject,
                Allocator allocator)
            {
                int addedLength, updatedLength, removedLength, elementSize;
                void* addedPtr, updatedPtr, removedPtr;

                var context = UnityARKit_ObjectTracking_AcquireChanges(
                    out addedPtr, out addedLength,
                    out updatedPtr, out updatedLength,
                    out removedPtr, out removedLength,
                    out elementSize);

                try
                {
                    return new TrackableChanges<XRTrackedObject>(
                        addedPtr, addedLength,
                        updatedPtr, updatedLength,
                        removedPtr, removedLength,
                        defaultTrackedObject, elementSize,
                        allocator);
                }
                finally
                {
                    UnityARKit_ObjectTracking_ReleaseChanges(context);
                }
            }

            public override void Destroy() => UnityARKit_ObjectTracking_Shutdown();

            public ARKitProvider() => UnityARKit_ObjectTracking_Initialize();
        }

        /// <summary>
        /// This method is run on startup of the app to register this provider with XR Subsystem Manager
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            // No support before iOS 12.0
            if (!Api.AtLeast12_0())
                return;

            var capabilities = new XRObjectTrackingSubsystemDescriptor.Capabilities
            {
            };

#if UNITY_2020_2_OR_NEWER
            Register<ARKitXRObjectTrackingSubsystem.ARKitProvider, ARKitXRObjectTrackingSubsystem>("ARKit-ObjectTracking", capabilities);
#else
            Register<ARKitXRObjectTrackingSubsystem>("ARKit-ObjectTracking", capabilities);
#endif
        }
    }
}
