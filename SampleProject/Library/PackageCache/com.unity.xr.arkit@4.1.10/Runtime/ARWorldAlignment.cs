namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// Specifies how the session maps real-world device motion into a 3D scene coordinate system.
    /// See <see cref="ARKitSessionSubsystem.requestedWorldAlignment"/>.
    /// </summary>
    /// <remarks>
    /// See [Apple's documentation](https://developer.apple.com/documentation/arkit/arconfiguration/2923550-worldalignment)
    /// for more information.
    /// </remarks>
    public enum ARWorldAlignment
    {
        /// <summary>
        /// Aligns the world with gravity that is defined by vector (0, -1, 0).
        /// </summary>
        Gravity,

        /// <summary>
        /// Aligns the world with gravity that is defined by the vector (0, -1, 0)
        /// and heading (w.r.t. True North) that is given by the vector (0, 0, 1).
        /// </summary>
        /// <remarks>
        /// **Note:** This option requires location services to be enabled and the user must grant your app permission
        /// to use location services. You must therefore provide a
        /// [Location Usage Description](xref:PlayerSettingsiOS-Other) entry in the Player Settings in order to set
        /// <see cref="ARKitSessionSubsystem.requestedWorldAlignment"/> to this value.
        /// </remarks>
        GravityAndHeading,

        /// <summary>
        /// Aligns the world with the camera’s orientation.
        /// </summary>
        Camera
    }
}
