using System;
using System.Runtime.InteropServices;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARKit
{
    static class Api
    {
#if UNITY_XR_ARKIT_LOADER_ENABLED
        [DllImport("__Internal")]
        public static extern IntPtr UnityARKit_TrackableProvider_start(IntPtr self);

        [DllImport("__Internal")]
        public static extern IntPtr UnityARKit_TrackableProvider_stop(IntPtr self);

        [DllImport("__Internal")]
        public static extern NativeChanges UnityARKit_TrackableProvider_acquireChanges(IntPtr self);

        [DllImport("__Internal")]
        public static extern unsafe void UnityARKit_TrackableProvider_copyChanges(
            IntPtr self, NativeChanges changes, int stride,
            void* added, void* updated, void* removed);
#else
        static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

        public static IntPtr UnityARKit_TrackableProvider_start(IntPtr self)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        public static IntPtr UnityARKit_TrackableProvider_stop(IntPtr self)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        public static NativeChanges UnityARKit_TrackableProvider_acquireChanges(IntPtr self)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        public static unsafe void UnityARKit_TrackableProvider_copyChanges(
            IntPtr self, NativeChanges changes, int stride,
            void* added, void* updated, void* removed)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }
#endif

#if UNITY_IOS && !UNITY_EDITOR && UNITY_XR_ARKIT_LOADER_ENABLED
        [DllImport("__Internal", EntryPoint="UnityARKit_Version_AtLeast11_0")]
        public static extern bool AtLeast11_0();

        [DllImport("__Internal", EntryPoint="UnityARKit_Version_AtLeast11_3")]
        public static extern bool AtLeast11_3();

        [DllImport("__Internal", EntryPoint="UnityARKit_Version_AtLeast12_0")]
        public static extern bool AtLeast12_0();

        [DllImport("__Internal", EntryPoint="UnityARKit_Version_AtLeast13_0")]
        public static extern bool AtLeast13_0();

        [DllImport("__Internal", EntryPoint="UnityARKit_EnsureRootViewIsSetup")]
        public static extern void EnsureRootViewIsSetup();

        [DllImport("__Internal", EntryPoint="UnityARKit_Session_SetFeatureRequested")]
        public static extern void SetFeatureRequested(Feature feature, bool enabled);

        [DllImport("__Internal", EntryPoint="UnityARKit_Session_GetRequestedFeatures")]
        public static extern Feature GetRequestedFeatures();

        [DllImport("__Internal")]
        internal static extern ARWorldMapRequestStatus UnityARKit_getWorldMapRequestStatus(int worldMapId);

        [DllImport("__Internal")]
        internal static extern void UnityARKit_disposeWorldMap(int worldMapId);

        [DllImport("__Internal")]
        internal static extern void UnityARKit_disposeWorldMapRequest(int worldMapId);

        [DllImport("__Internal")]
        internal static extern int UnityARKit_getWorldMapIdFromRequestId(int requestId);

        [DllImport("__Internal")]
        internal static extern bool UnityARKit_isWorldMapValid(int nativeHandle);

        [DllImport("__Internal")]
        internal static extern bool UnityARKit_trySerializeWorldMap(
            int nativeHandle, out IntPtr nsdata, out int length);

        [DllImport("__Internal")]
        internal static extern int UnityARKit_copyAndReleaseNsData(
            IntPtr destination, IntPtr sourceNsData, int length);

        [DllImport("__Internal")]
        internal static extern int UnityARKit_deserializeWorldMap(
            IntPtr buffer, int bufferLength);

        public static void CFRelease(ref IntPtr ptr)
        {
            UnityARKit_CFRelease(ptr);
            ptr = IntPtr.Zero;
        }

        [DllImport("__Internal")]
        static extern void UnityARKit_CFRelease(IntPtr ptr);

        public static void CFRetain(IntPtr ptr)
        {
            if (ptr == IntPtr.Zero)
                throw new NullReferenceException("Cannot retain a null pointer.");
            UnityARKit_CFRetain(ptr);
        }

        [DllImport("__Internal")]
        public static extern void UnityARKit_CFRetain(IntPtr ptr);
#else
        public static void SetFeatureRequested(Feature feature, bool enabled) {}

        public static Feature GetRequestedFeatures() => Feature.None;

        public static void EnsureRootViewIsSetup() {}

        public static void CFRelease(ref IntPtr ptr) => ptr = IntPtr.Zero;

        public static void UnityARKit_CFRetain(IntPtr ptr) {}

        internal static ARWorldMapRequestStatus UnityARKit_getWorldMapRequestStatus(int worldMapId)
        {
            return default(ARWorldMapRequestStatus);
        }

        internal static void UnityARKit_disposeWorldMap(int worldMapId)
        { }

        internal static void UnityARKit_disposeWorldMapRequest(int worldMapId)
        { }

        internal static int UnityARKit_getWorldMapIdFromRequestId(int requestId)
        {
            return default(int);
        }

        internal static int UnityARKit_deserializeWorldMap(IntPtr buffer, int bufferLength)
        {
            return ARWorldMap.k_InvalidHandle;
        }

        internal static bool UnityARKit_isWorldMapValid(int nativeHandle)
        {
            return false;
        }

        internal static bool UnityARKit_trySerializeWorldMap(
            int nativeHandle, out IntPtr nsdata, out int length)
        {
            nsdata = default(IntPtr);
            length = default(int);
            return false;
        }

        internal static int UnityARKit_copyAndReleaseNsData(
            IntPtr destination, IntPtr sourceNsData, int length)
        {
            return 0;
        }

        public static bool AtLeast11_0() => false;
        public static bool AtLeast11_3() => false;
        public static bool AtLeast12_0() => false;
        public static bool AtLeast13_0() => false;
#endif
    }
}
