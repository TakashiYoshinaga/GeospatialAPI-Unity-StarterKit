using System;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Depth sensor usage filters for <see cref="ArCameraConfigFilter"/>.
    /// </summary>
    [Flags]
    public enum ArCameraConfigDepthSensorUsage
    {
        /// <summary>
        /// Filters for camera configs that require a depth sensor to be present on the device, and
        /// that will be used by ARCore. See <see cref="ArCameraConfigFilter"/>
        /// </summary>
        /// <remarks>
        /// See [ARCore supported devices](https://developers.google.com/ar/discover/supported-devices) for a list of
        /// devices that currently have supported depth sensors.
        /// </remarks>
        RequireAndUse = 0x0001,

        /// <summary>
        /// Filters for camera configs where a depth sensor is not present, or is present but will not be used
        /// by ARCore.
        /// </summary>
        /// <remarks>
        /// Used by <see cref="ArCameraConfigFilter.SetDepthSensorUsage"/> and
        /// <see cref="ArCameraConfigFilter.GetDepthSensorUsage"/> to filter camera configurations when the app requires
        /// exclusive access to the depth sensor outside of ARCore, for example to support 3D mesh reconstruction.
        /// Available on all ARCore supported devices.
        /// </remarks>
        DoNotUse = 0x0002,
    }
}
