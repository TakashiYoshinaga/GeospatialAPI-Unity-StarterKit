using System;
using System.Runtime.InteropServices;

namespace UnityEngine.XR.ARCore
{
    struct ArString : IDisposable
    {
        IntPtr m_Self;

        public override string ToString() => m_Self == IntPtr.Zero
            ? string.Empty
            : Marshal.PtrToStringAnsi(m_Self);

        public void Dispose()
        {
            if (m_Self != IntPtr.Zero)
            {
                Release(m_Self);
            }

            m_Self = IntPtr.Zero;
        }

#if UNITY_ANDROID && !UNITY_EDITOR
        [DllImport("arcore_sdk_c", EntryPoint = "ArString_release")]
        static extern void Release(IntPtr self);
#else
        static void Release(IntPtr self) { }
#endif
    }
}
