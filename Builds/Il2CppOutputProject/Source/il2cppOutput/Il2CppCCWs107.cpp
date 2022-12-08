#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Dictionary_2_t7CA11B7A55B54101B4ECCE3C3B4142BB3F414F1B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>>
struct Func_2_t0B3847651A96F433778B648EA5056346EC2A24FB;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>>
struct Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>>
struct Func_2_t5DC75EBD236A012DCEF312794A29717D3226EF2D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>>
struct Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>>>
struct Func_2_tEC6B3D90E2B9AE2AFD2CE80737B5B4D26B9DD165;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>>
struct Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>>
struct Func_2_t1652A5139F256DD1CAE4052ABA0D21DDB71F0B88;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>>
struct Func_2_t7F932D33A1D9DE6987E3225C9CA706F789F1FF66;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>>
struct Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>>
struct Func_2_t3591C28A3A1784DD7D9A5B8BB77A7800E7FFA98C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>>
struct Func_2_t5327B213F95AFA744C39D47ADA63AD14FB966B3E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>>
struct Func_2_tEE0B8A4A8105D5AA3534F2D0C4B428045CA296F1;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Byte[]>>
struct Func_2_tEF9C6F030A39D90D2C3B088C2885BA1DF171A272;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.IPAddress[]>>
struct Func_2_t7F1A3C6C7962946F7157B160B2EFB65EE2AAF2B8;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerARF>>
struct Func_2_t269EB395AF9902FA91C85CEB12D3BF19B3F7008B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerXR>>
struct Func_2_tD6E53BC0F56EC9CDB1D086A56E78567F4D856415;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>>
struct Func_2_t932D6C6279050FC00E5A91FFCB51E2438965F4B7;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>
struct IReadOnlyDictionary_2_tADCBCF434BAC9B710FF2D559D37A89DEB44B6B31;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>
struct List_1_t8E5498F8BC36841E4B28C38809CDD64B11F2DF7D;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Boolean>
struct StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Byte>
struct StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Double>
struct StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Int16>
struct StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Int32>
struct StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Int64>
struct StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<System.Single>
struct StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct TaskFactory_1_t2375C2B3C986E3C00A4DD5C105153778A74E2EC4;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<System.String>>
struct TaskFactory_1_tDF417EF37437812A181748C79C7AED68BE552CBA;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>>
struct TaskFactory_1_t54B07BAD02C066E9350C306BA0A56DF8E2248319;
// System.Threading.Tasks.TaskFactory`1<System.Nullable`1<System.Int32>>
struct TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct TaskFactory_1_t42672DE0A49B88A2F671DBDB600E8D1AA199FECF;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct TaskFactory_1_t4C91294CDECF33075BCBA272FF04374B356ED6B3;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct TaskFactory_1_tBF7BE8E2C169BE3C7BEA50D8108E9BDCFE100916;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct TaskFactory_1_t44E483F0A3F9AC62F0E76FBDA7C158A279AB5C23;
// System.Threading.Tasks.TaskFactory`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct TaskFactory_1_t24824C666A75E5C8BF1E87AABAE1801F04F084A2;
// System.Threading.Tasks.TaskFactory`1<System.Byte[]>
struct TaskFactory_1_t11C6470C2FADA26AA5936A409CFB70ABCC0ED5FD;
// System.Threading.Tasks.TaskFactory`1<System.Net.IPAddress[]>
struct TaskFactory_1_t3D5120AC6C8EFAA404C741B04CA39A0262261715;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerARF>
struct TaskFactory_1_tFD0F3B493C5F5E631DCAEF642C01D5902189ADC8;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerXR>
struct TaskFactory_1_t53466FD189E9BF9E367AD2ACE30E78D6AEA8E6A1;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct TaskFactory_1_tFAFD7BF14E3F34BDE7AB86EBB3A623E66CA8ED85;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C;
// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE;
// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5;
// System.Threading.Tasks.Task`1<System.Net.WebResponse>
struct Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// ExitGames.Client.Photon.ByteArraySlice[]
struct ByteArraySliceU5BU5D_t7E12BA5A8AAD6360C2D8A28654FC2004E4F471B1;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_tB46F66A821A4AA4E118A4D446FEABBE515243A41;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.UI.LayoutRebuilder[]
struct LayoutRebuilderU5BU5D_t86DB6C6BBFDB37723EB9108339D367ED328263CF;
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t18C2DC58754D65A45A05D48FA2866316FF101C1E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.InputSystem.InputSystem/State[]
struct StateU5BU5D_t7ED482A01F1FF2C0F2EE4659C3D1DA0F75CACADA;
// Microsoft.MixedReality.WorldLocking.Core.AnchorManagerARF
struct AnchorManagerARF_t8AC0C4631B6E98D557A6CFF87CCDC9A161894123;
// Microsoft.MixedReality.WorldLocking.Core.AnchorManagerXR
struct AnchorManagerXR_t622B5D869D8D4C33D4230599CF7527109D61381F;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo
struct ApplicationInfo_t1CA32BDFE3CA0B6C52D851D69CE641A61E2FDF63;
// System.Net.BufferOffsetSize
struct BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.IDisposable>
struct NOVTABLE IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};

// System.Object


