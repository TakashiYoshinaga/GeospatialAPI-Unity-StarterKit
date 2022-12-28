using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Contains information regarding the camera configuration.
    /// </summary>
    /// <remarks>
    /// Different devices support different camera configurations. This includes
    /// the resolution of the image and may include framerate on some platforms.
    ///
    /// The camera image configuration affects the resolution of the image
    /// returned by <see cref="XRCameraSubsystem.TryAcquireLatestCpuImage"/>.
    /// </remarks>
    [StructLayout(LayoutKind.Sequential)]
    public struct XRCameraConfiguration : IEquatable<XRCameraConfiguration>
    {
        Vector2Int m_Resolution;

        int m_Framerate;

        IntPtr m_NativeConfigurationHandle;

        /// <summary>
        /// The width of the camera resolution
        /// </summary>
        /// <value>
        /// The width, in pixels, of the camera resolution
        /// </value>
        public int width => m_Resolution.x;

        /// <summary>
        /// The height of the camera resolution
        /// </summary>
        /// <value>
        /// The height, in pixels, of the camera resolution
        /// </value>
        public int height => m_Resolution.y;

        /// <summary>
        /// The camera resolution.
        /// </summary>
        /// <value>
        /// The camera resolution in pixels.
        /// </value>
        public Vector2Int resolution => m_Resolution;

        /// <summary>
        /// The framerate, if this camera configuration specifies one.
        /// </summary>
        /// <value>
        /// The framerate, if this camera configuration specifies one. Otherwise, <c>null</c>.
        /// </value>
        /// <remarks>
        /// On some platforms, different resolutions may affect the available framerate.
        /// </remarks>
        public int? framerate => (m_Framerate > 0) ? new int?(m_Framerate) : new int?();

        /// <summary>
        /// The platform-dependent handle that contains information required to acquire
        /// the native camera configuration.
        /// </summary>
        public IntPtr nativeConfigurationHandle => m_NativeConfigurationHandle;

        /// <summary>
        /// Constructs a camera configuration with a framerate.
        /// </summary>
        /// <param name="handle">The platform specific native handle that can be used to get the native configuration.</param>
        /// <param name="resolution">The resolution of the camera image.</param>
        /// <param name="framerate">The camera framerate. Throws <c>ArgumentOutOfRangeException</c>
        /// if <paramref name="framerate"/> is less than or equal to zero.</param>
        public XRCameraConfiguration(IntPtr handle, Vector2Int resolution, int framerate)
        {
            if (framerate <= 0)
                throw new ArgumentOutOfRangeException(
                    string.Format("{0} is not a valid framerate; it must be greater than zero.", framerate));

            m_NativeConfigurationHandle = handle;
            m_Resolution = resolution;
            m_Framerate = framerate;
        }

        /// <summary>
        /// Constructs a camera configuration without a framerate.
        /// </summary>
        /// <param name="handle">The platform specific native handle that can be used to get the native configuration.</param>
        /// <param name="resolution">The resolution of the camera image.</param>
        public XRCameraConfiguration(IntPtr handle, Vector2Int resolution)
        {
            m_NativeConfigurationHandle = handle;
            m_Resolution = resolution;
            m_Framerate = 0;
        }

        /// <summary>
        /// Converts the configuration to a string, suitable for debug logging.
        /// </summary>
        /// <returns></returns>
        public override string ToString() => $"handle <{m_NativeConfigurationHandle}> {width}x{height}{(framerate.HasValue ? $" at {framerate.Value} Hz" : "")}";

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            unchecked
            {
                var hash = m_NativeConfigurationHandle.GetHashCode();
                hash = hash * 486187739 + m_Resolution.GetHashCode();
                hash = hash * 486187739 + framerate.GetHashCode();
                return hash;
            }
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="XRCameraConfiguration"/> and
        /// <see cref="Equals(XRCameraConfiguration)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(System.Object obj) => ((obj is XRCameraConfiguration) && Equals((XRCameraConfiguration)obj));

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="XRCameraConfiguration"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="XRCameraConfiguration"/>, otherwise false.</returns>
        public bool Equals(XRCameraConfiguration other) => (m_Resolution == other.m_Resolution) && (framerate == other.framerate) && (m_NativeConfigurationHandle == other.m_NativeConfigurationHandle);

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(XRCameraConfiguration)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(XRCameraConfiguration lhs, XRCameraConfiguration rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(XRCameraConfiguration)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(XRCameraConfiguration lhs, XRCameraConfiguration rhs) => !lhs.Equals(rhs);
    }
}
