# GeospatialAPI-Unity-StarterKit
# サンプル
## 0-TrackingStateMonitoring
緯度・経度・高度・方位と精度が表示されます<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/0-demo.png" width="320" />

## 1-PlacingObjectAt_LatLngAlt
UnityEditorのInspector上で指定した緯度・経度・高度にオブジェクトを表示します<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/1-demo.png" width="320" />
<br><br>

# 各自で行う設定事項
## Build設定
[File]->[BuildSettings]
<br>
開発プラットフォーム(Android/iOS)を選択して[Switch Platform]をクリック。
<br>
## API Key設定
[Edit]->[ProjectSettings]->[XR Plug-in Management]->[ARCore Extensions]
<br>
Google Cloud Platformで作成したAPIキーを入力。
<br>
<img src="https://github.com/TakashiYoshinaga/GeospatialAPI-Unity-StarterKit/raw/AR_Fukuoka-20220604/Materials/api.png" width="320" />

<br>
API Keyの作り方は下記資料のGoogleCloud Platformの設定を参照。
<br>
https://github.com/TakashiYoshinaga/AR-Fukuoka/raw/main/GeospatialAPI_20220604/geospatial_preparation.pdf
<br>

## オブジェクトの表示位置設定
1-PlacingObjectAt_LatLngAltを試す場合、VPS_Demoオブジェクトのインスペクタ上で緯度・経度・高さを指定。<br>
高さはひとまずジオイド高+標高で計算してみましょう。下記資料の最後の数ページに方法は記載しています。<br>
https://www.docswell.com/s/Tks_Yoshinaga/Z86Q2K-geospatial-api

