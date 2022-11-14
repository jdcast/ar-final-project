#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>>
struct Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IReadOnlyCollection`1<System.String>
struct IReadOnlyCollection_1_t80387D89E0F8D97849A5FBC8A0BFC0DAC0BB2FA7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct KeyCollection_t7F6FF6EAFF153BF55E92B3774606ACFB5E683D07;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA>
struct List_1_t9803CBB1641857D425CB3E3327659988FAF371A5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding>
struct List_1_t634BEC2B3FE1D523B4D7D852372DADF6919A71E3;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/KeyValPair>
struct List_1_tA3228908CFE5335293F412A92299887C44CD37EB;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9;
// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C;
// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>
struct Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct ValueCollection_t451EE81404E6DDAAF8A8E3AB9AE91123BED4DA39;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>[]
struct EntryU5BU5D_t56241ED85FA50D4982D84EAAECDFB1E33F36071A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA[]
struct SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// Microsoft.MixedReality.WorldLocking.Core.Diagnostics
struct Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5;
// IActivationFactory
struct Il2CppIActivationFactory;
// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager
struct IAlignmentManager_tFD04FC1FBCB5DFC33D0A385FB7C7B4E7224FF106;
// Microsoft.MixedReality.WorldLocking.Core.IAnchorManager
struct IAnchorManager_tB1FFFF700C45A94CE8729186EF82591176412F41;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint
struct IAttachmentPoint_tB76B402CE1F87B3CB7F12992530782C1E07F1322;
// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPointManager
struct IAttachmentPointManager_tE0705392F0E62EBE38E1F3EDF8592467C84F9655;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Microsoft.MixedReality.WorldLocking.Core.IFragmentManager
struct IFragmentManager_t3EDCE810CF030A6E0896FD6F6B10FF8645B94E11;
// Microsoft.MixedReality.WorldLocking.Core.IHeadPoseTracker
struct IHeadPoseTracker_t75693F813C6002061E2B35E8791F4DBE21814958;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg
struct ILocalPeg_t60254AE29AA84A683956D1922AAFC0EA251594A6;
// Microsoft.MixedReality.WorldLocking.Core.IOrienter
struct IOrienter_t986D0EDBABD089F50E550920DF010E39D5175B35;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Microsoft.MixedReality.WorldLocking.Core.IPlugin
struct IPlugin_t50E7AAF4782BCDAE818065C4AB020FB1B1A62E4D;
// Microsoft.MixedReality.WorldLocking.ASA.IPublisher
struct IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties
struct LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// Microsoft.MixedReality.WorldLocking.Core.Orienter
struct Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8;
// Scripts.RouteManipulator
struct RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Microsoft.MixedReality.WorldLocking.Core.SharedManagerSettings
struct SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA
struct SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102;
// Scripts.WorldLocking.SpacePinBinder
struct SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA
struct SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// Scripts.TCPClient
struct TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager
struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31;
// Scripts.WorldLocking.SpacePinBinder/<Purge>d__29
struct U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B;
// Scripts.WorldLocking.SpacePinBinder/<Search>d__28
struct U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9;
// Scripts.WorldLocking.SpacePinBinder/SpacePinPegAndProps
struct SpacePinPegAndProps_tD4ABF505CFFD9881C4B9964BE35FFFA49B484B1F;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46
struct U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44
struct U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50
struct U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51
struct U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49
struct U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52
struct U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47
struct U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48
struct U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF;
// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41
struct U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Scripts.TCPClient/<ConnectUWP>d__9
struct U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E;
// Scripts.TCPClient/<GetRoute>d__17
struct U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1;
// Scripts.TCPClient/<GetRouteList>d__18
struct U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE;
// Scripts.TCPClient/<SendFile>d__14
struct U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalPeg_t60254AE29AA84A683956D1922AAFC0EA251594A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0B57016ABCCDD4420D0788C052A5F86985CC2EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34;
IL2CPP_EXTERN_C String_t* _stringLiteral8E29640013FD0CBA375A0641E73F4D6C3DCE01CF;
IL2CPP_EXTERN_C String_t* _stringLiteralA457AA136782338479AB2154F89B0BBC35E5BC15;
IL2CPP_EXTERN_C String_t* _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCFAF27D11540C5EE9DEEC921CFC0565BFBA84AC5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A;
IL2CPP_EXTERN_C String_t* _stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE_m8915CBFF67656205DDA9A9BD9027DBF275569DFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_m86A5E13CB04A1E3CCA0E6B5E3FBE91219D493FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC_TisU3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9_m8565661C3AFEF01E4A08B4BA949DFA0697A2032C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B_mE538C5C917A5A1AFE552635307CF85BFBB59ACD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40_mEDAF2072458BB907CECC51FF4EB925E25F42D190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E_m5053443778415DB5298805378D2BE2F845C3624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_mD9B452CC532F301D93669A9AB7511669ADB9CDAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B_mE823F91FCF267C314BCA7DB6D7128F7CE6EA1E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553_m771B798748209A4FF9A9F4388A34117B1DCD5CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF_m7757725AAFCD6881D09044D695032A4911999FDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m0D3EF85449B8C3CF19ECB295E7327E12E6525AE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m2982452DC774B47155897074BEB1D2B76A8B5557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m343F3F299984673DBDF36E4359877989538AE23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mFA0D1D629238A218F73AB7D6B70F7EE4B1DC303F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9_m673AC8F47D10F426712F39705681287F1A398E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614_m9DDE9E249E70DD15C5E55612F0C9B67E98E829AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E_m74091B8355831BD9288DF56091DD07D036D03210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC_m44D6EAD7F0CD0EDF1D8227BBA5A71B1E9E691CA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8CC7988E22B52640FE8CD4569D652525E0ED43A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1BC9198EEC3AF9FE05488FF46EF7F6D1915015C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m92593F06F58BEA446F017A54355E0D2B3C818CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m313BFF3564683620D1996F58C19669688BA6EBF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB1A6107A29186004544B0AEC1D9F2520D5422052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2185D270EA81D71E694C2B1446371DCF9BB7630A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m9C7F3FC8108E2E0A1C7D5A5FDCC44628B0CD687E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m561283196B35EB33BD2F2E60D41E354E8C48B43C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m184B006114FEC8ED60FDD6454EF2FFC5295286D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateLocalPegU3Ed__44_MoveNext_m5186EF01E973D45D0EF58C05C5EA63D6AE38127F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateU3Ed__46_MoveNext_m589CD9F7D8189B66AF7724A62D5613F4C46709FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeleteU3Ed__50_MoveNext_m552FB71E727243CABFD636DBB050052A9E0C6E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFindU3Ed__51_MoveNext_m49D3B9DE85E47D381F678AFE99FC5DBA4CFAE7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPurgeAreaU3Ed__52_MoveNext_m1CACD51CD566F46D350E96EF1BFB59E604E9D685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadU3Ed__47_MoveNext_m875A86E6077C6C4D5E72C0E3FC47EDB7CF6F2A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadU3Ed__48_MoveNext_m4DDFA3346C2FE5DDD88032500C42A587F8A6F358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetupU3Ed__41_MoveNext_m33C9BBA13DB3B8AB7580B04369A8C37FCBA55721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF;
struct IStreamSocket_t0E008C9F045995E4093D8489E302BFD0DE46517E;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m153FFA20288B2A12135D5E31F5E321CB7C7C32A4(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m72B504C34111DE6E15C44D1615BA0B6F2E976355(Il2CppHString ___hostName0, IHostName_tE33210DDCAFFA71D0FE0DBA437A7550525ACBFFF** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m6AFE1DC3964B02DBE3A93B9513A231C553B68FBD() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_mEB1EC91BCFE2498211F777A6B0DF66C0E189ACAE() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m5CE6A473BDBEF10C35931DC9C1819FF71CF9730F() = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t56241ED85FA50D4982D84EAAECDFB1E33F36071A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t7F6FF6EAFF153BF55E92B3774606ACFB5E683D07 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t451EE81404E6DDAAF8A8E3AB9AE91123BED4DA39 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___entries_1)); }
	inline EntryU5BU5D_t56241ED85FA50D4982D84EAAECDFB1E33F36071A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t56241ED85FA50D4982D84EAAECDFB1E33F36071A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t56241ED85FA50D4982D84EAAECDFB1E33F36071A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___keys_7)); }
	inline KeyCollection_t7F6FF6EAFF153BF55E92B3774606ACFB5E683D07 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7F6FF6EAFF153BF55E92B3774606ACFB5E683D07 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7F6FF6EAFF153BF55E92B3774606ACFB5E683D07 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ___values_8)); }
	inline ValueCollection_t451EE81404E6DDAAF8A8E3AB9AE91123BED4DA39 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t451EE81404E6DDAAF8A8E3AB9AE91123BED4DA39 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t451EE81404E6DDAAF8A8E3AB9AE91123BED4DA39 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB, ____items_1)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get__items_1() const { return ____items_1; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_StaticFields, ____emptyArray_5)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA>
struct List_1_t9803CBB1641857D425CB3E3327659988FAF371A5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5, ____items_1)); }
	inline SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* get__items_1() const { return ____items_1; }
	inline SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9803CBB1641857D425CB3E3327659988FAF371A5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5_StaticFields, ____emptyArray_5)); }
	inline SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpacePinASAU5BU5D_t7C732D0A8EF44034E25BD17F1FB7C096D8B930E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties
struct LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties::localPeg
	RuntimeObject* ___localPeg_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties::properties
	RuntimeObject* ___properties_1;

public:
	inline static int32_t get_offset_of_localPeg_0() { return static_cast<int32_t>(offsetof(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3, ___localPeg_0)); }
	inline RuntimeObject* get_localPeg_0() const { return ___localPeg_0; }
	inline RuntimeObject** get_address_of_localPeg_0() { return &___localPeg_0; }
	inline void set_localPeg_0(RuntimeObject* value)
	{
		___localPeg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localPeg_0), (void*)value);
	}

	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3, ___properties_1)); }
	inline RuntimeObject* get_properties_1() const { return ___properties_1; }
	inline RuntimeObject** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(RuntimeObject* value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.__Il2CppComObject


// Scripts.WorldLocking.SpacePinBinder/SpacePinPegAndProps
struct SpacePinPegAndProps_tD4ABF505CFFD9881C4B9964BE35FFFA49B484B1F  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA Scripts.WorldLocking.SpacePinBinder/SpacePinPegAndProps::spacePin
	SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * ___spacePin_0;
	// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Scripts.WorldLocking.SpacePinBinder/SpacePinPegAndProps::pegAndProps
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___pegAndProps_1;

public:
	inline static int32_t get_offset_of_spacePin_0() { return static_cast<int32_t>(offsetof(SpacePinPegAndProps_tD4ABF505CFFD9881C4B9964BE35FFFA49B484B1F, ___spacePin_0)); }
	inline SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * get_spacePin_0() const { return ___spacePin_0; }
	inline SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 ** get_address_of_spacePin_0() { return &___spacePin_0; }
	inline void set_spacePin_0(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * value)
	{
		___spacePin_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spacePin_0), (void*)value);
	}

	inline static int32_t get_offset_of_pegAndProps_1() { return static_cast<int32_t>(offsetof(SpacePinPegAndProps_tD4ABF505CFFD9881C4B9964BE35FFFA49B484B1F, ___pegAndProps_1)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_pegAndProps_1() const { return ___pegAndProps_1; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_pegAndProps_1() { return &___pegAndProps_1; }
	inline void set_pegAndProps_1(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___pegAndProps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pegAndProps_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8, ___value_1)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_value_1() const { return ___value_1; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC, ___m_task_0)); }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D, ___m_task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>
struct ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A 
{
public:
	// T1 System.ValueTuple`3::Item1
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A, ___Item1_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Item1_0() const { return ___Item1_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A, ___Item2_1)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_Item2_1() const { return ___Item2_1; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A, ___Item3_2)); }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * get_Item3_2() const { return ___Item3_2; }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}
};


// System.ValueTuple`3<System.Object,System.Object,System.Object>
struct ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D 
{
public:
	// T1 System.ValueTuple`3::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	RuntimeObject * ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Windows.Networking.HostName
struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5  : public Il2CppComObject
{
public:

public:
};

struct HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* get_____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668()
	{
		IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668* returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t4F55F1AC56C49B2E173143F3AB44FD1DE19E3668;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* get_____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377()
	{
		IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377* returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_tE11C46303201523EA14D14F59AB9AEED389E8377;
			}
		}
		return returnValue;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// Windows.Networking.Sockets.StreamSocket
struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921  : public Il2CppComObject
{
public:

public:
};

struct StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* get_____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0()
	{
		IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0* returnValue = ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_tA115EC5AB4320D93EF262522A9BCA64460D93BD0;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0, ___m_task_2)); }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>
struct AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2, ___m_task_2)); }
	inline Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63, ___m_task_2)); }
	inline Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B, ___m_task_2)); }
	inline Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5, ___m_task_2)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>
struct AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251, ___m_task_2)); }
	inline Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100, ___m_task_2)); }
	inline Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020, ___m_task_2)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F, ___m_task_2)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03, ___dictionary_0)); }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03, ___current_3)); }
	inline KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6, ___m_task_2)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_pinvoke
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6_marshaled_com
{
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com ___m_coreState_1;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_9;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_10;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_11;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_12;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_13;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_14;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_15;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_16;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_17;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_18;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_19;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_20;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_22;

public:
	inline static int32_t get_offset_of_stream_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_7)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_7() const { return ___stream_7; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_7() { return &___stream_7; }
	inline void set_stream_7(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_7), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_8)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_8() const { return ___encoding_8; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_8() { return &___encoding_8; }
	inline void set_encoding_8(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_8), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_9)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_9), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_10() const { return ___byteBuffer_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_10() { return &___byteBuffer_10; }
	inline void set_byteBuffer_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_11)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_11() const { return ___charBuffer_11; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_11() { return &___charBuffer_11; }
	inline void set_charBuffer_11(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_11), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_12)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_12() const { return ____preamble_12; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_12() { return &____preamble_12; }
	inline void set__preamble_12(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_12), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_13)); }
	inline int32_t get_charPos_13() const { return ___charPos_13; }
	inline int32_t* get_address_of_charPos_13() { return &___charPos_13; }
	inline void set_charPos_13(int32_t value)
	{
		___charPos_13 = value;
	}

	inline static int32_t get_offset_of_charLen_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_14)); }
	inline int32_t get_charLen_14() const { return ___charLen_14; }
	inline int32_t* get_address_of_charLen_14() { return &___charLen_14; }
	inline void set_charLen_14(int32_t value)
	{
		___charLen_14 = value;
	}

	inline static int32_t get_offset_of_byteLen_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_15)); }
	inline int32_t get_byteLen_15() const { return ___byteLen_15; }
	inline int32_t* get_address_of_byteLen_15() { return &___byteLen_15; }
	inline void set_byteLen_15(int32_t value)
	{
		___byteLen_15 = value;
	}

	inline static int32_t get_offset_of_bytePos_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_16)); }
	inline int32_t get_bytePos_16() const { return ___bytePos_16; }
	inline int32_t* get_address_of_bytePos_16() { return &___bytePos_16; }
	inline void set_bytePos_16(int32_t value)
	{
		___bytePos_16 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_17)); }
	inline int32_t get__maxCharsPerBuffer_17() const { return ____maxCharsPerBuffer_17; }
	inline int32_t* get_address_of__maxCharsPerBuffer_17() { return &____maxCharsPerBuffer_17; }
	inline void set__maxCharsPerBuffer_17(int32_t value)
	{
		____maxCharsPerBuffer_17 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_18)); }
	inline bool get__detectEncoding_18() const { return ____detectEncoding_18; }
	inline bool* get_address_of__detectEncoding_18() { return &____detectEncoding_18; }
	inline void set__detectEncoding_18(bool value)
	{
		____detectEncoding_18 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_19)); }
	inline bool get__checkPreamble_19() const { return ____checkPreamble_19; }
	inline bool* get_address_of__checkPreamble_19() { return &____checkPreamble_19; }
	inline void set__checkPreamble_19(bool value)
	{
		____checkPreamble_19 = value;
	}

	inline static int32_t get_offset_of__isBlocked_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_20)); }
	inline bool get__isBlocked_20() const { return ____isBlocked_20; }
	inline bool* get_address_of__isBlocked_20() { return &____isBlocked_20; }
	inline void set__isBlocked_20(bool value)
	{
		____isBlocked_20 = value;
	}

	inline static int32_t get_offset_of__closable_21() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_21)); }
	inline bool get__closable_21() const { return ____closable_21; }
	inline bool* get_address_of__closable_21() { return &____closable_21; }
	inline void set__closable_21(bool value)
	{
		____closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_22() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_22() const { return ____asyncReadTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_22() { return &____asyncReadTask_22; }
	inline void set__asyncReadTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_22), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_16;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_17;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_18;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_19;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_20;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_21;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_22;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_23;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_24;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_25;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_26;

public:
	inline static int32_t get_offset_of_stream_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_16)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_16() const { return ___stream_16; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_16() { return &___stream_16; }
	inline void set_stream_16(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_16), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_17)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_17() const { return ___encoding_17; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_17() { return &___encoding_17; }
	inline void set_encoding_17(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_18)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_18() const { return ___encoder_18; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_18() { return &___encoder_18; }
	inline void set_encoder_18(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_18), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_19)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_19() const { return ___byteBuffer_19; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_19() { return &___byteBuffer_19; }
	inline void set_byteBuffer_19(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_19), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_20() const { return ___charBuffer_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_20() { return &___charBuffer_20; }
	inline void set_charBuffer_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_21)); }
	inline int32_t get_charPos_21() const { return ___charPos_21; }
	inline int32_t* get_address_of_charPos_21() { return &___charPos_21; }
	inline void set_charPos_21(int32_t value)
	{
		___charPos_21 = value;
	}

	inline static int32_t get_offset_of_charLen_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_22)); }
	inline int32_t get_charLen_22() const { return ___charLen_22; }
	inline int32_t* get_address_of_charLen_22() { return &___charLen_22; }
	inline void set_charLen_22(int32_t value)
	{
		___charLen_22 = value;
	}

	inline static int32_t get_offset_of_autoFlush_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_23)); }
	inline bool get_autoFlush_23() const { return ___autoFlush_23; }
	inline bool* get_address_of_autoFlush_23() { return &___autoFlush_23; }
	inline void set_autoFlush_23(bool value)
	{
		___autoFlush_23 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_24() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_24)); }
	inline bool get_haveWrittenPreamble_24() const { return ___haveWrittenPreamble_24; }
	inline bool* get_address_of_haveWrittenPreamble_24() { return &___haveWrittenPreamble_24; }
	inline void set_haveWrittenPreamble_24(bool value)
	{
		___haveWrittenPreamble_24 = value;
	}

	inline static int32_t get_offset_of_closable_25() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_25)); }
	inline bool get_closable_25() const { return ___closable_25; }
	inline bool* get_address_of_closable_25() { return &___closable_25; }
	inline void set_closable_25(bool value)
	{
		___closable_25 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_26() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_26)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_26() const { return ____asyncWriteTask_26; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_26() { return &____asyncWriteTask_26; }
	inline void set__asyncWriteTask_26(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_26), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_15;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_27;

public:
	inline static int32_t get_offset_of_Null_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_15)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_15() const { return ___Null_15; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_15() { return &___Null_15; }
	inline void set_Null_15(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_15), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_27() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_27)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_27() const { return ____UTF8NoBOM_27; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_27() { return &____UTF8NoBOM_27; }
	inline void set__UTF8NoBOM_27(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_27), (void*)value);
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum
struct ModelPositionSourceEnum_tC2F1A45376DE52090F4AC22FE6B279BF192972CA 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModelPositionSourceEnum_tC2F1A45376DE52090F4AC22FE6B279BF192972CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState
struct InitializationState_tEEF71B6591DC6E3CBADFF8E19B2BD43E42F095A6 
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitializationState_tEEF71B6591DC6E3CBADFF8E19B2BD43E42F095A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35, ___m_result_40)); }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * get_m_result_40() const { return ___m_result_40; }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};

// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager
struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.SharedManagerSettings Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::shared
	SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * ___shared_0;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<AdjustmentFrame>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CAdjustmentFrameU3Ek__BackingField_1;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<CameraParent>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CCameraParentU3Ek__BackingField_2;
	// Microsoft.MixedReality.WorldLocking.Core.IPlugin Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::Plugin
	RuntimeObject* ___Plugin_3;
	// Microsoft.MixedReality.WorldLocking.Core.IHeadPoseTracker Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::headPoseTracker
	RuntimeObject* ___headPoseTracker_4;
	// Microsoft.MixedReality.WorldLocking.Core.IAnchorManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::anchorManager
	RuntimeObject* ___anchorManager_5;
	// Microsoft.MixedReality.WorldLocking.Core.IFragmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::fragmentManager
	RuntimeObject* ___fragmentManager_6;
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPointManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::attachmentPointManager
	RuntimeObject* ___attachmentPointManager_7;
	// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::alignmentManager
	RuntimeObject* ___alignmentManager_8;
	// System.String Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<ErrorStatus>k__BackingField
	String_t* ___U3CErrorStatusU3Ek__BackingField_9;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<PinnedFromLocked>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CPinnedFromLockedU3Ek__BackingField_10;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<LockedFromPlayspace>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CLockedFromPlayspaceU3Ek__BackingField_11;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::<SpongyFromCamera>k__BackingField
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3CSpongyFromCameraU3Ek__BackingField_12;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::hasPendingLoadTask
	bool ___hasPendingLoadTask_13;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::hasPendingSaveTask
	bool ___hasPendingSaveTask_14;
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager/InitializationState Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::initializationState
	int32_t ___initializationState_15;
	// Microsoft.MixedReality.WorldLocking.Core.Diagnostics Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::DiagnosticRecordings
	Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * ___DiagnosticRecordings_16;
	// System.String Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::frozenWorldFile
	String_t* ___frozenWorldFile_19;
	// System.Single Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::lastSavingTime
	float ___lastSavingTime_20;

public:
	inline static int32_t get_offset_of_shared_0() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___shared_0)); }
	inline SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * get_shared_0() const { return ___shared_0; }
	inline SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D ** get_address_of_shared_0() { return &___shared_0; }
	inline void set_shared_0(SharedManagerSettings_t1D91D029A5B9B180E6C3C3AD184A8BEFB684AF5D * value)
	{
		___shared_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdjustmentFrameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CAdjustmentFrameU3Ek__BackingField_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CAdjustmentFrameU3Ek__BackingField_1() const { return ___U3CAdjustmentFrameU3Ek__BackingField_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CAdjustmentFrameU3Ek__BackingField_1() { return &___U3CAdjustmentFrameU3Ek__BackingField_1; }
	inline void set_U3CAdjustmentFrameU3Ek__BackingField_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CAdjustmentFrameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdjustmentFrameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCameraParentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CCameraParentU3Ek__BackingField_2)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CCameraParentU3Ek__BackingField_2() const { return ___U3CCameraParentU3Ek__BackingField_2; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CCameraParentU3Ek__BackingField_2() { return &___U3CCameraParentU3Ek__BackingField_2; }
	inline void set_U3CCameraParentU3Ek__BackingField_2(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CCameraParentU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCameraParentU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_Plugin_3() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___Plugin_3)); }
	inline RuntimeObject* get_Plugin_3() const { return ___Plugin_3; }
	inline RuntimeObject** get_address_of_Plugin_3() { return &___Plugin_3; }
	inline void set_Plugin_3(RuntimeObject* value)
	{
		___Plugin_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugin_3), (void*)value);
	}

	inline static int32_t get_offset_of_headPoseTracker_4() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___headPoseTracker_4)); }
	inline RuntimeObject* get_headPoseTracker_4() const { return ___headPoseTracker_4; }
	inline RuntimeObject** get_address_of_headPoseTracker_4() { return &___headPoseTracker_4; }
	inline void set_headPoseTracker_4(RuntimeObject* value)
	{
		___headPoseTracker_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headPoseTracker_4), (void*)value);
	}

	inline static int32_t get_offset_of_anchorManager_5() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___anchorManager_5)); }
	inline RuntimeObject* get_anchorManager_5() const { return ___anchorManager_5; }
	inline RuntimeObject** get_address_of_anchorManager_5() { return &___anchorManager_5; }
	inline void set_anchorManager_5(RuntimeObject* value)
	{
		___anchorManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_fragmentManager_6() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___fragmentManager_6)); }
	inline RuntimeObject* get_fragmentManager_6() const { return ___fragmentManager_6; }
	inline RuntimeObject** get_address_of_fragmentManager_6() { return &___fragmentManager_6; }
	inline void set_fragmentManager_6(RuntimeObject* value)
	{
		___fragmentManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fragmentManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_attachmentPointManager_7() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___attachmentPointManager_7)); }
	inline RuntimeObject* get_attachmentPointManager_7() const { return ___attachmentPointManager_7; }
	inline RuntimeObject** get_address_of_attachmentPointManager_7() { return &___attachmentPointManager_7; }
	inline void set_attachmentPointManager_7(RuntimeObject* value)
	{
		___attachmentPointManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachmentPointManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_alignmentManager_8() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___alignmentManager_8)); }
	inline RuntimeObject* get_alignmentManager_8() const { return ___alignmentManager_8; }
	inline RuntimeObject** get_address_of_alignmentManager_8() { return &___alignmentManager_8; }
	inline void set_alignmentManager_8(RuntimeObject* value)
	{
		___alignmentManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CErrorStatusU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CErrorStatusU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorStatusU3Ek__BackingField_9() const { return ___U3CErrorStatusU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorStatusU3Ek__BackingField_9() { return &___U3CErrorStatusU3Ek__BackingField_9; }
	inline void set_U3CErrorStatusU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorStatusU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorStatusU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPinnedFromLockedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CPinnedFromLockedU3Ek__BackingField_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CPinnedFromLockedU3Ek__BackingField_10() const { return ___U3CPinnedFromLockedU3Ek__BackingField_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CPinnedFromLockedU3Ek__BackingField_10() { return &___U3CPinnedFromLockedU3Ek__BackingField_10; }
	inline void set_U3CPinnedFromLockedU3Ek__BackingField_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CPinnedFromLockedU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CLockedFromPlayspaceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CLockedFromPlayspaceU3Ek__BackingField_11)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CLockedFromPlayspaceU3Ek__BackingField_11() const { return ___U3CLockedFromPlayspaceU3Ek__BackingField_11; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CLockedFromPlayspaceU3Ek__BackingField_11() { return &___U3CLockedFromPlayspaceU3Ek__BackingField_11; }
	inline void set_U3CLockedFromPlayspaceU3Ek__BackingField_11(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CLockedFromPlayspaceU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CSpongyFromCameraU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___U3CSpongyFromCameraU3Ek__BackingField_12)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3CSpongyFromCameraU3Ek__BackingField_12() const { return ___U3CSpongyFromCameraU3Ek__BackingField_12; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3CSpongyFromCameraU3Ek__BackingField_12() { return &___U3CSpongyFromCameraU3Ek__BackingField_12; }
	inline void set_U3CSpongyFromCameraU3Ek__BackingField_12(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3CSpongyFromCameraU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_hasPendingLoadTask_13() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___hasPendingLoadTask_13)); }
	inline bool get_hasPendingLoadTask_13() const { return ___hasPendingLoadTask_13; }
	inline bool* get_address_of_hasPendingLoadTask_13() { return &___hasPendingLoadTask_13; }
	inline void set_hasPendingLoadTask_13(bool value)
	{
		___hasPendingLoadTask_13 = value;
	}

	inline static int32_t get_offset_of_hasPendingSaveTask_14() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___hasPendingSaveTask_14)); }
	inline bool get_hasPendingSaveTask_14() const { return ___hasPendingSaveTask_14; }
	inline bool* get_address_of_hasPendingSaveTask_14() { return &___hasPendingSaveTask_14; }
	inline void set_hasPendingSaveTask_14(bool value)
	{
		___hasPendingSaveTask_14 = value;
	}

	inline static int32_t get_offset_of_initializationState_15() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___initializationState_15)); }
	inline int32_t get_initializationState_15() const { return ___initializationState_15; }
	inline int32_t* get_address_of_initializationState_15() { return &___initializationState_15; }
	inline void set_initializationState_15(int32_t value)
	{
		___initializationState_15 = value;
	}

	inline static int32_t get_offset_of_DiagnosticRecordings_16() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___DiagnosticRecordings_16)); }
	inline Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * get_DiagnosticRecordings_16() const { return ___DiagnosticRecordings_16; }
	inline Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 ** get_address_of_DiagnosticRecordings_16() { return &___DiagnosticRecordings_16; }
	inline void set_DiagnosticRecordings_16(Diagnostics_t1E837DAC7BB3D8F92EE1BC7F6359A27B0F583BA4 * value)
	{
		___DiagnosticRecordings_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DiagnosticRecordings_16), (void*)value);
	}

	inline static int32_t get_offset_of_frozenWorldFile_19() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___frozenWorldFile_19)); }
	inline String_t* get_frozenWorldFile_19() const { return ___frozenWorldFile_19; }
	inline String_t** get_address_of_frozenWorldFile_19() { return &___frozenWorldFile_19; }
	inline void set_frozenWorldFile_19(String_t* value)
	{
		___frozenWorldFile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frozenWorldFile_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastSavingTime_20() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31, ___lastSavingTime_20)); }
	inline float get_lastSavingTime_20() const { return ___lastSavingTime_20; }
	inline float* get_address_of_lastSavingTime_20() { return &___lastSavingTime_20; }
	inline void set_lastSavingTime_20(float value)
	{
		___lastSavingTime_20 = value;
	}
};

struct WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::managerInstance
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * ___managerInstance_17;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::updateProxyNode
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___updateProxyNode_18;

public:
	inline static int32_t get_offset_of_managerInstance_17() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields, ___managerInstance_17)); }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * get_managerInstance_17() const { return ___managerInstance_17; }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 ** get_address_of_managerInstance_17() { return &___managerInstance_17; }
	inline void set_managerInstance_17(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * value)
	{
		___managerInstance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___managerInstance_17), (void*)value);
	}

	inline static int32_t get_offset_of_updateProxyNode_18() { return static_cast<int32_t>(offsetof(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_StaticFields, ___updateProxyNode_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_updateProxyNode_18() const { return ___updateProxyNode_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_updateProxyNode_18() { return &___updateProxyNode_18; }
	inline void set_updateProxyNode_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___updateProxyNode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateProxyNode_18), (void*)value);
	}
};


// Scripts.WorldLocking.SpacePinBinder/<Purge>d__29
struct U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B  : public RuntimeObject
{
public:
	// System.Int32 Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Scripts.WorldLocking.SpacePinBinder Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::<>4__this
	SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B, ___U3CU3E4__this_2)); }
	inline SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Scripts.WorldLocking.SpacePinBinder/<Search>d__28
