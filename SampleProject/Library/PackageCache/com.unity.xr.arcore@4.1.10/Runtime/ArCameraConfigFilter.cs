using System;

#if UNITY_ANDROID && !UNITY_EDITOR
using System.Runtime.InteropServices;
#endif

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Used to filter the set of camera configurations returned by
    /// [XRCameraSubsystem.GetConfigurations](xref:UnityEngine.XR.ARSubsystems.XRCameraSubsystem.GetConfigurations(Unity.Collections.Allocator)).
    /// </summary>
    /// <seealso cref="ARCoreCameraSubsystem.beforeGetCameraConfiguration"/>.
    /// <seealso cref="ARCoreBeforeGetCameraConfigurationEventArgs"/>.
    public struct ArCameraConfigFilter : IDisposable, IEquatable<ArCameraConfigFilter>
    {
        IntPtr m_Self;

        ArCameraConfigFilter(IntPtr value) => m_Self = value;

        /// <summary>
        /// Create a <see cref="ArCameraConfigFilter"/> from an existing native pointer. The native pointer must point
        /// to an existing <see cref="ArCameraConfigFilter"/>.
        /// </summary>
        /// <param name="value">A pointer to an existing native <see cref="ArCameraConfigFilter"/>.</param>
        /// <returns>Returns an <see cref="ArCameraConfigFilter"/> whose underlying native pointer is
        ///     <paramref name="value"/>.</returns>
        public static ArCameraConfigFilter FromIntPtr(IntPtr value) => new ArCameraConfigFilter(value);

        /// <summary>
        /// Represents a null <see cref="ArCameraConfigFilter"/>, i.e., one whose underlying native pointer is `null`.
        /// </summary>
        public static ArCameraConfigFilter Null => default;

        /// <summary>
        /// Creates a new, default-constructed <see cref="ArCameraConfigFilter"/>.
        /// </summary>
        /// <remarks>
        /// When you no longer need the <see cref="ArCameraConfigFilter"/>, you should destroy it by calling
        /// <see cref="Dispose"/>. If you do not dispose it, ARCore will leak memory.
        /// </remarks>
        /// <param name="session">A non-null <see cref="ArSession"/>.</param>
        public ArCameraConfigFilter(ArSession session) => Create(session, out this);

        /// <summary>
        /// Gets the underlying native pointer for this <see cref="ArCameraConfigFilter"/>.
        /// </summary>
        /// <returns>Returns the underlying native pointer for this <see cref="ArCameraConfigFilter"/>.</returns>
        public IntPtr AsIntPtr() => m_Self;

        /// <summary>
        /// (Read Only) Indicates whether this <see cref="ArCameraConfigFilter"/> is <see cref="Null"/>.
        /// </summary>
        public bool IsNull => m_Self == IntPtr.Zero;

        /// <summary>
        /// Gets the desired depth sensor usages to allow.
        /// </summary>
        /// <param name="session">The ARCore <see cref="ArSession"/>.</param>
        /// <returns>Returns the <see cref="ArCameraConfigDepthSensorUsage"/> values allowed by this filter.</returns>
        public ArCameraConfigDepthSensorUsage GetDepthSensorUsage(ArSession session)
        {
            GetDepthSensorUsage(session, this, out var usage);
            return usage;
        }

        /// <summary>
        /// Sets the desired depth sensor usages to allow.
        /// </summary>
        /// <param name="session">The ARCore <see cref="ArSession"/>.</param>
        /// <param name="depthSensorUsage">The <see cref="ArCameraConfigDepthSensorUsage"/> values allowed by this
        ///     filter.</param>
        public void SetDepthSensorUsage(ArSession session, ArCameraConfigDepthSensorUsage depthSensorUsage) =>
            SetDepthSensorUsage(session, this, depthSensorUsage);

        /// <summary>
        /// Gets the desired frame rates to allow.
        /// </summary>
        /// <param name="session">The ARCore <see cref="ArSession"/>.</param>
        /// <returns>Returns the frame rates allowed by this filter.</returns>
        public ArCameraConfigTargetFps GetTargetFps(ArSession session)
        {
            GetTargetFps(session, this, out var value);
            return value;
        }

        /// <summary>
        /// Sets the desired frame rates to allow.
        /// </summary>
        /// <param name="session">The ARCore <see cref="ArSession"/>.</param>
        /// <param name="targetFps">The <see cref="ArCameraConfigTargetFps"/> values allowed by this filter.</param>
        public void SetTargetFps(ArSession session, ArCameraConfigTargetFps targetFps) =>
            SetTargetFps(session, this, targetFps);

        /// <summary>
        /// Destroys this <see cref="ArCameraConfigFilter"/> and sets the underlying native pointer to `null`.
        /// </summary>
        /// <remarks>
        /// You should only dispose an <see cref="ArCameraConfigFilter"/> if you explicitly created it, e.g., by calling
        /// <see cref="ArCameraConfigFilter(ArSession)"/>. If you convert an existing config from an
        /// <see cref="IntPtr"/> (e.g., by calling <see cref="FromIntPtr"/>), then you should not dispose it.
        /// </remarks>
        public void Dispose()
        {
            if (m_Self != IntPtr.Zero)
            {
                Destroy(this);
            }

            m_Self = IntPtr.Zero;
        }

        /// <summary>
        /// Casts an <see cref="ArCameraConfigFilter"/> to its underlying native pointer.
        /// </summary>
        /// <param name="filter">The <see cref="ArCameraConfigFilter"/> to cast.</param>
        /// <returns>Returns the underlying native pointer for <paramref name="filter"/></returns>
        public static explicit operator IntPtr(ArCameraConfigFilter filter) => filter.AsIntPtr();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <remarks>
        /// Two <see cref="ArCameraConfigFilter"/>s are considered equal if their underlying pointers are equal.
        /// </remarks>
        /// <param name="other">The <see cref="ArCameraConfigFilter"/> to compare against.</param>
        /// <returns>Returns `true` if the underlying native pointers are the same. Returns `false` otherwise.</returns>
        public bool Equals(ArCameraConfigFilter other) => m_Self == other.m_Self;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">An <see cref="object"/> to compare against.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is an <see cref="ArCameraConfigFilter"/> and it compares
        ///     equal to this one using <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfigFilter)"/>.</returns>
        public override bool Equals(object obj) => obj is ArCameraConfigFilter other && Equals(other);

        /// <summary>
        /// Generates a hash code suitable for use with a `HashSet` or `Dictionary`
        /// </summary>
        /// <returns>Returns a hash code for this <see cref="ArCameraConfigFilter"/>.</returns>
        public override int GetHashCode() => m_Self.GetHashCode();

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfigFilter)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArCameraConfigFilter"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArCameraConfigFilter"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfigFilter)"/>. Returns `false` otherwise.</returns>
        public static bool operator ==(ArCameraConfigFilter lhs, ArCameraConfigFilter rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as the negation of <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfigFilter)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArCameraConfigFilter"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArCameraConfigFilter"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `false` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArCameraConfigFilter)"/>. Returns `true` otherwise.</returns>
        public static bool operator !=(ArCameraConfigFilter lhs, ArCameraConfigFilter rhs) => !lhs.Equals(rhs);

