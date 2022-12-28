# Changelog

All notable changes to this package will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [4.1.10] - 2022-03-01

### Fixes

- Removed an errant bit mask that was being applied to the occlusion `XRCpuImage`s.
- Fixed a bug where the list of configurations per sesssion would not clear even when the [ARCoreSessionSubsystem](xref:UnityEngine.XR.ARCore.ARCoreSessionSubsystem) was deinitialized.

## [4.1.9] - 2022-01-06

### New

- Add a warning which is shown in the console when an Android app is built with only 32-bit architecture.

### Fixes

- Fixed a missing dependency on built-in [UnityWebRequest](https://docs.unity3d.com/2021.2/Documentation/ScriptReference/Networking.UnityWebRequest.html) module.
- Fixed a crash that would occur when loading images into a `MutableRuntimeReferenceImageLibrary` at runtime. The issue tracker can be found [here](https://issuetracker.unity3d.com/issues/arfoundation-arcore-android-il2cpp-runtime-crash-when-initializing-mutableruntimereferenceimagelibrary).
- Fixed an issue where Occlusion shaders would fail compilation on certain devices.

## [4.1.7] - 2021-03-31

### Changes

- Update [known limitations](xref:arcore-manual#known-limitations) to clarify depth image support behavior.

### Fixes

- Fix incorrect reporting of the [plane detection mode](xref:UnityEngine.XR.ARSubsystems.PlaneDetectionMode). Both the [requestedPlaneDetectionMode](xref:UnityEngine.XR.ARSubsystems.XRPlaneSubsystem.requestedPlaneDetectionMode) and [currentPlaneDetectionMode](xref:UnityEngine.XR.ARSubsystems.XRPlaneSubsystem.currentPlaneDetectionMode) would incorrectly report that vertical plane detection was enabled/requested when only horizontal plane detection enabled/requested.
- Fixed possible crash when converting [CPU camera images](xref:UnityEngine.XR.ARSubsystems.XRCpuImage) to RGB color formats.
- Improve handling for spaces in pathnames when building the reference image library which may cause the build to fail.
- Allow reference images to be located outside the `Assets` folder, e.g., in packages.

## [4.1.5] - 2021-01-25

### Changes

- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@4.0) dependency to 4.0.

## [4.1.3] - 2021-01-05

### New

- ARCore requires Gradle version 5.6.4. When building the Android Player, this package now detects the version of Gradle in use and, if an incompatible version is detected, presents a dialog indicating that the Gradle version is insufficient. This dialog can be suppressed, and the option to do so is saved in the [ARCore Settings asset](xref:UnityEditor.XR.ARCore.ARCoreSettings) (Edit > Project Settings > XR Plug-in Management > ARCore).

### Changes

- Updated ARCore to version 1.22.
- This package now requires Unity 2019.4.15f1 or later.

### Fixes

- When building for Android, this package would always update the Android manifest with entries necessary for ARCore to function, even when ARCore was not enabled via [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.2). This has been fixed so that the Android manifest is not changed unless ARCore is enabled.
- When any property of an [ARCoreSettings](xref:UnityEditor.XR.ARCore.ARCoreSettings) is changed, the asset is correctly marked dirty.

## [4.1.1] - 2020-11-11
### Changes
- Released package for Unity 2021.1

## [4.1.0-preview.13] - 2020-11-09
### Changes
- Switch to using all 16-bits from the pixels in the ARCore environment depth image, rather just the lower 13 bits.

### Fixes
- Fix crash when performing a synchronous [XRCpuImage conversion](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.Convert(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams,System.IntPtr,System.Int32)) while an [asynchronous conversion](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.ConvertAsync(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams)) is already running.

## [4.1.0-preview.12] - 2020-11-02
### New
- Support the [NotTrackingReason](xref:UnityEngine.XR.ARSubsystems.NotTrackingReason): [CameraUnavailable](xref:UnityEngine.XR.ARSubsystems.NotTrackingReason.CameraUnavailable). This maps to ARCore's [AR_TRACKING_FAILURE_REASON_CAMERA_UNAVAILABLE](https://developers.google.com/ar/reference/c/group/shared-types#group__shared__types_1gga9e2ef6b4a95c498672e80760a254edbeaeb94796b7b4b0c226744759d570f0934).

## [4.1.0-preview.11] - 2020-10-22
### New
- Added support for the new method [ScheduleAddImageWithValidationJob](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary.ScheduleAddImageWithValidationJob(Unity.Collections.NativeSlice{System.Byte},UnityEngine.Vector2Int,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRReferenceImage,Unity.Jobs.JobHandle)) on the [MutableRuntimeReferenceImageLibrary](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary).

### Changes
- The implementation of [XRCpuImage.ConvertAsync](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.ConvertAsync(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams)) is now multithreaded across all hardware cores to produce the result faster. Previously, only the [synchronous version](xref:UnityEngine.XR.ARSubsystems.XRCpuImage.Convert(UnityEngine.XR.ARSubsystems.XRCpuImage.ConversionParams,System.IntPtr,System.Int32)) was multithreaded. However, on newer devices with high camera resolutions, the single threaded asynchronous conversion would often take multiple frames to complete. Now, both synchronous and asynchronous conversions are multithreaded.

### Fixes

## [4.1.0-preview.10] - 2020-10-12
### New
- Add a new [beforeGetCameraConfiguration event](xref:UnityEngine.XR.ARCore.ARCoreCameraSubsystem.beforeGetCameraConfiguration) to the [ARCoreCameraSubsystem](xref:UnityEngine.XR.ARCore.ARCoreCameraSubsystem) which allows you to manipulate the [ArCameraConfigFilter](https://developers.google.com/ar/reference/c/group/ar-camera-config-filter) before calls to [ArSession_getSupportedCameraConfigsWithFilter](https://developers.google.com/ar/reference/c/group/ar-session#arsession_getsupportedcameraconfigswithfilter).

### Changes
- Move pause to a background thread. Previously, pausing the session was an expensive operation (up to 700ms). Now, pausing the session does not block the main thread.
- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.2) to 3.2.16.

### Fixes
- Fixed a bug which failed to supply an [XRReferenceImage's](xref:UnityEngine.XR.ARSubsystems.XRReferenceImage) physical dimensions to ARCore when the reference image was added at runtime, e.g., with [ScheduleAddImageJob](xref:UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary.ScheduleAddImageJob(Unity.Collections.NativeSlice{System.Byte},UnityEngine.Vector2Int,UnityEngine.TextureFormat,UnityEngine.XR.ARSubsystems.XRReferenceImage,Unity.Jobs.JobHandle)).

## [4.1.0-preview.9] - 2020-09-25
### New
- Added support for [`ARRaycast`](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.1/api/UnityEngine.XR.ARFoundation.ARRaycast.html) trackables. To learn more about the underlying ARCore API see [Google's ARCore Docs](https://developers.google.com/ar/reference/unity/class/GoogleARCore/InstantPlacementPoint).

### Changes
- Eliminated unnecessary copying of background texture when running with single-threaded rendering.
- Update ARCore to version 1.19.
- Updating dependency on com.unity.xr.management to 3.2.15.

### Fixes
- Fix links in documentation.
- Handle non-unit scale in the background shader when calculating depth for environmental occlusion.
- Fix unhandled exception when processing [reference image libraries](xref:arsubsystems-image-tracking-subsystem). This did not prevent the generation of the image libraries, but may have adversely affected error reporting.

## [4.1.0-preview.7] - 2020-08-26

## [4.1.0-preview.6] - 2020-07-27
### New
- Added Depth option to [ARCoreSettings](xref:UnityEditor.XR.ARCore.ARCoreSettings). This indicates whether or not ARCore Depth API support is required for a specific application.  See the [ARCore Depth API Docs](https://developers.google.com/ar/develop/java/depth/overview) for more details.

### Fixes
- Fixed a compilation error when the [Input System package](https://docs.unity3d.com/Packages/com.unity.inputsystem@1.0/manual/index.html) is present.
- Fixed an issue where ARCore shaders could incorrectly remain in the [Preloaded Assets](xref:UnityEditor.PlayerSettings.GetPreloadedAssets) array, which could interfere with builds on other platforms.

## [4.1.0-preview.5] - 2020-07-16
### Fixes
- Minor documentation fixes
- Fixed a regression that caused the [beforeSetConfiguration](xref:UnityEngine.XR.ARCore.ARCoreSessionSubsystem.beforeSetConfiguration) event on the [ARCoreSessionSubsystem](xref:UnityEngine.XR.ARCore.ARCoreSessionSubsystem) to not be rasied.

## [4.1.0-preview.3] - 2020-07-09
### Fixes
- Android builds no longer fail when targeting an Android SDK version below 24, which is relevant when ARCore is "optional".
- Fixed a crash on launch when camera permissions were not already granted to the app.

### Changes
- Update [XR Plug-in Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.2) to 3.2.13.

## [4.1.0-preview.2] - 2020-06-24
### New
- Add support for ARCore environment depth through the [AROcclusionManager](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.1/api/UnityEngine.XR.ARFoundation.AROcclusionManager.html) and [XROcclusionSubsystem](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@4.1/api/UnityEngine.XR.ARSubsystems.XROcclusionSubsystem.html).

### Changes
- Update ARCore to version 1.18.
- The ARCore Settings has been moved from Project Settings > XR to Project Settings > XR Plug-in Management for consistency with other XR platforms. See [ARCoreSettings](https://docs.unity3d.com/Packages/com.unity.xr.arcore@4.0/api/UnityEditor.XR.ARCore.ARCoreSettings.html?q=ARCoreSettings) for more information. ARCore build settings will no longer have to be created manually, installing the package will automatically create ARCore settings.
- Minimum Unity version for this package is now 2019.4.
- Updating the documentation for the new package version, and adding information on the occlusion functionality.

## [4.0.3] - 2020-05-21
### Changes
- Update ARCore to version 1.17
- Updated "camera image" APIs to use the new "CPU image" API. See the [ARFoundation migration guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html#xrcameraimage-is-now-xrcpuimage) for more details.
- When the [ARCore Loader](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/#provider-plugin-setup) in XR Management is diabled the ARCore binaries are not packaged into the build and ARCore build checks are not run.
- AAR files includes in this package are now compatible with Android Gradle Plugin 3.6.3 and older.
- The ARCore Settings has been moved from Project Settings > XR to Project Settings > XR Plug-in Management for consistency with other XR platforms. See [ARCoreSettings](https://docs.unity3d.com/Packages/com.unity.xr.arcore@4.0/api/UnityEditor.XR.ARCore.ARCoreSettings.html?q=ARCoreSettings) for more information. ARCore build settings will no longer have to be created manually, installing the package will automatically create ARCore settings.

### Fixes
- Fixed a bug where horizontal planes would still be reported when the plane detection mode was set to vertical only.
- Fixed a bug which caused a new point cloud to be reported each time the `XRDepthSubsystem` was stopped and restarted without removing the old point cloud, causing multiple point clouds to appear over time. Now, the point cloud's trackable id is unique to the session. Creating a new session, or resetting an existing session, will create a new point cloud and remove the old one (if there was one previously), but starting and stopping the `XRDepthSubsystem` no longer changes the trackable id. There is only ever one point cloud.

## [4.0.0-preview.3] - 2020-05-04
### Fixes
- Fixed all broken or missing scripting API documentation.

### Changes
- Added callback event `beforeSetConfiguration` in `ARCoreSessionSubsystem` that is triggered when the native [ArConfig](https://developers.google.com/ar/reference/c/group/config#arconfig) object is dirty.
- Added `SetConfigurationDirty()` to `ARCoreSessionSubsystem` which notifies that there is a change in the [ArConfig](https://developers.google.com/ar/reference/c/group/config#arconfig) object and triggers the `beforeSetConfiguration` event.
- Updating dependency on com.unity.xr.management to 3.2.10.


## [4.0.0-preview.1] - 2020-02-26
### Changes
- The ARSubsystem implementions have been updated to reflect changes in the ARSubsystems API.
- See the [ARFoundation Migration Guide](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@4.0/manual/migration-guide-3.html) for more details.

## [3.1.3] - 2020-04-13
- Updating the dependency on AR Subsystems to 3.1.3.

## [3.1.0-preview.9] - 2020-03-13
### Fixes
- Setting [XRSessionSubsystem.matchFrameRate](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.1/api/UnityEngine.XR.ARSubsystems.XRSessionSubsystem.html#UnityEngine_XR_ARSubsystems_XRSessionSubsystem_matchFrameRate) after the session subsystem was started had no effect. This has been fixed.

## [3.1.0-preview.8] - 2020-03-12

## [3.1.0-preview.7] - 2020-02-27

## [3.1.0-preview.6] - 2020-02-03
### New
- Added support for gamma colorspace for the surfaced environment probe cubemap textures.

### Fixes
- Fixed a crash when attempting to destroy ARSession component.
- Fixed issue where Environment Probe cubemaps were not generating mipmaps.
- Fixed a crash when querying whether the "match frame rate" option was enabled. This could happen when resuming the ARSession.
- Fixed a potential crash when using image tracking or adding an image to an existing library at runtime.
- Fixed an issue where cubemap texture had incorrect Z-faces.
- Fixed an issue where the reported main light direction was incorrectly reporting the Z component of the vector.

### Improvements
- Refactored native ARCore `XRCameraConfig` native handle representation.  Instead of an index into the list of available `ArCameraConfig`s, the `IntPtr` surfaced is the pointer to the actual `ArCameraConfig`.  See the following [ARCore documentation](https://developers.google.com/ar/reference/c/group/cameraconfig#arcameraconfig) for more information.
- Provider now provides the the maximum fps supported by the configuration as the `framerate` field in `XRCameraConfig` instead of the minimum framerate.

## [3.1.0-preview.4] - 2020-01-10
### New
- Update ARCore to version 1.14.

## [3.1.0-preview.2] - 2019-12-16
### New
- Added support for HDR Light Estimation Mode
- Enforced platform-specific configurations for Light Estimation.  HDR Light Estimation mode is only supported when using the back-facing camera and can't be used while face tracking.  Ambient Light Estimation mode is only supported when not using EnvironmentProbes and will be taken over by the EnvironmentProbeSubsystem.
- Exposed native camera configuration object by surfacing the index into the list of configurations on the native side.

### Fixes
- Fixed black camera background texture when environment probes where enabled while tracking faces.
- Update documentation links to point to the 3.1 versions.
- Updating dependent version of com.unity.xr.management package to eliminate build warning message.

## [3.1.0-preview.1] - 2019-11-21

### New
- No longer checking for presence of player setting for ARCore enabled in Unity 2020.1 or newer. This setting has been removed from Unity and was deprecated in 2019.3.

### Improvements
- Updated the background shader in unison with the changes for the new `AROcclusionManager` component and in preparation for the future when ARCore supports occlusion.

## [3.0.4] - 2020-04-08
- Changed hard dependency on XR Management to 3.0.6.

## [3.0.3] - 2020-04-06
### Fixes
- Adding a minimum version restriction to the com.unity.inputsystem package for the conditional code that depends on that package.
- Fixed list of supported subsystems in the documentation.

### Changes
- Default ARCore loader for XR Management will now only start and stop the implementations of XRInputSubsystem, XRCameraSubsystem, and XRSessionSubsystem when the _Initialize on Startup_ option in XR Management is enabled.

## [3.0.1] - 2019-11-27
### Fixes
- Correcting script compilation error when the com.unity.inputsystem package is also included in the project.

## [3.0.0] - 2019-11-05
### Breaking changes
- Renamed the concept of `Reference Points` to `Anchors`. Public API changes are in `AR Foundation` and `AR Subsystems` packages.

### Fixes
- Fixed issue for Mali GPU's where environment probes would be not have the texture bound properly.

## [3.0.0-preview.4] - 2019-10-22
### New
- Add getter for the camera focus mode.
- Update to ARCore 1.12
- Add support for 60 fps devices.

### Fixes
- Fixed an issue where generating a reference image library could fail with "Access denied" on macOS and Linux. This was because spaces in project paths were not handled when setting execution privileges for `arcoreimg` on macOS and Linux.
- The GPU camera texture dimensions were incorrectly reported as the current screen dimensions. This has been fixed.
- The build could fail if reference images used for image tracking had a non-lowercase extension. This has been fixed.
- Improved error reporting when Google's ARCore SDK for Unity is detected in the project. The build will continue to fail even after removing Google's plugin until the Editor is restarted. A note explaining this has been added to the error message.
- Fixed a potential crash when changing image libraries.

## [3.0.0-preview.3] - 2019-09-26
### New
- Google's AR Presto library is now distributed as a separate AAR so that it can be overriden.
- Added support for both linear and gamma color spaces.
- Added support for environment probes.
- Added tracking input support for the [Input System](https://github.com/Unity-Technologies/InputSystem)

### Fixes
- Fixed image tracking when building with IL2CPP.

## [3.0.0-preview.2] - 2019-09-05
### Improvements
- Update [ARSubsystems](https://docs.unity3d.com/Packages/com.unity.xr.arsubsystems@3.1) dependency to 3.0.0-preview.2

## [3.0.0-preview.1] - 2019-08-21
### New
- Add support for [XR Management](https://docs.unity3d.com/Packages/com.unity.xr.management@3.1/manual/index.html).
- Add support for building image libraries on linux.
- Add support for runtime modifiable reference image libraries. This allows you to add new reference images for image tracking at runtime.

## [2.2.0-preview.2] - 2019-07-19
### Fixes
- Previously, we reported the tracking state of augmented images using an [ARCore API](https://developers.google.com/ar/reference/c/group/trackable#group__trackable_1ga5759851a9b20b4df46d74d4ce4a1376c) that always returned `TrackingState.Tracking`, even when the image had been removed from view. We now use the method [ArAugmentedImage_getTrackingMethod](https://developers.google.com/ar/reference/c/group/augmented-image#group__augmented__image_1ga82c184a0984a95254476696cf57c12a3) instead, which will change the tracking state to `TrackingState.Limited` if the image cannot be seen.

## [2.2.0-preview.2] - 2019-08-09
### New
- Add support for Lightweight Render Pipeline and Universal Render Pipeline.

## [2.2.0-preview.1] - 2019-07-16
### New
- Update ARCore to version 1.10.
- Add support for getting the ambient light intensity in lumens.

## [2.1.0] - 2019-06-25
- 2019.3 verified release

## [2.1.0-preview.7] - 2019-06-18
### New
- Add support for `NotTrackingReason`.

## [2.1.0-preview.6] - 2019-06-03
### Improvements
- Update to ARCore 1.9.
- Add support for matching the ARCore framerate with the Unity one. See `ARSession.matchFrameRate`.

### Fixes
- Conditionally compile subsystem registrations. This means the subsystems wont't register themselves in the Editor (and won't generate warnings if there are other subsystems for other platforms).

## [2.1.0-preview.5] - 2019-05-27
### Fixes
- Enabling managed code stripping or IL2CPP would cause apps to fail to initialize ARCore on the first launch, just after the prompt for camera permissions. This has been fixed.
- Remove debug log from the image tracking subsystem.
- Fix documnentation links
- Reference image library generation would fail if the user's culture settings were not US-standard (e.g., using "," instead of "." for decimal values). This has been fixed.
- Fix `XRSessionSubsystem.Reset`. Previously, this did not properly resume a running session.
- The session subsystem reported that it did not support ARCore APK installation, which meant that consumers of this API (e.g., ARFoundation) would never prompt for installation and report the device as unsupported. This has been fixed.

## [2.1.0-preview.4] - 2019-05-08
### Improvements
- Add support for [image tracking](https://developers.google.com/ar/discover/concepts#augmented_images).
- Add support for [face tracking](https://developers.google.com/ar/develop/unity/augmented-faces/).
- Add support for [multithreaded rendering](https://unity3d.com/learn/tutorials/topics/best-practices/multithreaded-rendering-graphics-jobs#Multithreaded%20Rendering).

## [1.0.0-preview.24] - 2018-12-13
### Improvements
- Support x86, ARMv7, and ARM64 Android architetures (previously was limited to ARMv7).
- Plane detection modes: Add ability to selectively enable detection for horizontal, vertical, or both types of planes.
- Add a build check for the "Graphcis Jobs (Experimental)" player setting, which forces multithreaded rendering and causes ARCore to fail.
- Add a build check for the presence of Google's ARCore SDK for Unity, which cannot be used with this package.
- Add support for setting the camera focus mode.
- Add C header file necessary to interpret native pointers. See `Includes~/UnityXRNativePtrs.h`
- Implement `CameraConfiguration` support, allowing you to enumerate and set the resolution used by the hardware camera.
- Update to ARCore v1.6.0

### Fixes
- Updated background shader to workaround a bug which can cause green and blue color values to appear swapped on some devices when HDR is enabled.

### Changes
- Remove 2018.1 and 2018.2 compatibility.

## [1.0.0-preview.23] - 2018-10-07
### Changes
- Re-add `using` directive needed for 2018.1.

## [1.0.0-preview.22] - 2018-10-06
### Improvements
- Add linker validation when building with the IL2CPP scripting backend to avoid stripping the Unity.XR.ARCore assembly.
- Add native pointer support for native AR objects

## [1.0.0-preview.21] - 2018-10-12
### Fixed
- Fixed a bug which prevented the CameraImage API from working in 2018.3+

## [1.0.0-preview.20] - 2018-10-10
### New
- Added support for `XRCameraExtensions` API to get the raw camera image data on the CPU. See the [ARFoundation manual documentation](https://docs.unity3d.com/Packages/com.unity.xr.arfoundation@1.0/manual/cpu-camera-image.html) for more information.

## [1.0.0-preview.19] - 2018-09-18
### Fixed
- Correctly set camera texture dimensions.
- The background texture was not rendered correctly if a renderable `GameObject` in the scene had negative scale. This has been fixed.
- Fixed issue [AR Camera does not work with video player on ARCore](https://issuetracker.unity3d.com/issues/ar-camera-does-not-work-with-video-player-on-arcore). The pass through video would conflict with the Video Player, producing a flickering effect. This has been fixed.

### Improvements
- Added a pre build step to ensure the Gradle build system is used.
- The build will fail if anything other than the OpenGLES3 graphics API is selected as the primary graphics API.

## [1.0.0-preview.18] - 2018-07-17
### Fixed
- Correctly detect whether the "ARCore Supported" checkbox is checked during player build in 2018.2+
- Updated for compatibility with Unity 2018.3 and later.
- Slinece unused variable warning.
- Plane tracking state would return a cached value if the session was not active. Now, `ARPlane.trackingState` will return `TrackingState.Unavailable` for every plane if the session is not active.

## [1.0.0-preview.17] - 2018-07-03
- Fail the build if x86 or ARM 64 are selected as Target Architectures in the Android Player Settings.

## [1.0.0-preview.16] - 2018-06-20
- Implemented TryGetColorCorrection, which provides light estimation information for RGB color correction.

## [1.0.0-preview.15] - 2018-06-08
- Fixed lack of reporting timestamp to the `ARCameraFrameEventArgs`.
- Do not include Android build pipeline when not on Android
- Add ArAnchor [attachment](https://developers.google.com/ar/develop/developer-guides/anchors) support.

## [1.0.0-preview.14] - 2018-06-07
- Fixed a crash on startup on some devices.
- Throw a build error instead of a warning if using Vulkan (ARCore requires an OpenGL context)
- Camera texture appears as soon as ARCore provides it, rather than waiting for tracking to be established.
- Fix typo in ARCoreSettings (`requirment` => `requirement`)
- Improve usability of ARCoreSettings
    - Remove CreateAssetMenu item -- provide one path to create the asset.
    - xmldoc referred to ARKit instead of ARCore
    - Make currentSettings public so users can override this easily.
- Improve ARCore build error message
    'Error building Player: BuildFailedException: "ARCore Supported" (Player Settings > XR Settings) refers to the built-in ARCore support in Unity and conflicts with the ARCore package.') that doesn't explain that that the "ARCore package" is in fact the "ARCore XR Plugin" package. The package name should match from the package manager window.

## [1.0.0-preview.13] - 2018-06-06
- Fixed a crash following ARCore apk install. There is a (rare) race condition when installing the ARCore apk, where ARCore will try to initialize before the apk is completely ready. This can still happen, but the app no longer crashes. When it does happen, the SDK will report that AR is supported and ready, but AR will not function properly until the app is restarted.

## [1.0.0-preview.12] - 2018-06-01
- Add ARCoreSettings to Player Settings menu. Allows you to select whether ARCore is 'optional' or 'required'.

## [1.0.0-preview.11] - 2018-05-24
- Add Editor as an include platform to ensure ARCore extensions work. This was preventing the availability check from running.
- Fix a bug which prevented the ARSession from restarting once destroyed.

## [1.0.0-preview.10] - 2018-05-23
- Change dependency to `ARExtensions` preview.2


## [1.0.0-preview.9] - 2018-05-09
### Fixed
- Fixed crash when ARCore is not present or otherwise unable to initialize.
- Add support for availability check and apk install

## [1.0.0-preview.8] - 2018-05-07

### Added
- Created a Legacy XRInput interface to automate the switch between 2018.1 and 2018.2 XRInput versions.

### Changed
- Only report display and projection matrices if we actually get them from ARCore.

## [1.0.0-preview.5] - 2018-03-26

### This is the first preview release of the ARCore package for multi-platform AR.

In this release we are shipping a working iteration of the ARCore package for
Unity's native multi-platform AR support.
Included in the package are dynamic libraries, configuration files, binaries
and project files needed to adapt ARCore to the Unity multi-platform AR API.
