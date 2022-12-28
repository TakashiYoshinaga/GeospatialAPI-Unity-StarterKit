using AOT;
using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The ARCore implementation of the <c>XRDepthSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARCoreXRDepthSubsystem : XRDepthSubsystem
    {
        class ARCoreProvider : Provider
        {
            [DllImport("UnityARCore")]
            static extern void UnityARCore_depth_Create(Func<Guid> guidGenerator);

            [DllImport("UnityARCore")]
            static extern void UnityARCore_depth_Start();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_depth_Stop();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_depth_Destroy();

            [DllImport("UnityARCore")]
            static extern unsafe void* UnityARCore_depth_AcquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize);

            [DllImport("UnityARCore")]
            static extern unsafe void UnityARCore_depth_ReleaseChanges(void* changes);

            [DllImport("UnityARCore")]
            static extern unsafe int UnityARCore_depth_getPointCloudPtrs(
                TrackableId trackableId,
                out void* dataPtr, out void* identifierPtr);

            public override unsafe TrackableChanges<XRPointCloud> GetChanges(
                XRPointCloud defaultPointCloud,
                Allocator allocator)
            {
                var context = UnityARCore_depth_AcquireChanges(
                    out var addedPtr, out var addedLength,
                    out var updatedPtr, out var updatedLength,
                    out var removedPtr, out var removedLength,
                    out var elementSize);

                try
                {
                    return new TrackableChanges<XRPointCloud>(
                        addedPtr, addedLength,
                        updatedPtr, updatedLength,
                        removedPtr, removedLength,
                        defaultPointCloud, elementSize,
                        allocator);
                }
                finally
                {
                    UnityARCore_depth_ReleaseChanges(context);
                }
            }

            public override unsafe XRPointCloudData GetPointCloudData(
                TrackableId trackableId,
                Allocator allocator)
            {
                int numPoints = UnityARCore_depth_getPointCloudPtrs(
                    trackableId,
                    out var dataPtr, out var identifierPtr);

                var data = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Quaternion>(dataPtr, numPoints, Allocator.None);

                var positions = new NativeArray<Vector3>(numPoints, allocator);
                var positionsJob = new TransformPositionsJob
                {
                    positionsIn = data,
                    positionsOut = positions
                };
                var positionsHandle = positionsJob.Schedule(numPoints, 32);

                var confidenceValues = new NativeArray<float>(numPoints, allocator);
                var confidenceJob = new ExtractConfidenceValuesJob
                {
                    confidenceIn = data,
                    confidenceOut = confidenceValues
                };
                var confidenceHandle = confidenceJob.Schedule(numPoints, 32);

                var identifiers = new NativeArray<ulong>(numPoints, allocator);
                var identifiersJob = new CopyIdentifiersJob
                {
                    identifiersIn = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<int>(identifierPtr, numPoints, Allocator.None),
                    identifiersOut = identifiers
                };
                var identifiersHandle = identifiersJob.Schedule(numPoints, 32);

                JobHandle.CombineDependencies(positionsHandle, confidenceHandle, identifiersHandle).Complete();
                return new XRPointCloudData
                {
                    positions = positions,
                    identifiers = identifiers,
                    confidenceValues = confidenceValues
                };
            }

            struct CopyIdentifiersJob : IJobParallelFor
            {
                [ReadOnly]
                public NativeArray<int> identifiersIn;

                [WriteOnly]
                public NativeArray<ulong> identifiersOut;

                public void Execute(int index)
                {
                    identifiersOut[index] = (ulong)identifiersIn[index];
                }
            }

            struct ExtractConfidenceValuesJob : IJobParallelFor
            {
                [ReadOnly]
                public NativeArray<Quaternion> confidenceIn;

                [WriteOnly]
                public NativeArray<float> confidenceOut;

                public void Execute(int index)
                {
                    confidenceOut[index] = confidenceIn[index].w;
                }
            }

            struct TransformPositionsJob : IJobParallelFor
            {
                [ReadOnly]
                public NativeArray<Quaternion> positionsIn;

                [WriteOnly]
                public NativeArray<Vector3> positionsOut;

                public void Execute(int index)
                {
                    positionsOut[index] = new Vector3(
                         positionsIn[index].x,
                         positionsIn[index].y,
                        -positionsIn[index].z);
                }
            }

            [MonoPInvokeCallback(typeof(Func<Guid>))]
            static Guid GenerateGuid() => Guid.NewGuid();

            static Func<Guid> s_GenerateGuidDelegate = GenerateGuid;

            public ARCoreProvider() => UnityARCore_depth_Create(s_GenerateGuidDelegate);

            public override void Destroy() => UnityARCore_depth_Destroy();

            /// <summary>
            /// Starts the DepthSubsystem provider to begin providing face data via the callback delegates
            /// </summary>
            public override void Start() => UnityARCore_depth_Start();

            /// <summary>
            /// Stops the DepthSubsystem provider from providing face data
            /// </summary>
            public override void Stop() => UnityARCore_depth_Stop();
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARCore-specific implementation which will service the `XRDepthSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARCore.</returns>
        protected override Provider CreateProvider() => new ARCoreProvider();
#endif

        // this method is run on startup of the app to register this provider with XR Subsystem Manager
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.platformAndroid || !Api.loaderPresent)
                return;

            var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
            {
                id = "ARCore-Depth",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARCoreXRDepthSubsystem.ARCoreProvider),
                subsystemTypeOverride = typeof(ARCoreXRDepthSubsystem),
#else
                implementationType = typeof(ARCoreXRDepthSubsystem),
#endif
                supportsFeaturePoints = true,
                supportsUniqueIds = true,
                supportsConfidence = true
            };

            XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
        }
    }
}
