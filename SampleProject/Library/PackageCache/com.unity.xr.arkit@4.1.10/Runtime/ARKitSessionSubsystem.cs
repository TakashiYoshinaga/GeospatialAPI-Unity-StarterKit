using AOT;
using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Assertions;
using UnityEngine.Scripting;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// ARKit implementation of the <c>XRSessionSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Preserve]
    public sealed class ARKitSessionSubsystem : XRSessionSubsystem
    {
        IntPtr self => ((ARKitProvider)provider).self;

        /// <summary>
        /// The <see cref="ARKitSessionDelegate"/> to use for session-related callbacks.
        /// </summary>
        public ARKitSessionDelegate sessionDelegate { get; set; } = new DefaultARKitSessionDelegate();

        /// <summary>
        /// <c>true</c> if [Coaching Overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview) is supported, otherwise <c>false</c>.
        /// </summary>
        public static bool coachingOverlaySupported => Api.AtLeast13_0();

        /// <summary>
        /// Whether the [Coaching Overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview)
        /// activates automatically or not. By default, it does not.
        /// </summary>
        public bool coachingActivatesAutomatically
        {
            get => NativeApi.UnityARKit_Session_GetCoachingOverlayActivatesAutomatically(self);
            set => NativeApi.UnityARKit_Session_SetCoachingOverlayActivatesAutomatically(self, value);
        }

        /// <summary>
        /// Defines the [Coaching Goal](https://developer.apple.com/documentation/arkit/arcoachingoverlayview/3192180-goal).
        /// This property is obsolete. Use <see cref="requestedCoachingGoal"/> or <see cref="currentCoachingGoal"/> instead.
        /// </summary>
        [Obsolete("Use requestedCoachingGoal or currentCoachingGoal instead. (2020-01-17)")]
        public ARCoachingGoal coachingGoal
        {
            get => currentCoachingGoal;
            set => requestedCoachingGoal = value;
        }

        /// <summary>
        /// Requests the [Coaching Goal](https://developer.apple.com/documentation/arkit/arcoachingoverlayview/3192180-goal).
        /// This should be based on your app's tracking requirements and affects the UI that the coaching overlay presents.
        /// </summary>
        /// <value>The type of goal the coaching overlay should guide the user through.</value>
        public ARCoachingGoal requestedCoachingGoal
        {
            get => NativeApi.UnityARKit_Session_GetRequestedCoachingGoal(self);
            set => NativeApi.UnityARKit_Session_SetRequestedCoachingGoal(self, value);
        }

        /// <summary>
        /// The current [Coaching Goal](https://developer.apple.com/documentation/arkit/arcoachingoverlayview/3192180-goal).
        /// This may be different than the <see cref="requestedCoachingGoal"/>.
        /// </summary>
        /// <returns>The type of goal the coaching overlay will guide the user through.</returns>
        public ARCoachingGoal currentCoachingGoal => NativeApi.UnityARKit_Session_GetCurrentCoachingGoal(self);

        /// <summary>
        /// <c>true</c> if the [Coaching Overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview) is active.
        /// </summary>
        public bool coachingActive => NativeApi.UnityARKit_Session_IsCoachingOverlayActive(self);

        /// <summary>
        /// Activates or deactivates the [Coaching Overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview)
        /// </summary>
        /// <param name="active">Whether the coaching overlay should be active or not.</param>
        /// <param name="transition">The type of transition to use when showing or hiding the coaching overlay.</param>
        public void SetCoachingActive(bool active, ARCoachingOverlayTransition transition)
        {
            NativeApi.UnityARKit_Session_SetCoachingOverlayActive(self, active, transition == ARCoachingOverlayTransition.Animated);
        }

        /// <summary>
        /// <para>Asynchronously create an <see cref="ARWorldMap"/>. An <c>ARWorldMap</c>
        /// represents the state of the session and can be serialized to a byte
        /// array to persist the session data, or send it to another device for
        /// shared AR experiences.</para>
        /// <para>It is a wrapper for <a href="https://developer.apple.com/documentation/arkit/arworldmap">ARKit's ARWorldMap</a>.</para>
        /// </summary>
        /// <returns>An <see cref="ARWorldMapRequest"/> which can be used to determine the status
        /// of the request and get the <c>ARWorldMap</c> when complete.</returns>
        /// <seealso cref="ApplyWorldMap(ARWorldMap)"/>
        /// <seealso cref="worldMapSupported"/>
        public ARWorldMapRequest GetARWorldMapAsync()
        {
            var requestId = NativeApi.UnityARKit_createWorldMapRequest();
            return new ARWorldMapRequest(requestId);
        }

        /// <summary>
        /// <para>
        /// Asynchronously create an <see cref="ARWorldMap"/>. An <c>ARWorldMap</c>
        /// represents the state of the session and can be serialized to a byte
        /// array to persist the session data, or send it to another device for
        /// shared AR experiences.
        /// </para>
        /// <para>
        /// It is a wrapper for <a href="https://developer.apple.com/documentation/arkit/arworldmap">ARKit's ARWorldMap</a>.
        /// </para>
        /// <para>
        /// If the <see cref="ARWorldMapRequestStatus"/> is <see cref="ARWorldMapRequestStatus.Success"/>, then
        /// the resulting <see cref="ARWorldMap"/> must be disposed to avoid leaking native resources. Otherwise,
        /// the <see cref="ARWorldMap"/> is not valid, and need not be disposed.
        /// </para>
        /// </summary>
        /// <param name="onComplete">A method to invoke when the world map has either been created, or determined
        /// that it could not be created. Check the value of the <see cref="ARWorldMapRequestStatus"/> parameter
        /// to determine whether the world map was successfully created.</param>
        /// <seealso cref="ApplyWorldMap(ARWorldMap)"/>
        /// <seealso cref="worldMapSupported"/>
        public void GetARWorldMapAsync(
            Action<ARWorldMapRequestStatus, ARWorldMap> onComplete)
        {
            var handle = GCHandle.Alloc(onComplete);
            var context = GCHandle.ToIntPtr(handle);

            NativeApi.UnityARKit_createWorldMapRequestWithCallback(s_OnAsyncWorldMapCompleted, context);
        }

        /// <summary>
        /// Detect <see cref="ARWorldMap"/> support. <c>ARWorldMap</c> requires iOS 12 or greater.
        /// </summary>
        /// <returns><c>true</c> if <c>ARWorldMap</c>s are supported, otherwise <c>false</c>.</returns>
        /// <seealso cref="GetARWorldMapAsync()"/>
        public static bool worldMapSupported => Api.AtLeast12_0();

        /// <summary>
        /// Get the world mapping status. Used to determine the suitability of the current session for
        /// creating an <see cref="ARWorldMap"/>.
        /// </summary>
        /// <returns>The <see cref="ARWorldMappingStatus"/> of the session.</returns>
        public ARWorldMappingStatus worldMappingStatus => NativeApi.UnityARKit_Session_GetWorldMappingStatus(self);

        /// <summary>
        /// Applies an <see cref="ARWorldMap"/> to the session.
        /// </summary>
        /// <remarks>
        /// This will attempt to relocalize the current session to the given <paramref name="worldMap"/>. If
        /// relocalization is successful, the stored planes and anchors from the <paramref name="worldMap"/> will be
        /// added to the current session. This is equivalent to setting the
        /// [initialWorldMap](https://developer.apple.com/documentation/arkit/arworldtrackingconfiguration/2968180-initialworldmap)
        /// property on the session's
        /// [ARWorldTrackingConfiguration](https://developer.apple.com/documentation/arkit/arworldtrackingconfiguration).
        ///
        /// If <paramref name="worldMap"/> is not <see cref="ARWorldMap.valid"/>, this method sets the
        /// `initialWorldMap` configuration property to `nil`.
        /// </remarks>
        /// <param name="worldMap">An <see cref="ARWorldMap"/> with which to relocalize the session.</param>
        public void ApplyWorldMap(ARWorldMap worldMap)
        {
            NativeApi.UnityARKit_applyWorldMap(worldMap.nativeHandle);
        }

        /// <summary>
        /// Get whether
        /// [collaboration is enabled](https://developer.apple.com/documentation/arkit/arworldtrackingconfiguration/3152987-collaborationenabled).
        /// When collaboration is enabled,
        /// [collaboration data](https://developer.apple.com/documentation/arkit/arcollaborationdata)
        /// is accumulated by the subsystem until you read it out with <see cref="DequeueCollaborationData"/>.
        /// </summary>
        /// <remarks>
        /// Note: If you change this value, the new value may not be reflected until the next frame.
        /// </remarks>
        /// <seealso cref="ARCollaborationData"/>
        /// <seealso cref="DequeueCollaborationData"/>
        /// <seealso cref="collaborationDataCount"/>
        public bool collaborationRequested
        {
            get => Api.GetRequestedFeatures().All(Feature.Collaboration);
            set => Api.SetFeatureRequested(Feature.Collaboration, value);
        }

        /// <summary>
        /// Queries whether collaboration is currently enabled.
        /// </summary>
        public bool collaborationEnabled => NativeApi.UnityARKit_Session_GetCollaborationEnabled(self);

        /// <summary>
        /// True if collaboration is supported. Collaboration is only supported on iOS versions 13.0 and later.
        /// </summary>
        /// <seealso cref="ARCollaborationData"/>
        public static bool supportsCollaboration => Api.AtLeast13_0();

        /// <summary>
        /// The number of <see cref="ARCollaborationData"/>s in the queue. Obtain <see cref="ARCollaborationData"/>
        /// with <see cref="DequeueCollaborationData"/>.
        /// </summary>
        /// <seealso cref="ARCollaborationData"/>
        /// <seealso cref="DequeueCollaborationData"/>
        public int collaborationDataCount => NativeApi.UnityARKit_Session_GetCollaborationDataQueueSize(self);

        /// <summary>
        /// The requested <see cref="ARWorldAlignment"/> for the session.
        /// </summary>
        /// <remarks>
        /// **Note:** <see cref="ARWorldAlignment.GravityAndHeading"/> requires location services to be enabled and the
        /// user must grant your app permission to use location services. You must therefore provide a
        /// [Location Usage Description](xref:PlayerSettingsiOS-Other) entry in the Player Settings.
        /// </remarks>
        public ARWorldAlignment requestedWorldAlignment
        {
            get => NativeApi.GetRequestedWorldAlignment(self);
            set => NativeApi.SetRequestedWorldAlignment(self, value);
        }

        /// <summary>
        /// The current <see cref="ARWorldAlignment"/> for the session.
        /// </summary>
        public ARWorldAlignment currentWorldAlignment => NativeApi.GetCurrentWorldAlignment(self);

        /// <summary>
        /// Dequeues the oldest collaboration data in the queue. After calling this method, <see cref="collaborationDataCount"/>
        /// will be decremented by one.
        /// </summary>
        /// <returns>The nextx <see cref="ARCollaborationData"/> in the queue.</returns>
        /// <exception cref="System.NotSupportedException">Thrown if <see cref="supportsCollaboration"/> is false.</exception>
        /// <exception cref="System.InvalidOperationException">Thrown if <see cref="collaborationDataCount"/> is zero.</exception>
        /// <seealso cref="ARCollaborationData"/>
        public ARCollaborationData DequeueCollaborationData()
        {
            if (!supportsCollaboration)
                throw new NotSupportedException("ARCollaborationData is not supported by this version of iOS.");

            if (collaborationDataCount == 0)
                throw new InvalidOperationException("There is no collaboration data to dequeue.");

            return new ARCollaborationData(NativeApi.UnityARKit_Session_DequeueCollaborationData(self));
        }

        /// <summary>
        /// Applies <see cref="ARCollaborationData"/> to the session.
        /// </summary>
        /// <param name="collaborationData">The <see cref="ARCollaborationData"/> to apply to the session.</param>
        /// <exception cref="System.NotSupportedException">Thrown if <see cref="supportsCollaboration"/> is false.</exception>
        /// <exception cref="System.InvalidOperationException">Thrown if <paramref name="collaborationData"/> is not valid.</exception>
        public void UpdateWithCollaborationData(ARCollaborationData collaborationData)
        {
            if (!supportsCollaboration)
                throw new NotSupportedException("ARCollaborationData is not supported by this version of iOS.");

            if (!collaborationData.valid)
                throw new InvalidOperationException("Invalid collaboration data.");

            NativeApi.UnityARKit_Session_UpdateWithCollaborationData(self, collaborationData.m_NativePtr);
        }

#if UNITY_2020_2_OR_NEWER
        protected override void OnCreate()
        {
            SetupProvider((ARKitProvider)provider);
        }
#else
        /// <summary>
        /// Creates the provider interface.
        /// </summary>
        /// <returns>The provider interface for ARKit</returns>
        protected override Provider CreateProvider()
        {
            var provider = new ARKitProvider();
            SetupProvider(provider);
            return provider;
        }
#endif

        void SetupProvider(ARKitProvider provider)
        {
            provider.SetupSessionDelegate(this);
        }

        static ARKitSessionSubsystem()
        {
            s_OnAsyncWorldMapCompleted = OnAsyncConversionComplete;
        }

        static NativeApi.OnAsyncConversionCompleteDelegate s_OnAsyncWorldMapCompleted;

        [MonoPInvokeCallback(typeof(NativeApi.OnAsyncConversionCompleteDelegate))]
        static unsafe void OnAsyncConversionComplete(ARWorldMapRequestStatus status, int worldMapId, IntPtr context)
        {
            var handle = GCHandle.FromIntPtr(context);
            var onComplete = (Action<ARWorldMapRequestStatus, ARWorldMap>)handle.Target;

            if (status.IsError())
            {
                onComplete(status, default(ARWorldMap));
            }
            else
            {
                var worldMap = new ARWorldMap(worldMapId);
                onComplete(status, worldMap);
            }

            handle.Free();
        }

        class ARKitProvider : Provider
        {
            IntPtr m_Self;

            GCHandle m_SubsystemHandle;

            public IntPtr self => m_Self;

            public ARKitProvider()
            {
                m_Self = NativeApi.UnityARKit_Session_Construct();
            }

            public void SetupSessionDelegate(ARKitSessionSubsystem subsystem)
            {
                m_SubsystemHandle = GCHandle.Alloc(subsystem);
                NativeApi.SetSubsystemHandle(m_Self, (IntPtr)m_SubsystemHandle);
                NativeApi.SetSessionDidFailWithErrorCallback(m_Self, ARKitSessionDelegate.s_SessionDidFailWithError);
                NativeApi.SetCoachingOverlayViewWillActivateCallback(m_Self, ARKitSessionDelegate.s_CoachingOverlayViewWillActivate);
                NativeApi.SetCoachingOverlayViewDidDeactivateCallback(m_Self, ARKitSessionDelegate.s_CoachingOverlayViewDidDeactivate);
                NativeApi.SetConfigurationChangedCallback(m_Self, ARKitSessionDelegate.s_ConfigurationChanged);
            }

            bool AtLeastOneConfigurationExists() => NativeApi.UnityARKit_Session_GetConfigurationDescriptors(m_Self, IntPtr.Zero, 0, 0) > 0;

#if UNITY_2020_2_OR_NEWER
            public override void Start() => NativeApi.UnityARKit_Session_Resume(m_Self);

            public override void Stop() => NativeApi.UnityARKit_Session_Pause(m_Self);
#else
            public override void Resume() => NativeApi.UnityARKit_Session_Resume(m_Self);

            public override void Pause() => NativeApi.UnityARKit_Session_Pause(m_Self);
#endif

            public override void Update(XRSessionUpdateParams updateParams)
                => throw new NotSupportedException("Update requires a configuration.");

            public override void Update(XRSessionUpdateParams updateParams, Configuration configuration)
                => NativeApi.UnityARKit_Session_Update(m_Self, configuration.descriptor.identifier, configuration.features);

            public override unsafe NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator)
            {
                int count = NativeApi.UnityARKit_Session_GetConfigurationDescriptors(m_Self, IntPtr.Zero, 0, 0);
                Assert.IsTrue(count > 0, "There are no configuration descriptors.");

                var descriptors = new NativeArray<ConfigurationDescriptor>(count, allocator);
                NativeApi.UnityARKit_Session_GetConfigurationDescriptors(
                    m_Self, new IntPtr(descriptors.GetUnsafePtr()),
                    descriptors.Length, sizeof(ConfigurationDescriptor));

                return descriptors;
            }

            public override void Destroy()
            {
                Assert.AreNotEqual(IntPtr.Zero, m_Self, $"Tried to destroy an already destroyed {nameof(ARKitSessionSubsystem)}.");
                m_SubsystemHandle.Free();
                m_SubsystemHandle = default;
                Api.CFRelease(ref m_Self);
            }

            public override void Reset() => NativeApi.UnityARKit_Session_Reset(m_Self);

            public override Promise<SessionAvailability> GetAvailabilityAsync() => Promise<SessionAvailability>.CreateResolvedPromise(
                NativeApi.UnityARKit_Session_IsSupported() && AtLeastOneConfigurationExists()? SessionAvailability.Installed | SessionAvailability.Supported : SessionAvailability.None);

            public override Promise<SessionInstallationStatus> InstallAsync() =>
                throw new NotSupportedException("ARKit cannot be installed.");

            public override IntPtr nativePtr => NativeApi.UnityARKit_Session_GetNativePtr(m_Self);

            public override TrackingState trackingState => NativeApi.UnityARKit_Session_GetTrackingState(m_Self);

            public override NotTrackingReason notTrackingReason => NativeApi.UnityARKit_Session_GetNotTrackingReason(m_Self);

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

            public override Feature currentTrackingMode => NativeApi.UnityARKit_Session_GetCurrentTrackingMode(m_Self);

            public override Guid sessionId => NativeApi.UnityARKit_Session_GetSessionIdentifier(m_Self);

            /// <summary>
            /// Enabled is the same as requested because this is a property of Unity's implementation, not a setting within ARKit.
            /// </summary>
            public override bool matchFrameRateEnabled => matchFrameRateRequested;

            public override bool matchFrameRateRequested
            {
                get => NativeApi.UnityARKit_Session_GetMatchFrameRateEnabled(m_Self);
                set => NativeApi.UnityARKit_Session_SetMatchFrameRateEnabled(m_Self, value);
            }

            public override int frameRate => NativeApi.UnityARKit_Session_GetFrameRate(m_Self);
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        static void RegisterDescriptor()
        {
            if (!Api.AtLeast11_0())
                return;

            Api.EnsureRootViewIsSetup();

            XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
            {
                id = "ARKit-Session",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(ARKitSessionSubsystem.ARKitProvider),
                subsystemTypeOverride = typeof(ARKitSessionSubsystem),
#else
                subsystemImplementationType = typeof(ARKitSessionSubsystem),
#endif
                supportsInstall = false,
                supportsMatchFrameRate = true,
            });
        }

        static class NativeApi
        {
            // Should match ARKitAvailability in SessionProvider.h
            public enum Availability
            {
                None,
                Supported
            }

            public delegate void OnAsyncConversionCompleteDelegate(
                ARWorldMapRequestStatus status,
                int worldMapId,
                IntPtr context);

#if UNITY_XR_ARKIT_LOADER_ENABLED
            [DllImport("__Internal")]
            public static extern int UnityARKit_createWorldMapRequest();

            [DllImport("__Internal")]
            public static extern void UnityARKit_createWorldMapRequestWithCallback(
                OnAsyncConversionCompleteDelegate callback,
                IntPtr context);

            [DllImport("__Internal")]
            public static extern ARWorldMappingStatus UnityARKit_getWorldMapRequestStatus();

            [DllImport("__Internal")]
            public static extern void UnityARKit_applyWorldMap(int worldMapId);

            [DllImport("__Internal")]
            public static extern IntPtr UnityARKit_Session_GetNativePtr(IntPtr self);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Session_IsSupported();

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_Update(IntPtr self, IntPtr desiredConfigurationClass, Feature features);

            /// <summary>
            /// If <paramref name="buffer"/> is not null, populates <paramref name="buffer"/> with up to <paramref name="capacity"/> configuration descriptors.
            /// Otherwise, all other parameters are ignored. Call this method once with a null buffer to get the number of descriptors, then again
            /// with a buffer to populate.
            /// </summary>
            /// <param name="self"></param>
            /// <param name="buffer"></param>
            /// <param name="capacity"></param>
            /// <param name="stride"></param>
            /// <returns></returns>
            [DllImport("__Internal")]
            public static extern int UnityARKit_Session_GetConfigurationDescriptors(IntPtr self, IntPtr buffer, int capacity, int stride);

            [DllImport("__Internal")]
            public static extern IntPtr UnityARKit_Session_Construct();

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_Resume(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_Pause(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_Reset(IntPtr self);

            [DllImport("__Internal")]
            public static extern TrackingState UnityARKit_Session_GetTrackingState(IntPtr self);

            [DllImport("__Internal")]
            public static extern NotTrackingReason UnityARKit_Session_GetNotTrackingReason(IntPtr self);

            [DllImport("__Internal")]
            public static extern IntPtr UnityARKit_Session_DequeueCollaborationData(IntPtr self);

            [DllImport("__Internal")]
            public static extern int UnityARKit_Session_GetCollaborationDataQueueSize(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_UpdateWithCollaborationData(IntPtr self, IntPtr data);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Session_GetCollaborationEnabled(IntPtr self);

            [DllImport("__Internal")]
            public static extern Guid UnityARKit_Session_GetSessionIdentifier(IntPtr self);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Session_GetMatchFrameRateEnabled(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_SetMatchFrameRateEnabled(IntPtr self, bool enabled);

            [DllImport("__Internal")]
            public static extern int UnityARKit_Session_GetFrameRate(IntPtr self);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Session_GetCoachingOverlayActivatesAutomatically(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_SetCoachingOverlayActivatesAutomatically(IntPtr self, bool activatesAutomatically);

            [DllImport("__Internal")]
            public static extern bool UnityARKit_Session_IsCoachingOverlayActive(IntPtr self);

            [DllImport("__Internal")]
            public static extern ARCoachingGoal UnityARKit_Session_GetRequestedCoachingGoal(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_SetRequestedCoachingGoal(IntPtr self, ARCoachingGoal value);

            [DllImport("__Internal")]
            public static extern ARCoachingGoal UnityARKit_Session_GetCurrentCoachingGoal(IntPtr self);

            [DllImport("__Internal")]
            public static extern void UnityARKit_Session_SetCoachingOverlayActive(IntPtr self, bool active, bool animated);

            [DllImport("__Internal")]
            public static extern ARWorldMappingStatus UnityARKit_Session_GetWorldMappingStatus(IntPtr self);

            [DllImport("__Internal")]
            public static extern Feature UnityARKit_Session_GetCurrentTrackingMode(IntPtr self);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_GetRequestedWorldAlignment")]
            public static extern ARWorldAlignment GetRequestedWorldAlignment(IntPtr self);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetRequestedWorldAlignment")]
            public static extern void SetRequestedWorldAlignment(IntPtr self, ARWorldAlignment value);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_GetCurrentWorldAlignment")]
            public static extern ARWorldAlignment GetCurrentWorldAlignment(IntPtr self);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetSubsystemHandle")]
            public static extern void SetSubsystemHandle(IntPtr self, IntPtr subsystemHandle);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetSessionDidFailWithErrorCallback")]
            public static extern void SetSessionDidFailWithErrorCallback(IntPtr self, Action<IntPtr, NSError> callback);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetCoachingOverlayViewWillActivateCallback")]
            public static extern void SetCoachingOverlayViewWillActivateCallback(IntPtr self, Action<IntPtr> callback);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetCoachingOverlayViewDidDeactivateCallback")]
            public static extern void SetCoachingOverlayViewDidDeactivateCallback(IntPtr self, Action<IntPtr> callback);

            [DllImport("__Internal", EntryPoint = "UnityARKit_Session_SetConfigurationChangedCallback")]
            public static extern void SetConfigurationChangedCallback(IntPtr self, Action<IntPtr> callback);
#else
            static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

            public static int UnityARKit_createWorldMapRequest()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_createWorldMapRequestWithCallback(
                OnAsyncConversionCompleteDelegate callback,
                IntPtr context)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static ARWorldMappingStatus UnityARKit_getWorldMapRequestStatus()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_applyWorldMap(int worldMapId)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static IntPtr UnityARKit_Session_GetNativePtr(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Session_IsSupported() => false;

            public static void UnityARKit_Session_Update(IntPtr self, IntPtr desiredConfigurationClass, Feature features)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static int UnityARKit_Session_GetConfigurationDescriptors(IntPtr self, IntPtr buffer, int capacity, int stride)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static IntPtr UnityARKit_Session_Construct()
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_Resume(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_Pause(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_Reset(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static TrackingState UnityARKit_Session_GetTrackingState(IntPtr self) => TrackingState.None;

            public static NotTrackingReason UnityARKit_Session_GetNotTrackingReason(IntPtr self) => NotTrackingReason.Unsupported;

            public static IntPtr UnityARKit_Session_DequeueCollaborationData(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static int UnityARKit_Session_GetCollaborationDataQueueSize(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_UpdateWithCollaborationData(IntPtr self, IntPtr data)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Session_GetCollaborationEnabled(IntPtr self) => false;

            public static Guid UnityARKit_Session_GetSessionIdentifier(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Session_GetMatchFrameRateEnabled(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_SetMatchFrameRateEnabled(IntPtr self, bool enabled)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static int UnityARKit_Session_GetFrameRate(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Session_GetCoachingOverlayActivatesAutomatically(IntPtr self) => false;

            public static void UnityARKit_Session_SetCoachingOverlayActivatesAutomatically(IntPtr self, bool activatesAutomatically)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static bool UnityARKit_Session_IsCoachingOverlayActive(IntPtr self) => false;

            public static ARCoachingGoal UnityARKit_Session_GetRequestedCoachingGoal(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_SetRequestedCoachingGoal(IntPtr self, ARCoachingGoal value)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static ARCoachingGoal UnityARKit_Session_GetCurrentCoachingGoal(IntPtr self)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static void UnityARKit_Session_SetCoachingOverlayActive(IntPtr self, bool active, bool animated)
            {
                throw new System.NotImplementedException(k_ExceptionMsg);
            }

            public static ARWorldMappingStatus UnityARKit_Session_GetWorldMappingStatus(IntPtr self) => ARWorldMappingStatus.NotAvailable;

            public static Feature UnityARKit_Session_GetCurrentTrackingMode(IntPtr self) => Feature.None;

            public static ARWorldAlignment GetRequestedWorldAlignment(IntPtr self) => default;

            public static void SetRequestedWorldAlignment(IntPtr self, ARWorldAlignment value) { }

            public static ARWorldAlignment GetCurrentWorldAlignment(IntPtr self) => default;

            public static void SetSubsystemHandle(IntPtr self, IntPtr subsystemHandle) { }

            public static void SetSessionDidFailWithErrorCallback(IntPtr self, Action<IntPtr, NSError> callback) { }

            public static void SetCoachingOverlayViewWillActivateCallback(IntPtr self, Action<IntPtr> callback) { }

            public static void SetCoachingOverlayViewDidDeactivateCallback(IntPtr self, Action<IntPtr> callback) { }

            public static void SetConfigurationChangedCallback(IntPtr self, Action<IntPtr> callback) { }
#endif
        }
    }
}
