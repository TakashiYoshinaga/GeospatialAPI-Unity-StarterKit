using System;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using System.Xml;
using UnityEditor.Android;
using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.XR.ARSubsystems;
using UnityEditor.XR.Management;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.XR.ARCore;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.Management;
using Diag = System.Diagnostics;

namespace UnityEditor.XR.ARCore
{
    class ARCorePreprocessBuild : IPreprocessBuildWithReport, IPostprocessBuildWithReport
    {
        // NB: Needs to be > 0 to make sure we remove the shader since the
        //     Input System overwrites the preloaded assets array
        public int callbackOrder => 1;

        static readonly Version k_MinimumGradleVersion = new Version(5, 6, 4);

        internal const string gradleLauncherPrefix = "gradle-launcher-";

        public void OnPreprocessBuild(BuildReport report)
        {
            SetRuntimePluginCopyDelegate();

            if (report.summary.platform != BuildTarget.Android)
            {
                // Sometimes (e.g., build failure), the shader can get "stuck" in the Preloaded Assets array.
                // Make sure that if we are not building for Android, we remove that shader.
                BuildHelper.RemoveShaderFromProject(ARCoreCameraSubsystem.backgroundShaderName);
                return;
            }

            var generalSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
            if (generalSettings == null)
                return;

            foreach (var loader in generalSettings.Manager.activeLoaders)
            {
                if (loader is ARCoreLoader)
                {
                    EnsureARCoreSupportedIsNotChecked();
                    EnsureGoogleARCoreIsNotPresent();
                    EnsureMinSdkVersion();
                    EnsureOnlyOpenGLES3IsUsed();
                    EnsureGradleIsUsed();
                    EnsureGradleVersionIsSupported();
                    BuildImageTrackingAssets();
                    Check64BitArch();
                    BuildHelper.AddBackgroundShaderToProject(ARCoreCameraSubsystem.backgroundShaderName);
                    break;
                }
            }
        }

        public void OnPostprocessBuild(BuildReport report)
        {
            if (report.summary.platform != BuildTarget.Android)
                return;

            BuildHelper.RemoveShaderFromProject(ARCoreCameraSubsystem.backgroundShaderName);
            RemoveGeneratedStreamingAssets();
        }

        static void EnsureGradleIsUsed()
        {
            if (EditorUserBuildSettings.androidBuildSystem != AndroidBuildSystem.Gradle)
                throw new BuildFailedException("ARCore XR Plugin requires the Gradle build system. See File > Build Settings... > Android");
        }

        static void EnsureGradleVersionIsSupported()
        {
            var settings = ARCoreSettings.GetOrCreateSettings();
            if (settings.ignoreGradleVersion)
                return;

            if (Gradle.TryGetVersion(out var gradleVersion, out var diagnosticMessage))
            {
                if (gradleVersion < k_MinimumGradleVersion)
                {
                    var errorMessage = $"ARCore requires at least Gradle version {k_MinimumGradleVersion} ({gradleVersion} detected). Visit https://developers.google.com/ar/develop/unity/android-11-build for further details.";
                    var selection = EditorUtility.DisplayDialogComplex(
                        "Gradle update required",
                        errorMessage,
                        "Cancel build", "Continue anyway", "Continue and don't warn me again");

                    switch (selection)
                    {
                        // Cancel the build
                        case 0: throw new BuildFailedException(errorMessage);

                        // Continue as normal
                        case 1: break;

                        // Continue, and never ask again
                        case 2:
                            settings.ignoreGradleVersion = true;
                            break;
                    }
                }
            }
            else
            {
                Debug.LogWarning($"ARCore requires Gradle {k_MinimumGradleVersion} or later. The Gradle version could not be determined because \"{diagnosticMessage}\"");
            }
        }

        static void EnsureMinSdkVersion()
        {
            var arcoreSettings = ARCoreSettings.GetOrCreateSettings();
            var minSdkVersion = arcoreSettings.requirement == ARCoreSettings.Requirement.Optional ? 14 : 24;

            if ((int)PlayerSettings.Android.minSdkVersion < minSdkVersion)
                throw new BuildFailedException($"ARCore {arcoreSettings.requirement} apps require a minimum SDK version of {minSdkVersion}. Currently set to {PlayerSettings.Android.minSdkVersion}");
        }

