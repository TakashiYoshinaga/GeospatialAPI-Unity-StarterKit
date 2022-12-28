using System;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Descriptor for the <see cref="XRSessionSubsystem"/> describing capabilities which may vary by implementation.
    /// </summary>
    public sealed class XRSessionSubsystemDescriptor :
#if UNITY_2020_2_OR_NEWER
        SubsystemDescriptorWithProvider<XRSessionSubsystem, XRSessionSubsystem.Provider>
#else
        SubsystemDescriptor<XRSessionSubsystem>
#endif
    {
        /// <summary>
        /// Whether the session supports the update or installation of session software.
        /// </summary>
        public bool supportsInstall { get; private set; }

        /// <summary>
        /// Whether the session supports matching the AR frame rate to the Unity frame rate.
        /// </summary>
        public bool supportsMatchFrameRate { get; private set; }

        /// <summary>
        /// Used in conjunction with <see cref="RegisterDescriptor(Cinfo)"/> to register a provider.
        /// This should only be used by subsystem implementors.
        /// </summary>
        public struct Cinfo : IEquatable<Cinfo>
        {
            /// <summary>
            /// Whether the session supports the update or installation of session software.
            /// </summary>
            public bool supportsInstall { get; set; }

            /// <summary>
            /// Whether the session supports matching the AR frame rate to the Unity frame rate.
            /// </summary>
            public bool supportsMatchFrameRate { get; set; }

            /// <summary>
            /// The string used to identify this subsystem implementation.
            /// This will be available when enumerating the available descriptors at runtime.
            /// </summary>
            public string id { get; set; }

#if UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Specifies the provider implementation type to use for instantiation.
            /// </summary>
            /// <value>
            /// The provider implementation type to use for instantiation.
            /// </value>
            public Type providerType { get; set; }

            /// <summary>
            /// Specifies the <c>XRAnchorSubsystem</c>-derived type that forwards casted calls to its provider.
            /// </summary>
            /// <value>
            /// The type of the subsystem to use for instantiation. If null, <c>XRAnchorSubsystem</c> will be instantiated.
            /// </value>
            public Type subsystemTypeOverride { get; set; }
#endif

            /// <summary>
            /// The <c>Type</c> of the implementation.
            /// </summary>
#if UNITY_2020_2_OR_NEWER
            [Obsolete("XRSubsystem no longer supports the deprecated set of base classes for subsystems as of Unity 2020.2. Use providerType and, optionally, subsystemTypeOverride instead.", true)]
#endif
            public Type subsystemImplementationType { get; set; }

            /// <summary>
            /// Generates a hash code suitable for use in a <c>HashSet</c> or <c>Dictionary</c>.
            /// </summary>
            /// <returns>A hash code suitable for use in a <c>HashSet</c> or <c>Dictionary</c>.</returns>
            public override int GetHashCode()
            {
                unchecked
                {
                    int hash = HashCode.ReferenceHash(id);
#if UNITY_2020_2_OR_NEWER
                    hash = hash * 486187739 + HashCode.ReferenceHash(providerType);
                    hash = hash * 486187739 + HashCode.ReferenceHash(subsystemTypeOverride);
#else
                    hash = hash * 486187739 + HashCode.ReferenceHash(subsystemImplementationType);
#endif
                    hash = hash * 486187739 + supportsInstall.GetHashCode();
                    hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
                    return hash;
                }
            }

            /// <summary>
            /// Tests for equality.
            /// </summary>
            /// <param name="other">The other <see cref="Cinfo"/> to compare against.</param>
            /// <returns><c>true</c> if all fields in <paramref name="other"/> are equal to this <see cref="Cinfo"/>, otherwise <c>false</c>.</returns>
            public bool Equals(Cinfo other)
            {
                return
                    string.Equals(id, other.id) &&
#if UNITY_2020_2_OR_NEWER
                    ReferenceEquals(providerType, other.providerType) &&
                    ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
#else
                    ReferenceEquals(subsystemImplementationType, other.subsystemImplementationType) &&
#endif
                    supportsInstall == other.supportsInstall &&
                    supportsMatchFrameRate == other.supportsMatchFrameRate;
            }

            /// <summary>
            /// Tests for equality.
            /// </summary>
            /// <param name="obj">The <c>object</c> to test for equality.</param>
            /// <returns><c>true</c> if <paramref name="obj"/> is a <see cref="Cinfo"/> and <see cref="Equals(Cinfo)"/> returns <c>true</c>, otherwise <c>false</c>.</returns>
            public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);

            /// <summary>
            /// Tests for equality.
            /// </summary>
            /// <param name="lhs">The left-hand side of the comparison.</param>
            /// <param name="rhs">The right-hand side of the comparison.</param>
            /// <returns><c>true</c> if <paramref name="lhs"/> is equal to <paramref name="rhs"/>. Same as <see cref="Equals(Cinfo"/>.</returns>
            public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);

            /// <summary>
            /// Tests for inequality.
            /// </summary>
            /// <param name="lhs">The left-hand side of the comparison.</param>
            /// <param name="rhs">The right-hand side of the comparison.</param>
            /// <returns><c>true</c> if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>. Same as !<see cref="Equals(Cinfo"/>.</returns>
            public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
        }

        /// <summary>
        /// Register a subsystem implementation.
        /// This should only be used by subsystem implementors.
        /// </summary>
        /// <param name="cinfo">Information used to construct the descriptor.</param>
        public static void RegisterDescriptor(Cinfo cinfo)
        {
#if UNITY_2020_2_OR_NEWER
            SubsystemDescriptorStore.RegisterDescriptor(new XRSessionSubsystemDescriptor(cinfo));
#else
            SubsystemRegistration.CreateDescriptor(new XRSessionSubsystemDescriptor(cinfo));
#endif
        }

        XRSessionSubsystemDescriptor(Cinfo cinfo)
        {
            id = cinfo.id;
#if UNITY_2020_2_OR_NEWER
            providerType = cinfo.providerType;
            subsystemTypeOverride = cinfo.subsystemTypeOverride;
#else
            subsystemImplementationType = cinfo.subsystemImplementationType;
#endif
            supportsInstall = cinfo.supportsInstall;
            supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
        }
    }
}
