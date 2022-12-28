using NUnit.Framework;
using System.Collections.Generic;

namespace UnityEngine.XR.ARSubsystems.Tests
{
    public class XRSessionSubsystemImpl : XRSessionSubsystem
    {
        public class ProviderImpl : Provider
        {
            public ProviderImpl() { }
        }

#if !UNITY_2020_2_OR_NEWER
        protected override Provider CreateProvider() => new ProviderImpl();
#endif
    }

    [TestFixture]
    public class XRSessionSubsystemTestFixture
    {
        [OneTimeSetUp]
        public void RegisterTestDescriptor()
        {
            XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
            {
                id = "Test-Session",
#if UNITY_2020_2_OR_NEWER
                providerType = typeof(XRSessionSubsystemImpl.ProviderImpl),
                subsystemTypeOverride = typeof(XRSessionSubsystemImpl)
#else
                subsystemImplementationType = typeof(XRSessionSubsystemImpl)
#endif
            });
        }

        static List<XRSessionSubsystemDescriptor> s_Descs = new List<XRSessionSubsystemDescriptor>();
        static XRSessionSubsystem CreateTestSessionSubsystem()
        {
            SubsystemManager.GetSubsystemDescriptors(s_Descs);
            return s_Descs[0].Create();
        }

        [Test]
        public void RunningStateTests()
        {
            XRSessionSubsystem subsystem = CreateTestSessionSubsystem();

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
