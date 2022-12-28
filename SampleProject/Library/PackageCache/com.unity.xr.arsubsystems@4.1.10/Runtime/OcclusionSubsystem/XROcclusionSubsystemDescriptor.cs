using System;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Constructor parameters for the <see cref="XROcclusionSubsystemDescriptor"/>.
    /// </summary>
    public struct XROcclusionSubsystemCinfo : IEquatable<XROcclusionSubsystemCinfo>
    {
        /// <summary>
        /// Specifies an identifier for the provider implementation of the subsystem.
        /// </summary>
        /// <value>
        /// The identifier for the provider implementation of the subsystem.
        /// </value>
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
        /// Specifies the provider implementation type to use for instantiation.
        /// </summary>
        /// <value>
        /// Specifies the provider implementation type to use for instantiation.
        /// </value>
#if UNITY_2020_2_OR_NEWER
        [Obsolete("XROcclusionSubsystem no longer supports the deprecated set of base classes for subsystems as of Unity 2020.2. Use providerType and, optionally, subsystemTypeOverride instead.", true)]
#endif
        public Type implementationType { get; set; }

        /// <summary>
        /// Specifies if the current subsystem supports human segmentation stencil image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports human segmentation stencil image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsHumanSegmentationStencilImage { get; set; }

        /// <summary>
        /// Specifies if the current subsystem supports human segmentation depth image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports human segmentation depth image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsHumanSegmentationDepthImage { get; set; }

        /// <summary>
        /// Query for whether the current subsystem supports environment depth image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth image. Otherwise, <c>false</c>.
        /// </value>
        public Func<bool> queryForSupportsEnvironmentDepthImage { get; set; }

        /// <summary>
        /// Specifies if the current subsystem supports environment depth confidence image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth confidence image. Otherwise, <c>false</c>.
        /// </value>
        public Func<bool> queryForSupportsEnvironmentDepthConfidenceImage { get; set; }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="XROcclusionSubsystemCinfo"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="XROcclusionSubsystemCinfo"/>, otherwise false.</returns>
        public bool Equals(XROcclusionSubsystemCinfo other)
        {
            return
                ReferenceEquals(id, other.id)
#if UNITY_2020_2_OR_NEWER
                && ReferenceEquals(providerType, other.providerType)
                && ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride)
#else
                && ReferenceEquals(implementationType, other.implementationType)
#endif
                && supportsHumanSegmentationStencilImage.Equals(other.supportsHumanSegmentationStencilImage)
                && supportsHumanSegmentationDepthImage.Equals(other.supportsHumanSegmentationDepthImage)
                && ReferenceEquals(queryForSupportsEnvironmentDepthImage, other.queryForSupportsEnvironmentDepthImage)
                && ReferenceEquals(queryForSupportsEnvironmentDepthConfidenceImage, other.queryForSupportsEnvironmentDepthConfidenceImage);
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="XROcclusionSubsystemCinfo"/> and
        /// <see cref="Equals(XROcclusionSubsystemCinfo)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(System.Object obj) => ((obj is XROcclusionSubsystemCinfo) && Equals((XROcclusionSubsystemCinfo)obj));

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(XROcclusionSubsystemCinfo)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(XROcclusionSubsystemCinfo lhs, XROcclusionSubsystemCinfo rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(XROcclusionSubsystemCinfo)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(XROcclusionSubsystemCinfo lhs, XROcclusionSubsystemCinfo rhs) => !lhs.Equals(rhs);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            int hashCode = 486187739;
            unchecked
            {
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(id);
#if UNITY_2020_2_OR_NEWER
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(providerType);
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(subsystemTypeOverride);
#else
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(implementationType);
#endif
                hashCode = (hashCode * 486187739) + supportsHumanSegmentationStencilImage.GetHashCode();
                hashCode = (hashCode * 486187739) + supportsHumanSegmentationDepthImage.GetHashCode();
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(queryForSupportsEnvironmentDepthImage);
                hashCode = (hashCode * 486187739) + HashCode.ReferenceHash(queryForSupportsEnvironmentDepthConfidenceImage);
            }
            return hashCode;
        }
    }

    /// <summary>
    /// Descriptor for the XROcclusionSubsystem.
    /// </summary>
    public class XROcclusionSubsystemDescriptor :
#if UNITY_2020_2_OR_NEWER
        SubsystemDescriptorWithProvider<XROcclusionSubsystem, XROcclusionSubsystem.Provider>
#else
        SubsystemDescriptor<XROcclusionSubsystem>
