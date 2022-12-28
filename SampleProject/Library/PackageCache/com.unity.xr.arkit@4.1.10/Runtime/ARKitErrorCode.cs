using System;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Error codes related to the
    /// [ARKit Framework](https://developer.apple.com/documentation/arkit?language=objc),
    /// like <see cref="ARKitSessionDelegate.OnSessionDidFailWithError"/>
    /// </summary>
    /// <remarks>
    /// These values correspond to
    /// [ARKit's ARErrorCodes](https://developer.apple.com/documentation/arkit/arerrorcode?language=objc)
    /// </remarks>
    /// <seealso cref="NSError.code"/>
    public enum ARKitErrorCode : long
    {
        /// <summary>
        /// Unsupported configuration.
        /// </summary>
        UnsupportedConfiguration = 100,

        /// <summary>
        /// A sensor required to run the session is not available.
        /// </summary>
        SensorUnavailable = 101,

        /// <summary>
        /// A sensor failed to provide the required input.
        /// </summary>
        SensorFailed = 102,

        /// <summary>
        /// App does not have permission to use the camera. The user may change this in settings.
        /// </summary>
        CameraUnauthorized = 103,

        /// <summary>
        /// App does not have permission to use the microphone. The user may change this in settings.
        /// </summary>
        MicrophoneUnauthorized = 104,

        /// <summary>
        /// App does not have permission to use the location data of the device. The user may change this in settings.
        /// </summary>
        LocationUnauthorized = 105,

        /// <summary>
        /// World tracking has encountered a fatal error.
        /// </summary>
        WorldTrackingFailed = 200,

        /// <summary>
        /// Geo tracking is not available at this location.
        /// </summary>
        GeoTrackingNotAvailableAtLocation = 201,

        /// <summary>
        /// Geo tracking has encountered a runtime error.
        /// </summary>
        GeoTrackingFailed = 202,

        /// <summary>
        /// Invalid reference image
        /// </summary>
        InvalidReferenceImage = 300,

        /// <summary>
        /// Invalid reference object.
        /// </summary>
        InvalidReferenceObject = 301,

        /// <summary>
        /// Invalid world map.
        /// </summary>
        InvalidWorldMap = 302,

        /// <summary>
        /// Invalid configuration.
        /// </summary>
        InvalidConfiguration = 303,

        /// <summary>
        /// Collaboration data is not available.
        /// </summary>
        [Obsolete("Use " + nameof(InvalidCollaborationData) + " instead. (2020-10-15)")]
        CollaborationDataUnavailable = 304,

        /// <summary>
        /// Invalid collaboration data
        /// </summary>
        InvalidCollaborationData = 304,

        /// <summary>
        /// Insufficient features.
        /// </summary>
        InsufficientFeatures = 400,

        /// <summary>
        /// Object merge failed.
        /// </summary>
        ObjectMergeFailed = 401,

        /// <summary>
        /// Unable to read or write to file.
        /// </summary>
        FileIOFailed = 500,

        /// <summary>
        /// Generic request failure.
        /// </summary>
        RequestFailed = 501,
    }

    /// <summary>
    /// Extensions to the <see cref="NSError"/> object.
    /// </summary>
    public static partial class NSErrorExtensions
    {
        /// <summary>
        /// Converts an <see cref="NSError"/> to an <see cref="ARKitErrorCode"/> by casting its
        /// <see cref="NSError.code"/> to an <see cref="ARKitErrorCode"/>.
        /// </summary>
        /// <param name="error">The <see cref="NSError"/> being extended.</param>
        /// <returns>Returns the <see cref="NSError"/> as an <see cref="ARKitErrorCode"/>.</returns>
        /// <exception cref="System.InvalidCastException">Thrown if <paramref name="error"/>'s
        ///     <see cref="NSError.ToErrorDomain"/> is not <see cref="NSErrorDomain.ARKit"/>.</exception>
        /// <seealso cref="ARKitSessionDelegate.OnSessionDidFailWithError"/>
        public static ARKitErrorCode AsARKitErrorCode(this NSError error)
        {
            if (error.ToErrorDomain() != NSErrorDomain.ARKit)
                throw new InvalidCastException($"{nameof(error)} is not an {nameof(NSErrorDomain.ARKit)} error");

            return (ARKitErrorCode)error.code;
        }
    }
}
