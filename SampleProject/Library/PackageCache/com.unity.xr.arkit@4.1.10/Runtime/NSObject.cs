using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// An interface for Objective-C objects that derive from NSObject
    /// </summary>
    interface INSObject
    {
        /// <summary>
        /// Gets the underlying Objective-C pointer.
        /// </summary>
        /// <returns>Returns the underlying Objective-C pointer.</returns>
        IntPtr AsIntPtr();

        /// <summary>
        /// (Read Only) Whether the underlying native pointer is `null`.
        /// </summary>
        bool isNull { get; }
    }

    /// <summary>
    /// Utility methods for interacting with [NSObjects](https://developer.apple.com/documentation/objectivec/nsobject?language=objc).
    /// </summary>
    static class NSObject
    {
        public static string ToString<T>(T instance) where T : struct, INSObject
        {
            using (var description = GetDescription(instance.AsIntPtr()))
            {
                return description.ToString();
            }
        }

        public static bool IsEqual<T, U>(T lhs, U rhs)
            where T : struct, INSObject
            where U : struct, INSObject
            => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());

        public static int GetHashCode<T>(T instance) where T : struct, INSObject =>
            GetHash(instance.AsIntPtr()).GetHashCode();

        public static void Dispose(ref IntPtr ptr)
        {
            if (ptr != IntPtr.Zero)
            {
                Release(ptr);
            }
            ptr = IntPtr.Zero;
        }

#if UNITY_EDITOR || !UNITY_XR_ARKIT_LOADER_ENABLED
        static void Release(IntPtr obj) { }
        static NSString GetDescription(IntPtr self) => default;
        static bool IsEqual(IntPtr self, IntPtr other) => default;
        static ulong GetHash(IntPtr self) => default;
#else
        [DllImport("__Internal", EntryPoint = "CFRelease")]
        static extern void Release(IntPtr obj);

        [DllImport("__Internal", EntryPoint = "NSObject_get_description")]
        static extern NSString GetDescription(IntPtr self);

        [DllImport("__Internal", EntryPoint = "NSObject_isEqual_")]
        static extern bool IsEqual(IntPtr self, IntPtr other);

        [DllImport("__Internal", EntryPoint = "NSObject_get_hash")]
        static extern ulong GetHash(IntPtr self);
#endif
    }
}
