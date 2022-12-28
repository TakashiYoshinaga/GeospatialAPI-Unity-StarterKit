using System;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// A default implementation of <see cref="ARKitSessionDelegate"/>.
    /// </summary>
    public class DefaultARKitSessionDelegate : ARKitSessionDelegate
    {
        /// <summary>
        /// The number of session reset attempts remaining.
        /// </summary>
        /// <seealso cref="maxRetryCount"/>
        public int retriesRemaining { get; protected set; }

        /// <summary>
        /// (Read Only) The maximum number of attempts to reset to the session if the session fails.
        /// </summary>
        /// <seealso cref="OnSessionDidFailWithError"/>
        public virtual int maxRetryCount { get; set; } = 5;

        /// <summary>
        /// Default handling for session failures. This implementation logs an error and attempts to
        /// [reset](xref:UnityEngine.XR.ARSubsystems.XRSessionSubsystem.Reset) the session up to
        /// <see cref="maxRetryCount"/> times.
        /// </summary>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the
        ///     ARKit session.</param>
        /// <param name="error">The <see cref="NSError"/> object describing the failure.</param>
        protected override void OnSessionDidFailWithError(ARKitSessionSubsystem sessionSubsystem, NSError error)
        {
            if (retriesRemaining > 0)
            {
                --retriesRemaining;
                Debug.LogWarning($"The session has failed with error code {error.code}: \"{error.localizedDescription}\". Attempting reset ({retriesRemaining} retries remaining).");
                sessionSubsystem.Reset();
            }
            else
            {
                Debug.LogError($"The session has failed with error code {error.code}: \"{error.localizedDescription}\". Retry limit of {maxRetryCount} has been reached. No further attempts will be made to reset the session unless the configuration changes.");
            }
        }

        /// <summary>
        /// Resets the <see cref="retriesRemaining"/> to <see cref="maxRetryCount"/>.
        /// </summary>
        /// <param name="sessionSubsystem">The <see cref="ARKitSessionSubsystem"/> which provides an interface to the
        ///     ARKit session.</param>
        protected override void OnConfigurationChanged(ARKitSessionSubsystem sessionSubsystem)
        {
            retriesRemaining = maxRetryCount;
        }
    }
}
