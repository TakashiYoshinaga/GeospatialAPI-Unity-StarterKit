using System;
using Unity.Collections;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// An abstract class that provides a generic API for low-level depth detection features.
    /// </summary>
    /// <remarks>
    /// This class can be used to access depth detection features in your app via accessing the generic API.
    /// It can also be extended to provide an implementation of a provider which provides the depth detection data
    /// to the higher level code.
    /// </remarks>
#if UNITY_2020_2_OR_NEWER
    public class XRDepthSubsystem
        : TrackingSubsystem<XRPointCloud, XRDepthSubsystem, XRDepthSubsystemDescriptor, XRDepthSubsystem.Provider>
#else
    public abstract class XRDepthSubsystem
        : TrackingSubsystem<XRPointCloud, XRDepthSubsystemDescriptor>
#endif
    {
#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Constructs a depth subsystem. Do not invoked directly; call <c>Create</c> on the <see cref="XRDepthSubsystemDescriptor"/> instead.
        /// </summary>
        protected XRDepthSubsystem() => provider = CreateProvider();

        /// <summary>
        /// Start the depth subsystem, i.e., start collecting depth data.
        /// </summary>
        protected sealed override void OnStart() => provider.Start();

        /// <summary>
        /// Destroy the depth subsystem.
        /// </summary>
        protected sealed override void OnDestroyed() => provider.Destroy();

        /// <summary>
        /// Stop the subsystem, i.e., stop collecting depth data.
        /// </summary>
        protected sealed override void OnStop() => provider.Stop();
#endif

        /// <summary>
        /// Get the changes (added, updated, and removed) point clouds since the last call to <see cref="GetChanges(Allocator)"/>.
        /// </summary>
        /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
        /// <returns>
        /// <see cref="TrackableChanges{T}"/> describing the point clouds that have been added, updated, and removed
        /// since the last call to <see cref="GetChanges(Allocator)"/>. The caller owns the memory allocated with <c>Allocator</c>.
        /// </returns>
        public override TrackableChanges<XRPointCloud> GetChanges(Allocator allocator)
        {
            var changes = provider.GetChanges(XRPointCloud.defaultValue, allocator);

#if DEVELOPMENT_BUILD || UNITY_EDITOR
            m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
#endif
            return changes;
        }

        /// <summary>
        /// Retrieve point cloud data (positions, confidence values, and identifiers)
        /// for the point cloud with the given <paramref name="trackableId"/>.
        /// </summary>
        /// <param name="trackableId">The point cloud for which to retrieve data.</param>
        /// <param name="allocator">The allocator to use when creating the <c>NativeArray</c>s in the returned <see cref="XRPointCloudData"/>. <c>Allocator.Temp</c> is not supported; use <c>Allocator.TempJob</c> if you need temporary memory.</param>
        /// <returns>
        /// A new <see cref="XRPointCloudData"/> with newly allocated <c>NativeArray</c>s using <paramref name="allocator"/>.
        /// The caller owns the memory and is responsible for calling <see cref="XRPointCloudData.Dispose"/> on it.
        /// </returns>
        public XRPointCloudData GetPointCloudData(
            TrackableId trackableId,
            Allocator allocator)
        {
            if (allocator == Allocator.Temp)
                throw new InvalidOperationException("Allocator.Temp is not supported. Use Allocator.TempJob if you wish to use a temporary allocator.");

            if (allocator == Allocator.None)
                throw new InvalidOperationException("Allocator.None is not a valid allocator.");

            return provider.GetPointCloudData(trackableId, allocator);
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Implement this and return an instance of the <see cref="Provider"/>.
        /// </summary>
        /// <returns>An implementation of the <see cref="Provider"/>.</returns>
        protected abstract Provider CreateProvider();
#endif

        /// <summary>
        /// The interface that each derived class must implement.
        /// </summary>
        public abstract class Provider
#if UNITY_2020_2_OR_NEWER
            : SubsystemProvider<XRDepthSubsystem>
#endif
        {
            /// <summary>
            /// Called when the subsystem is started. Will not be called again until <see cref="Stop"/>.
            /// </summary>
#if UNITY_2020_2_OR_NEWER
            public override void Start() { }
#else
            public virtual void Start() { }
#endif

            /// <summary>
            /// Called when the subsystem is stopped. Will not be called before <see cref="Start"/>.
            /// </summary>
#if UNITY_2020_2_OR_NEWER
            public override void Stop() { }
#else
            public virtual void Stop() { }
#endif

            /// <summary>
            /// Called when the subsystem is destroyed. <see cref="Stop"/> will be called first if the subsystem is running.
            /// </summary>
#if UNITY_2020_2_OR_NEWER
            public override void Destroy() { }
#else
            public virtual void Destroy() { }
#endif

            /// <summary>
            /// Get the changes (added, updated, and removed) planes since the last call to
            /// <see cref="GetChanges(XRPointCloud,Allocator)"/>.
            /// </summary>
            /// <param name="defaultPointCloud">
            /// The default point cloud. This should be used to initialize the returned <c>NativeArray</c>s for backwards compatibility.
            /// See <see cref="TrackableChanges{T}.TrackableChanges(void*, int, void*, int, void*, int, T, int, Allocator)"/>.
            /// </param>
            /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
            /// <returns>
            /// <see cref="TrackableChanges{T}"/> describing the reference points that have been added, updated, and removed
            /// since the last call to <see cref="GetChanges(XRPointCloud, Allocator)"/>. The changes should be allocated using
            /// <paramref name="allocator"/>.
            /// </returns>
            public abstract TrackableChanges<XRPointCloud> GetChanges(XRPointCloud defaultPointCloud, Allocator allocator);

            /// <summary>
            /// Generate point cloud data (positions, confidence values, and identifiers)
            /// for the point cloud with the given <paramref name="trackableId"/>.
            /// </summary>
            /// <param name="trackableId">The point cloud for which to retrieve data.</param>
            /// <param name="allocator">The allocator to use when creating the <c>NativeArray</c>s in the returned <see cref="XRPointCloudData"/>.</param>
            /// <returns>
            /// A new <see cref="XRPointCloudData"/> with newly allocated <c>NativeArray</c>s using <paramref name="allocator"/>.
            /// The caller owns the memory and is responsible for calling <see cref="XRPointCloudData.Dispose"/> on it.
            /// </returns>
            public abstract XRPointCloudData GetPointCloudData(TrackableId trackableId, Allocator allocator);
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// The provider created by the implementation that contains the required depth functionality.
        /// </summary>
        protected Provider provider { get; }
#endif

#if DEVELOPMENT_BUILD || UNITY_EDITOR
        ValidationUtility<XRPointCloud> m_ValidationUtility =
            new ValidationUtility<XRPointCloud>();
#endif
    }
}
