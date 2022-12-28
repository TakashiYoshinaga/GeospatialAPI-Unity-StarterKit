using System.Runtime.InteropServices;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;
using Unity.Collections;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// ARCore implementation of the <c>XRRaycastSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARCoreRaycastSubsystem : XRRaycastSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARCore-specific implementation which will service the `XRRaycastSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARCore.</returns>
        protected override Provider CreateProvider() => new ARCoreProvider();
#endif

        class ARCoreProvider : Provider
        {
            public override void Start() => UnityARCore_raycast_startTracking();
            public override void Stop() => UnityARCore_raycast_stopTracking();
            public override void Destroy() => UnityARCore_raycast_destroy();

            public override unsafe TrackableChanges<XRRaycast> GetChanges(
                XRRaycast defaultRaycast, 
                Allocator allocator)
            {
                int addedLength, updatedLength, removedLength, elementSize;
                void* addedPtr, updatedPtr, removedPtr;
                var context = UnityARCore_raycast_acquireChanges(
                    out addedPtr, out addedLength,
                    out updatedPtr, out updatedLength,
                    out removedPtr, out removedLength,
                    out elementSize);

                try
                {
                    return new TrackableChanges<XRRaycast>(
                        addedPtr, addedLength,
                        updatedPtr, updatedLength,
                        removedPtr, removedLength,
                        defaultRaycast, elementSize,
                        allocator);
                }
                finally
                {
                    UnityARCore_raycast_releaseChanges(context);
                }
            }

            public override bool TryAddRaycast(Vector2 screenPoint, float estimatedDistance, out XRRaycast sessionRelativeData)
            {   
                return UnityARCore_raycast_tryAddRaycast(screenPoint, estimatedDistance, out sessionRelativeData);
            }

            public override void RemoveRaycast(TrackableId trackableId)
            {
                UnityARCore_raycast_removeRaycast(trackableId);
            }

            public override unsafe NativeArray<XRRaycastHit> Raycast(
                XRRaycastHit defaultRaycastHit,
                Ray ray,
                TrackableType trackableTypeMask,
                Allocator allocator)
            {
                void* hitBuffer;
                int hitCount, elementSize;

                UnityARCore_raycast_acquireHitResultsRay(
                    ray.origin,
                    ray.direction,
                    trackableTypeMask,
                    out hitBuffer,
                    out hitCount,
                    out elementSize);

                try
                {
                    return NativeCopyUtility.PtrToNativeArrayWithDefault<XRRaycastHit>(
                        defaultRaycastHit,
                        hitBuffer, elementSize,
                        hitCount, allocator);
                }
                finally
                {
                    UnityARCore_raycast_releaseHitResults(hitBuffer);
                }
            }

            public override unsafe NativeArray<XRRaycastHit> Raycast(
                XRRaycastHit defaultRaycastHit,
                Vector2 screenPoint,
                TrackableType trackableTypeMask,
                Allocator allocator)
            {
                void* hitBuffer;
                int hitCount, elementSize;

                UnityARCore_raycast_acquireHitResults(
                    screenPoint,
                    trackableTypeMask,
                    out hitBuffer,
                    out hitCount,
                    out elementSize);

                try
                {
                    return NativeCopyUtility.PtrToNativeArrayWithDefault<XRRaycastHit>(
                        defaultRaycastHit,
                        hitBuffer, elementSize,
                        hitCount, allocator);
                }
                finally
                {
                    UnityARCore_raycast_releaseHitResults(hitBuffer);
                }
            }

            [DllImport("UnityARCore")]
            static unsafe extern void UnityARCore_raycast_acquireHitResults(
                Vector2 screenPoint,
                TrackableType filter,
                out void* hitBuffer,
                out int hitCount,
                out int elementSize);

            [DllImport("UnityARCore")]
            static unsafe extern void UnityARCore_raycast_acquireHitResultsRay(
                Vector3 rayOrigin,
                Vector3 rayDirection,
                TrackableType filter,
                out void* hitBuffer,
                out int hitCount,
                out int elementSize);

            [DllImport("UnityARCore")]
            static unsafe extern void UnityARCore_raycast_releaseHitResults(
                void* buffer);

            [DllImport("UnityARCore")]
            static unsafe extern bool UnityARCore_raycast_tryAddRaycast(
                Vector2 screenPoint,
                float estimatedDistance,
                out XRRaycast raycastOut);
            
            [DllImport("UnityARCore")]
            static unsafe extern void UnityARCore_raycast_removeRaycast(
               TrackableId trackableId);  

            [DllImport("UnityARCore")]
            static extern void UnityARCore_raycast_startTracking();

            [DllImport("UnityARCore")]
            static extern void UnityARCore_raycast_stopTracking();   

            [DllImport("UnityARCore")]
            static extern unsafe void* UnityARCore_raycast_acquireChanges(
                out void* addedPtr, out int addedLength,
                out void* updatedPtr, out int updatedLength,
                out void* removedPtr, out int removedLength,
                out int elementSize);  
            
            [DllImport("UnityARCore")]
            static extern unsafe void UnityARCore_raycast_releaseChanges(
                void* changes); 

            [DllImport("UnityARCore")]
            static extern void UnityARCore_raycast_destroy();

        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.platformAndroid || !Api.loaderPresent)
                return;

            XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
            {
                id = "ARCore-Raycast",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARCoreRaycastSubsystem.ARCoreProvider),
                subsystemTypeOverride = typeof(ARCoreRaycastSubsystem),
#else
                subsystemImplementationType = typeof(ARCoreRaycastSubsystem),
#endif
                supportsViewportBasedRaycast = true,
                supportsWorldBasedRaycast = true,
                supportedTrackableTypes =
                    (TrackableType.Planes & ~TrackableType.PlaneWithinInfinity) |
                    TrackableType.FeaturePoint,
                supportsTrackedRaycasts = true,
            });
        }
    }
}