        static void EnsureARCoreSupportedIsNotChecked()
        {
#if !UNITY_2020_1_OR_NEWER
            if (PlayerSettings.Android.ARCoreEnabled)
                throw new BuildFailedException("\"ARCore Supported\" (Player Settings > XR Settings) refers to the built-in ARCore support in Unity and conflicts with the \"ARCore XR Plugin\" package.");
#endif
        }

        static void EnsureGoogleARCoreIsNotPresent()
        {
            var googleARAssetPath = AssetDatabase.GUIDToAssetPath("afb3e05691ff94d2cbad20643e5c5879");
            if (!string.IsNullOrEmpty(googleARAssetPath))
            {
                throw new BuildFailedException("GoogleARCore detected. Google's \"ARCore SDK for Unity\" and Unity's \"ARCore XR Plugin\" package cannot be used together. If you have already removed GoogleARCore, you may need to restart the Editor.");
            }
        }

        static void EnsureOnlyOpenGLES3IsUsed()
        {
            var graphicsApis = PlayerSettings.GetGraphicsAPIs(BuildTarget.Android);
            if (graphicsApis.Length > 0)
            {
                var graphicsApi = graphicsApis[0];
                if (graphicsApi != GraphicsDeviceType.OpenGLES3)
                    throw new BuildFailedException(
                        string.Format("You have enabled the {0} graphics API, which is not supported by ARCore.", graphicsApi));
            }
        }

