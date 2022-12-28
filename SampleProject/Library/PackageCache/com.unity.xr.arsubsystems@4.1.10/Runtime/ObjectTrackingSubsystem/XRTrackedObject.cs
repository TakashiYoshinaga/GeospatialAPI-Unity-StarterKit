using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Describes a tracked object detected by the <see cref="XRObjectTrackingSubsystem"/>.
    /// </summary>
    /// <remarks>
    /// Tracked objects are detected based on the contents of an <see cref="XRReferenceObjectLibrary"/>
    /// which contains reference objects for which to scan. Each <see cref="XRTrackedObject"/> represents
    /// an <see cref="XRReferenceObject"/> which has been detected in the environment.
    /// </remarks>
    /// <seealso cref="XRReferenceObject"/>
    /// <seealso cref="XRReferenceObjectLibrary"/>
    [StructLayout(LayoutKind.Sequential)]
    public struct XRTrackedObject : ITrackable, IEquatable<XRTrackedObject>
    {
        /// <summary>
        /// A <see cref="XRTrackedObject"/> with appropriate default values.
        /// </summary>
        public static XRTrackedObject defaultValue => s_Default;

        /// <summary>
        /// The <see cref="TrackableId"/> associated with this tracked object.
        /// </summary>
        public TrackableId trackableId => m_TrackableId;

        /// <summary>
        /// The <c>Pose</c> associated with this tracked object.
        /// </summary>
        public Pose pose => m_Pose;

        /// <summary>
        /// The <see cref="TrackingState"/> associated with this tracked object.
        /// </summary>
        public TrackingState trackingState => m_TrackingState;

        /// <summary>
        /// A native pointer associated with this tracked object.
        /// </summary>
        /// <remarks>
        /// The lifetime of this pointer is provider-specific, but
        /// should be valid at least until the next call to
        /// <see cref="XRObjectTrackingSubsystem.GetChanges(Unity.Collections.Allocator)"/>
        /// (typically once per frame).
        /// </remarks>
        public IntPtr nativePtr => m_NativePtr;

        /// <summary>
        /// The <c>Guid</c> associated with the source <see cref="XRReferenceObject"/>.
        /// </summary>
        public Guid referenceObjectGuid => m_ReferenceObjectGuid;

        /// <summary>
        /// Constructs a <see cref="XRTrackedObject"/>
        /// </summary>
        /// <param name="trackableId">The <see cref="TrackableId"/> associated with this tracked object.</param>
        /// <param name="pose">The <c>Pose</c> of this tracked object.</param>
        /// <param name="trackingState">The <see cref="TrackingState"/> of the tracked object.</param>
        /// <param name="nativePtr">A native pointer associated with this tracked object. If not <c>null</c>,
        /// the object pointed to by this pointer should be valid at least until the next call to
        /// <see cref="XRObjectTrackingSubsystem.GetChanges(Unity.Collections.Allocator)"/>.</param>
        /// <param name="referenceObjectGuid">The <c>Guid</c> of the reference object which was used to detect this tracked object.</param>
        public XRTrackedObject(
            TrackableId trackableId,
            Pose pose,
            TrackingState trackingState,
            IntPtr nativePtr,
            Guid referenceObjectGuid)
        {
            m_TrackableId = trackableId;
            m_Pose = pose;
            m_TrackingState = trackingState;
            m_NativePtr = nativePtr;
            m_ReferenceObjectGuid = referenceObjectGuid;
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="XRTrackedObject"/> and
        /// <see cref="Equals(XRTrackedObject)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is XRTrackedObject other && Equals(other);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's <see cref="trackableId"/>.</returns>
        public override int GetHashCode() => m_TrackableId.GetHashCode();

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(XRTrackedObject)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(XRTrackedObject lhs, XRTrackedObject rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(XRTrackedObject)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(XRTrackedObject lhs, XRTrackedObject rhs) => !lhs.Equals(rhs);

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="XRTrackedObject"/> to compare against.</param>
        /// <returns>`True` if this object's <see cref="trackableId"/> is equal to <paramref name="other"/>'s, otherwise false.</returns>
        public bool Equals(XRTrackedObject other) => m_TrackableId.Equals(other.m_TrackableId);

        TrackableId m_TrackableId;

        Pose m_Pose;

        TrackingState m_TrackingState;

        IntPtr m_NativePtr;

        Guid m_ReferenceObjectGuid;

        static readonly XRTrackedObject s_Default = new XRTrackedObject
        {
            m_TrackableId = TrackableId.invalidId,
            m_Pose = Pose.identity,
            m_ReferenceObjectGuid = Guid.Empty,
        };
    }
}
