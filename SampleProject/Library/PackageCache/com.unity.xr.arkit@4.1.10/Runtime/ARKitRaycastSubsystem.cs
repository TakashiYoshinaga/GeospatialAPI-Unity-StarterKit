using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// ARKit implementation of the <c>XRRaycastSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARKitRaycastSubsystem : XRRaycastSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARKit-specific implementation which will service the `XRRaycastSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARKit.</returns>
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        class ARKitProvider : XRRaycastSubsystem.Provider
        {
            IntPtr m_Self;

            public ARKitProvider() => m_Self = NativeApi.Construct();

            public override void Start()
            {
                if (m_Self != IntPtr.Zero)
                {
                    NativeApi.Start(m_Self);
                }
            }

            public override void Stop()
            {
                if (m_Self != IntPtr.Zero)
                {
                    NativeApi.Stop(m_Self);
                }
            }

            public override void Destroy()
            {
                if (m_Self != IntPtr.Zero)
                {
                    Api.CFRelease(ref m_Self);
                }
            }

            public override unsafe TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator)
            {
                if (m_Self == IntPtr.Zero)
                    return default;

                NativeApi.AcquireChanges(m_Self,
                    out XRRaycast* added, out int addedCount,
                    out XRRaycast* updated, out int updatedCount,
                    out TrackableId* removed, out int removedCount,
                    out int elementSize);

                try
                {
                    return new TrackableChanges<XRRaycast>(
                        added, addedCount,
                        updated, updatedCount,
                        removed, removedCount,
                        defaultRaycast, elementSize, allocator);
                }
                finally
                {
                    NativeApi.ReleaseChanges(added, updated, removed);
                }
            }

            public override bool TryAddRaycast(Ray ray, float estimatedDistance, out XRRaycast sessionRelativeData)
            {
                if (m_Self == IntPtr.Zero)
                {
                    sessionRelativeData = default;
                    return false;
                }

                return NativeApi.TryAddRaycast(m_Self, ray.origin, ray.direction, estimatedDistance, out sessionRelativeData);
            }

            public override void RemoveRaycast(TrackableId trackableId)
            {
                if (m_Self != IntPtr.Zero)
                {
                    NativeApi.RemoveRaycast(m_Self, trackableId);
                }
            }

            public override unsafe NativeArray<XRRaycastHit> Raycast(
                XRRaycastHit defaultRaycastHit,
                Vector2 screenPoint,
                TrackableType trackableTypeMask,
                Allocator allocator)
            {
                void* hitResults;
                int count;
                NativeApi.UnityARKit_Raycast_AcquireHitResults(
                    screenPoint,
                    trackableTypeMask,
                    out hitResults,
                    out count);

                var results = new NativeArray<XRRaycastHit>(count, allocator);
                NativeApi.UnityARKit_Raycast_CopyAndReleaseHitResults(
                    UnsafeUtility.AddressOf(ref defaultRaycastHit),
                    UnsafeUtility.SizeOf<XRRaycastHit>(),
                    hitResults,
                    results.GetUnsafePtr());

                return results;
            }
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.AtLeast11_0())
                return;

            XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
            {
                id = "ARKit-Raycast",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitRaycastSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitRaycastSubsystem),
#else
                subsystemImplementationType = typeof(ARKitRaycastSubsystem),
#endif
                supportsViewportBasedRaycast = true,
                supportsWorldBasedRaycast = false,
                supportedTrackableTypes =
                    TrackableType.Planes |
                    TrackableType.FeaturePoint,
                supportsTrackedRaycasts = Api.AtLeast13_0(),
            });
        }

        static class NativeApi
        {
#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_AcquireHitResults")]
            public static unsafe extern void UnityARKit_Raycast_AcquireHitResults(
                Vector2 screenPoint,
                TrackableType filter,
                out void* hitResults,
                out int hitCount);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_CopyAndReleaseHitResults")]
            public static unsafe extern void UnityARKit_Raycast_CopyAndReleaseHitResults(
                void* defaultHit,
                int stride,
                void* hitResults,
                void* dstBuffer);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_Construct")]
            public static extern IntPtr Construct();

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_Start")]
            public static extern void Start(IntPtr self);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_Stop")]
            public static extern void Stop(IntPtr self);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_AcquireChanges")]
            public static extern unsafe void AcquireChanges(IntPtr self,
                out XRRaycast* added, out int addedCount,
                out XRRaycast* updated, out int updatedCount,
                out TrackableId* removed, out int removedCount,
                out int elementSize);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_ReleaseChanges")]
            public static extern unsafe void ReleaseChanges(XRRaycast* added, XRRaycast* updated, TrackableId* removed);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_TryAddRaycast")]
            public static extern bool TryAddRaycast(IntPtr self, Vector3 origin, Vector3 direction, float estimatedDistance, out XRRaycast raycast);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Raycast_RemoveRaycast")]
            public static extern void RemoveRaycast(IntPtr self, TrackableId trackableId);
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            public static unsafe void UnityARKit_Raycast_AcquireHitResults(
                Vector2 screenPoint,
                TrackableType filter,
                out void* hitResults,
                out int hitCount)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void UnityARKit_Raycast_CopyAndReleaseHitResults(
                void* defaultHit,
                int stride,
                void* hitResults,
                void* dstBuffer)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static IntPtr Construct()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void Start(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void Stop(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void AcquireChanges(IntPtr self,
                out XRRaycast* added, out int addedCount,
                out XRRaycast* updated, out int updatedCount,
                out TrackableId* removed, out int removedCount,
                out int elementSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void ReleaseChanges(XRRaycast* added, XRRaycast* updated, TrackableId* removed)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool TryAddRaycast(IntPtr self, Vector3 origin, Vector3 direction, float estimatedDistance, out XRRaycast raycast)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void RemoveRaycast(IntPtr self, TrackableId trackableId)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }
#endif

        }
    }
}
