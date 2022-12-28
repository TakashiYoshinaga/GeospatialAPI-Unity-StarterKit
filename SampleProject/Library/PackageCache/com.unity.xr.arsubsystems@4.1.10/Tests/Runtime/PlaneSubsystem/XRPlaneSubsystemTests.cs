using NUnit.Framework;
using System.Collections.Generic;
using Unity.Collections;

namespace UnityEngine.XR.ARSubsystems.Tests
{
    public class XRPlaneSubsystemImpl : XRPlaneSubsystem
    {
#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider() => new TestProvider();
#endif

        public class TestProvider : Provider
        {
            public TestProvider() { }

#if UNITY_2020_2_OR_NEWER
            public override void Start() { }
            public override void Stop() { }
            public override void Destroy() { }
#endif

            public override TrackableChanges<BoundedPlane> GetChanges(BoundedPlane defaultPlane, Allocator allocator)
            {
                return default;
            }
        }
    }

    [TestFixture]
    public class XRPlaneSubsystemTestFixture
    {
        [OneTimeSetUp]
        public void RegisterTestDescriptor()
        {
            XRPlaneSubsystemDescriptor.Create(new XRPlaneSubsystemDescriptor.Cinfo
            {
                id = "Test-Plane",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(XRPlaneSubsystemImpl.TestProvider),
                subsystemTypeOverride = typeof(XRPlaneSubsystemImpl)
#else
                subsystemImplementationType = typeof(XRPlaneSubsystemImpl)
#endif
            });
        }

        static List<XRPlaneSubsystemDescriptor> s_Descs = new List<XRPlaneSubsystemDescriptor>();
        static XRPlaneSubsystem CreateTestPlaneSubsystem()
        {
            SubsystemManager.GetSubsystemDescriptors(s_Descs);
            return s_Descs[0].Create();
        }

        [Test]
        public void RunningStateTests()
        {
            XRPlaneSubsystem subsystem = CreateTestPlaneSubsystem();

            // Initial state is not running
            Assert.That(subsystem.running == false);

            // After start subsystem is running
            subsystem.Start();
            Assert.That(subsystem.running == true);

            // After start subsystem is running
            subsystem.Stop();
            Assert.That(subsystem.running == false);
        }
    }
}