// System.Collections.Generic.Stack`1<ExitGames.Client.Photon.ByteArraySlice>
struct Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ByteArraySliceU5BU5D_t7E12BA5A8AAD6360C2D8A28654FC2004E4F471B1* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD, ____array_0)); }
	inline ByteArraySliceU5BU5D_t7E12BA5A8AAD6360C2D8A28654FC2004E4F471B1* get__array_0() const { return ____array_0; }
	inline ByteArraySliceU5BU5D_t7E12BA5A8AAD6360C2D8A28654FC2004E4F471B1** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ByteArraySliceU5BU5D_t7E12BA5A8AAD6360C2D8A28654FC2004E4F471B1* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE, ____array_0)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	IEnumeratorU5BU5D_tB46F66A821A4AA4E118A4D446FEABBE515243A41* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B, ____array_0)); }
	inline IEnumeratorU5BU5D_tB46F66A821A4AA4E118A4D446FEABBE515243A41* get__array_0() const { return ____array_0; }
	inline IEnumeratorU5BU5D_tB46F66A821A4AA4E118A4D446FEABBE515243A41** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(IEnumeratorU5BU5D_tB46F66A821A4AA4E118A4D446FEABBE515243A41* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4, ____array_0)); }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* get__array_0() const { return ____array_0; }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.UI.LayoutRebuilder>
struct Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	LayoutRebuilderU5BU5D_t86DB6C6BBFDB37723EB9108339D367ED328263CF* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA, ____array_0)); }
	inline LayoutRebuilderU5BU5D_t86DB6C6BBFDB37723EB9108339D367ED328263CF* get__array_0() const { return ____array_0; }
	inline LayoutRebuilderU5BU5D_t86DB6C6BBFDB37723EB9108339D367ED328263CF** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(LayoutRebuilderU5BU5D_t86DB6C6BBFDB37723EB9108339D367ED328263CF* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<ExitGames.Client.Photon.NCommand>
struct Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	NCommandU5BU5D_t18C2DC58754D65A45A05D48FA2866316FF101C1E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0, ____array_0)); }
	inline NCommandU5BU5D_t18C2DC58754D65A45A05D48FA2866316FF101C1E* get__array_0() const { return ____array_0; }
	inline NCommandU5BU5D_t18C2DC58754D65A45A05D48FA2866316FF101C1E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(NCommandU5BU5D_t18C2DC58754D65A45A05D48FA2866316FF101C1E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____array_0)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__array_0() const { return ____array_0; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.InputSystem.InputSystem/State>
struct Stack_1_t9E4947B989137176C10F61A420922C63154C469A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	StateU5BU5D_t7ED482A01F1FF2C0F2EE4659C3D1DA0F75CACADA* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t9E4947B989137176C10F61A420922C63154C469A, ____array_0)); }
	inline StateU5BU5D_t7ED482A01F1FF2C0F2EE4659C3D1DA0F75CACADA* get__array_0() const { return ____array_0; }
	inline StateU5BU5D_t7ED482A01F1FF2C0F2EE4659C3D1DA0F75CACADA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StateU5BU5D_t7ED482A01F1FF2C0F2EE4659C3D1DA0F75CACADA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t9E4947B989137176C10F61A420922C63154C469A, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t9E4947B989137176C10F61A420922C63154C469A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t9E4947B989137176C10F61A420922C63154C469A, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ValueTuple`2<System.Boolean,System.Net.WebOperation>
struct ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8 
{
public:
	// T1 System.ValueTuple`2::Item1
	bool ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8, ___Item1_0)); }
	inline bool get_Item1_0() const { return ___Item1_0; }
	inline bool* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(bool value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8, ___Item2_1)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_Item2_1() const { return ___Item2_1; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E 
{
public:
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item1_0)); }
	inline int32_t get_Item1_0() const { return ___Item1_0; }
	inline int32_t* get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(int32_t value)
	{
		___Item1_0 = value;
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
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


// System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>
struct ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C 
{
public:
	// T1 System.ValueTuple`3::Item1
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C, ___Item1_0)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_Item1_0() const { return ___Item1_0; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C, ___Item2_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_Item2_1() const { return ___Item2_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C, ___Item3_2)); }
	inline int32_t get_Item3_2() const { return ___Item3_2; }
	inline int32_t* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(int32_t value)
	{
		___Item3_2 = value;
	}
};


// System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>
struct ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092 
{
public:
	// T1 System.ValueTuple`5::Item1
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092, ___Item1_0)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_Item1_0() const { return ___Item1_0; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092, ___Item3_2)); }
	inline bool get_Item3_2() const { return ___Item3_2; }
	inline bool* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(bool value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092, ___Item4_3)); }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * get_Item4_3() const { return ___Item4_3; }
	inline BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(BufferOffsetSize_tF2771CD84FA1EB3961DB41CF866EDE296987572F * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092, ___Item5_4)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_Item5_4() const { return ___Item5_4; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
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


// System.__Il2CppComDelegate
struct __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66  : public Il2CppComObject
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____completedHandler_5)); }
	inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____progressHandler_6)); }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(VoidReferenceTypeParameter_t78E4D25D8A3CBDE207B40FCDAEF288A406D374B8 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____completedHandler_5)); }
	inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____progressHandler_6)); }
	inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>
