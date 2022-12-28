using AOT;
using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Assertions;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The ARCore implementation of the
    /// [XRSessionSubsystem](xref:UnityEngine.XR.ARSubsystems.XRSessionSubsystem).
    /// Do not create this directly. Use the
    /// [SubsystemManager](xref:UnityEngine.SubsystemManager)
    /// instead.
    /// </summary>
    [Preserve]
    public sealed class ARCoreSessionSubsystem : XRSessionSubsystem
    {
#if UNITY_2020_2_OR_NEWER
        protected override void OnCreate()
        {
            ((ARCoreProvider)provider).beforeSetConfiguration += ConfigurationChangedFromProvider;
        }
#endif

        void ConfigurationChangedFromProvider(ARCoreBeforeSetConfigurationEventArgs eventArgs) => beforeSetConfiguration?.Invoke(eventArgs);

        /// <summary>
        /// Notifies that there has been a change in the ARCore configuration object which triggers <see cref="beforeSetConfiguration"/>.
        /// </summary>
        public void SetConfigurationDirty()
        {
            NativeApi.UnityARCore_session_setConfigurationDirty();
        }

        /// <summary>
        /// Event that is triggered right before the configuration is set on the session. Allows changes to be made to the configuration before it is set.
        /// </summary>
        public event Action<ARCoreBeforeSetConfigurationEventArgs> beforeSetConfiguration;

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the provider interface.
        /// </summary>
        /// <returns>The provider interface for ARCore</returns>
        protected override Provider CreateProvider()
        {
            var provider = new ARCoreProvider(this);
            provider.beforeSetConfiguration += ConfigurationChangedFromProvider;
            return provider;
        }
#endif

        class ARCoreProvider : Provider
        {
            GCHandle m_ProviderHandle;
            Action<ArSession, ArConfig, IntPtr> m_SetConfigurationCallback = SetConfigurationCallback;

#if UNITY_2020_2_OR_NEWER
            public ARCoreProvider()
#else
            ARCoreSessionSubsystem m_Subsystem;
            public ARCoreProvider(ARCoreSessionSubsystem subsystem)
#endif
            {
#if !UNITY_2020_2_OR_NEWER
                m_Subsystem = subsystem;
#endif

                NativeApi.UnityARCore_session_construct(CameraPermissionRequestProvider);
                if (SystemInfo.graphicsMultiThreaded)
                {
                    m_RenderEventFunc = NativeApi.UnityARCore_session_getRenderEventFunc();
                }

                m_ProviderHandle = GCHandle.Alloc(this);
                NativeApi.UnityARCore_session_setConfigCallback(m_SetConfigurationCallback, GCHandle.ToIntPtr(m_ProviderHandle));
            }

#if UNITY_2020_2_OR_NEWER
            public override void Start()
#else
            public override void Resume()
#endif
            {
                // Texture *must* be created before ARCore session resume is called
                CreateTexture();
                NativeApi.UnityARCore_session_resume(Guid.NewGuid());
            }

#if UNITY_2020_2_OR_NEWER
            public override void Stop()
#else
            public override void Pause()
#endif
                => NativeApi.UnityARCore_session_pause();

            public override void Update(XRSessionUpdateParams updateParams, Configuration configuration)
            {
                NativeApi.UnityARCore_session_update(
                    updateParams.screenOrientation,
                    updateParams.screenDimensions,
                    configuration.descriptor.identifier,
                    configuration.features);
            }

            public override unsafe NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator)
            {
                NativeApi.UnityARCore_session_getConfigurationDescriptors(out IntPtr ptr, out int count, out int stride);
                Assert.AreNotEqual(IntPtr.Zero, ptr, "Configuration descriptors pointer was null.");
                Assert.IsTrue(count > 0, "There are no configuration descriptors.");

                var descriptors = new NativeArray<ConfigurationDescriptor>(count, allocator);
                unsafe
                {
                    UnsafeUtility.MemCpyStride(
                        descriptors.GetUnsafePtr(),
                        UnsafeUtility.SizeOf<ConfigurationDescriptor>(),
                        (void*)ptr, stride, stride, count);
                }

                return descriptors;
            }

            /// <summary>
            /// Event that is triggered right before the configuration is set on the session. Allows changes to be made to the configuration before it is set.
            /// </summary>
            public event Action<ARCoreBeforeSetConfigurationEventArgs> beforeSetConfiguration;

            [MonoPInvokeCallback(typeof(Action<ArSession, ArConfig, IntPtr>))]
            static void SetConfigurationCallback(ArSession session, ArConfig config, IntPtr context)
            {
                var providerHandle = (GCHandle)context;

                if (providerHandle.Target is ARCoreProvider provider)
                {
                    provider.beforeSetConfiguration?.Invoke(new ARCoreBeforeSetConfigurationEventArgs(session, config));
                }
            }

            public override void Destroy()
            {
                m_ProviderHandle.Free();
                DeleteTexture();
                NativeApi.UnityARCore_session_destroy();
            }

            public override void Reset()
            {
                NativeApi.UnityARCore_session_reset();
#if UNITY_2020_2_OR_NEWER
                if (running)
                    Start();
#else
                if (m_Subsystem.running)
                    Resume();
#endif
            }

            public override void OnApplicationPause() => NativeApi.UnityARCore_session_onApplicationPause();

            public override void OnApplicationResume() => NativeApi.UnityARCore_session_onApplicationResume();

            public override Promise<SessionAvailability> GetAvailabilityAsync()
            {
                return ExecuteAsync<SessionAvailability>((context) =>
                {
                    NativeApi.ArPresto_checkApkAvailability(OnCheckApkAvailability, context);
                });
            }

            public override Promise<SessionInstallationStatus> InstallAsync()
            {
                return ExecuteAsync<SessionInstallationStatus>((context) =>
                {
                    NativeApi.ArPresto_requestApkInstallation(true, OnApkInstallation, context);
                });
            }

            public override IntPtr nativePtr => NativeApi.UnityARCore_session_getNativePtr();

            public override TrackingState trackingState => NativeApi.UnityARCore_session_getTrackingState();

            public override NotTrackingReason notTrackingReason => NativeApi.UnityARCore_session_getNotTrackingReason();

            public override Feature requestedFeatures => Api.GetRequestedFeatures();

            public override Feature requestedTrackingMode
            {
                get => Api.GetRequestedFeatures();
                set
                {
                    Api.SetFeatureRequested(Feature.AnyTrackingMode, false);
                    Api.SetFeatureRequested(value, true);
                }
            }

            public override Feature currentTrackingMode => NativeApi.GetCurrentTrackingMode();

            public override bool matchFrameRateEnabled => NativeApi.UnityARCore_session_getMatchFrameRateEnabled();

            public override bool matchFrameRateRequested
            {
                get => NativeApi.UnityARCore_session_getMatchFrameRateRequested();
                set => NativeApi.UnityARCore_session_setMatchFrameRateRequested(value);
            }

            public override int frameRate
            {
                get
                {
                    if (ARCoreCameraSubsystem.TryGetCurrentConfiguration(out XRCameraConfiguration configuration) && configuration.framerate.HasValue)
                    {
                        return configuration.framerate.Value;
                    }

                    return 30;
                }
            }

            static Promise<T> ExecuteAsync<T>(Action<IntPtr> apiMethod)
            {
                var promise = new ARCorePromise<T>();
                GCHandle gch = GCHandle.Alloc(promise);
                apiMethod(GCHandle.ToIntPtr(gch));
                return promise;
            }

            [MonoPInvokeCallback(typeof(Action<NativeApi.ArPrestoApkInstallStatus, IntPtr>))]
            static void OnApkInstallation(NativeApi.ArPrestoApkInstallStatus status, IntPtr context)
            {
                var sessionInstallation = SessionInstallationStatus.None;
                switch (status)
                {
                    case NativeApi.ArPrestoApkInstallStatus.ErrorDeviceNotCompatible:
                        sessionInstallation = SessionInstallationStatus.ErrorDeviceNotCompatible;
                        break;

                    case NativeApi.ArPrestoApkInstallStatus.ErrorUserDeclined:
                        sessionInstallation = SessionInstallationStatus.ErrorUserDeclined;
                        break;

                    case NativeApi.ArPrestoApkInstallStatus.Requested:
                        // This shouldn't happen
                        sessionInstallation = SessionInstallationStatus.Error;
                        break;

                    case NativeApi.ArPrestoApkInstallStatus.Success:
                        sessionInstallation = SessionInstallationStatus.Success;
                        break;

                    case NativeApi.ArPrestoApkInstallStatus.Error:
                    default:
                        sessionInstallation = SessionInstallationStatus.Error;
                        break;
                }

                ResolvePromise(context, sessionInstallation);
            }

            [MonoPInvokeCallback(typeof(Action<NativeApi.ArAvailability, IntPtr>))]
            static void OnCheckApkAvailability(NativeApi.ArAvailability availability, IntPtr context)
            {
                var sessionAvailability = SessionAvailability.None;
                switch (availability)
                {
                    case NativeApi.ArAvailability.SupportedNotInstalled:
                    case NativeApi.ArAvailability.SupportedApkTooOld:
                        sessionAvailability = SessionAvailability.Supported;
                        break;

                    case NativeApi.ArAvailability.SupportedInstalled:
                        sessionAvailability = SessionAvailability.Supported | SessionAvailability.Installed;
                        break;

                    default:
                        sessionAvailability = SessionAvailability.None;
                        break;
                }

                ResolvePromise(context, sessionAvailability);
            }

            [MonoPInvokeCallback(typeof(NativeApi.CameraPermissionRequestProviderDelegate))]
            static void CameraPermissionRequestProvider(NativeApi.CameraPermissionsResultCallbackDelegate callback, IntPtr context)
            {
                ARCorePermissionManager.RequestPermission(k_CameraPermissionName, (permissinName, granted) =>
                {
                    callback(granted, context);
                });
            }

            static void ResolvePromise<T>(IntPtr context, T arg) where T : struct
            {
                GCHandle gch = GCHandle.FromIntPtr(context);
                var promise = (ARCorePromise<T>)gch.Target;
                if (promise != null)
                    promise.Resolve(arg);
                gch.Free();
            }

            void IssueRenderEventAndWaitForCompletion(NativeApi.RenderEvent renderEvent)
            {
                // NB: If m_RenderEventFunc is zero, it means
                //     1. We are running in the Editor.
                //     2. The UnityARCore library could not be loaded or similar catastrophic failure.
                if (m_RenderEventFunc != IntPtr.Zero)
                {
                    NativeApi.UnityARCore_session_setRenderEventPending();
                    GL.IssuePluginEvent(m_RenderEventFunc, (int)renderEvent);
                    NativeApi.UnityARCore_session_waitForRenderEvent();
                }
            }

            // Safe to call multiple times; does nothing if already created.
            void CreateTexture()
            {
                if (SystemInfo.graphicsMultiThreaded)
                {
                    IssueRenderEventAndWaitForCompletion(NativeApi.RenderEvent.CreateTexture);
                }
                else
                {
                    NativeApi.UnityARCore_session_createTextureMainThread();
                }
            }

            // Safe to call multiple times; does nothing if already destroyed.
            void DeleteTexture()
            {
                if (SystemInfo.graphicsMultiThreaded)
                {
                    IssueRenderEventAndWaitForCompletion(NativeApi.RenderEvent.DeleteTexture);
                }
                else
                {
                    NativeApi.UnityARCore_session_deleteTextureMainThread();
                }
            }

            const string k_CameraPermissionName = "android.permission.CAMERA";

            IntPtr m_RenderEventFunc;
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.platformAndroid || !Api.loaderPresent)
                return;

            XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
            {
                id = "ARCore-Session",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARCoreProvider),
                subsystemTypeOverride = typeof(ARCoreSessionSubsystem),
