//-----------------------------------------------------------------------
// <copyright file="HelpAttributeDrawer.cs" company="Google LLC">
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

namespace Google.XR.ARCoreExtensions.Editor.Internal
{
    using System;
    using System.Reflection;
    using Google.XR.ARCoreExtensions.Internal;
    using UnityEditor;
    using UnityEngine;

    /// <summary>
    /// HelpAttribute drawer that draws a HelpBox below the property to display the help content.
    /// </summary>
    [CustomPropertyDrawer(typeof(HelpAttribute))]
    public class HelpAttributeDrawer : PropertyDrawer
    {
        private const float _iconOffset = 40;

        /// <summary>
        /// Override Unity GetPropertyHeight to specify how tall the GUI for this field is
        /// in pixels.
        /// </summary>
        /// <param name="property">The SerializedProperty to make the custom GUI for.</param>
        /// <param name="label">The label of this property.</param>
        /// <returns>The height in pixels.</returns>
        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            if (IsHelpBoxEmpty(property))
            {
                return GetOriginalPropertyHeight(property, label);
            }

            return GetOriginalPropertyHeight(property, label) + GetHelpAttributeHeight(property) +
                EditorStyles.helpBox.padding.vertical;
        }

        /// <summary>
        /// Override Unity OnGUI to make a custom GUI for the property with HelpAttribute.
        /// </summary>
        /// <param name="position">Rectangle on the screen to use for the property GUI.</param>
        /// <param name="property">The SerializedProperty to make the custom GUI for.</param>
        /// <param name="label">The label of this property.</param>
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            EditorGUI.BeginProperty(position, label, property);
            Rect labelPosition = position;
            float labelHeight = base.GetPropertyHeight(property, label);
            float propertyHeight = GetOriginalPropertyHeight(property, label);
            labelPosition.height = labelHeight;

            // Draw property based on default Unity GUI behavior.
            string warningMessage = GetIncompatibleAttributeWarning(property);
            if (!string.IsNullOrEmpty(warningMessage))
            {
                var warningContent = new GUIContent(warningMessage);
                EditorGUI.LabelField(labelPosition, label, warningContent);
            }
            else if (GetPropertyAttribute<TextAreaAttribute>() != null)
            {
                Rect textAreaPosition = position;
                textAreaPosition.y += labelHeight;
                textAreaPosition.height = propertyHeight - labelHeight;
                EditorGUI.LabelField(labelPosition, label);
                EditorGUI.BeginChangeCheck();
                string text = EditorGUI.TextArea(textAreaPosition, property.stringValue);
                if (EditorGUI.EndChangeCheck())
                {
                    property.stringValue = text;
                }
            }
            else if (GetPropertyAttribute<MultilineAttribute>() != null)
            {
                Rect multilinePosition = position;
                multilinePosition.x += EditorGUIUtility.labelWidth;
                multilinePosition.width -= EditorGUIUtility.labelWidth;
                multilinePosition.height = propertyHeight;
                EditorGUI.LabelField(labelPosition, label);
                EditorGUI.BeginChangeCheck();
                string text = EditorGUI.TextArea(multilinePosition, property.stringValue);
                if (EditorGUI.EndChangeCheck())
                {
                    property.stringValue = text;
                }
            }
            else if (GetPropertyAttribute<RangeAttribute>() != null)
            {
                var rangeAttribute = GetPropertyAttribute<RangeAttribute>();
                if (property.propertyType == SerializedPropertyType.Integer)
                {
                    EditorGUI.IntSlider(labelPosition, property,
                        (int)rangeAttribute.min, (int)rangeAttribute.max, label);
                }
                else
                {
                    EditorGUI.Slider(labelPosition, property,
                        rangeAttribute.min, rangeAttribute.max, label);
                }
            }
            else if (GetPropertyAttribute<EnumFlagsAttribute>() != null)
            {
                var flagsAttribute = GetPropertyAttribute<EnumFlagsAttribute>();
                string[] itemNames = Enum.GetNames(flagsAttribute.EnumType);
                int[] itemValues = Enum.GetValues(flagsAttribute.EnumType) as int[];

                property.intValue =
                     EditorGUI.MaskField(position, label, property.intValue, itemNames);

                if (property.intValue == -1)
                {
                    int maskValue = 0;
                    foreach (int itemValue in itemValues)
                    {
                        maskValue |= itemValue;
                    }

                    property.intValue = maskValue;
                }
            }
            else
            {
                EditorGUI.PropertyField(labelPosition, property);
            }

            if (!IsHelpBoxEmpty(property))
            {
                var helpBoxPosition = position;
                helpBoxPosition.y += propertyHeight + EditorStyles.helpBox.padding.top;
                helpBoxPosition.height = GetHelpAttributeHeight(property);
                EditorGUI.HelpBox(helpBoxPosition, GetHelpAttribute(property).HelpMessage,
                    (MessageType)GetHelpAttribute(property).MessageType);
            }

