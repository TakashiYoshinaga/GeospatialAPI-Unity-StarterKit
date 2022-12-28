using System;
using UnityEngine;
using UnityEngine.XR.Management;

using UnityEditor.PackageManager;
using UnityEditor.PackageManager.Requests;

using System.Linq;

namespace UnityEditor.XR.ARKit
{
    /// <summary>
    /// Holds settings that are used to configure the ARKit XR Plugin.
    /// </summary>
    [Serializable]
    [XRConfigurationData("ARKit", "UnityEditor.XR.ARKit.ARKitSettings")]
    public class ARKitSettings : ScriptableObject
    {
        /// <summary>
        /// Enum which defines whether ARKit is optional or required.
        /// </summary>
        public enum Requirement
        {
            /// <summary>
            /// ARKit is required, which means the app cannot be installed on devices that do not support ARKit.
            /// </summary>
            Required,

            /// <summary>
            /// ARKit is optional, which means the the app can be installed on devices that do not support ARKit.
            /// </summary>
            Optional
        }

        [SerializeField, Tooltip("Toggles whether ARKit is required for this app. Will make app only downloadable by devices with ARKit support if set to 'Required'.")]
        Requirement m_Requirement;

        /// <summary>
        /// Determines whether ARKit is required for this app: will make app only downloadable by devices with ARKit support if set to <see cref="Requirement.Required"/>.
        /// </summary>
        public Requirement requirement
        {
            get => m_Requirement;
            set => m_Requirement = value;
        }

        /// <summary>
        /// Installs ARKit Face Tracking package when set to true and ARKit Face Tracking is not already installed. False indicates that ARKit Face Tracking is not currently installed.
        /// </summary>
        public bool faceTracking
        {
            get => m_FaceTracking;
            set => m_FaceTracking = value;
        }

        [SerializeField, Tooltip("Installs ARKit Face Tracking package when toggled on and ARKit Face Tracking is not installed. Does not uninstall the package when unchecked")]
        bool m_FaceTracking;

        /// <summary>
        /// Gets the currently selected settings, or create a default one if no <see cref="ARKitSettings"/> has been set in Player Settings.
        /// </summary>
        /// <returns>The ARKit settings to use for the current Player build.</returns>
        public static ARKitSettings GetOrCreateSettings()
        {
            var settings = currentSettings;
            if (settings != null)
                return settings;

            return CreateInstance<ARKitSettings>();
        }

        /// <summary>
        /// Get or set the <see cref="ARKitSettings"/> that will be used for the player build.
        /// </summary>
        public static ARKitSettings currentSettings
        {
            get => EditorBuildSettings.TryGetConfigObject(k_SettingsKey, out ARKitSettings settings) ? settings : null;

            set
            {
                if (value == null)
                {
                    EditorBuildSettings.RemoveConfigObject(k_SettingsKey);
                }
                else
                {
                    EditorBuildSettings.AddConfigObject(k_SettingsKey, value, true);
                }
            }
        }

        internal static bool TrySelect()
        {
            var settings = currentSettings;
            if (settings == null)
                return false;

            Selection.activeObject = settings;
            return true;
        }

       static void HandleInstallFaceTracking()
        {
            EditorApplication.update -= HandleInstallFaceTracking;
            if(currentSettings != null && s_PreviousFaceTrackingToggleState != currentSettings.m_FaceTracking)
            {
                if(currentSettings.m_FaceTracking == true)
                {
                    s_PreviousFaceTrackingToggleState = true;
                    EditorApplication.update += CheckInstalledFaceTrackingInstalled;
                }
                else
                {
                    s_PreviousFaceTrackingToggleState = false;
                    EditorApplication.update += HandleInstallFaceTracking;
                }
            }
            else
            {
                EditorApplication.update += HandleInstallFaceTracking;
            }
        }

        internal static SerializedObject GetSerializedSettings() => new SerializedObject(GetOrCreateSettings());

        void Awake()
        {
            if (EditorBuildSettings.TryGetConfigObject(k_OldConfigObjectName, out ARKitSettings result))
            {
                EditorBuildSettings.RemoveConfigObject(k_OldConfigObjectName);
            }
            s_ListRequest = Client.List();
            EditorApplication.update += HandleInstallFaceTracking;
        }

        static void CheckInstalledFaceTrackingInstalled()
        {
            EditorApplication.update -= CheckInstalledFaceTrackingInstalled;
            if(s_ListRequest.IsCompleted)
            {
                if (s_ListRequest.Status == StatusCode.Success)
                {
                    if (s_ListRequest.Result.All(package => package.name != k_FaceTrackingPackageName))
                    {
                        var thisPackage = PackageManager.PackageInfo.FindForAssetPath("Packages/com.unity.xr.arkit/");
                        Client.Add($"{k_FaceTrackingPackageName}@{thisPackage.version}");
                    }
                    EditorApplication.update += HandleInstallFaceTracking;
                }
                else if (s_ListRequest.Status >= StatusCode.Failure)
                {
                   Debug.LogError($"Error installing ARKit face tracking package: {s_ListRequest.Error.message}");
                }
            }
            else
            {
               EditorApplication.update += CheckInstalledFaceTrackingInstalled;
            }
        }

        void OnEnable()
        {
            AssemblyReloadEvents.afterAssemblyReload += OnAfterAssemblyReload;
        }

        void OnDisable()
        {
            AssemblyReloadEvents.afterAssemblyReload -= OnAfterAssemblyReload;
        }

        void OnAfterAssemblyReload()
        {
            s_ListRequest = Client.List();
            EditorApplication.update += HandleInstallFaceTracking;
        }

        static ListRequest s_ListRequest;
        static bool s_PreviousFaceTrackingToggleState;
        const string k_FaceTrackingPackageName = "com.unity.xr.arkit-face-tracking";
        const string k_SettingsKey = "UnityEditor.XR.ARKit.ARKitSettings";
        const string k_OldConfigObjectName = "com.unity.xr.arkit.PlayerSettings";

    }
}
