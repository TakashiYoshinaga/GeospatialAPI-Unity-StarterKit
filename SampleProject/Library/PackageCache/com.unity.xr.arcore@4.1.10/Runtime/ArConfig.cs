using System;
#if UNITY_ANDROID
using System.Runtime.InteropServices;
#endif

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Represents the configuration for an <see cref="ArSession"/>.
    /// </summary>
    /// <remarks>
    /// This is an opaque object that represents a native
    /// [ArConfig](https://developers.google.com/ar/reference/c/group/ar-config).
    /// </remarks>
    /// <seealso cref="ARCoreSessionSubsystem.beforeSetConfiguration"/>
    /// <seealso cref="ARCoreBeforeSetConfigurationEventArgs"/>
    public struct ArConfig : IEquatable<ArConfig>, IDisposable
    {
        IntPtr m_Self;

        ArConfig(IntPtr value) => m_Self = value;

        /// <summary>
        /// Creates a new session configuration and initializes it to a sensible default configuration.
        /// </summary>
        /// <remarks>
        /// Plane detection and Lighting Estimation are enabled, and blocking update is selected. This configuration is
        /// guaranteed to be supported on all devices that support ARCore.
        ///
        /// When you no longer need the <see cref="ArConfig"/>, you should destroy it by calling
        /// <see cref="Dispose"/>. If you do not dispose it, ARCore will leak memory.
        /// </remarks>
        /// <param name="session">A non-null <see cref="ArSession"/>.</param>
        public ArConfig(ArSession session) => Create(session, out this);

        /// <summary>
        /// Create a <see cref="ArConfig"/> from an existing native pointer. The native pointer must point
        /// to an existing <see cref="ArConfig"/>.
        /// </summary>
        /// <param name="value">A pointer to an existing native <see cref="ArConfig"/>.</param>
        /// <returns>Returns an <see cref="ArConfig"/> whose underlying native pointer is
        ///     <paramref name="value"/>.</returns>
        public static ArConfig FromIntPtr(IntPtr value) => new ArConfig(value);

        /// <summary>
        /// Represents a null <see cref="ArConfig"/>, i.e., one whose underlying native pointer is `null`.
        /// </summary>
        public static ArConfig Null => default;

        /// <summary>
        /// (Read Only) Indicates whether this <see cref="ArConfig"/> is <see cref="Null"/>.
        /// </summary>
        public bool IsNull => m_Self == IntPtr.Zero;

        /// <summary>
        /// Gets the underlying native pointer for this <see cref="ArConfig"/>.
        /// </summary>
        /// <returns>Returns the underlying native pointer for this <see cref="ArConfig"/>.</returns>
        public IntPtr AsIntPtr() => m_Self;

        /// <summary>
        /// Casts an <see cref="ArConfig"/> to its underlying native pointer.
        /// </summary>
        /// <param name="config">The <see cref="ArConfig"/> to cast.</param>
        /// <returns>Returns the underlying native pointer for <paramref name="config"/></returns>
        public static explicit operator IntPtr(ArConfig config) => config.AsIntPtr();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <remarks>
        /// Two <see cref="ArConfig"/>s are considered equal if their underlying pointers are equal.
        /// </remarks>
        /// <param name="other">The <see cref="ArConfig"/> to compare against.</param>
        /// <returns>Returns `true` if the underlying native pointers are the same. Returns `false` otherwise.</returns>
        public bool Equals(ArConfig other) => m_Self == other.m_Self;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">An <see cref="object"/> to compare against.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is an <see cref="ArConfig"/> and it compares
        ///     equal to this one using <see cref="Equals(UnityEngine.XR.ARCore.ArConfig)"/>.</returns>
        public override bool Equals(object obj) => obj is ArConfig other && Equals(other);

        /// <summary>
        /// Generates a hash code suitable for use with a `HashSet` or `Dictionary`
        /// </summary>
        /// <returns>Returns a hash code for this <see cref="ArConfig"/>.</returns>
        public override int GetHashCode() => m_Self.GetHashCode();

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(UnityEngine.XR.ARCore.ArConfig)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArConfig"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArConfig"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArConfig)"/>. Returns `false` otherwise.</returns>
        public static bool operator ==(ArConfig lhs, ArConfig rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as the negation of <see cref="Equals(UnityEngine.XR.ARCore.ArConfig)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArConfig"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArConfig"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `false` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArConfig)"/>. Returns `true` otherwise.</returns>
        public static bool operator !=(ArConfig lhs, ArConfig rhs) => !lhs.Equals(rhs);

        /// <summary>
        /// Destroys this <see cref="ArConfig"/> and sets the underlying native pointer to `null`.
        /// </summary>
        /// <remarks>
        /// You should only dispose an <see cref="ArConfig"/> if you explicitly created it, e.g., by calling
        /// <see cref="ArConfig(ArSession)"/>. If you convert an existing config from an
        /// <see cref="IntPtr"/> (e.g., by calling <see cref="FromIntPtr"/>), then you should not dispose it.
        /// </remarks>
        public void Dispose()
        {
            if (m_Self != IntPtr.Zero)
            {
                Destroy(this);
            }

            m_Self = IntPtr.Zero;;
        }

#if UNITY_EDITOR
        static void Create(ArSession session, out ArConfig configOut) => configOut = default;

        static void Destroy(ArConfig config) { }
#elif UNITY_ANDROID
        [DllImport("arcore_sdk_c", EntryPoint = "ArConfig_create")]
        static extern void Create(ArSession session, out ArConfig configOut);

        [DllImport("arcore_sdk_c", EntryPoint = "ArConfig_destroy")]
        static extern void Destroy(ArConfig config);
#endif
    }
}