struct U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9  : public RuntimeObject
{
public:
	// System.Int32 Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>t__builder
	AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  ___U3CU3Et__builder_1;
	// Scripts.WorldLocking.SpacePinBinder Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>4__this
	SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * ___U3CU3E4__this_2;
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<found>5__1
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * ___U3CfoundU3E5__1_3;
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<wltMgr>5__2
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * ___U3CwltMgrU3E5__2_4;
	// System.Boolean Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<foundAny>5__3
	bool ___U3CfoundAnyU3E5__3_5;
	// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>s__4
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * ___U3CU3Es__4_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>s__5
	Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  ___U3CU3Es__5_7;
	// System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<keyval>5__6
	KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  ___U3CkeyvalU3E5__6_8;
	// System.String Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<spacePinId>5__7
	String_t* ___U3CspacePinIdU3E5__7_9;
	// System.String Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<cloudAnchorId>5__8
	String_t* ___U3CcloudAnchorIdU3E5__8_10;
	// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<pegAndProps>5__9
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___U3CpegAndPropsU3E5__9_11;
	// System.Int32 Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<idx>5__10
	int32_t ___U3CidxU3E5__10_12;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<spacePin>5__11
	SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * ___U3CspacePinU3E5__11_13;
	// UnityEngine.Pose Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<lockedPose>5__12
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___U3ClockedPoseU3E5__12_14;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Scripts.WorldLocking.SpacePinBinder/<Search>d__28::<>u__1
	TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  ___U3CU3Eu__1_15;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3E4__this_2)); }
	inline SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfoundU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CfoundU3E5__1_3)); }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * get_U3CfoundU3E5__1_3() const { return ___U3CfoundU3E5__1_3; }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B ** get_address_of_U3CfoundU3E5__1_3() { return &___U3CfoundU3E5__1_3; }
	inline void set_U3CfoundU3E5__1_3(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * value)
	{
		___U3CfoundU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfoundU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwltMgrU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CwltMgrU3E5__2_4)); }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * get_U3CwltMgrU3E5__2_4() const { return ___U3CwltMgrU3E5__2_4; }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 ** get_address_of_U3CwltMgrU3E5__2_4() { return &___U3CwltMgrU3E5__2_4; }
	inline void set_U3CwltMgrU3E5__2_4(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * value)
	{
		___U3CwltMgrU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwltMgrU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfoundAnyU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CfoundAnyU3E5__3_5)); }
	inline bool get_U3CfoundAnyU3E5__3_5() const { return ___U3CfoundAnyU3E5__3_5; }
	inline bool* get_address_of_U3CfoundAnyU3E5__3_5() { return &___U3CfoundAnyU3E5__3_5; }
	inline void set_U3CfoundAnyU3E5__3_5(bool value)
	{
		___U3CfoundAnyU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3Es__4_6)); }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B ** get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * value)
	{
		___U3CU3Es__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__5_7() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3Es__5_7)); }
	inline Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  get_U3CU3Es__5_7() const { return ___U3CU3Es__5_7; }
	inline Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * get_address_of_U3CU3Es__5_7() { return &___U3CU3Es__5_7; }
	inline void set_U3CU3Es__5_7(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  value)
	{
		___U3CU3Es__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__5_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__5_7))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__5_7))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CkeyvalU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CkeyvalU3E5__6_8)); }
	inline KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  get_U3CkeyvalU3E5__6_8() const { return ___U3CkeyvalU3E5__6_8; }
	inline KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * get_address_of_U3CkeyvalU3E5__6_8() { return &___U3CkeyvalU3E5__6_8; }
	inline void set_U3CkeyvalU3E5__6_8(KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  value)
	{
		___U3CkeyvalU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CkeyvalU3E5__6_8))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CkeyvalU3E5__6_8))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CspacePinIdU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CspacePinIdU3E5__7_9)); }
	inline String_t* get_U3CspacePinIdU3E5__7_9() const { return ___U3CspacePinIdU3E5__7_9; }
	inline String_t** get_address_of_U3CspacePinIdU3E5__7_9() { return &___U3CspacePinIdU3E5__7_9; }
	inline void set_U3CspacePinIdU3E5__7_9(String_t* value)
	{
		___U3CspacePinIdU3E5__7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CspacePinIdU3E5__7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcloudAnchorIdU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CcloudAnchorIdU3E5__8_10)); }
	inline String_t* get_U3CcloudAnchorIdU3E5__8_10() const { return ___U3CcloudAnchorIdU3E5__8_10; }
	inline String_t** get_address_of_U3CcloudAnchorIdU3E5__8_10() { return &___U3CcloudAnchorIdU3E5__8_10; }
	inline void set_U3CcloudAnchorIdU3E5__8_10(String_t* value)
	{
		___U3CcloudAnchorIdU3E5__8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcloudAnchorIdU3E5__8_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpegAndPropsU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CpegAndPropsU3E5__9_11)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_U3CpegAndPropsU3E5__9_11() const { return ___U3CpegAndPropsU3E5__9_11; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_U3CpegAndPropsU3E5__9_11() { return &___U3CpegAndPropsU3E5__9_11; }
	inline void set_U3CpegAndPropsU3E5__9_11(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___U3CpegAndPropsU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpegAndPropsU3E5__9_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CidxU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CidxU3E5__10_12)); }
	inline int32_t get_U3CidxU3E5__10_12() const { return ___U3CidxU3E5__10_12; }
	inline int32_t* get_address_of_U3CidxU3E5__10_12() { return &___U3CidxU3E5__10_12; }
	inline void set_U3CidxU3E5__10_12(int32_t value)
	{
		___U3CidxU3E5__10_12 = value;
	}

	inline static int32_t get_offset_of_U3CspacePinU3E5__11_13() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CspacePinU3E5__11_13)); }
	inline SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * get_U3CspacePinU3E5__11_13() const { return ___U3CspacePinU3E5__11_13; }
	inline SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 ** get_address_of_U3CspacePinU3E5__11_13() { return &___U3CspacePinU3E5__11_13; }
	inline void set_U3CspacePinU3E5__11_13(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * value)
	{
		___U3CspacePinU3E5__11_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CspacePinU3E5__11_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClockedPoseU3E5__12_14() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3ClockedPoseU3E5__12_14)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_U3ClockedPoseU3E5__12_14() const { return ___U3ClockedPoseU3E5__12_14; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_U3ClockedPoseU3E5__12_14() { return &___U3ClockedPoseU3E5__12_14; }
	inline void set_U3ClockedPoseU3E5__12_14(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___U3ClockedPoseU3E5__12_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_15() { return static_cast<int32_t>(offsetof(U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9, ___U3CU3Eu__1_15)); }
	inline TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  get_U3CU3Eu__1_15() const { return ___U3CU3Eu__1_15; }
	inline TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC * get_address_of_U3CU3Eu__1_15() { return &___U3CU3Eu__1_15; }
	inline void set_U3CU3Eu__1_15(TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  value)
	{
		___U3CU3Eu__1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_15))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46
struct U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::pegAndProps
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___pegAndProps_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_pegAndProps_2() { return static_cast<int32_t>(offsetof(U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40, ___pegAndProps_2)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_pegAndProps_2() const { return ___pegAndProps_2; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_pegAndProps_2() { return &___pegAndProps_2; }
	inline void set_pegAndProps_2(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___pegAndProps_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pegAndProps_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44
struct U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::<>t__builder
	AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::id
	String_t* ___id_2;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::lockedPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lockedPose_3;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_2), (void*)value);
	}

	inline static int32_t get_offset_of_lockedPose_3() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___lockedPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_lockedPose_3() const { return ___lockedPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_lockedPose_3() { return &___lockedPose_3; }
	inline void set_lockedPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___lockedPose_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___U3CU3E4__this_4)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51
struct U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::<>t__builder
	AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::radiusFromDevice
	float ___radiusFromDevice_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_radiusFromDevice_2() { return static_cast<int32_t>(offsetof(U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E, ___radiusFromDevice_2)); }
	inline float get_radiusFromDevice_2() const { return ___radiusFromDevice_2; }
	inline float* get_address_of_radiusFromDevice_2() { return &___radiusFromDevice_2; }
	inline void set_radiusFromDevice_2(float value)
	{
		___radiusFromDevice_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49
struct U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::cloudAnchorId
	String_t* ___cloudAnchorId_2;
	// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::peg
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___peg_3;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_4;
	// System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>s__1
	String_t* ___U3CU3Es__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::<>u__2
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  ___U3CU3Eu__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cloudAnchorId_2() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___cloudAnchorId_2)); }
	inline String_t* get_cloudAnchorId_2() const { return ___cloudAnchorId_2; }
	inline String_t** get_address_of_cloudAnchorId_2() { return &___cloudAnchorId_2; }
	inline void set_cloudAnchorId_2(String_t* value)
	{
		___cloudAnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudAnchorId_2), (void*)value);
	}

	inline static int32_t get_offset_of_peg_3() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___peg_3)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_peg_3() const { return ___peg_3; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_peg_3() { return &___peg_3; }
	inline void set_peg_3(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___peg_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peg_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3E4__this_4)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_5() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3Es__1_5)); }
	inline String_t* get_U3CU3Es__1_5() const { return ___U3CU3Es__1_5; }
	inline String_t** get_address_of_U3CU3Es__1_5() { return &___U3CU3Es__1_5; }
	inline void set_U3CU3Es__1_5(String_t* value)
	{
		___U3CU3Es__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  value)
	{
		___U3CU3Eu__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47
struct U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::<>t__builder
	AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::cloudAnchorId
	String_t* ___cloudAnchorId_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cloudAnchorId_2() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553, ___cloudAnchorId_2)); }
	inline String_t* get_cloudAnchorId_2() const { return ___cloudAnchorId_2; }
	inline String_t** get_address_of_cloudAnchorId_2() { return &___cloudAnchorId_2; }
	inline void set_cloudAnchorId_2(String_t* value)
	{
		___cloudAnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudAnchorId_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48
struct U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::<>t__builder
	AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  ___U3CU3Et__builder_1;
	// System.Collections.Generic.IReadOnlyCollection`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::cloudAnchorIds
	RuntimeObject* ___cloudAnchorIds_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cloudAnchorIds_2() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF, ___cloudAnchorIds_2)); }
	inline RuntimeObject* get_cloudAnchorIds_2() const { return ___cloudAnchorIds_2; }
	inline RuntimeObject** get_address_of_cloudAnchorIds_2() { return &___cloudAnchorIds_2; }
	inline void set_cloudAnchorIds_2(RuntimeObject* value)
	{
		___cloudAnchorIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudAnchorIds_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41
struct U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC, ___U3CU3E4__this_2)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Scripts.TCPClient/<ConnectUWP>d__9
struct U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<ConnectUWP>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Scripts.TCPClient/<ConnectUWP>d__9::<>t__builder
	AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  ___U3CU3Et__builder_1;
	// System.String Scripts.TCPClient/<ConnectUWP>d__9::host
	String_t* ___host_2;
	// System.String Scripts.TCPClient/<ConnectUWP>d__9::port
	String_t* ___port_3;
	// Scripts.TCPClient Scripts.TCPClient/<ConnectUWP>d__9::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_4;
	// Windows.Networking.HostName Scripts.TCPClient/<ConnectUWP>d__9::<serverHost>5__1
	HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * ___U3CserverHostU3E5__1_5;
	// System.IO.Stream Scripts.TCPClient/<ConnectUWP>d__9::<streamOut>5__2
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CstreamOutU3E5__2_6;
	// System.IO.Stream Scripts.TCPClient/<ConnectUWP>d__9::<streamIn>5__3
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___U3CstreamInU3E5__3_7;
	// System.Exception Scripts.TCPClient/<ConnectUWP>d__9::<e>5__4
	Exception_t * ___U3CeU3E5__4_8;
	// System.Runtime.CompilerServices.TaskAwaiter Scripts.TCPClient/<ConnectUWP>d__9::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_host_2() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___host_2)); }
	inline String_t* get_host_2() const { return ___host_2; }
	inline String_t** get_address_of_host_2() { return &___host_2; }
	inline void set_host_2(String_t* value)
	{
		___host_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_2), (void*)value);
	}

	inline static int32_t get_offset_of_port_3() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___port_3)); }
	inline String_t* get_port_3() const { return ___port_3; }
	inline String_t** get_address_of_port_3() { return &___port_3; }
	inline void set_port_3(String_t* value)
	{
		___port_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___port_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CU3E4__this_4)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CserverHostU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CserverHostU3E5__1_5)); }
	inline HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * get_U3CserverHostU3E5__1_5() const { return ___U3CserverHostU3E5__1_5; }
	inline HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 ** get_address_of_U3CserverHostU3E5__1_5() { return &___U3CserverHostU3E5__1_5; }
	inline void set_U3CserverHostU3E5__1_5(HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * value)
	{
		___U3CserverHostU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CserverHostU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstreamOutU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CstreamOutU3E5__2_6)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CstreamOutU3E5__2_6() const { return ___U3CstreamOutU3E5__2_6; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CstreamOutU3E5__2_6() { return &___U3CstreamOutU3E5__2_6; }
	inline void set_U3CstreamOutU3E5__2_6(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CstreamOutU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstreamOutU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstreamInU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CstreamInU3E5__3_7)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_U3CstreamInU3E5__3_7() const { return ___U3CstreamInU3E5__3_7; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_U3CstreamInU3E5__3_7() { return &___U3CstreamInU3E5__3_7; }
	inline void set_U3CstreamInU3E5__3_7(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___U3CstreamInU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstreamInU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CeU3E5__4_8)); }
	inline Exception_t * get_U3CeU3E5__4_8() const { return ___U3CeU3E5__4_8; }
	inline Exception_t ** get_address_of_U3CeU3E5__4_8() { return &___U3CeU3E5__4_8; }
	inline void set_U3CeU3E5__4_8(Exception_t * value)
	{
		___U3CeU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_9() { return static_cast<int32_t>(offsetof(U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E, ___U3CU3Eu__1_9)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_9() const { return ___U3CU3Eu__1_9; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_9() { return &___U3CU3Eu__1_9; }
	inline void set_U3CU3Eu__1_9(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
	}
};


// Scripts.TCPClient/<GetRoute>d__17
struct U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<GetRoute>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>> Scripts.TCPClient/<GetRoute>d__17::<>t__builder
	AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63  ___U3CU3Et__builder_1;
	// System.String Scripts.TCPClient/<GetRoute>d__17::route
	String_t* ___route_2;
	// Scripts.TCPClient Scripts.TCPClient/<GetRoute>d__17::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_3;
	// System.Collections.Generic.List`1<System.String> Scripts.TCPClient/<GetRoute>d__17::<holds>5__1
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CholdsU3E5__1_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Scripts.TCPClient/<GetRoute>d__17::<positions>5__2
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___U3CpositionsU3E5__2_5;
	// System.Collections.Generic.List`1<UnityEngine.Quaternion> Scripts.TCPClient/<GetRoute>d__17::<rotations>5__3
	List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * ___U3CrotationsU3E5__3_6;
	// System.Char[] Scripts.TCPClient/<GetRoute>d__17::<response>5__4
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__4_7;
	// System.String Scripts.TCPClient/<GetRoute>d__17::<responseStr>5__5
	String_t* ___U3CresponseStrU3E5__5_8;
	// System.String Scripts.TCPClient/<GetRoute>d__17::<filename>5__6
	String_t* ___U3CfilenameU3E5__6_9;
	// System.String[] Scripts.TCPClient/<GetRoute>d__17::<holdInfo>5__7
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CholdInfoU3E5__7_10;
	// System.String[] Scripts.TCPClient/<GetRoute>d__17::<positionStr>5__8
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CpositionStrU3E5__8_11;
	// UnityEngine.Vector3 Scripts.TCPClient/<GetRoute>d__17::<position>5__9
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3E5__9_12;
	// System.String[] Scripts.TCPClient/<GetRoute>d__17::<rotationStr>5__10
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CrotationStrU3E5__10_13;
	// UnityEngine.Quaternion Scripts.TCPClient/<GetRoute>d__17::<rotation>5__11
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3E5__11_14;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<GetRoute>d__17::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_15;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_route_2() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___route_2)); }
	inline String_t* get_route_2() const { return ___route_2; }
	inline String_t** get_address_of_route_2() { return &___route_2; }
	inline void set_route_2(String_t* value)
	{
		___route_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___route_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CU3E4__this_3)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CholdsU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CholdsU3E5__1_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CholdsU3E5__1_4() const { return ___U3CholdsU3E5__1_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CholdsU3E5__1_4() { return &___U3CholdsU3E5__1_4; }
	inline void set_U3CholdsU3E5__1_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CholdsU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CholdsU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionsU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CpositionsU3E5__2_5)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_U3CpositionsU3E5__2_5() const { return ___U3CpositionsU3E5__2_5; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_U3CpositionsU3E5__2_5() { return &___U3CpositionsU3E5__2_5; }
	inline void set_U3CpositionsU3E5__2_5(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___U3CpositionsU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionsU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrotationsU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CrotationsU3E5__3_6)); }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * get_U3CrotationsU3E5__3_6() const { return ___U3CrotationsU3E5__3_6; }
	inline List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB ** get_address_of_U3CrotationsU3E5__3_6() { return &___U3CrotationsU3E5__3_6; }
	inline void set_U3CrotationsU3E5__3_6(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * value)
	{
		___U3CrotationsU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrotationsU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CresponseU3E5__4_7)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__4_7() const { return ___U3CresponseU3E5__4_7; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__4_7() { return &___U3CresponseU3E5__4_7; }
	inline void set_U3CresponseU3E5__4_7(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__4_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CresponseStrU3E5__5_8)); }
	inline String_t* get_U3CresponseStrU3E5__5_8() const { return ___U3CresponseStrU3E5__5_8; }
	inline String_t** get_address_of_U3CresponseStrU3E5__5_8() { return &___U3CresponseStrU3E5__5_8; }
	inline void set_U3CresponseStrU3E5__5_8(String_t* value)
	{
		___U3CresponseStrU3E5__5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__5_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfilenameU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CfilenameU3E5__6_9)); }
	inline String_t* get_U3CfilenameU3E5__6_9() const { return ___U3CfilenameU3E5__6_9; }
	inline String_t** get_address_of_U3CfilenameU3E5__6_9() { return &___U3CfilenameU3E5__6_9; }
	inline void set_U3CfilenameU3E5__6_9(String_t* value)
	{
		___U3CfilenameU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfilenameU3E5__6_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CholdInfoU3E5__7_10() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CholdInfoU3E5__7_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CholdInfoU3E5__7_10() const { return ___U3CholdInfoU3E5__7_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CholdInfoU3E5__7_10() { return &___U3CholdInfoU3E5__7_10; }
	inline void set_U3CholdInfoU3E5__7_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CholdInfoU3E5__7_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CholdInfoU3E5__7_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionStrU3E5__8_11() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CpositionStrU3E5__8_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CpositionStrU3E5__8_11() const { return ___U3CpositionStrU3E5__8_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CpositionStrU3E5__8_11() { return &___U3CpositionStrU3E5__8_11; }
	inline void set_U3CpositionStrU3E5__8_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CpositionStrU3E5__8_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpositionStrU3E5__8_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__9_12() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CpositionU3E5__9_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3E5__9_12() const { return ___U3CpositionU3E5__9_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3E5__9_12() { return &___U3CpositionU3E5__9_12; }
	inline void set_U3CpositionU3E5__9_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3E5__9_12 = value;
	}

	inline static int32_t get_offset_of_U3CrotationStrU3E5__10_13() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CrotationStrU3E5__10_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CrotationStrU3E5__10_13() const { return ___U3CrotationStrU3E5__10_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CrotationStrU3E5__10_13() { return &___U3CrotationStrU3E5__10_13; }
	inline void set_U3CrotationStrU3E5__10_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CrotationStrU3E5__10_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrotationStrU3E5__10_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrotationU3E5__11_14() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CrotationU3E5__11_14)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3E5__11_14() const { return ___U3CrotationU3E5__11_14; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3E5__11_14() { return &___U3CrotationU3E5__11_14; }
	inline void set_U3CrotationU3E5__11_14(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3E5__11_14 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_15() { return static_cast<int32_t>(offsetof(U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1, ___U3CU3Eu__1_15)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_15() const { return ___U3CU3Eu__1_15; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_15() { return &___U3CU3Eu__1_15; }
	inline void set_U3CU3Eu__1_15(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_15))->___m_task_0), (void*)NULL);
	}
};


// Scripts.TCPClient/<GetRouteList>d__18
struct U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<GetRouteList>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>> Scripts.TCPClient/<GetRouteList>d__18::<>t__builder
	AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2  ___U3CU3Et__builder_1;
	// Scripts.TCPClient Scripts.TCPClient/<GetRouteList>d__18::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.String> Scripts.TCPClient/<GetRouteList>d__18::<routeList>5__1
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CrouteListU3E5__1_3;
	// System.Char[] Scripts.TCPClient/<GetRouteList>d__18::<response>5__2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__2_4;
	// System.String Scripts.TCPClient/<GetRouteList>d__18::<responseStr>5__3
	String_t* ___U3CresponseStrU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<GetRouteList>d__18::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CU3E4__this_2)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrouteListU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CrouteListU3E5__1_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CrouteListU3E5__1_3() const { return ___U3CrouteListU3E5__1_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CrouteListU3E5__1_3() { return &___U3CrouteListU3E5__1_3; }
	inline void set_U3CrouteListU3E5__1_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CrouteListU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrouteListU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CresponseU3E5__2_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__2_4() const { return ___U3CresponseU3E5__2_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__2_4() { return &___U3CresponseU3E5__2_4; }
	inline void set_U3CresponseU3E5__2_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CresponseStrU3E5__3_5)); }
	inline String_t* get_U3CresponseStrU3E5__3_5() const { return ___U3CresponseStrU3E5__3_5; }
	inline String_t** get_address_of_U3CresponseStrU3E5__3_5() { return &___U3CresponseStrU3E5__3_5; }
	inline void set_U3CresponseStrU3E5__3_5(String_t* value)
	{
		___U3CresponseStrU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50
struct U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::cloudAnchorId
	String_t* ___cloudAnchorId_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_cloudAnchorId_2() { return static_cast<int32_t>(offsetof(U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9, ___cloudAnchorId_2)); }
	inline String_t* get_cloudAnchorId_2() const { return ___cloudAnchorId_2; }
	inline String_t** get_address_of_cloudAnchorId_2() { return &___cloudAnchorId_2; }
	inline void set_cloudAnchorId_2(String_t* value)
	{
		___cloudAnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloudAnchorId_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52
struct U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::radius
	float ___radius_2;
	// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::<>4__this
	SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614, ___U3CU3E4__this_3)); }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// Scripts.TCPClient/<SendFile>d__14
struct U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<SendFile>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Scripts.TCPClient/<SendFile>d__14::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Scripts.TCPClient/<SendFile>d__14::filename
	String_t* ___filename_2;
	// Scripts.TCPClient Scripts.TCPClient/<SendFile>d__14::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_3;
	// System.Char[] Scripts.TCPClient/<SendFile>d__14::<response>5__1
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__1_4;
	// System.String Scripts.TCPClient/<SendFile>d__14::<responseStr>5__2
	String_t* ___U3CresponseStrU3E5__2_5;
	// System.String Scripts.TCPClient/<SendFile>d__14::<path>5__3
	String_t* ___U3CpathU3E5__3_6;
	// System.IO.TextReader Scripts.TCPClient/<SendFile>d__14::<sr>5__4
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___U3CsrU3E5__4_7;
	// System.String Scripts.TCPClient/<SendFile>d__14::<s>5__5
	String_t* ___U3CsU3E5__5_8;
	// System.Exception Scripts.TCPClient/<SendFile>d__14::<e>5__6
	Exception_t * ___U3CeU3E5__6_9;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<SendFile>d__14::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CU3E4__this_3)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CresponseU3E5__1_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__1_4() const { return ___U3CresponseU3E5__1_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__1_4() { return &___U3CresponseU3E5__1_4; }
	inline void set_U3CresponseU3E5__1_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CresponseStrU3E5__2_5)); }
	inline String_t* get_U3CresponseStrU3E5__2_5() const { return ___U3CresponseStrU3E5__2_5; }
	inline String_t** get_address_of_U3CresponseStrU3E5__2_5() { return &___U3CresponseStrU3E5__2_5; }
	inline void set_U3CresponseStrU3E5__2_5(String_t* value)
	{
		___U3CresponseStrU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpathU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CpathU3E5__3_6)); }
	inline String_t* get_U3CpathU3E5__3_6() const { return ___U3CpathU3E5__3_6; }
	inline String_t** get_address_of_U3CpathU3E5__3_6() { return &___U3CpathU3E5__3_6; }
	inline void set_U3CpathU3E5__3_6(String_t* value)
	{
		___U3CpathU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpathU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsrU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CsrU3E5__4_7)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_U3CsrU3E5__4_7() const { return ___U3CsrU3E5__4_7; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_U3CsrU3E5__4_7() { return &___U3CsrU3E5__4_7; }
	inline void set_U3CsrU3E5__4_7(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___U3CsrU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsrU3E5__4_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CsU3E5__5_8)); }
	inline String_t* get_U3CsU3E5__5_8() const { return ___U3CsU3E5__5_8; }
	inline String_t** get_address_of_U3CsU3E5__5_8() { return &___U3CsU3E5__5_8; }
	inline void set_U3CsU3E5__5_8(String_t* value)
	{
		___U3CsU3E5__5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsU3E5__5_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CeU3E5__6_9)); }
	inline Exception_t * get_U3CeU3E5__6_9() const { return ___U3CeU3E5__6_9; }
	inline Exception_t ** get_address_of_U3CeU3E5__6_9() { return &___U3CeU3E5__6_9; }
	inline void set_U3CeU3E5__6_9(Exception_t * value)
	{
		___U3CeU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__6_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_10() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA, ___U3CU3Eu__1_10)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_10() const { return ___U3CU3Eu__1_10; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_10() { return &___U3CU3Eu__1_10; }
	inline void set_U3CU3Eu__1_10(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_10))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.WorldLocking.Core.SpacePin
struct SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.SpacePin/ModelPositionSourceEnum Microsoft.MixedReality.WorldLocking.Core.SpacePin::modelPositionSource
	int32_t ___modelPositionSource_4;
	// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.SpacePin::manager
	WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * ___manager_5;
	// Microsoft.MixedReality.WorldLocking.Core.IAlignmentManager Microsoft.MixedReality.WorldLocking.Core.SpacePin::alignmentManager
	RuntimeObject* ___alignmentManager_6;
	// System.UInt64 Microsoft.MixedReality.WorldLocking.Core.SpacePin::ulAnchorId
	uint64_t ___ulAnchorId_7;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::restorePoseLocal
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___restorePoseLocal_8;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::modelingPoseParent
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___modelingPoseParent_9;
	// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.SpacePin::lockedPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lockedPose_10;
	// Microsoft.MixedReality.WorldLocking.Core.IAttachmentPoint Microsoft.MixedReality.WorldLocking.Core.SpacePin::attachmentPoint
	RuntimeObject* ___attachmentPoint_11;

public:
	inline static int32_t get_offset_of_modelPositionSource_4() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___modelPositionSource_4)); }
	inline int32_t get_modelPositionSource_4() const { return ___modelPositionSource_4; }
	inline int32_t* get_address_of_modelPositionSource_4() { return &___modelPositionSource_4; }
	inline void set_modelPositionSource_4(int32_t value)
	{
		___modelPositionSource_4 = value;
	}

	inline static int32_t get_offset_of_manager_5() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___manager_5)); }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * get_manager_5() const { return ___manager_5; }
	inline WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 ** get_address_of_manager_5() { return &___manager_5; }
	inline void set_manager_5(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * value)
	{
		___manager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manager_5), (void*)value);
	}

	inline static int32_t get_offset_of_alignmentManager_6() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___alignmentManager_6)); }
	inline RuntimeObject* get_alignmentManager_6() const { return ___alignmentManager_6; }
	inline RuntimeObject** get_address_of_alignmentManager_6() { return &___alignmentManager_6; }
	inline void set_alignmentManager_6(RuntimeObject* value)
	{
		___alignmentManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___alignmentManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_ulAnchorId_7() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___ulAnchorId_7)); }
	inline uint64_t get_ulAnchorId_7() const { return ___ulAnchorId_7; }
	inline uint64_t* get_address_of_ulAnchorId_7() { return &___ulAnchorId_7; }
	inline void set_ulAnchorId_7(uint64_t value)
	{
		___ulAnchorId_7 = value;
	}

	inline static int32_t get_offset_of_restorePoseLocal_8() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___restorePoseLocal_8)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_restorePoseLocal_8() const { return ___restorePoseLocal_8; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_restorePoseLocal_8() { return &___restorePoseLocal_8; }
	inline void set_restorePoseLocal_8(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___restorePoseLocal_8 = value;
	}

	inline static int32_t get_offset_of_modelingPoseParent_9() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___modelingPoseParent_9)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_modelingPoseParent_9() const { return ___modelingPoseParent_9; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_modelingPoseParent_9() { return &___modelingPoseParent_9; }
	inline void set_modelingPoseParent_9(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___modelingPoseParent_9 = value;
	}

	inline static int32_t get_offset_of_lockedPose_10() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___lockedPose_10)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_lockedPose_10() const { return ___lockedPose_10; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_lockedPose_10() { return &___lockedPose_10; }
	inline void set_lockedPose_10(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___lockedPose_10 = value;
	}

	inline static int32_t get_offset_of_attachmentPoint_11() { return static_cast<int32_t>(offsetof(SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C, ___attachmentPoint_11)); }
	inline RuntimeObject* get_attachmentPoint_11() const { return ___attachmentPoint_11; }
	inline RuntimeObject** get_address_of_attachmentPoint_11() { return &___attachmentPoint_11; }
	inline void set_attachmentPoint_11(RuntimeObject* value)
	{
		___attachmentPoint_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachmentPoint_11), (void*)value);
	}
};


