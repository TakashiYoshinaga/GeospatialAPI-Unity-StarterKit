using System;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEditor.Android;
using UnityEngine;

namespace UnityEditor.XR.ARCore
{
    static class Gradle
    {
        public const string gradleLauncherPrefix = "gradle-launcher-";

        public static bool TryGetFullPathToGradleLauncher(out string path, out string diagnosticMessage)
        {
#if UNITY_ANDROID
            path = AndroidExternalToolsSettings.gradlePath;
            if (string.IsNullOrEmpty(path))
            {
                diagnosticMessage = "No Gradle path set.";
                return false;
            }

            path = Directory.EnumerateFiles(Path.Combine(path, "lib"), $"{gradleLauncherPrefix}*.jar").FirstOrDefault();
            if (string.IsNullOrEmpty(path))
            {
                diagnosticMessage = $"Could not find '{gradleLauncherPrefix}*.jar'";
                return false;
            }

            diagnosticMessage = null;
            return true;
#else
            (path, diagnosticMessage) = (null, "Cannot get path to the Gradle launcher unless the active build platform is Android.");
            return false;
#endif
        }

        public static bool TryParseVersion(string input, out Version gradleVersion, out string diagnosticMessage)
        {
            var matches = Regex.Matches(input, @"\d+(\.\d+)+");
            if (matches.Count == 0)
            {
                gradleVersion = null;
                diagnosticMessage = $"Could not determine Gradle version from '{input}'.";
                return false;
            }

            var versionString = matches[0].Value;
            if (Version.TryParse(versionString, out gradleVersion))
            {
                diagnosticMessage = null;
                return true;
            }

            (gradleVersion, diagnosticMessage) = (null, $"Could not parse Gradle version from '{versionString}'.");
            return false;
        }

        /// <summary>
        /// Attempts to determine the Gradle version.
        /// </summary>
        /// <remarks>
        /// This method tries to get the Gradle version method with a fallback. First, it tries to get the path to the
        /// "gradle launcher", which is expected to be in the form `gradle-launcher-*.jar`. If such a file does not
        /// exist, then it cannot retrieve the version. If it does exist, then the `*` should be the version number,
        /// e.g., `gradle-launcher-5.6.4.jar`. If it cannot parse the version number from the filename, then it will
        /// attempt to execute it with the argument `--version` and parse the output.
        /// </remarks>
        /// <param name="gradleVersion">The gradle version, or `null` if it could not be determined.</param>
        /// <param name="diagnosticMessage">If <paramref name="gradleVersion"/> is `null`, this will contain a
        ///     diagnostic message explaining why.</param>
        /// <returns>Returns `true` if the Gradle version could be parsed. Returns `false` otherwise.</returns>
        public static bool TryGetVersion(out Version gradleVersion, out string diagnosticMessage)
        {
            // Get the path to the gradle-launcher-*.jar file
            if (!TryGetFullPathToGradleLauncher(out var pathToGradleLauncher, out diagnosticMessage))
            {
                gradleVersion = null;
                return false;
            }

            // Try to determine the version from the filename alone
            if (TryParseVersion(Path.GetFileNameWithoutExtension(pathToGradleLauncher), out gradleVersion, out diagnosticMessage))
            {
                return true;
            }

            // If parsing the filename fails, execute it with the --version CLI option
            if (!Java.canExecute)
            {
                (gradleVersion, diagnosticMessage) = (null, "No Java executable found.");
                return false;
            }

            var (stdout, stderr, exitCode) = Java.Execute(pathToGradleLauncher, "--version");

            if (exitCode != 0)
            {
                (gradleVersion, diagnosticMessage) = (null, $"Execution of \"{pathToGradleLauncher} --version\" failed with exit code {exitCode}:\n{stderr}");
                return false;
            }

            // Make sure stdout contains something
            if (string.IsNullOrEmpty(stdout))
            {
                (gradleVersion, diagnosticMessage) = (null, $"Execution of Execution of \"{pathToGradleLauncher} --version\" resulted in no output. stderr:\n{stderr}");
                return false;
            }

            // We were able to run it successfully; parse the output. Expected output looks like this:
            // ------------------------
            // Gradle 5.6.4
            // ------------------------
            // ...
            return TryParseVersion(stdout, out gradleVersion, out diagnosticMessage);
        }
    }
}

