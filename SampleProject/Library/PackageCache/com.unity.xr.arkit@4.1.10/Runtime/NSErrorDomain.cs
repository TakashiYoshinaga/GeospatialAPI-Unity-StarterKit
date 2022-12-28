namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// The domain associated with an <see cref="NSError"/>. See <see cref="NSError.ToErrorDomain"/>.
    /// </summary>
    public enum NSErrorDomain
    {
        /// <summary>
        /// The error domain is not known.
        /// </summary>
        Unknown,

        /// <summary>
        /// An <see cref="NSError"/> <see cref="NSError.code"/> is an <see cref="ARKitErrorCode"/>. See
        /// <see cref="NSErrorExtensions.AsARKitErrorCode"/>.
        /// </summary>
        ARKit,

        /// <summary>
        /// An <see cref="NSError"/> <see cref="NSError.code"/> is a <see cref="CoreLocationErrorCode"/>. See
        /// <see cref="NSErrorExtensions.AsCoreLocationErrorCode"/>.
        /// </summary>
        CoreLocation,
    }
}
