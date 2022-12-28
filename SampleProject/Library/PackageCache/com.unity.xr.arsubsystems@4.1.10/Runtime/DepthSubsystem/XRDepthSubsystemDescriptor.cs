using System;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// The descriptor of the <see cref="XRDepthSubsystem"/> that shows which depth detection features are available on that XRSubsystem.
    /// </summary>
    /// <remarks>
    /// You use the <see cref="RegisterDescriptor"/> factory method along with <see cref="Cinfo"/> struct to construct and
    /// register one of these from each depth data provider.
    /// </remarks>
    /// <seealso cref="XRDepthSubsystem"/>
    public class XRDepthSubsystemDescriptor :
#if UNITY_2020_2_OR_NEWER
        SubsystemDescriptorWithProvider<XRDepthSubsystem, XRDepthSubsystem.Provider>
#else
        SubsystemDescriptor<XRDepthSubsystem>
#endif
    {
        /// <summary>
        /// Describes the capabilities of an <see cref="XRDepthSubsystem"/>.
        /// </summary>
        [Flags]
        public enum Capabilities
        {
            /// <summary>
            /// The subsystem does not support any capabilities.
            /// </summary>
            None = 0,

            /// <summary>
            /// The subsystem supports feature points (point cloud).
            /// </summary>
            FeaturePoints = 1 << 0,

            /// <summary>
            /// The subsystem supports a confidence value for each feature point.
            /// </summary>
            Confidence = 1 << 1,

            /// <summary>
            /// The subsystem provides unique identifiers for each feature point.
            /// </summary>
            UniqueIds = 1 << 2
        }

        /// <summary>
        /// This struct is an initializer for the creation of a <see cref="XRDepthSubsystemDescriptor"/>.
        /// </summary>
        /// <remarks>
        /// Depth data provider should create during <c>InitializeOnLoad</c> a descriptor using
        /// the params here to specify which of the XRDepthSubsystem features it supports.
        /// </remarks>
        public struct Cinfo : IEquatable<Cinfo>
        {
            /// <summary>
            /// The string identifier for a specific implementation.
            /// </summary>
            public string id;

#if UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Specifies the provider implementation type to use for instantiation.
            /// </summary>
            /// <value>
            /// The provider implementation type to use for instantiation.
            /// </value>
            public Type providerType { get; set; }

            /// <summary>
            /// Specifies the <c>XRDepthSubsystem</c>-derived type that forwards casted calls to its provider.
            /// </summary>
            /// <value>
            /// The type of the subsystem to use for instantiation. If null, <c>XRDepthSubsystem</c> will be instantiated.
            /// </value>
            public Type subsystemTypeOverride { get; set; }
#endif

            /// <summary>
            /// The concrete <c>Type</c> which will be instantiated if <c>Create</c> is called on this subsystem descriptor.
            /// </summary>
#if UNITY_2020_2_OR_NEWER
            [Obsolete("XRDepthSubsystem no longer supports the deprecated set of base classes for subsystems as of Unity 2020.2. Use providerType and, optionally, subsystemTypeOverride instead.", true)]
#endif
            public Type implementationType;

            /// <summary>
            /// Whether the subsystem supports feature points
            /// </summary>
            public bool supportsFeaturePoints
            {
                get => (capabilities & Capabilities.FeaturePoints) != 0;
                set
                {
                    if (value)
                    {
                        capabilities |= Capabilities.FeaturePoints;
                    }
                    else
                    {
                        capabilities &= ~Capabilities.FeaturePoints;
                    }
                }
            }

            /// <summary>
            /// Whether the subsystem supports per feature point confidence values.
            /// </summary>
            public bool supportsConfidence
            {
                get => (capabilities & Capabilities.Confidence) != 0;
                set
                {
                    if (value)
                    {
                        capabilities |= Capabilities.Confidence;
                    }
                    else
                    {
                        capabilities &= ~Capabilities.Confidence;
                    }
                }
            }

            /// <summary>
            /// Whether the subsystem supports per-feature point identifiers.
            /// </summary>
            public bool supportsUniqueIds
            {
                get => (capabilities & Capabilities.UniqueIds) != 0;
                set
                {
                    if (value)
                    {
                        capabilities |= Capabilities.UniqueIds;
                    }
                    else
                    {
                        capabilities &= ~Capabilities.UniqueIds;
                    }
                }
            }

            /// <summary>
            /// The capabilities of the subsystem implementation.
            /// </summary>
            Capabilities capabilities { get; set; }

            /// <summary>
            /// Tests for equality.
            /// </summary>
            /// <param name="other">The other <see cref="Cinfo"/> to compare against.</param>
            /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="Cinfo"/>, otherwise false.</returns>
            public bool Equals(Cinfo other)
            {
                return
                    capabilities == other.capabilities &&
                    id == other.id &&
#if UNITY_2020_2_OR_NEWER
                    providerType == other.providerType &&
                    subsystemTypeOverride == other.subsystemTypeOverride;
#else
                    implementationType == other.implementationType;
#endif
            }

            /// <summary>
            /// Tests for equality.
            /// </summary>
            /// <param name="obj">The `object` to compare against.</param>
            /// <returns>`True` if <paramref name="obj"/> is of type <see cref="Cinfo"/> and
            /// <see cref="Equals(Cinfo)"/> also returns `true`; otherwise `false`.</returns>
            public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);

            /// <summary>
            /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
            /// </summary>
            /// <returns>A hash code generated from this object's fields.</returns>
            public override int GetHashCode()
            {
                unchecked
                {
                    int hashCode = HashCode.ReferenceHash(id);
#if UNITY_2020_2_OR_NEWER
                    hashCode = 486187739 * hashCode + HashCode.ReferenceHash(providerType);
                    hashCode = 486187739 * hashCode + HashCode.ReferenceHash(subsystemTypeOverride);
#else
                    hashCode = 486187739 * hashCode + HashCode.ReferenceHash(implementationType);
#endif
                    hashCode = 486187739 * hashCode + ((int)capabilities).GetHashCode();
                    return hashCode;
                }
            }

            /// <summary>
            /// Tests for equality. Same as <see cref="Equals(Cinfo)"/>.
            /// </summary>
            /// <param name="lhs">The left-hand side of the comparison.</param>
            /// <param name="rhs">The right-hand side of the comparison.</param>
            /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
            public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);

            /// <summary>
            /// Tests for inequality. Same as `!`<see cref="Equals(Cinfo)"/>.
            /// </summary>
            /// <param name="lhs">The left-hand side of the comparison.</param>
            /// <param name="rhs">The right-hand side of the comparison.</param>
            /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
            public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
        }

        XRDepthSubsystemDescriptor(Cinfo descriptorParams)
        {
            id = descriptorParams.id;
#if UNITY_2020_2_OR_NEWER
            providerType = descriptorParams.providerType;
            subsystemTypeOverride = descriptorParams.subsystemTypeOverride;
#else
            subsystemImplementationType = descriptorParams.implementationType;
#endif
            supportsFeaturePoints = descriptorParams.supportsFeaturePoints;
            supportsUniqueIds = descriptorParams.supportsUniqueIds;
            supportsConfidence = descriptorParams.supportsConfidence;
        }

        /// <summary>
        /// Whether the implementation supports feature points.
        /// </summary>
        public bool supportsFeaturePoints { get; private set; }

        /// <summary>
        /// Whether the implementation supports per feature point identifiers.
        /// </summary>
        public bool supportsUniqueIds { get; private set; }

        /// <summary>
        /// Whether the implementation supports per feature point confidence values.
        /// </summary>
        public bool supportsConfidence { get; private set; }

        /// <summary>
        /// Registers a subsystem implementation with the <c>SubsystemManager</c>.
        /// </summary>
        /// <param name="descriptorParams"></param>
        public static void RegisterDescriptor(Cinfo descriptorParams)
        {
            var descriptor = new XRDepthSubsystemDescriptor(descriptorParams);
#if UNITY_2020_2_OR_NEWER
            SubsystemDescriptorStore.RegisterDescriptor(descriptor);
#else
            SubsystemRegistration.CreateDescriptor(descriptor);
#endif
        }
    }
}
