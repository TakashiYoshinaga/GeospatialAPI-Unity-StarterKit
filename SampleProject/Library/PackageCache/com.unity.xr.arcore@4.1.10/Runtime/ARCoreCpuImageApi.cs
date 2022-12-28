using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine.XR.ARSubsystems;

namespace UnityEngine.XR.ARCore
{
    internal class ARCoreCpuImageApi : XRCpuImage.Api
    {
        /// <summary>
        /// The type of image to acquire. Used by <see cref="ARCoreCpuImageApi.TryAcquireLatestImage"/>.
        /// </summary>
        public enum ImageType
        {
            Camera = 0,
            EnvironmentDepth = 1,
        }

        /// <summary>
        /// The shared API instance.
        /// </summary>
        public static ARCoreCpuImageApi instance { get; } = new ARCoreCpuImageApi();

        /// <summary>
        /// Tries to acquire the latest image of a particular type.
        /// </summary>
        /// <param name="imageType">The type of image to acquire.</param>
        /// <param name="cinfo">On success, populated with construction information information for a
        ///     <see cref="XRCpuImage"/>.</param>
        /// <returns>Returns `true` if the latest image of type <paramref name="imageType"/> was successfully acquired.
        ///     Returns `false` otherwise.</returns>
        public static bool TryAcquireLatestImage(ImageType imageType, out XRCpuImage.Cinfo cinfo)
            => NativeApi.UnityARCore_CpuImage_TryAcquireLatestImage(imageType, out cinfo);

        /// <summary>
        /// Get the status of an existing asynchronous conversion request.
        /// </summary>
        /// <param name="requestId">The unique identifier associated with a request.</param>
        /// <returns>The state of the request.</returns>
        /// <seealso cref="ConvertAsync(int, XRCpuImage.ConversionParams)"/>
        public override XRCpuImage.AsyncConversionStatus GetAsyncRequestStatus(int requestId)
            => NativeApi.UnityARCore_CpuImage_GetAsyncRequestStatus(requestId);

        /// <summary>
        /// Dispose an existing native image identified by <paramref name="nativeHandle"/>.
        /// </summary>
        /// <param name="nativeHandle">A unique identifier for this camera image.</param>
        /// <seealso cref="Provider.TryAcquireLatestCpuImage"/>
        public override void DisposeImage(int nativeHandle)
            => NativeApi.UnityARCore_CpuImage_DisposeImage(nativeHandle);

        /// <summary>
        /// Dispose an existing async conversion request.
        /// </summary>
        /// <param name="requestId">A unique identifier for the request.</param>
        /// <seealso cref="ConvertAsync(int, XRCpuImage.ConversionParams)"/>
        public override void DisposeAsyncRequest(int requestId)
            => NativeApi.UnityARCore_CpuImage_DisposeAsyncRequest(requestId);

        /// <summary>
        /// Get information about an image plane from a native image handle by index.
        /// </summary>
        /// <param name="nativeHandle">A unique identifier for this camera image.</param>
        /// <param name="planeIndex">The index of the plane to get.</param>
        /// <param name="planeCinfo">The returned camera plane information if successful.</param>
        /// <returns>
        /// <c>true</c> if the image plane was acquired. Otherwise, <c>false</c>.
        /// </returns>
        /// <seealso cref="Provider.TryAcquireLatestCpuImage"/>
        public override bool TryGetPlane(int nativeHandle, int planeIndex, out XRCpuImage.Plane.Cinfo planeCinfo)
            => NativeApi.UnityARCore_CpuImage_TryGetPlane(nativeHandle, planeIndex, out planeCinfo);

        /// <summary>
        /// Determine whether a native image handle returned by <see cref="Provider.TryAcquireLatestCpuImage"/> is currently
        /// valid. An image may become invalid if it has been disposed.
        /// </summary>
        /// <remarks>
        /// If a handle is valid, <see cref="TryConvert"/> and <see cref="TryGetConvertedDataSize"/> should not fail.
        /// </remarks>
        /// <param name="nativeHandle">A unique identifier for the camera image in question.</param>
        /// <returns><c>true</c>, if it is a valid handle. Otherwise, <c>false</c>.</returns>
        /// <seealso cref="DisposeImage"/>
        public override bool NativeHandleValid(int nativeHandle)
            => NativeApi.UnityARCore_CpuImage_HandleValid(nativeHandle);

