using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Collections;
using UnityEngine.Rendering;
#if MODULE_URP_ENABLED
using UnityEngine.Rendering.Universal;
#endif // MODULE_URP_ENABLED
#if MODULE_LWRP_ENABLED
using UnityEngine.Rendering.LWRP;
#endif // MODULE_LWRP_ENABLED
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// The camera subsystem implementation for ARKit.
    /// </summary>
    [Preserve]
    public sealed class ARKitCameraSubsystem : XRCameraSubsystem
    {
        /// <summary>
        /// The identifying name for the camera-providing implementation.
        /// </summary>
        /// <value>
        /// The identifying name for the camera-providing implementation.
        /// </value>
        const string k_SubsystemId = "ARKit-Camera";

        /// <summary>
        /// The name for the shader for rendering the camera texture.
        /// </summary>
        /// <value>
        /// The name for the shader for rendering the camera texture.
        /// </value>
        const string k_BackgroundShaderName = "Unlit/ARKitBackground";

        /// <summary>
        /// The shader keyword for enabling LWRP rendering.
        /// </summary>
        /// <value>
        /// The shader keyword for enabling LWRP rendering.
        /// </value>
        const string k_BackgroundShaderKeywordLWRP = "ARKIT_BACKGROUND_LWRP";

        /// <summary>
        /// The shader keyword for enabling URP rendering.
        /// </summary>
        /// <value>
        /// The shader keyword for enabling URP rendering.
        /// </value>
        const string k_BackgroundShaderKeywordURP = "ARKIT_BACKGROUND_URP";

        /// <summary>
        /// The list of shader keywords to avoid during compilation.
        /// </summary>
        /// <value>
        /// The list of shader keywords to avoid during compilation.
        /// </value>
        static readonly List<string> k_BackgroundShaderKeywordsToNotCompile = new List<string> {
#if !MODULE_URP_ENABLED
            k_BackgroundShaderKeywordURP,
#endif // !MODULE_URP_ENABLED
#if !MODULE_LWRP_ENABLED
            k_BackgroundShaderKeywordLWRP,
#endif // !MODULE_LWRP_ENABLED
        };

        /// <summary>
        /// Resulting values from setting the camera configuration.
        /// </summary>
        enum CameraConfigurationResult
        {
            /// <summary>
            /// Setting the camera configuration was successful.
            /// </summary>
            Success = 0,

            /// <summary>
            /// Setting camera configuration was not supported by the provider.
            /// </summary>
            Unsupported = 1,

            /// <summary>
            /// The given camera configuration was not valid to be set by the provider.
            /// </summary>
            InvalidCameraConfiguration = 2,

            /// <summary>
            /// The provider session was invalid.
            /// </summary>
            InvalidSession = 3,
        }

        /// <summary>
        /// The name for the background shader.
        /// </summary>
        /// <value>
        /// The name for the background shader.
        /// </value>
        public static string backgroundShaderName => k_BackgroundShaderName;

        /// <summary>
        /// The list of shader keywords to avoid during compilation.
        /// </summary>
        /// <value>
        /// The list of shader keywords to avoid during compilation.
        /// </value>
        internal static List<string> backgroundShaderKeywordsToNotCompile => k_BackgroundShaderKeywordsToNotCompile;

        /// <summary>
        /// Create and register the camera subsystem descriptor to advertise a providing implementation for camera
        /// functionality.
        /// </summary>
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void Register()
        {
            if (!Api.AtLeast11_0())
                return;

            XRCameraSubsystemCinfo cameraSubsystemCinfo = new XRCameraSubsystemCinfo
            {
                id = k_SubsystemId,
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitCameraSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitCameraSubsystem),
#else
                implementationType = typeof(ARKitCameraSubsystem),
#endif
                supportsAverageBrightness = false,
                supportsAverageColorTemperature = true,
                supportsColorCorrection = false,
                supportsDisplayMatrix = true,
                supportsProjectionMatrix = true,
                supportsTimestamp = true,
                supportsCameraConfigurations = true,
                supportsCameraImage = true,
                supportsAverageIntensityInLumens = true,
                supportsFocusModes = true,
                supportsFaceTrackingAmbientIntensityLightEstimation = true,
                supportsFaceTrackingHDRLightEstimation = true,
                supportsWorldTrackingAmbientIntensityLightEstimation = true,
                supportsWorldTrackingHDRLightEstimation = false,
                supportsCameraGrain = Api.AtLeast13_0(),
            };

            if (!XRCameraSubsystem.Register(cameraSubsystemCinfo))
            {
                Debug.LogErrorFormat("Cannot register the {0} subsystem", k_SubsystemId);
            }
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Create the ARKit camera functionality provider for the camera subsystem.
        /// </summary>
        /// <returns>
        /// The ARKit camera functionality provider for the camera subsystem.
        /// </returns>
        protected override Provider CreateProvider() => new ARKitProvider();
#endif

        /// <summary>
        /// Provides the camera functionality for the ARKit implementation.
        /// </summary>
        class ARKitProvider : Provider
        {
            /// <summary>
            /// The shader property name for the luminance component of the camera video frame.
            /// </summary>
            /// <value>
            /// The shader property name for the luminance component of the camera video frame.
            /// </value>
            const string k_TextureYPropertyName = "_textureY";

            /// <summary>
            /// The shader property name for the chrominance components of the camera video frame.
            /// </summary>
            /// <value>
            /// The shader property name for the chrominance components of the camera video frame.
            /// </value>
            const string k_TextureCbCrPropertyName = "_textureCbCr";

            /// <summary>
            /// The shader property name identifier for the luminance component of the camera video frame.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the luminance component of the camera video frame.
            /// </value>
            static readonly int k_TextureYPropertyNameId = Shader.PropertyToID(k_TextureYPropertyName);

            /// <summary>
            /// The shader property name identifier for the chrominance components of the camera video frame.
            /// </summary>
            /// <value>
            /// The shader property name identifier for the chrominance components of the camera video frame.
            /// </value>
            static readonly int k_TextureCbCrPropertyNameId = Shader.PropertyToID(k_TextureCbCrPropertyName);

            /// <summary>
            /// The shader keywords to enable when the Legacy RP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to enable when the Legacy RP is enabled.
            /// </value>
            static readonly List<string> k_LegacyRPEnabledMaterialKeywords = null;

            /// <summary>
            /// The shader keywords to disable when the Legacy RP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to disable when the Legacy RP is enabled.
            /// </value>
            static readonly List<string> k_LegacyRPDisabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordLWRP, k_BackgroundShaderKeywordURP};

#if MODULE_URP_ENABLED
            /// <summary>
            /// The shader keywords to enable when URP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to enable when URP is enabled.
            /// </value>
            static readonly List<string> k_URPEnabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordURP};

            /// <summary>
            /// The shader keywords to disable when URP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to disable when URP is enabled.
            /// </value>
            static readonly List<string> k_URPDisabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordLWRP};
