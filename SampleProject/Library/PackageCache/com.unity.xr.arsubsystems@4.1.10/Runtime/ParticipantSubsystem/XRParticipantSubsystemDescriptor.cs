using System;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// The descriptor of the <see cref="XRParticipantSubsystem"/> that shows which features are available on that XRSubsystem.
    /// </summary>
    /// <remarks>
    /// You use <see cref="Register{T}"/> register a subsystem with the global <c>SubsystemManager</c>.
    /// </remarks>
    public sealed class XRParticipantSubsystemDescriptor :
#if UNITY_2020_2_OR_NEWER
        SubsystemDescriptorWithProvider<XRParticipantSubsystem, XRParticipantSubsystem.Provider>
#else
        SubsystemDescriptor<XRParticipantSubsystem>
#endif
    {
        /// <summary>
        /// The capabilities of a particular <see cref="XRParticipantSubsystem"/>. This is typically
        /// used to query a subsystem for capabilities that may vary by platform or implementation.
        /// </summary>
        [Flags]
        public enum Capabilities
        {
            /// <summary>
            /// The <see cref="XRParticipantSubsystem"/> implementation has no
            /// additional capabilities other than the basic, required functionality.
            /// </summary>
            None = 0,
        }

        /// <summary>
        /// The capabilities provided by this implementation.
        /// </summary>
        public Capabilities capabilities { get; private set; }

        /// <summary>
        /// Register a provider implementation.
        /// This should only be used by subsystem implementors.
        /// </summary>
        /// <param name="subsystemId">The name of the specific subsystem implementation.</param>
        /// <param name="capabilities">The <see cref="Capabilities"/> of the specific subsystem implementation.</param>
        /// <typeparam name="T">The concrete type derived from <see cref="XRParticipantSubsystem"/> being registered.</typeparam>
        public static void Register<T>(string subsystemId, Capabilities capabilities)
#if UNITY_2020_2_OR_NEWER
            where T : XRParticipantSubsystem.Provider
#else
            where T : XRParticipantSubsystem
#endif
        {
#if UNITY_2020_2_OR_NEWER
            SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(T), null, capabilities));
#else
            SubsystemRegistration.CreateDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(T), null, capabilities));
#endif
        }

#if UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Register a provider implementation and subsystem override.
        /// This should only be used by subsystem implementors.
        /// </summary>
        /// <param name="subsystemId">The name of the specific subsystem implementation.</param>
        /// <param name="capabilities">The <see cref="Capabilities"/> of the specific subsystem implementation.</param>
        /// <typeparam name="T">The concrete type derived from <see cref="XRParticipantSubsystem"/> being registered.</typeparam>
        public static void Register<TProvider, TSubsystemOverride>(string subsystemId, Capabilities capabilities)
            where TProvider : XRParticipantSubsystem.Provider
            where TSubsystemOverride : XRParticipantSubsystem
        {
            SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
        }
#endif

        XRParticipantSubsystemDescriptor(string subsystemId, Type providerType, Type subsystemTypeOverride, Capabilities capabilities)
        {
            id = subsystemId;
#if UNITY_2020_2_OR_NEWER
            this.providerType = providerType;
            this.subsystemTypeOverride = subsystemTypeOverride;
#else
            subsystemImplementationType = providerType;
#endif
            this.capabilities = capabilities;
        }
    }
}