        /// <summary>
        /// Get the number of bytes required to store an image with the iven dimensions and <c>TextureFormat</c>.
        /// </summary>
        /// <param name="nativeHandle">A unique identifier for the camera image to convert.</param>
        /// <param name="dimensions">The dimensions of the output image.</param>
        /// <param name="format">The <c>TextureFormat</c> for the image.</param>
        /// <param name="size">The number of bytes required to store the converted image.</param>
        /// <returns><c>true</c> if the output <paramref name="size"/> was set.</returns>
        public override bool TryGetConvertedDataSize(int nativeHandle, Vector2Int dimensions, TextureFormat format,
                                                     out int size)
            => NativeApi.UnityARCore_CpuImage_TryGetConvertedDataSize(nativeHandle, dimensions, format, out size);

        /// <summary>
        /// Convert the image with handle <paramref name="nativeHandle"/> using the provided
        /// <paramref cref="conversionParams"/>.
        /// </summary>
        /// <param name="nativeHandle">A unique identifier for the camera image to convert.</param>
        /// <param name="conversionParams">The parameters to use during the conversion.</param>
        /// <param name="destinationBuffer">A buffer to write the converted image to.</param>
        /// <param name="bufferLength">The number of bytes available in the buffer.</param>
        /// <returns>
        /// <c>true</c> if the image was converted and stored in <paramref name="destinationBuffer"/>.
        /// </returns>
        public override bool TryConvert(int nativeHandle, XRCpuImage.ConversionParams conversionParams,
                                        IntPtr destinationBuffer, int bufferLength)
            => NativeApi.UnityARCore_CpuImage_TryConvert(nativeHandle, conversionParams, destinationBuffer,
                                                         bufferLength);

        /// <summary>
        /// Create an asynchronous request to convert a camera image, similar to <see cref="TryConvert"/> except
        /// the conversion should happen on a thread other than the calling (main) thread.
        /// </summary>
        /// <param name="nativeHandle">A unique identifier for the camera image to convert.</param>
        /// <param name="conversionParams">The parameters to use during the conversion.</param>
        /// <returns>A unique identifier for this request.</returns>
        public override int ConvertAsync(int nativeHandle, XRCpuImage.ConversionParams conversionParams)
            => NativeApi.UnityARCore_CpuImage_CreateAsyncConversionRequest(nativeHandle, conversionParams);

        /// <summary>
        /// Get a pointer to the image data from a completed asynchronous request. This method should only succeed
        /// if <see cref="GetAsyncRequestStatus"/> returns <see cref="XRCpuImage.AsyncConversionStatus.Ready"/>.
        /// </summary>
        /// <param name="requestId">The unique identifier associated with a request.</param>
        /// <param name="dataPtr">A pointer to the native buffer containing the data.</param>
        /// <param name="dataLength">The number of bytes in <paramref name="dataPtr"/>.</param>
        /// <returns><c>true</c> if <paramref name="dataPtr"/> and <paramref name="dataLength"/> were set and point
        ///  to the image data.</returns>
        public override bool TryGetAsyncRequestData(int requestId, out IntPtr dataPtr, out int dataLength)
            => NativeApi.UnityARCore_CpuImage_TryGetAsyncRequestData(requestId, out dataPtr, out dataLength);

