using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// Holds data associated with a face "region".
    /// </summary>
    /// <seealso cref="ARCoreFaceSubsystem.GetRegionPoses"/>
    [StructLayout(LayoutKind.Sequential)]
    public struct ARCoreFaceRegionData : IEquatable<ARCoreFaceRegionData>
    {
        ARCoreFaceRegion m_Region;
        Pose m_Pose;

        /// <summary>
        /// The region this data describes.
        /// </summary>
        public ARCoreFaceRegion region { get { return m_Region; } }

        /// <summary>
        /// The pose associated with the face <see cref="region"/>.
        /// </summary>
        public Pose pose { get { return m_Pose; } }

        /// <summary>
        /// Constructs an <see cref="ARCoreFaceRegionData"/>.
        /// </summary>
        /// <param name="region">The region this data describes.</param>
        /// <param name="pose">The pose associated with the given <paramref name="region"/>.</param>
        public ARCoreFaceRegionData(ARCoreFaceRegion region, Pose pose)
        {
            m_Region = region;
            m_Pose = pose;
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARCoreFaceRegionData"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="ARCoreFaceRegionData"/>, otherwise false.</returns>
        public bool Equals(ARCoreFaceRegionData other)
        {
            return
                (m_Region == other.m_Region) &&
                m_Pose.Equals(other.m_Pose);
        }

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            unchecked
            {
                var hash = ((int)m_Region).GetHashCode();
                hash = hash * 486187739 + m_Pose.GetHashCode();
                return hash;
            }
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="ARCoreFaceRegionData"/> and
        /// <see cref="Equals(ARCoreFaceRegionData)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is ARCoreFaceRegionData other && Equals(other);

        /// <summary>
        /// Generates a string representation of this <see cref="ARCoreFaceRegionData"/>.
        /// </summary>
        /// <returns>A string representation of this <see cref="ARCoreFaceRegionData"/>.</returns>
        public override string ToString()
        {
            return string.Format("Region: {0}, Pose: {1}", m_Region, m_Pose);
        }

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARCoreFaceRegionData)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(ARCoreFaceRegionData lhs, ARCoreFaceRegionData rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(ARCoreFaceRegionData)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(ARCoreFaceRegionData lhs, ARCoreFaceRegionData rhs) => !lhs.Equals(rhs);
    }
}
