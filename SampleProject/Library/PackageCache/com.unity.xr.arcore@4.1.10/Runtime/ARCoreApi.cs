using System.Runtime.InteropServices;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Management;

namespace UnityEngine.XR.ARCore
{
    static class Api
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        [DllImport("UnityARCore", EntryPoint="UnityARCore_session_setFeatureRequested")]
        public static extern void SetFeatureRequested(Feature feature, bool requested);

        [DllImport("UnityARCore", EntryPoint="UnityARCore_session_getRequestedFeatures")]
        public static extern Feature GetRequestedFeatures();

        public static bool platformAndroid => true;
#else
        public static void SetFeatureRequested(Feature feature, bool requested) {}
        public static Feature GetRequestedFeatures() => Feature.None;
        public static bool platformAndroid => false;
#endif

        static ARCoreLoader FindLoader()
        {
            var instance = XRGeneralSettings.Instance;
            if (instance == null)
                return null;

            var manager = instance.Manager;
            if (manager == null || manager.activeLoaders == null)
                return null;

            foreach (var loader in manager.activeLoaders)
            {
                if (loader is ARCoreLoader arcoreLoader)
                {
                    return arcoreLoader;
                }
            }

            return null;
        }

        public static bool loaderPresent { get; } = FindLoader() != null;
    }
}