#else
                subsystemImplementationType = typeof(ARCoreSessionSubsystem),
#endif
                supportsInstall = true,
                supportsMatchFrameRate = true
            });
        }

        internal static class NativeApi
        {
            public enum ArPrestoApkInstallStatus
            {
                Uninitialized = 0,
                Requested = 1,
                Success = 100,
                Error = 200,
                ErrorDeviceNotCompatible = 201,
                ErrorUserDeclined = 203,
            }

            public enum ArAvailability
            {
                UnknownError = 0,
                UnknownChecking = 1,
                UnknownTimedOut = 2,
                UnsupportedDeviceNotCapable = 100,
                SupportedNotInstalled = 201,
                SupportedApkTooOld = 202,
                SupportedInstalled = 203
            }

            public enum RenderEvent
            {
                CreateTexture,
                DeleteTexture
            }

            public delegate void CameraPermissionRequestProviderDelegate(
                CameraPermissionsResultCallbackDelegate resultCallback,
                IntPtr context);

            public delegate void CameraPermissionsResultCallbackDelegate(
                bool granted,
                IntPtr context);

            [DllImport("UnityARCore")]
            public static extern IntPtr UnityARCore_session_getNativePtr();

            [DllImport("UnityARCore")]
            public static extern void ArPresto_checkApkAvailability(
                Action<ArAvailability, IntPtr> onResult, IntPtr context);

            [DllImport("UnityARCore")]
            public static extern void ArPresto_requestApkInstallation(
                bool userRequested, Action<ArPrestoApkInstallStatus, IntPtr> onResult, IntPtr context);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_update(
                ScreenOrientation orientation,
                Vector2Int screenDimensions,
                IntPtr configId,
                Feature features);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_getConfigurationDescriptors(
                out IntPtr ptr, out int count, out int stride);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_construct(
                CameraPermissionRequestProviderDelegate cameraPermissionRequestProvider);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_destroy();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_resume(Guid guid);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_pause();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_onApplicationResume();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_onApplicationPause();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_reset();

            [DllImport("UnityARCore")]
            public static extern TrackingState UnityARCore_session_getTrackingState();

            [DllImport("UnityARCore")]
            public static extern NotTrackingReason UnityARCore_session_getNotTrackingReason();

            [DllImport("UnityARCore")]
            public static extern IntPtr UnityARCore_session_getRenderEventFunc();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_setRenderEventPending();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_waitForRenderEvent();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_createTextureMainThread();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_deleteTextureMainThread();

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_session_getMatchFrameRateEnabled();

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_session_getMatchFrameRateRequested();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_setMatchFrameRateRequested(bool value);

            [DllImport("UnityARCore", EntryPoint="UnityARCore_session_getCurrentTrackingMode")]
            public static extern Feature GetCurrentTrackingMode();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_setConfigurationDirty();

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_session_setConfigCallback(Action<ArSession, ArConfig, IntPtr> callback, IntPtr context);
        }
    }
}
