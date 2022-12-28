using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Collections;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// This subsystem provides implementing functionality for the <c>XROcclusionSubsystem</c> class.
    /// </summary>
    [Preserve]
    class ARKitOcclusionSubsystem : XROcclusionSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Create the implementation provider.
        /// </summary>
        /// <returns>
        /// The implementation provider.
        /// </returns>
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        /// <summary>
        /// Register the ARKit occlusion subsystem if iOS and not the editor.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void Register()
        {
            if (!Api.AtLeast13_0())
                return;

            const string k_SubsystemId = "ARKit-Occlusion";

            bool supportsHumanSegmentationStencilImage = NativeApi.UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil();
            bool supportsHumanSegmentationDepthImage = NativeApi.UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth();

            XROcclusionSubsystemCinfo occlusionSubsystemCinfo = new XROcclusionSubsystemCinfo()
            {
                id = k_SubsystemId,
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitOcclusionSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitOcclusionSubsystem),
#else
                implementationType = typeof(ARKitOcclusionSubsystem),
#endif
                supportsHumanSegmentationStencilImage = supportsHumanSegmentationStencilImage,
                supportsHumanSegmentationDepthImage = supportsHumanSegmentationDepthImage,
                queryForSupportsEnvironmentDepthImage = NativeApi.UnityARKit_OcclusionProvider_DoesSupportEnvironmentDepth,
                queryForSupportsEnvironmentDepthConfidenceImage =  NativeApi.UnityARKit_OcclusionProvider_DoesSupportEnvironmentDepth,
            };

            XROcclusionSubsystem.Register(occlusionSubsystemCinfo);
        }

        /// <summary>
        /// The implementation provider class.
        /// </summary>
        class ARKitProvider : XROcclusionSubsystem.Provider
        {
            /// <summary>
            /// The shader property name for the human segmentation stencil texture.
            /// </summary>
            /// <value>
            /// The shader property name for the human segmentation stencil texture.
            /// </value>
            const string k_TextureHumanStencilPropertyName = "_HumanStencil";

            /// <summary>
            /// The shader property name for the human segmentation depth texture.
            /// </summary>
            /// <value>
            /// The shader property name for the human segmentation depth texture.
            /// </value>
            const string k_TextureHumanDepthPropertyName = "_HumanDepth";

            /// <summary>
            /// The shader property name for the environment depth texture.
            /// </summary>
            /// <value>
            /// The shader property name for the environment depth texture.
            /// </value>
            const string k_TextureEnvironmentDepthPropertyName = "_EnvironmentDepth";

            /// <summary>
            /// The shader property name for the environment depth confidence texture.
            /// </summary>
            /// <value>
            /// The shader property name for the environment depth confidence texture.
            /// </value>
            const string k_TextureEnvironmentDepthConfidencePropertyName = "_EnvironmentDepthConfidence";

            /// <summary>
            /// The shader keyword for enabling human segmentation rendering.
            /// </summary>
            /// <value>
            /// The shader keyword for enabling human segmentation rendering.
            /// </value>
            const string k_HumanEnabledMaterialKeyword = "ARKIT_HUMAN_SEGMENTATION_ENABLED";

            /// <summary>
            /// The shader keyword for enabling environment depth rendering.
            /// </summary>
            /// <value>
            /// The shader keyword for enabling environment depth rendering.
            /// </value>
            const string k_EnvironmentDepthEnabledMaterialKeyword = "ARKIT_ENVIRONMENT_DEPTH_ENABLED";

            /// <summary>
            /// The shader property name identifier for the human segmentation stencil texture.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the human segmentation stencil texture.
            /// </value>
            static readonly int k_TextureHumanStencilPropertyId = Shader.PropertyToID(k_TextureHumanStencilPropertyName);

            /// <summary>
            /// The shader property name identifier for the human segmentation depth texture.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the human segmentation depth texture.
            /// </value>
            static readonly int k_TextureHumanDepthPropertyId = Shader.PropertyToID(k_TextureHumanDepthPropertyName);

            /// <summary>
            /// The shader property name identifier for the environment depth texture.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the environment depth texture.
            /// </value>
            static readonly int k_TextureEnvironmentDepthPropertyId = Shader.PropertyToID(k_TextureEnvironmentDepthPropertyName);

            /// <summary>
            /// The shader property name identifier for the environment depth texture.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the environment depth texture.
            /// </value>
            static readonly int k_TextureEnvironmentDepthConfidencePropertyId = Shader.PropertyToID(k_TextureEnvironmentDepthConfidencePropertyName);

            /// <summary>
            /// The shader keywords for enabling human segmentation rendering.
            /// </summary>
            /// <value>
            /// The shader keywords for enabling human segmentation rendering.
            /// </value>
            static readonly List<string> m_HumanEnabledMaterialKeywords = new List<string>() {k_HumanEnabledMaterialKeyword};

            /// <summary>
            /// The shader keywords for enabling environment depth rendering.
            /// </summary>
            /// <value>
            /// The shader keywords for enabling environment depth rendering.
            /// </value>
            static readonly List<string> m_EnvironmentDepthEnabledMaterialKeywords = new List<string>() {k_EnvironmentDepthEnabledMaterialKeyword};

            /// <summary>
            /// The shader keywords for enabling environment depth rendering.
            /// </summary>
            /// <value>
            /// The shader keywords for enabling environment depth rendering.
            /// </value>
            static readonly List<string> m_AllDisabledMaterialKeywords = new List<string>() {k_HumanEnabledMaterialKeyword, k_EnvironmentDepthEnabledMaterialKeyword};

            /// <summary>
            /// The shader keywords for enabling environment depth rendering.
            /// </summary>
            OcclusionPreferenceMode m_OcclusionPreferenceMode;

            /// <summary>
            /// Construct the implementation provider.
            /// </summary>
            public ARKitProvider() => NativeApi.UnityARKit_OcclusionProvider_Construct(k_TextureHumanStencilPropertyId,
                                                                                       k_TextureHumanDepthPropertyId,
                                                                                       k_TextureEnvironmentDepthPropertyId,
                                                                                       k_TextureEnvironmentDepthConfidencePropertyId);

            /// <summary>
            /// Start the provider.
            /// </summary>
            public override void Start() => NativeApi.UnityARKit_OcclusionProvider_Start();

            /// <summary>
            /// Stop the provider.
            /// </summary>
            public override void Stop() => NativeApi.UnityARKit_OcclusionProvider_Stop();

            /// <summary>
            /// Destroy the provider.
            /// </summary>
            public override void Destroy() => NativeApi.UnityARKit_OcclusionProvider_Destruct();

            /// <summary>
            /// Property to get/set the requested human segmentation stencil mode.
            /// </summary>
            /// <value>
            /// The requested human segmentation stencil mode.
            /// </value>
            public override HumanSegmentationStencilMode requestedHumanStencilMode
            {
                get => NativeApi.UnityARKit_OcclusionProvider_GetRequestedSegmentationStencilMode();
                set
                {
                    NativeApi.UnityARKit_OcclusionProvider_SetRequestedSegmentationStencilMode(value);
                    Api.SetFeatureRequested(Feature.PeopleOcclusionStencil, value.Enabled());
                }
            }

            /// <summary>
            /// Property to get the current human segmentation stencil mode.
            /// </summary>
            public override HumanSegmentationStencilMode currentHumanStencilMode
                => NativeApi.UnityARKit_OcclusionProvider_GetCurrentSegmentationStencilMode();

            /// <summary>
            /// Property to get/set the requested human segmentation depth mode.
            /// </summary>
            /// <value>
            /// The requested human segmentation depth mode.
            /// </value>
            /// <exception cref="System.NotSupportedException">Thrown when setting the human segmentation depth mode
            /// to enabled if the implementation does not support human segmentation.</exception>
            public override HumanSegmentationDepthMode requestedHumanDepthMode
            {
                get => NativeApi.UnityARKit_OcclusionProvider_GetRequestedSegmentationDepthMode();
                set
                {
                    NativeApi.UnityARKit_OcclusionProvider_SetRequestedSegmentationDepthMode(value);
                    Api.SetFeatureRequested(Feature.PeopleOcclusionDepth, value.Enabled());
                }
            }

            /// <summary>
            /// Property to get the current segmentation depth mode.
            /// </summary>
            public override HumanSegmentationDepthMode currentHumanDepthMode
                => NativeApi.UnityARKit_OcclusionProvider_GetCurrentSegmentationDepthMode();

            /// <summary>
            /// Property to get/set the requested environment depth mode.
            /// </summary>
            /// <value>
            /// The requested environment depth mode.
            /// </value>
            public override EnvironmentDepthMode requestedEnvironmentDepthMode
            {
                get => NativeApi.UnityARKit_OcclusionProvider_GetRequestedEnvironmentDepthMode();
                set
                {
                    NativeApi.UnityARKit_OcclusionProvider_SetRequestedEnvironmentDepthMode(value);
                    Api.SetFeatureRequested(Feature.EnvironmentDepth, value.Enabled());
                }
            }

            /// <summary>
            /// Property to get the current environment depth mode.
            /// </summary>
            public override EnvironmentDepthMode currentEnvironmentDepthMode
                => NativeApi.UnityARKit_OcclusionProvider_GetCurrentEnvironmentDepthMode();

            /// <summary>
            /// Specifies the requested occlusion preference mode.
            /// </summary>
            /// <value>
            /// The requested occlusion preference mode.
            /// </value>
            public override OcclusionPreferenceMode requestedOcclusionPreferenceMode
            {
                get => m_OcclusionPreferenceMode;
                set => m_OcclusionPreferenceMode = value;
            }

            /// <summary>
            /// Get the occlusion preference mode currently in use by the provider.
            /// </summary>
            public override OcclusionPreferenceMode currentOcclusionPreferenceMode => m_OcclusionPreferenceMode;

            /// <summary>
            /// Gets the human stencil texture descriptor.
            /// </summary>
            /// <param name="humanStencilDescriptor">The human stencil texture descriptor to be populated, if
            /// available.</param>
            /// <returns>
            /// <c>true</c> if the human stencil texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            public override bool TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
                => NativeApi.UnityARKit_OcclusionProvider_TryGetHumanStencil(out humanStencilDescriptor);

            /// <summary>
            /// The CPU image API for interacting with the human stencil image.
            /// </summary>
            public override XRCpuImage.Api humanStencilCpuImageApi => ARKitCpuImageApi.instance;

            /// <summary>
            /// Gets the CPU construction information for a human stencil image.
            /// </summary>
            /// <param name="cinfo">The CPU image construction information, on success.</param>
            /// <returns>
            /// <c>true</c> if the human stencil texture is available and its CPU image construction information is
            /// returned. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryAcquireHumanStencilCpuImage(out XRCpuImage.Cinfo cinfo)
                => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.HumanStencil, out cinfo);

            /// <summary>
            /// Get the human depth texture descriptor.
            /// </summary>
            /// <param name="humanDepthDescriptor">The human depth texture descriptor to be populated, if available
            /// </param>
            /// <returns>
            /// <c>true</c> if the human depth texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            public override bool TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
                => NativeApi.UnityARKit_OcclusionProvider_TryGetHumanDepth(out humanDepthDescriptor);

            /// <summary>
            /// The CPU image API for interacting with the human depth image.
            /// </summary>
            public override XRCpuImage.Api humanDepthCpuImageApi => ARKitCpuImageApi.instance;

            /// <summary>
            /// Gets the CPU construction information for a human depth image.
            /// </summary>
            /// <param name="cinfo">The CPU image construction information, on success.</param>
            /// <returns>
            /// <c>true</c> if the human depth texture is available and its CPU image construction information is
            /// returned. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryAcquireHumanDepthCpuImage(out XRCpuImage.Cinfo cinfo)
                => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.HumanDepth, out cinfo);

            /// <summary>
            /// Get the environment texture descriptor.
            /// </summary>
            /// <param name="environmentDepthDescriptor">The environment depth texture descriptor to be populated, if
            /// available.</param>
            /// <returns>
            /// <c>true</c> if the environment depth texture descriptor is available and is returned. Otherwise,
            /// <c>false</c>.
            /// </returns>
            public override bool TryGetEnvironmentDepth(out XRTextureDescriptor environmentDepthDescriptor)
                => NativeApi.UnityARKit_OcclusionProvider_TryGetEnvironmentDepth(out environmentDepthDescriptor);

            /// <summary>
            /// Gets the CPU construction information for a environment depth image.
            /// </summary>
            /// <param name="cinfo">The CPU image construction information, on success.</param>
            /// <returns>
            /// <c>true</c> if the environment depth texture is available and its CPU image construction information is
            /// returned. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryAcquireEnvironmentDepthCpuImage(out XRCpuImage.Cinfo cinfo)
                => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.EnvironmentDepth, out cinfo);

            /// <summary>
            /// The CPU image API for interacting with the environment depth image.
            /// </summary>
            public override XRCpuImage.Api environmentDepthCpuImageApi => ARKitCpuImageApi.instance;

            /// <summary>
            /// Get the environment depth confidence texture descriptor.
            /// </summary>
            /// <param name="environmentDepthConfidenceDescriptor">The environment depth texture descriptor to be
            /// populated, if available.</param>
            /// <returns>
            /// <c>true</c> if the environment depth confidence texture descriptor is available and is returned.
            /// Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryGetEnvironmentDepthConfidence(out XRTextureDescriptor environmentDepthConfidenceDescriptor)
                => NativeApi.UnityARKit_OcclusionProvider_TryGetEnvironmentDepthConfidence(out environmentDepthConfidenceDescriptor);

            /// <summary>
            /// Gets the CPU construction information for a environment depth confidence image.
            /// </summary>
            /// <param name="cinfo">The CPU image construction information, on success.</param>
            /// <returns>
            /// <c>true</c> if the environment depth texture confidence is available and its CPU image construction information is
            /// returned. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryAcquireEnvironmentDepthConfidenceCpuImage(out XRCpuImage.Cinfo cinfo)
                => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.EnvironmentDepthConfidence,
                    out cinfo);

            /// <summary>
            /// The CPU image API for interacting with the environment depth confidence image.
            /// </summary>
            public override XRCpuImage.Api environmentDepthConfidenceCpuImageApi => ARKitCpuImageApi.instance;

            /// <summary>
            /// Gets the occlusion texture descriptors associated with the current AR frame.
            /// </summary>
            /// <param name="defaultDescriptor">The default descriptor value.</param>
            /// <param name="allocator">The allocator to use when creating the returned <c>NativeArray</c>.</param>
            /// <returns>The occlusion texture descriptors.</returns>
            public override unsafe NativeArray<XRTextureDescriptor> GetTextureDescriptors(XRTextureDescriptor defaultDescriptor,
                                                                                          Allocator allocator)
            {
                var textureDescriptors = NativeApi.UnityARKit_OcclusionProvider_AcquireTextureDescriptors(out int length,
                                                                                                          out int elementSize);

                try
                {
                    return NativeCopyUtility.PtrToNativeArrayWithDefault(defaultDescriptor, textureDescriptors,
                                                                         elementSize, length, allocator);
                }
                finally
                {
                    NativeApi.UnityARKit_OcclusionProvider_ReleaseTextureDescriptors(textureDescriptors);
                }
            }

            /// <summary>
            /// Get the enabled and disabled shader keywords for the material.
            /// </summary>
            /// <param name="enabledKeywords">The keywords to enable for the material.</param>
            /// <param name="disabledKeywords">The keywords to disable for the material.</param>
            public override void GetMaterialKeywords(out List<string> enabledKeywords, out List<string> disabledKeywords)
            {
                bool isEnvDepthEnabled = NativeApi.UnityARKit_OcclusionProvider_IsEnvironmentEnabled();
                bool isHumanDepthEnabled = NativeApi.UnityARKit_OcclusionProvider_IsHumanEnabled();

                if (isEnvDepthEnabled
                    && (!isHumanDepthEnabled
                        || (m_OcclusionPreferenceMode == OcclusionPreferenceMode.PreferEnvironmentOcclusion)))
                {
                    enabledKeywords = m_EnvironmentDepthEnabledMaterialKeywords;
                    disabledKeywords = m_HumanEnabledMaterialKeywords;
                }
                else if (isHumanDepthEnabled)
                {
                    enabledKeywords = m_HumanEnabledMaterialKeywords;
                    disabledKeywords = m_EnvironmentDepthEnabledMaterialKeywords;
                }
                else
                {
                    enabledKeywords = null;
                    disabledKeywords = m_AllDisabledMaterialKeywords;
                }
            }
        }

        /// <summary>
        /// Container to wrap the native ARKit human body APIs.
        /// </summary>
        static class NativeApi
        {
#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_Construct(int textureHumanStencilPropertyId,
                                                                             int textureHumanDepthPropertyId,
                                                                             int textureEnvDepthPropertyId,
                                                                             int textureEnvDepthConfidencePropertyId);

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_Start();

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_Stop();

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_Destruct();

            [DllImport("__Internal")]
            public static extern HumanSegmentationStencilMode UnityARKit_OcclusionProvider_GetRequestedSegmentationStencilMode();

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_SetRequestedSegmentationStencilMode(HumanSegmentationStencilMode humanSegmentationStencilMode);

            [DllImport("__Internal")]
            public static extern HumanSegmentationStencilMode UnityARKit_OcclusionProvider_GetCurrentSegmentationStencilMode();

            [DllImport("__Internal")]
            public static extern HumanSegmentationDepthMode UnityARKit_OcclusionProvider_GetRequestedSegmentationDepthMode();

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_SetRequestedSegmentationDepthMode(HumanSegmentationDepthMode humanSegmentationDepthMode);

            [DllImport("__Internal")]
            public static extern HumanSegmentationDepthMode UnityARKit_OcclusionProvider_GetCurrentSegmentationDepthMode();

            [DllImport("__Internal")]
            public static extern EnvironmentDepthMode UnityARKit_OcclusionProvider_GetRequestedEnvironmentDepthMode();

            [DllImport("__Internal")]
            public static extern void UnityARKit_OcclusionProvider_SetRequestedEnvironmentDepthMode(EnvironmentDepthMode environmentDepthMode);

            [DllImport("__Internal")]
            public static extern EnvironmentDepthMode UnityARKit_OcclusionProvider_GetCurrentEnvironmentDepthMode();

            [DllImport("__Internal")]
            public static extern unsafe bool UnityARKit_OcclusionProvider_TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor);

            [DllImport("__Internal")]
            public static extern unsafe bool UnityARKit_OcclusionProvider_TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor);

            [DllImport("__Internal")]
            public static unsafe extern bool UnityARKit_OcclusionProvider_TryGetEnvironmentDepth(out XRTextureDescriptor envDepthDescriptor);

            [DllImport("__Internal")]
            public static unsafe extern bool UnityARKit_OcclusionProvider_TryGetEnvironmentDepthConfidence(out XRTextureDescriptor envDepthConfidenceDescriptor);

            [DllImport("__Internal")]
            public static extern unsafe void* UnityARKit_OcclusionProvider_AcquireTextureDescriptors(out int length, out int elementSize);

            [DllImport("__Internal")]
            public static extern unsafe void UnityARKit_OcclusionProvider_ReleaseTextureDescriptors(void* descriptors);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_OcclusionProvider_IsHumanEnabled();

            [DllImport("__Internal")]
            public static extern bool UnityARKit_OcclusionProvider_IsEnvironmentEnabled();

            [DllImport("__Internal")]
            public static extern bool UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil();

            [DllImport("__Internal")]
            public static extern bool UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth();

			[DllImport("__Internal")]
			public static extern bool UnityARKit_OcclusionProvider_DoesSupportEnvironmentDepth();
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            public static void UnityARKit_OcclusionProvider_Construct(int textureHumanStencilPropertyId,
                                                                      int textureHumanDepthPropertyId,
                                                                      int textureEnvDepthPropertyId,
                                                                      int textureEnvDepthConfidencePropertyId)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_Start()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_Stop()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_Destruct()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static HumanSegmentationStencilMode UnityARKit_OcclusionProvider_GetRequestedSegmentationStencilMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_SetRequestedSegmentationStencilMode(HumanSegmentationStencilMode humanSegmentationStencilMode)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static HumanSegmentationStencilMode UnityARKit_OcclusionProvider_GetCurrentSegmentationStencilMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static HumanSegmentationDepthMode UnityARKit_OcclusionProvider_GetRequestedSegmentationDepthMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_SetRequestedSegmentationDepthMode(HumanSegmentationDepthMode humanSegmentationDepthMode)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static HumanSegmentationDepthMode UnityARKit_OcclusionProvider_GetCurrentSegmentationDepthMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static EnvironmentDepthMode UnityARKit_OcclusionProvider_GetRequestedEnvironmentDepthMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_OcclusionProvider_SetRequestedEnvironmentDepthMode(EnvironmentDepthMode environmentDepthMode)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static EnvironmentDepthMode UnityARKit_OcclusionProvider_GetCurrentEnvironmentDepthMode()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe bool UnityARKit_OcclusionProvider_TryGetHumanStencil(out XRTextureDescriptor humanStencilDescriptor)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe bool UnityARKit_OcclusionProvider_TryGetHumanDepth(out XRTextureDescriptor humanDepthDescriptor)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe bool UnityARKit_OcclusionProvider_TryGetEnvironmentDepth(out XRTextureDescriptor envDepthDescriptor)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe bool UnityARKit_OcclusionProvider_TryGetEnvironmentDepthConfidence(out XRTextureDescriptor envDepthConfidenceDescriptor)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void* UnityARKit_OcclusionProvider_AcquireTextureDescriptors(out int length, out int elementSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void UnityARKit_OcclusionProvider_ReleaseTextureDescriptors(void* descriptors)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_OcclusionProvider_IsHumanEnabled() => false;

			public static bool UnityARKit_OcclusionProvider_IsEnvironmentEnabled() => false;

            public static bool UnityARKit_OcclusionProvider_DoesSupportBodySegmentationStencil() => false;

            public static bool UnityARKit_OcclusionProvider_DoesSupportBodySegmentationDepth() => false;

			public static bool UnityARKit_OcclusionProvider_DoesSupportEnvironmentDepth() => false;
#endif
        }
    }
}
