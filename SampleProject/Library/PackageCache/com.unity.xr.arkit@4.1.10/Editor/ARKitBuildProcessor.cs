#if UNITY_IOS
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.Callbacks;
using UnityEditor.iOS;
using UnityEditor.iOS.Xcode;
using UnityEditor.Rendering;
using UnityEditor.XR.ARSubsystems;
using UnityEditor.XR.Management;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARKit;
using UnityEngine.XR.Management;
using Unity.EditorCoroutines.Editor;

using OSVersion = UnityEngine.XR.ARKit.OSVersion;

namespace UnityEditor.XR.ARKit
{
    class ARKitBuildProcessor
    {
        public static IEnumerable<T> AssetsOfType<T>() where T : UnityEngine.Object
        {
            foreach(var guid in AssetDatabase.FindAssets("t:" + typeof(T).Name))
            {
                var path = AssetDatabase.GUIDToAssetPath(guid);
                yield return AssetDatabase.LoadAssetAtPath<T>(path);
            }
        }

        class PostProcessor : IPostprocessBuildWithReport
        {
            // NB: Needs to be > 0 to make sure we remove the shader since the
            //     Input System overwrites the preloaded assets array
            public int callbackOrder => 1;

            void PostprocessBuild(BuildReport report)
            {
                if (report.summary.platform != BuildTarget.iOS)
                {
                    return;
                }

                BuildHelper.RemoveShaderFromProject(ARKitCameraSubsystem.backgroundShaderName);
                HandleARKitRequiredFlag(report.summary.outputPath);
            }

            public void OnPostprocessBuild(BuildReport report)
            {
#if UNITY_XR_ARKIT_LOADER_ENABLED
                PostprocessBuild(report);
#endif
            }

            static void HandleARKitRequiredFlag(string pathToBuiltProject)
            {
                var arkitSettings = ARKitSettings.GetOrCreateSettings();
                string plistPath = Path.Combine(pathToBuiltProject, "Info.plist");
                PlistDocument plist = new PlistDocument();
                plist.ReadFromString(File.ReadAllText(plistPath));
                PlistElementDict rootDict = plist.root;

                // Get or create array to manage device capabilities
                const string capsKey = "UIRequiredDeviceCapabilities";
                PlistElementArray capsArray;
                PlistElement pel;
                if (rootDict.values.TryGetValue(capsKey, out pel))
                {
                    capsArray = pel.AsArray();
                }
                else
                {
                    capsArray = rootDict.CreateArray(capsKey);
                }
                // Remove any existing "arkit" plist entries
                const string arkitStr = "arkit";
                capsArray.values.RemoveAll(x => arkitStr.Equals(x.AsString()));
                if (arkitSettings.requirement == ARKitSettings.Requirement.Required)
                {
                    // Add "arkit" plist entry
                    capsArray.AddString(arkitStr);
                }

                File.WriteAllText(plistPath, plist.WriteToString());
            }
        }

        class Preprocessor : IPreprocessBuildWithReport, IPreprocessShaders
        {
            // Magic value according to
            // https://docs.unity3d.com/ScriptReference/PlayerSettings.GetArchitecture.html
            // "0 - None, 1 - ARM64, 2 - Universal."
            const int k_TargetArchitectureArm64 = 1;
            const int k_TargetArchitectureUniversal = 2;

            // The minimum target Xcode version for the plugin
            const int k_TargetMinimumMajorXcodeVersion = 11;
            const int k_TargetMinimumMinorXcodeVersion = 0;
            const int k_TargetMinimumPatchXcodeVersion = 0;

            void ProcessShader(Shader shader, ShaderSnippetData snippet, IList<ShaderCompilerData> data)
            {
                // Remove shader variants for the camera background shader that will fail compilation because of package dependencies.
                string backgroundShaderName = ARKitCameraSubsystem.backgroundShaderName;
                if (backgroundShaderName.Equals(shader.name))
                {
                    foreach (var backgroundShaderKeywordToNotCompile in ARKitCameraSubsystem.backgroundShaderKeywordsToNotCompile)
                    {
                        ShaderKeyword shaderKeywordToNotCompile = new ShaderKeyword(shader, backgroundShaderKeywordToNotCompile);

                        for (int i = (data.Count - 1); i >= 0; --i)
                        {
                            if (data[i].shaderKeywordSet.IsEnabled(shaderKeywordToNotCompile))
                            {
                                data.RemoveAt(i);
                            }
                        }
                    }
                }
            }

