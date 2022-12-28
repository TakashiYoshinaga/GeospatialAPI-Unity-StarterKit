using System;
using System.Runtime.InteropServices;
using AOT;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// The ARKit implementation of the <c>XRDepthSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARKitXRDepthSubsystem : XRDepthSubsystem
    {
        class ARKitProvider : Provider
        {
#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal")]
            static extern void UnityARKit_depth_start();

            [DllImport("__Internal")]
            static extern void UnityARKit_depth_stop();

            [DllImport("__Internal")]
            static extern void UnityARKit_depth_destroy();

            [DllImport("__Internal")]
            static extern unsafe void* UnityARKit_depth_acquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize);

            [DllImport("__Internal")]
            static extern unsafe void UnityARKit_depth_releaseChanges(
                void* changes);

            [DllImport("__Internal")]
            static extern unsafe void* UnityARKit_depth_acquirePointCloud(
                TrackableId trackableId,
                out void* positionsPtr, out void* identifiersPtr, out int numPoints);

            [DllImport("__Internal")]
            static extern unsafe void UnityARKit_depth_releasePointCloud(
                void* pointCloud);
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            static void UnityARKit_depth_start()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static void UnityARKit_depth_stop()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static void UnityARKit_depth_destroy()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void* UnityARKit_depth_acquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void UnityARKit_depth_releaseChanges(
                void* changes)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void* UnityARKit_depth_acquirePointCloud(
                TrackableId trackableId,
                out void* positionsPtr, out void* identifiersPtr, out int numPoints)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            static unsafe void UnityARKit_depth_releasePointCloud(
                void* pointCloud)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

#endif
            public override unsafe TrackableChanges<XRPointCloud> GetChanges(
                XRPointCloud defaultPointCloud,
                Allocator allocator)
            {
                var context = UnityARKit_depth_acquireChanges(
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
                    UnityARKit_depth_releaseChanges(context);
                }
            }

            public override void Start() => UnityARKit_depth_start();

            public override void Stop() => UnityARKit_depth_stop();

            public override void Destroy() => UnityARKit_depth_destroy();

            public override unsafe XRPointCloudData GetPointCloudData(
                TrackableId trackableId,
                Allocator allocator)
            {
                var pointCloud = UnityARKit_depth_acquirePointCloud(
                    trackableId,
                    out var positionsPtr, out var identifiersPtr, out var numPoints);

                try
                {
                    var positions = new NativeArray<Vector3>(numPoints, allocator);
                    var positionsHandle = new TransformPositionsJob
                    {
                        positionsIn = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Quaternion>(positionsPtr, numPoints, Allocator.None),
                        positionsOut = positions
                    }.Schedule(numPoints, 32);

                    var identifiers = new NativeArray<ulong>(numPoints, allocator);
                    identifiers.CopyFrom(NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<ulong>(identifiersPtr, numPoints, Allocator.None));

                    positionsHandle.Complete();
                    return new XRPointCloudData
                    {
                        positions = positions,
                        identifiers = identifiers
                    };
                }
                finally
                {
                    UnityARKit_depth_releasePointCloud(pointCloud);
                }
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

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARKit-specific implementation which will service the `XRDepthSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARKit.</returns>
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        //this method is run on startup of the app to register this provider with XR Subsystem Manager
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.AtLeast11_0())
                return;

#if UNITY_IOS && !UNITY_EDITOR
            var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
            {
                id = "ARKit-Depth",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitXRDepthSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitXRDepthSubsystem),
#else
                implementationType = typeof(ARKitXRDepthSubsystem),
#endif
                supportsFeaturePoints = true,
                supportsConfidence = false,
                supportsUniqueIds = true
            };

            XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
#endif
        }
    }
}
