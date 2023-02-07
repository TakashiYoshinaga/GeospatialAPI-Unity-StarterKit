# ARCore GeospatialAPI Unity StarterKit
## SDK
This sample project is compatible with ARCore Extensions for AR Foundation v1.35.0. <br>
https://github.com/google-ar/arcore-unity-extensions/releases/tag/v1.35.0
## SampleScenes
### 0-TrackingStateMonitoring
The latitude, longitude, altitude, and azimuth of your smartphone and the accuracy of these are displayed on a screen.<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/0-demo.png" width="320" />

### 1-PlacingObjectAt_LatLngAlt
Show a object with AR at the latitude, longitude, and altitude specified on the Inspector in UnityEditor.<br>
For Altitude, you can choose manual input or terrain provided by Geospatial API.<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/1-demo.png" width="320" />

### 2-TapToPlace
Placement of a object and saving its latitude, longitude, and altitude and local position.<br>
Reproduction of position of a object at the same position of the real world.<br>
Click below to play the demo video.<br>
[![](https://img.youtube.com/vi/2O2_O5hTguc/0.jpg)](https://www.youtube.com/watch?v=2O2_O5hTguc)
<br><br>

# Required Setup
## Build Setting
[File]->[BuildSettings]
<br>
Select your development platform (Android/iOS) and click [Switch Platform].
<br>
## API Key
[Edit]->[ProjectSettings]->[XR Plug-in Management]->[ARCore Extensions]
<br>
Enter an API key created on Google Cloud Platform.
<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/api.png" width="320" />
<br>
See [Set up a Google Cloud Project] of the official website for how to create an API Key.
<br>
https://developers.google.com/ar/develop/c/geospatial/developer-guide
<br>

## Set latitude and longitude to display objects
If you try the scene named 1-PlacingObjectAt_LatLngAlt , you need to specify the latitude, longitude and height on the VPS_Demo object inspector.<br>
Height should be calculated as geoid height + elevation.<br>
[GeoidCalculator]<br>
https://geographiclib.sourceforge.io/cgi-bin/GeoidEval

[elevetion]<br>
Please search app or web service to provide elevation at the specified point of your country.
<br><br>

# Slide deck of tutorial
I held a tutorial event about how to use ARCore Geospatial API in Japan.<br>
A part of tutorial was translated into English. It'll be great if it's helpful for your studying.<br>
https://www.docswell.com/s/Tks_Yoshinaga/5664V5-geospatial-api-en

<br><br>
