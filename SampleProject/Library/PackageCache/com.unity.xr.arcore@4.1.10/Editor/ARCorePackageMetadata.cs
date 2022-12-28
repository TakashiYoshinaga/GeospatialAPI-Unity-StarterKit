using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;

using UnityEngine;
using UnityEngine.XR.ARCore;

using UnityEditor;
using UnityEditor.XR.Management;
using UnityEditor.XR.Management.Metadata;

namespace UnityEditor.XR.ARCore
{
    class XRPackage : IXRPackage
    {
        class ARCoreLoaderMetadata : IXRLoaderMetadata
        {
            public string loaderName { get; set; }
            public string loaderType { get; set; }
            public List<BuildTargetGroup> supportedBuildTargets { get; set; }
        }

        class ARCorePackageMetadata : IXRPackageMetadata
        {
            public string packageName { get; set; }
            public string packageId { get; set; }
            public string settingsType { get; set; }
            public List<IXRLoaderMetadata> loaderMetadata { get; set; }
        }

        static IXRPackageMetadata s_Metadata = new ARCorePackageMetadata()
        {
            packageName = "ARCore XR Plugin",
            packageId = "com.unity.xr.arcore",
            settingsType = typeof(ARCoreSettings).FullName,
            loaderMetadata = new List<IXRLoaderMetadata>()
            {
                new ARCoreLoaderMetadata()
                {
                    loaderName = "ARCore",
                    loaderType = typeof(ARCoreLoader).FullName,
                    supportedBuildTargets = new List<BuildTargetGroup>()
                    {
                        BuildTargetGroup.Android
                    }
                },
            }
        };

        public IXRPackageMetadata metadata => s_Metadata;

        public bool PopulateNewSettingsInstance(ScriptableObject obj)
        {
            if(obj is ARCoreSettings settings)
            {
                settings.requirement = ARCoreSettings.Requirement.Required;
                ARCoreSettings.currentSettings = settings;
                return true;
            }

            return false;
        }
    }
}
