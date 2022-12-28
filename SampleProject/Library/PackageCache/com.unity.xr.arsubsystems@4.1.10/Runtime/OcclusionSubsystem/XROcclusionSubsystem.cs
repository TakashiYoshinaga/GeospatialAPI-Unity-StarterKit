using System;
using System.Collections.Generic;
using Unity.Collections;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Defines an interface for interacting with occlusion functionality.
    /// </summary>
#if UNITY_2020_2_OR_NEWER
    public class XROcclusionSubsystem
        : SubsystemWithProvider<XROcclusionSubsystem, XROcclusionSubsystemDescriptor, XROcclusionSubsystem.Provider>
#else
    public abstract class XROcclusionSubsystem
        : XRSubsystem<XROcclusionSubsystemDescriptor>
#endif
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// The implementation specific provider of occlusion functionality.
        /// </summary>
        /// <value>
        /// The implementation specific provider of occlusion functionality.
        /// </value>
        protected Provider provider { get; }
#endif

        /// <summary>
        /// Specifies the human segmentation stencil mode.
        /// </summary>
        /// <value>
        /// The human segmentation stencil mode.
        /// </value>
        /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation stencil mode to
        /// enabled if the implementation does not support human segmentation.</exception>
        public HumanSegmentationStencilMode requestedHumanStencilMode
        {
            get => provider.requestedHumanStencilMode;
            set => provider.requestedHumanStencilMode = value;
        }

        /// <summary>
        /// Get the current segmentation stencil mode in use by the subsystem.
        /// </summary>
        public HumanSegmentationStencilMode currentHumanStencilMode => provider.currentHumanStencilMode;

        /// <summary>
        /// Specifies the human segmentation depth mode.
        /// </summary>
        /// <value>
        /// The human segmentation depth mode.
        /// </value>
        /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation depth mode to
        /// enabled if the implementation does not support human segmentation.</exception>
        public HumanSegmentationDepthMode requestedHumanDepthMode
        {
            get => provider.requestedHumanDepthMode;
            set => provider.requestedHumanDepthMode = value;
        }

        /// <summary>
        /// Get the human segmentation depth mode currently in use by the provider.
        /// </summary>
        public HumanSegmentationDepthMode currentHumanDepthMode => provider.currentHumanDepthMode;

        /// <summary>
        /// Specifies the environment depth mode.
        /// </summary>
        /// <value>
        /// The environment depth mode.
        /// </value>
        public EnvironmentDepthMode requestedEnvironmentDepthMode
        {
            get => provider.requestedEnvironmentDepthMode;
            set => provider.requestedEnvironmentDepthMode = value;
        }

        /// <summary>
        /// Get the environment depth mode currently in use by the provider.
        /// </summary>
        public EnvironmentDepthMode currentEnvironmentDepthMode => provider.currentEnvironmentDepthMode;

        /// <summary>
        /// Specifies the requested occlusion preference mode.
        /// </summary>
        /// <value>
        /// The requested occlusion preference mode.
        /// </value>
        public OcclusionPreferenceMode requestedOcclusionPreferenceMode
        {
            get => provider.requestedOcclusionPreferenceMode;
            set => provider.requestedOcclusionPreferenceMode = value;
        }

        /// <summary>
        /// Get the occlusion preference mode currently in use by the provider.
        /// </summary>
        public OcclusionPreferenceMode currentOcclusionPreferenceMode => provider.currentOcclusionPreferenceMode;


        /// <summary>
        /// Construct the subsystem by creating the functionality provider.
        /// </summary>
        public XROcclusionSubsystem()
        {
#if !UNITY_2020_2_OR_NEWER
            provider = CreateProvider();
#endif
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Start the subsystem by starting the provider.
        /// </summary>
        protected sealed override void OnStart() => provider.Start();

        /// <summary>
        /// Stop the subsystem by stopping the provider.
        /// </summary>
        protected sealed override void OnStop() => provider.Stop();

        /// <summary>
        /// Destroy the subsystem by destroying the provider.
        /// </summary>
        protected sealed override void OnDestroyed() => provider.Destroy();
#endif

        /// <summary>
        /// Gets the human stencil texture descriptor.
        /// </summary>
        /// <param name="humanStencilDescriptor">The human stencil texture descriptor to be populated, if available
        /// from the provider.</param>
        /// <returns>
        /// <c>true</c> if the human stencil texture descriptor is available and is returned. Otherwise, <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human stencil
        /// texture.</exception>
        public bool TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
            => provider.TryGetHumanStencil(out humanStencilDescriptor);

        /// <summary>
        /// Tries to acquire the latest human stencil CPU image.
        /// </summary>
        /// <param name="cpuImage">If this method returns `true`, an acquired <see cref="XRCpuImage"/>. The CPU image
        /// must be disposed by the caller.</param>
        /// <returns>Returns `true` if an <see cref="XRCpuImage"/> was successfully acquired.
        /// Returns `false` otherwise.</returns>
        public bool TryAcquireHumanStencilCpuImage(out XRCpuImage cpuImage)
        {
            if (provider.humanStencilCpuImageApi != null && provider.TryAcquireHumanStencilCpuImage(out var cinfo))
            {
                cpuImage = new XRCpuImage(provider.humanStencilCpuImageApi, cinfo);
                return true;
            }
            else
            {
                cpuImage = default;
                return false;
            }
        }

        /// <summary>
        /// Gets the human depth texture descriptor.
        /// </summary>
        /// <param name="humanDepthDescriptor">The human depth texture descriptor to be populated, if available from
        /// the provider.</param>
        /// <returns>
        /// <c>true</c> if the human depth texture descriptor is available and is returned. Otherwise, <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human depth
        /// texture.</exception>
        public bool TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
            => provider.TryGetHumanDepth(out humanDepthDescriptor);

        /// <summary>
        /// Tries to acquire the latest human depth CPU image.
        /// </summary>
        /// <param name="cpuImage">If this method returns `true`, an acquired <see cref="XRCpuImage"/>. The CPU image
        /// must be disposed by the caller.</param>
        /// <returns>Returns `true` if an <see cref="XRCpuImage"/> was successfully acquired.
        /// Returns `false` otherwise.</returns>
        public bool TryAcquireHumanDepthCpuImage(out XRCpuImage cpuImage)
        {
            if (provider.humanDepthCpuImageApi != null && provider.TryAcquireHumanDepthCpuImage(out var cinfo))
            {
                cpuImage = new XRCpuImage(provider.humanDepthCpuImageApi, cinfo);
                return true;
            }
            else
            {
                cpuImage = default;
                return false;
            }
        }

        /// <summary>
        /// Gets the environment depth texture descriptor.
        /// </summary>
        /// <param name="environmentDepthDescriptor">The environment depth texture descriptor to be populated, if
        /// available from the provider.</param>
        /// <returns>
        /// <c>true</c> if the environment depth texture descriptor is available and is returned. Otherwise,
        /// <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment depth
        /// texture.</exception>
        public bool TryGetEnvironmentDepth(out XRTextureDescriptor environmentDepthDescriptor)
            => provider.TryGetEnvironmentDepth(out environmentDepthDescriptor);

        /// <summary>
        /// Tries to acquire the latest environment depth CPU image.
        /// </summary>
        /// <param name="cpuImage">If this method returns `true`, an acquired <see cref="XRCpuImage"/>. The CPU image
        ///     must be disposed by the caller.</param>
        /// <returns>Returns `true` if an <see cref="XRCpuImage"/> was successfully acquired.
        ///     Returns `false` otherwise.</returns>
        public bool TryAcquireEnvironmentDepthCpuImage(out XRCpuImage cpuImage)
        {
            if (provider.environmentDepthCpuImageApi != null && provider.TryAcquireEnvironmentDepthCpuImage(out var cinfo))
            {
                cpuImage = new XRCpuImage(provider.environmentDepthCpuImageApi, cinfo);
                return true;
            }
            else
            {
                cpuImage = default;
                return false;
            }
        }

        /// <summary>
        /// Gets the environment depth confidence texture descriptor.
        /// </summary>
        /// <param name="environmentDepthConfidenceDescriptor">The environment depth confidence texture descriptor to
        /// be populated, if available from the provider.</param>
        /// <returns>
        /// <c>true</c> if the environment depth confidence texture descriptor is available and is returned. Otherwise,
        /// <c>false</c>.
        /// </returns>
        /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment depth
        /// confidence texture.</exception>
        public bool TryGetEnvironmentDepthConfidence(out XRTextureDescriptor environmentDepthConfidenceDescriptor)
            => provider.TryGetEnvironmentDepthConfidence(out environmentDepthConfidenceDescriptor);

        /// <summary>
        /// Tries to acquire the latest environment depth confidence CPU image.
        /// </summary>
        /// <param name="cpuImage">If this method returns `true`, an acquired <see cref="XRCpuImage"/>. The CPU image
        ///     must be disposed by the caller.</param>
        /// <returns>Returns `true` if an <see cref="XRCpuImage"/> was successfully acquired.
        ///     Returns `false` otherwise.</returns>
        public bool TryAcquireEnvironmentDepthConfidenceCpuImage(out XRCpuImage cpuImage)
        {
            if (provider.environmentDepthConfidenceCpuImageApi != null && provider.TryAcquireEnvironmentDepthConfidenceCpuImage(out var cinfo))
            {
                cpuImage = new XRCpuImage(provider.environmentDepthConfidenceCpuImageApi, cinfo);
                return true;
            }
            else
            {
                cpuImage = default;
                return false;
            }
        }

        /// <summary>
        /// Gets the occlusion texture descriptors associated with the current AR frame.
        /// </summary>
        /// <param name="allocator">The allocator to use when creating the returned <c>NativeArray</c>.</param>
        /// <returns>An array of texture descriptors.</returns>
        /// <remarks>
        /// The caller owns the returned <c>NativeArray</c> and is responsible for calling <c>Dispose</c> on it.
        /// </remarks>
        public NativeArray<XRTextureDescriptor> GetTextureDescriptors(Allocator allocator)
            => provider.GetTextureDescriptors(default(XRTextureDescriptor), allocator);

        /// <summary>
        /// Get the enabled and disabled shader keywords for the material.
        /// </summary>
        /// <param name="enabledKeywords">The keywords to enable for the material.</param>
        /// <param name="disabledKeywords">The keywords to disable for the material.</param>
        public void GetMaterialKeywords(out List<string> enabledKeywords, out List<string> disabledKeywords)
            => provider.GetMaterialKeywords(out enabledKeywords, out disabledKeywords);

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Create the implementation specific functionality provider.
        /// </summary>
        /// <returns>
        /// The implementation specific functionality provider.
        /// </returns>
        protected abstract Provider CreateProvider();
#endif

        /// <summary>
        /// Register the descriptor for the occlusion subsystem implementation.
        /// </summary>
        /// <param name="occlusionSubsystemCinfo">The occlusion subsystem implementation construction information.
        /// </param>
        /// <returns>
        /// <c>true</c> if the descriptor was registered. Otherwise, <c>false</c>.
        /// </returns>
        public static bool Register(XROcclusionSubsystemCinfo occlusionSubsystemCinfo)
        {
            XROcclusionSubsystemDescriptor occlusionSubsystemDescriptor = XROcclusionSubsystemDescriptor.Create(occlusionSubsystemCinfo);
#if UNITY_2020_2_OR_NEWER
            SubsystemDescriptorStore.RegisterDescriptor(occlusionSubsystemDescriptor);
            return true;
#else
            return SubsystemRegistration.CreateDescriptor(occlusionSubsystemDescriptor);
#endif
        }

        /// <summary>
        /// The provider which will service the <see cref="XROcclusionSubsystem"/>.
        /// </summary>
        public abstract class Provider
#if UNITY_2020_2_OR_NEWER
            : SubsystemProvider<XROcclusionSubsystem>
#endif
        {
#if !UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Method to be implemented by the provider to start the functionality.
            /// </summary>
            public virtual void Start() { }

            /// <summary>
            /// Method to be implemented by the provider to stop the functionality.
            /// </summary>
            public virtual void Stop() { }

            /// <summary>
            /// Method to be implemented by the provider to destroy itself and release any resources.
            /// </summary>
            public virtual void Destroy() { }
#endif

            /// <summary>
            /// Property to be implemented by the provider to get/set the requested human segmentation stencil mode.
            /// </summary>
            /// <value>
            /// The requested human segmentation stencil mode.
            /// </value>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation stencil mode
            /// to enabled if the implementation does not support human segmentation.</exception>
            public virtual HumanSegmentationStencilMode requestedHumanStencilMode
            {
                get => HumanSegmentationStencilMode.Disabled;
                set
                {
                    if (value.Enabled())
                    {
                        throw new NotSupportedException("Setting human segmentation stencil to enabled is not "
                                                        + "supported by this implementation");
                    }
                }
            }

            /// <summary>
            /// Property to be implemented by the provider to get the segmentation stencil mode currently in use.
            /// </summary>
            public virtual HumanSegmentationStencilMode currentHumanStencilMode => HumanSegmentationStencilMode.Disabled;

            /// <summary>
            /// Property to be implemented by the provider to get/set the requested human segmentation depth mode.
            /// </summary>
            /// <value>
            /// The requested human segmentation depth mode.
            /// </value>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation depth mode
            /// to enabled if the implementation does not support human segmentation.</exception>
            public virtual HumanSegmentationDepthMode requestedHumanDepthMode
            {
                get => HumanSegmentationDepthMode.Disabled;
                set
                {
                    if (value.Enabled())
                    {
                        throw new NotSupportedException("Setting human segmentation depth to enabled is not supported "
                                                        + "by this implementation");
                    }
                }
            }

            /// <summary>
            /// Property to be implemented by the provider to get the human segmentation depth mode currently in use.
            /// </summary>
            public virtual HumanSegmentationDepthMode currentHumanDepthMode => HumanSegmentationDepthMode.Disabled;

            /// <summary>
            /// Property to be implemented by the provider to get/set the environment depth mode.
            /// </summary>
            /// <value>
            /// The requested environment depth mode.
            /// </value>
            public virtual EnvironmentDepthMode requestedEnvironmentDepthMode
            {
                get => EnvironmentDepthMode.Disabled;
                set {}
            }

            /// <summary>
            /// Property to be implemented by the provider to get the environment depth mode currently in use.
            /// </summary>
            public virtual EnvironmentDepthMode currentEnvironmentDepthMode => EnvironmentDepthMode.Disabled;

            /// <summary>
            /// Specifies the requested occlusion preference mode.
            /// </summary>
            /// <value>
            /// The requested occlusion preference mode.
            /// </value>
            public virtual OcclusionPreferenceMode requestedOcclusionPreferenceMode
            {
                get => default(OcclusionPreferenceMode);
                set {}
            }

            /// <summary>
            /// Get the occlusion preference mode currently in use by the provider.
            /// </summary>
            public virtual OcclusionPreferenceMode currentOcclusionPreferenceMode => default(OcclusionPreferenceMode);

            /// <summary>
            /// Method to be implemented by the provider to get the human stencil texture descriptor.
            /// </summary>
            /// <param name="humanStencilDescriptor">The human stencil texture descriptor to be populated, if
            /// available.</param>
            /// <returns>
            /// <c>true</c> if the human stencil texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// stencil texture.</exception>
            public virtual bool TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
                => throw new NotSupportedException("human stencil texture is not supported by this implementation");

            /// <summary>
            /// Tries to acquire the latest human stencil CPU image.
            /// </summary>
            /// <param name="cinfo">If this method returns `true`, this should be populated with construction
            /// information for an <see cref="XRCpuImage"/>.</param>
            /// <returns>Returns `true` if the human stencil CPU image was acquired. Returns `false` otherwise.</returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// stencil CPU images.</exception>
            public virtual bool TryAcquireHumanStencilCpuImage(out XRCpuImage.Cinfo cinfo)
                => throw new NotSupportedException("Human stencil CPU images are not supported by this implementation.");

            /// <summary>
            /// The <see cref="XRCpuImage.Api"/> for interacting with an <see cref="XRCpuImage"/> acquired with
            /// <see cref="TryAcquireHumanStencilCpuImage"/>.
            /// </summary>
            public virtual XRCpuImage.Api humanStencilCpuImageApi => null;

            /// <summary>
            /// Method to be implemented by the provider to get the human depth texture descriptor.
            /// </summary>
            /// <param name="humanDepthDescriptor">The human depth texture descriptor to be populated, if available.
            /// </param>
            /// <returns>
            /// <c>true</c> if the human depth texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// depth texture.</exception>
            public virtual bool TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
                => throw new NotSupportedException("human depth texture is not supported by this implementation");

            /// <summary>
            /// Tries to acquire the latest human depth CPU image.
            /// </summary>
            /// <param name="cinfo">If this method returns `true`, this should be populated with construction
            /// information for an <see cref="XRCpuImage"/>.</param>
            /// <returns>Returns `true` if the human depth CPU image was acquired. Returns `false` otherwise.</returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support human
            /// depth CPU images.</exception>
            public virtual bool TryAcquireHumanDepthCpuImage(out XRCpuImage.Cinfo cinfo)
                => throw new NotSupportedException("Human depth CPU images are not supported by this implementation.");

            /// <summary>
            /// The <see cref="XRCpuImage.Api"/> for interacting with an <see cref="XRCpuImage"/> acquired with
            /// <see cref="TryAcquireHumanDepthCpuImage"/>.
            /// </summary>
            public virtual XRCpuImage.Api humanDepthCpuImageApi => null;

            /// <summary>
            /// Method to be implemented by the provider to get the environment depth texture descriptor.
            /// </summary>
            /// <param name="environmentDepthDescriptor">The environment depth texture descriptor to be populated, if
            /// available.</param>
            /// <returns>
            /// <c>true</c> if the environment depth texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment
            /// depth texture.</exception>
            public virtual bool TryGetEnvironmentDepth(out XRTextureDescriptor environmentDepthDescriptor)
                => throw new NotSupportedException("environment depth texture is not supported by this implementation");

            /// <summary>
            /// Tries to acquire the latest environment depth CPU image.
            /// </summary>
            /// <param name="cinfo">If this method returns `true`, this should be populated with construction
            ///     information for an <see cref="XRCpuImage"/>.</param>
            /// <returns>Returns `true` if the environment depth CPU image was acquired.
            ///     Returns `false` otherwise.</returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment
            ///     CPU images.</exception>
            public virtual bool TryAcquireEnvironmentDepthCpuImage(out XRCpuImage.Cinfo cinfo)
                => throw new NotSupportedException("Environment depth CPU images are not supported by this implementation.");

            /// <summary>
            /// The <see cref="XRCpuImage.Api"/> for interacting with an <see cref="XRCpuImage"/> acquired with
            /// <see cref="TryAcquireEnvironmentDepthCpuImage"/>.
            /// </summary>
            public virtual XRCpuImage.Api environmentDepthCpuImageApi => null;

            /// <summary>
            /// Method to be implemented by the provider to get the environment depth confidence texture descriptor.
            /// </summary>
            /// <param name="environmentDepthConfidenceDescriptor">The environment depth texture descriptor to be
            /// populated, if available.</param>
            /// <returns>
            /// <c>true</c> if the environment depth confidence texture descriptor is available and is returned.
            /// Otherwise, <c>false</c>.
            /// </returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment
            /// depth confidence texture.</exception>
            public virtual bool TryGetEnvironmentDepthConfidence(out XRTextureDescriptor environmentDepthConfidenceDescriptor)
                => throw new NotSupportedException("environment depth confidence texture is not supported by this implementation");

            /// <summary>
            /// Tries to acquire the latest environment depth confidence CPU image.
            /// </summary>
            /// <param name="cinfo">If this method returns `true`, this should be populated with construction
            ///     information for an <see cref="XRCpuImage"/>.</param>
            /// <returns>Returns `true` if the environment depth confidence CPU image was acquired.
            ///     Returns `false` otherwise.</returns>
            /// <exception cref="System.NotSupportedException">Thrown if the implementation does not support environment
            ///     depth confidence CPU images.</exception>
            public virtual bool TryAcquireEnvironmentDepthConfidenceCpuImage(out XRCpuImage.Cinfo cinfo)
                => throw new NotSupportedException("Environment depth CPU images are not supported by this implementation.");

            /// <summary>
            /// The <see cref="XRCpuImage.Api"/> for interacting with an <see cref="XRCpuImage"/> acquired with
            /// <see cref="TryAcquireEnvironmentDepthConfidenceCpuImage"/>.
            /// </summary>
            public virtual XRCpuImage.Api environmentDepthConfidenceCpuImageApi => null;

            /// <summary>
            /// Method to be implemented by the provider to get the occlusion texture descriptors associated with the
            /// current AR frame.
            /// </summary>
            /// <param name="defaultDescriptor">The default descriptor value.</param>
            /// <param name="allocator">The allocator to use when creating the returned <c>NativeArray</c>.</param>
            /// <returns>An array of the occlusion texture descriptors.</returns>
            public virtual NativeArray<XRTextureDescriptor> GetTextureDescriptors(XRTextureDescriptor defaultDescriptor,
                                                                                  Allocator allocator)
                => new NativeArray<XRTextureDescriptor>(0, allocator);

            /// <summary>
            /// Method to be implemented by the provider to get the enabled and disabled shader keywords for the
            /// material.
            /// </summary>
            /// <param name="enabledKeywords">The keywords to enable for the material.</param>
            /// <param name="disabledKeywords">The keywords to disable for the material.</param>
            public virtual void GetMaterialKeywords(out List<string> enabledKeywords, out List<string> disabledKeywords)
            {
                enabledKeywords = null;
                disabledKeywords = null;
            }
        }
    }
}
