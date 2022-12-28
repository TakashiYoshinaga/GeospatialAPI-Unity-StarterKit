# Changelog

All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [4.1.10] - 2022-03-01

## [4.1.9] - 2022-01-06

### Fixes

- Fixed [issue 878](https://github.com/Unity-Technologies/arfoundation-samples/issues/878) where `XROcclusionSubsystem` would use `Provider.environmentDepthCpuImageApi` instead of `Provider.environmentDepthConfidenceCpuImageApi` when acquiring the Environment Depth Confidence CPU Image. This did not affect the provider implementations of Google ARCore and Apple ARKit packages because these providers use singleton `XRCpuImage.Api` for all CPU image types. However, it could be an issue for a custom AR provider that uses different instances of `XRCpuImage.Api` for different CPU image types. 

## [4.1.7] - 2021-03-31

### Changes

- Update documentation for [XROcclusionSubsystemDescriptor](xref:UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor) with notes describing the limitations of feature support detection.

## [4.1.5] - 2021-01-25

## [4.1.3] - 2021-01-05

### Changes

- Removed the `CONTRIBUTIONS.md` file as this package does not accept contributions.

## [4.1.1] - 2020-11-09
### Changes
- Released package for Unity 2021.1

## [4.1.0-preview.13] - 2020-11-09

## [4.1.0-preview.12] - 2020-11-02
### New
- Added a new [NotTrackingReason](xref:UnityEngine.XR.ARSubsystems.NotTrackingReason): [CameraUnavailable](xref:UnityEngine.XR.ARSubsystems.NotTrackingReason.CameraUnavailable).

## [4.1.0-preview.11] - 2020-10-22
### New
- Added a new method [ScheduleAddImageWithValidationJob](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary.ScheduleAddImageWithValidationJob(Unity.Collections.NativeSlice{System.Byte},UnityEngine.Vector2Int,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRReferenceImage,Unity.Jobs.JobHandle)) to the [MutableRuntimeReferenceImageLibrary](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary) which adds new reference images to a reference library only after validating that the new reference image is suitable for image tracking. The new method returns a new type [AddReferenceImageJobState](xref:UnityEngine.XR.ARSubsystems.AddReferenceImageJobState) which you can use to determine whether the image was successfully added.

## [4.1.0-preview.10] - 2020-10-12
### Changes
- Each subsystem's "provider" is now accessible by derived classes via a protected property `provider`.

## [4.1.0-preview.9] - 2020-09-25
### Changes
- Updating dependency on com.unity.subsystemregistration to 1.1.0.

### Fixes
- Fix documentation links.
- Fix [XRReferenceImageLibraries](xref:UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary) when duplicated from an existing reference image library. Reference image libraries are assigned unique GUIDs on creation, so if you created one by duplicating an existing library, they would have identical GUIDs. The actual reference image library used at runtime was not well defined in this case.

## [4.1.0-preview.7] - 2020-08-26
### Fixes
- Fixed an issue which could throw an exception when subsystems were run in the Editor (e.g., for simulation or remoting). This could happen when a trackable (e.g., a plane or anchor) was removed. This did not affect Player builds (i.e., on device). This is an example of the exception and associated callstack: <pre>
NullReferenceException: Object reference not set to an instance of an object
Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle.CheckReadAndThrow (Unity.Collections.LowLevel.Unsafe.AtomicSafetyHandle handle)
Unity.Collections.NativeArray`1[T].Copy (Unity.Collections.NativeArray`1[T] src, Unity.Collections.NativeArray`1[T] dst)
Unity.Collections.NativeArray`1[T].CopyFrom (Unity.Collections.NativeArray`1[T] array)
UnityEngine.XR.ARSubsystems.TrackableChanges`1[T]..ctor (System.Void* addedPtr, System.Int32 addedCount, System.Void* updatedPtr, System.Int32 updatedCount, System.Void* removedPtr, System.Int32 removedCount, UnityEngine.XR.ARSubsystems.XRReferencePoint defaultT, System.Int32 stride, Unity.Collections.Allocator allocator)
...</pre>

## [4.1.0-preview.6] - 2020-07-27
### New
- Implemented `supportsColorCorrection` boolean in `XRCameraSubsystemDescriptor`. This value indicates whether or not color correction values for ambient color are available on the current device.

### Fixes
- Fixed script updater attribute which could result in an infinite loop during automatic script updates.

## [4.1.0-preview.5] - 2020-07-16
### Fixes
- Minor correction in a debug warning message related to shaders in the build pipeline.
- Updated documentation.
- Fixed xmldoc errors.

## [4.1.0-preview.3] - 2020-07-09
### Fixes
- Minor documentation fixes.

## [4.1.0-preview.2] - 2020-06-24
### Changes
- Adding documentation for the meshing and occlusion subsystems.

## [4.1.0-preview.1] - 2020-06-23
### New
- Add support for environment depth through the XROcclusionSubsystem.

### Changes
- Minimum Unity version for this package is now 2019.4.

## [4.0.1] - 2020-05-27
### New
- Added a method to XRCameraSubsystem that allows optional, platform-specific code to be called immediately before the camera background is rendered.
- Added support for camera grain to `XRCameraSubsystem` through `XRCameraFrame`.
- Added depth field and dimension field to `XRTextureDescriptor`. Depth indicates the size of the depth dimension in a 3D texture, and dimension indicates the type of texture. See the [TextureDimension docs](https://docs.unity3d.com/ScriptReference/Rendering.TextureDimension.html) for more details.
- Added meshing-related features to [`Feature` enum](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.0/api/UnityEngine.XR.ARSubsystems.Feature.html).
- Added point cloud feature to [`Feature` enum](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.0/api/UnityEngine.XR.ARSubsystems.Feature.html).
- Added `XROcclusionSubsystem.TryAcquireHumanStencilCpuImage` and `XROcclusionSubsystem.TryAcquireHumanDepthCpuImage` which provides access to the raw texture data on the CPU.

### Changes
- Renamed [`Feature.AnyTracking`](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.0/api/UnityEngine.XR.ARSubsystems.Feature.html#fields) to `Feature.AnyTrackingMode`.
- Changed `XRCameraImage` to `XRCpuImage`. See the [ARFoundation migration guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html#xrcameraimage-is-now-xrcpuimage) for more details.

## [4.0.0-preview.3] - 2020-05-04
### New
- Add support for tracked raycasts. A tracked raycast is repeated and updated automatically. See [XRRaycastSubsystem.TryAddRaycast](xref:UnityEngine.XR.ARSubsystems.XRRaycastSubsystem.Provider.TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast@)).
- Added a constructor to create a TrackableId from parsing a string.

## [4.0.0-preview.1] - 2020-02-26
### Breaking Changes
- Several subsystem properties have been broken into 'current' and 'requested' properties. See the [ARFoundation Migration Guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html) for more details.

## [3.1.3] - 2020-04-13
### New
- Adding the API updater files required to update from `XRReferencePoint*` to `XRAnchor*`.
- Adding new methods to the `XRCameraSubsystem` to query the list of enabled & disabled material keywords for the shader.

## [3.1.0-preview.8] - 2020-03-12

## [3.1.0-preview.7] - 2020-02-27

## [3.1.0-preview.6] - 2020-02-18
### Fixes
- Added fix to `XRCameraConfiguration` that adds `nativeConfigurationHandle` to equality checks between `XRCameraConfiguration`s.

## [3.1.0-preview.4] - 2020-01-08
### Fixes
- Fixes an issue with the 2D joint positions from human body tracking.
- Fixes an issue where the equality comparison for XRCameraConfiguration did not take `nativeConfigurationHandle` into account

## [3.1.0-preview.2] - 2019-12-06
### New
- Added support for HDR light estimation mode to `XRCameraSubsystem` and `XRCameraFrame`.
- Added additional field to `XRCameraConfiguration` to expose a handle used to get the native configuration.  This handle is platform specific in it's implementation.
- Added script updater support for facilitating the rename of Reference Points to Anchors

### Fixes
- Updated documentation links to point to the 3.1 version of the documentation.

## [3.1.0-preview.1] - 2019-11-21

## [3.0.2] - 2020-03-18
### Fixes
- Fixed "X" (remove reference image) icon in the `XRReferenceImageLibrary` inspector.

## [3.0.0] - 2019-11-05
### Breaking changes
- Renaming the concept of `Reference Points` to `Anchors`. The Unity script updater should convert any references to `XRReferencePointSubsystem`, `XRReferencePoint`, and `XRReferencePointSubsystemDescriptor` the next time the project is loaded into the Editor.

### New
- Added `XROcclusionSubsystem` for managing occlusion textures, such as the human segmentation stencil and human segmentation depth on some iOS devices.

## [3.0.0-preview.4] - 2019-10-22
### New
- Change `TrySetFocusMode` to a property called `focusMode`, enabling providers to implement a getter as well as a setter.
- Added `classification` on `BoundedPlane` which provides
contextual information such as `Floor`, `Wall`, `Ceiling`.

### Fixes
- [`XRCameraImagePlane.ToString()`](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.1/api/UnityEngine.XR.ARSubsystems.XRCameraImagePlane.html#UnityEngine_XR_ARSubsystems_XRCameraImagePlane_ToString) invoked `NativeArray.ToString()` to build its string, which produced a string with a lot of irrelevant information. Now, it just displays the length of the array, row stride, and pixel stride of the plane.

## [3.0.0-preview.3] - 2019-09-26
### New
- Added an input device layout for the [Input System](https://github.com/Unity-Technologies/InputSystem), for use by individual providers.

### Breaking Changes
- Updated the interface for all subsystems to apply a consistent pattern across all subsystems. This affects subsystem implementations (such as ARCore and ARKit) but should not affect consumers of those subsystems.
- Removed `supported` property on the `XRFaceSubsystem`. Providers (such as ARKit) are expected not to register themselves if they are not supported.
- Removed `supported` property on the `XREnvironmentProbeSubsystem`. Providers (such as ARKit) are expected not to register themselves if they are not supported.

## [3.0.0-preview.2] - 2019-09-05
- Updated package version to 3.0.0-preview.2 for consistency with other AR-related packages.

## [3.0.0-preview.1] - 2019-08-21
### New
- Add support for reference image libraries that are modifiable at runtime. For platforms that support it, this allows you to add new reference images at runtime.

## [2.2.0-preview.4] - 2019-07-30
### New
- Add support for eye tracking.
- Added an [XRParticipantSubsystem](xref:arsubsystems-participant-subsystem) which can track users in a multi-user collaborative session.
- Add support for exposure duration
- Add support for exposure offset
- Add support for Lightweight Render Pipeline and Universal Render Pipeline.
- Add support for height scale estimatation for the 3D human body subsystem.

## [2.2.0-preview.3] - 2019-07-16
### New
- Add support for `NotTrackingReason`.
- Add support for getting the ambient light intensity in lumens.
- Add functionality to the `XRSessionSubsystem` to enable synchronizing the Unity frame with the AR session update. See `XRSessionSubsystem.matchFrameRate` and `XRSessionSubsystem.frameRate`.

### Fixes
- Fix `CameraFocusMode` handling in `XRCameraSubsystem`. This fixes an issue when running on a provider that does not set the default focus mode to `CameraFocusMode.Fixed`.

## [2.2.0-preview.2] - 2019-06-05
- Adding support for ARKit 3 functionality: Human pose estimation, human segmentation images, session collaboration, multiple face tracking, and tracking a face (with front camera) while in world tracking (with rear camera).

## [2.1.0-preview.2] - 2019-05-16
### Fixes
- Fix documentation links.

## [2.1.0-preview.1] - 2019-05-06
### New
- Add an image tracking subsystem.
- Add an environment probe subsystem.
- Add a face tracking subystem.
- Add an object tracking subsystem for detecting previously scanned 3D objects.

## [2.0.1] - 2019-03-12
- 2019.2 verified release

## [1.0.0-preview.1] - 2019-01-14
- This is the first release of *Unity Package com.unity.xr.subsystems.
