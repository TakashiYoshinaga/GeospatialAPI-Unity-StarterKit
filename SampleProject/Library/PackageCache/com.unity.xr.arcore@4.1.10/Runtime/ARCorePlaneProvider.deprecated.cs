using System;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    /// <summary>
    /// The ARCore implementation of the <c>XRPlaneSubsystem</c>. Do not create this directly. Use the <c>SubsystemManager</c> instead.
    /// </summary>
    [Obsolete("ARCorePlaneProvider has been deprecated. Use ARCorePlaneSubsystem instead (UnityUpgradable) -> UnityEngine.XR.ARCore.ARCorePlaneSubsystem", true)]
    public sealed class ARCorePlaneProvider : XRPlaneSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Creates the ARCore-specific implementation which will service the `XRPlaneSubsystem`.
        /// </summary>
        /// <returns>A new instance of the `Provider` specific to ARCore.</returns>
        protected override Provider CreateProvider() => null;
#endif
    }
}
