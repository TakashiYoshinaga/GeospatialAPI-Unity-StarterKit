using System;
using System.Collections.Generic;
using System.Globalization;
using System.Xml;
using UnityEngine;

namespace UnityEditor.XR.ARKit
{
    /// <summary>
    /// Represents metadata associated with a <c>.arobject</c> archive. These archives
    /// are the source data for <see cref="UnityEngine.XR.ARKit.ARKitReferenceObjectEntry"/>.
    /// </summary>
    /// <seealso cref="ARObject"/>
    /// <seealso cref="ARObjectImporter"/>
    /// <seealso cref="UnityEngine.XR.ARKit.ARKitReferenceObjectEntry"/>
    public struct ARObjectInfo : IEquatable<ARObjectInfo>
    {
        /// <summary>
        /// Parses the <paramref name="plist"/> and constructs a new <see cref="ARObjectInfo"/>.
        /// </summary>
        /// <param name="plist">A valid <c>PlistDocument</c> to parse.</param>
        /// <exception cref="System.ArgumentNullException">Thrown if <paramref name="plist"/> is <c>null</c>.</exception>
        public ARObjectInfo(XmlDocument plist)
        {
            if (plist == null)
                throw new ArgumentNullException("plist");

            // Parse the plist
            var root = plist.DocumentElement;
            var namespaceManager = new XmlNamespaceManager(plist.NameTable);
            var node = root.SelectSingleNode("descendant::dict");
            var dict = ParseDict(node);

            version = GetWithDefault(dict, "Version", 0);
            trackingDataReference = GetWithDefault(dict, "TrackingDataReference", string.Empty);
            imageReference = GetWithDefault(dict, "ImageReference", string.Empty);
            if (dict.ContainsKey("ReferenceOrigin"))
            {
                var originDict = ParseDict(dict["ReferenceOrigin"]);
                var rotation = GetWithDefault(originDict, "rotation", Quaternion.identity);
                var translation = GetWithDefault(originDict, "translation", Vector3.zero);
                referenceOrigin = new Pose(translation, rotation);
            }
            else
            {
                referenceOrigin = Pose.identity;
            }
        }

        static int GetWithDefault(Dictionary<string, XmlNode> dict, string key, int defaultValue)
        {
            XmlNode node;
            if (!dict.TryGetValue(key, out node))
                return defaultValue;

            if (node.Name != "integer")
                return defaultValue;

            return int.Parse(node.InnerText);
        }

        static string GetWithDefault(Dictionary<string, XmlNode> dict, string key, string defaultValue)
        {
            XmlNode node;
            if (!dict.TryGetValue(key, out node))
                return defaultValue;

            if (node.Name != "string")
                return defaultValue;

            return node.InnerText;
        }

        static Dictionary<string, XmlNode> ParseDict(XmlNode node)
        {
            var dict = new Dictionary<string, XmlNode>();
            XmlNodeList keys = node.SelectNodes("descendant::key");
            foreach (XmlNode key in keys)
            {
                var value = key.NextSibling;
                dict[key.InnerText] = value;
            }

            return dict;
        }

        static Vector3 GetWithDefault(Dictionary<string, XmlNode> dict, string key, Vector3 defaultValue)
        {
            XmlNode node;
            if (!dict.TryGetValue(key, out node))
                return defaultValue;

            if (node.Name != "array")
                return defaultValue;

            XmlNodeList reals = node.SelectNodes("real");
            if (reals == null)
                return defaultValue;

            return new Vector3(
                 float.Parse(reals[0].InnerText, CultureInfo.InvariantCulture),
                 float.Parse(reals[1].InnerText, CultureInfo.InvariantCulture),
                -float.Parse(reals[2].InnerText, CultureInfo.InvariantCulture));
        }

        static Quaternion GetWithDefault(Dictionary<string, XmlNode> dict, string key, Quaternion defaultValue)
        {
            XmlNode node;
            if (!dict.TryGetValue(key, out node))
                return defaultValue;

            if (node.Name != "array")
                return defaultValue;

            XmlNodeList reals = node.SelectNodes("real");
            if (reals == null)
                return defaultValue;

            return new Quaternion(
                 float.Parse(reals[0].InnerText, CultureInfo.InvariantCulture),
                 float.Parse(reals[1].InnerText, CultureInfo.InvariantCulture),
                -float.Parse(reals[2].InnerText, CultureInfo.InvariantCulture),
                -float.Parse(reals[3].InnerText, CultureInfo.InvariantCulture));
        }

        /// <summary>
        /// The filename of an image contained within the archive that can be used as a preview for the scanned object.
        /// </summary>
        public string imageReference { get; private set; }

        /// <summary>
        /// The reference origin for the scanned object.
        /// </summary>
        public Pose referenceOrigin { get; private set; }

        /// <summary>
        /// The filename of the source data representing the scanned object.
        /// </summary>
        public string trackingDataReference { get; private set; }

        /// <summary>
        /// The version of the metadata format.
        /// </summary>
        public int version { get; private set; }

        /// <summary>
        /// <c>true</c> if the <see cref="ARObjectInfo"/> represents valid data, otherwise <c>false</c>.
        /// </summary>
        public bool valid => version > 0;

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARObjectInfo"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="ARObjectInfo"/>, otherwise false.</returns>
        public bool Equals(ARObjectInfo other)
        {
            return
                string.Equals(imageReference, other.imageReference) &&
                referenceOrigin.Equals(other.referenceOrigin) &&
                string.Equals(trackingDataReference, other.trackingDataReference) &&
                (version == other.version);
        }

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="ARObjectInfo"/> and
        /// <see cref="Equals(ARObjectInfo)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj)
        {
            if (!(obj is ARObjectInfo))
                return false;

            return Equals((ARObjectInfo)obj);
        }

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode()
        {
            unchecked
            {
                var hash = (imageReference == null ? 0 : imageReference.GetHashCode());
                hash = hash * 486187739 + referenceOrigin.GetHashCode();
                hash = hash * 486187739 + (trackingDataReference == null ? 0 : trackingDataReference.GetHashCode());
                hash = hash * 486187739 + version.GetHashCode();
                return hash;
            }
        }

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARObjectInfo)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(ARObjectInfo lhs, ARObjectInfo rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(ARObjectInfo)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(ARObjectInfo lhs, ARObjectInfo rhs) => !lhs.Equals(rhs);
    }
}
