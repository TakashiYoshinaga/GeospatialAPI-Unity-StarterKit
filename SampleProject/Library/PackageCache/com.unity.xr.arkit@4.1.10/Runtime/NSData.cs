using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.XR.ARKit
{
    internal struct NSData : IDisposable, IEquatable<NSData>
    {
        IntPtr m_NativePtr;

        public static implicit operator IntPtr(NSData data) => data.m_NativePtr;

        public static unsafe NSData CreateWithBytes(void* bytes, int length)
        {
            return new NSData(UnityARKit_NSData_createWithBytes(bytes, length));
        }

        public static unsafe NSData CreateWithBytesNoCopy(void* bytes, int length, bool freeBytesOnDisposal = false)
        {
            return new NSData(UnityARKit_NSData_createWithBytesNoCopy(bytes, length, freeBytesOnDisposal));
        }

        public NSData(IntPtr nsData) => m_NativePtr = nsData;

        public bool created => m_NativePtr != IntPtr.Zero;

        public unsafe void* bytes => UnityARKit_NSData_getBytes(m_NativePtr);

        public int length => UnityARKit_NSData_getLength(m_NativePtr);

        public unsafe NativeSlice<byte> ToNativeSlice() => NativeSliceUnsafeUtility.ConvertExistingDataToNativeSlice<byte>(bytes, 1, length);

        public void Dispose()
        {
            UnityARKit_CFRelease(m_NativePtr);
            m_NativePtr = IntPtr.Zero;
        }

        // IEquatable boilerplate
        public override int GetHashCode() => m_NativePtr.GetHashCode();
        public override bool Equals(object obj) => (obj is NSData) && Equals((NSData)obj);
        public bool Equals(NSData other) => m_NativePtr == other.m_NativePtr;
        public static bool operator ==(NSData lhs, NSData rhs) => lhs.Equals(rhs);
        public static bool operator !=(NSData lhs, NSData rhs) => !lhs.Equals(rhs);

#if UNITY_XR_ARKIT_LOADER_ENABLED
        [DllImport("__Internal")]
        static extern void UnityARKit_CFRelease(IntPtr ptr);

        [DllImport("__Internal")]
        static extern unsafe void* UnityARKit_NSData_getBytes(IntPtr ptr);

        [DllImport("__Internal")]
        static extern int UnityARKit_NSData_getLength(IntPtr ptr);

        [DllImport("__Internal")]
        static extern unsafe IntPtr UnityARKit_NSData_createWithBytes(
            void* bytes,
            int length);

        [DllImport("__Internal")]
        static extern unsafe IntPtr UnityARKit_NSData_createWithBytesNoCopy(
            void* byets,
            int length,
            bool freeWhenDone);
#else
        static readonly string k_ExceptionMsg = "ARKit Plugin Provider not enabled in project settings.";

        static void UnityARKit_CFRelease(IntPtr ptr)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        static unsafe void* UnityARKit_NSData_getBytes(IntPtr ptr)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        static int UnityARKit_NSData_getLength(IntPtr ptr)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        static unsafe IntPtr UnityARKit_NSData_createWithBytes(
            void* bytes,
            int length)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }

        static unsafe IntPtr UnityARKit_NSData_createWithBytesNoCopy(
            void* byets,
            int length,
            bool freeWhenDone)
        {
            throw new System.NotImplementedException(k_ExceptionMsg);
        }
#endif
    }
}