            EditorGUI.EndProperty();
        }

        /// <summary>
        /// Get the underlying <see cref="HelpAttribute"/> of this drawer.
        /// </summary>
        /// <param name="property">The target SerializedProperty.</param>
        /// <returns>The HelpAttribute of the given property.</returns>
        protected virtual HelpAttribute GetHelpAttribute(SerializedProperty property)
        {
            return attribute as HelpAttribute;
        }

        private bool IsHelpBoxEmpty(SerializedProperty property)
        {
            return string.IsNullOrEmpty(GetHelpAttribute(property)?.HelpMessage);
        }

        private bool IsIconVisible(SerializedProperty property)
        {
            return GetHelpAttribute(property).MessageType != HelpAttribute.HelpMessageType.None;
        }

        private T GetPropertyAttribute<T>() where T : PropertyAttribute
        {
            var attributes = fieldInfo.GetCustomAttributes(typeof(T), true);
            return attributes != null && attributes.Length > 0 ? (T)attributes[0] : null;
        }

        private float GetOriginalPropertyHeight(SerializedProperty property, GUIContent label)
        {
            float labelHeight = base.GetPropertyHeight(property, label);
            string warningMessage = GetIncompatibleAttributeWarning(property);
            if (!string.IsNullOrEmpty(warningMessage))
            {
                return labelHeight;
            }

            // Calculate property height for TextArea attribute.
            // TextArea is below property label.
            var textAreaAttribute = GetPropertyAttribute<TextAreaAttribute>();
            if (textAreaAttribute != null)
            {
                var textAreaContent = new GUIContent(property.stringValue);
                var textAreaStyle = new GUIStyle(EditorStyles.textArea);
                var minHeight = (textAreaAttribute.minLines * textAreaStyle.lineHeight) +
                    textAreaStyle.margin.vertical;
                var maxHeight = (textAreaAttribute.maxLines * textAreaStyle.lineHeight) +
                    textAreaStyle.margin.vertical;
                var textAreaHeight = textAreaStyle.CalcHeight(
                    textAreaContent, EditorGUIUtility.currentViewWidth);
                textAreaHeight = Mathf.Max(textAreaHeight, minHeight);
                textAreaHeight = Mathf.Min(textAreaHeight, maxHeight);

                return labelHeight + textAreaHeight;
            }

            // Calculate property height for Multiline attribute.
            // Multiline is on the same line of property label.
            var multilineAttribute = GetPropertyAttribute<MultilineAttribute>();
            if (multilineAttribute != null)
            {
                var textFieldStyle = new GUIStyle(EditorStyles.textField);
                var multilineHeight = (textFieldStyle.lineHeight * multilineAttribute.lines) +
                    textFieldStyle.margin.vertical;

                return Mathf.Max(labelHeight, multilineHeight);
            }

            return labelHeight;
        }

        [System.Diagnostics.CodeAnalysis.SuppressMessage(
            "UnityRules.UnityStyleRules",
            "US1300:LinesMustBe100CharactersOrShorter",
            Justification = "Unity issue URL length > 100")]
        private float GetTextAreaWidth()
        {
            // Use reflection to determine contextWidth, to workaround the following Unity issue:
            // https://issuetracker.unity3d.com/issues/decoratordrawers-ongui-rect-has-a-different-width-compared-to-editorguiutility-dot-currentviewwidth
            float contextWidth = (float)typeof(EditorGUIUtility)
                .GetProperty("contextWidth", BindingFlags.NonPublic | BindingFlags.Static)
                .GetValue(null, null);

            float textAreaWidth = contextWidth -
                EditorStyles.inspectorDefaultMargins.padding.horizontal;

            // In Unity 2019.1 and later context width must be further reduced by
            // up to 4px when the inspector window is docked inside the main editor:
            // - 2px border when docked inside the editor with an adjacent window to the left
            // - 2px border when docked inside the editor with an adjacent window to the right
            textAreaWidth -= 4;
            return textAreaWidth;
        }

        private float GetHelpAttributeHeight(SerializedProperty property)
        {
            float attributeHeight = 0;
            if (IsHelpBoxEmpty(property))
            {
                return attributeHeight;
            }

            var content = new GUIContent(GetHelpAttribute(property).HelpMessage);
            var iconOffset = IsIconVisible(property) ? _iconOffset : 0;
            float textAreaWidth = GetTextAreaWidth();

            // When HelpBox icon is visble, part of the width is occupied by the icon.
            attributeHeight = EditorStyles.helpBox.CalcHeight(content, textAreaWidth - iconOffset);

            // When HelpBox icon is visble, HelpAttributeHeight should as least
            // be the icon offset to prevent icon shrinking.
            attributeHeight = Mathf.Max(attributeHeight, iconOffset);

            return attributeHeight;
        }

        private string GetIncompatibleAttributeWarning(SerializedProperty property)
        {
            // Based on Unity default behavior, potential incompatible attributes have
            // following priorities: TextAreaAttribute > MultilineAttribute > RangeAttribute.
            // If higher priority exists, lower one will be ignored.
            if (GetPropertyAttribute<TextAreaAttribute>() != null)
            {
                return property.propertyType == SerializedPropertyType.String ?
                    null : "Use TextArea with string.";
            }

            if (GetPropertyAttribute<MultilineAttribute>() != null)
            {
                return property.propertyType == SerializedPropertyType.String ?
                    null : "Use Multiline with string.";
            }

            if (GetPropertyAttribute<RangeAttribute>() != null)
            {
                return property.propertyType == SerializedPropertyType.Float ||
                    property.propertyType == SerializedPropertyType.Integer ?
                    null : "Use Range with float or int.";
            }

            return null;
        }
    }
}
