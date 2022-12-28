using System;
using Unity.Collections;

#if UNITY_2020_2_OR_NEWER
using UnityEngine.SubsystemsImplementation;
#endif

namespace UnityEngine.XR.ARSubsystems
{
    /// <summary>
    /// Subsystem for managing the participants in a multi-user collaborative session.
    /// </summary>
#if UNITY_2020_2_OR_NEWER
    public class XRParticipantSubsystem
        : TrackingSubsystem<XRParticipant, XRParticipantSubsystem, XRParticipantSubsystemDescriptor, XRParticipantSubsystem.Provider>
#else
    public abstract class XRParticipantSubsystem
        : TrackingSubsystem<XRParticipant, XRParticipantSubsystemDescriptor>
#endif
    {
        /// <summary>
        /// Do not call this directly. Call create on a valid <see cref="XRParticipantSubsystemDescriptor"/> instead.
        /// </summary>
        public XRParticipantSubsystem()
        {
#if !UNITY_2020_2_OR_NEWER
            provider = CreateProvider();
#endif
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Starts the participant subsystem.
        /// </summary>
        protected sealed override void OnStart() => provider.Start();

        /// <summary>
        /// Stops the participant subsystem.
        /// </summary>
        protected sealed override void OnStop() => provider.Stop();

        /// <summary>
        /// Destroys the participant subsystem.
        /// </summary>
        protected sealed override void OnDestroyed() => provider.Destroy();
#endif

        /// <summary>
        /// Get the changed (added, updated, and removed) participants since the last call to <see cref="GetChanges(Allocator)"/>.
        /// </summary>
        /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
        /// <returns>
        /// <see cref="TrackableChanges{T}"/> describing the participants that have been added, updated, and removed
        /// since the last call to <see cref="GetChanges(Allocator)"/>. The caller owns the memory allocated with <c>Allocator</c>.
        /// </returns>
        public override TrackableChanges<XRParticipant> GetChanges(Allocator allocator)
        {
            var changes = provider.GetChanges(XRParticipant.defaultParticipant, allocator);
#if DEVELOPMENT_BUILD || UNITY_EDITOR
            m_ValidationUtility.ValidateAndDisposeIfThrown(changes);
#endif
            return changes;
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// Implement this to provide this class with an interface to platform specific implementations.
        /// </summary>
        /// <returns>An implementation specific provider.</returns>
        protected abstract Provider CreateProvider();
#endif

        /// <summary>
        /// The API this subsystem uses to interop with different provider implementations.
        /// </summary>
        public abstract class Provider
#if UNITY_2020_2_OR_NEWER
            : SubsystemProvider<XRParticipantSubsystem>
#endif
        {
#if !UNITY_2020_2_OR_NEWER
            /// <summary>
            /// Invoked to start the participant subsystem.
            /// </summary>
            public virtual void Start()
            { }

            /// <summary>
            /// Invoked to stop the participant subsystem.
            /// </summary>
            public virtual void Stop()
            { }

            /// <summary>
            /// Invoked to shutdown and destroy the participant subsystem. The implementation should release any
            /// resources required by the subsystem. If the subsystem is running, <see cref="Stop"/> will always
            /// be called before <see cref="Destroy"/>.
            /// </summary>
            public virtual void Destroy()
            { }
#endif

            /// <summary>
            /// Get the changed (added, updated, and removed) participants since the last call to
            /// <see cref="GetChanges(XRParticipant,Allocator)"/>.
            /// </summary>
            /// <param name="defaultParticipant">
            /// The default participant. This should be used to initialize the returned <c>NativeArray</c>s for backwards compatibility.
            /// See <see cref="TrackableChanges{T}.TrackableChanges(void*, int, void*, int, void*, int, T, int, Allocator)"/>.
            /// </param>
            /// <param name="allocator">An <c>Allocator</c> to use when allocating the returned <c>NativeArray</c>s.</param>
            /// <returns>
            /// <see cref="TrackableChanges{T}"/> describing the participants that have been added, updated, and removed
            /// since the last call to <see cref="GetChanges(XRParticipant,Allocator)"/>. The changes should be allocated using
            /// <paramref name="allocator"/>.
            /// </returns>
            public abstract TrackableChanges<XRParticipant> GetChanges(
                XRParticipant defaultParticipant,
                Allocator allocator);
        }

#if !UNITY_2020_2_OR_NEWER
        /// <summary>
        /// The provider created by the implementation that contains the required participant functionality.
        /// </summary>
        protected Provider provider { get; }
#endif

#if DEVELOPMENT_BUILD || UNITY_EDITOR
        ValidationUtility<XRParticipant> m_ValidationUtility = new ValidationUtility<XRParticipant>();
#endif
    }
}
