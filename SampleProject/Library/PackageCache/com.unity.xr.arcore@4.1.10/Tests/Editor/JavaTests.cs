using System;
using UnityEngine;

namespace UnityEditor.XR.ARCore.Tests
{
    static class JavaTests
    {
        const string k_LogPrefix = "[Java Tests]";

        [MenuItem("AR Foundation/Tests/Log Java path")]
        static void LogFullPathToJava()
        {
            if (Java.TryGetFullPathToJava(out var fullPathToJava, out var diagnosticMessage))
            {
                Debug.Log($"{k_LogPrefix} Full path to Java (including extension): {fullPathToJava}");
            }
            else
            {
                Debug.LogError($"{k_LogPrefix} {diagnosticMessage}");
            }
        }
    }
}
