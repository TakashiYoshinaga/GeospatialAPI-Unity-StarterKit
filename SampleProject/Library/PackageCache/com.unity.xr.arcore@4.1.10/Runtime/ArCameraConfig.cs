using System;
using UnityEngine.XR.ARSubsystems;

#if UNITY_ANDROID && !UNITY_EDITOR
using System.Runtime.InteropServices;
#endif

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Represents an
    /// [ARCore camera configuration](https://developers.google.com/ar/reference/c/group/ar-camera-config).
    /// </summary>
    public struct ArCameraConfig : IDisposable, IEquatable<ArCameraConfig>
    {
        IntPtr m_Self;

        ArCameraConfig(IntPtr value) => m_Self = value;

        /// <summary>
        /// Create a <see cref="ArCameraConfig"/> from an existing native pointer. The native pointer must point
        /// to an existing <see cref="ArCameraConfig"/>.
        /// </summary>
        /// <param name="value">A pointer to an existing native <see cref="ArCameraConfig"/>.</param>
        /// <returns>Returns an <see cref="ArCameraConfig"/> whose underlying native pointer is
        ///     <paramref name="value"/>.</returns>
        public static ArCameraConfig FromIntPtr(IntPtr value) => new ArCameraConfig(value);

        /// <summary>
        /// Represents a null <see cref="ArCameraConfig"/>, i.e., one whose underlying native pointer is `null`.
        /// </summary>
        public static ArCameraConfig Null => default;

        /// <summary>
        /// (Read Only) Indicates whether this <see cref="ArCameraConfig"/> is <see cref="Null"/>.
        /// </summary>
        public bool IsNull => m_Self == IntPtr.Zero;

        /// <summary>
        /// Gets the underlying native pointer for this <see cref="ArCameraConfig"/>.
        /// </summary>
        /// <returns>Returns the underlying native pointer for this <see cref="ArCameraConfig"/>.</returns>
        public IntPtr AsIntPtr() => m_Self;

        /// <summary>
        /// Creates a new camera config object. To prevent memory leaks, this object should be disposed with
        /// <see cref="Dispose"/> when you no longer need it.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        public ArCameraConfig(ArSession session) => Create(session, out this);

        /// <summary>
        /// Destroys this <see cref="ArCameraConfig"/> and sets its underlying pointer to `null`.
        /// </summary>
        /// <remarks>
        /// You should only dispose an <see cref="ArCameraConfig"/> if you explicitly created it, e.g., by calling
        /// <see cref="ArCameraConfig(ArSession)"/>. If you convert an existing config from an <see cref="IntPtr"/>
        /// (e.g., by calling <see cref="FromIntPtr"/>), then you should not dispose it.
        /// </remarks>
        public void Dispose()
        {
            if (m_Self != IntPtr.Zero)
            {
                Destroy(this);
            }

            m_Self = default;
        }

        /// <summary>
        /// Obtains the camera id for this camera config.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the camera id for this camera config.</returns>
        public string GetCameraId(ArSession session)
        {
            GetCameraId(session, this, out var cameraId);
            using (cameraId)
            {
                return cameraId.ToString();
            }
        }

        /// <summary>
        /// Gets the depth sensor usage settings.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the depth sensor usage settings.</returns>
        public ArCameraConfigDepthSensorUsage GetDepthSensorUsage(ArSession session)
        {
            GetDepthSensorUsage(session, this, out var value);
            return value;
        }

        /// <summary>
        /// Gets the facing direction of the camera selected by this config.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the facing direction of the camera selected by this config.</returns>
        public ArCameraConfigFacingDirection GetFacingDirection(ArSession session)
        {
            GetFacingDirection(session, this, out var value);
            return value;
        }

        /// <summary>
        /// Gets the minimum and maximum camera capture rate in frames per second (fps) for the current camera config.
        /// </summary>
        /// <remarks>
        /// Actual capture frame rate will vary within this range, depending on lighting conditions. Frame rates will
        /// generally be lower under poor lighting conditions to accommodate longer exposure times.
        /// </remarks>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the minimum and maximum camera capture rate in frames per second supported by this camera
        ///     config.</returns>
        public (int minFps, int maxFps) GetFpsRange(ArSession session)
        {
            GetFpsRange(session, this, out var min, out var max);
            return (min, max);
        }

        /// <summary>
        /// Gets the camera image dimensions for this camera config.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the camera image dimensions for this camera config.</returns>
        public (int width, int height) GetImageDimensions(ArSession session)
        {
            GetImageDimensions(session, this, out var width, out var height);
            return (width, height);
        }

        /// <summary>
        /// Gets the camera texture dimensions for this camera config.
        /// </summary>
        /// <param name="session">The ARCore session.</param>
        /// <returns>Returns the camera texture dimensions for this camera config.</returns>
        public (int width, int height) GetTextureDimensions(ArSession session)
        {
            GetTextureDimensions(session, this, out var width, out var height);
            return (width, height);
        }

        /// <summary>
        /// Casts an <see cref="ArCameraConfig"/> to its underlying native pointer.
        /// </summary>
        /// <param name="cameraConfig">The <see cref="ArCameraConfig"/> to cast.</param>
        /// <returns>Returns the underlying native pointer for <paramref name="cameraConfig"/></returns>
        public static explicit operator IntPtr(ArCameraConfig cameraConfig) => cameraConfig.AsIntPtr();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <remarks>
        /// Two <see cref="ArCameraConfig"/>s are considered equal if their underlying pointers are equal.
        /// </remarks>
        /// <param name="other">The <see cref="ArCameraConfig"/> to compare against.</param>
        /// <returns>Returns `true` if the underlying native pointers are the same. Returns `false` otherwise.</returns>
        public bool Equals(ArCameraConfig other) => m_Self == other.m_Self;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">An <see cref="object"/> to compare against.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is an <see cref="ArCameraConfig"/> and it compares
        ///     equal to this one using <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfig)"/>.</returns>
        public override bool Equals(object obj) => obj is ArCameraConfig other && Equals(other);

        /// <summary>
        /// Generates a hash code suitable for use with a `HashSet` or `Dictionary`
        /// </summary>
        /// <returns>Returns a hash code for this <see cref="ArCameraConfig"/>.</returns>
        public override int GetHashCode() => m_Self.GetHashCode();

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfig)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArCameraConfig"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArCameraConfig"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfig)"/>. Returns `false` otherwise.</returns>
        public static bool operator ==(ArCameraConfig lhs, ArCameraConfig rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as the negation of <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfig)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArCameraConfig"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArCameraConfig"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `false` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfig)"/>. Returns `true` otherwise.</returns>
        public static bool operator !=(ArCameraConfig lhs, ArCameraConfig rhs) => !lhs.Equals(rhs);