        static void BuildImageTrackingAssets()
        {
            if (Directory.Exists(Application.streamingAssetsPath))
            {
                s_ShouldDeleteStreamingAssetsFolder = false;
            }
            else
            {
                // Delete the streaming assets folder at the end of the build pipeline
                // since it did not exist before we created it here.
                s_ShouldDeleteStreamingAssetsFolder = true;
                Directory.CreateDirectory(Application.streamingAssetsPath);
            }

            if (!Directory.Exists(ARCoreImageTrackingSubsystem.k_StreamingAssetsPath))
            {
                Directory.CreateDirectory(ARCoreImageTrackingSubsystem.k_StreamingAssetsPath);
            }

            try
            {
                var libGuids = AssetDatabase.FindAssets("t:xrReferenceImageLibrary");
                if (libGuids == null || libGuids.Length == 0)
                    return;

                // This is how much each library will contribute to the overall progress
                var progressPerLibrary = 1f / libGuids.Length;
                const string progressBarText = "Building ARCore Image Library";

                for (int libraryIndex = 0; libraryIndex < libGuids.Length; ++libraryIndex)
                {
                    var libGuid = libGuids[libraryIndex];
                    var overallProgress = progressPerLibrary * libraryIndex;
                    var numSteps = libGuids.Length + 1; // 1 per image plus arcoreimg
                    var libraryPath = AssetDatabase.GUIDToAssetPath(libGuid);
                    var imageLib = AssetDatabase.LoadAssetAtPath<XRReferenceImageLibrary>(libraryPath);

                    EditorUtility.DisplayProgressBar(progressBarText, imageLib.name, overallProgress);

                    var tempDirectory = Path.Combine(Path.GetTempPath(), Guid.NewGuid().ToString("N"));
                    var inputImageListPath = Path.Combine(tempDirectory, Guid.NewGuid().ToString("N") + ".txt");

                    // prepare text file for arcoreimg to read from
                    try
                    {
                        Directory.CreateDirectory(tempDirectory);
                        using (var writer = new StreamWriter(inputImageListPath, false))
                        {
                            for (int i = 0; i < imageLib.count; i++)
                            {
                                var referenceImage = imageLib[i];
                                var textureGuid = referenceImage.textureGuid.ToString("N");
                                var assetPath = AssetDatabase.GUIDToAssetPath(textureGuid);
                                var referenceImageName = referenceImage.guid.ToString("N");

                                EditorUtility.DisplayProgressBar(
                                    progressBarText,
                                    imageLib.name + ": " + assetPath,
                                    overallProgress + progressPerLibrary * i / numSteps);

                                var texture = AssetDatabase.LoadAssetAtPath<Texture2D>(assetPath);
                                if (texture == null)
                                {
                                    throw new BuildFailedException(string.Format(
                                        "ARCore Image Library Generation: Reference library at '{0}' is missing a texture at index {1}.",
                                        libraryPath, i));
                                }

                                var extension = Path.GetExtension(assetPath);
                                var entry = new StringBuilder();

                                if (string.Equals(extension, ".jpg" , StringComparison.Ordinal) ||
                                    string.Equals(extension, ".jpeg", StringComparison.Ordinal) ||
                                    string.Equals(extension, ".png" , StringComparison.Ordinal))
                                {
                                    // If lowercase jpg or png, use image as is
                                    entry.Append($"{referenceImageName}|{Path.GetFullPath(assetPath)}");
                                }
                                else if (string.Equals(extension, ".jpg" , StringComparison.OrdinalIgnoreCase) ||
                                         string.Equals(extension, ".jpeg", StringComparison.OrdinalIgnoreCase) ||
                                         string.Equals(extension, ".png" , StringComparison.OrdinalIgnoreCase))
                                {
                                    // If jpg or png but NOT lowercase, then copy it to a temporary file that uses lowercase
                                    var pathWithLowercaseExtension = Path.Combine(tempDirectory, textureGuid + extension.ToLower());
                                    File.Copy(assetPath, pathWithLowercaseExtension);
                                    entry.Append($"{referenceImageName}|{pathWithLowercaseExtension}");
                                }
                                else
                                {
                                    var pngFilename = Path.Combine(tempDirectory, textureGuid + ".png");
                                    var bytes = ImageConversion.EncodeToPNG(texture);
                                    if (bytes == null)
                                    {
                                        throw new BuildFailedException(string.Format(
                                            "ARCore Image Library Generation: Texture format for image '{0}' not supported. Inspect other error messages emitted during this build for more details.",
                                            texture.name));
                                    }

                                    File.WriteAllBytes(pngFilename, bytes);
                                    entry.Append($"{referenceImageName}|{pngFilename}");
                                }

                                if (referenceImage.specifySize)
                                {
                                    entry.Append($"|{referenceImage.width.ToString("G", CultureInfo.InvariantCulture)}");
                                }

                                writer.WriteLine(entry.ToString());
                            }
                        }
                    }
                    catch
                    {
                        Directory.Delete(tempDirectory, true);
                        throw;
                    }

                    // launch arcoreimg and wait for it to return so we can process the asset
                    try
                    {
                        EditorUtility.DisplayProgressBar(
                            progressBarText,
                            imageLib.name + ": Invoking arcoreimg",
                            overallProgress + progressPerLibrary * (numSteps - 1) / numSteps);

                        // This file must have the .imgdb extension (the tool adds it otherwise)
                        var outputDbPath = ARCoreImageTrackingSubsystem.GetPathForLibrary(imageLib);
                        if (File.Exists(outputDbPath))
                        {
                            File.Delete(outputDbPath);
                        }

                        var (stdOut, stdErr, _) = ArCoreImg.BuildDb(inputImageListPath, outputDbPath);

                        if (!File.Exists(outputDbPath))
                        {
                            throw new BuildFailedException(
                                $"Failed to generate image database. Output from arcoreimg:\n\nstdout:\n{stdOut}\n====\n\nstderr:\n{stdErr}\n====");
                        }
                    }
                    catch
                    {
                        Debug.LogError($"Failed to generated ARCore reference image library '{imageLib.name}'");
                        throw;
                    }
                    finally
                    {
                        Directory.Delete(tempDirectory, true);
                    }
                }
            }
            catch
            {
                RemoveGeneratedStreamingAssets();
                throw;
            }
        }

        static void RemoveDirectoryWithMetafile(string directory)
        {
            if (Directory.Exists(directory))
            {
                Directory.Delete(directory, true);
            }

            var meta = $"{directory}.meta";
            if (File.Exists(meta))
            {
                File.Delete(meta);
            }
        }

        static void RemoveGeneratedStreamingAssets()
        {
            RemoveDirectoryWithMetafile(ARCoreImageTrackingSubsystem.k_StreamingAssetsPath);
            if (s_ShouldDeleteStreamingAssetsFolder)
            {
                RemoveDirectoryWithMetafile(Application.streamingAssetsPath);
            }
        }