            public void OnProcessShader(Shader shader, ShaderSnippetData snippet, IList<ShaderCompilerData> data)
            {
#if UNITY_XR_ARKIT_LOADER_ENABLED
                ProcessShader(shader, snippet, data);
#endif
            }

            void PreprocessBuild(BuildReport report)
            {
                if (s_LoaderEnabled && report.summary.platform != BuildTarget.iOS)
                    return;

                if (string.IsNullOrEmpty(PlayerSettings.iOS.cameraUsageDescription))
                    throw new BuildFailedException("ARKit requires a Camera Usage Description (Player Settings > iOS > Other Settings > Camera Usage Description)");

                EnsureMinimumXcodeVersion();

                EnsureMetalIsFirstApi();

                if(ARKitSettings.GetOrCreateSettings().requirement == ARKitSettings.Requirement.Required)
                {
                    EnsureMinimumBuildTarget();
                    EnsureTargetArchitecturesAreSupported(report.summary.platformGroup);
                }
                else if (PlayerSettings.GetArchitecture(report.summary.platformGroup) == k_TargetArchitectureUniversal)
                {
                    EnsureOpenGLIsUsed();
                }

                BuildHelper.AddBackgroundShaderToProject(ARKitCameraSubsystem.backgroundShaderName);
            }

            public void OnPreprocessBuild(BuildReport report)
            {
                SetRuntimePluginCopyDelegate();

#if UNITY_XR_ARKIT_LOADER_ENABLED
                PreprocessBuild(report);
#endif
            }

            void EnsureMinimumBuildTarget()
            {
                var userSetTargetVersion = OSVersion.Parse(PlayerSettings.iOS.targetOSVersionString);
                if (userSetTargetVersion < new OSVersion(11))
                {
                    throw new BuildFailedException($"You have selected a minimum target iOS version of {userSetTargetVersion} and have the ARKit package installed."
                        + "ARKit requires at least iOS version 11.0 (See Player Settings > Other Settings > Target minimum iOS Version).");
                }
            }

            void EnsureMinimumXcodeVersion()
            {
#if UNITY_EDITOR_OSX
                var xcodeIndex = Math.Max(0, XcodeApplications.GetPreferedXcodeIndex());
                var xcodeVersion = OSVersion.Parse(XcodeApplications.GetXcodeApplicationPublicName(xcodeIndex));
                if (xcodeVersion == new OSVersion(0))
                    throw new BuildFailedException($"Could not determine which version of Xcode was selected in the Build Settings. Xcode app was computed as \"{XcodeApplications.GetXcodeApplicationPublicName(xcodeIndex)}\".");

                if (xcodeVersion < new OSVersion(
                    k_TargetMinimumMajorXcodeVersion,
                    k_TargetMinimumMinorXcodeVersion,
                    k_TargetMinimumPatchXcodeVersion))
                    throw new BuildFailedException($"The selected Xcode version: {xcodeVersion} is below the minimum Xcode required Xcode version for the Unity ARKit Plugin.  Please target at least Xcode version {k_TargetMinimumMajorXcodeVersion}.{k_TargetMinimumMinorXcodeVersion}.{k_TargetMinimumPatchXcodeVersion}.");
#endif
            }

            void EnsureTargetArchitecturesAreSupported(BuildTargetGroup buildTargetGroup)
            {

                if (PlayerSettings.GetArchitecture(buildTargetGroup) != k_TargetArchitectureArm64)
                    throw new BuildFailedException("ARKit XR Plugin only supports the ARM64 architecture. See Player Settings > Other Settings > Architecture.");

            }

            void EnsureMetalIsFirstApi()
            {
                var graphicsApis = PlayerSettings.GetGraphicsAPIs(BuildTarget.iOS);
                if (graphicsApis.Length > 0)
                {
                    var graphicsApi = graphicsApis[0];
                    if (graphicsApi != GraphicsDeviceType.Metal)
                        throw new BuildFailedException($"You currently have {graphicsApi} at the top of the list of Graphics APis. However, Metal needs to be first in the list. (See Player Settings > Other Settings > Graphics APIs)");
                }

            }

            void EnsureOpenGLIsUsed()
            {
                var graphicsApis = PlayerSettings.GetGraphicsAPIs(BuildTarget.iOS);
                if (graphicsApis.Length > 0)
                {
                    if(!graphicsApis.Contains(GraphicsDeviceType.OpenGLES2))
                        throw new BuildFailedException("To build for 'Universal' architecture, OpenGLES2 is needed. (See Player Settings > Other Settings > Graphics APIs)");
                }

            }

