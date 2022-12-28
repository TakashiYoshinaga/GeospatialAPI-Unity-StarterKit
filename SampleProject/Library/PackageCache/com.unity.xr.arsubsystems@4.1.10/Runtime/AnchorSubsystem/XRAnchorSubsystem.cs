using System;
using Unity.Collections;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Base class for a anchor subsystem.
    /// </summary>
    /// <remarks>
    /// <para>An anchor is a pose in the physical environment that is tracked by an XR device.
    /// As the device refines its understanding of the environment, anchors will be
    /// updated, allowing developers to keep virtual content connected to a real-world position and orientation.</para>
    /// <para>This abstract class should be implemented by an XR provider and instantiated using the <c>SubsystemManager</c>
    /// to enumerate the available <see cref="XRAnchorSubsystemDescriptor"/>s.</para>
    /// </remarks>
#if UNITY_2020_2_OR_NEWER
    public class XRAnchorSubsystem
        : TrackingSubsystem<XRAnchor, XRAnchorSubsystem, XRAnchorSubsystemDescriptor, XRAnchorSubsystem.Provider>
#else
    public abstract class XRAnchorSubsystem
        : TrackingSubsystem<XRAnchor, XRAnchorSubsystemDescriptor>
#endif
    {
        /// <summary>
        /// Constructor. Do not invoke directly; use the <c>SubsystemManager</c>
        /// to enumerate the available <see cref="XRAnchorSubsystemDescriptor"/>s
        /// and call <c>Create</c> on the desired descriptor.
        /// </summary>
        public XRAnchorSubsystem()
        {
#if !UNITY_2020_2_OR_NEWER
            provider = CreateProvider();
#endif
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Starts the subsystem.
        /// </summary>
        protected sealed override void OnStart() => provider.Start();

        /// <summary>
        /// Stops the subsystem.
        /// </summary>
        protected sealed override void OnStop() => provider.Stop();

        /// <summary>
        /// Destroys the subsystem.
        /// </summary>
        protected sealed override void OnDestroyed() => provider.Destroy();
#endif

        /// <summary>
        /// Get the changes (added, updated, and removed) anchors since the last call
        /// to <see cref="GetChanges(Allocator)"/>.
        /// </summary>
        /// <param name="allocator">An allocator to use for the <c>NativeArray</c>s in <see cref="TrackableChanges{T}"/>.</param>
        /// <returns>Changes since the last call to <see cref="GetChanges"/>.</returns>
        public override TrackableChanges<XRAnchor> GetChanges(Allocator allocator)
        {
            if (!running)
                throw new InvalidOperationException("Can't call \"GetChanges\" without \"Start\"ing the anchor subsystem!");

            var changes = provider.GetChanges(XRAnchor.defaultValue, allocator);
#if DEVELOPMENT_BUILD || UNITY_EDITOR
            m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
#endif
            return changes;
        }

        /// <summary>
        /// Attempts to create a new anchor with the provide <paramref name="pose"/>.
        /// </summary>
        /// <param name="pose">The pose, in session space, of the new anchor.</param>
        /// <param name="anchor">The new anchor. Only valid if this method returns <c>true</c>.</param>
        /// <returns><c>true</c> if the new anchor was added, otherwise <c>false</c>.</returns>
        public bool TryAddAnchor(Pose pose, out XRAnchor anchor)
        {
            return provider.TryAddAnchor(pose, out anchor);
        }

        /// <summary>
        /// Attempts to create a new anchor "attached" to the trackable with id <paramref name="trackableToAffix"/>.
        /// The behavior of the anchor depends on the type of trackable to which this anchor is attached.
        /// </summary>
        /// <param name="trackableToAffix">The id of the trackable to which to attach.</param>
        /// <param name="pose">The pose, in session space, of the anchor to create.</param>
        /// <param name="anchor">The new anchor. Only valid if this method returns <c>true</c>.</param>
        /// <returns><c>true</c> if the new anchor was added, otherwise <c>false</c>.</returns>
        public bool TryAttachAnchor(TrackableId trackableToAffix, Pose pose, out XRAnchor anchor)
        {
            return provider.TryAttachAnchor(trackableToAffix, pose, out anchor);
        }

        /// <summary>
        /// Attempts to remove an existing anchor with <see cref="TrackableId"/> <paramref name="anchorId"/>.
        /// </summary>
        /// <param name="anchorId">The id of an existing anchor to remove.</param>
        /// <returns><c>true</c> if the anchor was removed, otherwise <c>false</c>.</returns>
        public bool TryRemoveAnchor(TrackableId anchorId)
        {
            return provider.TryRemoveAnchor(anchorId);
        }

        /// <summary>
        /// An abstract class to be implemented by providers of this subsystem.
        /// </summary>
        public abstract class Provider
#if UNITY_2020_2_OR_NEWER
            : SubsystemProvider<XRAnchorSubsystem>
#endif
        {
#if !UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Invoked when <c>Start</c> is called on the subsystem. This method is only called if the subsystem was not previously running.
            /// </summary>
            public virtual void Start() { }

            /// <summary>
            /// Invoked when <c>Stop</c> is called on the subsystem. This method is only called if the subsystem was previously running.
            /// </summary>
            public virtual void Stop() { }

            /// <summary>
            /// Called when <c>Destroy</c> is called on the subsystem.
            /// </summary>
            public virtual void Destroy() { }
#endif

            /// <summary>
            /// Invoked to get the changes to anchors (added, updated, and removed) since the last call to
            /// <see cref="GetChanges(XRAnchor,Allocator)"/>.
            /// </summary>
            /// <param name="defaultAnchor">The default anchor. This should be used to initialize the returned
            /// <c>NativeArray</c>s for backwards compatibility.
            /// See <see cref="TrackableChanges{T}.TrackableChanges(void*, int, void*, int, void*, int, T, int, Unity.Collections.Allocator)"/>.
            /// </param>
            /// <param name="allocator">An allocator to use for the <c>NativeArray</c>s in <see cref="TrackableChanges{T}"/>.</param>
            /// <returns>Changes since the last call to <see cref="GetChanges"/>.</returns>
            public abstract TrackableChanges<XRAnchor> GetChanges(XRAnchor defaultAnchor, Allocator allocator);

            /// <summary>
            /// Should create a new anchor with the provide <paramref name="pose"/>.
            /// </summary>
            /// <param name="pose">The pose, in session space, of the new anchor.</param>
            /// <param name="anchor">The new anchor. Must be valid only if this method returns <c>true</c>.</param>
            /// <returns>Should return <c>true</c> if the new anchor was added, otherwise <c>false</c>.</returns>
            public virtual bool TryAddAnchor(Pose pose, out XRAnchor anchor)
            {
                anchor = default(XRAnchor);
                return false;
            }

            /// <summary>
            /// Should create a new anchor "attached" to the trackable with id <paramref name="trackableToAffix"/>.
            /// The behavior of the anchor depends on the type of trackable to which this anchor is attached and
            /// may be implementation-defined.
            /// </summary>
            /// <param name="trackableToAffix">The id of the trackable to which to attach.</param>
            /// <param name="pose">The pose, in session space, of the anchor to create.</param>
            /// <param name="anchor">The new anchor. Must be valid only if this method returns <c>true</c>.</param>
            /// <returns><c>true</c> if the new anchor was added, otherwise <c>false</c>.</returns>
            public virtual bool TryAttachAnchor(
                TrackableId trackableToAffix,
                Pose pose,
                out XRAnchor anchor)
            {
                anchor = default(XRAnchor);
                return false;
            }

            /// <summary>
            /// Should remove an existing anchor with <see cref="TrackableId"/> <paramref name="anchorId"/>.
            /// </summary>
            /// <param name="anchorId">The id of an existing anchor to remove.</param>
            /// <returns>Should return <c>true</c> if the anchor was removed, otherwise <c>false</c>. If the anchor
            /// does not exist, return <c>false</c>.</returns>
            public virtual bool TryRemoveAnchor(TrackableId anchorId) => false;
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Should return an instance of <see cref="Provider"/>.
        /// </summary>
        /// <returns>The interface to the implementation-specific provider.</returns>
        protected abstract Provider CreateProvider();

        /// <summary>
        /// The provider created by the implementation that contains the required anchor functionality.
        /// </summary>
        protected Provider provider { get; }
#endif

#if DEVELOPMENT_BUILD || UNITY_EDITOR
        ValidationUtility<XRAnchor> m_ValidationUtility =
            new ValidationUtility<XRAnchor>();
#endif
    }
}
