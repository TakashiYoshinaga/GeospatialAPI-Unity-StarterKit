//-----------------------------------------------------------------------
// <copyright file="CameraConfigApi.cs" company="Google LLC">
//
// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------

namespace Google.XR.ARCoreExtensions.Internal
{
    using System;
    using System.Diagnostics.CodeAnalysis;
    using System.Runtime.InteropServices;
    using UnityEngine;

#if UNITY_ANDROID
    using AndroidImport = System.Runtime.InteropServices.DllImportAttribute;
#endif

    internal class CameraConfigApi
    {
        public static CameraConfigFacingDirection GetFacingDirection(
            IntPtr sessionHandle, IntPtr cameraConfigHandle)
        {
            CameraConfigFacingDirection facingDirection = CameraConfigFacingDirection.Back;
#if UNITY_ANDROID
            ExternApi.ArCameraConfig_getFacingDirection(sessionHandle, cameraConfigHandle,
                ref facingDirection);
#endif
            return facingDirection;
        }

        public static Vector2Int GetTextureDimensions(
            IntPtr sessionHandle, IntPtr cameraConfigHandle)
        {
            int width = 0;
            int height = 0;
#if UNITY_ANDROID
            ExternApi.ArCameraConfig_getTextureDimensions(
                sessionHandle, cameraConfigHandle, ref width, ref height);
#endif
            return new Vector2Int(width, height);
        }

        public static Vector2Int GetFPSRange(
            IntPtr sessionHandle, IntPtr cameraConfigHandle)
        {
            int minFps = 0;
            int maxFps = 0;
#if UNITY_ANDROID
            ExternApi.ArCameraConfig_getFpsRange(
                sessionHandle, cameraConfigHandle, ref minFps, ref maxFps);
#endif
            return new Vector2Int(minFps, maxFps);
        }

        public static CameraConfigDepthSensorUsage GetDepthSensorUsage(
            IntPtr sessionHandle, IntPtr cameraConfigHandle)
        {
            int depth = (int)CameraConfigDepthSensorUsage.DoNotUse;
#if UNITY_ANDROID
            ExternApi.ArCameraConfig_getDepthSensorUsage(
                sessionHandle, cameraConfigHandle, ref depth);
#endif
            return (CameraConfigDepthSensorUsage)depth;
        }

        public static CameraConfigStereoCameraUsage GetStereoCameraUsage(
            IntPtr sessionHandle, IntPtr cameraConfigHandle)
        {
            int stereo = (int)CameraConfigStereoCameraUsage.DoNotUse;
#if UNITY_ANDROID
            ExternApi.ArCameraConfig_getStereoCameraUsage(sessionHandle, cameraConfigHandle,
                ref stereo);
#endif
            return (CameraConfigStereoCameraUsage)stereo;
        }

        private struct ExternApi
        {
#if UNITY_ANDROID
            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArCameraConfig_getFacingDirection(
                IntPtr sessionHandle,
                IntPtr cameraConfigHandle,
                ref CameraConfigFacingDirection facingDirection);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArCameraConfig_getTextureDimensions(IntPtr sessionHandle,
                IntPtr cameraConfigHandle, ref int width, ref int height);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArCameraConfig_getFpsRange(
                IntPtr sessionHandle, IntPtr cameraConfigHandle, ref int minFps, ref int maxFps);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArCameraConfig_getDepthSensorUsage(
                IntPtr sessionHandle, IntPtr cameraConfigHandle, ref int depthSensorUsage);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArCameraConfig_getStereoCameraUsage(
                IntPtr sessionHandle, IntPtr cameraConfigHandle, ref int stereoCameraUsage);
#endif // UNITY_ANDROID
        }
    }
}
