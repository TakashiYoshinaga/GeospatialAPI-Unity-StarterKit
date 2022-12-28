namespace UnityEditor.XR.ARCore.Editor.Tests
{
    static class ManagementTests
    {
        [MenuItem("AR Foundation/Tests/Detect ARCore Enabled")]
        public static void DetectedARCoreEnabled()
        {
            EditorUtility.DisplayDialog(
                "ARCore Detection",
                $"ARCore is {(ARCorePreprocessBuild.isARCoreLoaderEnabled ? "enabled" : "disabled")}",
                "OK");
        }
    }
}
