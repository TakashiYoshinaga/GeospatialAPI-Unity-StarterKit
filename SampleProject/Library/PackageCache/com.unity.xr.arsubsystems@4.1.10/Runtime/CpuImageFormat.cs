namespace UnityEngine.XR.ARSubsystems
{
    public partial struct XRCpuImage
    {
        /// <summary>
        /// Formats used by the raw <see cref="XRCpuImage"/> data. See <see cref="XRCpuImage.format"/>.
        /// </summary>
        public enum Format
        {
            /// <summary>
            /// The format is unknown or could not be determined.
            /// </summary>
            Unknown = 0,

            /// <summary>
            /// <para>Three-Plane YUV 420 format commonly used by Android. See
            /// <a href="https://developer.android.com/ndk/reference/group/media#group___media_1gga9c3dace30485a0f28163a882a5d65a19aea9797f9b5db5d26a2055a43d8491890">
            /// AIMAGE_FORMAT_YUV_420_888</a>.</para>
            /// <para>This format consists of three image planes. The first is the Y (luminocity) plane, with 8 bits per
            /// pixel. The second and third are the U and V (chromaticity) planes, respectively. Each 2x2 block of pixels
            /// share the same chromaticity value, so a given (x, y) pixel's chromaticity value is given by
            /// <code>
            /// u = UPlane[(y / 2) * rowStride + (x / 2) * pixelStride];
            /// v = VPlane[(y / 2) * rowStride + (x / 2) * pixelStride];
            /// </code></para>
            /// </summary>
            AndroidYuv420_888 = 1,

            /// <summary>
            /// <para>Bi-Planar Component Y'CbCr 8-bit 4:2:0, full-range (luma=[0,255] chroma=[1,255]) commonly used by
            /// iOS. See
            /// <a href="https://developer.apple.com/documentation/corevideo/1563591-pixel_format_identifiers/kcvpixelformattype_420ypcbcr8biplanarfullrange">
            /// kCVPixelFormatType_420YpCbCr8BiPlanarFullRange</a>.</para>
            /// <para>This format consists of two image planes. The first is the Y (luminocity) plane, with 8 bits per
            /// pixel. The second plane is the UV (chromaticity) plane. The U and V chromaticity values are interleaved
            /// (u0, v0, u1, v1, etc.). Each 2x2 block of pixels share the same chromaticity values, so a given (x, y)
            /// pixel's chromaticity value is given by
            /// <code>
            /// u = UvPlane[(y / 2) * rowStride + (x / 2) * pixelStride];
            /// v = UvPlane[(y / 2) * rowStride + (x / 2) * pixelStride + 1];
            /// </code>
            /// pixelStride is always 2 for this format, so this can be optimized to
            /// <code>
            /// u = UvPlane[(y >> 1) * rowStride + x &amp; ~1];
            /// v = UvPlane[(y >> 1) * rowStride + x | 1];
            /// </code></para>
            /// </summary>
            IosYpCbCr420_8BiPlanarFullRange = 2,

            /// <summary>
            /// A single channel image format with 8 bits per pixel.
            /// </summary>
            OneComponent8 = 3,

            /// <summary>
            /// IEEE754-2008 binary32 float, describing the depth (distance to an object) in meters
            /// </summary>
            DepthFloat32 = 4,

            /// <summary>
            /// 16-bit unsigned integer, describing the depth (distance to an object) in millimeters.
            /// </summary>
            DepthUint16 = 5,
        }
    }

    /// <summary>
    /// Extensions to the <see cref="XRCpuImage.Format"/> enum.
    /// </summary>
    public static class XRCpuImageFormatExtensions
    {
        /// <summary>
        /// Attempts to convert an <see cref="XRCpuImage.Format"/> to a `UnityEngine.TextureFormat`.
        /// </summary>
        /// <param name="this">The <see cref="XRCpuImage.Format"/> being extended.</param>
        /// <returns>Returns a `TextureFormat` that matches <paramref name="this"/> if possible. Returns 0 if there
        ///     is no matching `TextureFormat`.</returns>
        public static TextureFormat AsTextureFormat(this XRCpuImage.Format @this)
        {
            switch (@this)
            {
                case XRCpuImage.Format.OneComponent8: return TextureFormat.R8;
                case XRCpuImage.Format.DepthFloat32: return TextureFormat.RFloat;
                case XRCpuImage.Format.DepthUint16: return TextureFormat.RFloat;
                default: return 0;
            }
        }
    }
}
