using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// A struct describing face data that is stored in the <see cref="XRFaceSubsystem"/>
    /// </summary>
    [StructLayout(LayoutKind.Sequential)]
    public struct XRFace : ITrackable, IEquatable<XRFace>
    {
        // Fields to marshall/serialize from native code
        TrackableId m_TrackableId;
        Pose m_Pose;
        TrackingState m_TrackingState;
        IntPtr m_NativePtr;
        Pose m_LeftEyePose;
        Pose m_RightEyePose;
        Vector3 m_FixationPoint;

        /// <summary>
        /// Get a <see cref="XRFace"/> with reasonable default values.
        /// </summary>
        public static XRFace defaultValue => s_Default;

        static readonly XRFace s_Default = new XRFace
        {
            m_TrackableId = TrackableId.invalidId,
            m_Pose = Pose.identity,
            m_LeftEyePose = Pose.identity,
            m_RightEyePose = Pose.identity,
        };

        /// <summary>
        /// The unique <see cref="TrackableId"/> of the face as a trackable within the <see cref="XRFaceSubsystem"/>.
        /// </summary>
        /// <remarks>
        /// With this, you are able to extract more data about this particular face from the <see cref="XRFaceSubsystem"/>.
        /// </remarks>
        public TrackableId trackableId => m_TrackableId;

        /// <summary>
        /// The <see cref="pose"/> of the face describes its position and rotation in session space.
        /// </summary>
        public Pose pose => m_Pose;

        /// <summary>
        /// The tracking state associated with this <see cref="XRFace"/>.
        /// </summary>
        public TrackingState trackingState => m_TrackingState;

        /// <summary>
        /// A native pointer associated with this <see cref="XRFace"/>.
        /// </summary>
        /// <remarks>
        /// The data pointed to by this pointer is implementation-defined.
        /// </remarks>
        public IntPtr nativePtr => m_NativePtr;

        /// <summary>
        /// The pose of the left eye in relation to the face.
        /// </summary>
        public Pose leftEyePose => m_LeftEyePose;

        /// <summary>
        /// The pose of the right eye in relation to the face.
        /// </summary>
        public Pose rightEyePose => m_RightEyePose;

        /// <summary>
        /// The position of which the eyes are fixated in relation to the face.
        /// </summary>
        public Vector3 fixationPoint => m_FixationPoint;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="XRFace"/> and
        /// <see cref="Equals(XRFace)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is XRFace && Equals((XRFace)obj);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            unchecked
            {
                var hashCode = trackableId.GetHashCode();
                hashCode = (hashCode * 486187739) + pose.GetHashCode();
                hashCode = (hashCode * 486187739) + ((int)trackingState).GetHashCode();
                hashCode = (hashCode * 486187739) + nativePtr.GetHashCode();
                hashCode = (hashCode * 486187739) + leftEyePose.GetHashCode();
                hashCode = (hashCode * 486187739) + rightEyePose.GetHashCode();
                hashCode = (hashCode * 486187739) + fixationPoint.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(XRFace)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator==(XRFace lhs, XRFace rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(XRFace)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator!=(XRFace lhs, XRFace rhs) => !lhs.Equals(rhs);

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="XRFace"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="XRFace"/>, otherwise false.</returns>
        public bool Equals(XRFace other)
        {
            return
                trackableId.Equals(other.trackableId) &&
                pose.Equals(other.pose) &&
                (trackingState == other.trackingState) &&
                (nativePtr == other.nativePtr) &&
                (leftEyePose.Equals(other.leftEyePose)) &&
                (rightEyePose.Equals(other.rightEyePose)) &&
                (fixationPoint.Equals(other.fixationPoint));
        }
    };
}
