//-----------------------------------------------------------------------
// <copyright file="FrameApi.cs" company="Google LLC">
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
    using System.Collections.Generic;
    using System.Runtime.InteropServices;
    using UnityEngine;

#if UNITY_IOS
    using IOSImport = System.Runtime.InteropServices.DllImportAttribute;
#elif UNITY_ANDROID
    using AndroidImport = System.Runtime.InteropServices.DllImportAttribute;
#endif

    internal class FrameApi
    {
        public static void ReleaseFrame(IntPtr frameHandle)
        {
#if UNITY_IOS && ARCORE_EXTENSIONS_IOS_SUPPORT
            ExternApi.ArFrame_release(frameHandle);
#endif
        }

        public static Vector2 TransformCoordinates2d(
            IntPtr sessionHandle,
            IntPtr frameHandle,
            ApiCoordinates2dType inputType,
            ApiCoordinates2dType outputType,
            ref Vector2 uvIn)
        {
            Vector2 uvOut = new Vector2(uvIn.x, uvIn.y);
#if UNITY_ANDROID
            ExternApi.ArFrame_transformCoordinates2d(
                sessionHandle, frameHandle, inputType, 1, ref uvIn, outputType, ref uvOut);
#endif
            return uvOut;
        }

        public static RecordingResult RecordTrackData(
            IntPtr sessionHandle, IntPtr frameHandle, Guid trackId, byte[] data)
        {
            ApiArStatus status = ApiArStatus.ErrorFatal;
#if UNITY_ANDROID
            GCHandle trackIdHandle = GCHandle.Alloc(trackId.ToByteArray(), GCHandleType.Pinned);
            GCHandle dataHandle = GCHandle.Alloc(data, GCHandleType.Pinned);

            status = ExternApi.ArFrame_recordTrackData(
                sessionHandle,
                frameHandle,
                trackIdHandle.AddrOfPinnedObject(),
                dataHandle.AddrOfPinnedObject(),
                data.Length);

            if (trackIdHandle.IsAllocated)
            {
                trackIdHandle.Free();
            }

            if (dataHandle.IsAllocated)
            {
                dataHandle.Free();
            }
#endif

            return status.ToRecordingResult();
        }

        public static List<TrackData> GetUpdatedTrackData(
            IntPtr sessionHandle, IntPtr frameHandle, Guid trackId)
        {
            List<TrackData> trackDataList = new List<TrackData>();
#if UNITY_ANDROID
            IntPtr listHandle = TrackDataListApi.Create(sessionHandle);

            GCHandle trackIdHandle = GCHandle.Alloc(
                trackId.ToByteArray(), GCHandleType.Pinned);

            ExternApi.ArFrame_getUpdatedTrackData(
                sessionHandle, frameHandle, trackIdHandle.AddrOfPinnedObject(), listHandle);

            if (trackIdHandle.IsAllocated)
            {
                trackIdHandle.Free();
            }

            int count = TrackDataListApi.GetCount(sessionHandle, listHandle);
            for (int i = 0; i < count; i++)
            {
                IntPtr trackDataHandle =
                    TrackDataListApi.AcquireItem(sessionHandle, listHandle, i);

                TrackData trackData;
                trackData.FrameTimestamp =
                    TrackDataApi.GetFrameTimestamp(sessionHandle, trackDataHandle);
                trackData.Data = TrackDataApi.GetData(sessionHandle, trackDataHandle);

                trackDataList.Add(trackData);
            }

            TrackDataListApi.Destroy(listHandle);
#endif // UNITY_ANDROID
            return trackDataList;
        }

        private struct ExternApi
        {
#if UNITY_ANDROID
            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArFrame_transformCoordinates2d(IntPtr session, IntPtr frame,
                ApiCoordinates2dType inputType, int numVertices, ref Vector2 uvsIn,
                ApiCoordinates2dType outputType, ref Vector2 uvsOut);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern ApiArStatus ArFrame_recordTrackData(
                IntPtr sessionHandle, IntPtr frameHandle, IntPtr trackIdBytes, IntPtr payloadBytes,
                int payloadSize);

            [AndroidImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArFrame_getUpdatedTrackData(
                IntPtr sessionHandle, IntPtr frameHandle, IntPtr trackId, IntPtr trackDataList);
#elif UNITY_IOS

#if ARCORE_EXTENSIONS_IOS_SUPPORT
            [IOSImport(ApiConstants.ARCoreNativeApi)]
            public static extern void ArFrame_release(IntPtr frameHandle);
#endif // ARCORE_EXTENSIONS_IOS_SUPPORT
#endif // UNITY_IOS
        }
    }
}
