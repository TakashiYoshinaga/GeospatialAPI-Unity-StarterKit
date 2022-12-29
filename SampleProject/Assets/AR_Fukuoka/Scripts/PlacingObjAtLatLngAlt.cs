using System;
using Google.XR.ARCoreExtensions;
using Google.XR.ARCoreExtensions.Samples.Geospatial;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
namespace AR_Fukuoka
{
    public class PlacingObjAtLatLngAlt : MonoBehaviour
    {
         //Tracking information using GeospatialAPI
        [SerializeField] AREarthManager EarthManager;
        //Used for initializing ARCore and GeospatialAPI
        [SerializeField] VpsInitializer Initializer;
        //UI for displaying the tracking result
        [SerializeField] Text OutputText;
        //Heading accuracy (change the value in the Inspector)
        [SerializeField] double HeadingThreshold = 25;
        //Horizontal position accuracy (change the value in the Inspector)
        [SerializeField] double HorizontalThreshold = 20;

        //Latitude of the object to be placed
        [SerializeField] double Latitude;
        //Longitude of the object to be placed
        [SerializeField] double Longitude;
        //Altitude of the object to be placed [m] (geoid height + elevation. See AR_Fukuoka/elevation.txt for how to calculate)
        [SerializeField] double Altitude;
        //Flag to force the object to be placed on the ground. (If false, the object will be placed at the altitude specified by Altitude)
        [SerializeField] bool ForcePutOnTerrain = false;
        //Heading of the object (North = 0°)
        [SerializeField] double Heading;
        //The original data of the object to be displayed
        [SerializeField] GameObject ContentPrefab;
        //The object to be displayed
        GameObject displayObject;
        //Manager for creating anchors
        [SerializeField] ARAnchorManager AnchorManager;
        bool initialized = false;
        

        // Update is called once per frame
        void Update()
        {
            //Return if initialization failed or tracking is not available
            if (!Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
            {
                return;
            }
            //Tracking status to be displayed
            string status = "";
            //Get the tracking result
            GeospatialPose pose = EarthManager.CameraGeospatialPose;
            //The case where the tracking accuracy is worse than the threshold (the value is large)
            if (pose.OrientationYawAccuracy > HeadingThreshold ||
                  pose.HorizontalAccuracy > HorizontalThreshold)
            {
                status = "Low Tracking Accuracy： Please look arround.";
            }
            else
            {
                status = "High Tracking Accuracy";
                if (!initialized)
                {
                    initialized = true;
                    //Create and place a virtual object.
                    SpawnObject(pose, ContentPrefab);
                }
            }
            //Display the tracking result
            ShowTrackingInfo(status, pose);
        }

        //Instantiate the object to be displayed
        void SpawnObject(GeospatialPose pose,GameObject prefab)
        {
            //角度の補正
            //Create a rotation quaternion that has the +Z axis pointing in the same direction as the heading value (heading=0 means north direction)
            //https://developers.google.com/ar/develop/unity-arf/geospatial/developer-guide-android#place_a_geospatial_anchor
            Quaternion quaternion = Quaternion.AngleAxis(180f - (float)Heading, Vector3.up);

            //Create an anchor at the specified latitude, longitude, and altitude
            ARGeospatialAnchor anchor = ForcePutOnTerrain ?
                AnchorManager.ResolveAnchorOnTerrain(Latitude, Longitude, 0, quaternion) :
                AnchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion);
            
            //Instantiate the object if the anchor is created successfully
            if (anchor != null)
            {
                displayObject = Instantiate(ContentPrefab, anchor.transform);
            }
        }
        void ShowTrackingInfo(string status, GeospatialPose pose)
        {
            if (OutputText == null) return;
            OutputText.text = string.Format(
               "\n" +
               "Latitude/Longitude: {0}°, {1}°\n" +
               "Horizontal Accuracy: {2}m\n" +
               "Altitude: {3}m\n" +
               "Vertical Accuracy: {4}m\n" +
               "Heading: {5}°\n" +
               "Heading Accuracy: {6}°\n" +
               "{7} \n"
               ,
               pose.Latitude.ToString("F6"),  //{0}
               pose.Longitude.ToString("F6"), //{1}
               pose.HorizontalAccuracy.ToString("F6"), //{2}
               pose.Altitude.ToString("F2"),  //{3}
               pose.VerticalAccuracy.ToString("F2"),  //{4}
               pose.EunRotation.ToString("F1"),   //{5}
               pose.OrientationYawAccuracy.ToString("F1"),   //{6}
               status //{7}
           );
        }
    }
}