// Scripts.WorldLocking.SpacePinBinder
struct SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA> Scripts.WorldLocking.SpacePinBinder::spacePins
	List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 * ___spacePins_4;
	// System.Single Scripts.WorldLocking.SpacePinBinder::searchRadius
	float ___searchRadius_5;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding> Scripts.WorldLocking.SpacePinBinder::bindings
	List_1_t634BEC2B3FE1D523B4D7D852372DADF6919A71E3 * ___bindings_6;
	// Microsoft.MixedReality.WorldLocking.ASA.IPublisher Scripts.WorldLocking.SpacePinBinder::publisher
	RuntimeObject* ___publisher_7;
	// System.Int32 Scripts.WorldLocking.SpacePinBinder::ConsoleHigh
	int32_t ___ConsoleHigh_8;
	// System.Int32 Scripts.WorldLocking.SpacePinBinder::ConsoleLow
	int32_t ___ConsoleLow_9;

public:
	inline static int32_t get_offset_of_spacePins_4() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___spacePins_4)); }
	inline List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 * get_spacePins_4() const { return ___spacePins_4; }
	inline List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 ** get_address_of_spacePins_4() { return &___spacePins_4; }
	inline void set_spacePins_4(List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 * value)
	{
		___spacePins_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spacePins_4), (void*)value);
	}

	inline static int32_t get_offset_of_searchRadius_5() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___searchRadius_5)); }
	inline float get_searchRadius_5() const { return ___searchRadius_5; }
	inline float* get_address_of_searchRadius_5() { return &___searchRadius_5; }
	inline void set_searchRadius_5(float value)
	{
		___searchRadius_5 = value;
	}

	inline static int32_t get_offset_of_bindings_6() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___bindings_6)); }
	inline List_1_t634BEC2B3FE1D523B4D7D852372DADF6919A71E3 * get_bindings_6() const { return ___bindings_6; }
	inline List_1_t634BEC2B3FE1D523B4D7D852372DADF6919A71E3 ** get_address_of_bindings_6() { return &___bindings_6; }
	inline void set_bindings_6(List_1_t634BEC2B3FE1D523B4D7D852372DADF6919A71E3 * value)
	{
		___bindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_publisher_7() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___publisher_7)); }
	inline RuntimeObject* get_publisher_7() const { return ___publisher_7; }
	inline RuntimeObject** get_address_of_publisher_7() { return &___publisher_7; }
	inline void set_publisher_7(RuntimeObject* value)
	{
		___publisher_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publisher_7), (void*)value);
	}

	inline static int32_t get_offset_of_ConsoleHigh_8() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___ConsoleHigh_8)); }
	inline int32_t get_ConsoleHigh_8() const { return ___ConsoleHigh_8; }
	inline int32_t* get_address_of_ConsoleHigh_8() { return &___ConsoleHigh_8; }
	inline void set_ConsoleHigh_8(int32_t value)
	{
		___ConsoleHigh_8 = value;
	}

	inline static int32_t get_offset_of_ConsoleLow_9() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882, ___ConsoleLow_9)); }
	inline int32_t get_ConsoleLow_9() const { return ___ConsoleLow_9; }
	inline int32_t* get_address_of_ConsoleLow_9() { return &___ConsoleLow_9; }
	inline void set_ConsoleLow_9(int32_t value)
	{
		___ConsoleLow_9 = value;
	}
};

struct SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_StaticFields
{
public:
	// System.String Scripts.WorldLocking.SpacePinBinder::SpacePinIdKey
	String_t* ___SpacePinIdKey_10;

public:
	inline static int32_t get_offset_of_SpacePinIdKey_10() { return static_cast<int32_t>(offsetof(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_StaticFields, ___SpacePinIdKey_10)); }
	inline String_t* get_SpacePinIdKey_10() const { return ___SpacePinIdKey_10; }
	inline String_t** get_address_of_SpacePinIdKey_10() { return &___SpacePinIdKey_10; }
	inline void set_SpacePinIdKey_10(String_t* value)
	{
		___SpacePinIdKey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpacePinIdKey_10), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA
struct SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::coarseRelocationEnabled
	bool ___coarseRelocationEnabled_4;
	// System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::crPublishEnabled
	bool ___crPublishEnabled_5;
	// System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::crUseWifi
	bool ___crUseWifi_6;
	// System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::crUseGPS
	bool ___crUseGPS_7;
	// System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::crBeaconUuids
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___crBeaconUuids_8;
	// UnityEngine.Transform Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::anchorsParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___anchorsParent_9;
	// UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::anchorsPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___anchorsPrefab_10;
	// System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::maxSearchSeconds
	float ___maxSearchSeconds_11;
	// System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::maxWaitForMoreAnchorsSeconds
	float ___maxWaitForMoreAnchorsSeconds_12;
	// System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::minRecommendedForCreateProgress
	float ___minRecommendedForCreateProgress_13;

public:
	inline static int32_t get_offset_of_coarseRelocationEnabled_4() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___coarseRelocationEnabled_4)); }
	inline bool get_coarseRelocationEnabled_4() const { return ___coarseRelocationEnabled_4; }
	inline bool* get_address_of_coarseRelocationEnabled_4() { return &___coarseRelocationEnabled_4; }
	inline void set_coarseRelocationEnabled_4(bool value)
	{
		___coarseRelocationEnabled_4 = value;
	}

	inline static int32_t get_offset_of_crPublishEnabled_5() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___crPublishEnabled_5)); }
	inline bool get_crPublishEnabled_5() const { return ___crPublishEnabled_5; }
	inline bool* get_address_of_crPublishEnabled_5() { return &___crPublishEnabled_5; }
	inline void set_crPublishEnabled_5(bool value)
	{
		___crPublishEnabled_5 = value;
	}

	inline static int32_t get_offset_of_crUseWifi_6() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___crUseWifi_6)); }
	inline bool get_crUseWifi_6() const { return ___crUseWifi_6; }
	inline bool* get_address_of_crUseWifi_6() { return &___crUseWifi_6; }
	inline void set_crUseWifi_6(bool value)
	{
		___crUseWifi_6 = value;
	}

	inline static int32_t get_offset_of_crUseGPS_7() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___crUseGPS_7)); }
	inline bool get_crUseGPS_7() const { return ___crUseGPS_7; }
	inline bool* get_address_of_crUseGPS_7() { return &___crUseGPS_7; }
	inline void set_crUseGPS_7(bool value)
	{
		___crUseGPS_7 = value;
	}

	inline static int32_t get_offset_of_crBeaconUuids_8() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___crBeaconUuids_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_crBeaconUuids_8() const { return ___crBeaconUuids_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_crBeaconUuids_8() { return &___crBeaconUuids_8; }
	inline void set_crBeaconUuids_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___crBeaconUuids_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crBeaconUuids_8), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsParent_9() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___anchorsParent_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_anchorsParent_9() const { return ___anchorsParent_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_anchorsParent_9() { return &___anchorsParent_9; }
	inline void set_anchorsParent_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___anchorsParent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorsParent_9), (void*)value);
	}

	inline static int32_t get_offset_of_anchorsPrefab_10() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___anchorsPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_anchorsPrefab_10() const { return ___anchorsPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_anchorsPrefab_10() { return &___anchorsPrefab_10; }
	inline void set_anchorsPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___anchorsPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anchorsPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_maxSearchSeconds_11() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___maxSearchSeconds_11)); }
	inline float get_maxSearchSeconds_11() const { return ___maxSearchSeconds_11; }
	inline float* get_address_of_maxSearchSeconds_11() { return &___maxSearchSeconds_11; }
	inline void set_maxSearchSeconds_11(float value)
	{
		___maxSearchSeconds_11 = value;
	}

	inline static int32_t get_offset_of_maxWaitForMoreAnchorsSeconds_12() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___maxWaitForMoreAnchorsSeconds_12)); }
	inline float get_maxWaitForMoreAnchorsSeconds_12() const { return ___maxWaitForMoreAnchorsSeconds_12; }
	inline float* get_address_of_maxWaitForMoreAnchorsSeconds_12() { return &___maxWaitForMoreAnchorsSeconds_12; }
	inline void set_maxWaitForMoreAnchorsSeconds_12(float value)
	{
		___maxWaitForMoreAnchorsSeconds_12 = value;
	}

	inline static int32_t get_offset_of_minRecommendedForCreateProgress_13() { return static_cast<int32_t>(offsetof(SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B, ___minRecommendedForCreateProgress_13)); }
	inline float get_minRecommendedForCreateProgress_13() const { return ___minRecommendedForCreateProgress_13; }
	inline float* get_address_of_minRecommendedForCreateProgress_13() { return &___minRecommendedForCreateProgress_13; }
	inline void set_minRecommendedForCreateProgress_13(float value)
	{
		___minRecommendedForCreateProgress_13 = value;
	}
};


// Scripts.TCPClient
struct TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Scripts.TCPClient::host
	String_t* ___host_4;
	// System.String Scripts.TCPClient::port
	String_t* ___port_5;
	// Scripts.RouteManipulator Scripts.TCPClient::routeManipulator
	RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * ___routeManipulator_6;
	// System.Boolean Scripts.TCPClient::_useUWP
	bool ____useUWP_7;
	// Windows.Networking.Sockets.StreamSocket Scripts.TCPClient::socket
	StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * ___socket_8;
	// System.IO.StreamWriter Scripts.TCPClient::writer
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___writer_9;
	// System.IO.StreamReader Scripts.TCPClient::reader
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___reader_10;
	// System.Int32 Scripts.TCPClient::BUFFER_SIZE
	int32_t ___BUFFER_SIZE_11;
	// System.String Scripts.TCPClient::errorStatus
	String_t* ___errorStatus_12;
	// System.String Scripts.TCPClient::successStatus
	String_t* ___successStatus_13;

public:
	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_4), (void*)value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___port_5)); }
	inline String_t* get_port_5() const { return ___port_5; }
	inline String_t** get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(String_t* value)
	{
		___port_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___port_5), (void*)value);
	}

	inline static int32_t get_offset_of_routeManipulator_6() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___routeManipulator_6)); }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * get_routeManipulator_6() const { return ___routeManipulator_6; }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F ** get_address_of_routeManipulator_6() { return &___routeManipulator_6; }
	inline void set_routeManipulator_6(RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * value)
	{
		___routeManipulator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routeManipulator_6), (void*)value);
	}

	inline static int32_t get_offset_of__useUWP_7() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ____useUWP_7)); }
	inline bool get__useUWP_7() const { return ____useUWP_7; }
	inline bool* get_address_of__useUWP_7() { return &____useUWP_7; }
	inline void set__useUWP_7(bool value)
	{
		____useUWP_7 = value;
	}

	inline static int32_t get_offset_of_socket_8() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___socket_8)); }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * get_socket_8() const { return ___socket_8; }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 ** get_address_of_socket_8() { return &___socket_8; }
	inline void set_socket_8(StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * value)
	{
		___socket_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_8), (void*)value);
	}

	inline static int32_t get_offset_of_writer_9() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___writer_9)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_writer_9() const { return ___writer_9; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_writer_9() { return &___writer_9; }
	inline void set_writer_9(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___writer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_9), (void*)value);
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___reader_10)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_reader_10() const { return ___reader_10; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_10), (void*)value);
	}

	inline static int32_t get_offset_of_BUFFER_SIZE_11() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___BUFFER_SIZE_11)); }
	inline int32_t get_BUFFER_SIZE_11() const { return ___BUFFER_SIZE_11; }
	inline int32_t* get_address_of_BUFFER_SIZE_11() { return &___BUFFER_SIZE_11; }
	inline void set_BUFFER_SIZE_11(int32_t value)
	{
		___BUFFER_SIZE_11 = value;
	}

	inline static int32_t get_offset_of_errorStatus_12() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___errorStatus_12)); }
	inline String_t* get_errorStatus_12() const { return ___errorStatus_12; }
	inline String_t** get_address_of_errorStatus_12() { return &___errorStatus_12; }
	inline void set_errorStatus_12(String_t* value)
	{
		___errorStatus_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorStatus_12), (void*)value);
	}

	inline static int32_t get_offset_of_successStatus_13() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___successStatus_13)); }
	inline String_t* get_successStatus_13() const { return ___successStatus_13; }
	inline String_t** get_address_of_successStatus_13() { return &___successStatus_13; }
	inline void set_successStatus_13(String_t* value)
	{
		___successStatus_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successStatus_13), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable
struct SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA  : public SpacePin_tE055D70F6955F17C549DB0D50D74EF3E785C675C
{
public:
	// Microsoft.MixedReality.WorldLocking.Core.Orienter Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::orienter
	Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * ___orienter_12;
	// Microsoft.MixedReality.WorldLocking.Core.IOrienter Microsoft.MixedReality.WorldLocking.Core.SpacePinOrientable::iorienter
	RuntimeObject* ___iorienter_13;

public:
	inline static int32_t get_offset_of_orienter_12() { return static_cast<int32_t>(offsetof(SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA, ___orienter_12)); }
	inline Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * get_orienter_12() const { return ___orienter_12; }
	inline Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 ** get_address_of_orienter_12() { return &___orienter_12; }
	inline void set_orienter_12(Orienter_t1D850D1887AD89DD2EFDB94F24D1E9C57FA074E8 * value)
	{
		___orienter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___orienter_12), (void*)value);
	}

	inline static int32_t get_offset_of_iorienter_13() { return static_cast<int32_t>(offsetof(SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA, ___iorienter_13)); }
	inline RuntimeObject* get_iorienter_13() const { return ___iorienter_13; }
	inline RuntimeObject** get_address_of_iorienter_13() { return &___iorienter_13; }
	inline void set_iorienter_13(RuntimeObject* value)
	{
		___iorienter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iorienter_13), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA
