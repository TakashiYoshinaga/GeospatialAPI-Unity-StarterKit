//-----------------------------------------------------------------------
// <copyright file="EnumFlagsAttribute.cs" company="Google LLC">
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

namespace Google.XR.ARCoreExtensions.Internal
{
    using UnityEngine;

    /// <summary>
    /// Enum flags attribute to calculate the "everything" option based on the current
    /// enum values instead of using "-1" directly for the backward compatibility.
    /// </summary>
    public class EnumFlagsAttribute : PropertyAttribute
    {
        /// <summary>
        /// The enum type of the property with <see cref="System.FlagsAttribute"/>.
        /// </summary>
        public System.Type EnumType;

        /// <summary>
        /// Constructor of EnumFlagsAttribute class.
        /// </summary>
        /// <param name="type">The type of the enum.</param>
        public EnumFlagsAttribute(System.Type type)
        {
            EnumType = type;
        }
    }
}
