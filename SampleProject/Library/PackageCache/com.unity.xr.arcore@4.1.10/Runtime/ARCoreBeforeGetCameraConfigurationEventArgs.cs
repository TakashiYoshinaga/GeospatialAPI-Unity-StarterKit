using System;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Event arguments for the <see cref="ARCoreCameraSubsystem.beforeGetCameraConfiguration"/> event.
    /// </summary>
    public struct ARCoreBeforeGetCameraConfigurationEventArgs : IEquatable<ARCoreBeforeGetCameraConfigurationEventArgs>
    {
        /// <summary>
        /// Represents a native pointer to an [ArSession](https://developers.google.com/ar/reference/c/group/ar-session)
        /// </summary>
        public ArSession session { get; internal set; }

        /// <summary>
        /// Represents a native pointer to the
        /// [ArCameraConfigFilter](https://developers.google.com/ar/reference/c/group/ar-camera-config-filter)
        /// which is used to filter the results of a call to
        /// [ArSession_getSupportedCameraConfigsWithFilter](https://developers.google.com/ar/reference/c/group/ar-session#arsession_getsupportedcameraconfigswithfilter)
        /// </summary>
        public ArCameraConfigFilter filter { get; internal set; }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> to compare against.</param>
        /// <returns>Returns `true` if every property in <paramref name="other"/> is equal to this
        ///     <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/>. Returns `false` otherwise.</returns>
        public bool Equals(ARCoreBeforeGetCameraConfigurationEventArgs other) =>
            session == other.session &&
            filter == other.filter;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is of type
        ///     <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> and
        ///     <see cref="Equals(ARCoreBeforeGetCameraConfigurationEventArgs)"/> also returns `true`.
        ///     Returns `false` otherwise.</returns>
        public override bool Equals(object obj) =>
            obj is ARCoreBeforeGetCameraConfigurationEventArgs other && Equals(other);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>Returns a hash code generated from this object's fields.</returns>
        public override int GetHashCode() => HashCode.Combine(session.GetHashCode(), filter.GetHashCode());

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARCoreBeforeGetCameraConfigurationEventArgs)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> according to
        ///     <see cref="Equals(ARCoreBeforeGetCameraConfigurationEventArgs)"/>. Returns `false` otherwise.</returns>
        public static bool operator ==(ARCoreBeforeGetCameraConfigurationEventArgs lhs,
            ARCoreBeforeGetCameraConfigurationEventArgs rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(ARCoreBeforeGetCameraConfigurationEventArgs)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ARCoreBeforeGetCameraConfigurationEventArgs"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `false` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> according to
        ///     <see cref="Equals(ARCoreBeforeGetCameraConfigurationEventArgs)"/>. Returns `true` otherwise.</returns>
        public static bool operator !=(ARCoreBeforeGetCameraConfigurationEventArgs lhs,
            ARCoreBeforeGetCameraConfigurationEventArgs rhs) => !lhs.Equals(rhs);
    }
}
