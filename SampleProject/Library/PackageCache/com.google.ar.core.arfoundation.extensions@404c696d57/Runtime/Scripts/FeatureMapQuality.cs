//-----------------------------------------------------------------------
// <copyright file="FeatureMapQuality.cs" company="Google LLC">
//
// Copyright 2020 Google LLC
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
    /// <summary>
    /// Indicates the quality of feature points seen by ARCore in the preceding few seconds from
    /// a given camera <c><see cref="Pose"/></c>. A higher quality indicates that a Cloud Anchor
    /// hosted at the current time, with the current set of recently seen feature points, is
    /// generally easier to resolve more accurately. For more details, see
    /// <a href="https://developers.google.com/ar/develop/unity-arf/cloud-anchors/overview">Share AR
    /// experiences with Cloud Anchors</a>.
    /// </summary>
    public enum FeatureMapQuality
    {
        /// <summary>
        /// The quality of feature points seen from the pose in the preceding
        /// few seconds is low. This state indicates that ARCore will likely have
        /// more difficulty resolving the Cloud Anchor. Encourage the user to move the
        /// device, so that the desired position of the Cloud Anchor to be hosted is
        /// seen from different angles.
        /// </summary>
        Insufficient = 0,

        /// <summary>
        /// The quality of feature points seen from the pose in the preceding
        /// few seconds is likely sufficient for ARCore to successfully resolve
        /// a Cloud Anchor, although the accuracy of the resolved pose will likely be
        /// reduced. Encourage the user to move the device, so that the desired position of
        /// the Cloud Anchor to be hosted is seen from different angles.
        /// </summary>
        Sufficient = 1,

        /// <summary>
        /// The quality of feature points seen from the pose in the preceding
        /// few seconds is likely sufficient for ARCore to successfully resolve
        /// a Cloud Anchor with a high degree of accuracy.
        /// </summary>
        Good = 2,
    }
}
