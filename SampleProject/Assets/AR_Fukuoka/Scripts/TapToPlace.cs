using System;
using System.Collections;
using System.Collections.Generic;
using Google.XR.ARCoreExtensions;
using Google.XR.ARCoreExtensions.Samples.Geospatial;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
namespace AR_Fukuoka
{
    public class TapToPlace : MonoBehaviour
    {
        //GeospatialAPIを用いたトラッキング情報
        [SerializeField] AREarthManager EarthManager;
        //GeospatialAPIとARCoreの初期化と結果
        [SerializeField] VpsInitializer Initializer;
        //結果表示用のUI 
        [SerializeField] Text OutputText;
        //方位の許容精度(値の変更はInspectorから)
        [SerializeField] double HeadingThreshold = 25;
        //水平位置の許容精度(値の変更はInspectorから)
        [SerializeField] double HorizontalThreshold = 20;
        [SerializeField] ARRaycastManager RaycastManager;
        //表示オブジェクトの元データ
        [SerializeField] GameObject ContentPrefab;
        //実際に表示するオブジェクト
        GameObject displayObject;
        //アンカー作成に使用
        [SerializeField] ARAnchorManager AnchorManager;

        string anchorKey = "earth_data";
        string positionKey = "local_position";

        bool initialized = false;
        // Update is called once per frame
        void Update()
        {
            // Return without doing anything if initialization fails or tracking is not  working
            if (!Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
            {
                return;
            }

            string status = "";
            //Get tracking results
            GeospatialPose pose = EarthManager.CameraGeospatialPose;
            if (
               pose.OrientationYawAccuracy > HeadingThreshold ||
               pose.HorizontalAccuracy > HorizontalThreshold)
            {
                status = "Low Accuracy：Look around the area.";
            }
            else
            {
                status = "High Accuracy：Tap to place object!";
                if (!initialized)
                {
                    initialized = true;
                    StartCoroutine( LoadAndCreateObject());
                }
                else
                {
                    //Set and save position of displayObject
                    TapToPlaceObject(pose);
                }
            }
            ShowTrackingInfo(status, pose);
        }

        private void TapToPlaceObject(GeospatialPose pose)
        {
#if UNITY_EDITOR
            if (EventSystem.current.IsPointerOverGameObject())
            {
                return;
            }
#else 
    if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId)) {
        return;
    }
#endif
            if (Input.touchCount == 0 || Input.GetTouch(0).phase != TouchPhase.Ended || displayObject == null)
            {
                return;
            }
            List<ARRaycastHit> hits = new List<ARRaycastHit>();
            //Calculate the tap position inside the recognized plane.
            if (RaycastManager.Raycast(Input.GetTouch(0).position, hits, TrackableType.PlaneWithinPolygon))
            {
                //Place and anchoring displayObject. 
                StartCoroutine(AnchoringAndSave(hits[0], displayObject.transform, pose));
            }
        }
        IEnumerator AnchoringAndSave(ARRaycastHit hit, Transform displayObjTransform, GeospatialPose pose)
        {
            Pose hitPose = hit.pose;
            displayObjTransform.position = hitPose.position;

            //Create a rotation quaternion that has the +Z axis pointing in the same direction as the heading value (heading=0 means north direction)
            //https://developers.google.com/ar/develop/unity-arf/geospatial/developer-guide-android#place_a_geospatial_anchor
            //Quaternion quaternion = Quaternion.AngleAxis(180f - (float)pose.Heading, Vector3.up);
            Quaternion quaternion = pose.EunRotation;
            
#if UNITY_IOS
            // Update the quaternion from landscape orientation to portrait orientation.
            if(Screen.orientation==ScreenOrientation.Portrait ||Screen.orientation==ScreenOrientation.PortraitUpsideDown ){
                Quaternion q = Quaternion.Euler(Vector3.forward * 90);
                quaternion = quaternion * q;
            }
#endif
            //Generate an anchor.
            ARGeospatialAnchor anchor = AnchorManager.AddAnchor(pose.Latitude, pose.Longitude, pose.Altitude, quaternion);
            //After anchor generation, the position of the object relative to the anchor is determined and saved.
            if (anchor != null)
            {
                //Wait a bit because orientation is not stable for a few frames after the anchor is made.
                yield return new WaitForSeconds(1.0f);
                //Set parent-child relationship between object and anchor, then discard old anchor
                Transform prevAnchor = displayObjTransform.parent;
                displayObjTransform.SetParent(anchor.transform);
                if (prevAnchor != null)
                {
                    Destroy(prevAnchor.gameObject);
                }

                //保存
                GeospatialAnchorHistory history = new GeospatialAnchorHistory(DateTime.Now,pose.Latitude,pose.Longitude,pose.Altitude,AnchorType.Terrain, pose.EunRotation);
                PlayerPrefs.SetString(positionKey, JsonUtility.ToJson(displayObjTransform.localPosition));
                PlayerPrefs.SetString(anchorKey, JsonUtility.ToJson(history));
                PlayerPrefs.Save();
            }
        }
        IEnumerator LoadAndCreateObject()
        {
            displayObject = Instantiate(ContentPrefab);
            //Put object 4m forward tentively
            displayObject.transform.position = new Vector3(0, 0, 4);
            displayObject.transform.rotation=Quaternion.identity;
            if (PlayerPrefs.HasKey(anchorKey) && PlayerPrefs.HasKey(positionKey))
            {
                GeospatialAnchorHistory history = JsonUtility.FromJson<GeospatialAnchorHistory>(PlayerPrefs.GetString(anchorKey));
                Quaternion quaternion = history.EunRotation;//Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
#if UNITY_IOS
                // Update the quaternion from landscape orientation to portrait orientation.
                if(Screen.orientation==ScreenOrientation.Portrait ||Screen.orientation==ScreenOrientation.PortraitUpsideDown ){
                    Quaternion q = Quaternion.Euler(Vector3.forward * 90);
                    quaternion = quaternion * q;
                }
#endif
                ARGeospatialAnchor anchor = AnchorManager.AddAnchor(history.Latitude, history.Longitude, history.Altitude, quaternion);          
                if (anchor != null)
                {
                    yield return new WaitForSeconds(1.0f);
                    displayObject.transform.SetParent(anchor.transform);
                    displayObject.transform.localPosition = JsonUtility.FromJson<Vector3>(PlayerPrefs.GetString(positionKey));
                }
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
        public void QuitApp()
        {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#else
      UnityEngine.Application.Quit();
#endif
        }

    }
}