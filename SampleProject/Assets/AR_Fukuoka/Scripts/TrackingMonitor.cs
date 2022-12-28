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

        // Update is called once per frame
        void Update()
        {        
            //初期化失敗またはトラッキングができていない場合は何もしないで戻る
            if (!Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
            {
                return;
            }
            //トラッキングの状態を表示する際に使用
            string status = "";
            //トラッキング結果を取得
            GeospatialPose pose = EarthManager.CameraGeospatialPose;
            //トラッキング精度がthresholdより悪い(値が大きい)場合
            if (pose.OrientationYawAccuracy > HeadingThreshold ||
                 pose.HorizontalAccuracy > HorizontalThreshold)
            {
                status = "低精度：周辺を見回してください";
            }
            else //許容誤差以内の場合
            {
                status = "高精度：High Tracking Accuracy";
            }
            //結果を表示
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