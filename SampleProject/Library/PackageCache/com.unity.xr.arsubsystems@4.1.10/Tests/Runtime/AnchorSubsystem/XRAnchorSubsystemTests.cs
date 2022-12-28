using NUnit.Framework;
using System.Collections.Generic;
using Unity.Collections;

namespace UnityEngine.XR.ARSubsystems.Tests
{
    public class XRAnchorSubsystemImpl : XRAnchorSubsystem
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

            public override TrackableChanges<XRAnchor> GetChanges(XRAnchor defaultAnchor, Allocator allocator) => default;
        }
    }

    [TestFixture]
    public class XRAnchorSubsystemTestFixture
    {
        [OneTimeSetUp]
        public void RegisterTestDescriptor()
        {
            XRAnchorSubsystemDescriptor.Create(new XRAnchorSubsystemDescriptor.Cinfo
            {
                id = "Test-Anchor",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(XRAnchorSubsystemImpl.TestProvider),
                subsystemTypeOverride = typeof(XRAnchorSubsystemImpl)
#else
                subsystemImplementationType = typeof(XRAnchorSubsystemImpl)
#endif
            });
        }

        static List<XRAnchorSubsystemDescriptor> s_Descs = new List<XRAnchorSubsystemDescriptor>();
        static XRAnchorSubsystem CreateTestAnchorSubsystem()
        {
            SubsystemManager.GetSubsystemDescriptors(s_Descs);
            return s_Descs[0].Create();
        }

        [Test]
        public void RunningStateTests()
        {
            XRAnchorSubsystem subsystem = CreateTestAnchorSubsystem();

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