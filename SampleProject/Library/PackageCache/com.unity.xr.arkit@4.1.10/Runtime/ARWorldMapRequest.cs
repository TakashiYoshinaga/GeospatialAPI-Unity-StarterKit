using System;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Represents an asynchronous world map request.
    /// Use this to determine the status of the request,
    /// and get the <see cref="ARWorldMap"/> once the request is complete.
    /// </summary>
    public struct ARWorldMapRequest : IDisposable, IEquatable<ARWorldMapRequest>
    {
        /// <summary>
        /// Get the status of the request.
        /// </summary>
        public ARWorldMapRequestStatus status => Api.UnityARKit_getWorldMapRequestStatus(m_RequestId);

        /// <summary>
        /// Retrieve the <see cref="ARWorldMap"/>.
        /// It is an error to call this method when <see cref="status"/> is
        /// not <see cref="ARWorldMapRequestStatus.Success"/>.
        /// </summary>
        /// <returns>An <see cref="ARWorldMap"/> representing the state of the session at the time the request was made.</returns>
        public ARWorldMap GetWorldMap()
        {
            if (status != ARWorldMapRequestStatus.Success)
                throw new InvalidOperationException("Cannot GetWorldMap unless status is ARWorldMapRequestStatus.Success.");

            var worldMapId = Api.UnityARKit_getWorldMapIdFromRequestId(m_RequestId);
            if (worldMapId == ARWorldMap.k_InvalidHandle)
                throw new InvalidOperationException("Internal error.");

            return new ARWorldMap(worldMapId);
        }

        /// <summary>
        /// Dispose of the request. You must dispose of the request to avoid
        /// leaking resources.
        /// </summary>
        public void Dispose() => Api.UnityARKit_disposeWorldMapRequest(m_RequestId);

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode() => m_RequestId.GetHashCode();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="ARWorldMapRequest"/> and
        /// <see cref="Equals(ARWorldMapRequest)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is ARWorldMapRequest other && Equals(other);

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARWorldMapRequest"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="ARWorldMapRequest"/>, otherwise false.</returns>
        public bool Equals(ARWorldMapRequest other) => m_RequestId == other.m_RequestId;

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARWorldMapRequest)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(ARWorldMapRequest lhs, ARWorldMapRequest rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(ARWorldMapRequest)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(ARWorldMapRequest lhs, ARWorldMapRequest rhs) => !lhs.Equals(rhs);

        internal ARWorldMapRequest(int requestId) => m_RequestId = requestId;

        int m_RequestId;
    }
}
