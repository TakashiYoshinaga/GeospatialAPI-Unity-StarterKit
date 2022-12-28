using System;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The deprecated ARCore implementation of the <c>XRImageTrackingSubsystem</c>. Do not use this. Use the <c>ARCoreImageTrackingSubsystem</c> instead.
    /// </summary>
    [Obsolete("ARCoreImageTrackingProvider has been deprecated. Use ARCoreImageTrackingSubsystem instead (UnityUpgradable) -> UnityEngine.XR.ARCore.ARCoreImageTrackingSubsystem", true)]
    public sealed class ARCoreImageTrackingProvider : XRImageTrackingSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARCore-specific implementation which will service the `XRImageTrackingSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARCore.</returns>
        protected override Provider CreateProvider() => null;
#endif
    }
}