struct SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102  : public SpacePinOrientable_t4469380D2E5739B01920B3674A01E970CA4B2DEA
{
public:
	// Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::localPeg
	RuntimeObject* ___localPeg_14;
	// Microsoft.MixedReality.WorldLocking.ASA.IPublisher Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::<Publisher>k__BackingField
	RuntimeObject* ___U3CPublisherU3Ek__BackingField_15;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/KeyValPair> Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::propertyList
	List_1_tA3228908CFE5335293F412A92299887C44CD37EB * ___propertyList_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::properties
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___properties_17;
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::ConsoleLow
	int32_t ___ConsoleLow_18;
	// System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::ConsoleHigh
	int32_t ___ConsoleHigh_19;

public:
	inline static int32_t get_offset_of_localPeg_14() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___localPeg_14)); }
	inline RuntimeObject* get_localPeg_14() const { return ___localPeg_14; }
	inline RuntimeObject** get_address_of_localPeg_14() { return &___localPeg_14; }
	inline void set_localPeg_14(RuntimeObject* value)
	{
		___localPeg_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localPeg_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublisherU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___U3CPublisherU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3CPublisherU3Ek__BackingField_15() const { return ___U3CPublisherU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3CPublisherU3Ek__BackingField_15() { return &___U3CPublisherU3Ek__BackingField_15; }
	inline void set_U3CPublisherU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3CPublisherU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPublisherU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_propertyList_16() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___propertyList_16)); }
	inline List_1_tA3228908CFE5335293F412A92299887C44CD37EB * get_propertyList_16() const { return ___propertyList_16; }
	inline List_1_tA3228908CFE5335293F412A92299887C44CD37EB ** get_address_of_propertyList_16() { return &___propertyList_16; }
	inline void set_propertyList_16(List_1_tA3228908CFE5335293F412A92299887C44CD37EB * value)
	{
		___propertyList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyList_16), (void*)value);
	}

	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___properties_17)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_properties_17() const { return ___properties_17; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_17), (void*)value);
	}

	inline static int32_t get_offset_of_ConsoleLow_18() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___ConsoleLow_18)); }
	inline int32_t get_ConsoleLow_18() const { return ___ConsoleLow_18; }
	inline int32_t* get_address_of_ConsoleLow_18() { return &___ConsoleLow_18; }
	inline void set_ConsoleLow_18(int32_t value)
	{
		___ConsoleLow_18 = value;
	}

	inline static int32_t get_offset_of_ConsoleHigh_19() { return static_cast<int32_t>(offsetof(SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102, ___ConsoleHigh_19)); }
	inline int32_t get_ConsoleHigh_19() const { return ___ConsoleHigh_19; }
	inline int32_t* get_address_of_ConsoleHigh_19() { return &___ConsoleHigh_19; }
	inline void set_ConsoleHigh_19(int32_t value)
	{
		___ConsoleHigh_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mA9C6EFFB0D47F2AE8623E890B305A6BF87C15FE4_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mF230095DEFD306860580163DED8B5332803498AF_gshared (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mF9816878F627088B335324197E236528408AC0D6_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_gshared (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m8C29AFD88FFAB48A99FF7282D5BBC3C945E02D49_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`3<System.Object,System.Object,System.Object>::.ctor(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_m8868D9B867F41FEEDC7C736B39DAB0889188EC78_gshared (ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_gshared (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___item0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29F2BD2081981778A27B69F8183673928FD88754_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB77116BCE998196139BEFEA2EC78DE9F9EA37B55_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_mEB2673CE750E1CEF9B34860793DD41850950C3F9_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Scripts.WorldLocking.SpacePinBinder::get_IsReady()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpacePinBinder_get_IsReady_m962E5B41575CB3372C65343A752E32BACA3E527E (SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Scripts.WorldLocking.SpacePinBinder/<Purge>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B_mE823F91FCF267C314BCA7DB6D7128F7CE6EA1E85 (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mA9C6EFFB0D47F2AE8623E890B305A6BF87C15FE4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_gshared)(__this, ___result0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::GetAwaiter()
inline TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  Task_1_GetAwaiter_m184B006114FEC8ED60FDD6454EF2FFC5295286D4 (Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  (*) (Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m561283196B35EB33BD2F2E60D41E354E8C48B43C (TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>,Scripts.WorldLocking.SpacePinBinder/<Search>d__28>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC_TisU3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9_m8565661C3AFEF01E4A08B4BA949DFA0697A2032C (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * __this, TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC * ___awaiter0, U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *, TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *, U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mF230095DEFD306860580163DED8B5332803498AF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::GetResult()
inline Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * TaskAwaiter_1_GetResult_m9C7F3FC8108E2E0A1C7D5A5FDCC44628B0CD687E (TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC * __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * (*) (TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05 (const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::GetEnumerator()
inline Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  Dictionary_2_GetEnumerator_m8CC7988E22B52640FE8CD4569D652525E0ED43A3 (Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  (*) (Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::get_Current()
inline KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  Enumerator_get_Current_m313BFF3564683620D1996F58C19669688BA6EBF0_inline (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  (*) (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::get_Value()
inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_inline (KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * __this, const RuntimeMethod* method)
{
	return ((  LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * (*) (KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mB1A6107A29186004544B0AEC1D9F2520D5422052_inline (KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Int32 Scripts.WorldLocking.SpacePinBinder::FindSpacePinById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpacePinBinder_FindSpacePinById_m5D22EC00795ABCDADB69EF167F4CAC9EFF93B9A5 (SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * __this, String_t* ___spacePinId0, const RuntimeMethod* method);
// System.Boolean Scripts.WorldLocking.SpacePinBinder::CreateBinding(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpacePinBinder_CreateBinding_mFBCA72729B75301EF54B4BB36BD5B342B30AA856 (SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * __this, String_t* ___spacePinId0, String_t* ___cloudAnchorId1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA>::get_Item(System.Int32)
inline SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * List_1_get_Item_m2185D270EA81D71E694C2B1446371DCF9BB7630A_inline (List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * (*) (List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.WorldLockingManager::get_LockedFromFrozen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  WorldLockingManager_get_LockedFromFrozen_m5F77C198C95A47F5E4FE9563C64688B692C14418 (WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * __this, const RuntimeMethod* method);
// UnityEngine.Pose Microsoft.MixedReality.WorldLocking.Core.PoseExtensions::Multiply(UnityEngine.Pose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  PoseExtensions_Multiply_m1022B323DA0161696097ABC4C0A81CFEF2675B71 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___lhs0, Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Pose::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_mF545EBBC9D7E041E8FC673068C8DB7E29B696C82 (Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.WorldLocking.Tools.SimpleConsole::AddLine(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleConsole_AddLine_m32F068B4683B87C67170769518C6971992C8A0D4 (int32_t ___level0, String_t* ___line1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::SetLocalPeg(Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinASA_SetLocalPeg_m29C3B631B667836F86B725BB7A7A6127E3F22C7E (SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * __this, RuntimeObject* ___peg0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::MoveNext()
inline bool Enumerator_MoveNext_m92593F06F58BEA446F017A54355E0D2B3C818CFE (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::Dispose()
inline void Enumerator_Dispose_m1BC9198EEC3AF9FE05488FF46EF7F6D1915015C8 (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40_mEDAF2072458BB907CECC51FF4EB925E25F42D190 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B_mE538C5C917A5A1AFE552635307CF85BFBB59ACD8 (AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m0D3EF85449B8C3CF19ECB295E7327E12E6525AE8 (AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9_m673AC8F47D10F426712F39705681287F1A398E3E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E_m5053443778415DB5298805378D2BE2F845C3624D (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798 (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * SpacePinPublisherASA_Delete_mE7F18E2EC431D85FC656EA8D762DFC89601F0D36 (SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * __this, String_t* ___cloudAnchorId0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_mD9B452CC532F301D93669A9AB7511669ADB9CDAF (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA::Create(Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * SpacePinPublisherASA_Create_m7874F2B7D2BC7BC07221FF30256EF2633BE58BAF (SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * __this, LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___pegAndProps0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_GetAwaiter_m4F5B9EF55874E9959CE12E71ADEAC798960F0FE3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_m86A5E13CB04A1E3CCA0E6B5E3FBE91219D493FCE (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * ___awaiter0, U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisRuntimeObject_mF9816878F627088B335324197E236528408AC0D6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895 (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614_m9DDE9E249E70DD15C5E55612F0C9B67E98E829AF (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF6714829CDDDF820DD9BD6DDC69002FDE2E551EF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553_m771B798748209A4FF9A9F4388A34117B1DCD5CA7 (AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m2982452DC774B47155897074BEB1D2B76A8B5557 (AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF_m7757725AAFCD6881D09044D695032A4911999FDF (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_m53E8E53D26BEE73E5541E62B7B4102BF1B0023F3_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC_m44D6EAD7F0CD0EDF1D8227BBA5A71B1E9E691CA8 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void Windows.Networking.Sockets.StreamSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamSocket__ctor_m0ADAF625EE434F52F6CD1F539F961AAB95876533 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.Void Windows.Networking.HostName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7 (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * __this, String_t* ___hostName0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction Windows.Networking.Sockets.StreamSocket::ConnectAsync(Windows.Networking.HostName,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_ConnectAsync_mD79B5CF30BDBA1A492F5818DF172075FEF4913EE (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * ___remoteHostName0, String_t* ___remoteServiceName1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Scripts.TCPClient/<ConnectUWP>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E_m74091B8355831BD9288DF56091DD07D036D03210 (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E **, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisRuntimeObject_mF3F724FDD4660E37EEA11B37B562AA2EB0FE6220_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Windows.Storage.Streams.IOutputStream Windows.Networking.Sockets.StreamSocket::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_OutputStream_mDE216F07C1125E7971BEB545FF36F0C52AF2AA44 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForWrite(Windows.Storage.Streams.IOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeStreamExtensions_AsStreamForWrite_mF1209418300EBDE680AC29AFF79464756D863333 (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m3D516CFFEDAC2849A8C3E997FD0233A61A482762 (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream Windows.Networking.Sockets.StreamSocket::get_InputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamSocket_get_InputStream_mE7A37722EC598466C097C7FCE06F1B9D2E27DAD4 (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * __this, const RuntimeMethod* method);
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4 (RuntimeObject* ___windowsRuntimeStream0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E (AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::.ctor()
inline void List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *, const RuntimeMethod*))List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3 (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetRoute>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0 (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m8C29AFD88FFAB48A99FF7282D5BBC3C945E02D49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___trimChars0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>::.ctor(!0,!1,!2)
inline void ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1 (ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___item10, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___item21, List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * ___item32, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *, const RuntimeMethod*))ValueTuple_3__ctor_m8868D9B867F41FEEDC7C736B39DAB0889188EC78_gshared)(__this, ___item10, ___item21, ___item32, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F (String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , const RuntimeMethod*))List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::Add(!0)
inline void List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84 (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_gshared)(__this, ___item0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mFA0D1D629238A218F73AB7D6B70F7EE4B1DC303F (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29F2BD2081981778A27B69F8183673928FD88754_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * __this, ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *, ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A , const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mB77116BCE998196139BEFEA2EC78DE9F9EA37B55_gshared)(__this, ___result0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetRouteList>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE_m8915CBFF67656205DDA9A9BD9027DBF275569DFA (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m343F3F299984673DBDF36E4359877989538AE23C (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455 (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<SendFile>d__14>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_mEB2673CE750E1CEF9B34860793DD41850950C3F9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamReader System.IO.File::OpenText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * File_OpenText_m725104502BBF4EB28613CC7473AF7DC6ACE2BA99 (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeU3Ed__29__ctor_mE539736C88F20B4A00D1BFB5D38DC3FC7606753A (U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeU3Ed__29_MoveNext_m13891F9BAA162D0803F0C5F354E827CBE0E0DA95 (U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B_mE823F91FCF267C314BCA7DB6D7128F7CE6EA1E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B * V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0078;
		}

IL_000e:
		{
			// if (!IsReady)
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3;
			L_3 = SpacePinBinder_get_IsReady_m962E5B41575CB3372C65343A752E32BACA3E527E(L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_0021:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_00ba;
		}

IL_0029:
		{
			// await publisher.PurgeArea(searchRadius);
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_publisher_7();
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_7 = __this->get_U3CU3E4__this_2();
			NullCheck(L_7);
			float L_8 = L_7->get_searchRadius_5();
			NullCheck(L_6);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9;
			L_9 = InterfaceFuncInvoker1< Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, float >::Invoke(8 /* System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.IPublisher::PurgeArea(System.Single) */, IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5_il2cpp_TypeInfo_var, L_6, L_8);
			NullCheck(L_9);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_10;
			L_10 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_0094;
			}
		}

IL_0053:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_13 = V_3;
			__this->set_U3CU3Eu__1_3(L_13);
			V_4 = __this;
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B_mE823F91FCF267C314BCA7DB6D7128F7CE6EA1E85((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_14, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B **)(&V_4), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B_mE823F91FCF267C314BCA7DB6D7128F7CE6EA1E85_RuntimeMethod_var);
			goto IL_00cf;
		}

IL_0078:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = __this->get_U3CU3Eu__1_3();
			V_3 = L_15;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_16 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0094:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// return true;
			V_1 = (bool)1;
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_00a0:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_18, L_19, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cf;
	} // end catch (depth: 1)

IL_00ba:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_00cf:
	{
		return;
	}
}
// System.Void Scripts.WorldLocking.SpacePinBinder/<Purge>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeU3Ed__29_SetStateMachine_m401E857C082B4BB9AA05470C805E741424F03B53 (U3CPurgeU3Ed__29_tF7F500DED6AC161EB37615A629579AC753EC5D6B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.WorldLocking.SpacePinBinder/<Search>d__28::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchU3Ed__28__ctor_m4FC41FB699691D9A520E05F4E8C328982857D1CF (U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.WorldLocking.SpacePinBinder/<Search>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchU3Ed__28_MoveNext_m2221BC56F2F903CA1F5626F8846C2B33583A50AD (U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC_TisU3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9_m8565661C3AFEF01E4A08B4BA949DFA0697A2032C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8CC7988E22B52640FE8CD4569D652525E0ED43A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1BC9198EEC3AF9FE05488FF46EF7F6D1915015C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m92593F06F58BEA446F017A54355E0D2B3C818CFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m313BFF3564683620D1996F58C19669688BA6EBF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalPeg_t60254AE29AA84A683956D1922AAFC0EA251594A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB1A6107A29186004544B0AEC1D9F2520D5422052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2185D270EA81D71E694C2B1446371DCF9BB7630A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m9C7F3FC8108E2E0A1C7D5A5FDCC44628B0CD687E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m561283196B35EB33BD2F2E60D41E354E8C48B43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m184B006114FEC8ED60FDD6454EF2FFC5295286D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B57016ABCCDD4420D0788C052A5F86985CC2EE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E29640013FD0CBA375A0641E73F4D6C3DCE01CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 * V_4 = NULL;
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_007b;
		}

IL_000e:
		{
			// if (!IsReady)
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_2 = __this->get_U3CU3E4__this_2();
			NullCheck(L_2);
			bool L_3;
			L_3 = SpacePinBinder_get_IsReady_m962E5B41575CB3372C65343A752E32BACA3E527E(L_2, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0029;
			}
		}

IL_0021:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_02dc;
		}

IL_0029:
		{
			// Dictionary<CloudAnchorId, LocalPegAndProperties> found = await publisher.Find(searchRadius);
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->get_publisher_7();
			SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_7 = __this->get_U3CU3E4__this_2();
			NullCheck(L_7);
			float L_8 = L_7->get_searchRadius_5();
			NullCheck(L_6);
			Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 * L_9;
			L_9 = InterfaceFuncInvoker1< Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35 *, float >::Invoke(7 /* System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Find(System.Single) */, IPublisher_tD2CBFC0A5F1AE574DFA43435F62FBDAEC0FD53C5_il2cpp_TypeInfo_var, L_6, L_8);
			NullCheck(L_9);
			TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  L_10;
			L_10 = Task_1_GetAwaiter_m184B006114FEC8ED60FDD6454EF2FFC5295286D4(L_9, /*hidden argument*/Task_1_GetAwaiter_m184B006114FEC8ED60FDD6454EF2FFC5295286D4_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_m561283196B35EB33BD2F2E60D41E354E8C48B43C((TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m561283196B35EB33BD2F2E60D41E354E8C48B43C_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0097;
			}
		}

IL_0053:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  L_13 = V_3;
			__this->set_U3CU3Eu__1_15(L_13);
			V_4 = __this;
			AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC_TisU3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9_m8565661C3AFEF01E4A08B4BA949DFA0697A2032C((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_14, (TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *)(&V_3), (U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 **)(&V_4), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC_TisU3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9_m8565661C3AFEF01E4A08B4BA949DFA0697A2032C_RuntimeMethod_var);
			goto IL_02ff;
		}

IL_007b:
		{
			TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC  L_15 = __this->get_U3CU3Eu__1_15();
			V_3 = L_15;
			TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC * L_16 = __this->get_address_of_U3CU3Eu__1_15();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_0097:
		{
			Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * L_18;
			L_18 = TaskAwaiter_1_GetResult_m9C7F3FC8108E2E0A1C7D5A5FDCC44628B0CD687E((TaskAwaiter_1_tA289363625951BF65F944206B778C825095944FC *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m9C7F3FC8108E2E0A1C7D5A5FDCC44628B0CD687E_RuntimeMethod_var);
			__this->set_U3CU3Es__4_6(L_18);
			Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * L_19 = __this->get_U3CU3Es__4_6();
			__this->set_U3CfoundU3E5__1_3(L_19);
			__this->set_U3CU3Es__4_6((Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B *)NULL);
			// var wltMgr = WorldLockingManager.GetInstance();
			IL2CPP_RUNTIME_CLASS_INIT(WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31_il2cpp_TypeInfo_var);
			WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_20;
			L_20 = WorldLockingManager_GetInstance_m1A558A9E776F5A09360EE417191DF29163CE4B05(/*hidden argument*/NULL);
			__this->set_U3CwltMgrU3E5__2_4(L_20);
			// bool foundAny = false;
			__this->set_U3CfoundAnyU3E5__3_5((bool)0);
			// foreach (var keyval in found)
			Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * L_21 = __this->get_U3CfoundU3E5__1_3();
			NullCheck(L_21);
			Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03  L_22;
			L_22 = Dictionary_2_GetEnumerator_m8CC7988E22B52640FE8CD4569D652525E0ED43A3(L_21, /*hidden argument*/Dictionary_2_GetEnumerator_m8CC7988E22B52640FE8CD4569D652525E0ED43A3_RuntimeMethod_var);
			__this->set_U3CU3Es__5_7(L_22);
		}

IL_00db:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0276;
			}

IL_00e0:
			{
				// foreach (var keyval in found)
				Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * L_23 = __this->get_address_of_U3CU3Es__5_7();
				KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8  L_24;
				L_24 = Enumerator_get_Current_m313BFF3564683620D1996F58C19669688BA6EBF0_inline((Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *)L_23, /*hidden argument*/Enumerator_get_Current_m313BFF3564683620D1996F58C19669688BA6EBF0_RuntimeMethod_var);
				__this->set_U3CkeyvalU3E5__6_8(L_24);
				// string spacePinId = keyval.Value.properties[SpacePinIdKey];
				KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * L_25 = __this->get_address_of_U3CkeyvalU3E5__6_8();
				LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * L_26;
				L_26 = KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_inline((KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 *)L_25, /*hidden argument*/KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_RuntimeMethod_var);
				NullCheck(L_26);
				RuntimeObject* L_27 = L_26->get_properties_1();
				IL2CPP_RUNTIME_CLASS_INIT(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_il2cpp_TypeInfo_var);
				String_t* L_28 = ((SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_StaticFields*)il2cpp_codegen_static_fields_for(SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882_il2cpp_TypeInfo_var))->get_SpacePinIdKey_10();
				NullCheck(L_27);
				String_t* L_29;
				L_29 = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,System.String>::get_Item(!0) */, IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560_il2cpp_TypeInfo_var, L_27, L_28);
				__this->set_U3CspacePinIdU3E5__7_9(L_29);
				// string cloudAnchorId = keyval.Key;
				KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * L_30 = __this->get_address_of_U3CkeyvalU3E5__6_8();
				String_t* L_31;
				L_31 = KeyValuePair_2_get_Key_mB1A6107A29186004544B0AEC1D9F2520D5422052_inline((KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 *)L_30, /*hidden argument*/KeyValuePair_2_get_Key_mB1A6107A29186004544B0AEC1D9F2520D5422052_RuntimeMethod_var);
				__this->set_U3CcloudAnchorIdU3E5__8_10(L_31);
				// var pegAndProps = keyval.Value;
				KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * L_32 = __this->get_address_of_U3CkeyvalU3E5__6_8();
				LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * L_33;
				L_33 = KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_inline((KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 *)L_32, /*hidden argument*/KeyValuePair_2_get_Value_m8E1F884BF465F229F7F388CF9BF88A02FFD30D4C_RuntimeMethod_var);
				__this->set_U3CpegAndPropsU3E5__9_11(L_33);
				// int idx = FindSpacePinById(spacePinId);
				SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_34 = __this->get_U3CU3E4__this_2();
				String_t* L_35 = __this->get_U3CspacePinIdU3E5__7_9();
				NullCheck(L_34);
				int32_t L_36;
				L_36 = SpacePinBinder_FindSpacePinById_m5D22EC00795ABCDADB69EF167F4CAC9EFF93B9A5(L_34, L_35, /*hidden argument*/NULL);
				__this->set_U3CidxU3E5__10_12(L_36);
				// if (idx >= 0)
				int32_t L_37 = __this->get_U3CidxU3E5__10_12();
				V_5 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_38 = V_5;
				if (!L_38)
				{
					goto IL_022c;
				}
			}

IL_0160:
			{
				// CreateBinding(spacePinId, cloudAnchorId);
				SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_39 = __this->get_U3CU3E4__this_2();
				String_t* L_40 = __this->get_U3CspacePinIdU3E5__7_9();
				String_t* L_41 = __this->get_U3CcloudAnchorIdU3E5__8_10();
				NullCheck(L_39);
				bool L_42;
				L_42 = SpacePinBinder_CreateBinding_mFBCA72729B75301EF54B4BB36BD5B342B30AA856(L_39, L_40, L_41, /*hidden argument*/NULL);
				// foundAny = true;
				__this->set_U3CfoundAnyU3E5__3_5((bool)1);
				// SpacePinASA spacePin = spacePins[idx];
				SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_43 = __this->get_U3CU3E4__this_2();
				NullCheck(L_43);
				List_1_t9803CBB1641857D425CB3E3327659988FAF371A5 * L_44 = L_43->get_spacePins_4();
				int32_t L_45 = __this->get_U3CidxU3E5__10_12();
				NullCheck(L_44);
				SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * L_46;
				L_46 = List_1_get_Item_m2185D270EA81D71E694C2B1446371DCF9BB7630A_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_m2185D270EA81D71E694C2B1446371DCF9BB7630A_RuntimeMethod_var);
				__this->set_U3CspacePinU3E5__11_13(L_46);
				// Pose lockedPose = wltMgr.LockedFromFrozen.Multiply(pegAndProps.localPeg.GlobalPose);
				WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 * L_47 = __this->get_U3CwltMgrU3E5__2_4();
				NullCheck(L_47);
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_48;
				L_48 = WorldLockingManager_get_LockedFromFrozen_m5F77C198C95A47F5E4FE9563C64688B692C14418(L_47, /*hidden argument*/NULL);
				LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * L_49 = __this->get_U3CpegAndPropsU3E5__9_11();
				NullCheck(L_49);
				RuntimeObject* L_50 = L_49->get_localPeg_0();
				NullCheck(L_50);
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_51;
				L_51 = InterfaceFuncInvoker0< Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  >::Invoke(2 /* UnityEngine.Pose Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg::get_GlobalPose() */, ILocalPeg_t60254AE29AA84A683956D1922AAFC0EA251594A6_il2cpp_TypeInfo_var, L_50);
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_52;
				L_52 = PoseExtensions_Multiply_m1022B323DA0161696097ABC4C0A81CFEF2675B71(L_48, L_51, /*hidden argument*/NULL);
				__this->set_U3ClockedPoseU3E5__12_14(L_52);
				// SimpleConsole.AddLine(ConsoleLow, $"Srch: {lockedPose.ToString("F3")}");
				SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_53 = __this->get_U3CU3E4__this_2();
				NullCheck(L_53);
				int32_t L_54 = L_53->get_ConsoleLow_9();
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_55 = __this->get_address_of_U3ClockedPoseU3E5__12_14();
				String_t* L_56;
				L_56 = Pose_ToString_mF545EBBC9D7E041E8FC673068C8DB7E29B696C82((Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A *)L_55, _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9, /*hidden argument*/NULL);
				String_t* L_57;
				L_57 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0B57016ABCCDD4420D0788C052A5F86985CC2EE1, L_56, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var);
				int32_t L_58;
				L_58 = SimpleConsole_AddLine_m32F068B4683B87C67170769518C6971992C8A0D4(L_54, L_57, /*hidden argument*/NULL);
				// spacePin.SetLockedPose(lockedPose);
				SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * L_59 = __this->get_U3CspacePinU3E5__11_13();
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_60 = __this->get_U3ClockedPoseU3E5__12_14();
				NullCheck(L_59);
				VirtActionInvoker1< Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  >::Invoke(7 /* System.Void Microsoft.MixedReality.WorldLocking.Core.SpacePin::SetLockedPose(UnityEngine.Pose) */, L_59, L_60);
				// spacePin.SetLocalPeg(pegAndProps.localPeg);
				SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 * L_61 = __this->get_U3CspacePinU3E5__11_13();
				LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * L_62 = __this->get_U3CpegAndPropsU3E5__9_11();
				NullCheck(L_62);
				RuntimeObject* L_63 = L_62->get_localPeg_0();
				NullCheck(L_61);
				SpacePinASA_SetLocalPeg_m29C3B631B667836F86B725BB7A7A6127E3F22C7E(L_61, L_63, /*hidden argument*/NULL);
				__this->set_U3CspacePinU3E5__11_13((SpacePinASA_t1F69AC18E46538E9A2CB745582B4C196170DA102 *)NULL);
				Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * L_64 = __this->get_address_of_U3ClockedPoseU3E5__12_14();
				il2cpp_codegen_initobj(L_64, sizeof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A ));
				goto IL_0254;
			}

IL_022c:
			{
				// SimpleConsole.AddLine(ConsoleHigh, $"Found anchor for unknown SpacePin={spacePinId}.");
				SpacePinBinder_tBA19993CABB3CC4125B2B0CC843C012CC7CD4882 * L_65 = __this->get_U3CU3E4__this_2();
				NullCheck(L_65);
				int32_t L_66 = L_65->get_ConsoleHigh_8();
				String_t* L_67 = __this->get_U3CspacePinIdU3E5__7_9();
				String_t* L_68;
				L_68 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral8E29640013FD0CBA375A0641E73F4D6C3DCE01CF, L_67, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var);
				int32_t L_69;
				L_69 = SimpleConsole_AddLine_m32F068B4683B87C67170769518C6971992C8A0D4(L_66, L_68, /*hidden argument*/NULL);
			}

IL_0254:
			{
				__this->set_U3CspacePinIdU3E5__7_9((String_t*)NULL);
				__this->set_U3CcloudAnchorIdU3E5__8_10((String_t*)NULL);
				__this->set_U3CpegAndPropsU3E5__9_11((LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 *)NULL);
				KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 * L_70 = __this->get_address_of_U3CkeyvalU3E5__6_8();
				il2cpp_codegen_initobj(L_70, sizeof(KeyValuePair_2_tE4FC7740AB0D9486C6A42F2C59A5EEBB11BF4BC8 ));
			}

IL_0276:
			{
				// foreach (var keyval in found)
				Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * L_71 = __this->get_address_of_U3CU3Es__5_7();
				bool L_72;
				L_72 = Enumerator_MoveNext_m92593F06F58BEA446F017A54355E0D2B3C818CFE((Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *)L_71, /*hidden argument*/Enumerator_MoveNext_m92593F06F58BEA446F017A54355E0D2B3C818CFE_RuntimeMethod_var);
				if (L_72)
				{
					goto IL_00e0;
				}
			}

IL_0286:
			{
				IL2CPP_LEAVE(0x29F, FINALLY_0288);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0288;
		}

FINALLY_0288:
		{ // begin finally (depth: 2)
			{
				int32_t L_73 = V_0;
				if ((((int32_t)L_73) >= ((int32_t)0)))
				{
					goto IL_029e;
				}
			}

IL_028c:
			{
				Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * L_74 = __this->get_address_of_U3CU3Es__5_7();
				Enumerator_Dispose_m1BC9198EEC3AF9FE05488FF46EF7F6D1915015C8((Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 *)L_74, /*hidden argument*/Enumerator_Dispose_m1BC9198EEC3AF9FE05488FF46EF7F6D1915015C8_RuntimeMethod_var);
			}

IL_029e:
			{
				IL2CPP_END_FINALLY(648)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(648)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x29F, IL_029f)
		}

IL_029f:
		{
			Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 * L_75 = __this->get_address_of_U3CU3Es__5_7();
			il2cpp_codegen_initobj(L_75, sizeof(Enumerator_t839844E84AC7D00757302351A4FA3CA2C4E83C03 ));
			// return foundAny;
			bool L_76 = __this->get_U3CfoundAnyU3E5__3_5();
			V_1 = L_76;
			goto IL_02dc;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02b4;
		}
		throw e;
	}

CATCH_02b4:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CfoundU3E5__1_3((Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B *)NULL);
		__this->set_U3CwltMgrU3E5__2_4((WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_77 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_78 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_77, L_78, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mE785C63DF4EC8A98FA17358A140BE482EED60AFC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02ff;
	} // end catch (depth: 1)

IL_02dc:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CfoundU3E5__1_3((Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B *)NULL);
		__this->set_U3CwltMgrU3E5__2_4((WorldLockingManager_t4876790E86DFB62741A36D8BAC53135042E97C31 *)NULL);
		AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 * L_79 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_80 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B((AsyncTaskMethodBuilder_1_tABE1DEF12F121D6FC8ABF04869ED964FF83EA9B5 *)L_79, L_80, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mB50942CCDE672DB7194F876364EE271CE9FEF27B_RuntimeMethod_var);
	}

IL_02ff:
	{
		return;
	}
}
// System.Void Scripts.WorldLocking.SpacePinBinder/<Search>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSearchU3Ed__28_SetStateMachine_mE999B132B2F535955183AE3C44B1B9E09CED0FC0 (U3CSearchU3Ed__28_tAD4D84C3A10C4BA32697282AB68C5ACAA96799E9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.WorldLocking.SpacePinBinder/SpacePinPegAndProps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpacePinPegAndProps__ctor_mFE78F7A6DC9EAE0D397C8B9935E42C5D36848F00 (SpacePinPegAndProps_tD4ABF505CFFD9881C4B9964BE35FFFA49B484B1F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ed__46__ctor_mD3BE6F2F4228DC7D626F57A8FF2FFB7300EC5B0D (U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ed__46_MoveNext_m589CD9F7D8189B66AF7724A62D5613F4C46709FE (U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40_mEDAF2072458BB907CECC51FF4EB925E25F42D190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_2;
			__this->set_U3CU3Eu__1_4(L_6);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40_mEDAF2072458BB907CECC51FF4EB925E25F42D190((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40_mEDAF2072458BB907CECC51FF4EB925E25F42D190_RuntimeMethod_var);
			goto IL_0090;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_2 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateU3Ed__46_MoveNext_m589CD9F7D8189B66AF7724A62D5613F4C46709FE_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_4;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Create>d__46::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ed__46_SetStateMachine_m60DA06C4D4466EAEB54DED22825DCED10D01E5A6 (U3CCreateU3Ed__46_t933AA15F3FBB3BCCFE16D0F3406B90C27A35EC40 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLocalPegU3Ed__44__ctor_m9C9F0C1FA53A758BF2CD9E03EBE9AEA040BFA03C (U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLocalPegU3Ed__44_MoveNext_m5186EF01E973D45D0EF58C05C5EA63D6AE38127F (U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B_mE538C5C917A5A1AFE552635307CF85BFBB59ACD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_2;
			__this->set_U3CU3Eu__1_5(L_6);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B_mE538C5C917A5A1AFE552635307CF85BFBB59ACD8((AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B_mE538C5C917A5A1AFE552635307CF85BFBB59ACD8_RuntimeMethod_var);
			goto IL_0090;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_5();
			V_2 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCreateLocalPegU3Ed__44_MoveNext_m5186EF01E973D45D0EF58C05C5EA63D6AE38127F_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m0D3EF85449B8C3CF19ECB295E7327E12E6525AE8((AsyncTaskMethodBuilder_1_t9F3D9639A67A89825F7D3B0956F275697519E251 *)L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m0D3EF85449B8C3CF19ECB295E7327E12E6525AE8_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<CreateLocalPeg>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateLocalPegU3Ed__44_SetStateMachine_mB95935E51F76CAAF3F11D259A192A89679634800 (U3CCreateLocalPegU3Ed__44_t5FA44E623F5B537844370488BFB658C8B69FE26B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__50__ctor_mFD76B53F8D6B3F7F455FC0E8BAF78AE553153DFD (U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__50_MoveNext_m552FB71E727243CABFD636DBB050052A9E0C6E16 (U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9_m673AC8F47D10F426712F39705681287F1A398E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_1;
			__this->set_U3CU3Eu__1_4(L_6);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9_m673AC8F47D10F426712F39705681287F1A398E3E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9_m673AC8F47D10F426712F39705681287F1A398E3E_RuntimeMethod_var);
			goto IL_008e;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_1 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeleteU3Ed__50_MoveNext_m552FB71E727243CABFD636DBB050052A9E0C6E16_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Delete>d__50::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeleteU3Ed__50_SetStateMachine_m8817793004773E99F87B4308D30BA4D47E4BBCDD (U3CDeleteU3Ed__50_tF6C2B43C8A42D1B33D561949A11ED8F2840A19B9 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindU3Ed__51__ctor_m5134C37C920204AF8D9AD54A8C3FF1ABD4E3A2E2 (U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindU3Ed__51_MoveNext_m49D3B9DE85E47D381F678AFE99FC5DBA4CFAE7B7 (U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E_m5053443778415DB5298805378D2BE2F845C3624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_2;
			__this->set_U3CU3Eu__1_4(L_6);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E_m5053443778415DB5298805378D2BE2F845C3624D((AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E_m5053443778415DB5298805378D2BE2F845C3624D_RuntimeMethod_var);
			goto IL_0090;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_2 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFindU3Ed__51_MoveNext_m49D3B9DE85E47D381F678AFE99FC5DBA4CFAE7B7_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798((AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *)L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Find>d__51::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFindU3Ed__51_SetStateMachine_mA59C42B7E27D26CDC82955959DA345D1B65C3D00 (U3CFindU3Ed__51_t0932A5BF1871C9E361F22B4CF3AA3184B83D2C7E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModifyU3Ed__49__ctor_m6EFFE10B209C69E80EF31AA352D11EAA5B741DE0 (U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModifyU3Ed__49_MoveNext_mBB45442CC9C558BA69A39F3764B9F072AC753508 (U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_m86A5E13CB04A1E3CCA0E6B5E3FBE91219D493FCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_mD9B452CC532F301D93669A9AB7511669ADB9CDAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 * V_3 = NULL;
	TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0014;
			}
		}

IL_0010:
		{
			goto IL_0019;
		}

IL_0012:
		{
			goto IL_0061;
		}

IL_0014:
		{
			goto IL_00cb;
		}

IL_0019:
		{
			// await Delete(cloudAnchorId);
			SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * L_3 = __this->get_U3CU3E4__this_4();
			String_t* L_4 = __this->get_cloudAnchorId_2();
			NullCheck(L_3);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
			L_5 = SpacePinPublisherASA_Delete_mE7F18E2EC431D85FC656EA8D762DFC89601F0D36(L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6;
			L_6 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_007d;
			}
		}

IL_003a:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = V_2;
			__this->set_U3CU3Eu__1_6(L_9);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_mD9B452CC532F301D93669A9AB7511669ADB9CDAF((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_10, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_mD9B452CC532F301D93669A9AB7511669ADB9CDAF_RuntimeMethod_var);
			goto IL_012d;
		}

IL_0061:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_11 = __this->get_U3CU3Eu__1_6();
			V_2 = L_11;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_007d:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// return await Create(peg);
			SpacePinPublisherASA_t1BE48EFAE4FF4A1ED9927A0963B49D1DDB75257B * L_14 = __this->get_U3CU3E4__this_4();
			LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * L_15 = __this->get_peg_3();
			NullCheck(L_14);
			Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_16;
			L_16 = SpacePinPublisherASA_Create_m7874F2B7D2BC7BC07221FF30256EF2633BE58BAF(L_14, L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_17;
			L_17 = Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1(L_16, /*hidden argument*/Task_1_GetAwaiter_m6AF42B94A866888CE1B3614A8C4C2FE98229FFB1_RuntimeMethod_var);
			V_4 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m48984CB015DA6618F7E0A025A20AF599A24D1FEC_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00e8;
			}
		}

IL_00a6:
		{
			int32_t L_19 = 1;
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_20 = V_4;
			__this->set_U3CU3Eu__2_7(L_20);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_21 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_m86A5E13CB04A1E3CCA0E6B5E3FBE91219D493FCE((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_21, (TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), (U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D_TisU3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6_m86A5E13CB04A1E3CCA0E6B5E3FBE91219D493FCE_RuntimeMethod_var);
			goto IL_012d;
		}

IL_00cb:
		{
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D  L_22 = __this->get_U3CU3Eu__2_7();
			V_4 = L_22;
			TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D * L_23 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D ));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00e8:
		{
			String_t* L_25;
			L_25 = TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895((TaskAwaiter_1_t454F5B9CE4CDFF1EE8835FB7E6FCB8441363315D *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m93C9B3C4DADA3A125CFAB428302EF568B3E2D895_RuntimeMethod_var);
			__this->set_U3CU3Es__1_5(L_25);
			String_t* L_26 = __this->get_U3CU3Es__1_5();
			V_1 = L_26;
			goto IL_0118;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00fe;
		}
		throw e;
	}

CATCH_00fe:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_27, L_28, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012d;
	} // end catch (depth: 1)

IL_0118:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_30 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_29, L_30, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_012d:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Modify>d__49::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CModifyU3Ed__49_SetStateMachine_mE6599DB7FB38F18B69B23B3FFC034F396FEB089F (U3CModifyU3Ed__49_t78EB83B7A819AEFEA11A3A58D27235E60CDD3EE6 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeAreaU3Ed__52__ctor_mF03FB181060AA3E6C8F8296583B9B4ED4ED81FEC (U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeAreaU3Ed__52_MoveNext_m1CACD51CD566F46D350E96EF1BFB59E604E9D685 (U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614_m9DDE9E249E70DD15C5E55612F0C9B67E98E829AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_1;
			__this->set_U3CU3Eu__1_4(L_6);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614_m9DDE9E249E70DD15C5E55612F0C9B67E98E829AF((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614_m9DDE9E249E70DD15C5E55612F0C9B67E98E829AF_RuntimeMethod_var);
			goto IL_008e;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_1 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPurgeAreaU3Ed__52_MoveNext_m1CACD51CD566F46D350E96EF1BFB59E604E9D685_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_3;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_12, L_13, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<PurgeArea>d__52::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPurgeAreaU3Ed__52_SetStateMachine_m5E0752286AED254E5976ADB4A769F7E266B5EA1D (U3CPurgeAreaU3Ed__52_t70EB0AA62648BD100753E6B86333AEF547E9B614 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__47__ctor_m328F79E8E1169B2488A206B58DEC14F72C198734 (U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__47_MoveNext_m875A86E6077C6C4D5E72C0E3FC47EDB7CF6F2A5F (U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553_m771B798748209A4FF9A9F4388A34117B1DCD5CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_2;
			__this->set_U3CU3Eu__1_4(L_6);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553_m771B798748209A4FF9A9F4388A34117B1DCD5CA7((AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553_m771B798748209A4FF9A9F4388A34117B1DCD5CA7_RuntimeMethod_var);
			goto IL_0090;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_2 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadU3Ed__47_MoveNext_m875A86E6077C6C4D5E72C0E3FC47EDB7CF6F2A5F_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m2982452DC774B47155897074BEB1D2B76A8B5557((AsyncTaskMethodBuilder_1_t107E44118EB1558F221C9EFA017762BFF68F0100 *)L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m2982452DC774B47155897074BEB1D2B76A8B5557_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__47::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__47_SetStateMachine_m033BB39ACA999FA327368D284E1C3D9044131BEC (U3CReadU3Ed__47_t931C4A97E58B145AD8F81A14ED38A1791AA4C553 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__48__ctor_m8BD67B34D1C1EC48FB75C5ADF2F3751822372BB5 (U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__48_MoveNext_m4DDFA3346C2FE5DDD88032500C42A587F8A6F358 (U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF_m7757725AAFCD6881D09044D695032A4911999FDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B * V_1 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF * V_3 = NULL;
	Exception_t * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0047;
		}

IL_000e:
		{
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2;
			L_2 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_2);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_3;
			L_3 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			bool L_4;
			L_4 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0063;
			}
		}

IL_0023:
		{
			int32_t L_5 = 0;
			V_0 = L_5;
			__this->set_U3CU3E1__state_0(L_5);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_6 = V_2;
			__this->set_U3CU3Eu__1_4(L_6);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * L_7 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF_m7757725AAFCD6881D09044D695032A4911999FDF((AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *)L_7, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), (U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF_m7757725AAFCD6881D09044D695032A4911999FDF_RuntimeMethod_var);
			goto IL_0090;
		}

IL_0047:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_8 = __this->get_U3CU3Eu__1_4();
			V_2 = L_8;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_9 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_9, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_10 = (-1);
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
		}

IL_0063:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_2), /*hidden argument*/NULL);
			// throw new NotSupportedException("Trying to use PublisherASA without Azure Spatial Anchors installed.");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_11 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7373914A776C1F0EE6A83FA6DE5F47803C10EB34)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadU3Ed__48_MoveNext_m4DDFA3346C2FE5DDD88032500C42A587F8A6F358_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_13 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798((AsyncTaskMethodBuilder_1_t75A0FB0BC93C2388505A99AACEB7168BDEF9FBB0 *)L_12, L_13, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m50E647821D11F3C6DA9A64AFE55CA2AEED876798_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	} // end catch (depth: 1)

IL_0090:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Read>d__48::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadU3Ed__48_SetStateMachine_mBF49F9F0849A3E2AF011B03FEBD06183B1BD0178 (U3CReadU3Ed__48_t5CAC22C6640BC0F67B38A65492CF9F0C919693FF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__41__ctor_m233F13F3746D7821FDC7EE89092CF92A88305D03 (U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__41_MoveNext_m33C9BBA13DB3B8AB7580B04369A8C37FCBA55721 (U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC_m44D6EAD7F0CD0EDF1D8227BBA5A71B1E9E691CA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA457AA136782338479AB2154F89B0BBC35E5BC15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_0054;
		}

IL_000e:
		{
			// SimpleConsole.AddLine(11, $"Trying to start ASA Publisher with no Azure Spatial Anchors installed!");
			IL2CPP_RUNTIME_CLASS_INIT(SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_il2cpp_TypeInfo_var);
			int32_t L_2;
			L_2 = SimpleConsole_AddLine_m32F068B4683B87C67170769518C6971992C8A0D4(((int32_t)11), _stringLiteralA457AA136782338479AB2154F89B0BBC35E5BC15, /*hidden argument*/NULL);
			// await Task.CompletedTask;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
			L_3 = Task_get_CompletedTask_m50A6B866A113BC922674893991DC4E80CB629C1D(/*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_4;
			L_4 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0070;
			}
		}

IL_0030:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_7 = V_1;
			__this->set_U3CU3Eu__1_3(L_7);
			V_2 = __this;
			AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC_m44D6EAD7F0CD0EDF1D8227BBA5A71B1E9E691CA8((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_8, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC_m44D6EAD7F0CD0EDF1D8227BBA5A71B1E9E691CA8_RuntimeMethod_var);
			goto IL_009b;
		}

IL_0054:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_9 = __this->get_U3CU3Eu__1_3();
			V_1 = L_9;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_10 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0070:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
			// throw new NotSupportedException($"Trying to start ASA Publisher with no Azure Spatial Anchors installed!");
			NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_12 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
			NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA457AA136782338479AB2154F89B0BBC35E5BC15)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetupU3Ed__41_MoveNext_m33C9BBA13DB3B8AB7580B04369A8C37FCBA55721_RuntimeMethod_var)));
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009b;
	} // end catch (depth: 1)

IL_009b:
	{
		return;
	}
}
// System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinPublisherASA/<Setup>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetupU3Ed__41_SetStateMachine_mB66A450B7E6EE6C3367B6A07B6AE3055C5B9B80F (U3CSetupU3Ed__41_tA669CFA6C5D5EA36CD521C51443312574BB7C2BC * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.TCPClient/<ConnectUWP>d__9::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectUWPU3Ed__9__ctor_m7A5520BD4C59861DDEC244F205006ADE3F04C7B4 (U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<ConnectUWP>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectUWPU3Ed__9_MoveNext_mF2CFB38BA71226106A03A69E055DB32E18634931 (U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E_m74091B8355831BD9288DF56091DD07D036D03210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFAF27D11540C5EE9DEEC921CFC0565BFBA84AC5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_000e;
		}

IL_000c:
		{
			goto IL_000f;
		}

IL_000e:
		{
		}

IL_000f:
		{
		}

IL_0010:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015;
				}
			}

IL_0013:
			{
				goto IL_0017;
			}

IL_0015:
			{
				goto IL_008b;
			}

IL_0017:
			{
				// socket = new Windows.Networking.Sockets.StreamSocket();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_4();
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_4 = (StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 *)il2cpp_codegen_object_new(StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921_il2cpp_TypeInfo_var);
				StreamSocket__ctor_m0ADAF625EE434F52F6CD1F539F961AAB95876533(L_4, /*hidden argument*/NULL);
				NullCheck(L_3);
				L_3->set_socket_8(L_4);
				// Windows.Networking.HostName serverHost = new Windows.Networking.HostName(host);
				String_t* L_5 = __this->get_host_2();
				HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_6 = (HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 *)il2cpp_codegen_object_new(HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5_il2cpp_TypeInfo_var);
				HostName__ctor_mB6DD447379F5F9BAC0C2B672318FEF41463856A7(L_6, L_5, /*hidden argument*/NULL);
				__this->set_U3CserverHostU3E5__1_5(L_6);
				// await socket.ConnectAsync(serverHost, port);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_7 = __this->get_U3CU3E4__this_4();
				NullCheck(L_7);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_8 = L_7->get_socket_8();
				HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 * L_9 = __this->get_U3CserverHostU3E5__1_5();
				String_t* L_10 = __this->get_port_3();
				NullCheck(L_8);
				RuntimeObject* L_11;
				L_11 = StreamSocket_ConnectAsync_mD79B5CF30BDBA1A492F5818DF172075FEF4913EE(L_8, L_9, L_10, /*hidden argument*/NULL);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_12;
				L_12 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_11, /*hidden argument*/NULL);
				V_1 = L_12;
				bool L_13;
				L_13 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_00a7;
				}
			}

IL_0064:
			{
				int32_t L_14 = 0;
				V_0 = L_14;
				__this->set_U3CU3E1__state_0(L_14);
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_15 = V_1;
				__this->set_U3CU3Eu__1_9(L_15);
				V_2 = __this;
				AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E_m74091B8355831BD9288DF56091DD07D036D03210((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_16, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), (U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E **)(&V_2), /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E_m74091B8355831BD9288DF56091DD07D036D03210_RuntimeMethod_var);
				goto IL_0191;
			}

IL_008b:
			{
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_17 = __this->get_U3CU3Eu__1_9();
				V_1 = L_17;
				TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_18 = __this->get_address_of_U3CU3Eu__1_9();
				il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
				int32_t L_19 = (-1);
				V_0 = L_19;
				__this->set_U3CU3E1__state_0(L_19);
			}

IL_00a7:
			{
				TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_1), /*hidden argument*/NULL);
				// Stream streamOut = socket.OutputStream.AsStreamForWrite();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_20 = __this->get_U3CU3E4__this_4();
				NullCheck(L_20);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_21 = L_20->get_socket_8();
				NullCheck(L_21);
				RuntimeObject* L_22;
				L_22 = StreamSocket_get_OutputStream_mDE216F07C1125E7971BEB545FF36F0C52AF2AA44(L_21, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(WindowsRuntimeStreamExtensions_t7870F82AE56F6C17613567F9E49FB7725163C660_il2cpp_TypeInfo_var);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_23;
				L_23 = WindowsRuntimeStreamExtensions_AsStreamForWrite_mF1209418300EBDE680AC29AFF79464756D863333(L_22, /*hidden argument*/NULL);
				__this->set_U3CstreamOutU3E5__2_6(L_23);
				// writer = new StreamWriter(streamOut) { AutoFlush = true };
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_24 = __this->get_U3CU3E4__this_4();
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_25 = __this->get_U3CstreamOutU3E5__2_6();
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_26 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
				StreamWriter__ctor_m3D516CFFEDAC2849A8C3E997FD0233A61A482762(L_26, L_25, /*hidden argument*/NULL);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_27 = L_26;
				NullCheck(L_27);
				VirtActionInvoker1< bool >::Invoke(23 /* System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean) */, L_27, (bool)1);
				NullCheck(L_24);
				L_24->set_writer_9(L_27);
				// Stream streamIn = socket.InputStream.AsStreamForRead();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_28 = __this->get_U3CU3E4__this_4();
				NullCheck(L_28);
				StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * L_29 = L_28->get_socket_8();
				NullCheck(L_29);
				RuntimeObject* L_30;
				L_30 = StreamSocket_get_InputStream_mE7A37722EC598466C097C7FCE06F1B9D2E27DAD4(L_29, /*hidden argument*/NULL);
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_31;
				L_31 = WindowsRuntimeStreamExtensions_AsStreamForRead_mBA8F061F0579EB69C41FB9499C4F4D2FD6C357E4(L_30, /*hidden argument*/NULL);
				__this->set_U3CstreamInU3E5__3_7(L_31);
				// reader = new StreamReader(streamIn);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_32 = __this->get_U3CU3E4__this_4();
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_33 = __this->get_U3CstreamInU3E5__3_7();
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_34 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
				StreamReader__ctor_m0F256281F982E077C73A4C297F1301026A3C2905(L_34, L_33, /*hidden argument*/NULL);
				NullCheck(L_32);
				L_32->set_reader_10(L_34);
				// successStatus = "Connected!";
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_35 = __this->get_U3CU3E4__this_4();
				NullCheck(L_35);
				L_35->set_successStatus_13(_stringLiteralCFAF27D11540C5EE9DEEC921CFC0565BFBA84AC5);
				__this->set_U3CserverHostU3E5__1_5((HostName_t4E7A4AAC43B5EBAD242A6915BC358A45486DC0D5 *)NULL);
				__this->set_U3CstreamOutU3E5__2_6((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
				__this->set_U3CstreamInU3E5__3_7((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)NULL);
				goto IL_0163;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0141;
			}
			throw e;
		}

CATCH_0141:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_36 = V_3;
			__this->set_U3CeU3E5__4_8(L_36);
			// errorStatus = e.ToString();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_37 = __this->get_U3CU3E4__this_4();
			Exception_t * L_38 = __this->get_U3CeU3E5__4_8();
			NullCheck(L_38);
			String_t* L_39;
			L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
			NullCheck(L_37);
			L_37->set_errorStatus_12(L_39);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0163;
		} // end catch (depth: 2)

IL_0163:
		{
			goto IL_017d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0165;
		}
		throw e;
	}

CATCH_0165:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_41 = V_3;
		AsyncVoidMethodBuilder_SetException_m16372173CEA3031B4CB9B8D15DA97C457F835155((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_40, L_41, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0191;
	} // end catch (depth: 1)

IL_017d:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m901385B56EBE93E472A77EA48F61E4F498F3E00E((AsyncVoidMethodBuilder_tA31C888168B27AABF7B0D9E7DF720547D4892DE6 *)L_42, /*hidden argument*/NULL);
	}

IL_0191:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<ConnectUWP>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CConnectUWPU3Ed__9_SetStateMachine_m97A8789876C54870DCEDF7BF16D130746391F9E6 (U3CConnectUWPU3Ed__9_tDFB28EB65F8D9F13D0804A04503B069F47F3365E * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.TCPClient/<GetRoute>d__17::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteU3Ed__17__ctor_mEDE24DA7FF72BCA18D3DE809EBF3C0FE701DC25A (U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<GetRoute>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteU3Ed__17_MoveNext_m5852924D0F6B7D81740560A4F4E4476B6CD3D558 (U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 * V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B13_0 = 0;
	int32_t G_B22_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000a:
		{
			goto IL_000c;
		}

IL_000c:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017;
			}
		}

IL_0010:
		{
			goto IL_001c;
		}

IL_0012:
		{
			goto IL_00c2;
		}

IL_0017:
		{
			goto IL_01f9;
		}

IL_001c:
		{
			// List<string> holds = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_3, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			__this->set_U3CholdsU3E5__1_4(L_3);
			// List<Vector3> positions = new List<Vector3>();
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)il2cpp_codegen_object_new(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var);
			List_1__ctor_mF8F23D572031748AD428623AE16803455997E297(L_4, /*hidden argument*/List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var);
			__this->set_U3CpositionsU3E5__2_5(L_4);
			// List<Quaternion> rotations = new List<Quaternion>();
			List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * L_5 = (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *)il2cpp_codegen_object_new(List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_il2cpp_TypeInfo_var);
			List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D(L_5, /*hidden argument*/List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_RuntimeMethod_var);
			__this->set_U3CrotationsU3E5__3_6(L_5);
			// writer.Write("sendFile");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_6 = __this->get_U3CU3E4__this_3();
			NullCheck(L_6);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = L_6->get_writer_9();
			NullCheck(L_7);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D);
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_3();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_BUFFER_SIZE_11();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_9);
			__this->set_U3CresponseU3E5__4_7(L_10);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_3();
			NullCheck(L_11);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_12 = L_11->get_reader_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = __this->get_U3CresponseU3E5__4_7();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_14 = __this->get_U3CU3E4__this_3();
			NullCheck(L_14);
			int32_t L_15 = L_14->get_BUFFER_SIZE_11();
			NullCheck(L_12);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_16;
			L_16 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_12, L_13, 0, L_15);
			NullCheck(L_16);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_17;
			L_17 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_16, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
			V_2 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00de;
			}
		}

IL_009b:
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_20 = V_2;
			__this->set_U3CU3Eu__1_15(L_20);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * L_21 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0((AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *)L_21, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), (U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0_RuntimeMethod_var);
			goto IL_0480;
		}

IL_00c2:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_22 = __this->get_U3CU3Eu__1_15();
			V_2 = L_22;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_23 = __this->get_address_of_U3CU3Eu__1_15();
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
		}

IL_00de:
		{
			int32_t L_25;
			L_25 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			// string responseStr = new string(response);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = __this->get_U3CresponseU3E5__4_7();
			String_t* L_27;
			L_27 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_26, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__5_8(L_27);
			// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
			String_t* L_28 = __this->get_U3CresponseStrU3E5__5_8();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			NullCheck(L_28);
			String_t* L_30;
			L_30 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_28, L_29, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__5_8(L_30);
			// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return (holds, positions, rotations); }
			String_t* L_31 = __this->get_U3CresponseStrU3E5__5_8();
			NullCheck(L_31);
			int32_t L_32;
			L_32 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_31, /*hidden argument*/NULL);
			if ((((int32_t)L_32) <= ((int32_t)0)))
			{
				goto IL_0131;
			}
		}

IL_011c:
		{
			String_t* L_33 = __this->get_U3CresponseStrU3E5__5_8();
			NullCheck(L_33);
			bool L_34;
			L_34 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_33, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
			G_B13_0 = ((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
			goto IL_0132;
		}

IL_0131:
		{
			G_B13_0 = 1;
		}

IL_0132:
		{
			V_4 = (bool)G_B13_0;
			bool L_35 = V_4;
			if (!L_35)
			{
				goto IL_0156;
			}
		}

IL_0138:
		{
			// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return (holds, positions, rotations); }
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = __this->get_U3CholdsU3E5__1_4();
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_37 = __this->get_U3CpositionsU3E5__2_5();
			List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * L_38 = __this->get_U3CrotationsU3E5__3_6();
			ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  L_39;
			memset((&L_39), 0, sizeof(L_39));
			ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1((&L_39), L_36, L_37, L_38, /*hidden argument*/ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1_RuntimeMethod_var);
			V_1 = L_39;
			goto IL_0441;
		}

IL_0156:
		{
			// string filename = route + ".txt";
			String_t* L_40 = __this->get_route_2();
			String_t* L_41;
			L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, /*hidden argument*/NULL);
			__this->set_U3CfilenameU3E5__6_9(L_41);
			// writer.Write(filename);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_42 = __this->get_U3CU3E4__this_3();
			NullCheck(L_42);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_43 = L_42->get_writer_9();
			String_t* L_44 = __this->get_U3CfilenameU3E5__6_9();
			NullCheck(L_43);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_43, L_44);
			goto IL_03db;
		}

IL_0188:
		{
			// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_45 = __this->get_U3CU3E4__this_3();
			NullCheck(L_45);
			int32_t L_46 = L_45->get_BUFFER_SIZE_11();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_46);
			__this->set_U3CresponseU3E5__4_7(L_47);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_48 = __this->get_U3CU3E4__this_3();
			NullCheck(L_48);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_49 = L_48->get_reader_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_50 = __this->get_U3CresponseU3E5__4_7();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_51 = __this->get_U3CU3E4__this_3();
			NullCheck(L_51);
			int32_t L_52 = L_51->get_BUFFER_SIZE_11();
			NullCheck(L_49);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_53;
			L_53 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_49, L_50, 0, L_52);
			NullCheck(L_53);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_54;
			L_54 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_53, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
			V_5 = L_54;
			bool L_55;
			L_55 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
			if (L_55)
			{
				goto IL_0216;
			}
		}

IL_01d1:
		{
			int32_t L_56 = 1;
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_57 = V_5;
			__this->set_U3CU3Eu__1_15(L_57);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * L_58 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0((AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *)L_58, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), (U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0_RuntimeMethod_var);
			goto IL_0480;
		}

IL_01f9:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_59 = __this->get_U3CU3Eu__1_15();
			V_5 = L_59;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_60 = __this->get_address_of_U3CU3Eu__1_15();
			il2cpp_codegen_initobj(L_60, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_61 = (-1);
			V_0 = L_61;
			__this->set_U3CU3E1__state_0(L_61);
		}

IL_0216:
		{
			int32_t L_62;
			L_62 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			// responseStr = new string(response);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_63 = __this->get_U3CresponseU3E5__4_7();
			String_t* L_64;
			L_64 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_63, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__5_8(L_64);
			// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
			String_t* L_65 = __this->get_U3CresponseStrU3E5__5_8();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_66 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			NullCheck(L_65);
			String_t* L_67;
			L_67 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_65, L_66, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__5_8(L_67);
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }
			String_t* L_68 = __this->get_U3CresponseStrU3E5__5_8();
			NullCheck(L_68);
			int32_t L_69;
			L_69 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_68, /*hidden argument*/NULL);
			if ((((int32_t)L_69) <= ((int32_t)0)))
			{
				goto IL_0266;
			}
		}

IL_0254:
		{
			String_t* L_70 = __this->get_U3CresponseStrU3E5__5_8();
			NullCheck(L_70);
			bool L_71;
			L_71 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_70, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A, /*hidden argument*/NULL);
			G_B22_0 = ((int32_t)(L_71));
			goto IL_0267;
		}

IL_0266:
		{
			G_B22_0 = 1;
		}

IL_0267:
		{
			V_6 = (bool)G_B22_0;
			bool L_72 = V_6;
			if (!L_72)
			{
				goto IL_0273;
			}
		}

IL_026d:
		{
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }
			goto IL_03e3;
		}

IL_0273:
		{
			// String[] holdInfo = responseStr.Split(';');
			String_t* L_73 = __this->get_U3CresponseStrU3E5__5_8();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_74 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_75 = L_74;
			NullCheck(L_75);
			(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
			NullCheck(L_73);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76;
			L_76 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_73, L_75, /*hidden argument*/NULL);
			__this->set_U3CholdInfoU3E5__7_10(L_76);
			// holds.Add(holdInfo[0]);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_77 = __this->get_U3CholdsU3E5__1_4();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = __this->get_U3CholdInfoU3E5__7_10();
			NullCheck(L_78);
			int32_t L_79 = 0;
			String_t* L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
			NullCheck(L_77);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_77, L_80, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// string[] positionStr = holdInfo[1].Split(',');
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = __this->get_U3CholdInfoU3E5__7_10();
			NullCheck(L_81);
			int32_t L_82 = 1;
			String_t* L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_84 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = L_84;
			NullCheck(L_85);
			(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_83);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86;
			L_86 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_83, L_85, /*hidden argument*/NULL);
			__this->set_U3CpositionStrU3E5__8_11(L_86);
			// Vector3 position = new Vector3(float.Parse(positionStr[0].Trim()), float.Parse(positionStr[1].Trim()), float.Parse(positionStr[2].Trim()));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = __this->get_U3CpositionStrU3E5__8_11();
			NullCheck(L_87);
			int32_t L_88 = 0;
			String_t* L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
			NullCheck(L_89);
			String_t* L_90;
			L_90 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_89, /*hidden argument*/NULL);
			float L_91;
			L_91 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_90, /*hidden argument*/NULL);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = __this->get_U3CpositionStrU3E5__8_11();
			NullCheck(L_92);
			int32_t L_93 = 1;
			String_t* L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
			NullCheck(L_94);
			String_t* L_95;
			L_95 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_94, /*hidden argument*/NULL);
			float L_96;
			L_96 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_95, /*hidden argument*/NULL);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_97 = __this->get_U3CpositionStrU3E5__8_11();
			NullCheck(L_97);
			int32_t L_98 = 2;
			String_t* L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
			NullCheck(L_99);
			String_t* L_100;
			L_100 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_99, /*hidden argument*/NULL);
			float L_101;
			L_101 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_100, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
			memset((&L_102), 0, sizeof(L_102));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_102), L_91, L_96, L_101, /*hidden argument*/NULL);
			__this->set_U3CpositionU3E5__9_12(L_102);
			// positions.Add(position);
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_103 = __this->get_U3CpositionsU3E5__2_5();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = __this->get_U3CpositionU3E5__9_12();
			NullCheck(L_103);
			List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59(L_103, L_104, /*hidden argument*/List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var);
			// string[] rotationStr = holdInfo[2].Split(',');
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105 = __this->get_U3CholdInfoU3E5__7_10();
			NullCheck(L_105);
			int32_t L_106 = 2;
			String_t* L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_108 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_109 = L_108;
			NullCheck(L_109);
			(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_107);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110;
			L_110 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_107, L_109, /*hidden argument*/NULL);
			__this->set_U3CrotationStrU3E5__10_13(L_110);
			// Quaternion rotation = new Quaternion(float.Parse(rotationStr[0].Trim()),
			//     float.Parse(rotationStr[1].Trim()),
			//     float.Parse(rotationStr[2].Trim()),
			//     float.Parse(rotationStr[3].Trim()));
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = __this->get_U3CrotationStrU3E5__10_13();
			NullCheck(L_111);
			int32_t L_112 = 0;
			String_t* L_113 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
			NullCheck(L_113);
			String_t* L_114;
			L_114 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_113, /*hidden argument*/NULL);
			float L_115;
			L_115 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_114, /*hidden argument*/NULL);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_116 = __this->get_U3CrotationStrU3E5__10_13();
			NullCheck(L_116);
			int32_t L_117 = 1;
			String_t* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
			NullCheck(L_118);
			String_t* L_119;
			L_119 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_118, /*hidden argument*/NULL);
			float L_120;
			L_120 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_119, /*hidden argument*/NULL);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_121 = __this->get_U3CrotationStrU3E5__10_13();
			NullCheck(L_121);
			int32_t L_122 = 2;
			String_t* L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
			NullCheck(L_123);
			String_t* L_124;
			L_124 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_123, /*hidden argument*/NULL);
			float L_125;
			L_125 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_124, /*hidden argument*/NULL);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_126 = __this->get_U3CrotationStrU3E5__10_13();
			NullCheck(L_126);
			int32_t L_127 = 3;
			String_t* L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
			NullCheck(L_128);
			String_t* L_129;
			L_129 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_128, /*hidden argument*/NULL);
			float L_130;
			L_130 = Single_Parse_mA1B20E6E0AAD67F60707D81E82667D2D4B274D6F(L_129, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_131;
			memset((&L_131), 0, sizeof(L_131));
			Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_131), L_115, L_120, L_125, L_130, /*hidden argument*/NULL);
			__this->set_U3CrotationU3E5__11_14(L_131);
			// rotations.Add(rotation);
			List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * L_132 = __this->get_U3CrotationsU3E5__3_6();
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_133 = __this->get_U3CrotationU3E5__11_14();
			NullCheck(L_132);
			List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84(L_132, L_133, /*hidden argument*/List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_RuntimeMethod_var);
			// writer.Write("ready");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_134 = __this->get_U3CU3E4__this_3();
			NullCheck(L_134);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_135 = L_134->get_writer_9();
			NullCheck(L_135);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_135, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
			__this->set_U3CholdInfoU3E5__7_10((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
			__this->set_U3CpositionStrU3E5__8_11((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_136 = __this->get_address_of_U3CpositionU3E5__9_12();
			il2cpp_codegen_initobj(L_136, sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
			__this->set_U3CrotationStrU3E5__10_13((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_137 = __this->get_address_of_U3CrotationU3E5__11_14();
			il2cpp_codegen_initobj(L_137, sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		}

IL_03db:
		{
			// while (true)
			V_7 = (bool)1;
			goto IL_0188;
		}

IL_03e3:
		{
			// return (holds, positions, rotations);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_138 = __this->get_U3CholdsU3E5__1_4();
			List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_139 = __this->get_U3CpositionsU3E5__2_5();
			List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * L_140 = __this->get_U3CrotationsU3E5__3_6();
			ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  L_141;
			memset((&L_141), 0, sizeof(L_141));
			ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1((&L_141), L_138, L_139, L_140, /*hidden argument*/ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1_RuntimeMethod_var);
			V_1 = L_141;
			goto IL_0441;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03fd;
		}
		throw e;
	}

CATCH_03fd:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CholdsU3E5__1_4((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		__this->set_U3CpositionsU3E5__2_5((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL);
		__this->set_U3CrotationsU3E5__3_6((List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *)NULL);
		__this->set_U3CresponseU3E5__4_7((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		__this->set_U3CresponseStrU3E5__5_8((String_t*)NULL);
		__this->set_U3CfilenameU3E5__6_9((String_t*)NULL);
		AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * L_142 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_143 = V_8;
		AsyncTaskMethodBuilder_1_SetException_mFA0D1D629238A218F73AB7D6B70F7EE4B1DC303F((AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *)L_142, L_143, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mFA0D1D629238A218F73AB7D6B70F7EE4B1DC303F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0480;
	} // end catch (depth: 1)

IL_0441:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CholdsU3E5__1_4((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		__this->set_U3CpositionsU3E5__2_5((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)NULL);
		__this->set_U3CrotationsU3E5__3_6((List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *)NULL);
		__this->set_U3CresponseU3E5__4_7((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		__this->set_U3CresponseStrU3E5__5_8((String_t*)NULL);
		__this->set_U3CfilenameU3E5__6_9((String_t*)NULL);
		AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * L_144 = __this->get_address_of_U3CU3Et__builder_1();
		ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  L_145 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D((AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *)L_144, L_145, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D_RuntimeMethod_var);
	}

IL_0480:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<GetRoute>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteU3Ed__17_SetStateMachine_mE6114E0BC3BF4506DA211E3FBA73E7CC9DCA2B69 (U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.TCPClient/<GetRouteList>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__18__ctor_m74715FFE76E65F99EC1D2058178C9318A70DF96D (U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<GetRouteList>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__18_MoveNext_m1F06FDE6830012DD5F38124AF3F5A5CA4D5E211B (U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE_m8915CBFF67656205DDA9A9BD9027DBF275569DFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_1 = NULL;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_000a:
		{
			goto IL_0011;
		}

IL_000c:
		{
			goto IL_00a7;
		}

IL_0011:
		{
			// List<string> routeList = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			__this->set_U3CrouteListU3E5__1_3(L_2);
			// writer.Write("listFiles");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_9();
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4);
			goto IL_0165;
		}

IL_0038:
		{
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			int32_t L_6 = L_5->get_BUFFER_SIZE_11();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
			__this->set_U3CresponseU3E5__2_4(L_7);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_2();
			NullCheck(L_8);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__2_4();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_2();
			NullCheck(L_11);
			int32_t L_12 = L_11->get_BUFFER_SIZE_11();
			NullCheck(L_9);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_13;
			L_13 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_9, L_10, 0, L_12);
			NullCheck(L_13);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_14;
			L_14 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_13, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
			V_2 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00c3;
			}
		}

IL_0080:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_17 = V_2;
			__this->set_U3CU3Eu__1_6(L_17);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE_m8915CBFF67656205DDA9A9BD9027DBF275569DFA((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), (U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE_m8915CBFF67656205DDA9A9BD9027DBF275569DFA_RuntimeMethod_var);
			goto IL_01b3;
		}

IL_00a7:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_19 = __this->get_U3CU3Eu__1_6();
			V_2 = L_19;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_20 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_00c3:
		{
			int32_t L_22;
			L_22 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			// string responseStr = new string(response);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = __this->get_U3CresponseU3E5__2_4();
			String_t* L_24;
			L_24 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_23, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_5(L_24);
			// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
			String_t* L_25 = __this->get_U3CresponseStrU3E5__3_5();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			NullCheck(L_25);
			String_t* L_27;
			L_27 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_25, L_26, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_5(L_27);
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }
			String_t* L_28 = __this->get_U3CresponseStrU3E5__3_5();
			NullCheck(L_28);
			int32_t L_29;
			L_29 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_28, /*hidden argument*/NULL);
			if ((((int32_t)L_29) <= ((int32_t)0)))
			{
				goto IL_0113;
			}
		}

IL_0101:
		{
			String_t* L_30 = __this->get_U3CresponseStrU3E5__3_5();
			NullCheck(L_30);
			bool L_31;
			L_31 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_30, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A, /*hidden argument*/NULL);
			G_B11_0 = ((int32_t)(L_31));
			goto IL_0114;
		}

IL_0113:
		{
			G_B11_0 = 1;
		}

IL_0114:
		{
			V_4 = (bool)G_B11_0;
			bool L_32 = V_4;
			if (!L_32)
			{
				goto IL_011d;
			}
		}

IL_011a:
		{
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { break; }
			goto IL_016d;
		}

IL_011d:
		{
			// responseStr = Path.GetFileNameWithoutExtension(responseStr);
			String_t* L_33 = __this->get_U3CresponseStrU3E5__3_5();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_34;
			L_34 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_33, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_5(L_34);
			// routeList.Add(responseStr);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = __this->get_U3CrouteListU3E5__1_3();
			String_t* L_36 = __this->get_U3CresponseStrU3E5__3_5();
			NullCheck(L_35);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_35, L_36, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// writer.Write("ready");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_37 = __this->get_U3CU3E4__this_2();
			NullCheck(L_37);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_38 = L_37->get_writer_9();
			NullCheck(L_38);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_38, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
			__this->set_U3CresponseU3E5__2_4((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
			__this->set_U3CresponseStrU3E5__3_5((String_t*)NULL);
		}

IL_0165:
		{
			// while (true)
			V_5 = (bool)1;
			goto IL_0038;
		}

IL_016d:
		{
			// return routeList;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = __this->get_U3CrouteListU3E5__1_3();
			V_1 = L_39;
			goto IL_0197;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0176;
		}
		throw e;
	}

CATCH_0176:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrouteListU3E5__1_3((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_41 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m343F3F299984673DBDF36E4359877989538AE23C((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_40, L_41, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m343F3F299984673DBDF36E4359877989538AE23C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b3;
	} // end catch (depth: 1)

IL_0197:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3CrouteListU3E5__1_3((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_42, L_43, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455_RuntimeMethod_var);
	}

IL_01b3:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<GetRouteList>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__18_SetStateMachine_mD8691678A52BD1DC0DBE26D1B0A5E0FC21A593CA (U3CGetRouteListU3Ed__18_t2D74FDD3BE5AD4C2F9A291E5D5FEE474A1AEF4AE * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
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
// System.Void Scripts.TCPClient/<SendFile>d__14::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__14__ctor_m7EFAB0DD4CDD4159C32D2C55B78139804AF04C3C (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<SendFile>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__14_MoveNext_m40D5D23829537B3B3AE3C54C4EA79A78B7A65692 (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA * V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	String_t* V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 11> __leave_targets;
	int32_t G_B17_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B39_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)2))))
			{
				goto IL_000d;
			}
		}

IL_000b:
		{
			goto IL_000f;
		}

IL_000d:
		{
			goto IL_0010;
		}

IL_000f:
		{
		}

IL_0010:
		{
		}

IL_0011:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0025;
					}
					case 1:
					{
						goto IL_002a;
					}
					case 2:
					{
						goto IL_002f;
					}
				}
			}

IL_0023:
			{
				goto IL_0034;
			}

IL_0025:
			{
				goto IL_00b9;
			}

IL_002a:
			{
				goto IL_01ba;
			}

IL_002f:
			{
				goto IL_025e;
			}

IL_0034:
			{
				// writer.Write("receiveFile");
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_3();
				NullCheck(L_3);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_9();
				NullCheck(L_4);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B);
				// char[] response = new char[BUFFER_SIZE];
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_3();
				NullCheck(L_5);
				int32_t L_6 = L_5->get_BUFFER_SIZE_11();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
				__this->set_U3CresponseU3E5__1_4(L_7);
				// await reader.ReadAsync(response, 0, BUFFER_SIZE);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_3();
				NullCheck(L_8);
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_10();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__1_4();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_3();
				NullCheck(L_11);
				int32_t L_12 = L_11->get_BUFFER_SIZE_11();
				NullCheck(L_9);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_13;
				L_13 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_9, L_10, 0, L_12);
				NullCheck(L_13);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_14;
				L_14 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_13, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
				V_1 = L_14;
				bool L_15;
				L_15 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_1), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_00d5;
				}
			}

IL_0092:
			{
				int32_t L_16 = 0;
				V_0 = L_16;
				__this->set_U3CU3E1__state_0(L_16);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_17 = V_1;
				__this->set_U3CU3Eu__1_10(L_17);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_1), (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429_RuntimeMethod_var);
				goto IL_0454;
			}

IL_00b9:
			{
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_19 = __this->get_U3CU3Eu__1_10();
				V_1 = L_19;
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_20 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
				int32_t L_21 = (-1);
				V_0 = L_21;
				__this->set_U3CU3E1__state_0(L_21);
			}

IL_00d5:
			{
				int32_t L_22;
				L_22 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_1), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
				// string responseStr = new string(response);
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = __this->get_U3CresponseU3E5__1_4();
				String_t* L_24;
				L_24 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_23, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_5(L_24);
				// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
				String_t* L_25 = __this->get_U3CresponseStrU3E5__2_5();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
				NullCheck(L_25);
				String_t* L_27;
				L_27 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_25, L_26, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_5(L_27);
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				String_t* L_28 = __this->get_U3CresponseStrU3E5__2_5();
				NullCheck(L_28);
				int32_t L_29;
				L_29 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_28, /*hidden argument*/NULL);
				if ((((int32_t)L_29) <= ((int32_t)0)))
				{
					goto IL_0128;
				}
			}

IL_0113:
			{
				String_t* L_30 = __this->get_U3CresponseStrU3E5__2_5();
				NullCheck(L_30);
				bool L_31;
				L_31 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_30, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
				G_B17_0 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
				goto IL_0129;
			}

IL_0128:
			{
				G_B17_0 = 1;
			}

IL_0129:
			{
				V_3 = (bool)G_B17_0;
				bool L_32 = V_3;
				if (!L_32)
				{
					goto IL_0133;
				}
			}

IL_012d:
			{
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				goto IL_0440;
			}

IL_0133:
			{
				// writer.Write(filename);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_33 = __this->get_U3CU3E4__this_3();
				NullCheck(L_33);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_34 = L_33->get_writer_9();
				String_t* L_35 = __this->get_filename_2();
				NullCheck(L_34);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, L_35);
				// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_36 = __this->get_U3CU3E4__this_3();
				NullCheck(L_36);
				int32_t L_37 = L_36->get_BUFFER_SIZE_11();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_38 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_37);
				__this->set_U3CresponseU3E5__1_4(L_38);
				// await reader.ReadAsync(response, 0, BUFFER_SIZE);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_39 = __this->get_U3CU3E4__this_3();
				NullCheck(L_39);
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_40 = L_39->get_reader_10();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_41 = __this->get_U3CresponseU3E5__1_4();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_42 = __this->get_U3CU3E4__this_3();
				NullCheck(L_42);
				int32_t L_43 = L_42->get_BUFFER_SIZE_11();
				NullCheck(L_40);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_44;
				L_44 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_40, L_41, 0, L_43);
				NullCheck(L_44);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_45;
				L_45 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_44, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
				V_4 = L_45;
				bool L_46;
				L_46 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_01d7;
				}
			}

IL_0192:
			{
				int32_t L_47 = 1;
				V_0 = L_47;
				__this->set_U3CU3E1__state_0(L_47);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_48 = V_4;
				__this->set_U3CU3Eu__1_10(L_48);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_4), (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429_RuntimeMethod_var);
				goto IL_0454;
			}

IL_01ba:
			{
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_50 = __this->get_U3CU3Eu__1_10();
				V_4 = L_50;
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_51 = __this->get_address_of_U3CU3Eu__1_10();
				il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
				int32_t L_52 = (-1);
				V_0 = L_52;
				__this->set_U3CU3E1__state_0(L_52);
			}

IL_01d7:
			{
				int32_t L_53;
				L_53 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
				// responseStr = new string(response);
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_54 = __this->get_U3CresponseU3E5__1_4();
				String_t* L_55;
				L_55 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_54, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_5(L_55);
				// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
				String_t* L_56 = __this->get_U3CresponseStrU3E5__2_5();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_57 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
				NullCheck(L_56);
				String_t* L_58;
				L_58 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_56, L_57, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_5(L_58);
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				String_t* L_59 = __this->get_U3CresponseStrU3E5__2_5();
				NullCheck(L_59);
				int32_t L_60;
				L_60 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_59, /*hidden argument*/NULL);
				if ((((int32_t)L_60) <= ((int32_t)0)))
				{
					goto IL_022a;
				}
			}

IL_0215:
			{
				String_t* L_61 = __this->get_U3CresponseStrU3E5__2_5();
				NullCheck(L_61);
				bool L_62;
				L_62 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_61, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
				G_B25_0 = ((((int32_t)L_62) == ((int32_t)0))? 1 : 0);
				goto IL_022b;
			}

IL_022a:
			{
				G_B25_0 = 1;
			}

IL_022b:
			{
				V_5 = (bool)G_B25_0;
				bool L_63 = V_5;
				if (!L_63)
				{
					goto IL_0237;
				}
			}

IL_0231:
			{
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				goto IL_0440;
			}

IL_0237:
			{
				// string path = Path.Combine(Application.persistentDataPath, filename);
				String_t* L_64;
				L_64 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
				String_t* L_65 = __this->get_filename_2();
				IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
				String_t* L_66;
				L_66 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_64, L_65, /*hidden argument*/NULL);
				__this->set_U3CpathU3E5__3_6(L_66);
				// using (TextReader sr = File.OpenText(path))
				String_t* L_67 = __this->get_U3CpathU3E5__3_6();
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_68;
				L_68 = File_OpenText_m725104502BBF4EB28613CC7473AF7DC6ACE2BA99(L_67, /*hidden argument*/NULL);
				__this->set_U3CsrU3E5__4_7(L_68);
			}

IL_025e:
			{
			}

IL_025f:
			try
			{ // begin try (depth: 3)
				{
					int32_t L_69 = V_0;
					if ((((int32_t)L_69) == ((int32_t)2)))
					{
						goto IL_0265;
					}
				}

IL_0263:
				{
					goto IL_026a;
				}

IL_0265:
				{
					goto IL_030d;
				}

IL_026a:
				{
					// string s = "";
					__this->set_U3CsU3E5__5_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
					goto IL_038b;
				}

IL_027b:
				{
					// writer.Write(s + "\n");
					TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_70 = __this->get_U3CU3E4__this_3();
					NullCheck(L_70);
					StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_71 = L_70->get_writer_9();
					String_t* L_72 = __this->get_U3CsU3E5__5_8();
					String_t* L_73;
					L_73 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_72, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
					NullCheck(L_71);
					VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_71, L_73);
					// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
					TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_74 = __this->get_U3CU3E4__this_3();
					NullCheck(L_74);
					int32_t L_75 = L_74->get_BUFFER_SIZE_11();
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_76 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_75);
					__this->set_U3CresponseU3E5__1_4(L_76);
					// await reader.ReadAsync(response, 0, BUFFER_SIZE);
					TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_77 = __this->get_U3CU3E4__this_3();
					NullCheck(L_77);
					StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_78 = L_77->get_reader_10();
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_79 = __this->get_U3CresponseU3E5__1_4();
					TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_80 = __this->get_U3CU3E4__this_3();
					NullCheck(L_80);
					int32_t L_81 = L_80->get_BUFFER_SIZE_11();
					NullCheck(L_78);
					Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_82;
					L_82 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_78, L_79, 0, L_81);
					NullCheck(L_82);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_83;
					L_83 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_82, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
					V_6 = L_83;
					bool L_84;
					L_84 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
					if (L_84)
					{
						goto IL_032a;
					}
				}

IL_02e5:
				{
					int32_t L_85 = 2;
					V_0 = L_85;
					__this->set_U3CU3E1__state_0(L_85);
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_86 = V_6;
					__this->set_U3CU3Eu__1_10(L_86);
					V_2 = __this;
					AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_87 = __this->get_address_of_U3CU3Et__builder_1();
					AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_87, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA_m0F399A606F57571267D91470376BC5215323A429_RuntimeMethod_var);
					IL2CPP_LEAVE(0x454, FINALLY_03cd);
				}

IL_030d:
				{
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_88 = __this->get_U3CU3Eu__1_10();
					V_6 = L_88;
					TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_89 = __this->get_address_of_U3CU3Eu__1_10();
					il2cpp_codegen_initobj(L_89, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
					int32_t L_90 = (-1);
					V_0 = L_90;
					__this->set_U3CU3E1__state_0(L_90);
				}

IL_032a:
				{
					int32_t L_91;
					L_91 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
					// responseStr = new string(response);
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_92 = __this->get_U3CresponseU3E5__1_4();
					String_t* L_93;
					L_93 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_92, /*hidden argument*/NULL);
					__this->set_U3CresponseStrU3E5__2_5(L_93);
					// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
					String_t* L_94 = __this->get_U3CresponseStrU3E5__2_5();
					CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_95 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
					NullCheck(L_94);
					String_t* L_96;
					L_96 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_94, L_95, /*hidden argument*/NULL);
					__this->set_U3CresponseStrU3E5__2_5(L_96);
					// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
					String_t* L_97 = __this->get_U3CresponseStrU3E5__2_5();
					NullCheck(L_97);
					int32_t L_98;
					L_98 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_97, /*hidden argument*/NULL);
					if ((((int32_t)L_98) <= ((int32_t)0)))
					{
						goto IL_037d;
					}
				}

IL_0368:
				{
					String_t* L_99 = __this->get_U3CresponseStrU3E5__2_5();
					NullCheck(L_99);
					bool L_100;
					L_100 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_99, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
					G_B39_0 = ((((int32_t)L_100) == ((int32_t)0))? 1 : 0);
					goto IL_037e;
				}

IL_037d:
				{
					G_B39_0 = 1;
				}

IL_037e:
				{
					V_7 = (bool)G_B39_0;
					bool L_101 = V_7;
					if (!L_101)
					{
						goto IL_038a;
					}
				}

IL_0384:
				{
					// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
					IL2CPP_LEAVE(0x440, FINALLY_03cd);
				}

IL_038a:
				{
				}

IL_038b:
				{
					// while ((s = sr.ReadLine()) != null)
					TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_102 = __this->get_U3CsrU3E5__4_7();
					NullCheck(L_102);
					String_t* L_103;
					L_103 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadLine() */, L_102);
					String_t* L_104 = L_103;
					V_9 = L_104;
					__this->set_U3CsU3E5__5_8(L_104);
					String_t* L_105 = V_9;
					V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_105) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
					bool L_106 = V_8;
					if (L_106)
					{
						goto IL_027b;
					}
				}

IL_03ad:
				{
					// writer.Write("done");
					TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_107 = __this->get_U3CU3E4__this_3();
					NullCheck(L_107);
					StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_108 = L_107->get_writer_9();
					NullCheck(L_108);
					VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_108, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
					__this->set_U3CsU3E5__5_8((String_t*)NULL);
					IL2CPP_LEAVE(0x3E6, FINALLY_03cd);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_03cd;
			}

FINALLY_03cd:
			{ // begin finally (depth: 3)
				{
					int32_t L_109 = V_0;
					if ((((int32_t)L_109) >= ((int32_t)0)))
					{
						goto IL_03e5;
					}
				}

IL_03d1:
				{
					TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_110 = __this->get_U3CsrU3E5__4_7();
					if (!L_110)
					{
						goto IL_03e5;
					}
				}

IL_03d9:
				{
					TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_111 = __this->get_U3CsrU3E5__4_7();
					NullCheck(L_111);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_111);
				}

IL_03e5:
				{
					IL2CPP_END_FINALLY(973)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(973)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x454, IL_0454)
				IL2CPP_JUMP_TBL(0x440, IL_0440)
				IL2CPP_JUMP_TBL(0x3E6, IL_03e6)
			}

IL_03e6:
			{
				__this->set_U3CsrU3E5__4_7((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)NULL);
				__this->set_U3CresponseU3E5__1_4((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
				__this->set_U3CresponseStrU3E5__2_5((String_t*)NULL);
				__this->set_U3CpathU3E5__3_6((String_t*)NULL);
				goto IL_0424;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0405;
			}
			throw e;
		}

CATCH_0405:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_112 = V_10;
			__this->set_U3CeU3E5__6_9(L_112);
			// Debug.Log(e.ToString());
			Exception_t * L_113 = __this->get_U3CeU3E5__6_9();
			NullCheck(L_113);
			String_t* L_114;
			L_114 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_113);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_114, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0424;
		} // end catch (depth: 2)

IL_0424:
		{
			goto IL_0440;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0426;
		}
		throw e;
	}

CATCH_0426:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_115 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_116 = V_10;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_115, L_116, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0454;
	} // end catch (depth: 1)

IL_0440:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_117 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_117, /*hidden argument*/NULL);
	}

IL_0454:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<SendFile>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__14_SetStateMachine_m576946182C86EEF9C895933440C060C4889F0247 (U3CSendFileU3Ed__14_t36A501ECB5018B6EF0439664DF585522CCBE61CA * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
