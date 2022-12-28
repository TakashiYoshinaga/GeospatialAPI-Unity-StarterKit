---
uid: arkit-occlusion
---
# Occlusion

ARKit provides support for occlusion based on depth images generated each frame by ARKit.

There are three types of depth images ARKit exposes through the provider's implementation of [XROcclusionSubsystem](xref:UnityEngine.XR.ARSubsystems.XROcclusionSubsystem) implementation:
- _Environment Depth_: distance from the device to any part of the environment in the camera field of view
- _Human Depth_: distance from the device to any part of a human recognized within the camera field of view
- _Human Stencil_: value designating, for each pixel, whether that pixel contains a recognized human

## Requirements

_Environment Depth_ requires Xcode 12 or later, and it only works on iOS 14 devices with the LiDAR scanner, such as the new iPad Pro.

_Human Depth_ & _Human Stencil_ requires Xcode 11 or later, and it only works on iOS 13+ devices with the A12 Bionic or higher.

