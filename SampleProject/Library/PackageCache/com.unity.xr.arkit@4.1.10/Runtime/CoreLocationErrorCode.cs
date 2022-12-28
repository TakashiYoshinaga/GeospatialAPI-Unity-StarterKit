using System;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Error codes related to the
    /// [Core Location Framework](https://developer.apple.com/documentation/corelocation?language=objc).
    /// </summary>
    /// <remarks>
    /// These values correspond to
    /// [Core Location's CLErrors](https://developer.apple.com/documentation/corelocation/clerror?language=objc)
    /// </remarks>
    /// <seealso cref="NSError.code"/>
    public enum CoreLocationErrorCode : long
    {
        /// <summary>
        /// Location is currently unknown, but Core Location will keep trying
        /// </summary>
        LocationUnknown = 0,

        /// <summary>
        /// Access to location or ranging has been denied by the user
        /// </summary>
        Denied,

        /// <summary>
        /// General, network-related error
        /// </summary>
        Network,

        /// <summary>
        /// Heading could not be determined
        /// </summary>
        HeadingFailure,

        /// <summary>
        /// Location region monitoring has been denied by the user
        /// </summary>
        RegionMonitoringDenied,

        /// <summary>
        /// A registered region cannot be monitored
        /// </summary>
        RegionMonitoringFailure,

        /// <summary>
        /// CL could not immediately initialize region monitoring
        /// </summary>
        RegionMonitoringSetupDelayed,

        /// <summary>
        /// While events for this fence will be delivered, delivery will not occur immediately
        /// </summary>
        RegionMonitoringResponseDelayed,

        /// <summary>
        /// A geocode request yielded no result
        /// </summary>
        GeocodeFoundNoResult,

        /// <summary>
        /// A geocode request yielded a partial result
        /// </summary>
        GeocodeFoundPartialResult,

        /// <summary>
        /// A geocode request was cancelled
        /// </summary>
        GeocodeCanceled,

        /// <summary>
        /// Deferred mode failed
        /// </summary>
        DeferredFailed,

        /// <summary>
        /// Deferred mode failed because location updates disabled or paused
        /// </summary>
        DeferredNotUpdatingLocation,

        /// <summary>
        /// Deferred mode not supported for the requested accuracy
        /// </summary>
        DeferredAccuracyTooLow,

        /// <summary>
        /// Deferred mode does not support distance filters
        /// </summary>
        DeferredDistanceFiltered,

        /// <summary>
        /// Deferred mode request canceled a previous request
        /// </summary>
        DeferredCanceled,

        /// <summary>
        /// Ranging cannot be performed
        /// </summary>
        RangingUnavailable,

        /// <summary>
        /// General ranging failure
        /// </summary>
        RangingFailure,

        /// <summary>
        /// Authorization request not presented to user
        /// </summary>
        PromptDeclined,
    }

    public static partial class NSErrorExtensions
    {
        /// <summary>
        /// Converts an <see cref="NSError"/> to an <see cref="CoreLocationErrorCode"/> by casting its
        /// <see cref="NSError.code"/> to an <see cref="CoreLocationErrorCode"/>.
        /// </summary>
        /// <param name="error">The <see cref="NSError"/> being extended.</param>
        /// <returns>Returns the <see cref="NSError"/> as an <see cref="CoreLocationErrorCode"/>.</returns>
        /// <exception cref="System.InvalidCastException">Thrown if <paramref name="error"/>'s
        ///     <see cref="NSError.ToErrorDomain"/> is not <see cref="NSErrorDomain.CoreLocation"/>.</exception>
        public static CoreLocationErrorCode AsCoreLocationErrorCode(this NSError error)
        {
            if (error.ToErrorDomain() != NSErrorDomain.CoreLocation)
                throw new InvalidCastException($"{nameof(error)} is not a {nameof(NSErrorDomain.CoreLocation)} error.");

            return (CoreLocationErrorCode)error.code;
        }
    }
}
