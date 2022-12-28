using System;
using Unity.Collections;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// This subsystem provides implementing functionality for the <c>XREnvironmentProbeSubsystem</c> class.
    /// </summary>
    [Preserve]
    class ARKitEnvironmentProbeSubsystem : XREnvironmentProbeSubsystem
    {
        /// <summary>
        /// Create and register the environment probe subsystem descriptor to advertise a providing implementation for
        /// environment probe functionality.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void Register()
        {
            if (!Api.AtLeast12_0())
                return;

            const string subsystemId = "ARKit-EnvironmentProbe";
            XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
            {
                id = subsystemId,
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitEnvironmentProbeSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitEnvironmentProbeSubsystem),
#else
                implementationType = typeof(ARKitEnvironmentProbeSubsystem),
#endif
                supportsManualPlacement = true,
                supportsRemovalOfManual = true,
                supportsAutomaticPlacement = true,
                supportsRemovalOfAutomatic = true,
                supportsEnvironmentTexture = true,
                supportsEnvironmentTextureHDR = Api.AtLeast13_0(),
            };

            XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo);
        }

#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        class ARKitProvider : Provider
        {
            public ARKitProvider() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();

            public override void Start() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Start();

            /// <summary>
            /// Stops the environment probe subsystem by disabling the environment probe state.
            /// </summary>
            public override void Stop() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Stop();

            /// <summary>
            /// Destroy the environment probe subsystem by first ensuring that the subsystem has been stopped and then
            /// destroying the provider.
            /// </summary>
            public override void Destroy() => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Destruct();

            /// <summary>
            /// Enable or disable automatic placement of environment probes by the provider.
            /// </summary>
            /// <param name='value'><c>true</c> if the provider should automatically place environment probes in the scene.
            /// Otherwise, <c>false</c></param>.
            public override bool automaticPlacementRequested
            {
                get => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_GetAutomaticPlacementRequested();
                set => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementRequested(value);
            }

            /// <summary>
            /// Queries whether automatic placement is currently enabled.
            /// </summary>
            public override bool automaticPlacementEnabled => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_GetAutomaticPlacementEnabled();

            /// <summary>
            /// Get or set the requested state of HDR environment texture generation.
            /// </summary>
            /// <returns>
            /// Whether the HDR environment texture generation is requested.
            /// </returns>
            public override bool environmentTextureHDRRequested
            {
                get => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_GetEnvironmentTextureHDRRequested();
                set => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_SetEnvironmentTextureHDRRequested(value);
            }

            /// <summary>
            /// Query whether HDR texture generation is enabled.
            /// </summary>
            public override bool environmentTextureHDREnabled => EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_GetEnvironmentTextureHDREnabled();

            public override bool TryAddEnvironmentProbe(Pose pose, Vector3 scale, Vector3 size, out XREnvironmentProbe environmentProbe)
            {
                return EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(pose, scale, size, out environmentProbe);
            }

            /// <summary>
            /// Remove the environment probe matching the trackable ID from the AR session..
            /// </summary>
            /// <param name='trackableId'>The trackable ID for the environment probe to be removed.</param>
            /// <returns>
            /// <c>true</c> if an environment probe matching the trackable ID is found and will be removed from the AR
            /// session. Otherwise, <c>false</c>.
            /// </returns>
            public override bool RemoveEnvironmentProbe(TrackableId trackableId)
            {
                return EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(trackableId);
            }

            public override TrackableChanges<XREnvironmentProbe> GetChanges(XREnvironmentProbe defaultEnvironmentProbe,
                                                                            Allocator allocator)
            {
                int numAddedEnvironmentProbes;
                IntPtr addedEnvironmentProbesPointer;

                int numUpdatedEnvironmentProbes;
                IntPtr updatedEnvironmentProbesPointer;

                int numRemovedEnvironmentProbeIds;
                IntPtr removedEnvironmentProbeIdsPointer;

                int stride;

                var context = EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_AcquireChanges(out numAddedEnvironmentProbes, out addedEnvironmentProbesPointer,
                                                                                                     out numUpdatedEnvironmentProbes, out updatedEnvironmentProbesPointer,
                                                                                                     out numRemovedEnvironmentProbeIds, out removedEnvironmentProbeIdsPointer,
                                                                                                     out stride);

                try
                {
                    unsafe
                    {
                        // Wrap the navite pointers into a native array and then copy them into a separate native array enabled
                        // with temporary allocations.
                        return new TrackableChanges<XREnvironmentProbe>(
                            (void*)addedEnvironmentProbesPointer, numAddedEnvironmentProbes,
                            (void*)updatedEnvironmentProbesPointer, numUpdatedEnvironmentProbes,
                            (void*)removedEnvironmentProbeIdsPointer, numRemovedEnvironmentProbeIds,
                            defaultEnvironmentProbe, stride,
                            allocator);
                    }
                }
                finally
                {
                    EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_ReleaseChanges(context);
                }
            }
        }
    }
}