#if UNITY_ANDROID && !UNITY_EDITOR
        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_create")]
        static extern void Create(ArSession session, out ArCameraConfig value);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_destroy")]
        static extern void Destroy(ArCameraConfig self);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getCameraId")]
        static extern void GetCameraId(ArSession session, ArCameraConfig self, out ArString valueOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getDepthSensorUsage")]
        static extern void GetDepthSensorUsage(ArSession session, ArCameraConfig self, out ArCameraConfigDepthSensorUsage valueOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getFacingDirection")]
        static extern void GetFacingDirection(ArSession session, ArCameraConfig self, out ArCameraConfigFacingDirection valueOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getFpsRange")]
        static extern void GetFpsRange(ArSession session, ArCameraConfig self, out int minFps, out int maxFps);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getImageDimensions")]
        static extern void GetImageDimensions(ArSession session, ArCameraConfig self, out int width, out int height);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfig_getTextureDimensions")]
        static extern void GetTextureDimensions(ArSession session, ArCameraConfig self, out int width, out int height);
#else
        static void Create(ArSession session, out ArCameraConfig value) => value = default;

        static void Destroy(ArCameraConfig self) { }

        static void GetCameraId(ArSession session, ArCameraConfig self, out ArString valueOut) => valueOut = default;

        static void GetDepthSensorUsage(ArSession session, ArCameraConfig self, out ArCameraConfigDepthSensorUsage valueOut) =>
            valueOut = default;

        static void GetFacingDirection(ArSession session, ArCameraConfig self, out ArCameraConfigFacingDirection valueOut) =>
            valueOut = default;

        static void GetFpsRange(ArSession session, ArCameraConfig self, out int minFps, out int maxFps)
        {
            minFps = default;
            maxFps = default;
        }

        static void GetImageDimensions(ArSession session, ArCameraConfig self, out int width, out int height)
        {
            width = default;
            height = default;
        }

        static void GetTextureDimensions(ArSession session, ArCameraConfig self, out int width, out int height)
        {
            width = default;
            height = default;
        }
#endif
    }

    /// <summary>
    /// Extensions to the [XRCameraConfiguration](xref:UnityEngine.XR.ARSubsystems.XRCameraConfiguration) object.
    /// </summary>
    public static class XRCameraConfigurationExtensions
    {
        /// <summary>
        /// Gets <paramref name="cameraConfiguration"/> as an ARCore <see cref="ArCameraConfig"/>.
        /// </summary>
        /// <remarks>
        /// **Note:** Do not <see cref="ArCameraConfig.Dispose"/> the returned <see cref="ArCameraConfig"/>.
        /// </remarks>
        /// <param name="cameraConfiguration">The
        ///     [XRCameraConfiguration](xref:UnityEngine.XR.ARSubsystems.XRCameraConfiguration) being extended.</param>
        /// <returns>Returns the ARCore-specific representation of <paramref name="cameraConfiguration"/>.</returns>
        public static ArCameraConfig AsArCameraConfig(this XRCameraConfiguration cameraConfiguration) =>
            ArCameraConfig.FromIntPtr(cameraConfiguration.nativeConfigurationHandle);
    }
}
