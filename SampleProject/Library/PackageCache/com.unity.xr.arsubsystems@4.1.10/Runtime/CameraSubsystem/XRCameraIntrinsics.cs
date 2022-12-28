using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Camera intrinsics describe physical characteristics of a camera.
    /// </summary>
    /// <remarks>
    /// These intrinsics are based on a pinhole camera model. A pinhole camera is a simple type of lens-less camera, a
    /// box with a single pinhole in one side. Rays of light enter the pinhole and land on the opposite wall of the box
    /// (the image plane), forming an image. Most cameras use larger apertures with lenses to focus the light, but the
    /// pinhole camera provides a simplified mathematical model.
    /// </remarks>
    [StructLayout(LayoutKind.Sequential)]
    public struct XRCameraIntrinsics : IEquatable<XRCameraIntrinsics>
    {
        /// <summary>
        /// The focal length in pixels.
        /// </summary>
        /// <value>
        /// The focal length in pixels.
        /// </value>
        /// <remarks>
        /// The focal length is the distance between the camera's pinhole and the image plane.
        /// In a pinhole camera, the x and y values would be the same, but these can vary for
        /// real cameras.
        /// </remarks>
        public Vector2 focalLength => m_FocalLength;
        Vector2 m_FocalLength;

        /// <summary>
        /// The principal point from the top-left corner of the image, expressed in pixels.
        /// </summary>
        /// <value>
        /// The principal point from the top-left corner of the image, expressed in pixels.
        /// </value>
        /// <remarks>
        /// The principal point is the point of intersection between the image plane and a line perpendicular to the
        /// image plane passing through the camera's pinhole.
        /// </remarks>
        public Vector2 principalPoint => m_PrincipalPoint;
        Vector2 m_PrincipalPoint;

        /// <summary>
        /// The dimensions of the image in pixels.
        /// </summary>
        /// <value>
        /// The dimensions of the image in pixels.
        /// </value>
        public Vector2Int resolution => m_Resolution;
        Vector2Int m_Resolution;

        /// <summary>
        /// Constructs a <see cref="XRCameraIntrinsics"/> from the given parameters.
        /// </summary>
        /// <param name="focalLength">The focal length in pixels.</param>
        /// <param name="principalPoint">The principal point from the top-left of the image, in pixels.</param>
        /// <param name="resolution">The dimensions of the image.</param>
        public XRCameraIntrinsics(Vector2 focalLength, Vector2 principalPoint, Vector2Int resolution)
        {
            m_FocalLength = focalLength;
            m_PrincipalPoint = principalPoint;
            m_Resolution = resolution;
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="XRCameraIntrinsics"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="XRCameraIntrinsics"/>, otherwise false.</returns>
        public bool Equals(XRCameraIntrinsics other)
        {
            return (m_FocalLength.Equals(other.m_FocalLength) && m_PrincipalPoint.Equals(other.m_PrincipalPoint)
                    && m_Resolution.Equals(other.m_Resolution));
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="XRCameraIntrinsics"/> and
        /// <see cref="Equals(XRCameraIntrinsics)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(System.Object obj)
        {
            return ((obj is XRCameraIntrinsics) && Equals((XRCameraIntrinsics)obj));
        }

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(XRCameraIntrinsics)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(XRCameraIntrinsics lhs, XRCameraIntrinsics rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(XRCameraIntrinsics)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(XRCameraIntrinsics lhs, XRCameraIntrinsics rhs) => !lhs.Equals(rhs);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            int hashCode = 486187739;
            unchecked
            {
                hashCode = (hashCode * 486187739) + m_FocalLength.GetHashCode();
                hashCode = (hashCode * 486187739) + m_PrincipalPoint.GetHashCode();
                hashCode = (hashCode * 486187739) + m_Resolution.GetHashCode();
            }
            return hashCode;
        }

        /// <summary>
        /// Generates a string representation of this <see cref="XRCameraIntrinsics"/>.
        /// </summary>
        /// <returns>A string representation of this <see cref="XRCameraIntrinsics"/>.</returns>
        public override string ToString()
        {
            return string.Format("focalLength: {0} principalPoint: {1} resolution: {2}", m_FocalLength,
                                 m_PrincipalPoint, m_Resolution);
        }
    }
}
