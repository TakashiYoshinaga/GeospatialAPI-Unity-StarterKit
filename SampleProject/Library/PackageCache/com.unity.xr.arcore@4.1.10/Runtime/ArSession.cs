using System;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Represents the context for an ARCore session.
    /// </summary>
    /// <remarks>
    /// This is an opaque object that represents a native
    /// [ArSession](https://developers.google.com/ar/reference/c/group/ar-session).
    /// </remarks>
    /// <seealso cref="ARCoreSessionSubsystem.beforeSetConfiguration"/>
    /// <seealso cref="ARCoreBeforeSetConfigurationEventArgs"/>
    /// <seealso cref="ARCoreCameraSubsystem.beforeGetCameraConfiguration"/>
    /// <seealso cref="ARCoreBeforeGetCameraConfigurationEventArgs"/>
    public struct ArSession : IEquatable<ArSession>
    {
        IntPtr m_Self;

        ArSession(IntPtr value) => m_Self = value;

        /// <summary>
        /// Create a <see cref="ArSession"/> from an existing native pointer. The native pointer must point
        /// to an existing <see cref="ArSession"/>.
        /// </summary>
        /// <param name="value">A pointer to an existing native <see cref="ArSession"/>.</param>
        /// <returns>Returns an <see cref="ArSession"/> whose underlying native pointer is
        ///     <paramref name="value"/>.</returns>
        public static ArSession FromIntPtr(IntPtr value) => new ArSession(value);

        /// <summary>
        /// Represents a null <see cref="ArSession"/>, i.e., one whose underlying native pointer is `null`.
        /// </summary>
        public static ArSession Null => default;

        /// <summary>
        /// (Read Only) Indicates whether this <see cref="ArSession"/> is <see cref="Null"/>.
        /// </summary>
        public bool IsNull => m_Self == IntPtr.Zero;

        /// <summary>
        /// Gets the underlying native pointer for this <see cref="ArSession"/>.
        /// </summary>
        /// <returns>Returns the underlying native pointer for this <see cref="ArSession"/>.</returns>
        public IntPtr AsIntPtr() => m_Self;

        /// <summary>
        /// Casts an <see cref="ArSession"/> to its underlying native pointer.
        /// </summary>
        /// <param name="session">The <see cref="ArSession"/> to cast.</param>
        /// <returns>Returns the underlying native pointer for <paramref name="session"/></returns>
        public static explicit operator IntPtr(ArSession session) => session.AsIntPtr();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <remarks>
        /// Two <see cref="ArSession"/>s are considered equal if their underlying pointers are equal.
        /// </remarks>
        /// <param name="other">The <see cref="ArSession"/> to compare against.</param>
        /// <returns>Returns `true` if the underlying native pointers are the same. Returns `false` otherwise.</returns>
        public bool Equals(ArSession other) => m_Self == other.m_Self;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">An <see cref="object"/> to compare against.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is an <see cref="ArSession"/> and it compares
        ///     equal to this one using <see cref="Equals(UnityEngine.XR.ARCore.ArSession)"/>.</returns>
        public override bool Equals(object obj) => obj is ArSession other && Equals(other);

        /// <summary>
        /// Generates a hash code suitable for use with a `HashSet` or `Dictionary`
        /// </summary>
        /// <returns>Returns a hash code for this <see cref="ArSession"/>.</returns>
        public override int GetHashCode() => m_Self.GetHashCode();

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(UnityEngine.XR.ARCore.ArSession)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArSession"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArSession"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArSession)"/>. Returns `false` otherwise.</returns>
        public static bool operator ==(ArSession lhs, ArSession rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as the negation of <see cref="Equals(UnityEngine.XR.ARCore.ArSession)"/>.
        /// </summary>
        /// <param name="lhs">The <see cref="ArSession"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="ArSession"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `false` if <paramref name="lhs"/> is equal to <paramref name="rhs"/> using
        ///     <see cref="Equals(UnityEngine.XR.ARCore.ArSession)"/>. Returns `true` otherwise.</returns>
        public static bool operator !=(ArSession lhs, ArSession rhs) => !lhs.Equals(rhs);
    }
}