#endif
    {
        XROcclusionSubsystemDescriptor(XROcclusionSubsystemCinfo occlusionSubsystemCinfo)
        {
            id = occlusionSubsystemCinfo.id;
#if UNITY_2020_2_OR_NEWER
            providerType = occlusionSubsystemCinfo.providerType;
            subsystemTypeOverride = occlusionSubsystemCinfo.subsystemTypeOverride;
#else
            subsystemImplementationType = occlusionSubsystemCinfo.implementationType;
#endif
            supportsHumanSegmentationStencilImage = occlusionSubsystemCinfo.supportsHumanSegmentationStencilImage;
            supportsHumanSegmentationDepthImage = occlusionSubsystemCinfo.supportsHumanSegmentationDepthImage;
            m_QueryForSupportsEnvironmentDepthImage = occlusionSubsystemCinfo.queryForSupportsEnvironmentDepthImage;
            m_QueryForSupportsEnvironmentDepthConfidenceImage = occlusionSubsystemCinfo.queryForSupportsEnvironmentDepthConfidenceImage;
        }

        /// <summary>
        /// Query for whether environment depth is supported.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth image. Otherwise, <c>false</c>.
        /// </value>
        /// <remarks>
        /// On some platforms, this is a runtime check that requires an active session.
        /// </remarks>
        Func<bool> m_QueryForSupportsEnvironmentDepthImage;

        /// <summary>
        /// Query for whether environment depth confidence is supported.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth confidence image. Otherwise, <c>false</c>.
        /// </value>
        /// <remarks>
        /// On some platforms, this is a runtime check that requires an active session.
        /// </remarks>
        Func<bool> m_QueryForSupportsEnvironmentDepthConfidenceImage;

        /// <summary>
        /// Specifies if the current subsystem supports human segmentation stencil image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports human segmentation stencil image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsHumanSegmentationStencilImage { get; private set; }

        /// <summary>
        /// Specifies if the current subsystem supports human segmentation depth image.
        /// </summary>
        /// <value>
        /// <c>true</c> if the current subsystem supports human segmentation depth image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsHumanSegmentationDepthImage { get; private set; }

        /// <summary>
        /// Specifies if the current subsystem supports environment depth image.
        /// </summary>
        /// <remarks>
        /// > [!NOTE]
        /// > This is a runtime check which may require some initialization to determine support. During this period,
        /// > this property may return `false` for a time before becoming `true`.
        /// </remarks>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsEnvironmentDepthImage => (m_QueryForSupportsEnvironmentDepthImage == null) ? false : m_QueryForSupportsEnvironmentDepthImage();

        /// <summary>
        /// Specifies if the current subsystem supports environment depth confidence image.
        /// </summary>
        /// <remarks>
        /// > [!NOTE]
        /// > This is a runtime check which may require some initialization to determine support. During this period,
        /// > this property may return `false` for a time before becoming `true`.
        /// </remarks>
        /// <value>
        /// <c>true</c> if the current subsystem supports environment depth confidence image. Otherwise, <c>false</c>.
        /// </value>
        public bool supportsEnvironmentDepthConfidenceImage => (m_QueryForSupportsEnvironmentDepthConfidenceImage == null) ? false : m_QueryForSupportsEnvironmentDepthConfidenceImage();

        /// <summary>
        /// Creates the occlusion subsystem descriptor from the construction info.
        /// </summary>
        /// <param name="occlusionSubsystemCinfo">The occlusion subsystem descriptor constructor information.</param>
        internal static XROcclusionSubsystemDescriptor Create(XROcclusionSubsystemCinfo occlusionSubsystemCinfo)
        {
            if (String.IsNullOrEmpty(occlusionSubsystemCinfo.id))
            {
                throw new ArgumentException("Cannot create occlusion subsystem descriptor because id is invalid",
                                            "occlusionSubsystemCinfo");
            }

#if UNITY_2020_2_OR_NEWER
            if (occlusionSubsystemCinfo.providerType == null
                || !occlusionSubsystemCinfo.providerType.IsSubclassOf(typeof(XROcclusionSubsystem.Provider)))
            {
                throw new ArgumentException("Cannot create occlusion subsystem descriptor because providerType is invalid",
                                            "occlusionSubsystemCinfo");
            }

            if (occlusionSubsystemCinfo.subsystemTypeOverride == null
                && !occlusionSubsystemCinfo.subsystemTypeOverride.IsSubclassOf(typeof(XROcclusionSubsystem)))
            {
                throw new ArgumentException("Cannot create occlusion subsystem descriptor because subsystemTypeOverride is invalid",
                                            "occlusionSubsystemCinfo");
            }
#else
            if ((occlusionSubsystemCinfo.implementationType == null)
                || !occlusionSubsystemCinfo.implementationType.IsSubclassOf(typeof(XROcclusionSubsystem)))
            {
                throw new ArgumentException("Cannot create occlusion subsystem descriptor because implementationType is invalid",
                                            "occlusionSubsystemCinfo");
            }
#endif

            return new XROcclusionSubsystemDescriptor(occlusionSubsystemCinfo);
        }
    }
}