struct TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5  : public RuntimeObject
{
public:
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t * ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject * ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * ____startingContext_7;

public:
	inline static int32_t get_offset_of__cancelTokenSource_0() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____cancelTokenSource_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get__cancelTokenSource_0() const { return ____cancelTokenSource_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of__cancelTokenSource_0() { return &____cancelTokenSource_0; }
	inline void set__cancelTokenSource_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		____cancelTokenSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cancelTokenSource_0), (void*)value);
	}

	inline static int32_t get_offset_of__id_1() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____id_1)); }
	inline uint32_t get__id_1() const { return ____id_1; }
	inline uint32_t* get_address_of__id_1() { return &____id_1; }
	inline void set__id_1(uint32_t value)
	{
		____id_1 = value;
	}

	inline static int32_t get_offset_of__error_2() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____error_2)); }
	inline Exception_t * get__error_2() const { return ____error_2; }
	inline Exception_t ** get_address_of__error_2() { return &____error_2; }
	inline void set__error_2(Exception_t * value)
	{
		____error_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____error_2), (void*)value);
	}

	inline static int32_t get_offset_of__state_3() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____state_3)); }
	inline int32_t get__state_3() const { return ____state_3; }
	inline int32_t* get_address_of__state_3() { return &____state_3; }
	inline void set__state_3(int32_t value)
	{
		____state_3 = value;
	}

	inline static int32_t get_offset_of__dataContainer_4() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____dataContainer_4)); }
	inline RuntimeObject * get__dataContainer_4() const { return ____dataContainer_4; }
	inline RuntimeObject ** get_address_of__dataContainer_4() { return &____dataContainer_4; }
	inline void set__dataContainer_4(RuntimeObject * value)
	{
		____dataContainer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataContainer_4), (void*)value);
	}

	inline static int32_t get_offset_of__completedHandler_5() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____completedHandler_5)); }
	inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * get__completedHandler_5() const { return ____completedHandler_5; }
	inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 ** get_address_of__completedHandler_5() { return &____completedHandler_5; }
	inline void set__completedHandler_5(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * value)
	{
		____completedHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____completedHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of__progressHandler_6() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____progressHandler_6)); }
	inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * get__progressHandler_6() const { return ____progressHandler_6; }
	inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 ** get_address_of__progressHandler_6() { return &____progressHandler_6; }
	inline void set__progressHandler_6(AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * value)
	{
		____progressHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____progressHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of__startingContext_7() { return static_cast<int32_t>(offsetof(TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5, ____startingContext_7)); }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * get__startingContext_7() const { return ____startingContext_7; }
	inline SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 ** get_address_of__startingContext_7() { return &____startingContext_7; }
	inline void set__startingContext_7(SynchronizationContext_t17D9365B5E0D30A0910A16FA4351C525232EF069 * value)
	{
		____startingContext_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____startingContext_7), (void*)value);
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// ExitGames.Client.Photon.StructWrapping.Pooling
struct Pooling_tC570BF272FC0A1F11BE9AA8AD594C37854B35AB1 
{
public:
	// System.Int32 ExitGames.Client.Photon.StructWrapping.Pooling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pooling_tC570BF272FC0A1F11BE9AA8AD594C37854B35AB1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// ExitGames.Client.Photon.StructWrapping.WrappedType
struct WrappedType_tCFA63509AE3C18DD20E1853A0347971104AA8167 
{
public:
	// System.Int32 ExitGames.Client.Photon.StructWrapping.WrappedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrappedType_tCFA63509AE3C18DD20E1853A0347971104AA8167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3  : public TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A  : public TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D
{
public:

public:
};


// System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5  : public TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5
{
public:

public:
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


// System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tABFF418183013AF8073F598F239C6AD95170512F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tE187E0BCF41E1FE0B7BF044B872E83C52A237F24 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9, ___m_result_40)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_result_40() const { return ___m_result_40; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tDF417EF37437812A181748C79C7AED68BE552CBA * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5DC75EBD236A012DCEF312794A29717D3226EF2D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tDF417EF37437812A181748C79C7AED68BE552CBA * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tDF417EF37437812A181748C79C7AED68BE552CBA ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tDF417EF37437812A181748C79C7AED68BE552CBA * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5DC75EBD236A012DCEF312794A29717D3226EF2D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5DC75EBD236A012DCEF312794A29717D3226EF2D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5DC75EBD236A012DCEF312794A29717D3226EF2D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B, ___m_result_40)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_result_40() const { return ___m_result_40; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t14509FF64A07488592D832224C6E34D4D0EECC40 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t70AA71B2EC7D93759E9AE8ED32C5B262784B834F * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>>
struct Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t8E5498F8BC36841E4B28C38809CDD64B11F2DF7D * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA, ___m_result_40)); }
	inline List_1_t8E5498F8BC36841E4B28C38809CDD64B11F2DF7D * get_m_result_40() const { return ___m_result_40; }
	inline List_1_t8E5498F8BC36841E4B28C38809CDD64B11F2DF7D ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(List_1_t8E5498F8BC36841E4B28C38809CDD64B11F2DF7D * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t54B07BAD02C066E9350C306BA0A56DF8E2248319 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tEC6B3D90E2B9AE2AFD2CE80737B5B4D26B9DD165 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t54B07BAD02C066E9350C306BA0A56DF8E2248319 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t54B07BAD02C066E9350C306BA0A56DF8E2248319 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t54B07BAD02C066E9350C306BA0A56DF8E2248319 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tEC6B3D90E2B9AE2AFD2CE80737B5B4D26B9DD165 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tEC6B3D90E2B9AE2AFD2CE80737B5B4D26B9DD165 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tEC6B3D90E2B9AE2AFD2CE80737B5B4D26B9DD165 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581, ___m_result_40)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_m_result_40() const { return ___m_result_40; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC38251ED2F273F12DD35B9D834895E8343290094 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tACAF262312375D7D8F7883E8DA2431DDAF082BFA * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC, ___m_result_40)); }
	inline Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765 * get_m_result_40() const { return ___m_result_40; }
	inline Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t42672DE0A49B88A2F671DBDB600E8D1AA199FECF * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1652A5139F256DD1CAE4052ABA0D21DDB71F0B88 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t42672DE0A49B88A2F671DBDB600E8D1AA199FECF * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t42672DE0A49B88A2F671DBDB600E8D1AA199FECF ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t42672DE0A49B88A2F671DBDB600E8D1AA199FECF * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1652A5139F256DD1CAE4052ABA0D21DDB71F0B88 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1652A5139F256DD1CAE4052ABA0D21DDB71F0B88 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1652A5139F256DD1CAE4052ABA0D21DDB71F0B88 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F, ___m_result_40)); }
	inline ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_2_t2F716F5DE92DE351DF0095CB60B7C0FA85A909C8  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item2_1), (void*)NULL);
	}
};

