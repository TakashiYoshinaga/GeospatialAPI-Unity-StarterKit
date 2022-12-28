using System;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.XR.ARKit
{
    struct NSString : INSObject, IDisposable, IEquatable<NSString>
    {
        IntPtr m_Self;
        NSString(IntPtr ptr) => m_Self = ptr;
        public bool isNull => m_Self == IntPtr.Zero;
        public IntPtr AsIntPtr() => m_Self;
        public void Dispose() => NSObject.Dispose(ref m_Self);

        public string GetStringAndDispose()
        {
            using (this)
            {
                return ToString();
            }
        }

        public override string ToString()
        {
            var numberOfBytes = LengthOfBytes(this);
            var numberOfCodeUnits = length;
            unsafe
            {
                using (var buffer = new NativeArray<byte>((int)numberOfBytes, Allocator.Temp, NativeArrayOptions.UninitializedMemory))
                {
                    var bufferPtr = buffer.GetUnsafePtr();
                    GetUtf16Bytes(this, bufferPtr, numberOfBytes);
                    return Marshal.PtrToStringUni(new IntPtr(bufferPtr), numberOfCodeUnits);
                }
            }
        }

        public ulong ulongLength => GetLength(this);
        public int length => (int)ulongLength;

        public bool Equals(NSString other) => NSObject.IsEqual(this, other);
        public override bool Equals(object obj) => obj is NSString other && Equals(other);
        public override int GetHashCode() => NSObject.GetHashCode(this);
        public static bool operator ==(NSString lhs, NSString rhs) => lhs.m_Self == rhs.m_Self;
        public static bool operator !=(NSString lhs, NSString rhs) => lhs.m_Self != rhs.m_Self;

#if UNITY_EDITOR || !UNITY_XR_ARKIT_LOADER_ENABLED
        static ulong LengthOfBytes(NSString self) => default;
        static unsafe void GetUtf16Bytes(NSString self, void* buffer, ulong maxLength) { }
        static ulong GetLength(NSString self) => default;
#else
        [DllImport("__Internal", EntryPoint = "NSString_lengthOfBytesUsingUTF16Encoding")]
        static extern ulong LengthOfBytes(NSString self);

        [DllImport("__Internal", EntryPoint = "NSString_getBytes_maxLength_")]
        static extern unsafe void GetUtf16Bytes(NSString self, void* buffer, ulong maxLength);

        [DllImport("__Internal", EntryPoint = "NSString_get_length")]
        static extern ulong GetLength(NSString self);
#endif
    }
}
