# GeospatialAPI-Unity-StarterKit
## SampleScenes
### 0-TrackingStateMonitoring
The latitude, longitude, altitude, and azimuth of your smartphone and the accuracy of these are displayed on a screen.<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/0-demo.png" width="320" />

### 1-PlacingObjectAt_LatLngAlt
Show a object with AR at the latitude, longitude, and altitude specified on the Inspector in UnityEditor.<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/1-demo.png" width="320" />
<br><br><br>

# Setup items to be done by each
## Build Setting
[File]->[BuildSettings]
<br>
Select your development platform (Android/iOS) and click [Switch Platform].
<br>
## API Key
[Edit]->[ProjectSettings]->[XR Plug-in Management]->[ARCore Extensions]
<br>
Enter a API key created on Google Cloud Platform.
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
