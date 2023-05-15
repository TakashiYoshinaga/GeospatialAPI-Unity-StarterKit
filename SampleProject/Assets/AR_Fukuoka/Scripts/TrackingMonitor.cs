using System;
using Google.XR.ARCoreExtensions;
using Google.XR.ARCoreExtensions.Samples.Geospatial;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
namespace AR_Fukuoka
{
    public class TrackingMonitor : MonoBehaviour
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
            else //The case where the tracking accuracy is better than the threshold (the value is small)
            {
                status = "High Tracking Accuracy";
            }
            //Show the result
            ShowTrackingInfo(status, pose);
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