Shader "Sample/CullOff"
{
    Properties
    {
        [NoScaleOffset]
        _MainTex("Texture", 2D) = "white" {}
        _Color("Color Property", Color) = (1, 0, 0, 1)
    }
    SubShader
    {
        Tags {
            "Queue" = "Transparent"
            "RenderType" = "Transparent"
        }
        Blend SrcAlpha OneMinusSrcAlpha
        Cull Off
        Pass
        {
            CGPROGRAM

            #pragma vertex   vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv     : TEXCOORD;
            };

            struct v2f
            {
                float4 vertex : SV_POSITION;
                float2 uv     : TEXCOORD;
            };

            sampler2D _MainTex;
            fixed4 _Color;
            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv     = v.uv;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                //こうすることで不透明な画像も_Colorで設定したalphaの影響を受けて半透明化できる。

                fixed4 color = tex2D(_MainTex, i.uv)*_Color;

                //Discardで描画しない

                if(color.a<=0){
                    discard;
                }
                return color;
            }

            ENDCG
        }
    }
}