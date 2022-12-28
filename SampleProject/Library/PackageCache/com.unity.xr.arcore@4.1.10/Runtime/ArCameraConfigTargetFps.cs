using System;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Target camera capture frame rates.
    /// </summary>
    /// <remarks>
    /// The target frame rate represents the maximum or desired frame rate. Actual
    /// camera capture frame rates can be lower than the target frame rate under low
    /// light conditions in order to accommodate longer exposure times.
    /// </remarks>
    /// <seealso cref="ArCameraConfigFilter"/>
    [Flags]
    public enum ArCameraConfigTargetFps
    {
        /// <summary>
        /// Target 30fps camera capture frame rate.
        /// </summary>
        /// <remarks>
        /// Available on all ARCore supported devices.
        ///
        /// Used by <see cref="ArCameraConfigFilter.SetTargetFps"/> and <see cref="ArCameraConfigFilter.GetTargetFps"/>.
        /// </remarks>
        Fps30 = 0x0001,

        /// <summary>
        /// Target 60fps camera capture frame rate.
        /// </summary>
        /// <remarks>
        /// Increases power consumption and may increase app memory usage.
        ///
        /// See the [ARCore supported devices](https://developers.google.com/ar/discover/supported-devices) page for a
        /// list of devices that currently support 60fps.
        ///
        /// Used by <see cref="ArCameraConfigFilter.SetTargetFps"/> and <see cref="ArCameraConfigFilter.GetTargetFps"/>.
        /// </remarks>
        Fps60 = 0x0002,
    }
}