struct Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4C91294CDECF33075BCBA272FF04374B356ED6B3 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7F932D33A1D9DE6987E3225C9CA706F789F1FF66 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4C91294CDECF33075BCBA272FF04374B356ED6B3 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4C91294CDECF33075BCBA272FF04374B356ED6B3 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4C91294CDECF33075BCBA272FF04374B356ED6B3 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t7F932D33A1D9DE6987E3225C9CA706F789F1FF66 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t7F932D33A1D9DE6987E3225C9CA706F789F1FF66 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t7F932D33A1D9DE6987E3225C9CA706F789F1FF66 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F, ___m_result_40)); }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t46984FB48E7F4A7873D5006D3E547C453FC417CD * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t9FB9119855898574302D11A25F1AA03BDBDADD0D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C, ___m_result_40)); }
	inline ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item3_2), (void*)NULL);
		#endif
	}
};

struct Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBF7BE8E2C169BE3C7BEA50D8108E9BDCFE100916 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3591C28A3A1784DD7D9A5B8BB77A7800E7FFA98C * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tBF7BE8E2C169BE3C7BEA50D8108E9BDCFE100916 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tBF7BE8E2C169BE3C7BEA50D8108E9BDCFE100916 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tBF7BE8E2C169BE3C7BEA50D8108E9BDCFE100916 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t3591C28A3A1784DD7D9A5B8BB77A7800E7FFA98C * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t3591C28A3A1784DD7D9A5B8BB77A7800E7FFA98C ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t3591C28A3A1784DD7D9A5B8BB77A7800E7FFA98C * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297, ___m_result_40)); }
	inline ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_3_tA1B2B2D79BB9A2866DD4D2890E280C4B8DF3F34C  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item2_1), (void*)NULL);
		#endif
	}
};

struct Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t44E483F0A3F9AC62F0E76FBDA7C158A279AB5C23 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5327B213F95AFA744C39D47ADA63AD14FB966B3E * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t44E483F0A3F9AC62F0E76FBDA7C158A279AB5C23 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t44E483F0A3F9AC62F0E76FBDA7C158A279AB5C23 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t44E483F0A3F9AC62F0E76FBDA7C158A279AB5C23 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5327B213F95AFA744C39D47ADA63AD14FB966B3E * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5327B213F95AFA744C39D47ADA63AD14FB966B3E ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5327B213F95AFA744C39D47ADA63AD14FB966B3E * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13, ___m_result_40)); }
	inline ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092  get_m_result_40() const { return ___m_result_40; }
	inline ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ValueTuple_5_tC03A966BCCF577698D4862E43CEE647247992092  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item4_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___Item5_4), (void*)NULL);
		#endif
	}
};

struct Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t24824C666A75E5C8BF1E87AABAE1801F04F084A2 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tEE0B8A4A8105D5AA3534F2D0C4B428045CA296F1 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t24824C666A75E5C8BF1E87AABAE1801F04F084A2 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t24824C666A75E5C8BF1E87AABAE1801F04F084A2 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t24824C666A75E5C8BF1E87AABAE1801F04F084A2 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tEE0B8A4A8105D5AA3534F2D0C4B428045CA296F1 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tEE0B8A4A8105D5AA3534F2D0C4B428045CA296F1 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tEE0B8A4A8105D5AA3534F2D0C4B428045CA296F1 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525, ___m_result_40)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_result_40() const { return ___m_result_40; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t11C6470C2FADA26AA5936A409CFB70ABCC0ED5FD * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tEF9C6F030A39D90D2C3B088C2885BA1DF171A272 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t11C6470C2FADA26AA5936A409CFB70ABCC0ED5FD * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t11C6470C2FADA26AA5936A409CFB70ABCC0ED5FD ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t11C6470C2FADA26AA5936A409CFB70ABCC0ED5FD * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tEF9C6F030A39D90D2C3B088C2885BA1DF171A272 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tEF9C6F030A39D90D2C3B088C2885BA1DF171A272 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tEF9C6F030A39D90D2C3B088C2885BA1DF171A272 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.IPAddress[]>
struct Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC, ___m_result_40)); }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* get_m_result_40() const { return ___m_result_40; }
	inline IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(IPAddressU5BU5D_tCB5D2302BEB72DDB30825F9EF457D39EEA5001EB* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3D5120AC6C8EFAA404C741B04CA39A0262261715 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7F1A3C6C7962946F7157B160B2EFB65EE2AAF2B8 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3D5120AC6C8EFAA404C741B04CA39A0262261715 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3D5120AC6C8EFAA404C741B04CA39A0262261715 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3D5120AC6C8EFAA404C741B04CA39A0262261715 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t7F1A3C6C7962946F7157B160B2EFB65EE2AAF2B8 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t7F1A3C6C7962946F7157B160B2EFB65EE2AAF2B8 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t7F1A3C6C7962946F7157B160B2EFB65EE2AAF2B8 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerARF>
struct Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AnchorManagerARF_t8AC0C4631B6E98D557A6CFF87CCDC9A161894123 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6, ___m_result_40)); }
	inline AnchorManagerARF_t8AC0C4631B6E98D557A6CFF87CCDC9A161894123 * get_m_result_40() const { return ___m_result_40; }
	inline AnchorManagerARF_t8AC0C4631B6E98D557A6CFF87CCDC9A161894123 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(AnchorManagerARF_t8AC0C4631B6E98D557A6CFF87CCDC9A161894123 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD0F3B493C5F5E631DCAEF642C01D5902189ADC8 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t269EB395AF9902FA91C85CEB12D3BF19B3F7008B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFD0F3B493C5F5E631DCAEF642C01D5902189ADC8 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFD0F3B493C5F5E631DCAEF642C01D5902189ADC8 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFD0F3B493C5F5E631DCAEF642C01D5902189ADC8 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t269EB395AF9902FA91C85CEB12D3BF19B3F7008B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t269EB395AF9902FA91C85CEB12D3BF19B3F7008B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t269EB395AF9902FA91C85CEB12D3BF19B3F7008B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerXR>
struct Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	AnchorManagerXR_t622B5D869D8D4C33D4230599CF7527109D61381F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512, ___m_result_40)); }
	inline AnchorManagerXR_t622B5D869D8D4C33D4230599CF7527109D61381F * get_m_result_40() const { return ___m_result_40; }
	inline AnchorManagerXR_t622B5D869D8D4C33D4230599CF7527109D61381F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(AnchorManagerXR_t622B5D869D8D4C33D4230599CF7527109D61381F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t53466FD189E9BF9E367AD2ACE30E78D6AEA8E6A1 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD6E53BC0F56EC9CDB1D086A56E78567F4D856415 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t53466FD189E9BF9E367AD2ACE30E78D6AEA8E6A1 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t53466FD189E9BF9E367AD2ACE30E78D6AEA8E6A1 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t53466FD189E9BF9E367AD2ACE30E78D6AEA8E6A1 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tD6E53BC0F56EC9CDB1D086A56E78567F4D856415 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tD6E53BC0F56EC9CDB1D086A56E78567F4D856415 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tD6E53BC0F56EC9CDB1D086A56E78567F4D856415 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ApplicationInfo_t1CA32BDFE3CA0B6C52D851D69CE641A61E2FDF63 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19, ___m_result_40)); }
	inline ApplicationInfo_t1CA32BDFE3CA0B6C52D851D69CE641A61E2FDF63 * get_m_result_40() const { return ___m_result_40; }
	inline ApplicationInfo_t1CA32BDFE3CA0B6C52D851D69CE641A61E2FDF63 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ApplicationInfo_t1CA32BDFE3CA0B6C52D851D69CE641A61E2FDF63 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFAFD7BF14E3F34BDE7AB86EBB3A623E66CA8ED85 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t932D6C6279050FC00E5A91FFCB51E2438965F4B7 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tFAFD7BF14E3F34BDE7AB86EBB3A623E66CA8ED85 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tFAFD7BF14E3F34BDE7AB86EBB3A623E66CA8ED85 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tFAFD7BF14E3F34BDE7AB86EBB3A623E66CA8ED85 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t932D6C6279050FC00E5A91FFCB51E2438965F4B7 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t932D6C6279050FC00E5A91FFCB51E2438965F4B7 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t932D6C6279050FC00E5A91FFCB51E2438965F4B7 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};

// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() = 0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// ExitGames.Client.Photon.StructWrapping.StructWrapper
struct StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.StructWrapping.WrappedType ExitGames.Client.Photon.StructWrapping.StructWrapper::wrappedType
	int32_t ___wrappedType_0;
	// System.Type ExitGames.Client.Photon.StructWrapping.StructWrapper::ttype
	Type_t * ___ttype_1;

public:
	inline static int32_t get_offset_of_wrappedType_0() { return static_cast<int32_t>(offsetof(StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA, ___wrappedType_0)); }
	inline int32_t get_wrappedType_0() const { return ___wrappedType_0; }
	inline int32_t* get_address_of_wrappedType_0() { return &___wrappedType_0; }
	inline void set_wrappedType_0(int32_t value)
	{
		___wrappedType_0 = value;
	}

	inline static int32_t get_offset_of_ttype_1() { return static_cast<int32_t>(offsetof(StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA, ___ttype_1)); }
	inline Type_t * get_ttype_1() const { return ___ttype_1; }
	inline Type_t ** get_address_of_ttype_1() { return &___ttype_1; }
	inline void set_ttype_1(Type_t * value)
	{
		___ttype_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ttype_1), (void*)value);
	}
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>
struct StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	bool ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975, ___value_4)); }
	inline bool get_value_4() const { return ___value_4; }
	inline bool* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(bool value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_tB358E101C829CD76170A5CE89FBDED55F5189D35 * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>
struct StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	uint8_t ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7, ___value_4)); }
	inline uint8_t get_value_4() const { return ___value_4; }
	inline uint8_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(uint8_t value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_t53D65C805C4DC86FCA70DDA1CE101AE296BD492E * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Double>
struct StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	double ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91, ___value_4)); }
	inline double get_value_4() const { return ___value_4; }
	inline double* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(double value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_tDC75C6EB07C294D03BB501F76AE4899F232C2321 * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int16>
struct StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	int16_t ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B, ___value_4)); }
	inline int16_t get_value_4() const { return ___value_4; }
	inline int16_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int16_t value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_tBE175E36F7DEDB547321D3DEE495607488DB524B * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int32>
struct StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_t47088B1C402232D45431BF4F22963B00E3675A68 * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int64>
struct StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	int64_t ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA, ___value_4)); }
	inline int64_t get_value_4() const { return ___value_4; }
	inline int64_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int64_t value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_t37711578548B0AF71AFC4ED112E244D5B7B158C8 * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};


// ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Single>
struct StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5  : public StructWrapper_t428BBC7A2A74D26340E7B2BDDADB2EDD635E60BA
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::<ReturnPool>k__BackingField
	StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * ___U3CReturnPoolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.StructWrapping.Pooling ExitGames.Client.Photon.StructWrapping.StructWrapper`1::pooling
	int32_t ___pooling_3;
	// T ExitGames.Client.Photon.StructWrapping.StructWrapper`1::value
	float ___value_4;

public:
	inline static int32_t get_offset_of_U3CReturnPoolU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5, ___U3CReturnPoolU3Ek__BackingField_2)); }
	inline StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * get_U3CReturnPoolU3Ek__BackingField_2() const { return ___U3CReturnPoolU3Ek__BackingField_2; }
	inline StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 ** get_address_of_U3CReturnPoolU3Ek__BackingField_2() { return &___U3CReturnPoolU3Ek__BackingField_2; }
	inline void set_U3CReturnPoolU3Ek__BackingField_2(StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * value)
	{
		___U3CReturnPoolU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReturnPoolU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_pooling_3() { return static_cast<int32_t>(offsetof(StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5, ___pooling_3)); }
	inline int32_t get_pooling_3() const { return ___pooling_3; }
	inline int32_t* get_address_of_pooling_3() { return &___pooling_3; }
	inline void set_pooling_3(int32_t value)
	{
		___pooling_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5, ___value_4)); }
	inline float get_value_4() const { return ___value_4; }
	inline float* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(float value)
	{
		___value_4 = value;
	}
};

