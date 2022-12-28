# Changelog

All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [4.1.10] - 2022-03-01

### Changes

- Static library was built with Xcode 13.2.1 (13C100)

## [4.1.9] - 2022-01-06

### Fixes

- Fixed [issue 1334331](https://issuetracker.unity3d.com/issues/ios-armeshmanager-meshes-flicker-when-arworldalignment-is-set-to-gravityandheading) which could cause meshes to occasionally become briefly invalid, resulting in a flickering effect when visualized.
- Fixed build issue [issue 1357108](https://issuetracker.unity3d.com/issues/unity-xr-arkit-loader-enabled-define-is-not-added-if-arkit-face-tracking-is-enabled-and-unity-editor-build-target-is-not-set-t) with the scripting define UNITY_XR_ARKIT_LOADER_ENABLED not being set correctly in some use cases.
- Fixed issue where selected build group was not the active build group.
- Fixed an issue which could cause [CPU image](xref:UnityEngine.XR.ARSubsystems.XRCpuImage) conversion to produce incorrect results when operating on a [depth image](xref:UnityEngine.XR.ARSubsystems.XROcclusionSubsystem.TryAcquireEnvironmentDepthCpuImage(UnityEngine.XR.ARSubsystems.XRCpuImage@)) when the [transformation](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.Transformation) was something other than `MirrorY`.
- Fixed an issue which could cause some requested features to persist across session destruction and reinitialization.

## [4.1.7] - 2021-03-31

## [4.1.5] - 2021-01-25

### Changes

- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@4.0) dependency to 4.0.

## [4.1.3] - 2021-01-05

### Changes

- This package now requires Unity 2019.4.15f1 or later.

## [4.1.1] - 2020-11-11
### Changes
- Released package for Unity 2021.1

## [4.1.0-preview.13] - 2020-11-09
### Fixes
- Fix crash when performing a synchronous [XRCpuImage conversion](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.Convert(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams,System.IntPtr,System.Int32)) while an [asynchronous conversion](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.ConvertAsync(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams)) is already running.

## [4.1.0-preview.12] - 2020-11-02
### Changes
- Removed a file called `NativeInterop.m` (it has been combined with an existing file to reduce name collisions). If you build for iOS by "appending" rather than "replacing" a previous Xcode project, you will need to manually remove this file reference. It is at `Libraries/com.unity.xr.arkit/Runtime/iOS/NativeInterop.m` in the Xcode project produced by Unity.

### Fixes
- Fix issue with z-depth calculations on iOS when AR Foundation camera is enabled. This issue would result in shader z-depth differences (e.g. during fog computation) between normal camera rendering compared to AR camera rendering.
- Fix a (mostly harmless) warning message emitted by ARKit if the [worldAlignment](https://developer.apple.com/documentation/arkit/arworldalignment?language=objc) is set when it is not allowed to be changed and is already at the requested value.

## [4.1.0-preview.11] - 2020-10-22
### New
- Added a mechanism to receive callbacks for some ARKit-specific session events. See [ARKitSessionDelegate](xref:UnityEngine.XR.ARKit.ARKitSessionDelegate). This allows you to be notified when:
  - The [ARSession](https://developer.apple.com/documentation/arkit/arsession?language=objc) fails.
  - The [ARConfiguration](https://developer.apple.com/documentation/arkit/arconfiguration?language=objc) changes.
  - The [coaching overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview?language=objc) [activates](https://developer.apple.com/documentation/arkit/arcoachingoverlayviewdelegate/3152985-coachingoverlayviewwillactivate?language=objc).
  - The [coaching overlay](https://developer.apple.com/documentation/arkit/arcoachingoverlayview?language=objc) [deactivates](https://developer.apple.com/documentation/arkit/arcoachingoverlayviewdelegate/3152983-coachingoverlayviewdiddeactivate?language=objc).
- Added a new [property](xref:UnityEngine.XR.ARKit.ARKitSessionSubsystem.requestedWorldAlignment) to set the session's [ARWorldAlignment](xref:UnityEngine.XR.ARKit.ARWorldAlignment).
- Added support for the new method [ScheduleAddImageWithValidationJob](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary.ScheduleAddImageWithValidationJob(Unity.Collections.NativeSlice{System.Byte},UnityEngine.Vector2Int,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRReferenceImage,Unity.Jobs.JobHandle)) on the [MutableRuntimeReferenceImageLibrary](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary).

### Changes
- The implementation of [XRCpuImage.ConvertAsync](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.ConvertAsync(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams)) is now multithreaded across all hardware cores to produce the result faster. Previously, only the [synchronous version](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.Convert(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams,System.IntPtr,System.Int32)) was multithreaded. However, on newer devices with high camera resolutions, the single threaded asynchronous conversion would often take multiple frames to complete. Now, both synchronous and asynchronous conversions are multithreaded.
- Static library was built with Xcode 12.1 (12A7403).

## [4.1.0-preview.10] - 2020-10-12
### New
- The session configuration's [ARWorldMap](xref:UnityEngine.XR.ARKit.ARWorldMap) can be cleared by calling [ApplyWorldMap](xref:UnityEngine.XR.ARKit.ARKitSessionSubsystem.ApplyWorldMap(UnityEngine.XR.ARKit.ARWorldMap)) with a default-constructed `ARWorldMap`. Previously, this method would throw if the `ARWorldMap` was not valid.

### Changes
- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.2) to 3.2.16.

## [4.1.0-preview.9] - 2020-09-25
### Changes
- Static library was built with Xcode 12.0.1 (12A7300).

### Fixes
- Fixed issue where ARKitSettings could throw a `NullReferenceException` when checking for face tracking.
- Fixed an issue with the importer for `ARObject`s (ARKit's format for object tracking targets) which could incorrectly parse floating point numbers when the host machine used a different floating point format (e.g., swapping `,` and `.`).
- Fixed some documentation links.
- Fixed a hang in the meshing subsystem implementation caused by resource contention.
- Fixed an issue where the environment depth confidence texture was not able to be sampled in a shader. Changed the texture format from MTLPixelFormatR8Uint to MTLPixelFormatR8Unorm.
- Handle non-unit scale in the background shader when calculating depth for occlusion.
- Fixed a sporadic app freeze after an ARKit session is destroyed.
- Fix ["batchmode" builds](https://docs.unity3d.com/Manual/CommandLineArguments.html), i.e., building the iOS Xcode project from the command line. Previously, this could errornously exclude `liblibUnityARKitFaceTracking.a` from the build.

## [4.1.0-preview.7] - 2020-08-26
### Changes
- Static library was built with Xcode 12.0 beta 6 (12A8189n).

### Fixes
- Fixed memory leak in the meshing subsystem implementation from unreleased MTLBuffers.

## [4.1.0-preview.6] - 2020-07-27
### Changes
- Static library was built with Xcode 12.0 beta 3 (12A8169g). Please note that target devices supporting environment depth now require iOS 14 beta 3.

### Fixes
- Fixing issue where [`ARPlaneManager.currentDetectionMode`](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.1/api/UnityEngine.XR.ARFoundation.ARPlaneManager.html#UnityEngine_XR_ARFoundation_ARPlaneManager_currentDetectionMode) was always reporting [`PlaneDetectionMode.None`](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.1/api/UnityEngine.XR.ARSubsystems.PlaneDetectionMode.html).
- Removing a work around preventing environment depth and human segmentation to be simultaneously enabled because the source issue has been resolved with Xcode 12 beta 3 and iOS 14 beta 3.
- Fixed an issue where ARKit shaders could incorrectly remain in the [Preloaded Assets](https://docs.unity3d.com/ScriptReference/PlayerSettings.GetPreloadedAssets.html) array, which could interfere with builds on other platforms. For example, in some cases, if first you built for iOS, and then built for Android, you might have seen an error message like
<pre>
Shader error in 'Unlit/ARKitBackground': failed to open source file: 'Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl' at line 44 (on gles3)
</pre>
- Fixed crash on startup caused by devices that support iOS 11 but not ARKit.

## [4.1.0-preview.5] - 2020-07-16
### Changes
- Updated the CBUFFER name containing the UnityDisplayTransform matrix from AR Foundation to avoid collision.
- The ARKit static library is no longer part of the generated Xcode project when the ARKit loader is disabled in the ARKit settings in the `XR Plug-in Management` UI. Added default implementations of calls to native code when this static library is excluded so that linker errors do not occur.
- Updated the ARKit meshing documentation.
- Static library was built with Xcode 12.0 beta 2 (12A6163b).

### Fixes
- When using the Universal Rendering Pipeline, the background rendering used the graphics setting's render pipeline asset instead of the current render pipeline. This meant that render pipeline assets assigned to a quality level would not be respected. This has been fixed.

## [4.1.0-preview.3] - 2020-07-09
### Fixes
- Updated the `ARObjectImporter` to account for a namespace which changed from `UnityEditor.Experimental.AssetImporters` to `UnityEditor.AssetImporters` in 2020.2.0a17.
- Fixed a crash when using [mesh face classifications](https://docs.unity3d.com/Packages/com.unity.xr.arkit@4.1/api/UnityEngine.XR.ARKit.ARKitMeshSubsystemExtensions.html#UnityEngine_XR_ARKit_ARKitMeshSubsystemExtensions_GetFaceClassifications_XRMeshSubsystem_TrackableId_Allocator_).
- Minor documentation fixes.

### Changes
- Static library was built with Xcode 12.0 beta 2 (12A6163b)
- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.2) to 3.2.13.

## [4.1.0-preview.2] - 2020-06-24
### Fixes
- Added a workaround for an issue where environment depth and human stencil & depth do not work together as expected. This workaround uses the OcclusionPreferenceMode setting to decide which mode should be enabled. This workaround will be removed once the original issue is fixed.
- Fixed a bug which caused the `ARKitRaycastSubsystem` to throw on devices running versions of iOS prior to 13. This would most commonly be seen when using ARFoundation's [ARRaycastManager](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.1/api/UnityEngine.XR.ARFoundation.ARRaycastManager.html).

### Changes
- Adding documentation for the ARKit meshing and occlusion functionalities.

## [4.1.0-preview.1] - 2020-06-23
### New
- Add support for ARKit environment depth through the AROcclusionManager/XROcclusionSubsystem.

### Changes
- Minimum Unity version for this package is now 2019.4.
- Static library was built with Xcode 12.0 beta (12A6159).

## [4.0.1] - 2020-05-27
### New
- Added ARKit Camera Grain exposure support for iOS 13 and above, (Support to convert to Texture3D only available in Unity 2020.2 and above). Can be applied to 3D content to give a camera grain noise effect. See [Camera Grain Documentation](https://developer.apple.com/documentation/arkit/arframe/3255173-cameragraintexture) for more details.
- Implemented `XROcclusionSubsystem.TryAcquireHumanStencilCpuImage` and `XROcclusionSubsystem.TryAcquireHumanDepthCpuImage` which provides access to the raw texture data on the CPU.

### Changes
- Updating dependency on AR Subsystems to 4.0.0.
- Added ARKit Camera Grain exposure support for iOS 13 and above, (Support to convert to Texture3D only available in Unity 2020.2 and above). Can be applied to 3D content to give a camera grain noise effect. See [Camera Grain Documentation](https://developer.apple.com/documentation/arkit/arframe/3255173-cameragraintexture) for more details.
- Removed support for Xcode versions below version 11.0 as per apple app store submission guidelines.  [See App Store submission guidelines for more information](https://developer.apple.com/app-store/submissions)
- Updated "camera image" APIs to use the new "CPU image" API. See the [ARFoundation migration guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html#xrcameraimage-is-now-xrcpuimage) for more details.
- Removed support for Xcode versions below version 11.0 as per apple app store submission guidelines.  [See App Store submission guidelines for more information](https://developer.apple.com/app-store/submissions)
- Previously, the trackable id associated with a point cloud was tied to the `XRDepthSubsystem`, and would only change if the subsystem was recreated. Now, the trackable id is tied to the session and will change if the session is recreated or reset. As before, there is only ever one point cloud.
- ARKitLoader now manages the initialization and destruction of its `XRMeshSubsystem`. This means that using ARKit with [XR Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.1/manual/index.html) with try to initialize (but not start) the meshing subsystem.
- The ARKit Settings has been moved from Project Settings > XR to Project Settings > XR Plug-in Management for consistency with other XR platforms. See [ARKitSettings](https://docs.unity3d.com/Packages/com.unity.xr.arkit@4.0/api/UnityEditor.XR.ARKit.ARKitSettings.html?q=ARKitSettings) for more information. [ARKit Face Tracking](https://docs.unity3d.com/Packages/com.unity.xr.arkit-face-tracking@4.0/manual/index.html) package is now installable through this menu. ARKit build settings will no longer have to be created manually, installing the package will automatically create ARKit settings.

### Fixes
- Fixed a bug where the [`XRParticipantSubsystem`](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.0/api/UnityEngine.XR.ARSubsystems.XRParticipantSubsystem.html) was never initialized and was therefore unavailable.

## [4.0.0-preview.3] - 2020-05-04
### New
- Add support for tracked (i.e., persistent) raycasts.
- Added support for scene mesh generation through `ARMeshManager`.

### Changes
- Updating dependency on com.unity.xr.management to 3.2.10.

### Fixes
- Fixed all broken or missing scripting API documentation.

## [4.0.0-preview.1] - 2020-03-11
### Changes
- The ARSubsystem implementions have been updated to reflect changes in the ARSubsystems API.
- See the [ARFoundation Migration Guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html) for more details.

### Breaking Changes
- `ARKitSessionSubsystem.collaborationEnabled` was both gettable and settable; now it is only gettable. To toggle the collaboration feature, set `ARKitSessionSubsystem.collaborationRequested` instead.
- The static library `UnityARKit.a` has been prefixed with `lib` to follow library naming conventions. Existing projects will need to either rebuild (Build and Run > Replace) the Unity generated Xcode project or manully remove `UnityARKit.a` from the `UnityFramework` "Frameworks and Libraries" section in Xcode.

## [3.1.3] - 2020-04-13
### Fixes
- Combines the three background shaders for different rendering pipelines into one shader file with variations. This eliminates compiler errors that started with Unity 2020.1.

## [3.1.0-preview.8] - 2020-03-12

## [3.1.0-preview.7] - 2020-03-03
### Fixes
- When auto focus was set to "Fixed" when starting an AR session, the iOS device would still perform auto focus. This has been fixed.
- The estimated main light direction was Y flipped, e.g., it pointed up when it should be pointing down. This has been fixed.
- Patched a memory leak by removing the coaching overly view from the superview.

## [3.1.0-preview.6] - 2020-02-18

## [3.1.0-preview.4] - 2020-01-08
### Fixes
- Fixes an issue with the 2D joint positions from human body tracking.

## [3.1.0-preview.2] - 2019-12-16
### New
- Added support for HDR Light Estimation.  HDR Light Estimation only functions during Face-Tracking on ARKit.
- Exposed native camera configuration object by surfacing the object pointer to the managed ARSubsystems.

### Fixes
- Correcting the static library meta files that get corrupted when upgrading a project to Unity 2019.3.
- Fixing an issue where changing the AROcclusionManager.humanSegmentationStencilMode at runtime would sometime have no effect on the ARKit platform.
- Update documentation links to point to 3.1.
- Updating dependent version of com.unity.xr.management package to eliminate build warning message.

## [3.1.0-preview.1] - 2019-11-21

### New
- Added `ARKitXROcclusionSubsystem` for managing occlusion textures, such as the human segmentation stencil and human segmentation depth on some iOS devices.

## [3.0.4] - 2020-04-08
### Fixes
- Adding a minimum version restriction to the com.unity.inputsystem package for the conditional code that depends on that package.
- When auto focus was set to "Fixed" when starting an AR session, the iOS device would still perform auto focus. This has been fixed.
- Patched a memory leak by removing the coaching overly view from the superview.
- Fixed a crash that could occur when multithreaded rendering was enabled and [Stop](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.0/api/UnityEngine.XR.ARSubsystems.XRSubsystem-1.html#UnityEngine_XR_ARSubsystems_XRSubsystem_1_Stop) was called on the `XRCameraSubsystem`. In ARFoundation, this happens when the [`ARCameraManager`](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.1/api/UnityEngine.XR.ARFoundation.ARCameraManager.html) is disabled. This happened because the textures owned by the subsystem are later manipulated on the render thread, and stopping the subsystem could invalidate the textures.

### Changes
- Default ARKit loader for XR Management will now only start and stop the implementations of XRInputSubsystem, XRCameraSubsystem, and XRSessionSubsystem when the _Initialize on Startup_ option in XR Management is enabled.
- Static libraries were built with Xcode 11.3.1 (11C505) and Xcode 10.3 (10G8)

## [3.0.1] - 2019-11-27
- 2020.1 verified release

### Fixes
- Correcting script compilation error when the com.unity.inputsystem package is also included in the project.

## [3.0.0] - 2019-11-05
### Breaking changes
- Renamed the concept of `Reference Points` to `Anchors`. Public API changes are in `AR Foundation` and `AR Subsystems` packages.

## [3.0.0-preview.4] - 2019-10-22
### New
- Add getter for the camera focus mode.
- Add support for plane classification for devices running iOS 12 with A12 CPU or later.

### Changes
- Static libraries were built with Xcode 11.1 (11A1027) and Xcode 10.3 (10G8)

### Fixes
- Allow building on non-macOS platforms. When building for iOS, this package determines which version of Xcode is selected in the Build Settings and enables the appropriate native library. This requires that Xcode be installed, which is not possible on non-macOS platforms. In this case, the library built with Xcode 11 is used.
- Fixed reporting of tracking state for ARHumanBodies. Previously, the tracking state was always `TrackingState.Tracking`. Now, the tracking state will change to `TrackingState.None` when the person is no longer being tracked.

## [3.0.0-preview.3] - 2019-09-26
### New
- Added support for both linear and gamma color spaces.
- Register AR tracking inputs with the new [Input System](https://github.com/Unity-Technologies/InputSystem)

### Changes
- Build compiled binaries with Xcode 10.3 (10G8) and Xcode 11 (11A420a)

### Fixes
- Exclude tvOS as a supported platform.
- The ["match frame rate"](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.1/api/UnityEngine.XR.ARFoundation.ARSession.html#UnityEngine_XR_ARFoundation_ARSession_matchFrameRate) option could incorrectly cause execution to be blocked while waiting for a new frame, leading to long frame times. This has been fixed.
- The ["match frame rate"](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@3.1/api/UnityEngine.XR.ARFoundation.ARSession.html#UnityEngine_XR_ARFoundation_ARSession_matchFrameRate) option did not account for thermal throttling, which can put ARKit into a 30 frames per second update mode while Unity would keep trying to update at 60 frames per second. This could lead to visual artifacts like judder. The calculated frame rate now takes the thermal state into account and will do a better job matching ARKit's update rate.

## [3.0.0-preview.2] - 2019-09-05
### New
- Added support for [ARCoachingOverlayView](https://developer.apple.com/documentation/arkit/arcoachingoverlayview)
- Added tracking input support for the [Input System](https://github.com/Unity-Technologies/InputSystem)

### Fixes
- 3.0.0-preview.1 was not compatible with some older versions of Xcode. This has been fixed.

### Breaking changes
- `ARKitSessionSubsystem.worldMapSupported` was previously an instance method; now it is a `static` method as it does not require an instance to perform this check.

## [3.0.0-preview.1] - 2019-08-27
### New
- Add support for [XR Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.1/manual/index.html).
- Add support for the [XRParticipantSubsystem](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.1/manual/participant-subsystem.html), which can track other users in a multi-user collaborative session.
- Add support for [exposureDuration](https://developer.apple.com/documentation/arkit/arcamera/3182986-exposureduration?language=objc)
- Add support for [exposureOffset](https://developer.apple.com/documentation/arkit/arcamera/3194569-exposureoffset?language=objc)
- Add support for Lightweight Render Pipeline and Universal Render Pipeline.
- Add support for height scale estimatation for the 3D human body subsystem.
- This package now supports bulding with Xcode ~~9,~~ 10 and 11 beta 7.

### Fixes
- Enforce minimum target iOS version of 11.0 whenever ARKit is required.
- Setting the `ARHumanBodyManager.humanSegmentationDepthMode` value to either `HalfScreenResolution` or `FullScreenResolution` resulted in an invalid human segmentation depth image. This has been fixed.

## [2.2.0-preview.4] - 2019-07-29
### Fixes
- Update ARKit 3 compatibility for Xcode 11 beta 5.

## [2.2.0-preview.3] - 2019-07-18
### Fixes
- Update ARKit 3 compatibility for Xcode 11 beta 4.

## [2.2.0-preview.2] - 2019-07-16
### New
- Add support for `NotTrackingReason`.
- Add support for matching the ARCore framerate with the Unity one. See `XRSessionSubsystem.matchFrameRate`.
- Expose the [priority](https://docs.unity3d.com/Packages/com.unity.xr.arkit@2.2/api/UnityEngine.XR.ARKit.ARCollaborationData.html#UnityEngine_XR_ARKit_ARCollaborationData_priority) property on the `ARCollaborationData`.
- Add support for getting the ambient light intensity in lumens.

### Fixes
- Update ARKit 3 compatibility for Xcode 11 beta 3. This fixes
  - [Collaborative sessions](https://docs.unity3d.com/Packages/com.unity.xr.arkit@2.2/api/UnityEngine.XR.ARKit.ARCollaborationData.html)
  - Human body tracking

## [2.2.0-preview.1] - 2019-06-05
- Adding support for ARKit 3 functionality: Human pose estimation, human segmentation images, session collaboration, multiple face tracking, and tracking a face (with front camera) while in world tracking (with rear camera).

## [2.1.0-preview.6] - 2019-06-03
- Use relative paths for Xcode asset catalogs. This allows the generated Xcode project to be moved to a different directory, or even a different machine. Previously, we used full paths, which prevented this.
- Conditionally compile subsystem registrations. This means the subsystems wont't register themselves in the Editor (and won't generate warnings if there are other subsystems for other platforms).

## [2.1.0-preview.5] - 2019-05-21
### Fixes
- Fix documentation links
- Fix iOS version number parsing. This caused
  - Editor Play Mode exceptions (trying to parse a desktop OS string)
  - Incorrect handling of iOS point releases (e.g., 12.1.3)

## [2.1.0-preview.3] - 2019-05-14
### New
- Add [image tracking](https://developer.apple.com/documentation/arkit/recognizing_images_in_an_ar_experience) support.
- Add [environment probe](https://developer.apple.com/documentation/arkit/adding_realistic_reflections_to_an_ar_experience) support.
- Add [face tracking](https://developer.apple.com/documentation/arkit/creating_face-based_ar_experiences) support.
- Add [object tracking](https://developer.apple.com/documentation/arkit/scanning_and_detecting_3d_objects) support.

## [1.0.0-preview.23] - 2019-01-04
### Fixes
- Refactor the way ARKit face tracking is in the build. Face tracking has been moved to a separate static lib so that it can be removed from the build when face tracking is not enabled. This was preventing apps from passing App Store validation, as face tracking types may not appear in the binary unless you include a privacy policy describing to users how you intend to use face tracking and face data.

### New
- Support the `CameraIntrinsics` API in ARExtensions.

### Fixes
- Fixed linker errors when linking `UnityARKit.a` with Xcode 9.x

## [1.0.0-preview.20] - 2018-12-13

- Fix package dependency.

## [1.0.0-preview.19] - 2018-12-13
- Add C header file necessary to interpret native pointers. See `Includes~/UnityXRNativePtrs.h`
- Add support for setting the camera focus mode.
- Add a build check to ensure only ARM64 is selected as the only target architecture.
- Implement `CameraConfiguration` support, allowing you to enumerate and set the resolution used by the hardware camera.

## [1.0.0-preview.18] - 2018-11-21
### New
- Added ARKit Face Tracking support via `com.unity.xr.facesubsystem`.
- Plane detection modes: Add ability to selectively enable detection for horizontal, vertical, or both types of planes.

## [1.0.0-preview.17] - 2018-10-06
### Fixes
- Fixed an issue where toggling plane detection or light estimation would momentarily pause the ARSession, causing tracking to become temporarily unstable.
- Fixed the (new) CameraImage API to work with the 2018.3 betas.
- ARKit's `ARTrackingStateLimited` was reported as `TrackingState.Tracking`. It is now reported as `TrackingState.Unavailable`.

### Improvements
- Add support for native pointer access for several ARSession-related native objects.
- Add [ARWorldMap](https://developer.apple.com/documentation/arkit/arworldmap) support.
- Add linker validation when building with the IL2CPP scripting backend to avoid stripping the Unity.XR.ARKit assembly.

## [1.0.0-preview.16] - 2018-10-10
### New
- Added support for `XRCameraExtensions` API to get the raw camera image data on the CPU. See the [ARFoundation manual documentation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@1.0/manual/cpu-camera-image.html) for more information.

## [1.0.0-preview.15] - 2018-09-18
### Fixes
- Fix memory leak when destroying the ARSession.

## [1.0.0-preview.14] - 2018-08-10
- Add a pre build check to make sure Metal is the first selected Graphics API in Player Settings.
- Remove restriction on symlinking Unity libraries in Build Settings if using Unity 2018.3 or newer.
- Change plugin entry point in UnityARKit.a to avoid name collisions with other libraries (was `UnityPluginLoad`).

## [1.0.0-preview.13] - 2018-07-17
- Update plugin to be compatible with Unity 2018.3
- `ARPlane.trackingState` reports the session `TrackingState` for ARKit planes (previously it returned `TrackingState.Unknown`). ARKit planes do not have per-plane tracking states, so if they exist and the session is tracking, then the SDK will now report that the planes are tracked.

## [1.0.0-preview.12] - 2018-06-20
- Add -fembed-bitcode flag to UnityARKit.a to support archiving.
- Fail the build if "Symlink Unity libraries" is checked.

## [1.0.0-preview.11] - 2018-06-14
- Fail the build if Camera Usage Description is blank

## [1.0.0-preview.10] - 2018-06-08
- Do not include build postprocessor when not on iOS
- Add support for reference points attached to planes

## [1.0.0-preview.9] - 2018-06-06
- Remove extraneous debug log

## [1.0.0-preview.8] - 2018-05-07

### Added
-Created a Legacy XRInput interface to automate the switch between 2018.1 and 2018.2 XRInput versions.

## [1.0.0-preview.8] - 2018-05-24
### Added
- Availability check to determine runtime support for ARKit.
- Normalize average brightness reading from 0..1

## [1.0.0-preview.5] - 2018-03-26

### This is the first release of the ARKit package for multi-platform AR.

In this release we are shipping a working iteration of the ARKit package for
Unity's native multi-platform AR support.
Included in the package are static libraries, configuration files, binaries
and project files needed to adapt ARKit to the Unity multi-platform AR API.
