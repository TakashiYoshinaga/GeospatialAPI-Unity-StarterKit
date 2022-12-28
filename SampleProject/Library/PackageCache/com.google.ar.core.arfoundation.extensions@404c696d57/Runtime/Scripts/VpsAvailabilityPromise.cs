//-----------------------------------------------------------------------
// <copyright file="VpsAvailabilityPromise.cs" company="Google LLC">
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

namespace Google.XR.ARCoreExtensions
{
    using System;
    using Google.XR.ARCoreExtensions.Internal;
    using UnityEngine;
    using UnityEngine.XR.ARSubsystems;

    /// <summary>
    /// A specific interruptible promise to check the VPS availability using the given location by
    /// initializing a query with a remote service, used in coroutines to poll <c><see
    /// cref="VpsAvailability"/></c> results across multiple frames.
    /// </summary>
    public class VpsAvailabilityPromise : InterruptiblePromise<VpsAvailability>
    {
        /// <summary>
        /// Constructs a default promise with an immutable result <c><see
        /// cref="VpsAvailability.Unknown"/></c>.
        /// </summary>
        internal VpsAvailabilityPromise()
        {
            _state = PromiseState.Done;
            _result = VpsAvailability.Unknown;
        }

        /// <summary>
        /// Constructs a specific promise with the desired latitude and longitude. It polls the
        /// result in the Update event every frame until the result gets resolved. The promise
        /// result is accessible via <c><see cref="Result"/></c>, and can be cancelled by
        /// <c><see cref="Cancel()"/></c>.
        /// </summary>
        /// <param name="latitude">The latitude, in degrees.</param>
        /// <param name="longitude">The longitude, in degrees.</param>
        internal VpsAvailabilityPromise(double latitude, double longitude)
        {
#if UNITY_ANDROID
            ARPrestoApi.SetSessionRequired(true);
#elif UNITY_IOS && ARCORE_EXTENSIONS_IOS_SUPPORT
            SessionApi.SetAuthToken(GetSessionHandle());
#endif
            var sessionHandle = GetSessionHandle();
            if (sessionHandle == IntPtr.Zero)
            {
                _state = PromiseState.Done;
                _result = VpsAvailability.ErrorInternal;
            }
            else
            {
                _future = FutureApi.CheckVpsAvailabilityAsync(sessionHandle, latitude, longitude);
                if (_future == IntPtr.Zero)
                {
                    _state = PromiseState.Done;
                    _result = VpsAvailability.ErrorInternal;
                }
            }

#if UNITY_ANDROID
            ARPrestoApi.SetSessionRequired(false);
#endif
        }

        /// <summary>
        /// Releases the underlying native handle.
        /// </summary>
        ~VpsAvailabilityPromise()
        {
            FutureApi.Release(_future);
        }

        /// <summary>
        /// Gets the <c><see cref="PromiseState"/></c> associated with this promise. Used to
        /// determine if the promise is still waiting for the result.
        /// </summary>
        public override PromiseState State
        {
            get
            {
                var sessionHandle = GetSessionHandle();
                if (_future != IntPtr.Zero && sessionHandle != IntPtr.Zero)
                {
                    _state = FutureApi.GetState(sessionHandle, _future);
                }

                return _state;
            }
        }

        /// <summary>
        /// Gets the <c><see cref="VpsAvailability"/></c> associated with this promise or the
        /// default value <c><see cref="VpsAvailability.Unknown"/></c> if the promise was cancelled.
        /// </summary>
        public override VpsAvailability Result
        {
            get
            {
                var sessionHandle = GetSessionHandle();
                if (_future != IntPtr.Zero && sessionHandle != IntPtr.Zero)
                {
                    _result = FutureApi.GetResult(sessionHandle, _future);
                }

                return _result;
            }
        }

        /// <summary>
        /// Cancels execution of this promise if it's still pending.
        /// </summary>
        public override void Cancel()
        {
            FutureApi.Cancel(GetSessionHandle(), _future);
        }
    }
}
