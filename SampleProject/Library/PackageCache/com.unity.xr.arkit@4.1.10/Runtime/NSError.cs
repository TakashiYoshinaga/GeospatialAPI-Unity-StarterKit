using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Information about an error condition including a domain, a domain-specific error code, and application-specific
    /// information.
    /// </summary>
    /// <remarks>
    /// This is a wrapper for Objective-C's
    /// [NSError](https://developer.apple.com/documentation/foundation/nserror?language=objc) object.
    /// </remarks>
    public struct NSError : INSObject, IEquatable<NSError>
    {
        IntPtr m_Self;
        NSError(IntPtr ptr) => m_Self = ptr;

        /// <summary>
        /// (Read Only) Whether the underlying native pointer is `null`.
        /// </summary>
        public bool isNull => m_Self == IntPtr.Zero;

        /// <summary>
        /// Gets the underlying Objective-C pointer.
        /// </summary>
        /// <returns>Returns the underlying Objective-C pointer.</returns>
        public IntPtr AsIntPtr() => m_Self;

        /// <summary>
        /// Generates a string representation of this <see cref="NSError"/>.
        /// </summary>
        /// <remarks>
        /// This method uses
        /// [NSObject's description property](https://developer.apple.com/documentation/objectivec/1418956-nsobject/1418746-description)
        /// to generate the string.
        /// </remarks>
        /// <returns>Returns a string representation of this <see cref="NSError"/>.</returns>
        public override string ToString() => NSObject.ToString(this);

        /// <summary>
        /// (Read Only) The error code associated with this <see cref="NSError"/>.
        /// </summary>
        /// <remarks>
        /// Error codes are domain-specific. See <see cref="ToErrorDomain"/> and <see cref="domain"/>.
        ///
        /// See [Apple's documentation](https://developer.apple.com/documentation/foundation/nserror/1409165-code?language=objc)
        /// for more information.
        /// </remarks>
        public long code => GetCode(this);

        /// <summary>
        /// (Read Only) A string containing the error domain.
        /// </summary>
        /// <remarks>
        /// See [Apple's documentation](https://developer.apple.com/documentation/foundation/nserror/1413924-domain?language=objc)
        /// for more information.
        /// </remarks>
        /// <seealso cref="ToErrorDomain"/>
        public string domain => GetDomain(this).GetStringAndDispose();

        /// <summary>
        /// The <see cref="domain"/> as an <see cref="NSErrorDomain"/> enum.
        /// </summary>
        /// <remarks>
        /// This method tries to determine the error domain without generating any managed strings. If the error
        /// domain is <see cref="NSErrorDomain.Unknown"/>, you may still be able to get additional information from its
        /// string representation (<see cref="domain"/>).
        /// </remarks>
        /// <returns>Returns the <see cref="NSErrorDomain"/> of this <see cref="NSError"/>, or
        ///     <see cref="NSErrorDomain.Unknown"/> if the error domain could not be determined.</returns>
        public NSErrorDomain ToErrorDomain()
        {
            using (var domain = GetDomain(this))
            {
                if (domain.Equals(ARErrorDomain))
                    return NSErrorDomain.ARKit;
                if (domain.Equals(CLErrorDomain))
                    return NSErrorDomain.CoreLocation;

                return NSErrorDomain.Unknown;
            }
        }

        /// <summary>
        /// (Read Only) A string containing the localized description of the error.
        /// </summary>
        /// <remarks>
        /// See [Apple's documentation](https://developer.apple.com/documentation/foundation/nserror/1414418-localizeddescription?language=objc)
        /// for more information.
        /// </remarks>
        public string localizedDescription => GetLocalizedDescription(this).GetStringAndDispose();

        /// <summary>
        /// (Read Only) A string containing the localized recovery suggestion for the error.
        /// </summary>
        /// <remarks>
        /// See [Apple's documentation](https://developer.apple.com/documentation/foundation/nserror/1407500-localizedrecoverysuggestion?language=objc)
        /// for more information.
        /// </remarks>
        public string localizedRecoverySuggestion => GetLocalizedRecoverySuggestion(this).GetStringAndDispose();

        /// <summary>
        /// (Read Only) A string containing the localized explanation of the reason for the error.
        /// </summary>
        /// <remarks>
        /// See [Apple's documentation](https://developer.apple.com/documentation/foundation/nserror/1412752-localizedfailurereason?language=objc)
        /// for more information.
        /// </remarks>
        public string localizedFailureReason => GetLocalizedFailureReason(this).GetStringAndDispose();

        /// <summary>
        /// Determines whether <paramref name="other"/> is equal to this one as determined by
        /// [isEqual:](https://developer.apple.com/documentation/objectivec/1418956-nsobject/1418795-isequal)
        /// </summary>
        /// <param name="other">The other <see cref="NSError"/> to test for equality.</param>
        /// <returns>Returns `true` if <paramref name="other"/> is considered equal using
        ///     [isEqual:](https://developer.apple.com/documentation/objectivec/1418956-nsobject/1418795-isequal).
        ///     Returns `false` otherwise.</returns>
        public bool Equals(NSError other) => NSObject.IsEqual(this, other);

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The <see cref="object"/> to test.</param>
        /// <returns>Returns `true` if <paramref name="obj"/> is an <see cref="NSError"/> and is considered equal using
        ///     <see cref="Equals(UnityEngine.XR.ARKit.NSError)"/>. Returns `false` otherwise.</returns>
        public override bool Equals(object obj) => obj is NSError other && Equals(other);

        /// <summary>
        /// Generates a hash code for this <see cref="NSError"/>.
        /// </summary>
        /// <remarks>
        /// The hash code is generated using NSObject's
        /// [hash](https://developer.apple.com/documentation/objectivec/1418956-nsobject/1418859-hash) property.
        /// </remarks>
        /// <returns>Returns a hash code for this <see cref="NSError"/>.</returns>
        public override int GetHashCode() => NSObject.GetHashCode(this);

        /// <summary>
        /// Tests whether the underlying pointers for two <see cref="NSError"/> objects are the same.
        /// </summary>
        /// <remarks>
        /// This only tests whether two <see cref="NSError"/>s point to the same object in memory. Two different
        /// <see cref="NSError"/>s could still be considered equal. See
        /// <see cref="Equals(UnityEngine.XR.ARKit.NSError)"/>.
        /// </remarks>
        /// <param name="lhs">The <see cref="NSError"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="NSError"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if the underlying pointers of <paramref name="lhs"/> and <paramref name="rhs"/>
        ///     are the same. Returns `false` otherwise.</returns>
        public static bool operator ==(NSError lhs, NSError rhs) => lhs.m_Self == rhs.m_Self;

        /// <summary>
        /// Tests whether the underlying pointers for two <see cref="NSError"/> objects are different.
        /// </summary>
        /// <remarks>
        /// This only tests whether two <see cref="NSError"/>s point to different objects in memory. Two different
        /// <see cref="NSError"/>s could still be considered equal. See
        /// <see cref="Equals(UnityEngine.XR.ARKit.NSError)"/>.
        /// </remarks>
        /// <param name="lhs">The <see cref="NSError"/> to compare with <paramref name="rhs"/>.</param>
        /// <param name="rhs">The <see cref="NSError"/> to compare with <paramref name="lhs"/>.</param>
        /// <returns>Returns `true` if the underlying pointers of <paramref name="lhs"/> and <paramref name="rhs"/>
        ///     are different. Returns `false` otherwise.</returns>
        public static bool operator !=(NSError lhs, NSError rhs) => lhs.m_Self != rhs.m_Self;

#if UNITY_EDITOR || !UNITY_XR_ARKIT_LOADER_ENABLED
        static long GetCode(NSError self) => default;

        static NSString GetDomain(NSError self) => default;

        static NSString GetLocalizedDescription(NSError self) => default;

        static NSString GetLocalizedRecoverySuggestion(NSError self) => default;

        static NSString GetLocalizedFailureReason(NSError self) => default;

        static NSString ARErrorDomain => default;

        static NSString CLErrorDomain => default;
#else
        [DllImport("__Internal", EntryPoint = "NSError_get_code")]
        static extern long GetCode(NSError self);

        [DllImport("__Internal", EntryPoint = "NSError_get_domain")]
        static extern NSString GetDomain(NSError self);

        [DllImport("__Internal", EntryPoint = "NSError_get_localizedDescription")]
        static extern NSString GetLocalizedDescription(NSError self);

        [DllImport("__Internal", EntryPoint = "NSError_get_localizedRecoverySuggestion")]
        static extern NSString GetLocalizedRecoverySuggestion(NSError self);

        [DllImport("__Internal", EntryPoint = "NSError_get_localizedFailureReason")]
        static extern NSString GetLocalizedFailureReason(NSError self);

        static extern NSString ARErrorDomain
        {
            [DllImport("__Internal", EntryPoint = "UnityARKit_GetARErrorDomain")]
            get;
        }

        static extern NSString CLErrorDomain
        {
            [DllImport("__Internal", EntryPoint = "UnityARKit_GetCLErrorDomain")]
            get;
        }
#endif
    }
}
