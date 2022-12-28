using System;
using Unity.Collections;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Base class for plane subsystems.
    /// </summary>
    /// <remarks>
    /// This subsystem surfaces information regarding plane (i.e., flat surface) detection in the physical environment.
    /// Implementations are typically found in other provider or platform-specific packages.
    /// </remarks>
#if UNITY_2020_2_OR_NEWER
    public class XRPlaneSubsystem
        : TrackingSubsystem<BoundedPlane, XRPlaneSubsystem, XRPlaneSubsystemDescriptor, XRPlaneSubsystem.Provider>
#else
    public abstract class XRPlaneSubsystem
        : TrackingSubsystem<BoundedPlane, XRPlaneSubsystemDescriptor>
#endif
    {
        /// <summary>
        /// Constructs a plane subsystem. Do not invoked directly; call <c>Create</c> on the <see cref="XRPlaneSubsystemDescriptor"/> instead.
        /// </summary>
        public XRPlaneSubsystem()
        {
#if !UNITY_2020_2_OR_NEWER
            provider = CreateProvider();
#endif
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Start the plane subsystem, i.e., start tracking planes.
        /// </summary>
        protected sealed override void OnStart() => provider.Start();

        /// <summary>
        /// Destroy the plane subsystem.
        /// </summary>
        protected sealed override void OnDestroyed() => provider.Destroy();

        /// <summary>
        /// Stop the subsystem, i.e., stop tracking planes.
        /// </summary>
        protected sealed override void OnStop() => provider.Stop();
#endif

        /// <summary>
        /// Get or set the requested <see cref="PlaneDetectionMode"/>, e.g.,
        /// to enable different modes of detection.
        /// </summary>
        /// <exception cref="System.NotSupportedException">Thrown if <see cref="requestedPlaneDetectionMode"/> is set to
        /// something other than <see cref="PlaneDetectionMode.None"/> when plane detection is not supported.</exception>
        public PlaneDetectionMode requestedPlaneDetectionMode
        {
            get => provider.requestedPlaneDetectionMode;
            set => provider.requestedPlaneDetectionMode = value;
        }

        /// <summary>
        /// Get the current <see cref="PlaneDetectionMode"/> in use by the provider.
        /// </summary>
        public PlaneDetectionMode currentPlaneDetectionMode => provider.currentPlaneDetectionMode;

        /// <summary>
        /// Get the changes (added, updated, and removed) planes since the last call to <see cref="GetChanges(Allocator)"/>.
        /// </summary>
        /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
        /// <returns>
        /// <see cref="TrackableChanges{T}"/> describing the planes that have been added, updated, and removed
        /// since the last call to <see cref="GetChanges(Allocator)"/>. The caller owns the memory allocated with <c>Allocator</c>.
        /// </returns>
        public override TrackableChanges<BoundedPlane> GetChanges(Allocator allocator)
        {
            var changes = provider.GetChanges(BoundedPlane.defaultValue, allocator);
#if DEVELOPMENT_BUILD || UNITY_EDITOR
            m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
#endif
            return changes;
        }

        /// <summary>
        /// Gets the boundary polygon describing the plane.
        /// </summary>
        /// <param name="trackableId">The <see cref="TrackableId"/> associated with the plane of which to retrieve the boundary.</param>
        /// <param name="allocator">An <c>Allocator</c> to use if <paramref name="boundary"/> needs to be created. <c>Allocator.Temp</c> is not supported; use <c>Allocator.TempJob</c> if you need temporary memory.</param>
        /// <param name="boundary">The boundary will be stored here. If <c>boundary</c> is the same length as the new boundary,
        /// it is simply overwritten with the new data. Otherwise, it is disposed and recreated with the correct length.</param>
        public void GetBoundary(
            TrackableId trackableId,
            Allocator allocator,
            ref NativeArray<Vector2> boundary)
        {
            if (allocator == Allocator.Temp)
                throw new InvalidOperationException("Allocator.Temp is not supported. Use Allocator.TempJob if you wish to use a temporary allocator.");

            if (allocator == Allocator.None)
                throw new InvalidOperationException("Allocator.None is not a valid allocator.");

            provider.GetBoundary(trackableId, allocator, ref boundary);
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Concrete classes must implement this to provide the provider-specific implementation.
        /// </summary>
        /// <returns></returns>
        protected abstract Provider CreateProvider();
#endif

        /// <summary>
        /// Creates or resizes the <paramref name="array"/> if necessary. If <paramref name="array"/>
        /// has been allocated and its length is equal to <paramref name="length"/>, then this method
        /// does nothing. If its length is different, then it is first disposed before being assigned
        /// to a new <c>NativeArray</c>.
        /// </summary>
        /// <param name="length">The length that <paramref name="array"/> will have after this method returns.</param>
        /// <param name="allocator">If allocation is necessary, this allocator will be used to create the new <c>NativeArray</c>.</param>
        /// <param name="array">The array to create or resize.</param>
        /// <typeparam name="T">The type of elements held by the <paramref name="array"/>.</typeparam>
        protected static void CreateOrResizeNativeArrayIfNecessary<T>(
            int length,
            Allocator allocator,
            ref NativeArray<T> array) where T : struct
        {
            if (array.IsCreated)
            {
                if (array.Length != length)
                {
                    array.Dispose();
                    array = new NativeArray<T>(length, allocator);
                }
            }
            else
            {
                array = new NativeArray<T>(length, allocator);
            }
        }

        /// <summary>
        /// The API that derived classes must implement.
        /// </summary>
        public abstract class Provider
#if UNITY_2020_2_OR_NEWER
            : SubsystemProvider<XRPlaneSubsystem>
#endif
        {
#if UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Creates or resizes the <paramref name="array"/> if necessary. If <paramref name="array"/>
            /// has been allocated and its length is equal to <paramref name="length"/>, then this method
            /// does nothing. If its length is different, then it is first disposed before being assigned
            /// to a new <c>NativeArray</c>.
            /// </summary>
            /// <param name="length">The length that <paramref name="array"/> will have after this method returns.</param>
            /// <param name="allocator">If allocation is necessary, this allocator will be used to create the new <c>NativeArray</c>.</param>
            /// <param name="array">The array to create or resize.</param>
            /// <typeparam name="T">The type of elements held by the <paramref name="array"/>.</typeparam>
            protected static void CreateOrResizeNativeArrayIfNecessary<T>(
                int length,
                Allocator allocator,
                ref NativeArray<T> array) where T : struct
            {
                if (array.IsCreated)
                {
                    if (array.Length != length)
                    {
                        array.Dispose();
                        array = new NativeArray<T>(length, allocator);
                    }
                }
                else
                {
                    array = new NativeArray<T>(length, allocator);
                }
            }
#else
            /// <summary>
            /// Start the plane subsystem, i.e., start tracking planes.
            /// </summary>
            public virtual void Start() { }

            /// <summary>
            /// Stop the subsystem, i.e., stop tracking planes.
            /// </summary>
            public virtual void Stop() { }

            /// <summary>
            /// Destroy the plane subsystem. <see cref="Stop"/> is always called first.
            /// </summary>
            public virtual void Destroy() { }
#endif

            /// <summary>
            /// Retrieves the boundary points of the plane with <paramref name="trackableId"/>.
            /// </summary>
            /// <param name="trackableId">The id of the plane.</param>
            /// <param name="allocator">An <c>Allocator</c> to use for the returned <c>NativeArray</c>.</param>
            /// <param name="boundary">An existing <c>NativeArray</c> to update or recreate if necessary.
            /// See <see cref="CreateOrResizeNativeArrayIfNecessary{T}(int, Allocator, ref NativeArray{T})"/>.</param>
            public virtual void GetBoundary(
                TrackableId trackableId,
                Allocator allocator,
                ref NativeArray<Vector2> boundary)
            {
                throw new NotSupportedException("Boundary vertices are not supported.");
            }

            /// <summary>
            /// Get the changes (added, updated, and removed) planes since the last call to
            /// <see cref="GetChanges(BoundedPlane,Allocator)"/>.
            /// </summary>
            /// <param name="defaultPlane">
            /// The default plane. This should be used to initialize the returned <c>NativeArray</c>s for backwards compatibility.
            /// See <see cref="TrackableChanges{T}.TrackableChanges(void*, int, void*, int, void*, int, T, int, Allocator)"/>.
            /// </param>
            /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
            /// <returns>
            /// <see cref="TrackableChanges{T}"/> describing the planes that have been added, updated, and removed
            /// since the last call to <see cref="GetChanges(BoundedPlane,Allocator)"/>. The changes should be allocated using
            /// <paramref name="allocator"/>.
            /// </returns>
            public abstract TrackableChanges<BoundedPlane> GetChanges(BoundedPlane defaultPlane, Allocator allocator);

            /// <summary>
            /// Get or set the requested <see cref="PlaneDetectionMode"/>.
            /// </summary>
            public virtual PlaneDetectionMode requestedPlaneDetectionMode
            {
                get => PlaneDetectionMode.None;
                set
                {
                    if (value != PlaneDetectionMode.None)
                    {
                        throw new NotSupportedException("Plane detection is not supported.");
                    }
                }
            }

            /// <summary>
            /// Get the current plane detection mode in use by the provider.
            /// </summary>
            public virtual PlaneDetectionMode currentPlaneDetectionMode => PlaneDetectionMode.None;
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// The provider created by the implementation that contains the required plane tracking functionality.
        /// </summary>
        protected Provider provider { get; }
#endif

#if DEVELOPMENT_BUILD || UNITY_EDITOR
        ValidationUtility<BoundedPlane> m_ValidationUtility =
            new ValidationUtility<BoundedPlane>();
#endif
    }
}