            readonly string[] runtimePluginNames = new string[]
            {
                "libUnityARKit.a",
                "UnityARKit.m",
                "libUnityARKitFaceTracking.a",
            };

            bool ShouldIncludeRuntimePluginsInBuild(string path)
            {
                if (!s_LoaderEnabled)
                    return false;

                if (path.Contains("libUnityARKitFaceTracking.a"))
                    return s_FaceTrackingEnabled;

                return true;
            }

            void SetRuntimePluginCopyDelegate()
            {
                var allPlugins = PluginImporter.GetAllImporters();
                foreach (var plugin in allPlugins)
                {
                    if (plugin.isNativePlugin)
                    {
                        foreach (var pluginName in runtimePluginNames)
                        {
                            if (plugin.assetPath.Contains(pluginName))
                            {
                                plugin.SetIncludeInBuildDelegate(ShouldIncludeRuntimePluginsInBuild);
                                break;
                            }
                        }
                    }
                }
            }

            public int callbackOrder { get { return 0; } }
        }

        public static bool s_LoaderEnabled;
        public static bool s_FaceTrackingEnabled;
    }

    static class AddDefineSymbols
    {
        public static void Add(string define)
        {
            var definesString = PlayerSettings.GetScriptingDefineSymbolsForGroup(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
            var allDefines = new HashSet<string>(definesString.Split(';'));

            if (allDefines.Contains(define))
            {
                return;
            }

            allDefines.Add(define);
            PlayerSettings.SetScriptingDefineSymbolsForGroup(
                BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget),
                string.Join(";", allDefines));
        }

        public static void Remove(string define)
        {
            string definesString = PlayerSettings.GetScriptingDefineSymbolsForGroup(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
            var allDefines = new HashSet<string>(definesString.Split(';'));
            allDefines.Remove(define);
            PlayerSettings.SetScriptingDefineSymbolsForGroup(
                BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget),
                string.Join(";", allDefines));
        }
    }

    [InitializeOnLoad]
    class LoaderEnabledCheck
    {
        static LoaderEnabledCheck()
        {
            s_ARKitSettings = ARKitSettings.GetOrCreateSettings();
            ARKitBuildProcessor.s_LoaderEnabled = false;

            UpdateARKitDefines();
            EditorCoroutineUtility.StartCoroutineOwnerless(UpdateARKitDefinesCoroutine());
        }

        static ARKitSettings s_ARKitSettings;

        static IEnumerator UpdateARKitDefinesCoroutine()
        {
            var waitObj = new EditorWaitForSeconds(.25f);

            while (true)
            {
                UpdateARKitDefines();
                yield return waitObj;
            }
        }

        static void UpdateARKitDefines()
        {
            bool previousLoaderEnabled = ARKitBuildProcessor.s_LoaderEnabled;

            var generalSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
            if (generalSettings != null)
            {
                ARKitBuildProcessor.s_LoaderEnabled = false;
                foreach (var loader in generalSettings.Manager.activeLoaders)
                {
                    if (loader is ARKitLoader)
                    {
                        ARKitBuildProcessor.s_LoaderEnabled = true;
                        break;
                    }
                }

                if (ARKitBuildProcessor.s_LoaderEnabled && !previousLoaderEnabled)
                {
                    AddDefineSymbols.Add("UNITY_XR_ARKIT_LOADER_ENABLED");
                }
                else if (!ARKitBuildProcessor.s_LoaderEnabled && previousLoaderEnabled)
                {
                    AddDefineSymbols.Remove("UNITY_XR_ARKIT_LOADER_ENABLED");
                }

                if (s_ARKitSettings.faceTracking && !ARKitBuildProcessor.s_FaceTrackingEnabled)
                {
                    AddDefineSymbols.Add("UNITY_XR_ARKIT_FACE_TRACKING_ENABLED");
                }
                else if (!s_ARKitSettings.faceTracking && ARKitBuildProcessor.s_FaceTrackingEnabled)
                {
                    AddDefineSymbols.Remove("UNITY_XR_ARKIT_FACE_TRACKING_ENABLED");
                }

                ARKitBuildProcessor.s_FaceTrackingEnabled = s_ARKitSettings.faceTracking;
            }
        }
    }
}
#endif