        /// <summary>
        /// Similar to <see cref="ConvertAsync(int, XRCpuImage.ConversionParams)"/> but takes a delegate to
        /// invoke when the request is complete, rather than returning a request id.
        /// </summary>
        /// <remarks>
        /// If the first parameter to <paramref name="callback"/> is
        /// <see cref="XRCpuImage.AsyncConversionStatus.Ready"/> then the <c>dataPtr</c> parameter must be valid
        /// for the duration of the invocation. The data may be destroyed immediately upon return. The
        /// <paramref name="context"/> parameter must be passed back to the <paramref name="callback"/>.
        /// </remarks>
        /// <param name="nativeHandle">A unique identifier for the camera image to convert.</param>
        /// <param name="conversionParams">The parameters to use during the conversion.</param>
        /// <param name="callback">A delegate which must be invoked when the request is complete, whether the
        /// conversion was successfully or not.</param>
        /// <param name="context">A native pointer which must be passed back unaltered to
        /// <paramref name="callback"/>.</param>
        public override void ConvertAsync(int nativeHandle, XRCpuImage.ConversionParams conversionParams,
                                          XRCpuImage.Api.OnImageRequestCompleteDelegate callback, IntPtr context)
            => NativeApi.UnityARCore_CpuImage_CreateAsyncConversionRequestWithCallback(nativeHandle, conversionParams,
                                                                                       callback, context);

        static readonly HashSet<TextureFormat> s_SupportedVideoConversionFormats = new HashSet<TextureFormat>
        {
            TextureFormat.Alpha8,
            TextureFormat.R8,
            TextureFormat.R16,
            TextureFormat.RFloat,
            TextureFormat.RGB24,
            TextureFormat.RGBA32,
            TextureFormat.ARGB32,
            TextureFormat.BGRA32,
        };

        /// <summary>
        /// Determines whether a given
        /// [`TextureFormat`](https://docs.unity3d.com/ScriptReference/TextureFormat.html) is supported for image
        /// conversion.
        /// </summary>
        /// <param name="image">The <see cref="XRCpuImage"/> to convert.</param>
        /// <param name="format">The [`TextureFormat`](https://docs.unity3d.com/ScriptReference/TextureFormat.html)
        ///     to test.</param>
        /// <returns>Returns `true` if <paramref name="image"/> can be converted to <paramref name="format"/>.
        ///     Returns `false` otherwise.</returns>
        public override bool FormatSupported(XRCpuImage image, TextureFormat format)
            => (((image.format == XRCpuImage.Format.AndroidYuv420_888) || (image.format == XRCpuImage.Format.DepthUint16))
                && s_SupportedVideoConversionFormats.Contains(format));

        static class NativeApi
        {
            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_TryAcquireLatestImage(ImageType imageType,
                                                                                 out XRCpuImage.Cinfo cameraImageCinfo);

            [DllImport("UnityARCore")]
            public static extern XRCpuImage.AsyncConversionStatus
                UnityARCore_CpuImage_GetAsyncRequestStatus(int requestId);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_CpuImage_DisposeImage(int nativeHandle);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_CpuImage_DisposeAsyncRequest(int requestHandle);

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_TryGetPlane(int nativeHandle, int planeIndex,
                                                                       out XRCpuImage.Plane.Cinfo planeCinfo);

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_HandleValid(int nativeHandle);

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_TryGetConvertedDataSize(int nativeHandle, Vector2Int dimensions,
                                                                                   TextureFormat format, out int size);

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_TryConvert(int nativeHandle,
                                                                      XRCpuImage.ConversionParams conversionParams,
                                                                      IntPtr buffer, int bufferLength);

            [DllImport("UnityARCore")]
            public static extern int UnityARCore_CpuImage_CreateAsyncConversionRequest(int nativeHandle,
                                                                                       XRCpuImage.ConversionParams conversionParams);

            [DllImport("UnityARCore")]
            public static extern bool UnityARCore_CpuImage_TryGetAsyncRequestData(int requestHandle, out IntPtr dataPtr,
                                                                                  out int dataLength);

            [DllImport("UnityARCore")]
            public static extern void UnityARCore_CpuImage_CreateAsyncConversionRequestWithCallback(
                int nativeHandle, XRCpuImage.ConversionParams conversionParams,
                XRCpuImage.Api.OnImageRequestCompleteDelegate callback, IntPtr context);
        }
    }
}
