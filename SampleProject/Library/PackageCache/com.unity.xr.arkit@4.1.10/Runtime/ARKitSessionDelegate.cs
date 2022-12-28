using System;
using System.Runtime.InteropServices;
using AOT;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// A set of callbacks related to the ARKit session. Implement this class to provide custom handling of certain
    /// session events.
    /// </summary>
    /// <seealso cref="DefaultARKitSessionDelegate"/>
    /// <seealso cref="ARKitSessionSubsystem.sessionDelegate"/>
    public abstract class ARKitSessionDelegate
    {
        /// <summary>
        /// Invoked when the session fails. This base class implementation does nothing.
        /// </summary>
        /// <remarks>
        /// Use this to respond to session failures. For example, the <see cref="DefaultARKitSessionDelegate"/>
        /// implementation simply tries to restart the session by calling
        /// [Reset](xref:UnityEngine.XR.ARSubsystems.XRSessionSubsystem.Reset).
        ///
        /// See [session:didFailWithError:](https://developer.apple.com/documentation/arkit/arsessionobserver/2887453-session?language=objc)
        /// for more information.
        /// </remarks>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the ARKit session.</param>
        /// <param name="error">The <see cref="NSError"/> object describing the failure. This object is only valid
        ///     during this callback. See also <see cref="ARKitErrorCode"/>.</param>
        protected virtual void OnSessionDidFailWithError(ARKitSessionSubsystem sessionSubsystem, NSError error) { }

        /// <summary>
        /// Invoked when a change to the
        /// [ARConfiguration](https://developer.apple.com/documentation/arkit/arconfiguration?language=objc)
        /// is requested.
        /// </summary>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the ARKit session.</param>
        protected virtual void OnConfigurationChanged(ARKitSessionSubsystem sessionSubsystem) { }

        /// <summary>
        /// Invoked when the
        /// [coaching overlay view](https://developer.apple.com/documentation/arkit/arcoachingoverlayview?language=objc)
        /// activates. This base class implementation does nothing.
        /// </summary>
        /// <remarks>
        /// See [coachingOverlayViewWillActivate:](https://developer.apple.com/documentation/arkit/arcoachingoverlayviewdelegate/3152985-coachingoverlayviewwillactivate?language=objc)
        /// for more information.
        /// </remarks>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the ARKit session.</param>
        /// <seealso cref="ARKitSessionSubsystem.requestedCoachingGoal"/>
        /// <seealso cref="ARKitSessionSubsystem.currentCoachingGoal"/>
        /// <seealso cref="ARKitSessionSubsystem.SetCoachingActive"/>
        /// <seealso cref="OnCoachingOverlayViewDidDeactivate"/>
        protected virtual void OnCoachingOverlayViewWillActivate(ARKitSessionSubsystem sessionSubsystem) { }

        /// <summary>
        /// Invoked when the
        /// [coaching experience](https://developer.apple.com/documentation/arkit/arcoachingoverlayview?language=objc)
        /// is completely deactivated. This base class implementation does nothing.
        /// </summary>
        /// <remarks>
        /// See [coachingOverlayViewDidDeactivate:](https://developer.apple.com/documentation/arkit/arcoachingoverlayviewdelegate/3152983-coachingoverlayviewdiddeactivate?language=objc)
        /// for more information.
        /// </remarks>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the ARKit session.</param>
        /// <seealso cref="ARKitSessionSubsystem.requestedCoachingGoal"/>
        /// <seealso cref="ARKitSessionSubsystem.currentCoachingGoal"/>
        /// <seealso cref="ARKitSessionSubsystem.SetCoachingActive"/>
        /// <seealso cref="OnCoachingOverlayViewWillActivate"/>
        protected virtual void OnCoachingOverlayViewDidDeactivate(ARKitSessionSubsystem sessionSubsystem) { }

        internal static Action<IntPtr, NSError> s_SessionDidFailWithError = SessionDidFailWithError;

        internal static Action<IntPtr> s_CoachingOverlayViewWillActivate = CoachingOverlayViewWillActivate;

        internal static Action<IntPtr> s_CoachingOverlayViewDidDeactivate = CoachingOverlayViewDidDeactivate;

        internal static Action<IntPtr> s_ConfigurationChanged = ConfigurationChanged;

        [MonoPInvokeCallback(typeof(Action<IntPtr, NSError>))]
        static void SessionDidFailWithError(IntPtr subsystemHandle, NSError error)
        {
            if (GCHandle.FromIntPtr(subsystemHandle).Target is ARKitSessionSubsystem subsystem)
            {
                subsystem.sessionDelegate?.OnSessionDidFailWithError(subsystem, error);
            }
        }

        [MonoPInvokeCallback(typeof(Action<IntPtr>))]
        static void CoachingOverlayViewWillActivate(IntPtr subsystemHandle)
        {
            if (GCHandle.FromIntPtr(subsystemHandle).Target is ARKitSessionSubsystem subsystem)
            {
                subsystem.sessionDelegate?.OnCoachingOverlayViewWillActivate(subsystem);
            }
        }

        [MonoPInvokeCallback(typeof(Action<IntPtr>))]
        static void CoachingOverlayViewDidDeactivate(IntPtr subsystemHandle)
        {
            if (GCHandle.FromIntPtr(subsystemHandle).Target is ARKitSessionSubsystem subsystem)
            {
                subsystem.sessionDelegate?.OnCoachingOverlayViewDidDeactivate(subsystem);
            }
        }

        [MonoPInvokeCallback(typeof(Action<IntPtr>))]
        static void ConfigurationChanged(IntPtr subsystemHandle)
        {
            if (GCHandle.FromIntPtr(subsystemHandle).Target is ARKitSessionSubsystem subsystem)
            {
                subsystem.sessionDelegate?.OnConfigurationChanged(subsystem);
            }
        }
    }
}
