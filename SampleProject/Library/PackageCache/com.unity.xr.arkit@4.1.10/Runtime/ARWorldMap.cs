using System;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;

namespace UnityEngine.XR.ARKit
{
    /// <summary>
    /// The space-mapping state and set of planes and anchors from
    /// an AR session. This is a wrapper for
    /// <a href="https://developer.apple.com/documentation/arkit/arworldmap">ARKit's ARWorldMap</a>
    /// Note: The <c>ARWorldMap</c> must be explicitly disposed to avoid leaking native resources.
    /// </summary>
    public struct ARWorldMap : IDisposable, IEquatable<ARWorldMap>
    {
        /// <summary>
        /// Disposes of the world map. This releases the native [ARWorldMap](https://developer.apple.com/documentation/arkit/arworldmap) resource.
        /// </summary>
        public void Dispose()
        {
            Api.UnityARKit_disposeWorldMap(nativeHandle);
            nativeHandle = k_InvalidHandle;

#if ENABLE_UNITY_COLLECTIONS_CHECKS
            AtomicSafetyHandle.Release(m_SafetyHandle);
#endif
        }

        /// <summary>
        /// Use this to determine whether this <c>ARWorldMap</c> is valid, or
        /// if it has been disposed.
        /// </summary>
        public bool valid => (nativeHandle != k_InvalidHandle) && Api.UnityARKit_isWorldMapValid(nativeHandle);

        /// <summary>
        /// Serialize the <c>ARWorldMap</c> to an array of bytes. This array may be saved to disk
        /// and loaded at another time to persist the session, or sent over a network
        /// to another ARKit-enabled app to share the session.
        /// It is an error to call this method after the <c>ARWorldMap</c> has been disposed.
        /// The caller owns the returned
        /// [NativeArray](https://docs.unity3d.com/ScriptReference/Unity.Collections.NativeArray_1.html)
        /// and is responsible for disposing it.
        /// </summary>
        /// <param name="allocator">The
        /// [allocator](https://docs.unity3d.com/ScriptReference/Unity.Collections.Allocator.html)
        /// to use for the returned
        /// [NativeArray](https://docs.unity3d.com/ScriptReference/Unity.Collections.NativeArray_1.html) of bytes.</param>
        /// <returns>An array of bytes representing the serialized <c>ARWorldMap</c>.
        /// The caller owns the memory and is responsible for disposing the `NativeArray`.</returns>
        /// <exception cref="System.InvalidOperationException">Thrown if the world map is not <see cref="valid"/>.</exception>
        /// <exception cref="System.InvalidOperationException">Thrown if the world map could not be serialized to a byte array.</exception>
        public unsafe NativeArray<byte> Serialize(Allocator allocator)
        {
            if (!valid)
                throw new InvalidOperationException("ARWorldMap has been disposed.");

            IntPtr nsdata;
            int length;
            if (!Api.UnityARKit_trySerializeWorldMap(nativeHandle, out nsdata, out length))
                throw new InvalidOperationException("Internal error.");

            var serializedWorldMap = new NativeArray<byte>(
                length, allocator, NativeArrayOptions.UninitializedMemory);

            Api.UnityARKit_copyAndReleaseNsData(
                new IntPtr(serializedWorldMap.GetUnsafePtr()), nsdata, length);

            return serializedWorldMap;
        }

        /// <summary>
        /// Create a new <c>ARWorldMap</c> from a <c>NativeArray</c> of bytes produced
        /// from <see cref="Serialize"/>. Use this to create an <c>ARWorldMap</c> from
        /// a serialized array of bytes, either loaded from disk or sent from another device.
        /// </summary>
        /// <param name="serializedWorldMap">An array of bytes representing a serialized <c>ARWorldMap</c>,
        /// produced by <see cref="Serialize"/>.</param>
        /// <param name="worldMap">On success, holds the deserialized <see cref="ARWorldMap"/>.</param>
        /// <returns>'True' if <paramref name="serializedWorldMap"/> was successfully deserialized, otherwise false.</returns>
        public static unsafe bool TryDeserialize(NativeArray<byte> serializedWorldMap, out ARWorldMap worldMap)
        {
            var nativeHandle = Api.UnityARKit_deserializeWorldMap(
                new IntPtr(serializedWorldMap.GetUnsafePtr()), serializedWorldMap.Length);

            if (nativeHandle == k_InvalidHandle)
            {
                worldMap = default(ARWorldMap);
                return false;
            }

            worldMap = new ARWorldMap(nativeHandle);
            return true;
        }

        /// <summary>
        /// Generates a hash suitable for use with containers like `HashSet` and `Dictionary`.
        /// </summary>
        /// <returns>A hash code generated from this object's fields.</returns>
        public override int GetHashCode() => nativeHandle.GetHashCode();

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="obj">The `object` to compare against.</param>
        /// <returns>`True` if <paramref name="obj"/> is of type <see cref="ARWorldMap"/> and
        /// <see cref="Equals(ARWorldMap)"/> also returns `true`; otherwise `false`.</returns>
        public override bool Equals(object obj) => obj is ARWorldMap other && Equals(other);

        /// <summary>
        /// Tests for equality.
        /// </summary>
        /// <param name="other">The other <see cref="ARWorldMap"/> to compare against.</param>
        /// <returns>`True` if every field in <paramref name="other"/> is equal to this <see cref="ARWorldMap"/>, otherwise false.</returns>
        public bool Equals(ARWorldMap other) => nativeHandle == other.nativeHandle;

        /// <summary>
        /// Tests for equality. Same as <see cref="Equals(ARWorldMap)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator ==(ARWorldMap lhs, ARWorldMap rhs) => lhs.Equals(rhs);

        /// <summary>
        /// Tests for inequality. Same as `!`<see cref="Equals(ARWorldMap)"/>.
        /// </summary>
        /// <param name="lhs">The left-hand side of the comparison.</param>
        /// <param name="rhs">The right-hand side of the comparison.</param>
        /// <returns>`True` if <paramref name="lhs"/> is not equal to <paramref name="rhs"/>, otherwise `false`.</returns>
        public static bool operator !=(ARWorldMap lhs, ARWorldMap rhs) => !lhs.Equals(rhs);

        internal ARWorldMap(int nativeHandle)
        {
            this.nativeHandle = nativeHandle;
#if ENABLE_UNITY_COLLECTIONS_CHECKS
            m_SafetyHandle = AtomicSafetyHandle.Create();
#endif
        }

        internal const int k_InvalidHandle = 0;

        internal int nativeHandle { get; private set; }

#if ENABLE_UNITY_COLLECTIONS_CHECKS
        AtomicSafetyHandle m_SafetyHandle;
#endif
    }
}
