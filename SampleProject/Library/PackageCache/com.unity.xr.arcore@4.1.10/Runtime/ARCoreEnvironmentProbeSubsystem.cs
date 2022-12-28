using System.Runtime.InteropServices;
using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The ARCore implementation of the
    /// [XREnvironmentProbeSubsystem](xref:UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem).
    /// Do not create this directly. Use the
    /// [SubsystemManager](xref:UnityEngine.SubsystemManager)
    /// instead.
    /// </summary>
    [Preserve]
    class ARCoreEnvironmentProbeSubsystem : XREnvironmentProbeSubsystem
    {
        /// <summary>
        /// Create and register the environment probe subsystem descriptor to advertise a providing implementation for
        /// environment probe functionality.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void Register()
        {
            if (!Api.platformAndroid || !Api.loaderPresent)
                return;

            const string subsystemId = "ARCore-EnvironmentProbe";
            XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
            {
                id = subsystemId,
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARCoreEnvironmentProbeSubsystem.ARCoreProvider),
                subsystemTypeOverride = typeof(ARCoreEnvironmentProbeSubsystem),
#else
                implementationType = typeof(ARCoreEnvironmentProbeSubsystem),
#endif
                supportsManualPlacement = false,
                supportsRemovalOfManual = false,
                supportsAutomaticPlacement = true,
                supportsRemovalOfAutomatic = false,
                supportsEnvironmentTexture = false,
                supportsEnvironmentTextureHDR = true,
            };

            XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo);
        }

#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider() => new ARCoreProvider();
#endif

        class ARCoreProvider : Provider
        {
            public ARCoreProvider() => NativeApi.UnityARCore_EnvironmentProbeProvider_Construct(QualitySettings.activeColorSpace);

            /// <summary>
            /// Starts the environment probe subsystem by enabling the HDR Environmental Light Estimation.
            /// </summary>
            public override void Start() => NativeApi.UnityARCore_EnvironmentProbeProvider_Start();

            /// <summary>
            /// Stops the environment probe subsystem by disabling the environment probe state.
            /// </summary>
            public override void Stop() => NativeApi.UnityARCore_EnvironmentProbeProvider_Stop();

            /// <summary>
            /// Destroy the environment probe subsystem by first ensuring that the subsystem has been stopped and then
            /// destroying the provider.
            /// </summary>
            public override void Destroy() => NativeApi.UnityARCore_EnvironmentProbeProvider_Destroy();

            /// <summary>
            /// Enable or disable automatic placement of environment probes by the provider.
            /// </summary>
            /// <param name='value'><c>true</c> if the provider should automatically place environment probes in the scene.
            /// Otherwise, <c>false</c></param>.
            /// <remarks>ARCore does not allow Environment Probes to be placed manually.  Regardless of value this will always be automatic.</remarks>
            public override bool automaticPlacementRequested
            {
                get => true;
                set
                {
                    if (!value)
                        throw new NotSupportedException("ARCore only supports the automatic placement of environment probes.");
                }
            }

            /// <summary>
            /// Get whether automatic placement is enabled. This property is always true.
            /// </summary>
            public override bool automaticPlacementEnabled => true;

            /// <summary>
            /// Get or set whether HDR environment texture generation is requested.
            /// </summary>
            /// Whether the HDR environment texture generation state is requested.
            /// </returns>
            /// <remarks>ARCore will only ever return environmental textures that are HDR.  This can only be set to <c>true</c>.</remarks>
            public override bool environmentTextureHDRRequested
            {
                get => true;
                set
                {
                    if (!value)
                    {
                        throw new NotSupportedException("ARCore only supports HDR for environment textures.");
                    }
                }
            }

            /// <summary>
            /// Get whether HDR environment textures are enabled. This always returns true.
            /// </summary>
            public override bool environmentTextureHDREnabled => true;

            public override TrackableChanges<XREnvironmentProbe> GetChanges(XREnvironmentProbe defaultEnvironmentProbe,
                                                                            Allocator allocator)
            {
                XREnvironmentProbe probe = XREnvironmentProbe.defaultValue;
                NativeApi.UnityARCore_EnvironmentProbeProvider_GetChanges(out int numAdded, out int numUpdated, out int numRemoved, ref probe);

                // There is only ever one probe currently so allocating using it as the default template is safe.
                var changes = new TrackableChanges<XREnvironmentProbe>(numAdded, numUpdated, numRemoved, allocator, probe);

                if (numRemoved > 0)
                {
                    var nativeRemovedArray = changes.removed;
                    nativeRemovedArray[0] = probe.trackableId;
                }

                return changes;
            }
        }
    }

    /// <summary>
    /// Container to wrap the native ARCore Environment Probe APIs.
    /// </summary>
    static class NativeApi
    {
        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_Construct(ColorSpace activeColorSpace);

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_Start();

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_Stop();

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_Destroy();

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_SetAutomaticPlacementEnabled();

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_TrySetEnvironmentTextureHDREnabled();

        [DllImport("UnityARCore")]
        internal static extern void UnityARCore_EnvironmentProbeProvider_GetChanges(out int numAdded, out int numUpdated, out int numRemoved, ref XREnvironmentProbe outProbe);
    }
}
