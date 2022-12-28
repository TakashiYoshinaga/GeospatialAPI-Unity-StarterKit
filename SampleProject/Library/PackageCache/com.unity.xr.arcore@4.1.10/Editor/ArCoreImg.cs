using System;
using System.IO;
using UnityEngine;

namespace UnityEditor.XR.ARCore
{
    static class ArCoreImg
    {
        static string packagePath => Path.GetFullPath("Packages/com.unity.xr.arcore");

#if UNITY_EDITOR_WIN
        static string extension => ".exe";
#else
        static string extension => "";
#endif

#if UNITY_EDITOR_WIN
        static string platformName => "Windows";
#elif UNITY_EDITOR_OSX
        static string platformName => "MacOS";
#elif UNITY_EDITOR_LINUX
        static string platformName => "Linux";
#else
        static string platformName => throw new NotSupportedException();
#endif

        static readonly string[] k_SupportedExtensions =
        {
            ".jpg",
            ".jpeg",
            ".png"
        };

        public static (string stdOut, string stdErr, int exitCode) BuildDb(string inputImageListPath, string outputDbPath)
        {
            var cliPath = Path.Combine(packagePath, "Tools~", platformName, $"arcoreimg{extension}");

#if UNITY_EDITOR_OSX || UNITY_EDITOR_LINUX
            Cli.Execute("/bin/chmod", $"+x \"{cliPath}\"");
#endif

            if (File.Exists(outputDbPath))
            {
                File.Delete(outputDbPath);
            }

            return Cli.Execute(cliPath, new[]
            {
                "build-db",
                $"--input_image_list_path=\"{inputImageListPath}\"",
                $"--output_db_path=\"{outputDbPath}\"",
            });
        }
    }
}
