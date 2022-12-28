using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Event arguments for the <see cref="ARCoreSessionSubsystem.beforeSetConfiguration"/> event.
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct ARCoreBeforeSetConfigurationEventArgs : IEquatable<ARCoreBeforeSetConfigurationEventArgs>
    {
        /// <summary>
        /// (Read Only) The native ARCore session whose corresponding configuration object will be set.
        /// </summary>
        [Obsolete("Use " + nameof(arSession) + " to access the session. (2020-10-02")]
        public IntPtr session => m_Session.AsIntPtr();

        /// <summary>
        /// (Read Only) The native ARCore session whose corresponding configuration object will be set.
        /// </summary>
        public ArSession arSession => m_Session;

        /// <summary>
        /// (Read Only) The native ARCore configuration which will be set.
        /// </summary>
        /// <remarks>
        /// See the
        /// [ARCore Configuration documentation](https://developers.google.com/ar/reference/c/group/config#arconfig) for
        /// more details.
        /// </remarks>
        [Obsolete("Use " + nameof(arConfig) + " to access the configuration. (2020-10-02)")]
        public IntPtr config => m_Config.AsIntPtr();

        /// <summary>
        /// (Read Only) The native ARCore configuration which will be set.
        /// </summary>
        /// <remarks>
        /// See the
        /// [ARCore Configuration documentation](https://developers.google.com/ar/reference/c/group/config#arconfig) for
        /// more details.
        /// </remarks>
        public ArConfig arConfig => m_Config;

        /// <summary>
        /// Constructs an <see cref="ARCoreBeforeSetConfigurationEventArgs"/>.
        /// </summary>
        /// <param name="session">The native ARCore session whose corresponding configuration object will be set.</param>
        /// <param name="config">The native ARCore configuration which will be set.</param>
        [Obsolete("Use " + nameof(ARCoreBeforeSetConfigurationEventArgs) + "(" + nameof(ArSession) + ", " + nameof(ArConfig) + ") instead. (2020-10-02)")]
        public ARCoreBeforeSetConfigurationEventArgs(IntPtr session, IntPtr config)
        {
            m_Session = ArSession.FromIntPtr(session);
            m_Config = ArConfig.FromIntPtr(config);
        }

        /// <summary>
        /// Constructs an <see cref="ARCoreBeforeSetConfigurationEventArgs"/>.
        /// </summary>
        /// <param name="session">The ARCore session whose corresponding configuration object will be set.</param>
        /// <param name="config">The ARCore session configuration which will be set.</param>
        public ARCoreBeforeSetConfigurationEventArgs(ArSession session, ArConfig config)
        {
            m_Session = session;
            m_Config = config;
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARCoreBeforeSetConfigurationEventArgs"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this
        ///     <see cref="ARCoreBeforeSetConfigurationEventArgs"/>, otherwise false.</returns>
        public bool Equals(ARCoreBeforeSetConfigurationEventArgs other) =>
            m_Session.Equals(other.m_Session) &&
            m_Config.Equals(other.m_Config);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode() => HashCode.Combine(m_Session.GetHashCode(), m_Config.GetHashCode());

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="ARCoreBeforeSetConfigurationEventArgs"/> and
        /// <see cref="Equals(ARCoreBeforeSetConfigurationEventArgs)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is ARCoreBeforeSetConfigurationEventArgs other && Equals(other);

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARCoreBeforeSetConfigurationEventArgs)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(ARCoreBeforeSetConfigurationEventArgs lhs, ARCoreBeforeSetConfigurationEventArgs rhs) => lhs.Equals(rhs);

         /// <summary>
         /// Tests for inequality. Same as `!`<see cref="Equals(ARCoreBeforeSetConfigurationEventArgs)"/>.
         /// </summary>
         /// <param name="lhs">The left-hand side of the comparison.</param>
         /// <param name="rhs">The right-hand side of the comparison.</param>
         /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(ARCoreBeforeSetConfigurationEventArgs lhs, ARCoreBeforeSetConfigurationEventArgs rhs) => !lhs.Equals(rhs);

        ArSession m_Session;

        ArConfig m_Config;
    }
}