#endif // MODULE_URP_ENABLED

#if MODULE_LWRP_ENABLED
            /// <summary>
            /// The shader keywords to enable when LWRP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to enable when LWRP is enabled.
            /// </value>
            static readonly List<string> k_LWRPEnabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordLWRP};

            /// <summary>
            /// The shader keywords to disable when LWRP is enabled.
            /// </summary>
            /// <value>
            /// The shader keywords to disable when LWRP is enabled.
            /// </value>
            static readonly List<string> k_LWRPDisabledMaterialKeywords = new List<string>() {k_BackgroundShaderKeywordURP};
#endif // MODULE_LWRP_ENABLED

            /// <summary>
            /// Get the material used by <c>XRCameraSubsystem</c> to render the camera texture.
            /// </summary>
            /// <returns>
            /// The material to render the camera texture.
            /// </returns>
            public override Material cameraMaterial => m_CameraMaterial;
            Material m_CameraMaterial;

            /// <summary>
            /// Whether camera permission has been granted.
            /// </summary>
            /// <value>
            /// <c>true</c> if camera permission has been granted for this app. Otherwise, <c>false</c>.
            /// </value>
            public override bool permissionGranted => NativeApi.UnityARKit_Camera_IsCameraPermissionGranted();

            /// <summary>
            /// Constructs the ARKit camera functionality provider.
            /// </summary>
            public ARKitProvider()
            {
                NativeApi.UnityARKit_Camera_Construct(k_TextureYPropertyNameId, k_TextureCbCrPropertyNameId);

                string shaderName = ARKitCameraSubsystem.backgroundShaderName;
                if (shaderName == null)
                {
                    Debug.LogError("Cannot create camera background material compatible with the render pipeline");
                }
                else
                {
                    m_CameraMaterial = CreateCameraMaterial(shaderName);
                }
            }

            public override Feature currentCamera => NativeApi.UnityARKit_Camera_GetCurrentCamera();

            /// <summary>
            /// Get the currently active camera or set the requested camera
            /// </summary>
            public override Feature requestedCamera
            {
                get => Api.GetRequestedFeatures();
                set
                {
                    Api.SetFeatureRequested(Feature.AnyCamera, false);
                    Api.SetFeatureRequested(value, true);
                }
            }

            /// <summary>
            /// Start the camera functionality.
            /// </summary>
            public override void Start() => NativeApi.UnityARKit_Camera_Start();

            /// <summary>
            /// Stop the camera functionality.
            /// </summary>
            public override void Stop() => NativeApi.UnityARKit_Camera_Stop();

            /// <summary>
            /// Destroy any resources required for the camera functionality.
            /// </summary>
            public override void Destroy() => NativeApi.UnityARKit_Camera_Destruct();

            /// <summary>
            /// Get the current camera frame for the subsystem.
            /// </summary>
            /// <param name="cameraParams">The current Unity <c>Camera</c> parameters.</param>
            /// <param name="cameraFrame">The current camera frame returned by the method.</param>
            /// <returns>
            /// <c>true</c> if the method successfully got a frame. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryGetFrame(XRCameraParams cameraParams, out XRCameraFrame cameraFrame)
            {
                return NativeApi.UnityARKit_Camera_TryGetFrame(cameraParams, out cameraFrame);
            }

            public override bool autoFocusEnabled => NativeApi.UnityARKit_Camera_GetAutoFocusEnabled();

            /// <summary>
            /// Get or set the requested focus mode for the camera.
            /// </summary>
            public override bool autoFocusRequested
            {
                get => Api.GetRequestedFeatures().All(Feature.AutoFocus);
                set => Api.SetFeatureRequested(Feature.AutoFocus, value);
            }

            /// <summary>
            /// Gets the current light estimation mode as reported by the
            /// [ARSession's configuration](https://developer.apple.com/documentation/arkit/arconfiguration/2923546-lightestimationenabled).
            /// </summary>
            public override Feature currentLightEstimation => NativeApi.GetCurrentLightEstimation();

            /// <summary>
            /// Get or set the requested light estimation mode.
            /// </summary>
            public override Feature requestedLightEstimation
            {
                get => Api.GetRequestedFeatures();
                set
                {
                    Api.SetFeatureRequested(Feature.AnyLightEstimation, false);
                    Api.SetFeatureRequested(value.Intersection(Feature.AnyLightEstimation), true);
                }
            }

            /// <summary>
            /// Get the camera intrinsics information.
            /// </summary>
            /// <param name="cameraIntrinsics">The camera intrinsics information returned from the method.</param>
            /// <returns>
            /// <c>true</c> if the method successfully gets the camera intrinsics information. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryGetIntrinsics(out XRCameraIntrinsics cameraIntrinsics)
            {
                return NativeApi.UnityARKit_Camera_TryGetIntrinsics(out cameraIntrinsics);
            }

            /// <summary>
            /// Queries the supported camera configurations.
            /// </summary>
            /// <param name="defaultCameraConfiguration">A default value used to fill the returned array before copying
            /// in real values. This ensures future additions to this struct are backwards compatible.</param>
            /// <param name="allocator">The allocation strategy to use for the returned data.</param>
            /// <returns>
            /// The supported camera configurations.
            /// </returns>
            public override NativeArray<XRCameraConfiguration> GetConfigurations(XRCameraConfiguration defaultCameraConfiguration,
                                                                                 Allocator allocator)
            {
                IntPtr configurations = NativeApi.UnityARKit_Camera_AcquireConfigurations(out int configurationsCount,
                                                                                          out int configurationSize);

                try
                {
                    unsafe
                    {
                        return NativeCopyUtility.PtrToNativeArrayWithDefault(defaultCameraConfiguration,
                                                                             (void*)configurations,
                                                                             configurationSize, configurationsCount,
                                                                             allocator);
                    }
                }
                finally
                {
                    NativeApi.UnityARKit_Camera_ReleaseConfigurations(configurations);
                }
            }

            /// <summary>
            /// The current camera configuration.
            /// </summary>
            /// <value>
            /// The current camera configuration if it exists. Otherise, <c>null</c>.
            /// </value>
            /// <exception cref="System.ArgumentException">Thrown when setting the current configuration if the given
            /// configuration is not a valid, supported camera configuration.</exception>
            /// <exception cref="System.InvalidOperationException">Thrown when setting the current configuration if the
            /// implementation is unable to set the current camera configuration for various reasons such as:
            /// <list type="bullet">
            /// <item><description>Version of iOS does not support camera configurations</description></item>
            /// <item><description>ARKit session is invalid</description></item>
            /// </list>
            /// </exception>
            public override XRCameraConfiguration? currentConfiguration
            {
                get
                {
                    if (NativeApi.UnityARKit_Camera_TryGetCurrentConfiguration(out XRCameraConfiguration cameraConfiguration))
                    {
                        return cameraConfiguration;
                    }

                    return null;
                }
                set
                {
                    // Assert that the camera configuration is not null.
                    // The XRCameraSubsystem should have already checked this.
                    Debug.Assert(value != null, "Cannot set the current camera configuration to null");

                    switch (NativeApi.UnityARKit_Camera_TrySetCurrentConfiguration((XRCameraConfiguration)value))
                    {
                        case CameraConfigurationResult.Success:
                            break;
                        case CameraConfigurationResult.Unsupported:
                            throw new InvalidOperationException("cannot set camera configuration because ARKit version "
                                                                + "does not support camera configurations");
                        case CameraConfigurationResult.InvalidCameraConfiguration:
                            throw new ArgumentException("camera configuration does not exist in the available "
                                                        + "configurations", "value");
                        case CameraConfigurationResult.InvalidSession:
                            throw new InvalidOperationException("cannot set camera configuration because the ARKit "
                                                                + "session is not valid");
                        default:
                            throw new InvalidOperationException("cannot set camera configuration for ARKit");
                    }
                }
            }

            /// <summary>
            /// Gets the texture descriptors associated with the current camera frame.
            /// </summary>
            /// <param name="defaultDescriptor">Default descriptor.</param>
            /// <param name="allocator">Allocator.</param>
            /// <returns>The texture descriptors.</returns>
            public override unsafe NativeArray<XRTextureDescriptor> GetTextureDescriptors(
                XRTextureDescriptor defaultDescriptor,
                Allocator allocator)
            {
                var textureDescriptors = NativeApi.UnityARKit_Camera_AcquireTextureDescriptors(
                    out int length, out int elementSize);

                try
                {
                    return NativeCopyUtility.PtrToNativeArrayWithDefault(
                        defaultDescriptor,
                        textureDescriptors, elementSize, length, allocator);
                }
                finally
                {
                    NativeApi.UnityARKit_Camera_ReleaseTextureDescriptors(textureDescriptors);
                }
            }

            /// <summary>
            /// Get the enabled and disabled shader keywords for the material.
            /// </summary>
            /// <param name="enabledKeywords">The keywords to enable for the material.</param>
            /// <param name="disabledKeywords">The keywords to disable for the material.</param>
            public override void GetMaterialKeywords(out List<string> enabledKeywords, out List<string> disabledKeywords)
            {
                if (GraphicsSettings.currentRenderPipeline == null)
                {
                    enabledKeywords = k_LegacyRPEnabledMaterialKeywords;
                    disabledKeywords = k_LegacyRPDisabledMaterialKeywords;
                }
#if MODULE_URP_ENABLED
                else if (GraphicsSettings.currentRenderPipeline is UniversalRenderPipelineAsset)
                {
                    enabledKeywords = k_URPEnabledMaterialKeywords;
                    disabledKeywords = k_URPDisabledMaterialKeywords;
                }
#endif // MODULE_URP_ENABLED
#if MODULE_LWRP_ENABLED
                else if (GraphicsSettings.currentRenderPipeline is LightweightRenderPipelineAsset)
                {
                    enabledMaterialKeywords = k_LWRPEnabledMaterialKeywords;
                    disabledKeywords = k_LWRPDisabledMaterialKeywords;
                }
#endif // MODULE_LWRP_ENABLED
                else
                {
                    enabledKeywords = null;
                    disabledKeywords = null;
                }
            }

            /// <summary>
            /// An instance of the <see cref="XRCpuImage.Api"/> used to operate on <see cref="XRCpuImage"/> objects.
            /// </summary>
            public override XRCpuImage.Api cpuImageApi => ARKitCpuImageApi.instance;

            /// <summary>
            /// Query for the latest native camera image.
            /// </summary>
            /// <param name="cameraImageCinfo">The metadata required to construct a <see cref="XRCpuImage"/></param>
            /// <returns>
            /// <c>true</c> if the camera image is acquired. Otherwise, <c>false</c>.
            /// </returns>
            public override bool TryAcquireLatestCpuImage(out XRCpuImage.Cinfo cameraImageCinfo)
                => ARKitCpuImageApi.TryAcquireLatestImage(ARKitCpuImageApi.ImageType.Camera, out cameraImageCinfo);
        }

        /// <summary>
        /// Container to wrap the native ARKit camera APIs.
        /// </summary>
        static class NativeApi
        {
#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal", EntryPoint="UnityARKit_Camera_GetCurrentLightEstimation")]
            public static extern Feature GetCurrentLightEstimation();

            [DllImport("__Internal")]
            public static extern void UnityARKit_Camera_Construct(int textureYPropertyNameId,
                                                                  int textureCbCrPropertyNameId);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Camera_Destruct();

            [DllImport("__Internal")]
            public static extern void UnityARKit_Camera_Start();

            [DllImport("__Internal")]
            public static extern void UnityARKit_Camera_Stop();

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Camera_TryGetFrame(XRCameraParams cameraParams,
                                                                    out XRCameraFrame cameraFrame);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Camera_TryGetIntrinsics(out XRCameraIntrinsics cameraIntrinsics);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Camera_IsCameraPermissionGranted();

            [DllImport("__Internal")]
            public static extern IntPtr UnityARKit_Camera_AcquireConfigurations(out int configurationsCount,
                                                                                out int configurationSize);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Camera_ReleaseConfigurations(IntPtr configurations);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Camera_TryGetCurrentConfiguration(out XRCameraConfiguration cameraConfiguration);

            [DllImport("__Internal")]
            public static extern CameraConfigurationResult UnityARKit_Camera_TrySetCurrentConfiguration(XRCameraConfiguration cameraConfiguration);

            [DllImport("__Internal")]
            public static extern unsafe void* UnityARKit_Camera_AcquireTextureDescriptors(
                out int length, out int elementSize);

            [DllImport("__Internal")]
            public static extern unsafe void UnityARKit_Camera_ReleaseTextureDescriptors(
                void* descriptors);

            [DllImport("__Internal")]
            public static extern Feature UnityARKit_Camera_GetCurrentCamera();

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Camera_GetAutoFocusEnabled();
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            public static Feature GetCurrentLightEstimation() => Feature.None;

            public static void UnityARKit_Camera_Construct(int textureYPropertyNameId,
                                                                  int textureCbCrPropertyNameId)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Camera_Destruct()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Camera_Start()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Camera_Stop()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Camera_TryGetFrame(XRCameraParams cameraParams,
                                                                    out XRCameraFrame cameraFrame)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Camera_TryGetIntrinsics(out XRCameraIntrinsics cameraIntrinsics)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Camera_IsCameraPermissionGranted() => false;

            public static IntPtr UnityARKit_Camera_AcquireConfigurations(out int configurationsCount,
                                                                                out int configurationSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Camera_ReleaseConfigurations(IntPtr configurations)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Camera_TryGetCurrentConfiguration(out XRCameraConfiguration cameraConfiguration)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static CameraConfigurationResult UnityARKit_Camera_TrySetCurrentConfiguration(XRCameraConfiguration cameraConfiguration)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void* UnityARKit_Camera_AcquireTextureDescriptors(
                out int length, out int elementSize)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static unsafe void UnityARKit_Camera_ReleaseTextureDescriptors(
                void* descriptors)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static Feature UnityARKit_Camera_GetCurrentCamera() => Feature.None;

            public static bool UnityARKit_Camera_GetAutoFocusEnabled() => false;
#endif
        }
    }
}
