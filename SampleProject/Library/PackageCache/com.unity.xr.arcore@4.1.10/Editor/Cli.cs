using System;
using System.Diagnostics;

namespace UnityEditor.XR.ARCore
{
    static class Cli
    {
        /// <summary>
        /// Executes a command line interface (CLI), capturing standard output and error. <paramref name="fileName"/> is
        /// executed synchronously.
        /// </summary>
        /// <param name="fileName">The path of the executable.</param>
        /// <param name="arguments">Additional arguments to pass to the executable.</param>
        /// <returns>A Tuple:
        /// * string stdout: The standard output (stdout) resulting from the execution.
        /// * string stderr: The standard error (stderr) resulting from the execution.
        /// * int exitCode: The exit code resulting from the execution.
        ///
        /// If there is no standard output or error, that return value may be the empty string (not `null`). Consider
        /// using `string.IsNullOrEmpty(stderr)` to check for errors.
        /// </returns>
        /// <exception cref="System.ArgumentException">Thrown if <paramref name="fileName"/> is `null` or the empty
        ///     string.</exception>
        public static (string stdout, string stderr, int exitCode) Execute(string fileName, string arguments)
        {
            if (string.IsNullOrEmpty(fileName))
                throw new ArgumentException($"{nameof(fileName)} must not be null or empty.", nameof(fileName));

            var process = new Process
            {
                StartInfo = new ProcessStartInfo
                {
                    WindowStyle = ProcessWindowStyle.Hidden,
                    FileName = fileName,
                    Arguments = arguments,
                    UseShellExecute = false,
                    RedirectStandardOutput = true,
                    RedirectStandardError = true,
                    CreateNoWindow = true
                },
                EnableRaisingEvents = true
            };

            using (process)
            {
                process.Start();
                var stdout = process.StandardOutput.ReadToEnd();
                var stderr = process.StandardError.ReadToEnd();
                process.WaitForExit();

                return (stdout, stderr, process.ExitCode);
            }
        }

        /// <summary>
        /// Executes a command line interface (CLI), capturing standard output and error. <paramref name="fileName"/> is
        /// executed synchronously.
        /// </summary>
        /// <param name="fileName">The path of the executable.</param>
        /// <param name="arguments">Additional arguments to pass to the executable.</param>
        /// <returns>A Tuple:
        /// * string stdout: The standard output resulting from the execution.
        /// * string stderr: The standard error resulting from the execution.
        /// * int exitCode: The exit code resulting from the execution.
        ///
        /// If there is no standard output or error, that return value may be the empty string (not `null`). Consider
        /// using `string.IsNullOrEmpty(stderr)` to check for errors.
        /// </returns>
        /// <exception cref="System.ArgumentException">Thrown if <paramref name="fileName"/> is `null` or the empty
        ///     string.</exception>
        public static (string stdout, string stderr, int exitCode) Execute(string fileName, string[] arguments = null) =>
            Execute(fileName, arguments == null ? null : string.Join(" ", arguments));
    }
}
