#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>
struct SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>
struct SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7;
// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522;
// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t65DE76C1B2152EFFE408635A150811F4B8000AA9;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>
struct TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2;
// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE;
IL2CPP_EXTERN_C String_t* _stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A;
IL2CPP_EXTERN_C String_t* _stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral241BE6E385975D9F12D5076DDE1873A5D169C4B4;
IL2CPP_EXTERN_C String_t* _stringLiteral27A34E033C9A6BBBDD443A6D2BC0C16783E281B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5;
IL2CPP_EXTERN_C String_t* _stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24;
IL2CPP_EXTERN_C String_t* _stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral5856982C295C68DD87C424F2F7B795A142D7C134;
IL2CPP_EXTERN_C String_t* _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89;
IL2CPP_EXTERN_C String_t* _stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C;
IL2CPP_EXTERN_C String_t* _stringLiteral92580D64BA310146F0049A68E639333564037B8B;
IL2CPP_EXTERN_C String_t* _stringLiteralA56CB75B19CD4AE3099069A8FAE874B97EE80348;
IL2CPP_EXTERN_C String_t* _stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E1CB07B1BC79148DB21D87F48D50AC486D3A55;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D;
IL2CPP_EXTERN_C String_t* _stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE446F5E5E3D5CD70111EE44D96D38C2402691299;
IL2CPP_EXTERN_C String_t* _stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.PlaneAlignmentExtensions
struct PlaneAlignmentExtensions_t4B5D9C299C467E4CD429F25CEA25479272377445  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions
struct SessionAvailabilityExtensions_tC1373C1768B1576234D33B802746F77FCC60E8B1  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.XR.ARSubsystems.XRCpuImageAsyncConversionStatusExtensions
struct XRCpuImageAsyncConversionStatusExtensions_tD5073647CD6B4450759257AFE23349AC1BC2F2D4  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>
struct SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	RuntimeObject* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	RuntimeObject* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* ___U3CproviderU3Ek__BackingField_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser
struct DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8  : public ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.XR.ARSubsystems.ScopedProfiler
struct ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F 
{
	union
	{
		struct
		{
		};
		uint8_t ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F 
{
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
	int32_t ___U3CsupportsClassificationU3Ek__BackingField_8;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 
{
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_6;
	int32_t ___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t* ___U3CproviderTypeU3Ek__BackingField_3;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
	Type_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 
{
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___m_Removed_3;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B  : public SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A
{
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385  : public SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522
{
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor
struct XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300  : public SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::<supportsClassification>k__BackingField
	bool ___U3CsupportsClassificationU3Ek__BackingField_7;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor
struct XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311  : public SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::<supportsTrackedRaycasts>k__BackingField
	bool ___U3CsupportsTrackedRaycastsU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076  : public SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 
{
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___U3CscreenDimensionsU3Ek__BackingField_1;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider
struct Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46  : public SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

// UnityEngine.XR.ARSubsystems.Configuration
struct Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 
{
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62  : public TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B
{
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId_6;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7  : public TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385
{
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___value_1;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399  : public SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526
{
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___U3CcurrentConfigurationU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_DefaultConfigurationChooser_5;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___m_ConfigurationChooser_6;
};

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.XR.ARSubsystems.ConfigurationChooser

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// UnityEngine.XR.ARSubsystems.PlaneAlignmentExtensions

// UnityEngine.XR.ARSubsystems.PlaneAlignmentExtensions

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions

// UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider

// System.ValueType

// System.ValueType

// UnityEngine.XR.ARSubsystems.XRCpuImageAsyncConversionStatusExtensions

// UnityEngine.XR.ARSubsystems.XRCpuImageAsyncConversionStatusExtensions

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.ScopedProfiler

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.XR.ARSubsystems.TrackableId

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector2Int

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane

// UnityEngine.XR.ARSubsystems.Configuration

// UnityEngine.XR.ARSubsystems.Configuration

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycast

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>

// System.FormatException

// System.FormatException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mED282B11BA9E98619E681938C98D7A83A0251349_gshared (TrackingSubsystem_4_t65DE76C1B2152EFFE408635A150811F4B8000AA9* __this, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_provider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared (SubsystemProvider_1_t7964A83C7EDD0F612E018A2033A9D500479D92F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared (SubsystemDescriptorWithProvider_2_tDBA1506DD7EBA024E21E2A6CAF1B5CE3DA9DFF07* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared (TrackingSubsystem_4_t47A08A8E52556949A85ED11792391A687F965D53* __this, const RuntimeMethod* method) ;
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::get_subsystemDescriptor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::op_Implicit(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___0_array, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_gshared (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_gshared (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared (int32_t ___0_result, const RuntimeMethod* method) ;

// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE (TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t6A4D8CCD1F1694558E2CC65E84F2376ED1018B1B*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mED282B11BA9E98619E681938C98D7A83A0251349_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::get_provider()
inline Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline (SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A* __this, const RuntimeMethod* method)
{
	return ((  Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* (*) (SubsystemWithProvider_3_tE2E94AA2ED69A0B1D8AFC10351E3A4D199EE973A*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0 (SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA (SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t0BFBF5E56D4A1F904B4AE98ECBB376520816FB32*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m87A964B3827007A58DEAF8966B51575BA7687D6D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m63ACA332E759D120AB82AA3FE630512846B04E4E_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::ReferenceHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::get_nativePtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::get_distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_hitTrackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Pose::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.IntPtr::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_other, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E (const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_trackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_trackableId_mA41CAE66DB4E6054512F496DABE4C15B6217FA30_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_pose(UnityEngine.Pose)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_pose_m26D8C795FDFF7DEE86AB77BC5F0A0B6405150AD4_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_distance(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_distance_m93182B0265D3D34E9D1730860A5B39F515EA729D_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_hitType(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_hitType_m89FAB9AF35A52F7CA3F997AE1494EB92B60CA997_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1 (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_4_t36B7E963263063D29AD906549E77576FAA31C385*, const RuntimeMethod*))TrackingSubsystem_4__ctor_mFB0EB2FBD50AE188F7C5BA05657F8CB3E61C78CC_gshared)(__this, method);
}
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::get_provider()
inline Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522* __this, const RuntimeMethod* method)
{
	return ((  Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* (*) (SubsystemWithProvider_3_t4D6DBA97FBFBBDD88E0B44C80B4711879EFD7522*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8 (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_tBF3C4994CBAACCFBF7C5B74C847151ED05D7D9C7*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1 (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_t8CB28AA1030E7FAEFC28809245F48903A966B2CF*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_mF1AF41E2F764A5BF0AF6A35C54C27DE25809AED9_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m4A20D7E4790C43392F4F82D6B9FAC1D2759F744C_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB (int32_t ___0_hash1, int32_t ___1_hash2, int32_t ___2_hash3, int32_t ___3_hash4, int32_t ___4_hash5, int32_t ___5_hash6, int32_t ___6_hash7, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m1F4C2F43E028839CDD9B09EB51402C6F706431B5 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.GuidUtil::Compose(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t GuidUtil_Compose_m58AA1AA0AF27A23B64937C72023C6F72D4C8DD40 (uint64_t ___0_low, uint64_t ___1_high, const RuntimeMethod* method) ;
// System.Guid UnityEngine.XR.ARSubsystems.SerializableGuid::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.HashCodeUtil::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36 (int32_t ___0_hash1, int32_t ___1_hash2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.SerializableGuid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m66A8E16F22314214DECE08D94A189101A421603E (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130 (Guid_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m514BCF03CE14CE663D9ECC9616DD28453334BE96 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_provider()
inline Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	return ((  Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline)(__this, method);
}
// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::get_subsystemDescriptor()
inline XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.DefaultConfigurationChooser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tE0F8337476BBB744801608BD9EFE495479A39526*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mEC13729FA21E9E590467B3B9FC8CD25CC281FFD4_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, int32_t ___0_allocator, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::Dispose()
inline void NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2*, const RuntimeMethod*))NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_gshared)(__this, method);
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>::op_Implicit(Unity.Collections.NativeArray`1<T>)
inline NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0 (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___0_array, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE (*) (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2, const RuntimeMethod*))NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_gshared)(___0_array, method);
}
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::.ctor(T)
inline void Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947, const RuntimeMethod*))Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_gshared)(__this, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DetermineConfiguration(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_features, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentConfiguration()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_HasValue()
inline bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, const RuntimeMethod*))Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>::get_Value()
inline Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014 (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method)
{
	return ((  Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 (*) (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D*, const RuntimeMethod*))Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.FeatureExtensions::TrackingModes(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7 (uint64_t ___0_self, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3 (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared)(___0_result, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880 (int32_t ___0_result, const RuntimeMethod* method)
{
	return ((  Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_m0949FA71DFBA371879063E5948B8E5B46467EFCF_gshared)(___0_result, method);
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997 (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F*, const RuntimeMethod*))SubsystemProvider_1__ctor_m3F6BF1C55F79E0A7C00A482A63D1BF949533348A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>::.ctor()
inline void SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptorWithProvider_2_tFB624BCBD66F2375A53C5B17F42E131972D1E0D9*, const RuntimeMethod*))SubsystemDescriptorWithProvider_2__ctor_m639DDEEB52B0E73AD96D610D0DC16CF0E9D0BEA2_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m1E7C284EE29C67952C8742FD257B3BA09F84D8B3_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m116B6D5857F561E8119812F01089CDDC08AFF3CA_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::set_subId1(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableId_set_subId1_mFA12049C24961BC2FE7D41A2D0FE30DF4B3F39D2_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::set_subId2(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableId_set_subId2_mB7AA91412C0731CF59A8CC24CF75012D3C77C76D_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, String_t* ___0_groupname, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m5D07DDFA6DA8E3F85D6E07EAE33756AF742CBAB0 (String_t* ___0_s, int32_t ___1_style, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4 (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, String_t* ___0_idString, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_nativeTexture(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_nativeTexture_mE5EF6CBBBE13191EF65501EC9A45C2F64964B27D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_width_mA5D674B5378CB5B8AADD7A93E027CBF4BD27A37C_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_height_mCD63667233B39883DF1E431446ED926AC3AF3992_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_mipmapCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_mipmapCount_m7B8AAB937C5157B15A280672BC5C105FAF30D7E8_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_format(UnityEngine.TextureFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_format_mAB9FB1797A83CC68AC222A861C185FE2F8035058_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_propertyNameId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_propertyNameId_m4D99BAF8AF884D653834D29D124F106A4AD7189D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_depth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_depth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_depth_mD62E28995B11B8631C2DF7B02416A2D310F35C49_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_dimension()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_dimension(UnityEngine.Rendering.TextureDimension)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_dimension_m75DC4703441BF9E812D18C0DFBF0A9839A52554B_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13 (intptr_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.PlaneAlignmentExtensions::IsHorizontal(UnityEngine.XR.ARSubsystems.PlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneAlignmentExtensions_IsHorizontal_m05AF9996C1C4916E75371E655105DE73DD5A11F1 (int32_t ___0_alignment, const RuntimeMethod* method) 
{
	{
		// return
		//     (alignment == PlaneAlignment.HorizontalUp) ||
		//     (alignment == PlaneAlignment.HorizontalDown);
		int32_t L_0 = ___0_alignment;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)100))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_alignment;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)101)))? 1 : 0);
	}

IL_000b:
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.PlaneAlignmentExtensions::IsVertical(UnityEngine.XR.ARSubsystems.PlaneAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaneAlignmentExtensions_IsVertical_mEDE1ACA365DBF00018B3C0ADCCDD657DBDE9AA0B (int32_t ___0_alignment, const RuntimeMethod* method) 
{
	{
		// return (alignment == PlaneAlignment.Vertical);
		int32_t L_0 = ___0_alignment;
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)200)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mDE29D107C740A5CB086A7159DCC17E567A666603 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRPlaneSubsystem() { }
		TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE(__this, TrackingSubsystem_4__ctor_mB019CC7BC60D33E4395F93C4E202215BD2D5C7FE_RuntimeMethod_var);
		// public XRPlaneSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneSubsystem_get_requestedPlaneDetectionMode_m303F2743295F6A35D586107BA463A80D445398F5 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.requestedPlaneDetectionMode;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_set_requestedPlaneDetectionMode_m35162C34975D7AF454CF0D077029BA9DA32284B8 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.requestedPlaneDetectionMode = value;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		int32_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode) */, L_0, L_1);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRPlaneSubsystem_get_currentPlaneDetectionMode_m45E78CABE7A117E62B2AA2A3F92D05A6158CE936 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public PlaneDetectionMode currentPlaneDetectionMode => provider.currentPlaneDetectionMode;
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F XRPlaneSubsystem_GetChanges_m180B0681AF9853EB236AD62835F92E90F5E1908C (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(BoundedPlane.defaultValue, allocator);
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_1;
		L_1 = BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_tFC79B2E1FF9EFB1D5754F6995583D33A519F300F, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE, int32_t >::Invoke(9 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961 (XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_boundary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (allocator == Allocator.Temp)
		int32_t L_0 = ___1_allocator;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.Temp is not supported. Use Allocator.TempJob if you wish to use a temporary allocator.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0040832A71810E092F962A5F9A66A6A1866CC7D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (allocator == Allocator.None)
		int32_t L_2 = ___1_allocator;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001e;
		}
	}
	{
		// throw new InvalidOperationException("Allocator.None is not a valid allocator.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1889AF12D766B3A68EB9EE79FE4ECA560C23A4F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRPlaneSubsystem_GetBoundary_mF1638B7F45F420D6A56A25D5749A91AF6C46B961_RuntimeMethod_var)));
	}

IL_001e:
	{
		// provider.GetBoundary(trackableId, allocator, ref boundary);
		Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* L_4;
		L_4 = SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_inline(__this, SubsystemWithProvider_3_get_provider_m859A5947D838D89073F07EBEB289E5DD6E3EE9AE_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5 = ___0_trackableId;
		int32_t L_6 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___2_boundary;
		NullCheck(L_4);
		VirtualActionInvoker3< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7, int32_t, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* >::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&) */, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_boundary, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Boundary vertices are not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16B03B9B09A75749753D1BD8C49C3482ED00598A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_GetBoundary_m85479D05365E9665B11E24CADDC45AFDC9A43158_RuntimeMethod_var)));
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_requestedPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_requestedPlaneDetectionMode_m44A491A20B7336C2783B01835473BF1032570135 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	{
		// get => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::set_requestedPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value != PlaneDetectionMode.None)
		int32_t L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Plane detection is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED9546C195BD4988B71713BD762B7E7F364227ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_requestedPlaneDetectionMode_mEC2045B55C836A6D80F35FDC31682FB6A2F00E3F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::get_currentPlaneDetectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_currentPlaneDetectionMode_m72405CAD5E46C4CBD1DF9BABEDE6F7D3CF2F162E (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	{
		// public virtual PlaneDetectionMode currentPlaneDetectionMode => PlaneDetectionMode.None;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m54E6412FCE1B1A4CB7852D23AC643A9698BC4001 (Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0(__this, SubsystemProvider_1__ctor_m4302B564B35CA84EA7C4963ACA31B49822791CF0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsHorizontalPlaneDetection_m445A5130F29EA2A2AF125632097618241D12AA93 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = __this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsVerticalPlaneDetection_m29CDC06AFE8368431E0092990D7148043D13996C (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = __this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsArbitraryPlaneDetection_m7B057BEE25216B24BC2648D0191D3A3F88A142D8 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = __this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsBoundaryVertices_m591A2527B7E06AF0AB1C46197EA9E8C21BF76206 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRPlaneSubsystemDescriptor_get_supportsClassification_m634BD5268FC0BB4BCE42396067B1C03E48D4F03F (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4 (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_m436344F4D6E1681E25A6EB110E13B4B78D63FF59 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var descriptor = new XRPlaneSubsystemDescriptor(cinfo);
		Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F L_0 = ___0_cinfo;
		XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* L_1 = (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300*)il2cpp_codegen_object_new(XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B(L_1, L_0, NULL);
		// SubsystemDescriptorStore.RegisterDescriptor(descriptor);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor__ctor_m73149431D0358E0258082B14FA2EB05F49CED36B (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRPlaneSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA(__this, SubsystemDescriptorWithProvider_2__ctor_mACCDE670DB69FFC142AB069719CD54CAB899FCFA_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsHorizontalPlaneDetection = cinfo.supportsHorizontalPlaneDetection;
		bool L_3;
		L_3 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline(__this, L_3, NULL);
		// supportsVerticalPlaneDetection = cinfo.supportsVerticalPlaneDetection;
		bool L_4;
		L_4 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline(__this, L_4, NULL);
		// supportsArbitraryPlaneDetection = cinfo.supportsArbitraryPlaneDetection;
		bool L_5;
		L_5 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline(__this, L_5, NULL);
		// supportsBoundaryVertices = cinfo.supportsBoundaryVertices;
		bool L_6;
		L_6 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline(__this, L_6, NULL);
		// supportsClassification = cinfo.supportsClassification;
		bool L_7;
		L_7 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline((&___0_cinfo), NULL);
		XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline(__this, L_7, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke_back(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_pinvoke_cleanup(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com_back(const Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshal_com_cleanup(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m87A964B3827007A58DEAF8966B51575BA7687D6D (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemImplementationType_m87A964B3827007A58DEAF8966B51575BA7687D6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m87A964B3827007A58DEAF8966B51575BA7687D6D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m63ACA332E759D120AB82AA3FE630512846B04E4E (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m63ACA332E759D120AB82AA3FE630512846B04E4E_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m63ACA332E759D120AB82AA3FE630512846B04E4E_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsHorizontalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsVerticalPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsArbitraryPlaneDetection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsBoundaryVertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::get_supportsClassification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsClassification(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     ReferenceEquals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsHorizontalPlaneDetection == other.supportsHorizontalPlaneDetection &&
		//     supportsVerticalPlaneDetection == other.supportsVerticalPlaneDetection &&
		//     supportsArbitraryPlaneDetection == other.supportsArbitraryPlaneDetection &&
		//     supportsClassification == other.supportsClassification &&
		//     supportsBoundaryVertices == other.supportsBoundaryVertices;
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(String_t*)L_1))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(__this, NULL);
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_2) == ((RuntimeObject*)(Type_t*)L_3))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(__this, NULL);
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_4) == ((RuntimeObject*)(Type_t*)L_5))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(__this, NULL);
		bool L_7;
		L_7 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(__this, NULL);
		bool L_9;
		L_9 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(__this, NULL);
		bool L_11;
		L_11 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_12;
		L_12 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(__this, NULL);
		bool L_13;
		L_13 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0079;
		}
	}
	{
		bool L_14;
		L_14 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(__this, NULL);
		bool L_15;
		L_15 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0079:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0_AdjustorThunk (RuntimeObject* __this, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_other, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Cinfo))
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((Cinfo)obj);
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0(__this, ((*(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)((Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)(Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*)UnBox(L_1, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m2B155451B272C1E8954EDA6D6DFD1C151408D393(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// int hashCode = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		// hashCode = (hashCode * 486187739) + HashCodeUtil.ReferenceHash(providerType);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		// hashCode = (hashCode * 486187739) + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		// hashCode = (hashCode * 486187739) + supportsHorizontalPlaneDetection.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsVerticalPlaneDetection.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsArbitraryPlaneDetection.GetHashCode();
		bool L_10;
		L_10 = Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline(__this, NULL);
		V_0 = L_10;
		int32_t L_11;
		L_11 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsBoundaryVertices.GetHashCode();
		bool L_12;
		L_12 = Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline(__this, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + supportsClassification.GetHashCode();
		bool L_14;
		L_14 = Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline(__this, NULL);
		V_0 = L_14;
		int32_t L_15;
		L_15 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11)), ((int32_t)486187739))), L_13)), ((int32_t)486187739))), L_15));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_mC8813973E6CB5AB8D267B6D76693B6F96C006BF9(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m2035A48D9DF9261BE14129744779020E33E25051 (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_lhs, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mA601145904E7851A476968928F6B25607E95842A (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___0_lhs, Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m8A992E8675D4C2A5FCF7FCD7714CD1DBD734FEC0((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public float distance => m_Distance;
		float L_0 = __this->___m_Distance_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	float _returnValue;
	_returnValue = XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::get_hitTrackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId hitTrackableId => m_HitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_HitTrackableId_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Single,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_TrackingState = trackingState;
		int32_t L_2 = ___2_trackingState;
		__this->___m_TrackingState_3 = L_2;
		// m_NativePtr = nativePtr;
		intptr_t L_3 = ___3_nativePtr;
		__this->___m_NativePtr_4 = L_3;
		// m_Distance = distance;
		float L_4 = ___4_distance;
		__this->___m_Distance_5 = L_4;
		// m_HitTrackableId = hitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_5 = ___5_hitTrackableId;
		__this->___m_HitTrackableId_6 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, int32_t ___2_trackingState, intptr_t ___3_nativePtr, float ___4_distance, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___5_hitTrackableId, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_trackingState, ___3_nativePtr, ___4_distance, ___5_hitTrackableId, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycast::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (&__this->___m_TrackableId_1);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->___m_Pose_2);
		int32_t L_3;
		L_3 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_2, NULL);
		// hash = hash * 486187739 + ((int)m_TrackingState).GetHashCode();
		int32_t L_4 = __this->___m_TrackingState_3;
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hash = hash * 486187739 + m_NativePtr.GetHashCode();
		intptr_t* L_6 = (&__this->___m_NativePtr_4);
		int32_t L_7;
		L_7 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_6, NULL);
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		float* L_8 = (&__this->___m_Distance_5);
		int32_t L_9;
		L_9 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_8, NULL);
		// hash = hash * 486187739 + m_HitTrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_10 = (&__this->___m_HitTrackableId_6);
		int32_t L_11;
		L_11 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_10, NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycast_GetHashCode_m94E4A6BDC4CD5E875F40777E273D1E9CD37D54A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRRaycast) && Equals((XRRaycast)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74(__this, ((*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)UnBox(L_1, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m7F141CB415FF28341035CBD2B32037DC80469575(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::Equals(UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method) 
{
	{
		// m_TrackableId.Equals(other.m_TrackableId) &&
		// m_Pose.Equals(other.m_Pose) &&
		// (m_TrackingState == other.m_TrackingState) &&
		// (m_NativePtr == other.m_NativePtr) &&
		// m_HitTrackableId.Equals(other.m_HitTrackableId) &&
		// m_Distance.Equals(other.m_Distance);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (&__this->___m_TrackableId_1);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___m_Pose_2);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_8 = __this->___m_TrackingState_3;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_9 = ___0_other;
		int32_t L_10 = L_9.___m_TrackingState_3;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_006c;
		}
	}
	{
		intptr_t L_11 = __this->___m_NativePtr_4;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_12 = ___0_other;
		intptr_t L_13 = L_12.___m_NativePtr_4;
		bool L_14;
		L_14 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_15 = (&__this->___m_HitTrackableId_6);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_16 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_17 = L_16.___m_HitTrackableId_6;
		bool L_18;
		L_18 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_006c;
		}
	}
	{
		float* L_19 = (&__this->___m_Distance_5);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_20 = ___0_other;
		float L_21 = L_20.___m_Distance_5;
		bool L_22;
		L_22 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_19, L_21, NULL);
		return L_22;
	}

IL_006c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74_AdjustorThunk (RuntimeObject* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_other, const RuntimeMethod* method)
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::op_Equality(UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_op_Equality_mDE1E41B9C70FE2800AB9FDF02F2BCEDAA4F02729 (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_lhs, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(XRRaycast lhs, XRRaycast rhs) => lhs.Equals(rhs);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycast::op_Inequality(UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARSubsystems.XRRaycast)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycast_op_Inequality_mB5CAFFF098AE2CC1F9B37CFC3A3150E3990F3A0B (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_lhs, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(XRRaycast lhs, XRRaycast rhs) => !lhs.Equals(rhs);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRRaycast_Equals_m2A00EBA5AD411F5BFF724BB7D60175FAE69F8D74((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycast::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycast__cctor_m88C247D8041D39ED011C71BD40B6F42310EE48DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycast s_Default = new XRRaycast(
		//     TrackableId.invalidId, Pose.identity, TrackingState.None, IntPtr.Zero, 0, TrackableId.invalidId);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3;
		L_3 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_4;
		memset((&L_4), 0, sizeof(L_4));
		XRRaycast__ctor_m0ACF53702D817AC34FD8C21F2C01EF7A8F592F9D((&L_4), L_0, L_1, 0, L_2, (0.0f), L_3, /*hidden argument*/NULL);
		((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0 = L_4;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::get_defaultValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 _returnValue;
	_returnValue = XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_trackableId(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit_set_trackableId_mA41CAE66DB4E6054512F496DABE4C15B6217FA30 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_TrackableId = value;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_value;
		__this->___m_TrackableId_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit_set_trackableId_mA41CAE66DB4E6054512F496DABE4C15B6217FA30_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_value, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit_set_trackableId_mA41CAE66DB4E6054512F496DABE4C15B6217FA30_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 _returnValue;
	_returnValue = XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_pose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit_set_pose_m26D8C795FDFF7DEE86AB77BC5F0A0B6405150AD4 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Pose = value;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_Pose_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit_set_pose_m26D8C795FDFF7DEE86AB77BC5F0A0B6405150AD4_AdjustorThunk (RuntimeObject* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit_set_pose_m26D8C795FDFF7DEE86AB77BC5F0A0B6405150AD4_inline(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	float _returnValue;
	_returnValue = XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_distance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit_set_distance_m93182B0265D3D34E9D1730860A5B39F515EA729D (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Distance = value;
		float L_0 = ___0_value;
		__this->___m_Distance_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit_set_distance_m93182B0265D3D34E9D1730860A5B39F515EA729D_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit_set_distance_m93182B0265D3D34E9D1730860A5B39F515EA729D_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::get_hitType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::set_hitType(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit_set_hitType_m89FAB9AF35A52F7CA3F997AE1494EB92B60CA997 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_HitType = value;
		int32_t L_0 = ___0_value;
		__this->___m_HitType_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit_set_hitType_m89FAB9AF35A52F7CA3F997AE1494EB92B60CA997_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit_set_hitType_m89FAB9AF35A52F7CA3F997AE1494EB92B60CA997_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,System.Single,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method) 
{
	{
		// m_TrackableId = trackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_trackableId;
		__this->___m_TrackableId_1 = L_0;
		// m_Pose = pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___1_pose;
		__this->___m_Pose_2 = L_1;
		// m_Distance = distance;
		float L_2 = ___2_distance;
		__this->___m_Distance_3 = L_2;
		// m_HitType = hitType;
		int32_t L_3 = ___3_hitType;
		__this->___m_HitType_4 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___1_pose, float ___2_distance, int32_t ___3_hitType, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641(_thisAdjusted, ___0_trackableId, ___1_pose, ___2_distance, ___3_hitType, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastHit::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// var hash = m_TrackableId.GetHashCode();
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (&__this->___m_TrackableId_1);
		int32_t L_1;
		L_1 = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(L_0, NULL);
		// hash = hash * 486187739 + m_Pose.GetHashCode();
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->___m_Pose_2);
		int32_t L_3;
		L_3 = Pose_GetHashCode_mDD6C48FABC18795F04F82D42DFCBC916C0C6CCDB(L_2, NULL);
		// hash = hash * 486187739 + m_Distance.GetHashCode();
		float* L_4 = (&__this->___m_Distance_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		// hash = hash * 486187739 + ((int)m_HitType).GetHashCode();
		int32_t L_6 = __this->___m_HitType_4;
		V_0 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7));
	}
}
IL2CPP_EXTERN_C  int32_t XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRaycastHit_GetHashCode_m7C9DBAE43B929D3D4BBFF37E15E4E01143BC4A6B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override bool Equals(object obj) => (obj is XRRaycastHit other) && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)UnBox(L_1, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))));
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2 = V_0;
		bool L_3;
		L_3 = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(__this, L_2, NULL);
		return L_3;
	}

IL_0017:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_m319801A0EFB8A841B3B7E6197BB612780698759A(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::Equals(UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     (m_TrackableId.Equals(other.m_TrackableId)) &&
		//     (m_Pose.Equals(other.m_Pose)) &&
		//     (m_Distance.Equals(other.m_Distance)) &&
		//     (m_HitType == other.m_HitType);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* L_0 = (&__this->___m_TrackableId_1);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1 = ___0_other;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = L_1.___m_TrackableId_1;
		bool L_3;
		L_3 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___m_Pose_2);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_5 = ___0_other;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = L_5.___m_Pose_2;
		bool L_7;
		L_7 = Pose_Equals_m31979E7A46252DBB620F4A0EA3BDBA61782DA498(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		float* L_8 = (&__this->___m_Distance_3);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_9 = ___0_other;
		float L_10 = L_9.___m_Distance_3;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = __this->___m_HitType_4;
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_HitType_4;
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_0048:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A_AdjustorThunk (RuntimeObject* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_other, const RuntimeMethod* method)
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::op_Equality(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_op_Equality_m25E9118AC9D0C585769B0A01BB4A0BA09E8355DC (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_lhs, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(XRRaycastHit lhs, XRRaycastHit rhs) => lhs.Equals(rhs);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastHit::op_Inequality(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.XR.ARSubsystems.XRRaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastHit_op_Inequality_mF0338A41AC3A74E7A0D417552EDD60E87287DA31 (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_lhs, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(XRRaycastHit lhs, XRRaycastHit rhs) => !lhs.Equals(rhs);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRRaycastHit_Equals_mE45E36906807C4F3C5E28C1F54228142D444DA0A((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastHit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastHit__cctor_m5484BC89F33E0E0E1C846CB135139037484009D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly XRRaycastHit s_Default = new XRRaycastHit(
		//     TrackableId.invalidId, Pose.identity, 0, TrackableType.None);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0;
		L_0 = TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_il2cpp_TypeInfo_var);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = Pose_get_identity_m145C7BA9D895CD7F8CCE2483B69764F7A9FEC66E(NULL);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_2;
		memset((&L_2), 0, sizeof(L_2));
		XRRaycastHit__ctor_mEFB9D7632D78C282C02A913F1E4A2F7866C6B641((&L_2), L_0, L_1, (0.0f), 0, /*hidden argument*/NULL);
		((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_m883CA69818A86683F768E24C30896A03AB231744 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRRaycastSubsystem() { }
		TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1(__this, TrackingSubsystem_4__ctor_m7E7E0815845FC7D13BBCA56A4EE6A9F384E22CC1_RuntimeMethod_var);
		// public XRRaycastSubsystem() { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::GetChanges(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 XRRaycastSubsystem_GetChanges_mAAF6A88E1636E9143D46216A137FC40065756B36 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var changes = provider.GetChanges(XRRaycast.defaultValue, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		int32_t L_2 = ___0_allocator;
		NullCheck(L_0);
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_3;
		L_3 = VirtualFuncInvoker2< TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103, int32_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator) */, L_0, L_1, L_2);
		// return changes;
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_mD0D3CCD94C1EAF43E5DA8130DD35CB2B95785DEF (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Vector2 screenPoint, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(screenPoint, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_screenPoint;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(8 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystem_TryAddRaycast_m8B4904E8E52037689CC8A28E952BC532DAC13B8B (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryAddRaycast(Ray ray, float estimatedDistance, out XRRaycast raycast) => provider.TryAddRaycast(ray, estimatedDistance, out raycast);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_1 = ___0_ray;
		float L_2 = ___1_estimatedDistance;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_3 = ___2_raycast;
		NullCheck(L_0);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, float, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem_RemoveRaycast_mD95EEE6441B70215E92C6FE47B8B586F61F5E331 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void RemoveRaycast(TrackableId trackableId) => provider.RemoveRaycast(trackableId);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_trackableId;
		NullCheck(L_0);
		VirtualActionInvoker1< TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 >::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_m8F80A2A2DB7028A18192426BC8A12C1AEE8BAE12 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, ray, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2 = ___0_ray;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, int32_t, int32_t >::Invoke(12 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::Raycast(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 XRRaycastSubsystem_Raycast_mA1E217F2C1B58EDE213F651AD6F966E77D67F688 (XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, int32_t ___1_trackableTypeMask, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return provider.Raycast(XRRaycastHit.defaultValue, screenPoint, trackableTypeMask, allocator);
		Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_inline(__this, SubsystemWithProvider_3_get_provider_m17F345D83321456E6AD5D5132DDC1A44A2754939_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_1;
		L_1 = XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_screenPoint;
		int32_t L_3 = ___1_trackableTypeMask;
		int32_t L_4 = ___2_allocator;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_5;
		L_5 = VirtualFuncInvoker4< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t, int32_t >::Invoke(13 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m1857D20E067E44CF3BAD3E96A368619BAB6474FA (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m1B4BADF1B98C07455D3BEEEB7A22FD8444904952 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mB9445EA71155D4A8A69DA2E3A929FDAF5C4BB3B3 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Vector2,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_mF21620620C50F046E545FBC7BD33B411C466D0A5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::TryAddRaycast(UnityEngine.Ray,System.Single,UnityEngine.XR.ARSubsystems.XRRaycast&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddRaycast_m42D31584099F01A3FC95D884A08C23BAA7515143 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float ___1_estimatedDistance, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___2_raycast, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycast = XRRaycast.defaultValue;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___2_raycast;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_1;
		L_1 = XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline(NULL);
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)L_0 = L_1;
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::RemoveRaycast(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_RemoveRaycast_m255F5FAC2D9A0E406FDE819156EBC7C11B23DF94 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_trackableId, const RuntimeMethod* method) 
{
	{
		// public virtual void RemoveRaycast(TrackableId trackableId) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRRaycast,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 Provider_GetChanges_m62ED7DA58CBC28C0C63EDFF72C9C6B7421A3B2B5 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___0_defaultRaycast, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual TrackableChanges<XRRaycast> GetChanges(XRRaycast defaultRaycast, Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5));
		TrackableChanges_1_t097463074AB33F65828FED3152F6A605C0B114A5 L_0 = V_0;
		return L_0;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___1_ray, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a Ray is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB51BA3F369D95E685969CC962493A3F0B421BA4D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mB206D5960A72ECCC6BC44AA91719306F790C4854_RuntimeMethod_var)));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___0_defaultRaycastHit, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, int32_t ___2_trackableTypeMask, int32_t ___3_allocator, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Raycasting using a screen point is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B9AEC2348486B831A3488530ACA1A6FECCC60DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_Raycast_mDB7696CAE66690693DA105DDC40B319A327807E6_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA6631023676667A3E88702E327B8CCC05F58F678 (Provider_tC72F146E1619DDA4C636684BE11D9D8A445EFE46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8(__this, SubsystemProvider_1__ctor_m14DC8034E7EF5275FC50EA47EF2355B6D9CC22B8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsViewportBasedRaycast_m9B041E253DF77C3584BC482D253746AB8A0B4FDB (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsWorldBasedRaycast_m06932061F9A99D5B2EDF87E420811B985EBD0F82 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRaycastSubsystemDescriptor_get_supportedTrackableTypes_mBE54DE9E3A97E78E7EDA4351C259382694864549 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRaycastSubsystemDescriptor_get_supportsTrackedRaycasts_mF4C11D10940AC7D4625AF00094029C4288997BB7 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_m5F967AE129CABAC92A8774272B77B97D5D52F5E9 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRRaycastSubsystemDescriptor(cinfo));
		Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 L_0 = ___0_cinfo;
		XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* L_1 = (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311*)il2cpp_codegen_object_new(XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor__ctor_m95E810A79E27BB9FE0CC927BCBDEE2BFC5A0B011 (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRRaycastSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1(__this, SubsystemDescriptorWithProvider_2__ctor_m07EAA6E76991BF9B677CE120674A862A92575EA1_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsViewportBasedRaycast = cinfo.supportsViewportBasedRaycast;
		bool L_3;
		L_3 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline(__this, L_3, NULL);
		// supportsWorldBasedRaycast = cinfo.supportsWorldBasedRaycast;
		bool L_4;
		L_4 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline(__this, L_4, NULL);
		// supportedTrackableTypes = cinfo.supportedTrackableTypes;
		int32_t L_5;
		L_5 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline(__this, L_5, NULL);
		// supportsTrackedRaycasts = cinfo.supportsTrackedRaycasts;
		bool L_6;
		L_6 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline((&___0_cinfo), NULL);
		XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline(__this, L_6, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_pinvoke_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_back(const Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshal_com_cleanup(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_mF1AF41E2F764A5BF0AF6A35C54C27DE25809AED9 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemImplementationType_mF1AF41E2F764A5BF0AF6A35C54C27DE25809AED9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_mF1AF41E2F764A5BF0AF6A35C54C27DE25809AED9_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m4A20D7E4790C43392F4F82D6B9FAC1D2759F744C (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m4A20D7E4790C43392F4F82D6B9FAC1D2759F744C_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m4A20D7E4790C43392F4F82D6B9FAC1D2759F744C_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsViewportBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsWorldBasedRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportedTrackableTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::get_supportsTrackedRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsTrackedRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(
		//     HashCodeUtil.ReferenceHash(id),
		//     HashCodeUtil.ReferenceHash(providerType),
		//     HashCodeUtil.ReferenceHash(subsystemTypeOverride),
		//     supportsViewportBasedRaycast.GetHashCode(),
		//     supportsWorldBasedRaycast.GetHashCode(),
		//     ((int)supportedTrackableTypes).GetHashCode(),
		//     supportsTrackedRaycasts.GetHashCode());
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		bool L_6;
		L_6 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_10;
		L_10 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		V_1 = L_10;
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_1), NULL);
		bool L_12;
		L_12 = Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline(__this, NULL);
		V_0 = L_12;
		int32_t L_13;
		L_13 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		int32_t L_14;
		L_14 = HashCodeUtil_Combine_m3B3273BD5CFEFD2D09635E1B69281B0ECD9819FB(L_1, L_3, L_5, L_7, L_9, L_11, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m6CC66C9C4BA7904DF1E9E9D7A3C74DC8D6A6C1BA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is Cinfo) && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(__this, ((*(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)((Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)(Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*)UnBox(L_1, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m4D9FFB9CFA4DF03E9AF2763D3E91926896FCD64D(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("XRRaycastSubsystemDescriptor:\nsupportsViewportBasedRaycast: {0}\nsupportsWorldBasedRaycast: {1}",
		//     supportsViewportBasedRaycast, supportsWorldBasedRaycast);
		bool L_0;
		L_0 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		bool L_3;
		L_3 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral73B1EF85B3661969EA06515B1FAB6B1BECBB653C, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_ToString_m3022468C4555B097321DCDB08B4079DA430EBB3A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     String.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsViewportBasedRaycast == other.supportsViewportBasedRaycast &&
		//     supportsWorldBasedRaycast == other.supportsWorldBasedRaycast &&
		//     supportedTrackableTypes == other.supportedTrackableTypes;
		String_t* L_0;
		L_0 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0060;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_11;
		L_11 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline(__this, NULL);
		int32_t L_12;
		L_12 = Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
	}

IL_0060:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8_AdjustorThunk (RuntimeObject* __this, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_other, const RuntimeMethod* method)
{
	Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m000A059C7529B861CDD3CEA698B9E25147554158 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_lhs, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) { return lhs.Equals(rhs); }
		Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m558E90C0C00847084F18453CE73079ED4B2EF7C2 (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___0_lhs, Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) { return !lhs.Equals(rhs); }
		Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_mD2E403B4E791DCE658297F8CA484149EB2D5F5B8((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler__ctor_m652B5689DE1A3C3EF7D12801DA27FA3B40E4412F(_thisAdjusted, ___0_name, method);
}
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::.ctor(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler__ctor_m1F4C2F43E028839CDD9B09EB51402C6F706431B5 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler__ctor_m1F4C2F43E028839CDD9B09EB51402C6F706431B5_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_targetObject, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler__ctor_m1F4C2F43E028839CDD9B09EB51402C6F706431B5(_thisAdjusted, ___0_name, ___1_targetObject, method);
}
// System.Void UnityEngine.XR.ARSubsystems.ScopedProfiler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4 (ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ScopedProfiler_tA2CF63F6C047FB63643D2263A4AC86C6A363EC6F*>(__this + _offset);
	ScopedProfiler_Dispose_m7B646405B4E52CC4677329D3B860BE9C17A9DAC4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method) 
{
	{
		// m_GuidLow = guidLow;
		uint64_t L_0 = ___0_guidLow;
		__this->___m_GuidLow_1 = L_0;
		// m_GuidHigh = guidHigh;
		uint64_t L_1 = ___1_guidHigh;
		__this->___m_GuidHigh_2 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_guidLow, uint64_t ___1_guidHigh, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0(_thisAdjusted, ___0_guidLow, ___1_guidHigh, method);
}
// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::get_empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 SerializableGuid_get_empty_m4E3F843DBDDCC5A4B19A19FBDF2F9B53EEAA0073 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SerializableGuid empty => k_Empty;
		il2cpp_codegen_runtime_class_init_inline(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0 = ((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields*)il2cpp_codegen_static_fields_for(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var))->___k_Empty_0;
		return L_0;
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.SerializableGuid::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	{
		// public Guid guid => GuidUtil.Compose(m_GuidLow, m_GuidHigh);
		uint64_t L_0 = __this->___m_GuidLow_1;
		uint64_t L_1 = __this->___m_GuidHigh_2;
		Guid_t L_2;
		L_2 = GuidUtil_Compose_m58AA1AA0AF27A23B64937C72023C6F72D4C8DD40(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Guid_t SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	Guid_t _returnValue;
	_returnValue = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.SerializableGuid::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_GuidLow.GetHashCode(), m_GuidHigh.GetHashCode());
		uint64_t* L_0 = (&__this->___m_GuidLow_1);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->___m_GuidHigh_2);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SerializableGuid_GetHashCode_mC33B7B6D908B3A62767C19B331620784F1998D07(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is SerializableGuid) && Equals((SerializableGuid)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7(__this, ((*(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*)UnBox(L_1, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	bool _returnValue;
	_returnValue = SerializableGuid_Equals_mEB4A1B39DD600CB499AC43BF60A3BD206A1EFD71(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public override string ToString() => guid.ToString();
		Guid_t L_0;
		L_0 = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(__this, NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableGuid_ToString_m4FB29C69FF91DC2020A96C3C83FE1B60F9C73047(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m66A8E16F22314214DECE08D94A189101A421603E (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, String_t* ___0_format, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string ToString(string format) => guid.ToString(format);
		Guid_t L_0;
		L_0 = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = ___0_format;
		String_t* L_2;
		L_2 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_0), L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableGuid_ToString_m66A8E16F22314214DECE08D94A189101A421603E_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableGuid_ToString_m66A8E16F22314214DECE08D94A189101A421603E(_thisAdjusted, ___0_format, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.SerializableGuid::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SerializableGuid_ToString_m514BCF03CE14CE663D9ECC9616DD28453334BE96 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public string ToString(string format, IFormatProvider provider) => guid.ToString(format, provider);
		Guid_t L_0;
		L_0 = SerializableGuid_get_guid_mC9C573E5730B2B18F6DFA80F0BCFD1A097C362B3(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = ___0_format;
		RuntimeObject* L_2 = ___1_provider;
		String_t* L_3;
		L_3 = Guid_ToString_mD2A93BCA0CBFABB680A93A8FA668AD90E7B56130((&V_0), L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* SerializableGuid_ToString_m514BCF03CE14CE663D9ECC9616DD28453334BE96_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SerializableGuid_ToString_m514BCF03CE14CE663D9ECC9616DD28453334BE96(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::Equals(UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7 (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     (m_GuidLow == other.m_GuidLow) &&
		//     (m_GuidHigh == other.m_GuidHigh);
		uint64_t L_0 = __this->___m_GuidLow_1;
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_GuidLow_1;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->___m_GuidHigh_2;
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_GuidHigh_2;
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7_AdjustorThunk (RuntimeObject* __this, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_other, const RuntimeMethod* method)
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378*>(__this + _offset);
	bool _returnValue;
	_returnValue = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::op_Equality(UnityEngine.XR.ARSubsystems.SerializableGuid,UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_op_Equality_mC3A84DAC77870811207A9D06CF5DF9C145EF400F (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_lhs, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(SerializableGuid lhs, SerializableGuid rhs) => lhs.Equals(rhs);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0 = ___1_rhs;
		bool L_1;
		L_1 = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.SerializableGuid::op_Inequality(UnityEngine.XR.ARSubsystems.SerializableGuid,UnityEngine.XR.ARSubsystems.SerializableGuid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializableGuid_op_Inequality_m563816F2887AEBAB0CD1F8DDFD08282B1DB4B3AF (SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___0_lhs, SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(SerializableGuid lhs, SerializableGuid rhs) => !lhs.Equals(rhs);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0 = ___1_rhs;
		bool L_1;
		L_1 = SerializableGuid_Equals_m7096244EB28310B3CB17CD79EE7068768C6AB4F7((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.SerializableGuid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableGuid__cctor_m99C1CBC863F8F315793500688464404564D5722B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly SerializableGuid k_Empty = new SerializableGuid(0, 0);
		SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 L_0;
		memset((&L_0), 0, sizeof(L_0));
		SerializableGuid__ctor_m0F2435157FEC8427E91A7D0DD39960BADE7209F0((&L_0), ((int64_t)0), ((int64_t)0), /*hidden argument*/NULL);
		((SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields*)il2cpp_codegen_static_fields_for(SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_il2cpp_TypeInfo_var))->___k_Empty_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsSupported(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsSupported_m9105265F71A68B18269095FFE362CD24148F6E7C (int32_t ___0_availability, const RuntimeMethod* method) 
{
	{
		// return (availability & SessionAvailability.Supported) != SessionAvailability.None;
		int32_t L_0 = ___0_availability;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.SessionAvailabilityExtensions::IsInstalled(UnityEngine.XR.ARSubsystems.SessionAvailability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SessionAvailabilityExtensions_IsInstalled_m5AA4AE58BC0BA7C30E77B1B06038BED076ABFFDB (int32_t ___0_availability, const RuntimeMethod* method) 
{
	{
		// return (availability & SessionAvailability.Installed) != SessionAvailability.None;
		int32_t L_0 = ___0_availability;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSessionSubsystem_get_nativePtr_m412275A9382FB5E0105A798037F322FF92DBB46E (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IntPtr nativePtr => provider.nativePtr;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		intptr_t L_1;
		L_1 = VirtualFuncInvoker0< intptr_t >::Invoke(18 /* System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr() */, L_0);
		return L_1;
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t XRSessionSubsystem_get_sessionId_m7A0FCE3B70A2E1F9C1732E0285EDFECFB8C30685 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Guid sessionId => provider.sessionId;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		Guid_t L_1;
		L_1 = VirtualFuncInvoker0< Guid_t >::Invoke(23 /* System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* XRSessionSubsystem_GetAvailabilityAsync_m30808B871A7C1BC1BAC7EE85B0F36DB4422769BF (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Promise<SessionAvailability> GetAvailabilityAsync() => provider.GetAvailabilityAsync();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_1;
		L_1 = VirtualFuncInvoker0< Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* >::Invoke(19 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!subsystemDescriptor.supportsInstall)
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_0;
		L_0 = SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_inline(__this, SubsystemWithProvider_3_get_subsystemDescriptor_mF7CA6B57486377149C97D5CA6D59C0F1D8BCEB48_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new NotSupportedException("InstallAsync is not supported on this platform.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE446F5E5E3D5CD70111EE44D96D38C2402691299)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRSessionSubsystem_InstallAsync_m7E278495740EB305D92109D0FFE0895B774D3DA7_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return provider.InstallAsync();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_3;
		L_3 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_3);
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_4;
		L_4 = VirtualFuncInvoker0< Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* >::Invoke(20 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::InstallAsync() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_mB926772E21C65B0CBCE36FD4610CEC1B677999C8 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConfigurationChooser m_DefaultConfigurationChooser = new DefaultConfigurationChooser();
		DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8* L_0 = (DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8*)il2cpp_codegen_object_new(DefaultConfigurationChooser_tB93030E74EE54B6D2930D6B898F7F08B89882EF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultConfigurationChooser__ctor_mDFBE2A3915F886FE4D79CD514F550A10CCC6A90C(L_0, NULL);
		__this->___m_DefaultConfigurationChooser_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultConfigurationChooser_5), (void*)L_0);
		// public XRSessionSubsystem()
		SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF(__this, SubsystemWithProvider_3__ctor_m8563E495EB3A4C08B0C3C47658443D5A72A646FF_RuntimeMethod_var);
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_1 = __this->___m_DefaultConfigurationChooser_5;
		__this->___m_ConfigurationChooser_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigurationChooser_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_m7413F6A15AA7A69B40F473129325FC71593ABAA6 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Reset() => provider.Reset();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(15 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Reset() */, L_0);
		return;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::DetermineConfiguration(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_features, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var descriptors = GetConfigurationDescriptors(Allocator.Temp);
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0;
		L_0 = XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2(__this, 2, NULL);
		V_0 = L_0;
		// if (descriptors.IsCreated)
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC((&V_0), NativeArray_1_get_IsCreated_mA25A93E9848172129AC64B461B713935273B26EC_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// using (descriptors)
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_2 = V_0;
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B((&V_1), NativeArray_1_Dispose_mBDD575450D75412D3AED5564F20533D7333E839B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (descriptors.Length > 0)
				int32_t L_3;
				L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
				if ((((int32_t)L_3) <= ((int32_t)0)))
				{
					goto IL_0037_1;
				}
			}
			{
				// return m_ConfigurationChooser.ChooseConfiguration(descriptors, features);
				ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_4 = __this->___m_ConfigurationChooser_6;
				NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_5 = V_0;
				NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE L_6;
				L_6 = NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0(L_5, NativeSlice_1_op_Implicit_m290EE8D065382D8121D3681FC0CDC7C6E0D1A8D0_RuntimeMethod_var);
				uint64_t L_7 = ___0_features;
				NullCheck(L_4);
				Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_8;
				L_8 = VirtualFuncInvoker2< Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947, NativeSlice_1_t398BDCDCE5F9AF840285A8E6EC69152FED8FADFE, uint64_t >::Invoke(4 /* UnityEngine.XR.ARSubsystems.Configuration UnityEngine.XR.ARSubsystems.ConfigurationChooser::ChooseConfiguration(Unity.Collections.NativeSlice`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>,UnityEngine.XR.ARSubsystems.Feature) */, L_4, L_6, L_7);
				Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_9;
				memset((&L_9), 0, sizeof(L_9));
				Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m443239B7937D845C4BDDFF63A68A515EC92204EB_RuntimeMethod_var);
				V_2 = L_9;
				goto IL_0051;
			}

IL_0037_1:
			{
				// }
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// return null;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D));
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_10 = V_3;
		return L_10;
	}

IL_0051:
	{
		// }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m25DA803713B0800B1C39326D71817305C6A38749 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// currentConfiguration = DetermineConfiguration(requestedFeatures);
		uint64_t L_0;
		L_0 = XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3(__this, NULL);
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_1;
		L_1 = XRSessionSubsystem_DetermineConfiguration_m0A5C3F6A14CB8F2D74D5162CCCD5FBD3D51F58A5(__this, L_0, NULL);
		XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline(__this, L_1, NULL);
		// if (currentConfiguration.HasValue)
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_2;
		L_2 = XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline(__this, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_inline((&V_0), Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// provider.Update(updateParams, currentConfiguration.Value);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_4;
		L_4 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_5 = ___0_updateParams;
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_6;
		L_6 = XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline(__this, NULL);
		V_0 = L_6;
		Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 L_7;
		L_7 = Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014((&V_0), Nullable_1_get_Value_mE682C3E729CFBCC34BB9C4A636722ACD6E35D014_RuntimeMethod_var);
		NullCheck(L_4);
		VirtualActionInvoker2< XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 >::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration) */, L_4, L_5, L_7);
		return;
	}

IL_003d:
	{
		// provider.Update(updateParams);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_8;
		L_8 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_9 = ___0_updateParams;
		NullCheck(L_8);
		VirtualActionInvoker1< XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 >::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams) */, L_8, L_9);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = __this->___U3CcurrentConfigurationU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = ___0_value;
		__this->___U3CcurrentConfigurationU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedFeatures_m2193DB34D2CC44D20701580C9FA062EA111CFCE3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Feature requestedFeatures => provider.requestedFeatures;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(10 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures() */, L_0);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 XRSessionSubsystem_GetConfigurationDescriptors_m437FE62BDE0C6F37AC5A75C1A11674AB403147F2 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => provider.GetConfigurationDescriptors(allocator);
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		int32_t L_1 = ___0_allocator;
		NullCheck(L_0);
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_2;
		L_2 = VirtualFuncInvoker1< NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2, int32_t >::Invoke(14 /* Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_mE4BBAAC4555EA3AAF9B8113406DC920054A1307D (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void OnApplicationPause() =>  provider.OnApplicationPause();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(16 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_mCECA16418E8ECAFFCAEDE50D80364B4709A0D488 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void OnApplicationResume() => provider.OnApplicationResume();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume() */, L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_mC2FE654BEB0240C5C3FF85E31DA35E52F85DB550 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackingState trackingState => provider.trackingState;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_requestedTrackingMode_m9C8B343227EE42F5ED9980A26008BBEFA101D49F (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.requestedTrackingMode.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(11 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode() */, L_0);
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_requestedTrackingMode_m8BBE750492C85A5D35063E246E1F090D5DF73026 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.requestedTrackingMode = value.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		uint64_t L_1 = ___0_value;
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< uint64_t >::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature) */, L_0, L_2);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t XRSessionSubsystem_get_currentTrackingMode_mD059B4FBD0D07A428470FF2677002EA51AA2CFB5 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Feature currentTrackingMode => provider.currentTrackingMode.TrackingModes();
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VirtualFuncInvoker0< uint64_t >::Invoke(13 /* UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode() */, L_0);
		uint64_t L_2;
		L_2 = FeatureExtensions_TrackingModes_m98FFB5EE942CA939B0F4F06A425673A4081287B7(L_1, NULL);
		return L_2;
	}
}
// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_configurationChooser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* XRSessionSubsystem_get_configurationChooser_mF3975E98A8A317F63FF3D89CF3E5865EDE47E760 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ConfigurationChooser;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_0 = __this->___m_ConfigurationChooser_6;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_configurationChooser(UnityEngine.XR.ARSubsystems.ConfigurationChooser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_configurationChooser_m65A4004DB9BA7A2C132DCBA01AD6804509ED5B6E (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* ___0_value, const RuntimeMethod* method) 
{
	{
		// if (ReferenceEquals(value, null))
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// m_ConfigurationChooser = m_DefaultConfigurationChooser;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_1 = __this->___m_DefaultConfigurationChooser_5;
		__this->___m_ConfigurationChooser_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigurationChooser_6), (void*)L_1);
		return;
	}

IL_0010:
	{
		// m_ConfigurationChooser = value;
		ConfigurationChooser_t4DFAB6BE3767C3C5DA0E43FA16CD067009A487C2* L_2 = ___0_value;
		__this->___m_ConfigurationChooser_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ConfigurationChooser_6), (void*)L_2);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m78C6CAA0D4570B7E410C1D375A3CC0AEEC1AFE5A (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public NotTrackingReason notTrackingReason => provider.notTrackingReason;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRateEnabled_m0D73F1F3C3B72ACBA97EDA22A62E69C727D2EDB7 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.matchFrameRateEnabled;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRateRequested_m6344C601746F6822B56E362F1FC4C4ABE15D22A4 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => provider.matchFrameRateRequested;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_matchFrameRateRequested_m778FF485C34682FE76BCA4871EB4D1D2F5AF73F1 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => provider.matchFrameRateRequested = value;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		bool L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< bool >::Invoke(26 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_matchFrameRateRequested(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_frameRate_m08D6A4F0F598E99A26747827F0630CFDB922A4E3 (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int frameRate => provider.frameRate;
		Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* L_0;
		L_0 = SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_inline(__this, SubsystemWithProvider_3_get_provider_m0687A3244382D007238F75D7A0BF860A20086557_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m6E563F958F1D15385E35A74FC8A82E6AEA46343E (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Start() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m333D402B548DA93070E850B93D06EC4F1FB07026 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Stop() {}
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_mED507841F7B7D096FC116F775A144293B59E783A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams) { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m7DA03CBB0EBA3A2798DF9681CBDDBCA0AE224C85 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_updateParams, Configuration_tF3E68F5793D5A997146A65AEAAC9B062BCAF0947 ___1_configuration, const RuntimeMethod* method) 
{
	{
		// public virtual void Update(XRSessionUpdateParams updateParams, Configuration configuration) { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedFeatures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedFeatures_m10A009D1F22281A8E1BDEA2156B6DF78C03BA855 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature requestedFeatures => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_requestedTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_requestedTrackingMode_m7B7AC5BD9BAEB3B75E96FCC308EDB19523AF2834 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_requestedTrackingMode(UnityEngine.XR.ARSubsystems.Feature)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_requestedTrackingMode_m8E0E2EBDB0E20C7E4B4DDD4BFCEDF3C8009BA2E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set {}
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_currentTrackingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Provider_get_currentTrackingMode_m65B8B630C321A5B41ACDC2F01D0DE2FF111CE638 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual Feature currentTrackingMode => Feature.None;
		return (uint64_t)(((int64_t)0));
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetConfigurationDescriptors(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 Provider_GetConfigurationDescriptors_m66DEAAC3E52B4D710710989049669C7DC7B6D643 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, int32_t ___0_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public virtual NativeArray<ConfigurationDescriptor> GetConfigurationDescriptors(Allocator allocator) => default;
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2));
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m8A97A126A24DE21208CC6C23BDA3C462F7DD0311 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public override void Destroy() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_mC3F1E5323D153985545F3EDDF20DA73703468FC2 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void Reset() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_m8FB7F1B59209A522883E89CCFD925A67198E9C90 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationPause() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_m744FBE7BF974465A14E7ABD2EBAD3EC7E588B117 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnApplicationResume() { }
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Provider_get_nativePtr_mB998A97B2BFEC1BB38F64D7B507FA0A1FB9C1B67 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual IntPtr nativePtr => IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* Provider_GetAvailabilityAsync_m0CC77C1C614055744ADFBB72CA4297D4E51A0EE9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(SessionAvailability.None);
		Promise_1_t7BC5F1754A27CF06571C0C51E5893AE44146B274* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3(0, Promise_1_CreateResolvedPromise_mFE0B943258581DA1E3C8A38D2B1FDF6C431276B3_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* Provider_InstallAsync_mC7CC25E00D2B78EF1D9B8615ADF663BDA2DB2419 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Promise<SessionInstallationStatus>.CreateResolvedPromise(SessionInstallationStatus.ErrorInstallNotSupported);
		Promise_1_t5FC5C28B835D1A44C362235B30176D38FCBC7DEC* L_0;
		L_0 = Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880(4, Promise_1_CreateResolvedPromise_mF2D187E7D28DAABC9682974F8BC24DD94AEC3880_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m0203345C74B979CB55AC990DA824AD8DE0CA1ADB (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_m1D74C45C3CB3C617E7AB3D79C31F0B77CE7ECA32 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_sessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Provider_get_sessionId_m34F4CBEF73037CC97575A15ED53526D5030CCC93 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual Guid sessionId => Guid.Empty;
		Guid_t L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->___Empty_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateEnabled_m99E9CB391AC8D0CCFEBB9591C6725B2B06E2C5B9 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool matchFrameRateEnabled => false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_matchFrameRateRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRateRequested_m227999FA334E01B18CCB64CEDE9683FB6055B6C1 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// get => false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::set_matchFrameRateRequested(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// if (value)
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new NotSupportedException("Matching frame rate is not supported.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6EAFD4C3B23645C412BB41A74CBFEB5A62E11BF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_set_matchFrameRateRequested_m7D3DF9134FA202F846C13A322D4E895801E1B19A_RuntimeMethod_var)));
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3 (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("Querying the frame rate is not supported by this session subsystem.");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B1384C148B6355F25E67F7DFA0D39159B634A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Provider_get_frameRate_m3D2F14E59249D30B755798C8C0732B0CEFA059E3_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m43661C1B8B6373D456C0CDA35F96AACBAB01290A (Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997(__this, SubsystemProvider_1__ctor_mB17ACABA3F2892B7CA5AE85EBF66B795E26AA997_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m516AB9E3CDBE8002D4EBD036EDFD787C46C5FF26 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m93A3C60962B96C0AC75288931A21E2D2C0CF3895 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRSessionSubsystemDescriptor(cinfo));
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_0 = ___0_cinfo;
		XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* L_1 = (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076*)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7(L_1, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12(L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mB1B365F156769946A415E3A37A4FDDE167D5D5B7 (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_cinfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// XRSessionSubsystemDescriptor(Cinfo cinfo)
		SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C(__this, SubsystemDescriptorWithProvider_2__ctor_mC889EBB6C5855DD9086D1ABADA7C64D5D3461B9C_RuntimeMethod_var);
		// id = cinfo.id;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline(__this, L_0, NULL);
		// providerType = cinfo.providerType;
		Type_t* L_1;
		L_1 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline(__this, L_1, NULL);
		// subsystemTypeOverride = cinfo.subsystemTypeOverride;
		Type_t* L_2;
		L_2 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_cinfo), NULL);
		SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline(__this, L_2, NULL);
		// supportsInstall = cinfo.supportsInstall;
		bool L_3;
		L_3 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline(__this, L_3, NULL);
		// supportsMatchFrameRate = cinfo.supportsMatchFrameRate;
		bool L_4;
		L_4 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_cinfo), NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline(__this, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_pinvoke_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_back(const Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03& unmarshaled)
{
	Exception_t* ___U3CproviderTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<providerType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CproviderTypeU3Ek__BackingField_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
IL2CPP_EXTERN_C void Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshal_com_cleanup(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline(_thisAdjusted, ___0_value, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_AdjustorThunk (RuntimeObject* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_providerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_providerType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemTypeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemTypeOverride(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline(_thisAdjusted, ___0_value, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m1E7C284EE29C67952C8742FD257B3BA09F84D8B3 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t* Cinfo_get_subsystemImplementationType_m1E7C284EE29C67952C8742FD257B3BA09F84D8B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = Cinfo_get_subsystemImplementationType_m1E7C284EE29C67952C8742FD257B3BA09F84D8B3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m116B6D5857F561E8119812F01089CDDC08AFF3CA (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Cinfo_set_subsystemImplementationType_m116B6D5857F561E8119812F01089CDDC08AFF3CA_AdjustorThunk (RuntimeObject* __this, Type_t* ___0_value, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	Cinfo_set_subsystemImplementationType_m116B6D5857F561E8119812F01089CDDC08AFF3CA_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// int hash = HashCodeUtil.ReferenceHash(id);
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		int32_t L_1;
		L_1 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_0, NULL);
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(providerType);
		Type_t* L_2;
		L_2 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		int32_t L_3;
		L_3 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_2, NULL);
		// hash = hash * 486187739 + HashCodeUtil.ReferenceHash(subsystemTypeOverride);
		Type_t* L_4;
		L_4 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		int32_t L_5;
		L_5 = HashCodeUtil_ReferenceHash_m2DB64625F0287C798373FE7D45AA20B43AC3EDA5(L_4, NULL);
		// hash = hash * 486187739 + supportsInstall.GetHashCode();
		bool L_6;
		L_6 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// hash = hash * 486187739 + supportsMatchFrameRate.GetHashCode();
		bool L_8;
		L_8 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		V_0 = L_8;
		int32_t L_9;
		L_9 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9));
	}
}
IL2CPP_EXTERN_C  int32_t Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Cinfo_GetHashCode_m2D7B3F90910D284E6D8696F3E187E61436768107(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     string.Equals(id, other.id) &&
		//     ReferenceEquals(providerType, other.providerType) &&
		//     ReferenceEquals(subsystemTypeOverride, other.subsystemTypeOverride) &&
		//     supportsInstall == other.supportsInstall &&
		//     supportsMatchFrameRate == other.supportsMatchFrameRate;
		String_t* L_0;
		L_0 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline(__this, NULL);
		String_t* L_1;
		L_1 = Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline((&___0_other), NULL);
		bool L_2;
		L_2 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Type_t* L_3;
		L_3 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline(__this, NULL);
		Type_t* L_4;
		L_4 = Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))))
		{
			goto IL_0051;
		}
	}
	{
		Type_t* L_5;
		L_5 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline(__this, NULL);
		Type_t* L_6;
		L_6 = Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline((&___0_other), NULL);
		if ((!(((RuntimeObject*)(Type_t*)L_5) == ((RuntimeObject*)(Type_t*)L_6))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_7;
		L_7 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline(__this, NULL);
		bool L_8;
		L_8 = Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0051;
		}
	}
	{
		bool L_9;
		L_9 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline(__this, NULL);
		bool L_10;
		L_10 = Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline((&___0_other), NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0051:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6_AdjustorThunk (RuntimeObject* __this, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_other, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is Cinfo && Equals((Cinfo)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6(__this, ((*(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)((Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)(Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*)UnBox(L_1, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03*>(__this + _offset);
	bool _returnValue;
	_returnValue = Cinfo_Equals_m053CC1A9E8D4DBF1FAFACF66083B615EF36CA572(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_m7F2BC979F66951435B1D4904A6EB885A0F1D0020 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_lhs, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(Cinfo lhs, Cinfo rhs) => lhs.Equals(rhs);
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mDB236737C959482D1C58D01820447D302C320FB8 (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___0_lhs, Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(Cinfo lhs, Cinfo rhs) => !lhs.Equals(rhs);
		Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03 L_0 = ___1_rhs;
		bool L_1;
		L_1 = Cinfo_Equals_m0C051CCCCA3A44F0C851768FE1CDB49DAC6D82B6((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CscreenOrientationU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A _returnValue;
	_returnValue = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CscreenDimensionsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_AdjustorThunk (RuntimeObject* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(((int)screenOrientation).GetHashCode(), screenDimensions.GetHashCode());
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline((&V_1), NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRSessionUpdateParams_GetHashCode_m735A861B2C2718DBF5588467EC76FC6EC77EFE8D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => (obj is XRSessionUpdateParams) && Equals((XRSessionUpdateParams)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(__this, ((*(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)((XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)(XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*)UnBox(L_1, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mE2FA6A03BEBC662F543FA73D25561369FAEE7EAF(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string ToString() => $"Screen Orientation: {screenOrientation}, Screen Dimensions: {screenDimensions}";
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(ScreenOrientation_t928A8AFB38625B9356E57BA75BBD90FA653DCFC2_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral371D4A83362DFDF00E89BA68C82057A64E205D24, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRSessionUpdateParams_ToString_m82D102D9405D9B5FCA96E55074C982F225287D80(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// (screenOrientation == other.screenOrientation) &&
		// screenDimensions.Equals(other.screenDimensions);
		int32_t L_0;
		L_0 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline(__this, NULL);
		int32_t L_1;
		L_1 = XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline(__this, NULL);
		V_0 = L_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_3;
		L_3 = XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline((&___0_other), NULL);
		bool L_4;
		L_4 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline((&V_0), L_3, NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C_AdjustorThunk (RuntimeObject* __this, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_other, const RuntimeMethod* method)
{
	XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_op_Equality_mF18D3DF08FBD72740EB348A62B5077A71261B650 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_lhs, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator ==(XRSessionUpdateParams lhs, XRSessionUpdateParams rhs) => lhs.Equals(rhs);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_op_Inequality_mC310D93D46B42674C8EBF7938945E4AC7B7000D6 (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___0_lhs, XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// public static bool operator !=(XRSessionUpdateParams lhs, XRSessionUpdateParams rhs) => !lhs.Equals(rhs);
		XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRSessionUpdateParams_Equals_mEC4D21B1DFB2DB2327FCE21B43C144DD2003828C((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::set_subId1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId_set_subId1_mFA12049C24961BC2FE7D41A2D0FE30DF4B3F39D2 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SubId1 = value;
		uint64_t L_0 = ___0_value;
		__this->___m_SubId1_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId_set_subId1_mFA12049C24961BC2FE7D41A2D0FE30DF4B3F39D2_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId_set_subId1_mFA12049C24961BC2FE7D41A2D0FE30DF4B3F39D2_inline(_thisAdjusted, ___0_value, method);
}
// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::get_subId2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::set_subId2(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId_set_subId2_mB7AA91412C0731CF59A8CC24CF75012D3C77C76D (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SubId2 = value;
		uint64_t L_0 = ___0_value;
		__this->___m_SubId2_3 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId_set_subId2_mB7AA91412C0731CF59A8CC24CF75012D3C77C76D_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_value, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId_set_subId2_mB7AA91412C0731CF59A8CC24CF75012D3C77C76D_inline(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method) 
{
	{
		// m_SubId1 = subId1;
		uint64_t L_0 = ___0_subId1;
		__this->___m_SubId1_2 = L_0;
		// m_SubId2 = subId2;
		uint64_t L_1 = ___1_subId2;
		__this->___m_SubId2_3 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_subId1, uint64_t ___1_subId2, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5(_thisAdjusted, ___0_subId1, ___1_subId2, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, String_t* ___0_idString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27A34E033C9A6BBBDD443A6D2BC0C16783E281B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5856982C295C68DD87C424F2F7B795A142D7C134);
		s_Il2CppMethodInitialized = true;
	}
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var regexMatch = s_TrackableIdRegex.Match(idString);
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0;
		String_t* L_1 = ___0_idString;
		NullCheck(L_0);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_2;
		L_2 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_0, L_1, NULL);
		V_0 = L_2;
		// if (!regexMatch.Success)
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_3, NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// throw new FormatException($"trackable ID '{idString}' does not match expected format");
		String_t* L_5 = ___0_idString;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E1CB07B1BC79148DB21D87F48D50AC486D3A55)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA56CB75B19CD4AE3099069A8FAE874B97EE80348)), NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_7 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF_RuntimeMethod_var)));
	}

IL_002a:
	{
	}
	try
	{// begin try (depth: 1)
		// m_SubId1 = ulong.Parse(regexMatch.Groups["part1"].Value, System.Globalization.NumberStyles.HexNumber);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_8 = V_0;
		NullCheck(L_8);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_9;
		L_9 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_8);
		NullCheck(L_9);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_10;
		L_10 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_9, _stringLiteral5856982C295C68DD87C424F2F7B795A142D7C134, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_10, NULL);
		uint64_t L_12;
		L_12 = UInt64_Parse_m5D07DDFA6DA8E3F85D6E07EAE33756AF742CBAB0(L_11, ((int32_t)515), NULL);
		__this->___m_SubId1_2 = L_12;
		// m_SubId2 = ulong.Parse(regexMatch.Groups["part2"].Value, System.Globalization.NumberStyles.HexNumber);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_13 = V_0;
		NullCheck(L_13);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_14;
		L_14 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_13);
		NullCheck(L_14);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_15;
		L_15 = GroupCollection_get_Item_mE9B3A83B3563620EF70CFCD5F13E404864351B7A(L_14, _stringLiteral27A34E033C9A6BBBDD443A6D2BC0C16783E281B0, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_15, NULL);
		uint64_t L_17;
		L_17 = UInt64_Parse_m5D07DDFA6DA8E3F85D6E07EAE33756AF742CBAB0(L_16, ((int32_t)515), NULL);
		__this->___m_SubId2_3 = L_17;
		// }
		goto IL_008f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new FormatException($"cannot parse trackable ID '{idString}'", e);
		String_t* L_18 = ___0_idString;
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral241BE6E385975D9F12D5076DDE1873A5D169C4B4)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_20 = V_1;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_21 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		FormatException__ctor_mE31CCFC2A6FA296CA9E9C6813112D7850FE682D4(L_21, L_19, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_008f:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_idString, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	TrackableId__ctor_m75F2739A83A25E2B7C34DE87E85187F79A4C86AF(_thisAdjusted, ___0_idString, method);
}
// System.String UnityEngine.XR.ARSubsystems.TrackableId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}-{1}",
		//     m_SubId1.ToString("X16"),
		//     m_SubId2.ToString("X16"));
		uint64_t* L_0 = (&__this->___m_SubId1_2);
		String_t* L_1;
		L_1 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		uint64_t* L_2 = (&__this->___m_SubId2_3);
		String_t* L_3;
		L_3 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TrackableId_ToString_m4BE1AD91726751D994E6FB864B231BE5D7D3F85F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// public override int GetHashCode() => HashCodeUtil.Combine(m_SubId1.GetHashCode(), m_SubId2.GetHashCode());
		uint64_t* L_0 = (&__this->___m_SubId1_2);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		uint64_t* L_2 = (&__this->___m_SubId2_3);
		int32_t L_3;
		L_3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_2, NULL);
		int32_t L_4;
		L_4 = HashCodeUtil_Combine_m98169BF154323DEFC91DB146CDD3CE7550B6AD36(L_1, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TrackableId_GetHashCode_m6150BF091C3C17A84021CC18B443D5C297F89537(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override bool Equals(object obj) => obj is TrackableId && Equals((TrackableId)obj);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(__this, ((*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)UnBox(L_1, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m67C98169A04DB96CCEBC08A05B3FF9544B52C3E5(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method) 
{
	{
		// public bool Equals(TrackableId other) => (m_SubId1 == other.m_SubId1) && (m_SubId2 == other.m_SubId2);
		uint64_t L_0 = __this->___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1 = ___0_other;
		uint64_t L_2 = L_1.___m_SubId1_2;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_3 = __this->___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_other;
		uint64_t L_5 = L_4.___m_SubId2_3;
		return (bool)((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E_AdjustorThunk (RuntimeObject* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_other, const RuntimeMethod* method)
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*>(__this + _offset);
	bool _returnValue;
	_returnValue = TrackableId_Equals_m7263BB158392C4F1B57BEE16D4F1FBBCF01E4A6E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m9E51E31C58CA710A1BD2E3AE1D2286E2FE5B3529 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_lhs, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// (lhs.m_SubId1 == rhs.m_SubId1) &&
		// (lhs.m_SubId2 == rhs.m_SubId2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_lhs;
		uint64_t L_1 = L_0.___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = ___1_rhs;
		uint64_t L_3 = L_2.___m_SubId1_2;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_lhs;
		uint64_t L_5 = L_4.___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___1_rhs;
		uint64_t L_7 = L_6.___m_SubId2_3;
		return (bool)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Inequality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableId_op_Inequality_mBEED941F67FCF17377C6F01882CBA551B47246D4 (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_lhs, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// (lhs.m_SubId1 != rhs.m_SubId1) ||
		// (lhs.m_SubId2 != rhs.m_SubId2);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_lhs;
		uint64_t L_1 = L_0.___m_SubId1_2;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_2 = ___1_rhs;
		uint64_t L_3 = L_2.___m_SubId1_2;
		if ((!(((uint64_t)L_1) == ((uint64_t)L_3))))
		{
			goto IL_0020;
		}
	}
	{
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_4 = ___0_lhs;
		uint64_t L_5 = L_4.___m_SubId2_3;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_6 = ___1_rhs;
		uint64_t L_7 = L_6.___m_SubId2_3;
		return (bool)((((int32_t)((((int64_t)L_5) == ((int64_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__cctor_m0233247C572757642543FD7F9D7AFFA432EC916F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Regex s_TrackableIdRegex = new Regex(@"^(?<part1>[a-fA-F\d]{16})-(?<part2>[a-fA-F\d]{16})$",
		//                                                      RegexOptions.Compiled|RegexOptions.CultureInvariant|RegexOptions.Singleline|RegexOptions.ExplicitCapture);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteralBEC9FDEA1EB953376E5F17E9CEC1AFAC97FDD26D, ((int32_t)540), NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_TrackableIdRegex_0), (void*)L_0);
		// static TrackableId s_InvalidId = new TrackableId(0, 0);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		TrackableId__ctor_mB12C56ADDEFA44578A429DDA57A6C78B833B41F5((&L_1), ((int64_t)0), ((int64_t)0), /*hidden argument*/NULL);
		((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImageAsyncConversionStatusExtensions::IsDone(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCpuImageAsyncConversionStatusExtensions_IsDone_m7AD981DD5E7F21BC4ADAD35955B9EBB1C52825EA (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_status;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImageAsyncConversionStatusExtensions::IsError(UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCpuImageAsyncConversionStatusExtensions_IsError_m699680413B1419513A165D4BAB6481512B5A5E50 (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_status;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1))) <= ((uint32_t)2))))
		{
			goto IL_0008;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_NativeTexture; }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	intptr_t _returnValue;
	_returnValue = XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_nativeTexture(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_nativeTexture_mE5EF6CBBBE13191EF65501EC9A45C2F64964B27D (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_NativeTexture = value; }
		intptr_t L_0 = ___0_value;
		__this->___m_NativeTexture_0 = L_0;
		// private set { m_NativeTexture = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_nativeTexture_mE5EF6CBBBE13191EF65501EC9A45C2F64964B27D_AdjustorThunk (RuntimeObject* __this, intptr_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_nativeTexture_mE5EF6CBBBE13191EF65501EC9A45C2F64964B27D_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Width; }
		int32_t L_0 = __this->___m_Width_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_width_mA5D674B5378CB5B8AADD7A93E027CBF4BD27A37C (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Width = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Width_1 = L_0;
		// private set { m_Width = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_width_mA5D674B5378CB5B8AADD7A93E027CBF4BD27A37C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_width_mA5D674B5378CB5B8AADD7A93E027CBF4BD27A37C_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Height; }
		int32_t L_0 = __this->___m_Height_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_height_mCD63667233B39883DF1E431446ED926AC3AF3992 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Height = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Height_2 = L_0;
		// private set { m_Height = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_height_mCD63667233B39883DF1E431446ED926AC3AF3992_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_height_mCD63667233B39883DF1E431446ED926AC3AF3992_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_MipmapCount; }
		int32_t L_0 = __this->___m_MipmapCount_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_mipmapCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_mipmapCount_m7B8AAB937C5157B15A280672BC5C105FAF30D7E8 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_MipmapCount = value; }
		int32_t L_0 = ___0_value;
		__this->___m_MipmapCount_3 = L_0;
		// private set { m_MipmapCount = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_mipmapCount_m7B8AAB937C5157B15A280672BC5C105FAF30D7E8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_mipmapCount_m7B8AAB937C5157B15A280672BC5C105FAF30D7E8_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Format; }
		int32_t L_0 = __this->___m_Format_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_format(UnityEngine.TextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_format_mAB9FB1797A83CC68AC222A861C185FE2F8035058 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Format = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Format_4 = L_0;
		// private set { m_Format = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_format_mAB9FB1797A83CC68AC222A861C185FE2F8035058_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_format_mAB9FB1797A83CC68AC222A861C185FE2F8035058_inline(_thisAdjusted, ___0_value, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PropertyNameId; }
		int32_t L_0 = __this->___m_PropertyNameId_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_propertyNameId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_propertyNameId_m4D99BAF8AF884D653834D29D124F106A4AD7189D (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_PropertyNameId = value; }
		int32_t L_0 = ___0_value;
		__this->___m_PropertyNameId_5 = L_0;
		// private set { m_PropertyNameId = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_propertyNameId_m4D99BAF8AF884D653834D29D124F106A4AD7189D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_propertyNameId_m4D99BAF8AF884D653834D29D124F106A4AD7189D_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return (m_NativeTexture != IntPtr.Zero) && (m_Width > 0) && (m_Height > 0); }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->___m_Width_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = __this->___m_Height_2;
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_get_valid_mBEE2CC268CC8773618BAB7794118746E235A6761(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		int32_t L_0 = __this->___m_Depth_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_depth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_depth_mD62E28995B11B8631C2DF7B02416A2D310F35C49 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set => m_Depth = value;
		int32_t L_0 = ___0_value;
		__this->___m_Depth_6 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_depth_mD62E28995B11B8631C2DF7B02416A2D310F35C49_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_depth_mD62E28995B11B8631C2DF7B02416A2D310F35C49_inline(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_dimension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Dimension;
		int32_t L_0 = __this->___m_Dimension_7;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_dimension(UnityEngine.Rendering.TextureDimension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_dimension_m75DC4703441BF9E812D18C0DFBF0A9839A52554B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set => m_Dimension = value;
		int32_t L_0 = ___0_value;
		__this->___m_Dimension_7 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_set_dimension_m75DC4703441BF9E812D18C0DFBF0A9839A52554B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_set_dimension_m75DC4703441BF9E812D18C0DFBF0A9839A52554B_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     m_Width.Equals(other.m_Width) &&
		//     m_Height.Equals(other.m_Height) &&
		//     m_Depth.Equals(other.m_Depth) &&
		//     m_Dimension == other.m_Dimension &&
		//     m_MipmapCount.Equals(other.m_MipmapCount) &&
		//     (m_Format == other.m_Format);
		int32_t* L_0 = (&__this->___m_Width_1);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_Width_1;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_4 = (&__this->___m_Height_2);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_5 = ___0_other;
		int32_t L_6 = L_5.___m_Height_2;
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_8 = (&__this->___m_Depth_6);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_9 = ___0_other;
		int32_t L_10 = L_9.___m_Depth_6;
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12 = __this->___m_Dimension_7;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_13 = ___0_other;
		int32_t L_14 = L_13.___m_Dimension_7;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t* L_15 = (&__this->___m_MipmapCount_3);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_16 = ___0_other;
		int32_t L_17 = L_16.___m_MipmapCount_3;
		bool L_18;
		L_18 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_19 = __this->___m_Format_4;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_20 = ___0_other;
		int32_t L_21 = L_20.___m_Format_4;
		return (bool)((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
	}

IL_0069:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872_AdjustorThunk (RuntimeObject* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_NativeTexture = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_NativeTexture_0 = L_0;
		// m_Width = 0;
		__this->___m_Width_1 = 0;
		// m_Height = 0;
		__this->___m_Height_2 = 0;
		// m_Depth = 0;
		__this->___m_Depth_6 = 0;
		// m_Dimension = (TextureDimension)0;
		__this->___m_Dimension_7 = 0;
		// m_MipmapCount = 0;
		__this->___m_MipmapCount_3 = 0;
		// m_Format = (TextureFormat)0;
		__this->___m_Format_4 = 0;
		// m_PropertyNameId = 0;
		__this->___m_PropertyNameId_5 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	XRTextureDescriptor_Reset_m1BE8024830BA7AFB94AAD01731FDB449DD12A01F(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method) 
{
	{
		// return
		//     hasIdenticalTextureMetadata(other) &&
		//     m_PropertyNameId.Equals(other.m_PropertyNameId) &&
		//     (m_NativeTexture == other.m_NativeTexture);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___0_other;
		bool L_1;
		L_1 = XRTextureDescriptor_hasIdenticalTextureMetadata_mB4DA1A4CFF4ABB66F8FF3AF1F310E60BA1B3F872(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t* L_2 = (&__this->___m_PropertyNameId_5);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = ___0_other;
		int32_t L_4 = L_3.___m_PropertyNameId_5;
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_6 = __this->___m_NativeTexture_0;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_7 = ___0_other;
		intptr_t L_8 = L_7.___m_NativeTexture_0;
		bool L_9;
		L_9 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_6, L_8, NULL);
		return L_9;
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B_AdjustorThunk (RuntimeObject* __this, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_other, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ((obj is XRTextureDescriptor) && Equals((XRTextureDescriptor)obj));
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_2;
		L_2 = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B(__this, ((*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)UnBox(L_1, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	bool _returnValue;
	_returnValue = XRTextureDescriptor_Equals_m42127F01DF3CDEA1F38CF07E6057E8AD9E6F4570(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::op_Equality(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_op_Equality_m01CB132C4DCE6AF54CEDD38CD672D4B6EC539C34 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_lhs, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return lhs.Equals(rhs);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B((&___0_lhs), L_0, NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::op_Inequality(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRTextureDescriptor_op_Inequality_mE62A303B6BBF10B27B1A15796892656B4271225A (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___0_lhs, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___1_rhs, const RuntimeMethod* method) 
{
	{
		// return !lhs.Equals(rhs);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___1_rhs;
		bool L_1;
		L_1 = XRTextureDescriptor_Equals_m4931F85C225CAC63EC71FBCE246204E244B6CA2B((&___0_lhs), L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int hashCode = 486187739;
		// hashCode = (hashCode * 486187739) + m_NativeTexture.GetHashCode();
		intptr_t* L_0 = (&__this->___m_NativeTexture_0);
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D(L_0, NULL);
		// hashCode = (hashCode * 486187739) + m_Width.GetHashCode();
		int32_t* L_2 = (&__this->___m_Width_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		// hashCode = (hashCode * 486187739) + m_Height.GetHashCode();
		int32_t* L_4 = (&__this->___m_Height_2);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		// hashCode = (hashCode * 486187739) + m_Depth.GetHashCode();
		int32_t* L_6 = (&__this->___m_Depth_6);
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_6, NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Dimension).GetHashCode();
		int32_t L_8 = __this->___m_Dimension_7;
		V_0 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + m_MipmapCount.GetHashCode();
		int32_t* L_10 = (&__this->___m_MipmapCount_3);
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_10, NULL);
		// hashCode = (hashCode * 486187739) + ((int)m_Format).GetHashCode();
		int32_t L_12 = __this->___m_Format_4;
		V_0 = L_12;
		int32_t L_13;
		L_13 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		// hashCode = (hashCode * 486187739) + m_PropertyNameId.GetHashCode();
		int32_t* L_14 = (&__this->___m_PropertyNameId_5);
		int32_t L_15;
		L_15 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_14, NULL);
		// return hashCode;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)486187739), ((int32_t)486187739))), L_1)), ((int32_t)486187739))), L_3)), ((int32_t)486187739))), L_5)), ((int32_t)486187739))), L_7)), ((int32_t)486187739))), L_9)), ((int32_t)486187739))), L_11)), ((int32_t)486187739))), L_13)), ((int32_t)486187739))), L_15));
	}
}
IL2CPP_EXTERN_C  int32_t XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRTextureDescriptor_GetHashCode_mFEB456F0A0985232D0E342B8F10669149F190012(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493 (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"0x{m_NativeTexture.ToString("X16")} {m_Width.ToString()}x{ m_Height.ToString()}"+
		//         $"x{m_Depth.ToString()}-{m_MipmapCount.ToString()} dimension:{m_Dimension.ToString()}"+
		//         $" format:{m_Format.ToString()} propertyNameId:{m_PropertyNameId.ToString()}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5A65C5353FCF9B2392130B62992E8D50E5552C89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		intptr_t* L_3 = (&__this->___m_NativeTexture_0);
		String_t* L_4;
		L_4 = IntPtr_ToString_m4B664F765633183265DE764BECD5D78FCCA20A13(L_3, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___m_Width_1);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		int32_t* L_11 = (&__this->___m_Height_2);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (&__this->___m_Depth_6);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		int32_t* L_19 = (&__this->___m_MipmapCount_3);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral92580D64BA310146F0049A68E639333564037B8B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		int32_t* L_23 = (&__this->___m_Dimension_7);
		Il2CppFakeBox<int32_t> L_24(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, L_23);
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_25);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_22;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral2ABD255D5E79D438044AA7D302C04ABEC3F505B5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		int32_t* L_28 = (&__this->___m_Format_4);
		Il2CppFakeBox<int32_t> L_29(TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var, L_28);
		String_t* L_30;
		L_30 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_29), NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral1C60D08AD178165742EAA66ED6E17B425304C141);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		int32_t* L_33 = (&__this->___m_PropertyNameId_5);
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_33, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_34);
		String_t* L_35;
		L_35 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_32, NULL);
		return L_35;
	}
}
IL2CPP_EXTERN_C  String_t* XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XRTextureDescriptor_ToString_m452F36D253986001921C5F627E67E2452D685493(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE BoundedPlane_get_defaultValue_m8231738F569F3ABD6A5A5697B1293C3A75F47D31_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BoundedPlane defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_0 = ((BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields*)il2cpp_codegen_static_fields_for(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m3C9491FE6D19662F5CDE221328F86862621B6DE2_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_id_m4E93140B46C960FFB4723062C55D05D7B551A57B_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m43F95297A90490AFA397FC61B990A33F74259EF5_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_providerType_m27A630CAFBA225796667E17DE114673056339EA4_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m30B55A83F149F3B304AAAD85FE3E80BFCD75552D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SubsystemDescriptorWithProvider_set_subsystemTypeOverride_m34C15BBBE4EB41226EF1C0A0C8BB73A0955E0F3E_inline (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsHorizontalPlaneDetection_m25246A60EFD930C7AC4C50A950E910E7716C9315_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsHorizontalPlaneDetection_m839AD1DED4EBAEBED2F90F802A6DD88AA2959CDF_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsVerticalPlaneDetection_mEA496CC68069CCAD03DBC1B57F53DDA57D56A8BF_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsVerticalPlaneDetection_m9BF239DBD1EE5568557F5086E5CB0EECFC1853CD_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsArbitraryPlaneDetection_m7E19D041E3828651646769D594B9647149B5A0F4_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = __this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsArbitraryPlaneDetection_m1754591F55E83D9D6734B5CAAAD452F9BC84D1E1_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsBoundaryVertices_m75615CA66C3E0020B75915F8426FE6B2B475BEDD_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = __this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsBoundaryVertices_m03857A490FF676C5E3E8C6596CABC70D7CFBEC96_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsClassification_m2596CCB90308DA90A90177C91854DDFBF18F464A_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = __this->___U3CsupportsClassificationU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_set_supportsClassification_m68CBEB689207F4B058CB8B2F878F2FDC1AA321C4_inline (XRPlaneSubsystemDescriptor_t0DF362BB5A820B47811DA6460D259AE9EBA06300* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_mCADBFEB62A645F33A8FE7684CE21D11A837FB6F9_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m75AA9217739457DA075AB764BF440217E87A1126_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m8880B201EBF541B726CA629EF2DBA762E5ACB010_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m87A964B3827007A58DEAF8966B51575BA7687D6D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m63ACA332E759D120AB82AA3FE630512846B04E4E_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m73E4DE44A091E9B268214E732EFA29174703EEF1_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m989F6D7C88D39981D1DD342DEC887E9DB3E44AF3_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m423FEFB76FB81C496A35BB358EF04592C8EE9C10_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_m96752ABD368822EE7EE393F7AE3AAE631A4C3657_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsBoundaryVerticesU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsClassification_mB1E8AAC1F2A7D511C960C6606364C87EEA1A221D_inline (Cinfo_t57E1E8AC6F3FC47FFC7506106F86DAAA1A353D6F* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsClassification { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsClassificationU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_trackableId_mA844E950A9862ABA13C47395893C18A55C9117AB_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId trackableId => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycast_get_pose_mADE80A4AABEFCCCB8297186D7E836EAE5B730F73_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public Pose pose => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycast_get_trackingState_mDBA1DEB482B9346E44263E8B2201C1D8AF919B09_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackingState trackingState => m_TrackingState;
		int32_t L_0 = __this->___m_TrackingState_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRRaycast_get_nativePtr_m79D980249D35343744B394D7238F8A8FB943D484_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr nativePtr => m_NativePtr;
		intptr_t L_0 = __this->___m_NativePtr_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycast_get_distance_m0B11F8743558DCA40C4E724ECAB8E4DD5ECFFD2B_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public float distance => m_Distance;
		float L_0 = __this->___m_Distance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycast_get_hitTrackableId_m54245AC20302081DF8658019AA0261DEE1E7D6FE_inline (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableId hitTrackableId => m_HitTrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_HitTrackableId_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 TrackableId_get_invalidId_mDAEC47FD9C1E08B9D5752DA8F185E7A783DBE494_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TrackableId invalidId => s_InvalidId;
		il2cpp_codegen_runtime_class_init_inline(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ((TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields*)il2cpp_codegen_static_fields_for(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var))->___s_InvalidId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 XRRaycastHit_get_trackableId_m8B92C0F8977D274743D9388DEB7DCEBCC88E7325_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TrackableId;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = __this->___m_TrackableId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_trackableId_mA41CAE66DB4E6054512F496DABE4C15B6217FA30_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_TrackableId = value;
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_0 = ___0_value;
		__this->___m_TrackableId_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 XRRaycastHit_get_pose_m3B8D69B763A39178CB583948B4E08255FE9A633E_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Pose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = __this->___m_Pose_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_pose_m26D8C795FDFF7DEE86AB77BC5F0A0B6405150AD4_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Pose = value;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ___0_value;
		__this->___m_Pose_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float XRRaycastHit_get_distance_m7098B7C90D22697CA37FBBDF50A4109AD055CA80_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Distance;
		float L_0 = __this->___m_Distance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_distance_m93182B0265D3D34E9D1730860A5B39F515EA729D_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_Distance = value;
		float L_0 = ___0_value;
		__this->___m_Distance_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRRaycastHit_get_hitType_m30A8013E847E6B2B70A9511B522099C03102E933_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HitType;
		int32_t L_0 = __this->___m_HitType_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastHit_set_hitType_m89FAB9AF35A52F7CA3F997AE1494EB92B60CA997_inline (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_HitType = value;
		int32_t L_0 = ___0_value;
		__this->___m_HitType_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 XRRaycast_get_defaultValue_m37D4F9D561AA6422EEB957A49FDC8B9E1669A48E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycast defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ((XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 XRRaycastHit_get_defaultValue_m330E18C6389B68E95AB5CFF26531D5CF5DE6E090_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static XRRaycastHit defaultValue => s_Default;
		il2cpp_codegen_runtime_class_init_inline(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_0 = ((XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields*)il2cpp_codegen_static_fields_for(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_il2cpp_TypeInfo_var))->___s_Default_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m14E2737CF1E90C961F8D5B282C17E125018668E0_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_mB4A72CE35BDA5CCC57B2CCC3E1D88672D9E59021_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m473983CC8B06F42BC47E92AA261EC2CCBEBFC292_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsViewportBasedRaycast_mBAE62868186C81B758E7B9B87F3C67F6C1586700_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsViewportBasedRaycast_m1860360556D5F4BBD3B242C93D8C92B3F8FA8D90_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsWorldBasedRaycast_m6D9743F420975015239E33D6641CA95A092D501D_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = __this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsWorldBasedRaycast_m2A57C6AF5B8A21E2780A2CDC288F2917DB4BC590_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Cinfo_get_supportedTrackableTypes_mA59CFA06B5968E2DF45075C6C40E0A776CC19488_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = __this->___U3CsupportedTrackableTypesU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportedTrackableTypes_m99EBD94098B7BD499391301B0099EC9381D32558_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackedRaycasts_mF9B448767ADE954E8357D686935ACCF3208DB1B8_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = __this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_set_supportsTrackedRaycasts_m9C99240C24C64818B63A368C025689018E8C4044_inline (XRRaycastSubsystemDescriptor_t8AF0FF26C155E0D9ED865CDD1666C67FA301E311* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m962E07A26F49D8C32DAEFEC4F9E0F79EBC128533_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m5D183591B4A3ECA1EC2AA9015C02DCD1EB1F076F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m20C9DAD8677611ACD22689DA249911EEDE46EBF7_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_mF1AF41E2F764A5BF0AF6A35C54C27DE25809AED9_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m4A20D7E4790C43392F4F82D6B9FAC1D2759F744C_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_mC7DB604D2E288A145177EC66F8C1DAA50F38693F_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsViewportBasedRaycastU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_m05D5BC11896AED796A6E237BBB98FA4EF3CF17A4_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsWorldBasedRaycastU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m319BC9C9EB554C35CD40B791917A603D63BEEE0A_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CsupportedTrackableTypesU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackedRaycasts_m7E65DAEB9ED0CB4C4C83DB751C1547145949AA41_inline (Cinfo_tC395DCF8065A911EBBE735F59B56243617EE2F54* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsTrackedRaycasts { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsTrackedRaycastsU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m3EE93DA405D5C59B746B621FC30D4CC182BB1E53_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_currentConfiguration_m4299FA74038DD6293A125B425179E4C948D09917_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D ___0_value, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = ___0_value;
		__this->___U3CcurrentConfigurationU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D XRSessionSubsystem_get_currentConfiguration_m1AB222F75B6C1645DB3405CB9AE18740EE66F0E5_inline (XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* __this, const RuntimeMethod* method) 
{
	{
		// public Configuration? currentConfiguration { get; private set; }
		Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D L_0 = __this->___U3CcurrentConfigurationU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m20097DC1BBE19C329FD6F99312B6B5CD14678921_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_providerType_m89ED3FB1640690CFD1735E14FB7834A2BF9203EC_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = __this->___U3CproviderTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemTypeOverride_m5A1888DCB068C90C7C5197246602893767C5A2B7_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_mEEEDF86E5DE1B7515989BAECAF2F1714A327B720_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = __this->___U3CsupportsInstallU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m6BF049FADBC0C98964ED4DC227535BB27BBDA6B7_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mD86213A3EA6096133BF355DDDC55823027B48B7C_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = __this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_m7E8D8FF23A84B20582BF51BEF07DCDFF325ACDF8_inline (XRSessionSubsystemDescriptor_tC27BC32D3225FDB3C2114906B7917065435E3076* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mA4CF39BDB54C42BC8CBD401F6A77353B59EB074F_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsInstallU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mC501E193696EC21EF655C7B789CABFE2D7D2B3E4_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_id_m7ABF4746E3D8D5C9F5E845638AB861FFBF665594_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_providerType_m2B27139CECCAF21A444D7891124893D11B7B6484_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type providerType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CproviderTypeU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CproviderTypeU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemTypeOverride_m5DD40EFEE5ADFC4A6624E1EF7345F63D66027423_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemTypeOverride { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemTypeOverrideU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* Cinfo_get_subsystemImplementationType_m1E7C284EE29C67952C8742FD257B3BA09F84D8B3_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = __this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m116B6D5857F561E8119812F01089CDDC08AFF3CA_inline (Cinfo_t1B9B24C41EB37E2062FF49A3978D5E26D43A5D03* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t* L_0 = ___0_value;
		__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsubsystemImplementationTypeU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m5BD0BD187D579592C71665C78BB09685F08BB23C_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = __this->___U3CscreenOrientationU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m95E8C1C9AEEFCD0577AE4605645FA8CD8F1D6B9B_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ScreenOrientation screenOrientation { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CscreenOrientationU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A XRSessionUpdateParams_get_screenDimensions_mED2BC29E3B820C5CF96ED275DFA172B23EA52119_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = __this->___U3CscreenDimensionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_mC99924339E008CEFCF202EC394463F00DF0DA4B3_inline (XRSessionUpdateParams_t7E03F47CA8C7ACECDA528B8F260C2EDD9D1C12F1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2Int screenDimensions { get; set; }
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ___0_value;
		__this->___U3CscreenDimensionsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId1_m1F4296FEADE76DF0379F20BCBD94E807E2EF021F_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId1;
		uint64_t L_0 = __this->___m_SubId1_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableId_set_subId1_mFA12049C24961BC2FE7D41A2D0FE30DF4B3F39D2_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SubId1 = value;
		uint64_t L_0 = ___0_value;
		__this->___m_SubId1_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t TrackableId_get_subId2_m53BAB4D373B736E473381B24CB608EEF666BA24E_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SubId2;
		uint64_t L_0 = __this->___m_SubId2_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TrackableId_set_subId2_mB7AA91412C0731CF59A8CC24CF75012D3C77C76D_inline (TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_SubId2 = value;
		uint64_t L_0 = ___0_value;
		__this->___m_SubId2_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m1E27C0E1DC11DDC6139178509EE91B8DF54DBAD4_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_NativeTexture; }
		intptr_t L_0 = __this->___m_NativeTexture_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_nativeTexture_mE5EF6CBBBE13191EF65501EC9A45C2F64964B27D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_NativeTexture = value; }
		intptr_t L_0 = ___0_value;
		__this->___m_NativeTexture_0 = L_0;
		// private set { m_NativeTexture = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m570472F03994BC63F21751414105A2E0C112DBF2_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Width; }
		int32_t L_0 = __this->___m_Width_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_width_mA5D674B5378CB5B8AADD7A93E027CBF4BD27A37C_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Width = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Width_1 = L_0;
		// private set { m_Width = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mC0B37241C24FA883E2594B9411080EDF654E3E01_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Height; }
		int32_t L_0 = __this->___m_Height_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_height_mCD63667233B39883DF1E431446ED926AC3AF3992_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Height = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Height_2 = L_0;
		// private set { m_Height = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m4B2ED0D6EBE06AD86E356203B4AB5DE3807C1D31_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_MipmapCount; }
		int32_t L_0 = __this->___m_MipmapCount_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_mipmapCount_m7B8AAB937C5157B15A280672BC5C105FAF30D7E8_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_MipmapCount = value; }
		int32_t L_0 = ___0_value;
		__this->___m_MipmapCount_3 = L_0;
		// private set { m_MipmapCount = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA745AA87046D4FE4846C11B8285B980FF6DDDD1A_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Format; }
		int32_t L_0 = __this->___m_Format_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_format_mAB9FB1797A83CC68AC222A861C185FE2F8035058_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_Format = value; }
		int32_t L_0 = ___0_value;
		__this->___m_Format_4 = L_0;
		// private set { m_Format = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mF5A620F0DAEE746BDD293DB7F02909FB5404DCC1_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PropertyNameId; }
		int32_t L_0 = __this->___m_PropertyNameId_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_propertyNameId_m4D99BAF8AF884D653834D29D124F106A4AD7189D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set { m_PropertyNameId = value; }
		int32_t L_0 = ___0_value;
		__this->___m_PropertyNameId_5 = L_0;
		// private set { m_PropertyNameId = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_depth_m5885EBF7D767C918B1483D63D1B11EE60D939E7D_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Depth;
		int32_t L_0 = __this->___m_Depth_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_depth_mD62E28995B11B8631C2DF7B02416A2D310F35C49_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set => m_Depth = value;
		int32_t L_0 = ___0_value;
		__this->___m_Depth_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_dimension_mAEB2447102404A845F9B20317A2AB82B956E4A12_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Dimension;
		int32_t L_0 = __this->___m_Dimension_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_dimension_m75DC4703441BF9E812D18C0DFBF0A9839A52554B_inline (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set => m_Dimension = value;
		int32_t L_0 = ___0_value;
		__this->___m_Dimension_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_provider_m963D70D839CE42A2C17A2C183A61C25F0E2C6732_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CproviderU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SubsystemWithProvider_3_get_subsystemDescriptor_mB4052808D703DF75CA2D74A5801B59172E3F80C7_gshared_inline (SubsystemWithProvider_3_t548D9C2A4778C7ADB62496A2A07F8B7563309893* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CsubsystemDescriptorU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mEC2B34CD521662D07140FCB0D91A67D0411A3BF3_gshared_inline (Nullable_1_tD8E0845D8BC45B99C32AB5E8655579F582F62B8D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
