using System;
using System.IO;
using NUnit.Framework;
using UnityEngine;

namespace UnityEditor.XR.ARCore.Tests
{
    class GradleValidationTests
    {
        static string GetGradleLauncherForVersion(Version version) => $"{ARCorePreprocessBuild.gradleLauncherPrefix}{version}.jar";

        static bool TryParse(Version testVersion, out Version parsedVersion, out string diagnosticMessage) =>
            Gradle.TryParseVersion(GetGradleLauncherForVersion(testVersion), out parsedVersion, out diagnosticMessage);

        const string k_LogPrefix = "[Gradle Tests]";

        [MenuItem("AR Foundation/Tests/Log Gradle version by parsing gradle-launcher-*.jar")]
        static void LogGradleVersionByParsingFileName()
        {
            if (!Gradle.TryGetFullPathToGradleLauncher(out var fullPathToGradleLauncher, out var diagnosticMessage))
            {
                Debug.LogError($"{k_LogPrefix} {diagnosticMessage}");
                return;
            }

            Debug.Log($"{k_LogPrefix} Path to gradle launcher: {fullPathToGradleLauncher}");

            if (Gradle.TryParseVersion(Path.GetFileNameWithoutExtension(fullPathToGradleLauncher), out var gradleVersion, out diagnosticMessage))
            {
                Debug.Log($"{k_LogPrefix} Detected gradle version: {gradleVersion}");
            }
            else
            {
                Debug.LogError($"{k_LogPrefix} {diagnosticMessage}");
            }
        }

        [MenuItem("AR Foundation/Tests/Log Gradle version from Java")]
        static void LogGradleVersionByExecutingJava()
        {
            // Get the path to the gradle-launcher-*.jar file
            if (!Gradle.TryGetFullPathToGradleLauncher(out var pathToGradleLauncher, out var diagnosticMessage))
            {
                Debug.LogError($"{k_LogPrefix} {diagnosticMessage}");
                return;
            }

            // If parsing the filename fails, execute it with the --version CLI option
            if (!Java.canExecute)
            {
                Debug.LogError($"{k_LogPrefix} No Java executable found.");
                return;
            }

            Debug.Log($"{k_LogPrefix} Executing \"{pathToGradleLauncher} --version\" ...");

            var (stdout, stderr, exitCode) = Java.Execute(pathToGradleLauncher, "--version");

            Debug.Log($"{k_LogPrefix} Execution completed with exit code {exitCode} and stdout:\n{stdout}\nstderr:\n{stderr}");

            if (exitCode != 0)
            {
                Debug.LogError($"{k_LogPrefix} Execution of \"{pathToGradleLauncher} --version\" failed with exit code {exitCode}:\n{stderr}");
                return;
            }

            if (string.IsNullOrEmpty(stdout))
            {
                Debug.LogError($"{k_LogPrefix} Execution of Execution of \"{pathToGradleLauncher} --version\" resulted in no output. stderr:\n{stderr}");
                return;
            }

            if (Gradle.TryParseVersion(stdout, out var gradleVersion, out diagnosticMessage))
            {
                Debug.Log($"{k_LogPrefix} Gradle version: {gradleVersion}");
            }
            else
            {
                Debug.LogError($"{k_LogPrefix} {diagnosticMessage}");
            }
        }

        [Test]
        public void CanParseGradleVersion()
        {
            void TestVersion(Version version)
            {
                var result = TryParse(version, out var parsedVersion, out var diagnosticMessage);
                Assert.IsTrue(result);
                Assert.IsNotNull(parsedVersion);
                Assert.AreEqual(version, parsedVersion);
                Assert.IsNull(diagnosticMessage);
            }

            TestVersion(new Version(1, 2));
            TestVersion(new Version(1, 2, 3));
            TestVersion(new Version(5, 6, 4));
        }
    }
}