struct StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_StaticFields
{
public:
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> ExitGames.Client.Photon.StructWrapping.StructWrapper`1::staticPool
	StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * ___staticPool_5;

public:
	inline static int32_t get_offset_of_staticPool_5() { return static_cast<int32_t>(offsetof(StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_StaticFields, ___staticPool_5)); }
	inline StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * get_staticPool_5() const { return ___staticPool_5; }
	inline StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 ** get_address_of_staticPool_5() { return &___staticPool_5; }
	inline void set_staticPool_5(StructWrapperPool_1_t64DF3DF3E30B788DC82624034DC3E341156D8779 * value)
	{
		___staticPool_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticPool_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
IL2CPP_EXTERN_C  void AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
IL2CPP_EXTERN_C  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mD59604827A00FDB75E0D7AFABFFAAF3AB39C6455_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m5F3E4B7BA3F2EBEF85E0E2D6945194B6C70E3EA0_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m0DDC17943C1DD5893D5A733BC178F5AE619AB254_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m89A14530D2D11434DEEC77BC011670EEA066D40E_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m9BA8C8964AB0690C41C46BFAB8B5480325916A9A_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_gshared (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_m2966D277AD62C61C4986116CFBAD99F1687D0AEC_gshared (TaskToAsyncInfoAdapter_4_t0CE70C0493844A2A30B61B6D168C5F26A31D6C90 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_gshared (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_m3E24A763BD1C4B1A42E9AFDEF4931A9D527F3E18_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m7EFD629CE0B021E64491A331118D59008BFE0C16_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mBEA2162DDDFBD9FF36E685E04B1F97E8A36A6F3B_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_mE1B3E4C9F07339867F54B9D51A66E52F63008ACB_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_mAB9459977A157FD50FEEF7C4811407FA906D74FB_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mC58E993B3948220A27FB5C2528BD6F104842BC8B_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 * ___handler0, const RuntimeMethod* method);
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Progress_mC0FEA4A047544656B6A07AFEE34671D276473F52_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m28369391F441964E38A0053E665C874F70821AF1_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.Object,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_m37DE107A0FE72222C9B56E39CA0FF446D967080F_gshared (TaskToAsyncInfoAdapter_4_t0B3A8EFF1160DE968D1A9C82B3C03E7C8B0538F7 * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.Object,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncOperationWithProgressAdapter_2_GetResults_m7E79420C9150ACFFCA16104A70728EFB85166244_gshared (TaskToAsyncOperationWithProgressAdapter_2_tEAFCDD13476943BF99DFC9BA2FFBA729999F23DE * __this, const RuntimeMethod* method);
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncInfoAdapter_4_get_Id_mA8C390ED33BB4FBE050FA8F92F40962F8B9CF9B4_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToAsyncInfoAdapter_4_get_Status_m565F4CFBEB5DBB42CD8DEBE41059D7002DD7F8D5_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m76FF10FE6E41EC4042742FDBAA9A708613AC5D81_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Cancel_m24CCED8AEFAEF55F20F17D24843E900DA8962973_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncInfoAdapter_4_Close_m86353662CEC2D70206203087B35D627AF9FA7FEE_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ___handler0, const RuntimeMethod* method);
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Progress_mF20E1EC04BD4F07A7ABE989524F271EDF06FFA54_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ___handler0, const RuntimeMethod* method);
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.UInt32,System.UInt32>::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToAsyncInfoAdapter_4_get_Completed_mC22266F35AD1CCE0D5FE56C0069F7CDCCFE19436_gshared (TaskToAsyncInfoAdapter_4_tA6F526855DE3A32E2B830F8C2BD44ADA0903BD0C * __this, const RuntimeMethod* method);
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_gshared (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, const RuntimeMethod* method);

// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mD59604827A00FDB75E0D7AFABFFAAF3AB39C6455_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m5F3E4B7BA3F2EBEF85E0E2D6945194B6C70E3EA0_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m0DDC17943C1DD5893D5A733BC178F5AE619AB254_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11 (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m89A14530D2D11434DEEC77BC011670EEA066D40E_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m9BA8C8964AB0690C41C46BFAB8B5480325916A9A_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::Windows.Foundation.IAsyncOperation<TResult>.put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
inline void TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64 (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *, AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>,System.VoidReferenceTypeParameter,System.Boolean,System.VoidValueTypeParameter>::get_Completed()
inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * (*) (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m2966D277AD62C61C4986116CFBAD99F1687D0AEC_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>::GetResults()
inline bool TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *, const RuntimeMethod*))TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_m3E24A763BD1C4B1A42E9AFDEF4931A9D527F3E18_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m7EFD629CE0B021E64491A331118D59008BFE0C16_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_mBEA2162DDDFBD9FF36E685E04B1F97E8A36A6F3B_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104 (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_mE1B3E4C9F07339867F54B9D51A66E52F63008ACB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_mAB9459977A157FD50FEEF7C4811407FA906D74FB_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mC58E993B3948220A27FB5C2528BD6F104842BC8B_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_mC0FEA4A047544656B6A07AFEE34671D276473F52_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16 (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m28369391F441964E38A0053E665C874F70821AF1_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928 (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * (*) (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_m37DE107A0FE72222C9B56E39CA0FF446D967080F_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
inline RuntimeObject* TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_m7E79420C9150ACFFCA16104A70728EFB85166244_gshared)(__this, method);
}
// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Id()
inline uint32_t TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Id_mA8C390ED33BB4FBE050FA8F92F40962F8B9CF9B4_gshared)(__this, method);
}
// Windows.Foundation.AsyncStatus System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Status()
inline int32_t TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Status_m565F4CFBEB5DBB42CD8DEBE41059D7002DD7F8D5_gshared)(__this, method);
}
// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_ErrorCode()
inline Exception_t * TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  Exception_t * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_ErrorCode_m76FF10FE6E41EC4042742FDBAA9A708613AC5D81_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Cancel()
inline void TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07 (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Cancel_m24CCED8AEFAEF55F20F17D24843E900DA8962973_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::Close()
inline void TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_Close_m86353662CEC2D70206203087B35D627AF9FA7FEE_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_gshared)(__this, ___handler0, method);
}
// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Progress()
inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Progress_mF20E1EC04BD4F07A7ABE989524F271EDF06FFA54_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::Windows.Foundation.IAsyncOperationWithProgress<TResult,TProgress>.put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
inline void TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ___handler0, const RuntimeMethod* method)
{
	((  void (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_gshared)(__this, ___handler0, method);
}
// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>,Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>,System.UInt32,System.UInt32>::get_Completed()
inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __this, const RuntimeMethod* method)
{
	return ((  AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * (*) (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Completed_mC22266F35AD1CCE0D5FE56C0069F7CDCCFE19436_gshared)(__this, method);
}
// TResult System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>::GetResults()
inline uint32_t TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9 (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *, const RuntimeMethod*))TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_gshared)(__this, method);
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<ExitGames.Client.Photon.ByteArraySlice>
struct Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t5F4BD9477DDC56D9428ADFFD61354FCFE2E78588::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937(IIterator_1_tE84305D19EB46B9DD6D1B86BE7195EBA9B09BF2D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDDCB90F64D3007CB280F2A112BFB11FEDF4CF937_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tBEA5524B8371DDAFEC118806A080EFA41E3AEDAD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<System.Collections.IEnumerator>
struct Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tBCC1326B81560D0FECD906C8415A22D24904945B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer>
struct Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t2140951A29C124294097BBEB252D5729A1A4A8E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.UI.LayoutRebuilder>
struct Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t13BA44E007A8CC2A80E8739C09DBEBDF18E2DABA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<ExitGames.Client.Photon.NCommand>
struct Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t432942A69DDC41D691377D2D49C291D38EC4B5C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Stack`1<UnityEngine.InputSystem.InputSystem/State>
struct Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Stack_1_t9E4947B989137176C10F61A420922C63154C469A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Stack_1_t9E4947B989137176C10F61A420922C63154C469A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Boolean>
struct StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t7486F3EB45E9022A500E6F90B06FC9E84F670975_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Byte>
struct StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t2E178130F58A3671FEF0E71FC1605E4822AFCFE7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Double>
struct StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t910A92A06E829EC7E2E0EABD9401817046833D91_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int16>
struct StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t49FC0FD95A557B93C028631E2A65BB1D6234FA7B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int32>
struct StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t66C666975147192EEB8996E78E7314E30D87A4B8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Int64>
struct StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_tF8781ECB093D88EC4EBF45C0EBBF6B179FFDB9FA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for ExitGames.Client.Photon.StructWrapping.StructWrapper`1<System.Single>
struct StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) StructWrapper_1_t091A45E2DB0131BFF3B66E657A74900DA48BF8A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationAdapter`1<System.Boolean>
struct TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF
{
	inline TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m6B11AC1DEC95655729E1A54E031D1647F0CAD39F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_mCA548B4B3A483C1000143BE8F469054E537C7683_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mC3D22C84608E07996CA81F4505DAF8E35DF93AB8_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mC94B71F3F2289FB7BC45F71E7271F54B6DF4CB11_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A(__thisValue, TaskToAsyncInfoAdapter_4_Close_mCF79C5A0CAF7B28BED635275892CDDFDFE05AB5A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __thisValue = (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *)GetManagedObjectInline();
			TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationAdapter_1_Windows_Foundation_IAsyncOperationU3CTResultU3E_put_Completed_m242CBAEE17190E5A5D216DEF8585AB11A9FBBC64_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB * __thisValue = (TaskToAsyncInfoAdapter_4_tCDD3CA6237DC287032EEC5407E2EF45E92381DBB *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m7D5ABE2831C85E1980E85ED7E890194486B3D44B_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 * __thisValue = (TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3 *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA(__thisValue, TaskToAsyncOperationAdapter_1_GetResults_mB639E9C242C67604B5818385FDC69B08BC24C6AA_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationAdapter_1_tE079EC13EC3FB202D49A22A4B458DAE3DCBAD6C3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93
{
	inline TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m5606103EEEC0C5CCA33B9AFB991BA6C5EA9A6BAF_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_m48E9DADC92E479763D3B2737B4EC07E20D01B41C_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_m1F5650F2C7293DE3D71EF1597527B3CFF20E28FE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_m750C55F7BD2954E109F2DCE2C44CCC1D40F80104_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F(__thisValue, TaskToAsyncInfoAdapter_4_Close_m73D27EDC995149EF44B3805FD8440C2723F8590F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_m27086D69E97C66984E7C0ACE861D68921D5AF3DD_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m633097FA3C0A26ACAE4D5FC19DF0D12C43EE1C6B_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_mDB47EA7DF7293EADE3135E3BB4AFE55EC7AB7E16_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D * __thisValue = (TaskToAsyncInfoAdapter_4_t38F816672E387A6D668D6DCDA4F32E907ECA4B4D *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_mCFD13665F25FE8FDE697685A977D6AD80451B928_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_m8BC6CCF731AB8A80917C2987C80B916A7ECEC4FB_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_t1ED7E4DC66890F30AC72B6F1482559DF50781B9A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.TaskToAsyncOperationWithProgressAdapter`2<System.UInt32,System.UInt32>
struct TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper>, IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB
{
	inline TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IAsyncInfo_tF2AAFC1727C480C2FB5E3E8FA00BF9CB3646F2E4::IID;
		interfaceIds[1] = IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m3863CB02C1CDBA1050DAAE7311DF9F3E8BCD9D74(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867(__thisValue, TaskToAsyncInfoAdapter_4_get_Id_m85C884BF337D9D5230832FFAB2E0D3FB5B3DC867_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m7E8AA78C1877123B35EAFA58FEF0FA86D8A97583(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		int32_t returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37(__thisValue, TaskToAsyncInfoAdapter_4_get_Status_mEB7A427430E166EA6099EBC0454ABE15761F2F37_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m37ACAD97746ABA13006C88EDF582C3B73B68D806(int32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		Exception_t * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F(__thisValue, TaskToAsyncInfoAdapter_4_get_ErrorCode_mC2A33A410F738922DBE587AF21784CCA4E26109F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = (returnValue != NULL ? reinterpret_cast<RuntimeException*>(returnValue)->hresult : IL2CPP_S_OK);
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m53FE58D39AE61799A01EE7ECB9429CB3EE01EEFE() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07(__thisValue, TaskToAsyncInfoAdapter_4_Cancel_mC0880CF2CCB9BA9DFC0A9FA347FDECA717E93C07_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mD8F3D2C7103B340A9FF16F58333E33643F552635() IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A(__thisValue, TaskToAsyncInfoAdapter_4_Close_m9DEFAE3466E0942AF5C3B613BE50C3FF22FFE47A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Progress_mD2018C9C51F7F5B35530369F6563B1748BA7732D_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C(__thisValue, TaskToAsyncInfoAdapter_4_get_Progress_m18B773C9A7C5615FDC4C1122128FEDCB4905F88C_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___handler0' to managed representation
		AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * ____handler0_unmarshaled = NULL;
		if (___handler0 != NULL)
		{
			Il2CppIManagedObjectHolder* imanagedObject = NULL;
			il2cpp_hresult_t hr = (___handler0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
			if (IL2CPP_HR_SUCCEEDED(hr))
			{
				____handler0_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *>(imanagedObject->GetManagedObject());
				imanagedObject->Release();
			}
			else
			{
				____handler0_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_il2cpp_TypeInfo_var);
				____handler0_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_NativeInvoker);
				intptr_t methodInfo;
				methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
				____handler0_unmarshaled->set_method_3(methodInfo);
				____handler0_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66>(___handler0, __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var));
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____handler0_unmarshaled->get_m_target_2()), IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper::IID, ___handler0);
			}
		}
		else
		{
			____handler0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C(__thisValue, ____handler0_unmarshaled, TaskToAsyncOperationWithProgressAdapter_2_Windows_Foundation_IAsyncOperationWithProgressU3CTResultU2CTProgressU3E_put_Completed_m6B828E615ADCE32B74416FB13B7975FF8A76000C_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&__Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * returnValue;
		try
		{
			TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 * __thisValue = (TaskToAsyncInfoAdapter_4_t9F113E61CEAAA15E0A3BBB30925A2A3394B744A5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F(__thisValue, TaskToAsyncInfoAdapter_4_get_Completed_m6F5458DDA05EC75D4C3774C4E2F1635B404C9F2F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			RuntimeObject* target = returnValue->get_m_target_2();

			if (target != NULL && returnValue->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t0219610CDD7FF34DAF4380555649ADA03ACF3F66_il2cpp_TypeInfo_var)
			{
				il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint32_t returnValue;
		try
		{
			TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 * __thisValue = (TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5 *)GetManagedObjectInline();
			returnValue = TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9(__thisValue, TaskToAsyncOperationWithProgressAdapter_2_GetResults_mA6A27A34FDB489B8EFFC2A7CD3FC2E8A299026F9_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TaskToAsyncOperationWithProgressAdapter_2_tBE03854F722BD988D75754D476A5F738B5B19BA5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t09DC8FB35E7B22FEEE14ADC1C7635D6383925A35_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IReadOnlyDictionary`2<System.String,Windows.Perception.Spatial.SpatialAnchor>>
struct Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t1FC19970E5A98DA7F95DF5AE0CE9374037848DD2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<UnityEngine.Vector3>>
struct Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tAF3C24927F30C219A080776A91C70D9D36BB282B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>>
struct Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA0EA46D40632973F9F646617DFEC0D1CA114FCFA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>>
struct Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tED731EAB7D7EFFDDCCF3DBB2843566C8B0A5C581_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t55E41C2C75FEA322373D187DB4C736126BEC20FC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Boolean,System.Net.WebOperation>>
struct Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t04D317EDE427CA8A210E21A15F809E705C66D08F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`2<System.Int32,System.Int32>>
struct Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tB6E0730C54CFC03F4471315756CF85D05B71C05F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Net.WebHeaderCollection,System.Byte[],System.Int32>>
struct Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5CCFAF93FF7B2F74A89A8432898AD5F3D0132297_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.ValueTuple`5<System.Net.HttpWebResponse,System.Boolean,System.Boolean,System.Net.BufferOffsetSize,System.Net.WebOperation>>
struct Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tDEAB8548D192DBB144FB5A8A3D04AD2EEB5E3D13_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Byte[]>
struct Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t42A068F8CEDED07EE9C45612BD13D4E4588B6525_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.IPAddress[]>
struct Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEDC3DA47649D027A4932A825FE5C3908514B70EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerARF>
struct Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5C4585D155F0F2690CC3F477147930DDE89E81C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.AnchorManagerXR>
struct Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0613128EC4BFDD4718122BF03BA1A187FA135512_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.ApplicationInfo>
struct Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t2572897E9CCF9AEC9712677B7B03C04CC0361E19_ComCallableWrapper(obj));
}