        static bool s_ShouldDeleteStreamingAssetsFolder;

        static readonly string[] k_RuntimePluginNames =
        {
            "UnityARCore.aar",
            "ARPresto.aar",
            "arcore_client.aar"
        };

        internal static bool isARCoreLoaderEnabled
        {
            get
            {
                var generalSettings = XRGeneralSettingsPerBuildTarget.XRGeneralSettingsForBuildTarget(BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget));
                return generalSettings != null && generalSettings.Manager.activeLoaders.OfType<ARCoreLoader>().Any();
            }
        }

        void SetRuntimePluginCopyDelegate()
        {
            foreach (var plugin in PluginImporter.GetAllImporters())
            {
                if (plugin.isNativePlugin &&
                    k_RuntimePluginNames.Any(pluginName => plugin.assetPath.Contains(pluginName)))
                {
                    plugin.SetIncludeInBuildDelegate(path => isARCoreLoaderEnabled);
                }
            }
        }
    
        void Check64BitArch()
        {
            // In editor versions 2021.1 and above, a warning is already shown for IL2CPP with ARMv7 only build config. 
            // So, we only need to check for Mono scripting backend.
#if UNITY_2021_2_OR_NEWER
            bool armV7Only = PlayerSettings.GetScriptingBackend(NamedBuildTarget.Android) == ScriptingImplementation.Mono2x;
#else // UNITY_2021_2_OR_NEWER
            var buildTargetGroup = BuildPipeline.GetBuildTargetGroup(EditorUserBuildSettings.activeBuildTarget);
            var scriptingBackend = PlayerSettings.GetScriptingBackend(buildTargetGroup);
            bool armV7Only = scriptingBackend == ScriptingImplementation.Mono2x;
#if !UNITY_2021_1_OR_NEWER
            // In editor version 2020.3 and lower, we will need to check for both Mono and IL2CPP with ARMv7 only
            // build config since there is no default warning from the core editor.
            armV7Only = armV7Only || (scriptingBackend == ScriptingImplementation.IL2CPP &&
                              (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.ARM64) == 0);
#endif // !UNITY_2021_1_OR_NEWER
#endif // UNITY_2021_2_OR_NEWER
            if (armV7Only)
            {
                Debug.LogWarning("Missing ARM64 architecture which is required for Android 64-bit devices. See https://developers.google.com/ar/64bit.\nSelect IL2CPP  in 'Project Settings > Player > Other Settings > Scripting Backend' and select ARM64 in 'Project Settings > Player > Other Settings > Target Architectures'.");
            }
        }
    }

    class ARCoreManifest : IPostGenerateGradleAndroidProject
    {
        const string k_AndroidUri = "http://schemas.android.com/apk/res/android";

        const string k_AndroidNameValue = "com.google.ar.core";

        const string k_AndroidManifestPath = "/src/main/AndroidManifest.xml";

        const string k_AndroidHardwareCameraAr = "android.hardware.camera.ar";

        const string k_AndroidPermissionCamera = "android.permission.CAMERA";

        const string k_AndroidDepth = "com.google.ar.core.depth";

        XmlNode FindFirstChild(XmlNode node, string tag)
        {
            if (node.HasChildNodes)
            {
                for (int i = 0; i < node.ChildNodes.Count; ++i)
                {
                    var child = node.ChildNodes[i];
                    if (child.Name == tag)
                        return child;
                }
            }

            return null;
        }

        void AppendNewAttribute(XmlDocument doc, XmlElement element, string attributeName, string attributeValue)
        {
            var attribute = doc.CreateAttribute(attributeName, k_AndroidUri);
            attribute.Value = attributeValue;
            element.Attributes.Append(attribute);
        }

        void FindOrCreateTagWithAttribute(XmlDocument doc, XmlNode containingNode, string tagName,
            string attributeName, string attributeValue)
        {
            if (containingNode.HasChildNodes)
            {
                for (int i = 0; i < containingNode.ChildNodes.Count; ++i)
                {
                    var child = containingNode.ChildNodes[i];
                    if (child.Name == tagName)
                    {
                        var childElement = child as XmlElement;
                        if (childElement != null && childElement.HasAttributes)
                        {
                            var attribute = childElement.GetAttributeNode(attributeName, k_AndroidUri);
                            if (attribute != null && attribute.Value == attributeValue)
                                return;
                        }
                    }
                }
            }

            // Didn't find it, so create it
            var element = doc.CreateElement(tagName);
            AppendNewAttribute(doc, element, attributeName, attributeValue);
            containingNode.AppendChild(element);
        }

        void FindOrCreateTagWithAttributes(XmlDocument doc, XmlNode containingNode, string tagName,
            string firstAttributeName, string firstAttributeValue, string secondAttributeName, string secondAttributeValue)
        {
            if (containingNode.HasChildNodes)
            {
                for (int i = 0; i < containingNode.ChildNodes.Count; ++i)
                {
                    var childNode = containingNode.ChildNodes[i];
                    if (childNode.Name == tagName)
                    {
                        var childElement = childNode as XmlElement;
                        if (childElement != null && childElement.HasAttributes)
                        {
                            var firstAttribute = childElement.GetAttributeNode(firstAttributeName, k_AndroidUri);
                            if (firstAttribute == null || firstAttribute.Value != firstAttributeValue)
                                continue;

                            var secondAttribute = childElement.GetAttributeNode(secondAttributeName, k_AndroidUri);
                            if (secondAttribute != null)
                            {
                                secondAttribute.Value = secondAttributeValue;
                                return;
                            }

                            // Create it
                            AppendNewAttribute(doc, childElement, secondAttributeName, secondAttributeValue);
                            return;
                        }
                    }
                }
            }

            // Didn't find it, so create it
            var element = doc.CreateElement(tagName);
            AppendNewAttribute(doc, element, firstAttributeName, firstAttributeValue);
            AppendNewAttribute(doc, element, secondAttributeName, secondAttributeValue);
            containingNode.AppendChild(element);
        }

        // This ensures the Android Manifest corresponds to
        // https://developers.google.com/ar/develop/java/enable-arcore
        public void OnPostGenerateGradleAndroidProject(string path)
        {
            if (!ARCorePreprocessBuild.isARCoreLoaderEnabled)
                return;

            string manifestPath = path + k_AndroidManifestPath;
            var manifestDoc = new XmlDocument();
            manifestDoc.Load(manifestPath);

            var manifestNode = FindFirstChild(manifestDoc, "manifest");
            if (manifestNode == null)
                return;

            var applicationNode = FindFirstChild(manifestNode, "application");
            if (applicationNode == null)
                return;

            FindOrCreateTagWithAttribute(manifestDoc, manifestNode, "uses-permission", "name", k_AndroidPermissionCamera);
            FindOrCreateTagWithAttributes(manifestDoc, applicationNode, "meta-data", "name", "unityplayer.SkipPermissionsDialog", "value", "true");

            var settings = ARCoreSettings.GetOrCreateSettings();
            if (settings.requirement == ARCoreSettings.Requirement.Optional)
            {
                FindOrCreateTagWithAttributes(manifestDoc, applicationNode, "meta-data", "name", k_AndroidNameValue, "value", "optional");
            }
            else if (settings.requirement == ARCoreSettings.Requirement.Required)
            {
                FindOrCreateTagWithAttributes(manifestDoc, manifestNode, "uses-feature", "name", k_AndroidHardwareCameraAr, "required", "true");
                FindOrCreateTagWithAttributes(manifestDoc, applicationNode, "meta-data", "name", k_AndroidNameValue, "value", "required");
            }

            if(settings.depth == ARCoreSettings.Requirement.Required)
            {
                FindOrCreateTagWithAttributes(manifestDoc, manifestNode, "uses-feature", "name", k_AndroidDepth, "required", "true");
            }
            manifestDoc.Save(manifestPath);
        }

        void DebugPrint(XmlDocument doc)
        {
            var sw = new System.IO.StringWriter();
            var xw = XmlWriter.Create(sw);
            doc.Save(xw);
            Debug.Log(sw);
        }

        public int callbackOrder => 2;
    }
}