#if UNITY_ANDROID && !UNITY_EDITOR
        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_create")]
        static extern void Create(ArSession session, out ArCameraConfigFilter filterOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_destroy")]
        static extern void Destroy(ArCameraConfigFilter self);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_getDepthSensorUsage")]
        static extern void GetDepthSensorUsage(ArSession session, ArCameraConfigFilter filter, out ArCameraConfigDepthSensorUsage valueOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_setDepthSensorUsage")]
        static extern void SetDepthSensorUsage(ArSession session, ArCameraConfigFilter filter, ArCameraConfigDepthSensorUsage value);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_getTargetFps")]
        static extern void GetTargetFps(ArSession session, ArCameraConfigFilter filter, out ArCameraConfigTargetFps valueOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArCameraConfigFilter_setTargetFps")]
        static extern void SetTargetFps(ArSession session, ArCameraConfigFilter filter, ArCameraConfigTargetFps value);
#else
        static void Create(ArSession session, out ArCameraConfigFilter filterOut) => filterOut = default;

        static void Destroy(ArCameraConfigFilter self) { }

        static void GetDepthSensorUsage(ArSession session, ArCameraConfigFilter filter, out ArCameraConfigDepthSensorUsage valueOut) =>
            valueOut = default;

        static void SetDepthSensorUsage(ArSession session, ArCameraConfigFilter filter, ArCameraConfigDepthSensorUsage value) { }

        static void GetTargetFps(ArSession session, ArCameraConfigFilter filter, out ArCameraConfigTargetFps valueOut) =>
            valueOut = default;

        static void SetTargetFps(ArSession session, ArCameraConfigFilter filter, ArCameraConfigTargetFps value) { }
#endif
    }
}
