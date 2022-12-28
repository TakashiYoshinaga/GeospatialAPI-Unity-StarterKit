using UnityEditor.Build;
using UnityEditor.Build.Reporting;
using UnityEditor.XR.ARSubsystems;
using UnityEngine.XR.ARKit;

namespace UnityEditor.XR.ARKit
{
    class NoniOSBuildProcessor : IPreprocessBuildWithReport
    {
        public int callbackOrder => 0;

        public void OnPreprocessBuild(BuildReport report)
        {
            if (report.summary.platform != BuildTarget.iOS)
            {
                // Sometimes (e.g., build failure), the shader can get "stuck" in the Preloaded Assets array.
                // Make sure that if we are not building for iOS, we remove that shader.
                BuildHelper.RemoveShaderFromProject(ARKitCameraSubsystem.backgroundShaderName);
            }
        }
    }
}
