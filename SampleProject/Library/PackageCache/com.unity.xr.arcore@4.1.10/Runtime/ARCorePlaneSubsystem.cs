using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Jobs;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The ARCore implementation of the
    /// [XRPlaneSubsystem](xref:UnityEngine.XR.ARSubsystems.XRPlaneSubsystem).
    /// Do not create this directly. Use the
    /// [SubsystemManager](xref:UnityEngine.SubsystemManager)
    /// instead.
    /// </summary>
    [Preserve]
    public sealed class ARCorePlaneSubsystem : XRPlaneSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARCore-specific implementation which will service the `XRPlaneSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARCore.</returns>
        protected override Provider CreateProvider() => new ARCoreProvider();
#endif

        class ARCoreProvider : Provider
        {
            public override void Start() => UnityARCore_planeTracking_startTracking();

            public override void Stop() => UnityARCore_planeTracking_stopTracking();

            public override unsafe void GetBoundary(
                TrackableId trackableId,
                Allocator allocator,
                ref NativeArray<Vector2> boundary)
            {
                int numPoints;
                var plane = UnityARCore_planeTracking_acquireBoundary(
                    trackableId,
                    out numPoints);

                CreateOrResizeNativeArrayIfNecessary(numPoints, allocator, ref boundary);

                if (UnityARCore_planeTracking_tryCopyBoundary(plane, boundary.GetUnsafePtr()))
                {
                    // Flip handedness and winding order
                    var flipHandednessHandle = new FlipBoundaryHandednessJob
                    {
                        vertices = boundary
                    }.Schedule(numPoints, 1);

                    new FlipBoundaryWindingJob
                    {
                        vertices = boundary
                    }.Schedule(flipHandednessHandle).Complete();
                }
                else
                {
                    boundary.Dispose();
                }
            }

            struct FlipBoundaryWindingJob : IJob
            {
                public NativeArray<Vector2> vertices;

                public void Execute()
                {
                    var half = vertices.Length / 2;
                    for (int i = 0; i < half; ++i)
                    {
                        var j = vertices.Length - 1 - i;
                        var temp = vertices[j];
                        vertices[j] = vertices[i];
                        vertices[i] = temp;
                    }
                }
            }

            struct FlipBoundaryHandednessJob : IJobParallelFor
            {
                public NativeArray<Vector2> vertices;

                public void Execute(int index)
                {
                    vertices[index] = new Vector2(
                         vertices[index].x,
                        -vertices[index].y);
                }
            }

            public override unsafe TrackableChanges<BoundedPlane> GetChanges(
                BoundedPlane defaultPlane,
                Allocator allocator)
            {
                int addedLength, updatedLength, removedLength, elementSize;
                void* addedPtr, updatedPtr, removedPtr;
                var context = UnityARCore_planeTracking_acquireChanges(
                    out addedPtr, out addedLength,
                    out updatedPtr, out updatedLength,
                    out removedPtr, out removedLength,
                    out elementSize);

                try
                {
                    return new TrackableChanges<BoundedPlane>(
                        addedPtr, addedLength,
                        updatedPtr, updatedLength,
                        removedPtr, removedLength,
                        defaultPlane, elementSize,
                        allocator);
                }
                finally
                {
                    UnityARCore_planeTracking_releaseChanges(context);
                }
            }

            public override void Destroy() => UnityARCore_planeTracking_destroy();

            public override PlaneDetectionMode requestedPlaneDetectionMode
            {
                get => GetRequestedPlaneDetectionMode();
                set => SetRequestedPlaneDetectionMode(value);
            }

            public override PlaneDetectionMode currentPlaneDetectionMode => GetCurrentPlaneDetectionMode();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_planeTracking_startTracking();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_planeTracking_stopTracking();

            [DllImport("UnityARCore")]
            static extern unsafe void* UnityARCore_planeTracking_acquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize);

            [DllImport("UnityARCore")]
            static extern unsafe void UnityARCore_planeTracking_releaseChanges(
                void* changes);

            [DllImport("UnityARCore", EntryPoint="UnityARCore_planeTracking_getRequestedPlaneDetectionMode")]
            static extern PlaneDetectionMode GetRequestedPlaneDetectionMode();

            [DllImport("UnityARCore", EntryPoint="UnityARCore_planeTracking_setRequestedPlaneDetectionMode")]
            static extern void SetRequestedPlaneDetectionMode(PlaneDetectionMode mode);

            [DllImport("UnityARCore", EntryPoint="UnityARCore_planeTracking_getCurrentPlaneDetectionMode")]
            static extern PlaneDetectionMode GetCurrentPlaneDetectionMode();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_planeTracking_destroy();

            [DllImport("UnityARCore")]
            static extern unsafe void* UnityARCore_planeTracking_acquireBoundary(
                TrackableId trackableId,
                out int numPoints);

            [DllImport("UnityARCore")]
            static extern unsafe bool UnityARCore_planeTracking_tryCopyBoundary(
                void* plane,
                void* boundaryOut);
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.platformAndroid || !Api.loaderPresent)
                return;

            var cinfo = new XRPlaneSubsystemDescriptor.Cinfo
            {
                id = "ARCore-Plane",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARCorePlaneSubsystem.ARCoreProvider),
                subsystemTypeOverride = typeof(ARCorePlaneSubsystem),
#else
                subsystemImplementationType = typeof(ARCorePlaneSubsystem),
#endif
                supportsHorizontalPlaneDetection = true,
                supportsVerticalPlaneDetection = true,
                supportsArbitraryPlaneDetection = false,
                supportsBoundaryVertices = true
            };

            XRPlaneSubsystemDescriptor.Create(cinfo);
        }
    }
}
