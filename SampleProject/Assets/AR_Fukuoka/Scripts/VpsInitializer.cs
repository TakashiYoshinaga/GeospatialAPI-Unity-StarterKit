// <copyright file="GeospatialController.cs" company="Google LLC">
//
// Copyright 2022 Google LLC
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
namespace AR_Fukuoka
{
    using System;
    using System.Collections.Generic;
    using Google.XR.ARCoreExtensions;
    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.XR.ARFoundation;
    using UnityEngine.XR.ARSubsystems;

    /// <summary>
    /// Controller for Geospatial sample.
    /// </summary>
    public class VpsInitializer : MonoBehaviour
    {
        [Header("AR Components")]

        /// <summary>
        /// The AREarthManager used in the sample.
        /// </summary>
        [SerializeField] AREarthManager EarthManager;

        /// <summary>
        /// The ARCoreExtensions used in the sample.
        /// </summary>
        [SerializeField] ARCoreExtensions ARCoreExtensions;

        //private bool _isInARView = false;
        private bool _isReturning = false;
        private bool _enablingGeospatial = false;
        private float _configurePrepareTime = 3f;

        bool _isReady = false;
        public bool IsReady { get { return _isReady; } }

        public bool _lockScreenToPortrait = true;
        /// <summary>
        /// Unity's Awake() method.
        /// </summary>
        public void Awake()
        {
            if (_lockScreenToPortrait)
            {
                // Lock screen to portrait.
                Screen.autorotateToLandscapeLeft = false;
                Screen.autorotateToLandscapeRight = false;
                Screen.autorotateToPortraitUpsideDown = false;
                Screen.orientation = ScreenOrientation.Portrait;
            }
            // Enable geospatial sample to target 60fps camera capture frame rate
            // on supported devices.
            // Note, Application.targetFrameRate is ignored when QualitySettings.vSyncCount != 0.
            Application.targetFrameRate = 60;

            if (ARCoreExtensions == null)
            {
                Debug.LogError("Cannot find ARCoreExtensions.");
            }
        }

        /// <summary>
        /// Unity's OnEnable() method.
        /// </summary>
        public void OnEnable()
        {
            _isReturning = false;
            _enablingGeospatial = false;
            _isReady = false;

#if UNITY_IOS
            Debug.Log("Start location services.");
            Input.location.Start();
#endif
        }

        /// <summary>
        /// Unity's OnDisable() method.
        /// </summary>
        public void OnDisable()
        {
#if UNITY_IOS
            Debug.Log("Stop location services.");
            Input.location.Stop();
#endif
        }

        /// <summary>
        /// Unity's Update() method.
        /// </summary>
        public void Update()
        {
            // Check session error status.
            LifecycleUpdate();
            if (_isReturning)
            {
                return;
            }

            if (ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                return;
            }

            // Check feature support and enable Geospatial API when it's supported.
            var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
            switch (featureSupport)
            {
                case FeatureSupported.Unknown:
                    return;
                case FeatureSupported.Unsupported:
                    ReturnWithReason("Geospatial API is not supported by this devices.");
                    return;
                case FeatureSupported.Supported:
                    if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
                        GeospatialMode.Disabled)
                    {
                        Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
                        ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
                            GeospatialMode.Enabled;
                        _configurePrepareTime = 3.0f;
                        _enablingGeospatial = true;
                        return;
                    }

                    break;
            }

            // Waiting for new configuration taking effect.
            if (_enablingGeospatial)
            {
                _configurePrepareTime -= Time.deltaTime;
                if (_configurePrepareTime < 0)
                {
                    _enablingGeospatial = false;
                }
                else
                {
                    return;
                }
            }

            // Check earth state.
            var earthState = EarthManager.EarthState;
            if (earthState != EarthState.Enabled)
            {
                ReturnWithReason(
                    "Geospatial sample encountered an EarthState error: " + earthState);
                return;
            }

            // Check earth localization.
#if UNITY_IOS
            bool isSessionReady = ARSession.state == ARSessionState.SessionTracking &&
                Input.location.status == LocationServiceStatus.Running;
#else
            bool isSessionReady = ARSession.state == ARSessionState.SessionTracking;
#endif

            //If the process can reach this line and isSessionReady is true, the GeospatialAPI is available
            _isReady = isSessionReady;
        }


        private void LifecycleUpdate()
        {
            // Pressing 'back' button quits the app.
            if (Input.GetKeyUp(KeyCode.Escape))
            {
                Application.Quit();
            }

            if (_isReturning)
            {
                return;
            }

            // Only allow the screen to sleep when not tracking.
            var sleepTimeout = SleepTimeout.NeverSleep;
            if (ARSession.state != ARSessionState.SessionTracking)
            {
                sleepTimeout = SleepTimeout.SystemSetting;
            }

            Screen.sleepTimeout = sleepTimeout;

            // Quit the app if ARSession is in an error status.
            string returningReason = string.Empty;
            if (ARSession.state != ARSessionState.CheckingAvailability &&
                ARSession.state != ARSessionState.Ready &&
                ARSession.state != ARSessionState.SessionInitializing &&
                ARSession.state != ARSessionState.SessionTracking)
            {
                returningReason = string.Format(
                    "Geospatial sample encountered an ARSession error state {0}.\n" +
                    "Please start the app again.",
                    ARSession.state);
            }
#if UNITY_IOS
            else if (Input.location.status == LocationServiceStatus.Failed)
            {
                returningReason =
                    "Geospatial sample failed to start location service.\n" +
                    "Please start the app again and grant precise location permission.";
            }
#endif
            else if (ARCoreExtensions == null)
            {
                returningReason = string.Format(
                    "Geospatial sample failed with missing AR Components.");
            }

            ReturnWithReason(returningReason);
        }

        private void ReturnWithReason(string reason)
        {
            if (string.IsNullOrEmpty(reason))
            {
                return;
            }

            Debug.LogError(reason);
            _isReturning = true;
            _isReady = false;
            //Invoke(nameof(QuitApplication), _errorDisplaySeconds);
        }

        private void QuitApplication()
        {
            Application.Quit();
        }
    }
}