//-----------------------------------------------------------------------
// <copyright file="LogRequestUtils.cs" company="Google LLC">
//
// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------

namespace Google.XR.ARCoreExtensions.Editor.Internal
{
    using System;
    using System.Diagnostics.CodeAnalysis;
    using System.Security.Cryptography;
    using System.Text;
    using Google.Protobuf;
    using Google.XR.ARCoreExtensions;
    using Google.XR.ARCoreExtensions.Editor.Internal.Proto;
    using UnityEditor;
    using UnityEngine;

    [SuppressMessage("StyleCop.CSharp.DocumentationRules", "SA1600:ElementsMustBeDocumented",
     Justification = "Internal")]
    public class LogRequestUtils
    {
        private const string _googleAnalyticsId = "GoogleAnalyticsId";
        private static string _sessionId = string.Empty;

        /// <summary>
        /// Generates a new LogRequest using the current system configuration.
        /// </summary>
        /// <returns>A valid LogRequest.</returns>
        public static LogRequest BuildLogRequest()
        {
            // Determine Unity engine information.
            ArCoreSdkLog.Types.UnityEngine.Types.EditionType editionType
                = ArCoreSdkLog.Types.UnityEngine.Types.EditionType.Personal;
            if (Application.HasProLicense() == true)
            {
                editionType = ArCoreSdkLog.Types.UnityEngine.Types.EditionType.Professional;
            }

            ArCoreSdkLog.Types.UnityEngine engine = new ArCoreSdkLog.Types.UnityEngine()
            {
                Version = Application.unityVersion,
                EditionType = editionType,
            };

            // Collect the set of information to be sent to Google.
            ArCoreSdkLog logSDK = new ArCoreSdkLog()
            {
                SdkInstanceId = UniqueId(),
                OsVersion = SystemInfo.operatingSystem,
                ArcoreSdkVersion = VersionInfo.Version,
                SdkType = ArCoreSdkLog.Types.SDKType.ArfoundationExtensionsSdk,
                Unity = engine,     // Unity engine version.
                SdkSessionId = SessionId(),
            };

            // Assemble the Clearcut log event data.
            LogEvent logEvent = new LogEvent()
            {
                EventTimeMs = GetCurrentUnixEpochTimeMs(),
                EventUptimeMs = GetSystemUptimeMs(),
                SourceExtension = logSDK.ToByteString(),
            };

            // Package all data in a log request.
            LogRequest logRequest = new LogRequest()
            {
                RequestTimeMs = GetCurrentUnixEpochTimeMs(),
                RequestUptimeMs = GetSystemUptimeMs(),
                LogSourceVal = LogRequest.Types.LogSource.ArcoreSdk,
                LogEvent = { logEvent },
            };

            return logRequest;
        }

        /// <summary>
        /// A unique id is generated on the first call to this method and stored
        /// in Unity's EditorPrefs, subsequent calls return the retrieved value.
        /// </summary>
        /// <returns>A unique string representing this client.</returns>
        private static string UniqueId()
        {
            // Check to see if the id already exists.
            string id = EditorPrefs.GetString(_googleAnalyticsId, string.Empty);
            if (id != string.Empty)
            {
                return id;
            }

            // Use a hasher to generate an id, use the current ticks to salt the hash.
            string salt = System.DateTime.Now.Ticks.ToString();
            HMACSHA512 hasher = new HMACSHA512(Encoding.UTF8.GetBytes(salt));
            byte[] hash =
                hasher.ComputeHash(Encoding.UTF8.GetBytes(SystemInfo.deviceUniqueIdentifier));

            // Convert the byte stream to a string.
            StringBuilder str = new StringBuilder();
            foreach (byte b in hash)
            {
                str.Append(b.ToString("x2"));
            }

            id = str.ToString();

            // Store for retrieval next time.
            EditorPrefs.SetString(_googleAnalyticsId, id);

            return id;
        }

        /// <summary>
        /// The current session id. This is generated on first request and
        /// used while the current project remains open.
        /// </summary>
        /// <returns>The current session id.</returns>
        private static string SessionId()
        {
            // Generate on first request.
            if (_sessionId == string.Empty)
            {
                _sessionId = Guid.NewGuid().ToString();
            }

            return _sessionId;
        }

        /// <summary>
        /// Current UTC coordinated time.
        /// </summary>
        /// <returns>Current UTC time in milliseconds.</returns>
        private static long GetCurrentUnixEpochTimeMs()
        {
            // UTC Epoch Time (0h 00m 00.00s Jan 1, 1970).
            DateTimeOffset epoch = new DateTimeOffset(1970, 1, 1, 0, 0, 0, 0, TimeSpan.Zero);
            TimeSpan offset = DateTimeOffset.UtcNow - epoch;

            // We use TimeSpan.Ticks instead of TimeSpan.Milliseconds as the latter only returns the
            // ms component of the TimeSpan, where Ticks returns the total interval represented by
            // the timespan.
            return offset.Ticks / TimeSpan.TicksPerMillisecond;
        }

        /// <summary>
        /// The time since the system was booted in millseconds.
        /// </summary>
        /// <returns>Current system uptime in milliseconds.</returns>
        private static long GetSystemUptimeMs()
        {
            return Environment.TickCount;
        }
    }
}
