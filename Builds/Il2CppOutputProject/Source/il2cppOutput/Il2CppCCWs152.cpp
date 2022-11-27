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

// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_1_t6C075EDA0B0A44F2CBF078F1E3AEA8C278503FF8;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t7348C84774C64EB1AF713A48F54306E633930A69;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_t6DF3B38A83F8F371B6AE24A88CE5EB47B495F16C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t6B7731B4656BF4EB52545DCABC082EA978FA117F;
// System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Func_1_tB655891E638A7E4D88E04E4AD4ECCCE2D812C718;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct IObserver_1_t5425E575A06C1083B22A11C39C99B4A9EE4A0C29;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_t3D26ED942CAF987C65019F7FF198787AD26DA283;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct List_1_t0454C8038BF9E989EB10B21AA958FC1362E5D460;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_t200C70CE862FA6E0DBEFF218216B9F2457FF8AA7;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA6E635A113857F0F73E5CF81B8E2C63EF61684C0;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_tE877AE925451CDDBD520DFD798FDBE1D896AD193;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_tD8D7A2EFD4DB8A8F1672378E5A2596A4A7726102;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t28DD1A13B7B7ED458C7436DFF554C297EB0FF0FA;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tD261D929DA8A0944B1219F9D547B6A242AFF7FA2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t7F0507B7CE0C9CDF14089C77B4F5A079AE031B4D;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// UnityEngine.InputSystem.InputControl
struct InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2;
// UnityEngine.InputSystem.LowLevel.InputEventTrace
struct InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.InputSystem.InputManager
struct InputManager_t07B6A59E26C372377A1C5414E617AF2F7F50F719;
// UnityEngine.InputSystem.InputRemoting
struct InputRemoting_t4F4330798225B7534C924162FC98062E279F8FEA;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase
struct MixedRealityKeyboardBase_t22DAD8D1BD112FDC8C0CD7029501DEA1175BE645;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview
struct MixedRealityKeyboardPreview_tAA178DB47CF51E64276B204A3578E0B61DB7C6D9;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer
struct MixedRealityLineRenderer_tB8477F07B7A1224169780EEA93F630CF3634DB41;
// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent
struct MixedRealitySceneContent_t28A703AB1FC9551FE0B7558B5D560A58106B2B35;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget
struct MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Photon.Pun.UtilityScripts.OnClickDestroy
struct OnClickDestroy_t8B872045DFBBC866C57CD54241B77EB3D7096706;
// Photon.Pun.UtilityScripts.OnClickRpc
struct OnClickRpc_t72BA5BCE20F703B4555A1F1C63F17C4FCE6AC7E4;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver
struct OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1;
// MRTK.Tutorials.GettingStarted.PartAssemblyController
struct PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573;
// Photon.Pun.Demo.SlotRacer.PlayerControl
struct PlayerControl_t8B230BDFE0C7680B8A367CEE3E0BA5769E246AC6;
// Photon.Pun.Demo.Cockpit.PlayerDetailsController
struct PlayerDetailsController_t7A0E3CEA09D598B319E4236F23DAFCF0463D2C03;
// Photon.Pun.Demo.Cockpit.PlayerListCell
struct PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4;
// Photon.Pun.Demo.Cockpit.PlayerListView
struct PlayerListView_t0111C2A96F46ED873A5F7398600791181C1FC160;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2
struct PressableButtonHoloLens2_tFFEC175C31062EF33B7F92E924FE8DA92C954670;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098;
// Photon.Pun.Demo.Cockpit.PropertyCell
struct PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22;
// Photon.Pun.Demo.Cockpit.PropertyListenerBase
struct PropertyListenerBase_tFB805C9C3AF674AA82AEAF90EA8FA4E4C8EA8565;
// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight
struct ProximityLight_t719C5F260C41BB12FDEF5C8CC99B65A459777E08;
// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler
struct PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269;
// Photon.Pun.Demo.Cockpit.PunCockpit
struct PunCockpit_tCAF46CD1CBFA7228E350044B4128ED199050A123;
// Photon.Pun.Demo.Cockpit.PunCockpitEmbed
struct PunCockpitEmbed_t642D18FA7FEADA86C1DAFF7F111C71287F21F24E;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Photon.Pun.Demo.Cockpit.RegionListCell
struct RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489;
// Photon.Realtime.RegionPinger
struct RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139;
// UnityEngine.InputSystem.RemoteInputPlayerConnection
struct RemoteInputPlayerConnection_t72CD61AA9DF2E54B63D9B99F80DBBE2005D62A14;
// System.Resources.ResourceFallbackManager
struct ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652;
// Photon.Pun.Demo.Cockpit.RoomListCell
struct RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99;
// Photon.Pun.Demo.Cockpit.RoomListView
struct RoomListView_t79B4FB71B46910DF2E7D9C3CD5D20F3D8DDB8F78;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint
struct RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C;
// Scripts.RouteManipulator
struct RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F;
// Scripts.ScrollRouteMenuPopulator
struct ScrollRouteMenuPopulator_tDDC210B560C226C2C86F60BD8F6E8D5F9E2B1251;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection
struct ScrollingObjectCollection_t07ADE5E758B67804F7B0C581CB25B2ACE62BC22B;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t8D2323983B85594F1037C020D3497109700B78DF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct DeviceRequirement_t441D2D75449ABE8DCB7178E3FAB2D4E04E081999_marshaled_com;
struct DeviceRequirement_t441D2D75449ABE8DCB7178E3FAB2D4E04E081999_marshaled_pinvoke;
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
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;


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
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) = 0;
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
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// System.ComponentModel.License
struct License_tB4FE2B5F9E796E97586FCED9751B0FDF0A4E7832  : public RuntimeObject
{
public:

public:
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

// UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573  : public RuntimeObject
{
public:
	// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver::observer
	RuntimeObject* ___observer_0;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}
};


// UnityEngine.UI.InputField/<CaretBlink>d__164
struct U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__164::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__164::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__164::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.InputField/<CaretBlink>d__164::<blinkPeriod>5__1
	float ___U3CblinkPeriodU3E5__1_3;
	// System.Boolean UnityEngine.UI.InputField/<CaretBlink>d__164::<blinkState>5__2
	bool ___U3CblinkStateU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331, ___U3CU3E4__this_2)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CblinkPeriodU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331, ___U3CblinkPeriodU3E5__1_3)); }
	inline float get_U3CblinkPeriodU3E5__1_3() const { return ___U3CblinkPeriodU3E5__1_3; }
	inline float* get_address_of_U3CblinkPeriodU3E5__1_3() { return &___U3CblinkPeriodU3E5__1_3; }
	inline void set_U3CblinkPeriodU3E5__1_3(float value)
	{
		___U3CblinkPeriodU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CblinkStateU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331, ___U3CblinkStateU3E5__2_4)); }
	inline bool get_U3CblinkStateU3E5__2_4() const { return ___U3CblinkStateU3E5__2_4; }
	inline bool* get_address_of_U3CblinkStateU3E5__2_4() { return &___U3CblinkStateU3E5__2_4; }
	inline void set_U3CblinkStateU3E5__2_4(bool value)
	{
		___U3CblinkStateU3E5__2_4 = value;
	}
};


// UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputRemoting UnityEngine.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_t4F4330798225B7534C924162FC98062E279F8FEA * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449, ___owner_0)); }
	inline InputRemoting_t4F4330798225B7534C924162FC98062E279F8FEA * get_owner_0() const { return ___owner_0; }
	inline InputRemoting_t4F4330798225B7534C924162FC98062E279F8FEA ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(InputRemoting_t4F4330798225B7534C924162FC98062E279F8FEA * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167
struct U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167::<>4__this
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A, ___U3CU3E4__this_3)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157
struct U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157::<>4__this
	Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063, ___U3CU3E4__this_3)); }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_tD2A907D197C8CF205155CEA605A6245300536BA2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;
	// UnityEngine.UI.LayoutGroup UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>4__this
	LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E4__this_3)); }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(LayoutGroup_t63C978964192B57EFC660D5FDA03DEE89DDC1AE2 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___list_0)); }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * get_list_0() const { return ___list_0; }
	inline ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_tE20433FD2535BBE239BB4AA3B32BE3EBEEDCF47B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeKeyValueCollection::list
	ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list_0;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919, ___list_0)); }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * get_list_0() const { return ___list_0; }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>4__this
	MixedRealityKeyboardPreview_tAA178DB47CF51E64276B204A3578E0B61DB7C6D9 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardPreview_tAA178DB47CF51E64276B204A3578E0B61DB7C6D9 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardPreview_tAA178DB47CF51E64276B204A3578E0B61DB7C6D9 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardPreview_tAA178DB47CF51E64276B204A3578E0B61DB7C6D9 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::targetAlphaPercentage
	float ___targetAlphaPercentage_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::animationLength
	float ___animationLength_3;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>4__this
	MixedRealityLineRenderer_tB8477F07B7A1224169780EEA93F630CF3634DB41 * ___U3CU3E4__this_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<currentTime>5__1
	float ___U3CcurrentTimeU3E5__1_5;
	// UnityEngine.GradientAlphaKey[] Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<fadedKeys>5__2
	GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ___U3CfadedKeysU3E5__2_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<startAlpha>5__3
	float ___U3CstartAlphaU3E5__3_7;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<percentageComplete>5__4
	float ___U3CpercentageCompleteU3E5__4_8;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<scalar>5__5
	float ___U3CscalarU3E5__5_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<i>5__6
	int32_t ___U3CiU3E5__6_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_targetAlphaPercentage_2() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___targetAlphaPercentage_2)); }
	inline float get_targetAlphaPercentage_2() const { return ___targetAlphaPercentage_2; }
	inline float* get_address_of_targetAlphaPercentage_2() { return &___targetAlphaPercentage_2; }
	inline void set_targetAlphaPercentage_2(float value)
	{
		___targetAlphaPercentage_2 = value;
	}

	inline static int32_t get_offset_of_animationLength_3() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___animationLength_3)); }
	inline float get_animationLength_3() const { return ___animationLength_3; }
	inline float* get_address_of_animationLength_3() { return &___animationLength_3; }
	inline void set_animationLength_3(float value)
	{
		___animationLength_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CU3E4__this_4)); }
	inline MixedRealityLineRenderer_tB8477F07B7A1224169780EEA93F630CF3634DB41 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline MixedRealityLineRenderer_tB8477F07B7A1224169780EEA93F630CF3634DB41 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(MixedRealityLineRenderer_tB8477F07B7A1224169780EEA93F630CF3634DB41 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CcurrentTimeU3E5__1_5)); }
	inline float get_U3CcurrentTimeU3E5__1_5() const { return ___U3CcurrentTimeU3E5__1_5; }
	inline float* get_address_of_U3CcurrentTimeU3E5__1_5() { return &___U3CcurrentTimeU3E5__1_5; }
	inline void set_U3CcurrentTimeU3E5__1_5(float value)
	{
		___U3CcurrentTimeU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CfadedKeysU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CfadedKeysU3E5__2_6)); }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* get_U3CfadedKeysU3E5__2_6() const { return ___U3CfadedKeysU3E5__2_6; }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748** get_address_of_U3CfadedKeysU3E5__2_6() { return &___U3CfadedKeysU3E5__2_6; }
	inline void set_U3CfadedKeysU3E5__2_6(GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* value)
	{
		___U3CfadedKeysU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfadedKeysU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartAlphaU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CstartAlphaU3E5__3_7)); }
	inline float get_U3CstartAlphaU3E5__3_7() const { return ___U3CstartAlphaU3E5__3_7; }
	inline float* get_address_of_U3CstartAlphaU3E5__3_7() { return &___U3CstartAlphaU3E5__3_7; }
	inline void set_U3CstartAlphaU3E5__3_7(float value)
	{
		___U3CstartAlphaU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3CpercentageCompleteU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CpercentageCompleteU3E5__4_8)); }
	inline float get_U3CpercentageCompleteU3E5__4_8() const { return ___U3CpercentageCompleteU3E5__4_8; }
	inline float* get_address_of_U3CpercentageCompleteU3E5__4_8() { return &___U3CpercentageCompleteU3E5__4_8; }
	inline void set_U3CpercentageCompleteU3E5__4_8(float value)
	{
		___U3CpercentageCompleteU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CscalarU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CscalarU3E5__5_9)); }
	inline float get_U3CscalarU3E5__5_9() const { return ___U3CscalarU3E5__5_9; }
	inline float* get_address_of_U3CscalarU3E5__5_9() { return &___U3CscalarU3E5__5_9; }
	inline void set_U3CscalarU3E5__5_9(float value)
	{
		___U3CscalarU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF, ___U3CiU3E5__6_10)); }
	inline int32_t get_U3CiU3E5__6_10() const { return ___U3CiU3E5__6_10; }
	inline int32_t* get_address_of_U3CiU3E5__6_10() { return &___U3CiU3E5__6_10; }
	inline void set_U3CiU3E5__6_10(int32_t value)
	{
		___U3CiU3E5__6_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8
struct U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<>4__this
	MixedRealitySceneContent_t28A703AB1FC9551FE0B7558B5D560A58106B2B35 * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneContent_t28A703AB1FC9551FE0B7558B5D560A58106B2B35 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneContent_t28A703AB1FC9551FE0B7558B5D560A58106B2B35 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneContent_t28A703AB1FC9551FE0B7558B5D560A58106B2B35 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>4__this
	MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * ___U3CU3E4__this_3;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>s__1
	SystemTypeU5BU5D_tD8D7A2EFD4DB8A8F1672378E5A2596A4A7726102* ___U3CU3Es__1_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>s__2
	int32_t ___U3CU3Es__2_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<systemType>5__3
	SystemType_t8D2323983B85594F1037C020D3497109700B78DF * ___U3CsystemTypeU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3Es__1_4)); }
	inline SystemTypeU5BU5D_tD8D7A2EFD4DB8A8F1672378E5A2596A4A7726102* get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline SystemTypeU5BU5D_tD8D7A2EFD4DB8A8F1672378E5A2596A4A7726102** get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(SystemTypeU5BU5D_tD8D7A2EFD4DB8A8F1672378E5A2596A4A7726102* value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_5() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CU3Es__2_5)); }
	inline int32_t get_U3CU3Es__2_5() const { return ___U3CU3Es__2_5; }
	inline int32_t* get_address_of_U3CU3Es__2_5() { return &___U3CU3Es__2_5; }
	inline void set_U3CU3Es__2_5(int32_t value)
	{
		___U3CU3Es__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CsystemTypeU3E5__3_6() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20, ___U3CsystemTypeU3E5__3_6)); }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF * get_U3CsystemTypeU3E5__3_6() const { return ___U3CsystemTypeU3E5__3_6; }
	inline SystemType_t8D2323983B85594F1037C020D3497109700B78DF ** get_address_of_U3CsystemTypeU3E5__3_6() { return &___U3CsystemTypeU3E5__3_6; }
	inline void set_U3CsystemTypeU3E5__3_6(SystemType_t8D2323983B85594F1037C020D3497109700B78DF * value)
	{
		___U3CsystemTypeU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsystemTypeU3E5__3_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>4__this
	MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C, ___U3CU3E4__this_2)); }
	inline MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4
struct U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.UtilityScripts.OnClickDestroy Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4::<>4__this
	OnClickDestroy_t8B872045DFBBC866C57CD54241B77EB3D7096706 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B, ___U3CU3E4__this_2)); }
	inline OnClickDestroy_t8B872045DFBBC866C57CD54241B77EB3D7096706 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OnClickDestroy_t8B872045DFBBC866C57CD54241B77EB3D7096706 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OnClickDestroy_t8B872045DFBBC866C57CD54241B77EB3D7096706 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24
struct U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25
struct U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::shouldRestart
	bool ___shouldRestart_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_shouldRestart_2() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28, ___shouldRestart_2)); }
	inline bool get_shouldRestart_2() const { return ___shouldRestart_2; }
	inline bool* get_address_of_shouldRestart_2() { return &___shouldRestart_2; }
	inline void set_shouldRestart_2(bool value)
	{
		___shouldRestart_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::pathInStreamingAssets
	String_t* ___pathInStreamingAssets_2;
	// Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<>4__this
	OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * ___U3CU3E4__this_3;
	// System.Uri Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<fullUri>5__1
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CfullUriU3E5__1_4;
	// UnityEngine.Networking.UnityWebRequest Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7::<webRequest>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pathInStreamingAssets_2() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___pathInStreamingAssets_2)); }
	inline String_t* get_pathInStreamingAssets_2() const { return ___pathInStreamingAssets_2; }
	inline String_t** get_address_of_pathInStreamingAssets_2() { return &___pathInStreamingAssets_2; }
	inline void set_pathInStreamingAssets_2(String_t* value)
	{
		___pathInStreamingAssets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathInStreamingAssets_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CU3E4__this_3)); }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRSceneUnderstandingObserver_t5C36ECDE67DDA924919C463B2D7272E5B2215CB1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfullUriU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CfullUriU3E5__1_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CfullUriU3E5__1_4() const { return ___U3CfullUriU3E5__1_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CfullUriU3E5__1_4() { return &___U3CfullUriU3E5__1_4; }
	inline void set_U3CfullUriU3E5__1_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CfullUriU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfullUriU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9, ___U3CwebRequestU3E5__2_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3E5__2_5() const { return ___U3CwebRequestU3E5__2_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3E5__2_5() { return &___U3CwebRequestU3E5__2_5; }
	inline void set_U3CwebRequestU3E5__2_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_5), (void*)value);
	}
};


// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ____objects_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};


// MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6  : public RuntimeObject
{
public:
	// System.Int32 MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MRTK.Tutorials.GettingStarted.PartAssemblyController MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<>4__this
	PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * ___U3CU3E4__this_2;
	// UnityEngine.Transform MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25::<trans>5__1
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CtransU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CU3E4__this_2)); }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PartAssemblyController_t8DD1378DE2B5B04E1708CCE4F6D16FFC91E44573 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtransU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6, ___U3CtransU3E5__1_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CtransU3E5__1_3() const { return ___U3CtransU3E5__1_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CtransU3E5__1_3() { return &___U3CtransU3E5__1_3; }
	inline void set_U3CtransU3E5__1_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CtransU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtransU3E5__1_3), (void*)value);
	}
};


// Photon.Pun.Demo.SlotRacer.PlayerControl/<Start>d__12
struct U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.SlotRacer.PlayerControl/<Start>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.SlotRacer.PlayerControl/<Start>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.SlotRacer.PlayerControl Photon.Pun.Demo.SlotRacer.PlayerControl/<Start>d__12::<>4__this
	PlayerControl_t8B230BDFE0C7680B8A367CEE3E0BA5769E246AC6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086, ___U3CU3E4__this_2)); }
	inline PlayerControl_t8B230BDFE0C7680B8A367CEE3E0BA5769E246AC6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerControl_t8B230BDFE0C7680B8A367CEE3E0BA5769E246AC6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerControl_t8B230BDFE0C7680B8A367CEE3E0BA5769E246AC6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PlayerDetailsController/<UpdateUIPing>d__25
struct U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PlayerDetailsController/<UpdateUIPing>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PlayerDetailsController/<UpdateUIPing>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PlayerDetailsController Photon.Pun.Demo.Cockpit.PlayerDetailsController/<UpdateUIPing>d__25::<>4__this
	PlayerDetailsController_t7A0E3CEA09D598B319E4236F23DAFCF0463D2C03 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D, ___U3CU3E4__this_2)); }
	inline PlayerDetailsController_t7A0E3CEA09D598B319E4236F23DAFCF0463D2C03 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerDetailsController_t7A0E3CEA09D598B319E4236F23DAFCF0463D2C03 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerDetailsController_t7A0E3CEA09D598B319E4236F23DAFCF0463D2C03 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PlayerListCell/<Add>d__16
struct U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PlayerListCell/<Add>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PlayerListCell/<Add>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PlayerListCell Photon.Pun.Demo.Cockpit.PlayerListCell/<Add>d__16::<>4__this
	PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF, ___U3CU3E4__this_2)); }
	inline PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PlayerListCell/<Remove>d__17
struct U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PlayerListCell/<Remove>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PlayerListCell/<Remove>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PlayerListCell Photon.Pun.Demo.Cockpit.PlayerListCell/<Remove>d__17::<>4__this
	PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165, ___U3CU3E4__this_2)); }
	inline PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerListCell_t404123DC8BF6370EFAD528C2B762A45BF93042D4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PlayerListView/<UpdateUIPing>d__13
struct U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PlayerListView/<UpdateUIPing>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PlayerListView/<UpdateUIPing>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PlayerListView Photon.Pun.Demo.Cockpit.PlayerListView/<UpdateUIPing>d__13::<>4__this
	PlayerListView_t0111C2A96F46ED873A5F7398600791181C1FC160 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15, ___U3CU3E4__this_2)); }
	inline PlayerListView_t0111C2A96F46ED873A5F7398600791181C1FC160 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerListView_t0111C2A96F46ED873A5F7398600791181C1FC160 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerListView_t0111C2A96F46ED873A5F7398600791181C1FC160 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Deserializer
struct Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Deserializer::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Deserializer::<IncludePersistent>k__BackingField
	bool ___U3CIncludePersistentU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Deserializer::<IncludeTransient>k__BackingField
	bool ___U3CIncludeTransientU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481, ___U3CTimeU3Ek__BackingField_0)); }
	inline float get_U3CTimeU3Ek__BackingField_0() const { return ___U3CTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CTimeU3Ek__BackingField_0() { return &___U3CTimeU3Ek__BackingField_0; }
	inline void set_U3CTimeU3Ek__BackingField_0(float value)
	{
		___U3CTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIncludePersistentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481, ___U3CIncludePersistentU3Ek__BackingField_1)); }
	inline bool get_U3CIncludePersistentU3Ek__BackingField_1() const { return ___U3CIncludePersistentU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIncludePersistentU3Ek__BackingField_1() { return &___U3CIncludePersistentU3Ek__BackingField_1; }
	inline void set_U3CIncludePersistentU3Ek__BackingField_1(bool value)
	{
		___U3CIncludePersistentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIncludeTransientU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481, ___U3CIncludeTransientU3Ek__BackingField_2)); }
	inline bool get_U3CIncludeTransientU3Ek__BackingField_2() const { return ___U3CIncludeTransientU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIncludeTransientU3Ek__BackingField_2() { return &___U3CIncludeTransientU3Ek__BackingField_2; }
	inline void set_U3CIncludeTransientU3Ek__BackingField_2(bool value)
	{
		___U3CIncludeTransientU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Serializer
struct Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Serializer::<Time>k__BackingField
	float ___U3CTimeU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Serializer::<IncludePersistent>k__BackingField
	bool ___U3CIncludePersistentU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Serializer::<IncludeTransient>k__BackingField
	bool ___U3CIncludeTransientU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE, ___U3CTimeU3Ek__BackingField_0)); }
	inline float get_U3CTimeU3Ek__BackingField_0() const { return ___U3CTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CTimeU3Ek__BackingField_0() { return &___U3CTimeU3Ek__BackingField_0; }
	inline void set_U3CTimeU3Ek__BackingField_0(float value)
	{
		___U3CTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIncludePersistentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE, ___U3CIncludePersistentU3Ek__BackingField_1)); }
	inline bool get_U3CIncludePersistentU3Ek__BackingField_1() const { return ___U3CIncludePersistentU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIncludePersistentU3Ek__BackingField_1() { return &___U3CIncludePersistentU3Ek__BackingField_1; }
	inline void set_U3CIncludePersistentU3Ek__BackingField_1(bool value)
	{
		___U3CIncludePersistentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIncludeTransientU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE, ___U3CIncludeTransientU3Ek__BackingField_2)); }
	inline bool get_U3CIncludeTransientU3Ek__BackingField_2() const { return ___U3CIncludeTransientU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIncludeTransientU3Ek__BackingField_2() { return &___U3CIncludeTransientU3Ek__BackingField_2; }
	inline void set_U3CIncludeTransientU3Ek__BackingField_2(bool value)
	{
		___U3CIncludeTransientU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::fadeIn
	bool ___fadeIn_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::time
	float ___time_3;
	// Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2 Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<>4__this
	PressableButtonHoloLens2_tFFEC175C31062EF33B7F92E924FE8DA92C954670 * ___U3CU3E4__this_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<normalizedIntensity>5__1
	float ___U3CnormalizedIntensityU3E5__1_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<blendTime>5__2
	float ___U3CblendTimeU3E5__2_6;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23::<t>5__3
	float ___U3CtU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_fadeIn_2() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___fadeIn_2)); }
	inline bool get_fadeIn_2() const { return ___fadeIn_2; }
	inline bool* get_address_of_fadeIn_2() { return &___fadeIn_2; }
	inline void set_fadeIn_2(bool value)
	{
		___fadeIn_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CU3E4__this_4)); }
	inline PressableButtonHoloLens2_tFFEC175C31062EF33B7F92E924FE8DA92C954670 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline PressableButtonHoloLens2_tFFEC175C31062EF33B7F92E924FE8DA92C954670 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(PressableButtonHoloLens2_tFFEC175C31062EF33B7F92E924FE8DA92C954670 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnormalizedIntensityU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CnormalizedIntensityU3E5__1_5)); }
	inline float get_U3CnormalizedIntensityU3E5__1_5() const { return ___U3CnormalizedIntensityU3E5__1_5; }
	inline float* get_address_of_U3CnormalizedIntensityU3E5__1_5() { return &___U3CnormalizedIntensityU3E5__1_5; }
	inline void set_U3CnormalizedIntensityU3E5__1_5(float value)
	{
		___U3CnormalizedIntensityU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CblendTimeU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CblendTimeU3E5__2_6)); }
	inline float get_U3CblendTimeU3E5__2_6() const { return ___U3CblendTimeU3E5__2_6; }
	inline float* get_address_of_U3CblendTimeU3E5__2_6() { return &___U3CblendTimeU3E5__2_6; }
	inline void set_U3CblendTimeU3E5__2_6(float value)
	{
		___U3CblendTimeU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C, ___U3CtU3E5__3_7)); }
	inline float get_U3CtU3E5__3_7() const { return ___U3CtU3E5__3_7; }
	inline float* get_address_of_U3CtU3E5__3_7() { return &___U3CtU3E5__3_7; }
	inline void set_U3CtU3E5__3_7(float value)
	{
		___U3CtU3E5__3_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4::<>4__this
	ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919, ___U3CU3E4__this_2)); }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ProjectionOverride_t3C7D7219E40A3C91DDE6D766DDB009910F7BF098 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PropertyCell/<Add>d__8
struct U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PropertyCell/<Add>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PropertyCell/<Add>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PropertyCell Photon.Pun.Demo.Cockpit.PropertyCell/<Add>d__8::<>4__this
	PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D, ___U3CU3E4__this_2)); }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PropertyCell/<Remove>d__9
struct U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PropertyCell/<Remove>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PropertyCell/<Remove>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PropertyCell Photon.Pun.Demo.Cockpit.PropertyCell/<Remove>d__9::<>4__this
	PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD, ___U3CU3E4__this_2)); }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PropertyCell/<UpdateUIPing>d__7
struct U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PropertyCell/<UpdateUIPing>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PropertyCell/<UpdateUIPing>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PropertyCell Photon.Pun.Demo.Cockpit.PropertyCell/<UpdateUIPing>d__7::<>4__this
	PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB, ___U3CU3E4__this_2)); }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PropertyCell_tA997EAEFB8162BEEA7B442C2F43D760FF1A2DA22 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::pulseDuration
	float ___pulseDuration_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeBegin
	float ___fadeBegin_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::fadeSpeed
	float ___fadeSpeed_4;
	// Microsoft.MixedReality.Toolkit.Utilities.ProximityLight Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<>4__this
	ProximityLight_t719C5F260C41BB12FDEF5C8CC99B65A459777E08 * ___U3CU3E4__this_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22::<pulseTimer>5__1
	float ___U3CpulseTimerU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pulseDuration_2() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___pulseDuration_2)); }
	inline float get_pulseDuration_2() const { return ___pulseDuration_2; }
	inline float* get_address_of_pulseDuration_2() { return &___pulseDuration_2; }
	inline void set_pulseDuration_2(float value)
	{
		___pulseDuration_2 = value;
	}

	inline static int32_t get_offset_of_fadeBegin_3() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___fadeBegin_3)); }
	inline float get_fadeBegin_3() const { return ___fadeBegin_3; }
	inline float* get_address_of_fadeBegin_3() { return &___fadeBegin_3; }
	inline void set_fadeBegin_3(float value)
	{
		___fadeBegin_3 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_4() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___fadeSpeed_4)); }
	inline float get_fadeSpeed_4() const { return ___fadeSpeed_4; }
	inline float* get_address_of_fadeSpeed_4() { return &___fadeSpeed_4; }
	inline void set_fadeSpeed_4(float value)
	{
		___fadeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___U3CU3E4__this_5)); }
	inline ProximityLight_t719C5F260C41BB12FDEF5C8CC99B65A459777E08 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ProximityLight_t719C5F260C41BB12FDEF5C8CC99B65A459777E08 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ProximityLight_t719C5F260C41BB12FDEF5C8CC99B65A459777E08 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpulseTimerU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D, ___U3CpulseTimerU3E5__1_6)); }
	inline float get_U3CpulseTimerU3E5__1_6() const { return ___U3CpulseTimerU3E5__1_6; }
	inline float* get_address_of_U3CpulseTimerU3E5__1_6() { return &___U3CpulseTimerU3E5__1_6; }
	inline void set_U3CpulseTimerU3E5__1_6(float value)
	{
		___U3CpulseTimerU3E5__1_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<>4__this
	PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40::<t>5__1
	float ___U3CtU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB, ___U3CtU3E5__1_3)); }
	inline float get_U3CtU3E5__1_3() const { return ___U3CtU3E5__1_3; }
	inline float* get_address_of_U3CtU3E5__1_3() { return &___U3CtU3E5__1_3; }
	inline void set_U3CtU3E5__1_3(float value)
	{
		___U3CtU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41::<>4__this
	PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38::<>4__this
	PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<>4__this
	PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<timeSincePulseStarted>5__1
	float ___U3CtimeSincePulseStartedU3E5__1_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39::<delayTime>5__2
	float ___U3CdelayTimeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE, ___U3CU3E4__this_2)); }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PulseShaderHandler_tD4F5EE5ABDE9AC83E57A3171A0E4FB2349BD2269 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeSincePulseStartedU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE, ___U3CtimeSincePulseStartedU3E5__1_3)); }
	inline float get_U3CtimeSincePulseStartedU3E5__1_3() const { return ___U3CtimeSincePulseStartedU3E5__1_3; }
	inline float* get_address_of_U3CtimeSincePulseStartedU3E5__1_3() { return &___U3CtimeSincePulseStartedU3E5__1_3; }
	inline void set_U3CtimeSincePulseStartedU3E5__1_3(float value)
	{
		___U3CtimeSincePulseStartedU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CdelayTimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE, ___U3CdelayTimeU3E5__2_4)); }
	inline float get_U3CdelayTimeU3E5__2_4() const { return ___U3CdelayTimeU3E5__2_4; }
	inline float* get_address_of_U3CdelayTimeU3E5__2_4() { return &___U3CdelayTimeU3E5__2_4; }
	inline void set_U3CdelayTimeU3E5__2_4(float value)
	{
		___U3CdelayTimeU3E5__2_4 = value;
	}
};


// Photon.Pun.Demo.Cockpit.PunCockpit/<OnDropdownConnectAs_CB>d__99
struct U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PunCockpit/<OnDropdownConnectAs_CB>d__99::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PunCockpit/<OnDropdownConnectAs_CB>d__99::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PunCockpit Photon.Pun.Demo.Cockpit.PunCockpit/<OnDropdownConnectAs_CB>d__99::<>4__this
	PunCockpit_tCAF46CD1CBFA7228E350044B4128ED199050A123 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10, ___U3CU3E4__this_2)); }
	inline PunCockpit_tCAF46CD1CBFA7228E350044B4128ED199050A123 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PunCockpit_tCAF46CD1CBFA7228E350044B4128ED199050A123 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PunCockpit_tCAF46CD1CBFA7228E350044B4128ED199050A123 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.PunCockpitEmbed/<Start>d__6
struct U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PunCockpitEmbed/<Start>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PunCockpitEmbed/<Start>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.PunCockpitEmbed Photon.Pun.Demo.Cockpit.PunCockpitEmbed/<Start>d__6::<>4__this
	PunCockpitEmbed_t642D18FA7FEADA86C1DAFF7F111C71287F21F24E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E, ___U3CU3E4__this_2)); }
	inline PunCockpitEmbed_t642D18FA7FEADA86C1DAFF7F111C71287F21F24E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PunCockpitEmbed_t642D18FA7FEADA86C1DAFF7F111C71287F21F24E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PunCockpitEmbed_t642D18FA7FEADA86C1DAFF7F111C71287F21F24E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateAddition>d__10
struct U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateAddition>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateAddition>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.RegionListCell Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateAddition>d__10::<>4__this
	RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76, ___U3CU3E4__this_2)); }
	inline RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateRemove>d__11
struct U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateRemove>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateRemove>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.RegionListCell Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateRemove>d__11::<>4__this
	RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0, ___U3CU3E4__this_2)); }
	inline RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RegionListCell_t28831B59B1927C43001E5FA4DB8F181DC156D489 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17
struct U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874  : public RuntimeObject
{
public:
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Realtime.RegionPinger Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<>4__this
	RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * ___U3CU3E4__this_2;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<rttSum>5__1
	int32_t ___U3CrttSumU3E5__1_3;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<replyCount>5__2
	int32_t ___U3CreplyCountU3E5__2_4;
	// System.Diagnostics.Stopwatch Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<sw>5__3
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___U3CswU3E5__3_5;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<bestRtt>5__4
	int32_t ___U3CbestRttU3E5__4_6;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<worstRtt>5__5
	int32_t ___U3CworstRttU3E5__5_7;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<weighedRttSum>5__6
	int32_t ___U3CweighedRttSumU3E5__6_8;
	// System.Boolean Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<overtime>5__7
	bool ___U3CovertimeU3E5__7_9;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<rtt>5__8
	int32_t ___U3CrttU3E5__8_10;
	// System.Int32 Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<i>5__9
	int32_t ___U3CiU3E5__9_11;
	// System.Exception Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17::<e>5__10
	Exception_t * ___U3CeU3E5__10_12;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CU3E4__this_2)); }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RegionPinger_tD06051F26F25C7C0D8180DE64F5FC7B4B6DC6139 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrttSumU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CrttSumU3E5__1_3)); }
	inline int32_t get_U3CrttSumU3E5__1_3() const { return ___U3CrttSumU3E5__1_3; }
	inline int32_t* get_address_of_U3CrttSumU3E5__1_3() { return &___U3CrttSumU3E5__1_3; }
	inline void set_U3CrttSumU3E5__1_3(int32_t value)
	{
		___U3CrttSumU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CreplyCountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CreplyCountU3E5__2_4)); }
	inline int32_t get_U3CreplyCountU3E5__2_4() const { return ___U3CreplyCountU3E5__2_4; }
	inline int32_t* get_address_of_U3CreplyCountU3E5__2_4() { return &___U3CreplyCountU3E5__2_4; }
	inline void set_U3CreplyCountU3E5__2_4(int32_t value)
	{
		___U3CreplyCountU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CswU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CswU3E5__3_5)); }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * get_U3CswU3E5__3_5() const { return ___U3CswU3E5__3_5; }
	inline Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 ** get_address_of_U3CswU3E5__3_5() { return &___U3CswU3E5__3_5; }
	inline void set_U3CswU3E5__3_5(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * value)
	{
		___U3CswU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CswU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbestRttU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CbestRttU3E5__4_6)); }
	inline int32_t get_U3CbestRttU3E5__4_6() const { return ___U3CbestRttU3E5__4_6; }
	inline int32_t* get_address_of_U3CbestRttU3E5__4_6() { return &___U3CbestRttU3E5__4_6; }
	inline void set_U3CbestRttU3E5__4_6(int32_t value)
	{
		___U3CbestRttU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CworstRttU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CworstRttU3E5__5_7)); }
	inline int32_t get_U3CworstRttU3E5__5_7() const { return ___U3CworstRttU3E5__5_7; }
	inline int32_t* get_address_of_U3CworstRttU3E5__5_7() { return &___U3CworstRttU3E5__5_7; }
	inline void set_U3CworstRttU3E5__5_7(int32_t value)
	{
		___U3CworstRttU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CweighedRttSumU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CweighedRttSumU3E5__6_8)); }
	inline int32_t get_U3CweighedRttSumU3E5__6_8() const { return ___U3CweighedRttSumU3E5__6_8; }
	inline int32_t* get_address_of_U3CweighedRttSumU3E5__6_8() { return &___U3CweighedRttSumU3E5__6_8; }
	inline void set_U3CweighedRttSumU3E5__6_8(int32_t value)
	{
		___U3CweighedRttSumU3E5__6_8 = value;
	}

	inline static int32_t get_offset_of_U3CovertimeU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CovertimeU3E5__7_9)); }
	inline bool get_U3CovertimeU3E5__7_9() const { return ___U3CovertimeU3E5__7_9; }
	inline bool* get_address_of_U3CovertimeU3E5__7_9() { return &___U3CovertimeU3E5__7_9; }
	inline void set_U3CovertimeU3E5__7_9(bool value)
	{
		___U3CovertimeU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CrttU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CrttU3E5__8_10)); }
	inline int32_t get_U3CrttU3E5__8_10() const { return ___U3CrttU3E5__8_10; }
	inline int32_t* get_address_of_U3CrttU3E5__8_10() { return &___U3CrttU3E5__8_10; }
	inline void set_U3CrttU3E5__8_10(int32_t value)
	{
		___U3CrttU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CiU3E5__9_11)); }
	inline int32_t get_U3CiU3E5__9_11() const { return ___U3CiU3E5__9_11; }
	inline int32_t* get_address_of_U3CiU3E5__9_11() { return &___U3CiU3E5__9_11; }
	inline void set_U3CiU3E5__9_11(int32_t value)
	{
		___U3CiU3E5__9_11 = value;
	}

	inline static int32_t get_offset_of_U3CeU3E5__10_12() { return static_cast<int32_t>(offsetof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874, ___U3CeU3E5__10_12)); }
	inline Exception_t * get_U3CeU3E5__10_12() const { return ___U3CeU3E5__10_12; }
	inline Exception_t ** get_address_of_U3CeU3E5__10_12() { return &___U3CeU3E5__10_12; }
	inline void set_U3CeU3E5__10_12(Exception_t * value)
	{
		___U3CeU3E5__10_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__10_12), (void*)value);
	}
};


// UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.RemoteInputPlayerConnection UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::owner
	RemoteInputPlayerConnection_t72CD61AA9DF2E54B63D9B99F80DBBE2005D62A14 * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450, ___owner_0)); }
	inline RemoteInputPlayerConnection_t72CD61AA9DF2E54B63D9B99F80DBBE2005D62A14 * get_owner_0() const { return ___owner_0; }
	inline RemoteInputPlayerConnection_t72CD61AA9DF2E54B63D9B99F80DBBE2005D62A14 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(RemoteInputPlayerConnection_t72CD61AA9DF2E54B63D9B99F80DBBE2005D62A14 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC  : public RuntimeObject
{
public:
	// System.Int32 System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>2__current
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CU3E2__current_1;
	// System.Resources.ResourceFallbackManager System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<>4__this
	ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * ___U3CU3E4__this_2;
	// System.Globalization.CultureInfo System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<currentCulture>5__1
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___U3CcurrentCultureU3E5__1_3;
	// System.Boolean System.Resources.ResourceFallbackManager/<GetEnumerator>d__5::<reachedNeutralResourcesCulture>5__2
	bool ___U3CreachedNeutralResourcesCultureU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E2__current_1)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CU3E4__this_2)); }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ResourceFallbackManager_t519E633959AC8EE890105625261272326BED6652 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentCultureU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CcurrentCultureU3E5__1_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_U3CcurrentCultureU3E5__1_3() const { return ___U3CcurrentCultureU3E5__1_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_U3CcurrentCultureU3E5__1_3() { return &___U3CcurrentCultureU3E5__1_3; }
	inline void set_U3CcurrentCultureU3E5__1_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___U3CcurrentCultureU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentCultureU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC, ___U3CreachedNeutralResourcesCultureU3E5__2_4)); }
	inline bool get_U3CreachedNeutralResourcesCultureU3E5__2_4() const { return ___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline bool* get_address_of_U3CreachedNeutralResourcesCultureU3E5__2_4() { return &___U3CreachedNeutralResourcesCultureU3E5__2_4; }
	inline void set_U3CreachedNeutralResourcesCultureU3E5__2_4(bool value)
	{
		___U3CreachedNeutralResourcesCultureU3E5__2_4 = value;
	}
};


// Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateAddition>d__11
struct U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateAddition>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateAddition>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.RoomListCell Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateAddition>d__11::<>4__this
	RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB, ___U3CU3E4__this_2)); }
	inline RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateRemove>d__12
struct U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateRemove>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateRemove>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.RoomListCell Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateRemove>d__12::<>4__this
	RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64, ___U3CU3E4__this_2)); }
	inline RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RoomListCell_tF18175308FC0A23AB4DB6B2B832FFC7848D64E99 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Photon.Pun.Demo.Cockpit.RoomListView/<clearStatus>d__12
struct U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.RoomListView/<clearStatus>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.RoomListView/<clearStatus>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.Demo.Cockpit.RoomListView Photon.Pun.Demo.Cockpit.RoomListView/<clearStatus>d__12::<>4__this
	RoomListView_t79B4FB71B46910DF2E7D9C3CD5D20F3D8DDB8F78 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581, ___U3CU3E4__this_2)); }
	inline RoomListView_t79B4FB71B46910DF2E7D9C3CD5D20F3D8DDB8F78 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RoomListView_t79B4FB71B46910DF2E7D9C3CD5D20F3D8DDB8F78 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RoomListView_t79B4FB71B46910DF2E7D9C3CD5D20F3D8DDB8F78 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<>4__this
	RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29::<index>5__1
	int32_t ___U3CindexU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB, ___U3CU3E4__this_2)); }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CindexU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB, ___U3CindexU3E5__1_3)); }
	inline int32_t get_U3CindexU3E5__1_3() const { return ___U3CindexU3E5__1_3; }
	inline int32_t* get_address_of_U3CindexU3E5__1_3() { return &___U3CindexU3E5__1_3; }
	inline void set_U3CindexU3E5__1_3(int32_t value)
	{
		___U3CindexU3E5__1_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::index
	int32_t ___index_2;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30::<>4__this
	RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F, ___U3CU3E4__this_3)); }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Scripts.RouteManipulator/<DestroyObjectDelayed>d__25
struct U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64  : public RuntimeObject
{
public:
	// System.Int32 Scripts.RouteManipulator/<DestroyObjectDelayed>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Scripts.RouteManipulator/<DestroyObjectDelayed>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Scripts.RouteManipulator/<DestroyObjectDelayed>d__25::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_2;
	// System.Single Scripts.RouteManipulator/<DestroyObjectDelayed>d__25::time
	float ___time_3;
	// Scripts.RouteManipulator Scripts.RouteManipulator/<DestroyObjectDelayed>d__25::<>4__this
	RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64, ___gameObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64, ___U3CU3E4__this_4)); }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33
struct U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246  : public RuntimeObject
{
public:
	// System.Int32 Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.GameObject Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::loaderViz
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loaderViz_2;
	// System.Int32 Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::instancesPerFrame
	int32_t ___instancesPerFrame_3;
	// System.Collections.Generic.List`1<System.String> Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___names_4;
	// Scripts.ScrollRouteMenuPopulator Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::<>4__this
	ScrollRouteMenuPopulator_tDDC210B560C226C2C86F60BD8F6E8D5F9E2B1251 * ___U3CU3E4__this_5;
	// System.Int32 Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::<currItemCount>5__1
	int32_t ___U3CcurrItemCountU3E5__1_6;
	// System.Int32 Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33::<i>5__2
	int32_t ___U3CiU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_loaderViz_2() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___loaderViz_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loaderViz_2() const { return ___loaderViz_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loaderViz_2() { return &___loaderViz_2; }
	inline void set_loaderViz_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loaderViz_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loaderViz_2), (void*)value);
	}

	inline static int32_t get_offset_of_instancesPerFrame_3() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___instancesPerFrame_3)); }
	inline int32_t get_instancesPerFrame_3() const { return ___instancesPerFrame_3; }
	inline int32_t* get_address_of_instancesPerFrame_3() { return &___instancesPerFrame_3; }
	inline void set_instancesPerFrame_3(int32_t value)
	{
		___instancesPerFrame_3 = value;
	}

	inline static int32_t get_offset_of_names_4() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___names_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_names_4() const { return ___names_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_names_4() { return &___names_4; }
	inline void set_names_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___names_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___names_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___U3CU3E4__this_5)); }
	inline ScrollRouteMenuPopulator_tDDC210B560C226C2C86F60BD8F6E8D5F9E2B1251 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScrollRouteMenuPopulator_tDDC210B560C226C2C86F60BD8F6E8D5F9E2B1251 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScrollRouteMenuPopulator_tDDC210B560C226C2C86F60BD8F6E8D5F9E2B1251 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrItemCountU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___U3CcurrItemCountU3E5__1_6)); }
	inline int32_t get_U3CcurrItemCountU3E5__1_6() const { return ___U3CcurrItemCountU3E5__1_6; }
	inline int32_t* get_address_of_U3CcurrItemCountU3E5__1_6() { return &___U3CcurrItemCountU3E5__1_6; }
	inline void set_U3CcurrItemCountU3E5__1_6(int32_t value)
	{
		___U3CcurrItemCountU3E5__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246, ___U3CiU3E5__2_7)); }
	inline int32_t get_U3CiU3E5__2_7() const { return ___U3CiU3E5__2_7; }
	inline int32_t* get_address_of_U3CiU3E5__2_7() { return &___U3CiU3E5__2_7; }
	inline void set_U3CiU3E5__2_7(int32_t value)
	{
		___U3CiU3E5__2_7 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource>
struct Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____set_0)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice>
struct InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputDeviceU5BU5D_tA6E635A113857F0F73E5CF81B8E2C63EF61684C0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97, ___firstValue_1)); }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97, ___additionalValues_2)); }
	inline InputDeviceU5BU5D_tA6E635A113857F0F73E5CF81B8E2C63EF61684C0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceU5BU5D_tA6E635A113857F0F73E5CF81B8E2C63EF61684C0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceU5BU5D_tA6E635A113857F0F73E5CF81B8E2C63EF61684C0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9, ___value_1)); }
	inline PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * get_value_1() const { return ___value_1; }
	inline PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_t035F0D12ED7F77D0FFCB112B0338E781743B5E2E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Single>
struct Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E, ___m_EventPtr_0)); }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * value)
	{
		___m_EventPtr_0 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2CE698761A81CDF5280926B941C99E953BCACE92 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078 
{
public:
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::numBytesRequired
	int32_t ___numBytesRequired_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includeTransient
	bool ___includeTransient_4;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_numBytesRequired_1() { return static_cast<int32_t>(offsetof(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078, ___numBytesRequired_1)); }
	inline int32_t get_numBytesRequired_1() const { return ___numBytesRequired_1; }
	inline int32_t* get_address_of_numBytesRequired_1() { return &___numBytesRequired_1; }
	inline void set_numBytesRequired_1(int32_t value)
	{
		___numBytesRequired_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_includePersistent_3() { return static_cast<int32_t>(offsetof(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078, ___includePersistent_3)); }
	inline bool get_includePersistent_3() const { return ___includePersistent_3; }
	inline bool* get_address_of_includePersistent_3() { return &___includePersistent_3; }
	inline void set_includePersistent_3(bool value)
	{
		___includePersistent_3 = value;
	}

	inline static int32_t get_offset_of_includeTransient_4() { return static_cast<int32_t>(offsetof(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078, ___includeTransient_4)); }
	inline bool get_includeTransient_4() const { return ___includeTransient_4; }
	inline bool* get_address_of_includeTransient_4() { return &___includeTransient_4; }
	inline void set_includeTransient_4(bool value)
	{
		___includeTransient_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673 
{
public:
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::numBytesBuffered
	int32_t ___numBytesBuffered_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includeTransient
	bool ___includeTransient_4;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_numBytesBuffered_1() { return static_cast<int32_t>(offsetof(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673, ___numBytesBuffered_1)); }
	inline int32_t get_numBytesBuffered_1() const { return ___numBytesBuffered_1; }
	inline int32_t* get_address_of_numBytesBuffered_1() { return &___numBytesBuffered_1; }
	inline void set_numBytesBuffered_1(int32_t value)
	{
		___numBytesBuffered_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_includePersistent_3() { return static_cast<int32_t>(offsetof(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673, ___includePersistent_3)); }
	inline bool get_includePersistent_3() const { return ___includePersistent_3; }
	inline bool* get_address_of_includePersistent_3() { return &___includePersistent_3; }
	inline void set_includePersistent_3(bool value)
	{
		___includePersistent_3 = value;
	}

	inline static int32_t get_offset_of_includeTransient_4() { return static_cast<int32_t>(offsetof(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673, ___includeTransient_4)); }
	inline bool get_includeTransient_4() const { return ___includeTransient_4; }
	inline bool* get_address_of_includeTransient_4() { return &___includeTransient_4; }
	inline void set_includeTransient_4(bool value)
	{
		___includeTransient_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3 
{
public:
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance::valid
	bool ___valid_0;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3, ___valid_0)); }
	inline bool get_valid_0() const { return ___valid_0; }
	inline bool* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(bool value)
	{
		___valid_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_marshaled_pinvoke
{
	int32_t ___valid_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_marshaled_com
{
	int32_t ___valid_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54__padding[1];
	};

public:
};


// UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_Buffer
	InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * ___m_Buffer_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_EventCount
	int32_t ___m_EventCount_1;
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentEvent
	InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * ___m_CurrentEvent_2;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_3;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39, ___m_Buffer_0)); }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_EventCount_1() { return static_cast<int32_t>(offsetof(Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39, ___m_EventCount_1)); }
	inline int32_t get_m_EventCount_1() const { return ___m_EventCount_1; }
	inline int32_t* get_address_of_m_EventCount_1() { return &___m_EventCount_1; }
	inline void set_m_EventCount_1(int32_t value)
	{
		___m_EventCount_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEvent_2() { return static_cast<int32_t>(offsetof(Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39, ___m_CurrentEvent_2)); }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * get_m_CurrentEvent_2() const { return ___m_CurrentEvent_2; }
	inline InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 ** get_address_of_m_CurrentEvent_2() { return &___m_CurrentEvent_2; }
	inline void set_m_CurrentEvent_2(InputEvent_t800539327024647EC7AC89C922304EBEDCBF99D2 * value)
	{
		___m_CurrentEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_3() { return static_cast<int32_t>(offsetof(Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39, ___m_CurrentIndex_3)); }
	inline int32_t get_m_CurrentIndex_3() const { return ___m_CurrentIndex_3; }
	inline int32_t* get_address_of_m_CurrentIndex_3() { return &___m_CurrentIndex_3; }
	inline void set_m_CurrentIndex_3(int32_t value)
	{
		___m_CurrentIndex_3 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_History
	InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 * ___m_History_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69, ___m_History_0)); }
	inline InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_marshaled_pinvoke
{
	InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 * ___m_History_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_marshaled_com
{
	InputStateHistory_tFAAAEC56D98CED885E2486E1D2415A24BDEEF140 * ___m_History_0;
	int32_t ___m_Index_1;
};

// System.ComponentModel.LicFileLicenseProvider/LicFileLicense
struct LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128  : public License_tB4FE2B5F9E796E97586FCED9751B0FDF0A4E7832
{
public:
	// System.String System.ComponentModel.LicFileLicenseProvider/LicFileLicense::key
	String_t* ___key_0;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___dictionary_0)); }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD24C74E665484549409FE4C9D950FBE6B27ECB96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___current_3)); }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA, ___firstValue_1)); }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  get_firstValue_1() const { return ___firstValue_1; }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA, ___additionalValues_2)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get_additionalValues_2() const { return ___additionalValues_2; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring>
struct InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	SubstringU5BU5D_tE877AE925451CDDBD520DFD798FDBE1D896AD193* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2, ___firstValue_1)); }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  get_firstValue_1() const { return ___firstValue_1; }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2, ___additionalValues_2)); }
	inline SubstringU5BU5D_tE877AE925451CDDBD520DFD798FDBE1D896AD193* get_additionalValues_2() const { return ___additionalValues_2; }
	inline SubstringU5BU5D_tE877AE925451CDDBD520DFD798FDBE1D896AD193** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(SubstringU5BU5D_tE877AE925451CDDBD520DFD798FDBE1D896AD193* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_tB655891E638A7E4D88E04E4AD4ECCCE2D812C718 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B, ___key_0)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_key_0() const { return ___key_0; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B, ___value_1)); }
	inline Func_1_tB655891E638A7E4D88E04E4AD4ECCCE2D812C718 * get_value_1() const { return ___value_1; }
	inline Func_1_tB655891E638A7E4D88E04E4AD4ECCCE2D812C718 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Func_1_tB655891E638A7E4D88E04E4AD4ECCCE2D812C718 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C, ___key_0)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_key_0() const { return ___key_0; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A, ___key_0)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_key_0() const { return ___key_0; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_tCF1CB229DCBB9B30F35AB7107F3D767BCAE5E078* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kProductKey_4)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_StaticFields, ___kVersionKey_5)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_marshaled_pinvoke
{
	KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6_marshaled_com
{
	KeyValuePair_2_t7DB85F2AAC9FE0F6E60C1D92C24ED53E0BA1A935 * ___m_Patterns_0;
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

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.InputSystem.InputControlExtensions/Enumerate
struct Enumerate_t7CA0890258936E4883E816064BF3F98CBFF9D84C 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/Enumerate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Enumerate_t7CA0890258936E4883E816064BF3F98CBFF9D84C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Trace
	InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * ___m_Trace_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_ChangeCounter
	int32_t ___m_ChangeCounter_1;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Current
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_Current_2;

public:
	inline static int32_t get_offset_of_m_Trace_0() { return static_cast<int32_t>(offsetof(Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754, ___m_Trace_0)); }
	inline InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * get_m_Trace_0() const { return ___m_Trace_0; }
	inline InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 ** get_address_of_m_Trace_0() { return &___m_Trace_0; }
	inline void set_m_Trace_0(InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * value)
	{
		___m_Trace_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trace_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChangeCounter_1() { return static_cast<int32_t>(offsetof(Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754, ___m_ChangeCounter_1)); }
	inline int32_t get_m_ChangeCounter_1() const { return ___m_ChangeCounter_1; }
	inline int32_t* get_address_of_m_ChangeCounter_1() { return &___m_ChangeCounter_1; }
	inline void set_m_ChangeCounter_1(int32_t value)
	{
		___m_ChangeCounter_1 = value;
	}

	inline static int32_t get_offset_of_m_Current_2() { return static_cast<int32_t>(offsetof(Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754, ___m_Current_2)); }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  get_m_Current_2() const { return ___m_Current_2; }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E * get_address_of_m_Current_2() { return &___m_Current_2; }
	inline void set_m_Current_2(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  value)
	{
		___m_Current_2 = value;
	}
};


// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186
struct U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_3;
	// UnityEngine.Vector2 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<position>5__1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3E5__1_4;
	// UnityEngine.Vector2 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<localMousePos>5__2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ClocalMousePosU3E5__2_5;
	// UnityEngine.Rect UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<rect>5__3
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___U3CrectU3E5__3_6;
	// System.Single UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186::<delay>5__4
	float ___U3CdelayU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CU3E4__this_3)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CpositionU3E5__1_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3E5__1_4() const { return ___U3CpositionU3E5__1_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3E5__1_4() { return &___U3CpositionU3E5__1_4; }
	inline void set_U3CpositionU3E5__1_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3ClocalMousePosU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3ClocalMousePosU3E5__2_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ClocalMousePosU3E5__2_5() const { return ___U3ClocalMousePosU3E5__2_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ClocalMousePosU3E5__2_5() { return &___U3ClocalMousePosU3E5__2_5; }
	inline void set_U3ClocalMousePosU3E5__2_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ClocalMousePosU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CrectU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CrectU3E5__3_6)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_U3CrectU3E5__3_6() const { return ___U3CrectU3E5__3_6; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_U3CrectU3E5__3_6() { return &___U3CrectU3E5__3_6; }
	inline void set_U3CrectU3E5__3_6(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___U3CrectU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CdelayU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0, ___U3CdelayU3E5__4_7)); }
	inline float get_U3CdelayU3E5__4_7() const { return ___U3CdelayU3E5__4_7; }
	inline float* get_address_of_U3CdelayU3E5__4_7() { return &___U3CdelayU3E5__4_7; }
	inline void set_U3CdelayU3E5__4_7(float value)
	{
		___U3CdelayU3E5__4_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/KeyboardState
struct KeyboardState_t5A8CB24463E00670E27D6DE46E233D179170B75A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/KeyboardState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyboardState_t5A8CB24463E00670E27D6DE46E233D179170B75A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>2__current
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::sceneNames
	RuntimeObject* ___sceneNames_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>3__sceneNames
	RuntimeObject* ___U3CU3E3__sceneNames_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>4__this
	MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>s__1
	RuntimeObject* ___U3CU3Es__1_6;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<sceneName>5__2
	String_t* ___U3CsceneNameU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3E2__current_1)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_sceneNames_3() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___sceneNames_3)); }
	inline RuntimeObject* get_sceneNames_3() const { return ___sceneNames_3; }
	inline RuntimeObject** get_address_of_sceneNames_3() { return &___sceneNames_3; }
	inline void set_sceneNames_3(RuntimeObject* value)
	{
		___sceneNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__sceneNames_4() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3E3__sceneNames_4)); }
	inline RuntimeObject* get_U3CU3E3__sceneNames_4() const { return ___U3CU3E3__sceneNames_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__sceneNames_4() { return &___U3CU3E3__sceneNames_4; }
	inline void set_U3CU3E3__sceneNames_4(RuntimeObject* value)
	{
		___U3CU3E3__sceneNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__sceneNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystem_t6B428DD235F4308776373BD6AE9D80A55E544E00 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CU3Es__1_6)); }
	inline RuntimeObject* get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline RuntimeObject** get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(RuntimeObject* value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsceneNameU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B, ___U3CsceneNameU3E5__2_7)); }
	inline String_t* get_U3CsceneNameU3E5__2_7() const { return ___U3CsceneNameU3E5__2_7; }
	inline String_t** get_address_of_U3CsceneNameU3E5__2_7() { return &___U3CsceneNameU3E5__2_7; }
	inline void set_U3CsceneNameU3E5__2_7(String_t* value)
	{
		___U3CsceneNameU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsceneNameU3E5__2_7), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>4__this
	MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<origin>5__1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginU3E5__1_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<t>5__2
	float ___U3CtU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945, ___U3CU3E4__this_2)); }
	inline MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_t9E2284E6C950F21CF458B5935956737D5DE05FC4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945, ___U3CoriginU3E5__1_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginU3E5__1_3() const { return ___U3CoriginU3E5__1_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginU3E5__1_3() { return &___U3CoriginU3E5__1_3; }
	inline void set_U3CoriginU3E5__1_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945, ___U3CtU3E5__2_4)); }
	inline float get_U3CtU3E5__2_4() const { return ___U3CtU3E5__2_4; }
	inline float* get_address_of_U3CtU3E5__2_4() { return &___U3CtU3E5__2_4; }
	inline void set_U3CtU3E5__2_4(float value)
	{
		___U3CtU3E5__2_4 = value;
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::includeChildren
	bool ___includeChildren_3;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<objBuffer>5__1
	StringBuilder_t * ___U3CobjBufferU3E5__1_4;
	// System.DateTime Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<dt>5__2
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___U3CdtU3E5__2_5;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<processStack>5__3
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___U3CprocessStackU3E5__3_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<startVertexIndex>5__4
	int32_t ___U3CstartVertexIndexU3E5__4_7;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<current>5__5
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CcurrentU3E5__5_8;
	// UnityEngine.MeshFilter Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<meshFilter>5__6
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * ___U3CmeshFilterU3E5__6_9;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<i>5__7
	int32_t ___U3CiU3E5__7_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_includeChildren_3() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___includeChildren_3)); }
	inline bool get_includeChildren_3() const { return ___includeChildren_3; }
	inline bool* get_address_of_includeChildren_3() { return &___includeChildren_3; }
	inline void set_includeChildren_3(bool value)
	{
		___includeChildren_3 = value;
	}

	inline static int32_t get_offset_of_U3CobjBufferU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CobjBufferU3E5__1_4)); }
	inline StringBuilder_t * get_U3CobjBufferU3E5__1_4() const { return ___U3CobjBufferU3E5__1_4; }
	inline StringBuilder_t ** get_address_of_U3CobjBufferU3E5__1_4() { return &___U3CobjBufferU3E5__1_4; }
	inline void set_U3CobjBufferU3E5__1_4(StringBuilder_t * value)
	{
		___U3CobjBufferU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjBufferU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdtU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CdtU3E5__2_5)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_U3CdtU3E5__2_5() const { return ___U3CdtU3E5__2_5; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_U3CdtU3E5__2_5() { return &___U3CdtU3E5__2_5; }
	inline void set_U3CdtU3E5__2_5(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___U3CdtU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CprocessStackU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CprocessStackU3E5__3_6)); }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * get_U3CprocessStackU3E5__3_6() const { return ___U3CprocessStackU3E5__3_6; }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F ** get_address_of_U3CprocessStackU3E5__3_6() { return &___U3CprocessStackU3E5__3_6; }
	inline void set_U3CprocessStackU3E5__3_6(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * value)
	{
		___U3CprocessStackU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprocessStackU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartVertexIndexU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CstartVertexIndexU3E5__4_7)); }
	inline int32_t get_U3CstartVertexIndexU3E5__4_7() const { return ___U3CstartVertexIndexU3E5__4_7; }
	inline int32_t* get_address_of_U3CstartVertexIndexU3E5__4_7() { return &___U3CstartVertexIndexU3E5__4_7; }
	inline void set_U3CstartVertexIndexU3E5__4_7(int32_t value)
	{
		___U3CstartVertexIndexU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CcurrentU3E5__5_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CcurrentU3E5__5_8() const { return ___U3CcurrentU3E5__5_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CcurrentU3E5__5_8() { return &___U3CcurrentU3E5__5_8; }
	inline void set_U3CcurrentU3E5__5_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CcurrentU3E5__5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3E5__5_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshFilterU3E5__6_9() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CmeshFilterU3E5__6_9)); }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * get_U3CmeshFilterU3E5__6_9() const { return ___U3CmeshFilterU3E5__6_9; }
	inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A ** get_address_of_U3CmeshFilterU3E5__6_9() { return &___U3CmeshFilterU3E5__6_9; }
	inline void set_U3CmeshFilterU3E5__6_9(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * value)
	{
		___U3CmeshFilterU3E5__6_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshFilterU3E5__6_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__7_10() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506, ___U3CiU3E5__7_10)); }
	inline int32_t get_U3CiU3E5__7_10() const { return ___U3CiU3E5__7_10; }
	inline int32_t* get_address_of_U3CiU3E5__7_10() { return &___U3CiU3E5__7_10; }
	inline void set_U3CiU3E5__7_10(int32_t value)
	{
		___U3CiU3E5__7_10 = value;
	}
};


// Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
struct U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Photon.Pun.UtilityScripts.OnClickRpc Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<>4__this
	OnClickRpc_t72BA5BCE20F703B4555A1F1C63F17C4FCE6AC7E4 * ___U3CU3E4__this_2;
	// System.Boolean Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<wasEmissive>5__1
	bool ___U3CwasEmissiveU3E5__1_3;
	// System.Single Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<f>5__2
	float ___U3CfU3E5__2_4;
	// UnityEngine.Color Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8::<lerped>5__3
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3ClerpedU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3CU3E4__this_2)); }
	inline OnClickRpc_t72BA5BCE20F703B4555A1F1C63F17C4FCE6AC7E4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OnClickRpc_t72BA5BCE20F703B4555A1F1C63F17C4FCE6AC7E4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OnClickRpc_t72BA5BCE20F703B4555A1F1C63F17C4FCE6AC7E4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwasEmissiveU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3CwasEmissiveU3E5__1_3)); }
	inline bool get_U3CwasEmissiveU3E5__1_3() const { return ___U3CwasEmissiveU3E5__1_3; }
	inline bool* get_address_of_U3CwasEmissiveU3E5__1_3() { return &___U3CwasEmissiveU3E5__1_3; }
	inline void set_U3CwasEmissiveU3E5__1_3(bool value)
	{
		___U3CwasEmissiveU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CfU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3CfU3E5__2_4)); }
	inline float get_U3CfU3E5__2_4() const { return ___U3CfU3E5__2_4; }
	inline float* get_address_of_U3CfU3E5__2_4() { return &___U3CfU3E5__2_4; }
	inline void set_U3CfU3E5__2_4(float value)
	{
		___U3CfU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3ClerpedU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778, ___U3ClerpedU3E5__3_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3ClerpedU3E5__3_5() const { return ___U3ClerpedU3E5__3_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3ClerpedU3E5__3_5() { return &___U3ClerpedU3E5__3_5; }
	inline void set_U3ClerpedU3E5__3_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3ClerpedU3E5__3_5 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.Plugin/Deserializer
struct Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream Microsoft.MixedReality.WorldLocking.Core.Plugin/Deserializer::stream
	FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078  ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF, ___stream_0)); }
	inline FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078  get_stream_0() const { return ___stream_0; }
	inline FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078 * get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(FrozenWorld_Deserialize_Stream_t6FA72B61DD1F8D60F72B84401EB3E358944AC078  value)
	{
		___stream_0 = value;
	}
};


// Microsoft.MixedReality.WorldLocking.Core.Plugin/Serializer
struct Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream Microsoft.MixedReality.WorldLocking.Core.Plugin/Serializer::stream
	FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673  ___stream_0;
	// System.Single Microsoft.MixedReality.WorldLocking.Core.Plugin/Serializer::lastWriteStreamTime
	float ___lastWriteStreamTime_1;
	// System.Int64 Microsoft.MixedReality.WorldLocking.Core.Plugin/Serializer::<BytesSerialized>k__BackingField
	int64_t ___U3CBytesSerializedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA, ___stream_0)); }
	inline FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673  get_stream_0() const { return ___stream_0; }
	inline FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673 * get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(FrozenWorld_Serialize_Stream_tE01419B3FEE2C5351B5C4FE4E00E727D94131673  value)
	{
		___stream_0 = value;
	}

	inline static int32_t get_offset_of_lastWriteStreamTime_1() { return static_cast<int32_t>(offsetof(Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA, ___lastWriteStreamTime_1)); }
	inline float get_lastWriteStreamTime_1() const { return ___lastWriteStreamTime_1; }
	inline float* get_address_of_lastWriteStreamTime_1() { return &___lastWriteStreamTime_1; }
	inline void set_lastWriteStreamTime_1(float value)
	{
		___lastWriteStreamTime_1 = value;
	}

	inline static int32_t get_offset_of_U3CBytesSerializedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA, ___U3CBytesSerializedU3Ek__BackingField_2)); }
	inline int64_t get_U3CBytesSerializedU3Ek__BackingField_2() const { return ___U3CBytesSerializedU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CBytesSerializedU3Ek__BackingField_2() { return &___U3CBytesSerializedU3Ek__BackingField_2; }
	inline void set_U3CBytesSerializedU3Ek__BackingField_2(int64_t value)
	{
		___U3CBytesSerializedU3Ek__BackingField_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<inputSources>5__1
	HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * ___U3CinputSourcesU3E5__1_3;
	// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource> Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__2
	Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  ___U3CU3Es__2_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<inputSource>5__3
	RuntimeObject* ___U3CinputSourceU3E5__3_5;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__4
	IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* ___U3CU3Es__4_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<>s__5
	int32_t ___U3CU3Es__5_7;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7::<pointer>5__6
	RuntimeObject* ___U3CpointerU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CinputSourcesU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CinputSourcesU3E5__1_3)); }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * get_U3CinputSourcesU3E5__1_3() const { return ___U3CinputSourcesU3E5__1_3; }
	inline HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 ** get_address_of_U3CinputSourcesU3E5__1_3() { return &___U3CinputSourcesU3E5__1_3; }
	inline void set_U3CinputSourcesU3E5__1_3(HashSet_1_t4878BEB6D07DCCAAE1972BDF9FE24D91B4A5D944 * value)
	{
		___U3CinputSourcesU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSourcesU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__2_4() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3Es__2_4)); }
	inline Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  get_U3CU3Es__2_4() const { return ___U3CU3Es__2_4; }
	inline Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886 * get_address_of_U3CU3Es__2_4() { return &___U3CU3Es__2_4; }
	inline void set_U3CU3Es__2_4(Enumerator_t25AA8A27379794BCEB27B5E997A36A120A989886  value)
	{
		___U3CU3Es__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__2_4))->____set_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__2_4))->____current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CinputSourceU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CinputSourceU3E5__3_5)); }
	inline RuntimeObject* get_U3CinputSourceU3E5__3_5() const { return ___U3CinputSourceU3E5__3_5; }
	inline RuntimeObject** get_address_of_U3CinputSourceU3E5__3_5() { return &___U3CinputSourceU3E5__3_5; }
	inline void set_U3CinputSourceU3E5__3_5(RuntimeObject* value)
	{
		___U3CinputSourceU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinputSourceU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3Es__4_6)); }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F** get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(IMixedRealityPointerU5BU5D_t86033A247D79B63F16E102CAC7D6BB05B4AE198F* value)
	{
		___U3CU3Es__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__5_7() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CU3Es__5_7)); }
	inline int32_t get_U3CU3Es__5_7() const { return ___U3CU3Es__5_7; }
	inline int32_t* get_address_of_U3CU3Es__5_7() { return &___U3CU3Es__5_7; }
	inline void set_U3CU3Es__5_7(int32_t value)
	{
		___U3CU3Es__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4, ___U3CpointerU3E5__6_8)); }
	inline RuntimeObject* get_U3CpointerU3E5__6_8() const { return ___U3CpointerU3E5__6_8; }
	inline RuntimeObject** get_address_of_U3CpointerU3E5__6_8() { return &___U3CpointerU3E5__6_8; }
	inline void set_U3CpointerU3E5__6_8(RuntimeObject* value)
	{
		___U3CpointerU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerU3E5__6_8), (void*)value);
	}
};


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4
struct U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Graphic Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::image
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___image_2;
	// Photon.Pun.Demo.Cockpit.PropertyListenerBase Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::<>4__this
	PropertyListenerBase_tFB805C9C3AF674AA82AEAF90EA8FA4E4C8EA8565 * ___U3CU3E4__this_3;
	// System.Single Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::<elapsedTime>5__1
	float ___U3CelapsedTimeU3E5__1_4;
	// UnityEngine.Color Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4::<c>5__2
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CcU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___image_2)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_image_2() const { return ___image_2; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___U3CU3E4__this_3)); }
	inline PropertyListenerBase_tFB805C9C3AF674AA82AEAF90EA8FA4E4C8EA8565 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PropertyListenerBase_tFB805C9C3AF674AA82AEAF90EA8FA4E4C8EA8565 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PropertyListenerBase_tFB805C9C3AF674AA82AEAF90EA8FA4E4C8EA8565 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___U3CelapsedTimeU3E5__1_4)); }
	inline float get_U3CelapsedTimeU3E5__1_4() const { return ___U3CelapsedTimeU3E5__1_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__1_4() { return &___U3CelapsedTimeU3E5__1_4; }
	inline void set_U3CelapsedTimeU3E5__1_4(float value)
	{
		___U3CelapsedTimeU3E5__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C, ___U3CcU3E5__2_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CcU3E5__2_5() const { return ___U3CcU3E5__2_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CcU3E5__2_5() { return &___U3CcU3E5__2_5; }
	inline void set_U3CcU3E5__2_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CcU3E5__2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<>4__this
	RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<centeredOrigin>5__1
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CcenteredOriginU3E5__1_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<targetOrigin>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CtargetOriginU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31::<t>5__3
	float ___U3CtU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CU3E4__this_2)); }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RotateAroundPoint_tB4D04A377BC257044A24EA5BB909E46C1DCF763C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcenteredOriginU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CcenteredOriginU3E5__1_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CcenteredOriginU3E5__1_3() const { return ___U3CcenteredOriginU3E5__1_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CcenteredOriginU3E5__1_3() { return &___U3CcenteredOriginU3E5__1_3; }
	inline void set_U3CcenteredOriginU3E5__1_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CcenteredOriginU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CtargetOriginU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CtargetOriginU3E5__2_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CtargetOriginU3E5__2_4() const { return ___U3CtargetOriginU3E5__2_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CtargetOriginU3E5__2_4() { return &___U3CtargetOriginU3E5__2_4; }
	inline void set_U3CtargetOriginU3E5__2_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CtargetOriginU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED, ___U3CtU3E5__3_5)); }
	inline float get_U3CtU3E5__3_5() const { return ___U3CtU3E5__3_5; }
	inline float* get_address_of_U3CtU3E5__3_5() { return &___U3CtU3E5__3_5; }
	inline void set_U3CtU3E5__3_5(float value)
	{
		___U3CtU3E5__3_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>2__current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<i>5__1
	int32_t ___U3CiU3E5__1_3;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<loadedScene>5__2
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CloadedSceneU3E5__2_4;
	// UnityEngine.GameObject[] Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>s__3
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CU3Es__3_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2::<rootGameObject>5__5
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrootGameObjectU3E5__5_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CU3E2__current_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CloadedSceneU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CloadedSceneU3E5__2_4)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CloadedSceneU3E5__2_4() const { return ___U3CloadedSceneU3E5__2_4; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CloadedSceneU3E5__2_4() { return &___U3CloadedSceneU3E5__2_4; }
	inline void set_U3CloadedSceneU3E5__2_4(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CloadedSceneU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__3_5() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CU3Es__3_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CU3Es__3_5() const { return ___U3CU3Es__3_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CU3Es__3_5() { return &___U3CU3Es__3_5; }
	inline void set_U3CU3Es__3_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CU3Es__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Es__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__4_6() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CU3Es__4_6)); }
	inline int32_t get_U3CU3Es__4_6() const { return ___U3CU3Es__4_6; }
	inline int32_t* get_address_of_U3CU3Es__4_6() { return &___U3CU3Es__4_6; }
	inline void set_U3CU3Es__4_6(int32_t value)
	{
		___U3CU3Es__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CrootGameObjectU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F, ___U3CrootGameObjectU3E5__5_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrootGameObjectU3E5__5_7() const { return ___U3CrootGameObjectU3E5__5_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrootGameObjectU3E5__5_7() { return &___U3CrootGameObjectU3E5__5_7; }
	inline void set_U3CrootGameObjectU3E5__5_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrootGameObjectU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrootGameObjectU3E5__5_7), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_2;
	// UnityEngine.Camera UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_3;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<>4__this
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___U3CU3E4__this_4;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<localMousePos>5__1
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3ClocalMousePosU3E5__1_5;
	// System.Single UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<axisCoordinate>5__2
	float ___U3CaxisCoordinateU3E5__2_6;
	// System.Single UnityEngine.UI.Scrollbar/<ClickRepeat>d__58::<change>5__3
	float ___U3CchangeU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_screenPosition_2() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___screenPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_2() const { return ___screenPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_2() { return &___screenPosition_2; }
	inline void set_screenPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_2 = value;
	}

	inline static int32_t get_offset_of_camera_3() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___camera_3)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_3() const { return ___camera_3; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_3() { return &___camera_3; }
	inline void set_camera_3(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CU3E4__this_4)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClocalMousePosU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3ClocalMousePosU3E5__1_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3ClocalMousePosU3E5__1_5() const { return ___U3ClocalMousePosU3E5__1_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3ClocalMousePosU3E5__1_5() { return &___U3ClocalMousePosU3E5__1_5; }
	inline void set_U3ClocalMousePosU3E5__1_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3ClocalMousePosU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CaxisCoordinateU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CaxisCoordinateU3E5__2_6)); }
	inline float get_U3CaxisCoordinateU3E5__2_6() const { return ___U3CaxisCoordinateU3E5__2_6; }
	inline float* get_address_of_U3CaxisCoordinateU3E5__2_6() { return &___U3CaxisCoordinateU3E5__2_6; }
	inline void set_U3CaxisCoordinateU3E5__2_6(float value)
	{
		___U3CaxisCoordinateU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3CchangeU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE, ___U3CchangeU3E5__3_7)); }
	inline float get_U3CchangeU3E5__3_7() const { return ___U3CchangeU3E5__3_7; }
	inline float* get_address_of_U3CchangeU3E5__3_7() { return &___U3CchangeU3E5__3_7; }
	inline void set_U3CchangeU3E5__3_7(float value)
	{
		___U3CchangeU3E5__3_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::initialPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___initialPos_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::finalPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___finalPos_3;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_4;
	// System.Nullable`1<System.Single> Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::time
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___time_5;
	// System.Action Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::callback
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback_6;
	// Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<>4__this
	ScrollingObjectCollection_t07ADE5E758B67804F7B0C581CB25B2ACE62BC22B * ___U3CU3E4__this_7;
	// System.Single Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204::<counter>5__1
	float ___U3CcounterU3E5__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_initialPos_2() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___initialPos_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_initialPos_2() const { return ___initialPos_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_initialPos_2() { return &___initialPos_2; }
	inline void set_initialPos_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___initialPos_2 = value;
	}

	inline static int32_t get_offset_of_finalPos_3() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___finalPos_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_finalPos_3() const { return ___finalPos_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_finalPos_3() { return &___finalPos_3; }
	inline void set_finalPos_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___finalPos_3 = value;
	}

	inline static int32_t get_offset_of_curve_4() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___curve_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_4() const { return ___curve_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_4() { return &___curve_4; }
	inline void set_curve_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___time_5)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_time_5() const { return ___time_5; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_callback_6() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___callback_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_callback_6() const { return ___callback_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_callback_6() { return &___callback_6; }
	inline void set_callback_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___callback_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___U3CU3E4__this_7)); }
	inline ScrollingObjectCollection_t07ADE5E758B67804F7B0C581CB25B2ACE62BC22B * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline ScrollingObjectCollection_t07ADE5E758B67804F7B0C581CB25B2ACE62BC22B ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(ScrollingObjectCollection_t07ADE5E758B67804F7B0C581CB25B2ACE62BC22B * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcounterU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4, ___U3CcounterU3E5__1_8)); }
	inline float get_U3CcounterU3E5__1_8() const { return ___U3CcounterU3E5__1_8; }
	inline float* get_address_of_U3CcounterU3E5__1_8() { return &___U3CcounterU3E5__1_8; }
	inline void set_U3CcounterU3E5__1_8(float value)
	{
		___U3CcounterU3E5__1_8 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result
struct Result_t104A0E73C7CB829B0F53AE45E2A880FABA356FF9 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlScheme/MatchResult/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t104A0E73C7CB829B0F53AE45E2A880FABA356FF9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t7348C84774C64EB1AF713A48F54306E633930A69 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E, ___dictionary_0)); }
	inline Dictionary_2_t7348C84774C64EB1AF713A48F54306E633930A69 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7348C84774C64EB1AF713A48F54306E633930A69 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7348C84774C64EB1AF713A48F54306E633930A69 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E, ___current_3)); }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t6DF3B38A83F8F371B6AE24A88CE5EB47B495F16C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903, ___dictionary_0)); }
	inline Dictionary_2_t6DF3B38A83F8F371B6AE24A88CE5EB47B495F16C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6DF3B38A83F8F371B6AE24A88CE5EB47B495F16C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6DF3B38A83F8F371B6AE24A88CE5EB47B495F16C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903, ___current_3)); }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t6B7731B4656BF4EB52545DCABC082EA978FA117F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D, ___dictionary_0)); }
	inline Dictionary_2_t6B7731B4656BF4EB52545DCABC082EA978FA117F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6B7731B4656BF4EB52545DCABC082EA978FA117F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6B7731B4656BF4EB52545DCABC082EA978FA117F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D, ___current_3)); }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7_StaticFields, ___empty_0)); }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7 * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC 
{
public:
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Device
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_0;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_EventPtr
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_1;
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Flags
	int32_t ___m_Flags_2;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_3;

public:
	inline static int32_t get_offset_of_m_Device_0() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC, ___m_Device_0)); }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * get_m_Device_0() const { return ___m_Device_0; }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 ** get_address_of_m_Device_0() { return &___m_Device_0; }
	inline void set_m_Device_0(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * value)
	{
		___m_Device_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventPtr_1() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC, ___m_EventPtr_1)); }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  get_m_EventPtr_1() const { return ___m_EventPtr_1; }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E * get_address_of_m_EventPtr_1() { return &___m_EventPtr_1; }
	inline void set_m_EventPtr_1(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  value)
	{
		___m_EventPtr_1 = value;
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_3() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC, ___m_MagnitudeThreshold_3)); }
	inline float get_m_MagnitudeThreshold_3() const { return ___m_MagnitudeThreshold_3; }
	inline float* get_address_of_m_MagnitudeThreshold_3() { return &___m_MagnitudeThreshold_3; }
	inline void set_m_MagnitudeThreshold_3(float value)
	{
		___m_MagnitudeThreshold_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_marshaled_pinvoke
{
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_0;
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_marshaled_com
{
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_0;
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71 
{
public:
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Flags
	int32_t ___m_Flags_0;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Device
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_1;
	// System.UInt32[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndex
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlIndex_2;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndexLength
	int32_t ___m_StateOffsetToControlIndexLength_3;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_AllControls
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_AllControls_4;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_DefaultState
	uint8_t* ___m_DefaultState_5;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentState
	uint8_t* ___m_CurrentState_6;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_NoiseMask
	uint8_t* ___m_NoiseMask_7;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventPtr
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_8;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControl
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___m_CurrentControl_9;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentIndexInStateOffsetToControlIndexMap
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControlStateBitOffset
	uint32_t ___m_CurrentControlStateBitOffset_11;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventState
	uint8_t* ___m_EventState_12;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentBitOffset
	uint32_t ___m_CurrentBitOffset_13;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EndBitOffset
	uint32_t ___m_EndBitOffset_14;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_15;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}

	inline static int32_t get_offset_of_m_Device_1() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_Device_1)); }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * get_m_Device_1() const { return ___m_Device_1; }
	inline InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 ** get_address_of_m_Device_1() { return &___m_Device_1; }
	inline void set_m_Device_1(InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * value)
	{
		___m_Device_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlIndex_2() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_StateOffsetToControlIndex_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlIndex_2() const { return ___m_StateOffsetToControlIndex_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlIndex_2() { return &___m_StateOffsetToControlIndex_2; }
	inline void set_m_StateOffsetToControlIndex_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlIndex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlIndex_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlIndexLength_3() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_StateOffsetToControlIndexLength_3)); }
	inline int32_t get_m_StateOffsetToControlIndexLength_3() const { return ___m_StateOffsetToControlIndexLength_3; }
	inline int32_t* get_address_of_m_StateOffsetToControlIndexLength_3() { return &___m_StateOffsetToControlIndexLength_3; }
	inline void set_m_StateOffsetToControlIndexLength_3(int32_t value)
	{
		___m_StateOffsetToControlIndexLength_3 = value;
	}

	inline static int32_t get_offset_of_m_AllControls_4() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_AllControls_4)); }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* get_m_AllControls_4() const { return ___m_AllControls_4; }
	inline InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032** get_address_of_m_AllControls_4() { return &___m_AllControls_4; }
	inline void set_m_AllControls_4(InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* value)
	{
		___m_AllControls_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllControls_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultState_5() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_DefaultState_5)); }
	inline uint8_t* get_m_DefaultState_5() const { return ___m_DefaultState_5; }
	inline uint8_t** get_address_of_m_DefaultState_5() { return &___m_DefaultState_5; }
	inline void set_m_DefaultState_5(uint8_t* value)
	{
		___m_DefaultState_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentState_6() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_CurrentState_6)); }
	inline uint8_t* get_m_CurrentState_6() const { return ___m_CurrentState_6; }
	inline uint8_t** get_address_of_m_CurrentState_6() { return &___m_CurrentState_6; }
	inline void set_m_CurrentState_6(uint8_t* value)
	{
		___m_CurrentState_6 = value;
	}

	inline static int32_t get_offset_of_m_NoiseMask_7() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_NoiseMask_7)); }
	inline uint8_t* get_m_NoiseMask_7() const { return ___m_NoiseMask_7; }
	inline uint8_t** get_address_of_m_NoiseMask_7() { return &___m_NoiseMask_7; }
	inline void set_m_NoiseMask_7(uint8_t* value)
	{
		___m_NoiseMask_7 = value;
	}

	inline static int32_t get_offset_of_m_EventPtr_8() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_EventPtr_8)); }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  get_m_EventPtr_8() const { return ___m_EventPtr_8; }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E * get_address_of_m_EventPtr_8() { return &___m_EventPtr_8; }
	inline void set_m_EventPtr_8(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  value)
	{
		___m_EventPtr_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentControl_9() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_CurrentControl_9)); }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * get_m_CurrentControl_9() const { return ___m_CurrentControl_9; }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 ** get_address_of_m_CurrentControl_9() { return &___m_CurrentControl_9; }
	inline void set_m_CurrentControl_9(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * value)
	{
		___m_CurrentControl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentControl_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndexInStateOffsetToControlIndexMap_10() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_CurrentIndexInStateOffsetToControlIndexMap_10)); }
	inline int32_t get_m_CurrentIndexInStateOffsetToControlIndexMap_10() const { return ___m_CurrentIndexInStateOffsetToControlIndexMap_10; }
	inline int32_t* get_address_of_m_CurrentIndexInStateOffsetToControlIndexMap_10() { return &___m_CurrentIndexInStateOffsetToControlIndexMap_10; }
	inline void set_m_CurrentIndexInStateOffsetToControlIndexMap_10(int32_t value)
	{
		___m_CurrentIndexInStateOffsetToControlIndexMap_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentControlStateBitOffset_11() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_CurrentControlStateBitOffset_11)); }
	inline uint32_t get_m_CurrentControlStateBitOffset_11() const { return ___m_CurrentControlStateBitOffset_11; }
	inline uint32_t* get_address_of_m_CurrentControlStateBitOffset_11() { return &___m_CurrentControlStateBitOffset_11; }
	inline void set_m_CurrentControlStateBitOffset_11(uint32_t value)
	{
		___m_CurrentControlStateBitOffset_11 = value;
	}

	inline static int32_t get_offset_of_m_EventState_12() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_EventState_12)); }
	inline uint8_t* get_m_EventState_12() const { return ___m_EventState_12; }
	inline uint8_t** get_address_of_m_EventState_12() { return &___m_EventState_12; }
	inline void set_m_EventState_12(uint8_t* value)
	{
		___m_EventState_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBitOffset_13() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_CurrentBitOffset_13)); }
	inline uint32_t get_m_CurrentBitOffset_13() const { return ___m_CurrentBitOffset_13; }
	inline uint32_t* get_address_of_m_CurrentBitOffset_13() { return &___m_CurrentBitOffset_13; }
	inline void set_m_CurrentBitOffset_13(uint32_t value)
	{
		___m_CurrentBitOffset_13 = value;
	}

	inline static int32_t get_offset_of_m_EndBitOffset_14() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_EndBitOffset_14)); }
	inline uint32_t get_m_EndBitOffset_14() const { return ___m_EndBitOffset_14; }
	inline uint32_t* get_address_of_m_EndBitOffset_14() { return &___m_EndBitOffset_14; }
	inline void set_m_EndBitOffset_14(uint32_t value)
	{
		___m_EndBitOffset_14 = value;
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_15() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71, ___m_MagnitudeThreshold_15)); }
	inline float get_m_MagnitudeThreshold_15() const { return ___m_MagnitudeThreshold_15; }
	inline float* get_address_of_m_MagnitudeThreshold_15() { return &___m_MagnitudeThreshold_15; }
	inline void set_m_MagnitudeThreshold_15(float value)
	{
		___m_MagnitudeThreshold_15 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_marshaled_pinvoke
{
	int32_t ___m_Flags_0;
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_8;
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_marshaled_com
{
	int32_t ___m_Flags_0;
	InputDevice_t57F2F5443280D1C7DB01674808F015EB7BC8EF14 * ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_tF60640010CA0DC3E1184481B1FE6AC791F83D032* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___m_EventPtr_8;
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};

// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Layout
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  ___m_Layout_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring> UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Usages
	InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2  ___m_Usages_1;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Name
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  ___m_Name_2;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_DisplayName
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  ___m_DisplayName_3;

public:
	inline static int32_t get_offset_of_m_Layout_0() { return static_cast<int32_t>(offsetof(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B, ___m_Layout_0)); }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  get_m_Layout_0() const { return ___m_Layout_0; }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92 * get_address_of_m_Layout_0() { return &___m_Layout_0; }
	inline void set_m_Layout_0(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  value)
	{
		___m_Layout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_Usages_1() { return static_cast<int32_t>(offsetof(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B, ___m_Usages_1)); }
	inline InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2  get_m_Usages_1() const { return ___m_Usages_1; }
	inline InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2 * get_address_of_m_Usages_1() { return &___m_Usages_1; }
	inline void set_m_Usages_1(InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2  value)
	{
		___m_Usages_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B, ___m_Name_2)); }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  get_m_Name_2() const { return ___m_Name_2; }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B, ___m_DisplayName_3)); }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline Substring_t2CE698761A81CDF5280926B941C99E953BCACE92 * get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(Substring_t2CE698761A81CDF5280926B941C99E953BCACE92  value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DisplayName_3))->___m_String_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B_marshaled_pinvoke
{
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_pinvoke ___m_Layout_0;
	InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2  ___m_Usages_1;
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_pinvoke ___m_Name_2;
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_pinvoke ___m_DisplayName_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B_marshaled_com
{
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_com ___m_Layout_0;
	InlinedArray_1_tDF77851303AD1F086E09F829D22E8F83223FC3D2  ___m_Usages_1;
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_com ___m_Name_2;
	Substring_t2CE698761A81CDF5280926B941C99E953BCACE92_marshaled_com ___m_DisplayName_3;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>4__this
	InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>3__<>4__this
	InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<count>5__1
	int32_t ___U3CcountU3E5__1_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<i>5__2
	int32_t ___U3CiU3E5__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CU3E4__this_3)); }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_3))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CU3E3__U3CU3E4__this_4)); }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6 * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(InputDeviceMatcher_t461CD45492267B2DF1AF7086CE83455E60B43DE6  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_4))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__1_5() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CcountU3E5__1_5)); }
	inline int32_t get_U3CcountU3E5__1_5() const { return ___U3CcountU3E5__1_5; }
	inline int32_t* get_address_of_U3CcountU3E5__1_5() { return &___U3CcountU3E5__1_5; }
	inline void set_U3CcountU3E5__1_5(int32_t value)
	{
		___U3CcountU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_6() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D, ___U3CiU3E5__2_6)); }
	inline int32_t get_U3CiU3E5__2_6() const { return ___U3CiU3E5__2_6; }
	inline int32_t* get_address_of_U3CiU3E5__2_6() { return &___U3CiU3E5__2_6; }
	inline void set_U3CiU3E5__2_6(int32_t value)
	{
		___U3CiU3E5__2_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_EventTrace
	InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * ___m_EventTrace_3;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_Enumerator
	Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754 * ___m_Enumerator_4;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_DeviceIDMappings
	InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA  ___m_DeviceIDMappings_5;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreateNewDevices
	bool ___m_CreateNewDevices_6;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreatedDevices
	InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97  ___m_CreatedDevices_7;
	// System.Action UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnFinished_8;
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnEvent
	Action_1_t6C075EDA0B0A44F2CBF078F1E3AEA8C278503FF8 * ___m_OnEvent_9;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerFirstEvent
	double ___m_StartTimeAsPerFirstEvent_10;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerRuntime
	double ___m_StartTimeAsPerRuntime_11;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTimeIndex
	int32_t ___m_AllEventsByTimeIndex_12;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTime
	List_1_t0454C8038BF9E989EB10B21AA958FC1362E5D460 * ___m_AllEventsByTime_13;

public:
	inline static int32_t get_offset_of_U3CfinishedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___U3CfinishedU3Ek__BackingField_0)); }
	inline bool get_U3CfinishedU3Ek__BackingField_0() const { return ___U3CfinishedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CfinishedU3Ek__BackingField_0() { return &___U3CfinishedU3Ek__BackingField_0; }
	inline void set_U3CfinishedU3Ek__BackingField_0(bool value)
	{
		___U3CfinishedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpausedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___U3CpausedU3Ek__BackingField_1)); }
	inline bool get_U3CpausedU3Ek__BackingField_1() const { return ___U3CpausedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CpausedU3Ek__BackingField_1() { return &___U3CpausedU3Ek__BackingField_1; }
	inline void set_U3CpausedU3Ek__BackingField_1(bool value)
	{
		___U3CpausedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___U3CpositionU3Ek__BackingField_2)); }
	inline int32_t get_U3CpositionU3Ek__BackingField_2() const { return ___U3CpositionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpositionU3Ek__BackingField_2() { return &___U3CpositionU3Ek__BackingField_2; }
	inline void set_U3CpositionU3Ek__BackingField_2(int32_t value)
	{
		___U3CpositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_EventTrace_3() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_EventTrace_3)); }
	inline InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * get_m_EventTrace_3() const { return ___m_EventTrace_3; }
	inline InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 ** get_address_of_m_EventTrace_3() { return &___m_EventTrace_3; }
	inline void set_m_EventTrace_3(InputEventTrace_t68B369615A8D24A9FBA6E30811141929D58BE7F7 * value)
	{
		___m_EventTrace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventTrace_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enumerator_4() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_Enumerator_4)); }
	inline Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754 * get_m_Enumerator_4() const { return ___m_Enumerator_4; }
	inline Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754 ** get_address_of_m_Enumerator_4() { return &___m_Enumerator_4; }
	inline void set_m_Enumerator_4(Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754 * value)
	{
		___m_Enumerator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Enumerator_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIDMappings_5() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_DeviceIDMappings_5)); }
	inline InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA  get_m_DeviceIDMappings_5() const { return ___m_DeviceIDMappings_5; }
	inline InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA * get_address_of_m_DeviceIDMappings_5() { return &___m_DeviceIDMappings_5; }
	inline void set_m_DeviceIDMappings_5(InlinedArray_1_t350278FE97C9A693E790F23E340D21B904314ADA  value)
	{
		___m_DeviceIDMappings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DeviceIDMappings_5))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CreateNewDevices_6() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_CreateNewDevices_6)); }
	inline bool get_m_CreateNewDevices_6() const { return ___m_CreateNewDevices_6; }
	inline bool* get_address_of_m_CreateNewDevices_6() { return &___m_CreateNewDevices_6; }
	inline void set_m_CreateNewDevices_6(bool value)
	{
		___m_CreateNewDevices_6 = value;
	}

	inline static int32_t get_offset_of_m_CreatedDevices_7() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_CreatedDevices_7)); }
	inline InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97  get_m_CreatedDevices_7() const { return ___m_CreatedDevices_7; }
	inline InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97 * get_address_of_m_CreatedDevices_7() { return &___m_CreatedDevices_7; }
	inline void set_m_CreatedDevices_7(InlinedArray_1_t0936DAE615B78F2A9C6D26D1DBC9651B48296B97  value)
	{
		___m_CreatedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnFinished_8() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_OnFinished_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnFinished_8() const { return ___m_OnFinished_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnFinished_8() { return &___m_OnFinished_8; }
	inline void set_m_OnFinished_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnFinished_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFinished_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEvent_9() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_OnEvent_9)); }
	inline Action_1_t6C075EDA0B0A44F2CBF078F1E3AEA8C278503FF8 * get_m_OnEvent_9() const { return ___m_OnEvent_9; }
	inline Action_1_t6C075EDA0B0A44F2CBF078F1E3AEA8C278503FF8 ** get_address_of_m_OnEvent_9() { return &___m_OnEvent_9; }
	inline void set_m_OnEvent_9(Action_1_t6C075EDA0B0A44F2CBF078F1E3AEA8C278503FF8 * value)
	{
		___m_OnEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerFirstEvent_10() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_StartTimeAsPerFirstEvent_10)); }
	inline double get_m_StartTimeAsPerFirstEvent_10() const { return ___m_StartTimeAsPerFirstEvent_10; }
	inline double* get_address_of_m_StartTimeAsPerFirstEvent_10() { return &___m_StartTimeAsPerFirstEvent_10; }
	inline void set_m_StartTimeAsPerFirstEvent_10(double value)
	{
		___m_StartTimeAsPerFirstEvent_10 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerRuntime_11() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_StartTimeAsPerRuntime_11)); }
	inline double get_m_StartTimeAsPerRuntime_11() const { return ___m_StartTimeAsPerRuntime_11; }
	inline double* get_address_of_m_StartTimeAsPerRuntime_11() { return &___m_StartTimeAsPerRuntime_11; }
	inline void set_m_StartTimeAsPerRuntime_11(double value)
	{
		___m_StartTimeAsPerRuntime_11 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTimeIndex_12() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_AllEventsByTimeIndex_12)); }
	inline int32_t get_m_AllEventsByTimeIndex_12() const { return ___m_AllEventsByTimeIndex_12; }
	inline int32_t* get_address_of_m_AllEventsByTimeIndex_12() { return &___m_AllEventsByTimeIndex_12; }
	inline void set_m_AllEventsByTimeIndex_12(int32_t value)
	{
		___m_AllEventsByTimeIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTime_13() { return static_cast<int32_t>(offsetof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB, ___m_AllEventsByTime_13)); }
	inline List_1_t0454C8038BF9E989EB10B21AA958FC1362E5D460 * get_m_AllEventsByTime_13() const { return ___m_AllEventsByTime_13; }
	inline List_1_t0454C8038BF9E989EB10B21AA958FC1362E5D460 ** get_address_of_m_AllEventsByTime_13() { return &___m_AllEventsByTime_13; }
	inline void set_m_AllEventsByTime_13(List_1_t0454C8038BF9E989EB10B21AA958FC1362E5D460 * value)
	{
		___m_AllEventsByTime_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllEventsByTime_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>s__1
	Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  ___U3CU3Es__1_4;
	// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<pointerDataEntry>5__2
	KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  ___U3CpointerDataEntryU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t846C494ECBA395077B5AAE96CA25B69E9243679F * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CU3Es__1_4)); }
	inline Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  get_U3CU3Es__1_4() const { return ___U3CU3Es__1_4; }
	inline Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75 * get_address_of_U3CU3Es__1_4() { return &___U3CU3Es__1_4; }
	inline void set_U3CU3Es__1_4(Enumerator_tC9FA13F3DBE8E4250471126AE00E100BC5AACB75  value)
	{
		___U3CU3Es__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerDataEntryU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9, ___U3CpointerDataEntryU3E5__2_5)); }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  get_U3CpointerDataEntryU3E5__2_5() const { return ___U3CpointerDataEntryU3E5__2_5; }
	inline KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9 * get_address_of_U3CpointerDataEntryU3E5__2_5() { return &___U3CpointerDataEntryU3E5__2_5; }
	inline void set_U3CpointerDataEntryU3E5__2_5(KeyValuePair_2_t0A7B97911E67B1FA8253C18D1EC0C2BDA4AE9FA9  value)
	{
		___U3CpointerDataEntryU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerDataEntryU3E5__2_5))->___value_1), (void*)NULL);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>4__this
	MixedRealityKeyboardBase_t22DAD8D1BD112FDC8C0CD7029501DEA1175BE645 * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/KeyboardState Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>s__1
	int32_t ___U3CU3Es__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardBase_t22DAD8D1BD112FDC8C0CD7029501DEA1175BE645 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardBase_t22DAD8D1BD112FDC8C0CD7029501DEA1175BE645 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardBase_t22DAD8D1BD112FDC8C0CD7029501DEA1175BE645 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_3() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064, ___U3CU3Es__1_3)); }
	inline int32_t get_U3CU3Es__1_3() const { return ___U3CU3Es__1_3; }
	inline int32_t* get_address_of_U3CU3Es__1_3() { return &___U3CU3Es__1_3; }
	inline void set_U3CU3Es__1_3(int32_t value)
	{
		___U3CU3Es__1_3 = value;
	}
};


// Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29
struct U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5  : public RuntimeObject
{
public:
	// System.Int32 Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::time
	float ___time_2;
	// UnityEngine.GameObject Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_3;
	// Scripts.RouteManipulator Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<>4__this
	RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * ___U3CU3E4__this_4;
	// System.Single Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<distanceForward>5__1
	float ___U3CdistanceForwardU3E5__1_5;
	// System.Single Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<distanceBackward>5__2
	float ___U3CdistanceBackwardU3E5__2_6;
	// UnityEngine.RaycastHit Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<hitForward>5__3
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___U3ChitForwardU3E5__3_7;
	// UnityEngine.RaycastHit Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<hitBackward>5__4
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___U3ChitBackwardU3E5__4_8;
	// UnityEngine.Vector3 Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<forward>5__5
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CforwardU3E5__5_9;
	// UnityEngine.Vector3 Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<backward>5__6
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CbackwardU3E5__6_10;
	// UnityEngine.Vector3 Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<normal>5__7
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CnormalU3E5__7_11;
	// UnityEngine.Quaternion Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<normalOrientation>5__8
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CnormalOrientationU3E5__8_12;
	// UnityEngine.Vector3 Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29::<position>5__9
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3E5__9_13;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___go_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_3() const { return ___go_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CU3E4__this_4)); }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(RouteManipulator_t42EC65C585A251D65B86EF7AE39F8134BF180C4F * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdistanceForwardU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CdistanceForwardU3E5__1_5)); }
	inline float get_U3CdistanceForwardU3E5__1_5() const { return ___U3CdistanceForwardU3E5__1_5; }
	inline float* get_address_of_U3CdistanceForwardU3E5__1_5() { return &___U3CdistanceForwardU3E5__1_5; }
	inline void set_U3CdistanceForwardU3E5__1_5(float value)
	{
		___U3CdistanceForwardU3E5__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CdistanceBackwardU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CdistanceBackwardU3E5__2_6)); }
	inline float get_U3CdistanceBackwardU3E5__2_6() const { return ___U3CdistanceBackwardU3E5__2_6; }
	inline float* get_address_of_U3CdistanceBackwardU3E5__2_6() { return &___U3CdistanceBackwardU3E5__2_6; }
	inline void set_U3CdistanceBackwardU3E5__2_6(float value)
	{
		___U3CdistanceBackwardU3E5__2_6 = value;
	}

	inline static int32_t get_offset_of_U3ChitForwardU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3ChitForwardU3E5__3_7)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_U3ChitForwardU3E5__3_7() const { return ___U3ChitForwardU3E5__3_7; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_U3ChitForwardU3E5__3_7() { return &___U3ChitForwardU3E5__3_7; }
	inline void set_U3ChitForwardU3E5__3_7(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___U3ChitForwardU3E5__3_7 = value;
	}

	inline static int32_t get_offset_of_U3ChitBackwardU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3ChitBackwardU3E5__4_8)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_U3ChitBackwardU3E5__4_8() const { return ___U3ChitBackwardU3E5__4_8; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_U3ChitBackwardU3E5__4_8() { return &___U3ChitBackwardU3E5__4_8; }
	inline void set_U3ChitBackwardU3E5__4_8(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___U3ChitBackwardU3E5__4_8 = value;
	}

	inline static int32_t get_offset_of_U3CforwardU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CforwardU3E5__5_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CforwardU3E5__5_9() const { return ___U3CforwardU3E5__5_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CforwardU3E5__5_9() { return &___U3CforwardU3E5__5_9; }
	inline void set_U3CforwardU3E5__5_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CforwardU3E5__5_9 = value;
	}

	inline static int32_t get_offset_of_U3CbackwardU3E5__6_10() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CbackwardU3E5__6_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CbackwardU3E5__6_10() const { return ___U3CbackwardU3E5__6_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CbackwardU3E5__6_10() { return &___U3CbackwardU3E5__6_10; }
	inline void set_U3CbackwardU3E5__6_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CbackwardU3E5__6_10 = value;
	}

	inline static int32_t get_offset_of_U3CnormalU3E5__7_11() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CnormalU3E5__7_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CnormalU3E5__7_11() const { return ___U3CnormalU3E5__7_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CnormalU3E5__7_11() { return &___U3CnormalU3E5__7_11; }
	inline void set_U3CnormalU3E5__7_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CnormalU3E5__7_11 = value;
	}

	inline static int32_t get_offset_of_U3CnormalOrientationU3E5__8_12() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CnormalOrientationU3E5__8_12)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CnormalOrientationU3E5__8_12() const { return ___U3CnormalOrientationU3E5__8_12; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CnormalOrientationU3E5__8_12() { return &___U3CnormalOrientationU3E5__8_12; }
	inline void set_U3CnormalOrientationU3E5__8_12(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CnormalOrientationU3E5__8_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3E5__9_13() { return static_cast<int32_t>(offsetof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5, ___U3CpositionU3E5__9_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3E5__9_13() const { return ___U3CpositionU3E5__9_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3E5__9_13() { return &___U3CpositionU3E5__9_13; }
	inline void set_U3CpositionU3E5__9_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3E5__9_13 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t200C70CE862FA6E0DBEFF218216B9F2457FF8AA7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2, ___list_0)); }
	inline List_1_t200C70CE862FA6E0DBEFF218216B9F2457FF8AA7 * get_list_0() const { return ___list_0; }
	inline List_1_t200C70CE862FA6E0DBEFF218216B9F2457FF8AA7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t200C70CE862FA6E0DBEFF218216B9F2457FF8AA7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2, ___current_3)); }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  get_current_3() const { return ___current_3; }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice>
struct InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>2__current
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::eventPtr
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___eventPtr_3;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__eventPtr
	InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  ___U3CU3E3__eventPtr_4;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::magnitude
	float ___magnitude_5;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__magnitude
	float ___U3CU3E3__magnitude_6;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::buttonControlsOnly
	bool ___buttonControlsOnly_7;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__buttonControlsOnly
	bool ___U3CU3E3__buttonControlsOnly_8;
	// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>s__1
	InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71  ___U3CU3Es__1_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<control>5__2
	InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * ___U3CcontrolU3E5__2_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3E2__current_1)); }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_eventPtr_3() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___eventPtr_3)); }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  get_eventPtr_3() const { return ___eventPtr_3; }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E * get_address_of_eventPtr_3() { return &___eventPtr_3; }
	inline void set_eventPtr_3(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  value)
	{
		___eventPtr_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__eventPtr_4() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3E3__eventPtr_4)); }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  get_U3CU3E3__eventPtr_4() const { return ___U3CU3E3__eventPtr_4; }
	inline InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E * get_address_of_U3CU3E3__eventPtr_4() { return &___U3CU3E3__eventPtr_4; }
	inline void set_U3CU3E3__eventPtr_4(InputEventPtr_t2AF1DAECDE4A0194D6681EE1D060A897EC323A1E  value)
	{
		___U3CU3E3__eventPtr_4 = value;
	}

	inline static int32_t get_offset_of_magnitude_5() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___magnitude_5)); }
	inline float get_magnitude_5() const { return ___magnitude_5; }
	inline float* get_address_of_magnitude_5() { return &___magnitude_5; }
	inline void set_magnitude_5(float value)
	{
		___magnitude_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__magnitude_6() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3E3__magnitude_6)); }
	inline float get_U3CU3E3__magnitude_6() const { return ___U3CU3E3__magnitude_6; }
	inline float* get_address_of_U3CU3E3__magnitude_6() { return &___U3CU3E3__magnitude_6; }
	inline void set_U3CU3E3__magnitude_6(float value)
	{
		___U3CU3E3__magnitude_6 = value;
	}

	inline static int32_t get_offset_of_buttonControlsOnly_7() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___buttonControlsOnly_7)); }
	inline bool get_buttonControlsOnly_7() const { return ___buttonControlsOnly_7; }
	inline bool* get_address_of_buttonControlsOnly_7() { return &___buttonControlsOnly_7; }
	inline void set_buttonControlsOnly_7(bool value)
	{
		___buttonControlsOnly_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__buttonControlsOnly_8() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3E3__buttonControlsOnly_8)); }
	inline bool get_U3CU3E3__buttonControlsOnly_8() const { return ___U3CU3E3__buttonControlsOnly_8; }
	inline bool* get_address_of_U3CU3E3__buttonControlsOnly_8() { return &___U3CU3E3__buttonControlsOnly_8; }
	inline void set_U3CU3E3__buttonControlsOnly_8(bool value)
	{
		___U3CU3E3__buttonControlsOnly_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Es__1_9() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CU3Es__1_9)); }
	inline InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71  get_U3CU3Es__1_9() const { return ___U3CU3Es__1_9; }
	inline InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71 * get_address_of_U3CU3Es__1_9() { return &___U3CU3Es__1_9; }
	inline void set_U3CU3Es__1_9(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71  value)
	{
		___U3CU3Es__1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_9))->___m_Device_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_9))->___m_StateOffsetToControlIndex_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_9))->___m_AllControls_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_9))->___m_CurrentControl_9), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcontrolU3E5__2_10() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504, ___U3CcontrolU3E5__2_10)); }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * get_U3CcontrolU3E5__2_10() const { return ___U3CcontrolU3E5__2_10; }
	inline InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 ** get_address_of_U3CcontrolU3E5__2_10() { return &___U3CcontrolU3E5__2_10; }
	inline void set_U3CcontrolU3E5__2_10(InputControl_t582A97328F3D367C0B3D5ACC695DDE2EC3F1D022 * value)
	{
		___U3CcontrolU3E5__2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolU3E5__2_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0 
{
public:
	// System.String UnityEngine.InputSystem.InputControlPath/PathParser::path
	String_t* ___path_0;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::length
	int32_t ___length_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::leftIndexInPath
	int32_t ___leftIndexInPath_2;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::rightIndexInPath
	int32_t ___rightIndexInPath_3;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/PathParser::current
	ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  ___current_4;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_0), (void*)value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_leftIndexInPath_2() { return static_cast<int32_t>(offsetof(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0, ___leftIndexInPath_2)); }
	inline int32_t get_leftIndexInPath_2() const { return ___leftIndexInPath_2; }
	inline int32_t* get_address_of_leftIndexInPath_2() { return &___leftIndexInPath_2; }
	inline void set_leftIndexInPath_2(int32_t value)
	{
		___leftIndexInPath_2 = value;
	}

	inline static int32_t get_offset_of_rightIndexInPath_3() { return static_cast<int32_t>(offsetof(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0, ___rightIndexInPath_3)); }
	inline int32_t get_rightIndexInPath_3() const { return ___rightIndexInPath_3; }
	inline int32_t* get_address_of_rightIndexInPath_3() { return &___rightIndexInPath_3; }
	inline void set_rightIndexInPath_3(int32_t value)
	{
		___rightIndexInPath_3 = value;
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0, ___current_4)); }
	inline ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  get_current_4() const { return ___current_4; }
	inline ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B * get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___current_4))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0_marshaled_pinvoke
{
	char* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B_marshaled_pinvoke ___current_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0_marshaled_com
{
	Il2CppChar* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B_marshaled_com ___current_4;
};

// UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
struct U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::basedOn
	String_t* ___basedOn_3;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>3__basedOn
	String_t* ___U3CU3E3__basedOn_4;
	// UnityEngine.InputSystem.InputManager UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>4__this
	InputManager_t07B6A59E26C372377A1C5414E617AF2F7F50F719 * ___U3CU3E4__this_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<internedBasedOn>5__1
	InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  ___U3CinternedBasedOnU3E5__1_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__2
	Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  ___U3CU3Es__2_7;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__3
	KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  ___U3CentryU3E5__3_8;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__4
	Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  ___U3CU3Es__4_9;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__5
	KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  ___U3CentryU3E5__5_10;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__6
	Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  ___U3CU3Es__6_11;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__7
	KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  ___U3CentryU3E5__7_12;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__8
	Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  ___U3CU3Es__8_13;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__9
	KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  ___U3CentryU3E5__9_14;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__10
	Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  ___U3CU3Es__10_15;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__11
	KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  ___U3CentryU3E5__11_16;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>s__12
	Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  ___U3CU3Es__12_17;
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<entry>5__13
	KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  ___U3CentryU3E5__13_18;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_basedOn_3() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___basedOn_3)); }
	inline String_t* get_basedOn_3() const { return ___basedOn_3; }
	inline String_t** get_address_of_basedOn_3() { return &___basedOn_3; }
	inline void set_basedOn_3(String_t* value)
	{
		___basedOn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basedOn_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__basedOn_4() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3E3__basedOn_4)); }
	inline String_t* get_U3CU3E3__basedOn_4() const { return ___U3CU3E3__basedOn_4; }
	inline String_t** get_address_of_U3CU3E3__basedOn_4() { return &___U3CU3E3__basedOn_4; }
	inline void set_U3CU3E3__basedOn_4(String_t* value)
	{
		___U3CU3E3__basedOn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__basedOn_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3E4__this_5)); }
	inline InputManager_t07B6A59E26C372377A1C5414E617AF2F7F50F719 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline InputManager_t07B6A59E26C372377A1C5414E617AF2F7F50F719 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(InputManager_t07B6A59E26C372377A1C5414E617AF2F7F50F719 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinternedBasedOnU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CinternedBasedOnU3E5__1_6)); }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  get_U3CinternedBasedOnU3E5__1_6() const { return ___U3CinternedBasedOnU3E5__1_6; }
	inline InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123 * get_address_of_U3CinternedBasedOnU3E5__1_6() { return &___U3CinternedBasedOnU3E5__1_6; }
	inline void set_U3CinternedBasedOnU3E5__1_6(InternedString_t3DD2E6CE1144C6D9C6FF58538CD648A244FBE123  value)
	{
		___U3CinternedBasedOnU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__1_6))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__1_6))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__2_7() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__2_7)); }
	inline Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  get_U3CU3Es__2_7() const { return ___U3CU3Es__2_7; }
	inline Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D * get_address_of_U3CU3Es__2_7() { return &___U3CU3Es__2_7; }
	inline void set_U3CU3Es__2_7(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  value)
	{
		___U3CU3Es__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__2_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__2_7))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__2_7))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__2_7))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__3_8)); }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  get_U3CentryU3E5__3_8() const { return ___U3CentryU3E5__3_8; }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A * get_address_of_U3CentryU3E5__3_8() { return &___U3CentryU3E5__3_8; }
	inline void set_U3CentryU3E5__3_8(KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  value)
	{
		___U3CentryU3E5__3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__3_8))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__3_8))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__3_8))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__4_9() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__4_9)); }
	inline Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  get_U3CU3Es__4_9() const { return ___U3CU3Es__4_9; }
	inline Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903 * get_address_of_U3CU3Es__4_9() { return &___U3CU3Es__4_9; }
	inline void set_U3CU3Es__4_9(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  value)
	{
		___U3CU3Es__4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__4_9))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__4_9))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__4_9))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__4_9))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__5_10() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__5_10)); }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  get_U3CentryU3E5__5_10() const { return ___U3CentryU3E5__5_10; }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C * get_address_of_U3CentryU3E5__5_10() { return &___U3CentryU3E5__5_10; }
	inline void set_U3CentryU3E5__5_10(KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  value)
	{
		___U3CentryU3E5__5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__5_10))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__5_10))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__5_10))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__6_11() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__6_11)); }
	inline Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  get_U3CU3Es__6_11() const { return ___U3CU3Es__6_11; }
	inline Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E * get_address_of_U3CU3Es__6_11() { return &___U3CU3Es__6_11; }
	inline void set_U3CU3Es__6_11(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  value)
	{
		___U3CU3Es__6_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__6_11))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__6_11))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__6_11))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__6_11))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__7_12() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__7_12)); }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  get_U3CentryU3E5__7_12() const { return ___U3CentryU3E5__7_12; }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B * get_address_of_U3CentryU3E5__7_12() { return &___U3CentryU3E5__7_12; }
	inline void set_U3CentryU3E5__7_12(KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  value)
	{
		___U3CentryU3E5__7_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__7_12))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__7_12))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__7_12))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__8_13() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__8_13)); }
	inline Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  get_U3CU3Es__8_13() const { return ___U3CU3Es__8_13; }
	inline Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D * get_address_of_U3CU3Es__8_13() { return &___U3CU3Es__8_13; }
	inline void set_U3CU3Es__8_13(Enumerator_t356D8A5B0E2EB331991530E9309CBC0B698AFF0D  value)
	{
		___U3CU3Es__8_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__8_13))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__8_13))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__8_13))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__8_13))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__9_14() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__9_14)); }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  get_U3CentryU3E5__9_14() const { return ___U3CentryU3E5__9_14; }
	inline KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A * get_address_of_U3CentryU3E5__9_14() { return &___U3CentryU3E5__9_14; }
	inline void set_U3CentryU3E5__9_14(KeyValuePair_2_t03C6A02FA2B6BD9700449A9B085ED1F0D3DA929A  value)
	{
		___U3CentryU3E5__9_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__9_14))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__9_14))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__9_14))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__10_15() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__10_15)); }
	inline Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  get_U3CU3Es__10_15() const { return ___U3CU3Es__10_15; }
	inline Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903 * get_address_of_U3CU3Es__10_15() { return &___U3CU3Es__10_15; }
	inline void set_U3CU3Es__10_15(Enumerator_t9CE9D6E0905C35B8D7BD8776C0BE44FE61BE9903  value)
	{
		___U3CU3Es__10_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__10_15))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__10_15))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__10_15))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__10_15))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__11_16() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__11_16)); }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  get_U3CentryU3E5__11_16() const { return ___U3CentryU3E5__11_16; }
	inline KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C * get_address_of_U3CentryU3E5__11_16() { return &___U3CentryU3E5__11_16; }
	inline void set_U3CentryU3E5__11_16(KeyValuePair_2_t4B2AAFC4F1AD3A45B87032BA711DC372ED14459C  value)
	{
		___U3CentryU3E5__11_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__11_16))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__11_16))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__11_16))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3Es__12_17() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CU3Es__12_17)); }
	inline Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  get_U3CU3Es__12_17() const { return ___U3CU3Es__12_17; }
	inline Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E * get_address_of_U3CU3Es__12_17() { return &___U3CU3Es__12_17; }
	inline void set_U3CU3Es__12_17(Enumerator_t0CE293D7F2E4E1E640E9E601A2844BB65D94A90E  value)
	{
		___U3CU3Es__12_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__12_17))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__12_17))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Es__12_17))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__12_17))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CentryU3E5__13_18() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C, ___U3CentryU3E5__13_18)); }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  get_U3CentryU3E5__13_18() const { return ___U3CentryU3E5__13_18; }
	inline KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B * get_address_of_U3CentryU3E5__13_18() { return &___U3CentryU3E5__13_18; }
	inline void set_U3CentryU3E5__13_18(KeyValuePair_2_t4145A886DF09064BDC0DA175336C0E50867DBF1B  value)
	{
		___U3CentryU3E5__13_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__13_18))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CentryU3E5__13_18))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CentryU3E5__13_18))->___value_1), (void*)NULL);
		#endif
	}
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>2__current
	ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::path
	String_t* ___path_3;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>3__path
	String_t* ___U3CU3E3__path_4;
	// UnityEngine.InputSystem.InputControlPath/PathParser UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<parser>5__1
	PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0  ___U3CparserU3E5__1_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___U3CU3E2__current_1)); }
	inline ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ParsedPathComponent_tEA4583AED3D8798123F53FC911A7DC031DE89B2B  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E2__current_1))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__path_4() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___U3CU3E3__path_4)); }
	inline String_t* get_U3CU3E3__path_4() const { return ___U3CU3E3__path_4; }
	inline String_t** get_address_of_U3CU3E3__path_4() { return &___U3CU3E3__path_4; }
	inline void set_U3CU3E3__path_4(String_t* value)
	{
		___U3CU3E3__path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__path_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparserU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE, ___U3CparserU3E5__1_5)); }
	inline PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0  get_U3CparserU3E5__1_5() const { return ___U3CparserU3E5__1_5; }
	inline PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0 * get_address_of_U3CparserU3E5__1_5() { return &___U3CparserU3E5__1_5; }
	inline void set_U3CparserU3E5__1_5(PathParser_tEC8C72F46C30C925FA0D6D9B50EA2EB6DCDBE6D0  value)
	{
		___U3CparserU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparserU3E5__1_5))->___path_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__1_5))->___current_4))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___U3CparserU3E5__1_5))->___current_4))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__1_5))->___current_4))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__1_5))->___current_4))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__1_5))->___current_4))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542 
{
public:
	// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Result
	int32_t ___m_Result_0;
	// System.Single UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Score
	float ___m_Score_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Devices
	InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25  ___m_Devices_2;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Controls
	InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16  ___m_Controls_3;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Requirements
	DeviceRequirementU5BU5D_t28DD1A13B7B7ED458C7436DFF554C297EB0FF0FA* ___m_Requirements_4;

public:
	inline static int32_t get_offset_of_m_Result_0() { return static_cast<int32_t>(offsetof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542, ___m_Result_0)); }
	inline int32_t get_m_Result_0() const { return ___m_Result_0; }
	inline int32_t* get_address_of_m_Result_0() { return &___m_Result_0; }
	inline void set_m_Result_0(int32_t value)
	{
		___m_Result_0 = value;
	}

	inline static int32_t get_offset_of_m_Score_1() { return static_cast<int32_t>(offsetof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542, ___m_Score_1)); }
	inline float get_m_Score_1() const { return ___m_Score_1; }
	inline float* get_address_of_m_Score_1() { return &___m_Score_1; }
	inline void set_m_Score_1(float value)
	{
		___m_Score_1 = value;
	}

	inline static int32_t get_offset_of_m_Devices_2() { return static_cast<int32_t>(offsetof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542, ___m_Devices_2)); }
	inline InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25  get_m_Devices_2() const { return ___m_Devices_2; }
	inline InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25 * get_address_of_m_Devices_2() { return &___m_Devices_2; }
	inline void set_m_Devices_2(InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25  value)
	{
		___m_Devices_2 = value;
	}

	inline static int32_t get_offset_of_m_Controls_3() { return static_cast<int32_t>(offsetof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542, ___m_Controls_3)); }
	inline InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16  get_m_Controls_3() const { return ___m_Controls_3; }
	inline InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16 * get_address_of_m_Controls_3() { return &___m_Controls_3; }
	inline void set_m_Controls_3(InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16  value)
	{
		___m_Controls_3 = value;
	}

	inline static int32_t get_offset_of_m_Requirements_4() { return static_cast<int32_t>(offsetof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542, ___m_Requirements_4)); }
	inline DeviceRequirementU5BU5D_t28DD1A13B7B7ED458C7436DFF554C297EB0FF0FA* get_m_Requirements_4() const { return ___m_Requirements_4; }
	inline DeviceRequirementU5BU5D_t28DD1A13B7B7ED458C7436DFF554C297EB0FF0FA** get_address_of_m_Requirements_4() { return &___m_Requirements_4; }
	inline void set_m_Requirements_4(DeviceRequirementU5BU5D_t28DD1A13B7B7ED458C7436DFF554C297EB0FF0FA* value)
	{
		___m_Requirements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Requirements_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25  ___m_Devices_2;
	InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16  ___m_Controls_3;
	DeviceRequirement_t441D2D75449ABE8DCB7178E3FAB2D4E04E081999_marshaled_pinvoke* ___m_Requirements_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_marshaled_com
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_tE5C2F539D938D49A210AE56F4694E66B84088E25  ___m_Devices_2;
	InputControlList_1_tE5332C6BC05DE6E6E7DA55779898D58E45DB5C16  ___m_Controls_3;
	DeviceRequirement_t441D2D75449ABE8DCB7178E3FAB2D4E04E081999_marshaled_com* ___m_Requirements_4;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::tag
	String_t* ___tag_3;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>3__tag
	String_t* ___U3CU3E3__tag_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>4__this
	MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * ___U3CU3E4__this_5;
	// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>s__1
	Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2  ___U3CU3Es__1_6;
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<contentScene>5__2
	SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  ___U3CcontentSceneU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_tag_3() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___tag_3)); }
	inline String_t* get_tag_3() const { return ___tag_3; }
	inline String_t** get_address_of_tag_3() { return &___tag_3; }
	inline void set_tag_3(String_t* value)
	{
		___tag_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tag_4() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3E3__tag_4)); }
	inline String_t* get_U3CU3E3__tag_4() const { return ___U3CU3E3__tag_4; }
	inline String_t** get_address_of_U3CU3E3__tag_4() { return &___U3CU3E3__tag_4; }
	inline void set_U3CU3E3__tag_4(String_t* value)
	{
		___U3CU3E3__tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystemProfile_tA09A13690CDA5D2A8A2058192A4B38DC0FE73C6E * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Es__1_6() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CU3Es__1_6)); }
	inline Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2  get_U3CU3Es__1_6() const { return ___U3CU3Es__1_6; }
	inline Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2 * get_address_of_U3CU3Es__1_6() { return &___U3CU3Es__1_6; }
	inline void set_U3CU3Es__1_6(Enumerator_t6EC953625FD8F7AF3B889AF0987E5D87D33E48F2  value)
	{
		___U3CU3Es__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Es__1_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Es__1_6))->___current_3))->___Asset_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcontentSceneU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C, ___U3CcontentSceneU3E5__2_7)); }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  get_U3CcontentSceneU3E5__2_7() const { return ___U3CcontentSceneU3E5__2_7; }
	inline SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7 * get_address_of_U3CcontentSceneU3E5__2_7() { return &___U3CcontentSceneU3E5__2_7; }
	inline void set_U3CcontentSceneU3E5__2_7(SceneInfo_tDCFB3E6A0D58296674F0D5769C45BF3D2DDFEFB7  value)
	{
		___U3CcontentSceneU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CcontentSceneU3E5__2_7))->___Asset_6), (void*)NULL);
		#endif
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllButtonPressesU3Ed__43_tA14841EBE23C716DDBAF8F85DE171802EC197504_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlCollection_t65853848DB18B58AD2AC7F0F73FA230A077AAFBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlEnumerator_tC8F8786BE176F6CEDAEE41455ED9FC1C59CFBA71_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CacheRefInstance_tC3239C7F98CED6CE4339D8E1FCC8E39E6B1BDAF3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CParseU3Ed__33_t2582C594767CD18C315F9FF98D5C6E43E018C7CE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchResult_t03169D29EFC2ACB2E13686FB8154CE6C22817542_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RefInstance_t6AF044071EE79CF6BF2B919753672544CD37CA54_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper>, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_patternsU3Ed__4_t1D03AACD2A6DDDBB913B403666DA91C89D348E8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t2C62F2D0148D6A01CCF19A53F9DB9CCADABA1D39_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DisposableObserver_t150B0C5ADA041F957C2AE601E8900E5519CF3573_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t4B465FDCD491C8FF5206169FBE6C3B7763100754_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReplayController_t4DF527A4D69FB3A4A7841283C44BBF2447D30BCB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<CaretBlink>d__164
struct U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__164_tCE3E031842022668E9690A3A360D3C063B351331_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<MouseDragOutsideRect>d__186
struct U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__186_t570F3C0E0490E37FC8E765B9B3CB4EA931A84FF0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
struct U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
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

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListControlLayoutsU3Ed__75_tA5F4325B4282F45DAF5C41FA181E91893D66137C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_tE23743D35B3B76482A4E0CABCA693BBC74133449_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tB265A864F18BA2AD37E1F58E42F271741EE96F69_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__167
struct U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGlobalVisualResetU3Ed__167_t9F4A06C0BF132296AC8A0D957BC22876807EF61A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__157
struct U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInputDownTimerU3Ed__157_t2ED66CA950E811D56F37EAFA4A950E1387C7D063_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.ComponentModel.LicFileLicenseProvider/LicFileLicense
struct LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) LicFileLicense_t48E8BE071EB96D1E15F23A7D51B387776EE73128_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t2F7684ED43AA56DE152F992016C086757FDEB696_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ListDictionaryInternal/NodeKeyValueCollection
struct NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) NodeKeyValueCollection_t44B1C4BBA18F2CF07D21D818E1D9274DA049B919_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_ActiveMixedRealityPointersU3Ed__16_tDD3F7D87954A1A684A56357CC772354D3C255BB9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateStateU3Ed__35_t93E1C2482C49C5B9DBFBDDFBC17F3032F5231064_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkCaretU3Ed__20_t3EE3E149D80825EEE3B5A8FE2BAC2F90982EE8BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeLineU3Ed__37_tDA42BE8B1503137123725DE63E80527101FD71CF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__8
struct U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeSceneContentWithDelayU3Ed__8_tE8893FC88D6FCE47ECDF5A265C8C4FDFD5003F0E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetScenesU3Ed__138_tFAB1EEB13A7BD95DC75FB3AF8315F01EF9ED663B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
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

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetContentSceneNamesByTagU3Ed__36_t6B3D87257C96021D7E3193FA48B3376ADFFC705C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper>, IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t03BB71E2E487CEE02AF07298B72559C0DD65BD20_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFollowSequenceU3Ed__31_tFB5AA31E7484AC9BB389F05C03EBE3600110527C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMoveHintSequenceU3Ed__29_tE97D21BC3F6D3EBE9B5E52A339AC946F3AE8D945_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[2] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2
{
	inline InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID;
		interfaceIds[2] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[3] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __thisValue = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE(__thisValue, ___value0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC(__thisValue, ___position0, NULL);
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
		IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93(__thisValue, ___position0, NULL);
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
		IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C(__thisValue, ___position0, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4(__thisValue, NULL);
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
		IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4(__thisValue, NULL);
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

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
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
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
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
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
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
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCreateOBJFileContentAsyncU3Ed__1_t905DFAC7AD82AFC673008B893233E6F27B3C7506_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.UtilityScripts.OnClickDestroy/<DestroyRpc>d__4
struct U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDestroyRpcU3Ed__4_t009CC3E55E810A22821493C9A4DE01578FFEE54B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.UtilityScripts.OnClickRpc/<ClickFlash>d__8
struct U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickFlashU3Ed__8_t432E1666F2168D6B3E33E1BDEF8A46672D9A5778_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRestartCoroutine>d__24
struct U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPauseAndRestartCoroutineU3Ed__24_t73761B80CDA345E0E91A63D46609931E23BD83E0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<RestartCoroutine>d__25
struct U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRestartCoroutineU3Ed__25_t85DFF8979498BA3CB132087250BEC823EC4C5A28_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.OpenXRSceneUnderstandingObserver/<StartDeserializingSceneFromStreamingAsset>d__7
struct U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartDeserializingSceneFromStreamingAssetU3Ed__7_tA4BAD0EEC75486D6310E5808850FB0617C9FB7D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OrderedDictionaryKeyValueCollection_t0641748F7D058A1C0FB253A29B9EC43DBCB7FA2E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for MRTK.Tutorials.GettingStarted.PartAssemblyController/<CheckPlacement>d__25
struct U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCheckPlacementU3Ed__25_t0D8FF2AC44055EC1028E17BB7906E6D8350D31A6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.SlotRacer.PlayerControl/<Start>d__12
struct U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__12_tB5C11B89694C0A2A84C1AB65C74E6EE1D020E086_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PlayerDetailsController/<UpdateUIPing>d__25
struct U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateUIPingU3Ed__25_t1E4C2084A1943D7C05BFE8BAEA41B39F2792B23D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PlayerListCell/<Add>d__16
struct U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAddU3Ed__16_t03AB5E53C8B90914500F4AA663D382B0D5512BEF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PlayerListCell/<Remove>d__17
struct U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRemoveU3Ed__17_tB49D77C05CBE631C093AB2888933875322522165_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PlayerListView/<UpdateUIPing>d__13
struct U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateUIPingU3Ed__13_t7EECE8CA73093778F3433CA4D165D6F94FD04F15_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.WorldLocking.Core.Plugin/Deserializer
struct Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Deserializer_t21EC5C2BB91207703B1A000B42362659DD3789EF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.WorldLocking.Core.Plugin/Serializer
struct Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Serializer_t35A19A6357BA78027BE1AB29E98E508404D14BEA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Deserializer
struct Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Deserializer_t6BB15B304711B6633DA2007E935F2AF89B1E3481_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.WorldLocking.Core.PluginNoop/Serializer
struct Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Serializer_t9550EB973613B9BA9296AD21938CC7AEC1939ADE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.PointerUtils/<GetPointers>d__7
struct U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPointersU3Ed__7_t6382692E836F459F10AE4C975808F55310FD44D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PressableButtonHoloLens2/<AnimateHighlightPlate>d__23
struct U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateHighlightPlateU3Ed__23_tF88C5F2B7AC768025F57B2C16F7C8C5B8188B86C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride/<ResetViewMatricesOnFrameEnd>d__4
struct U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetViewMatricesOnFrameEndU3Ed__4_t0BC5474E1BE22AC554C6BD469131B48968938919_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PropertyCell/<Add>d__8
struct U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAddU3Ed__8_tDFCBFF00DC376E31280C41761D656928EE86327D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PropertyCell/<Remove>d__9
struct U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRemoveU3Ed__9_tE60C690C5ABCEB2BD1C211DDB58C32C8FADB17FD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PropertyCell/<UpdateUIPing>d__7
struct U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateUIPingU3Ed__7_t89D20F0BB2866C40B09A2CCC09E522898553EFBB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PropertyListenerBase/<FadeOut>d__4
struct U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeOutU3Ed__4_t5C1B286B3D1625816F427A5B33D79A918E56DF5C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.ProximityLight/<PulseRoutine>d__22
struct U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPulseRoutineU3Ed__22_t2BE771E714AB15F52C239A8FEBE2C7C04F32234D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoAnimatePulse>d__40
struct U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoAnimatePulseU3Ed__40_tF593B5ED8B6D653DCAA6041A6938C29A1DA940AB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoRepeatPulse>d__41
struct U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoRepeatPulseU3Ed__41_t2E2B3516F8619F3F84708F2655254ECB071917F4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoSinglePulse>d__38
struct U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoSinglePulseU3Ed__38_tF8E946535FA6A877ACF7C53A8EAB80DB02625C26_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.PulseShader.PulseShaderHandler/<CoWaitForRepeatDelay>d__39
struct U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCoWaitForRepeatDelayU3Ed__39_t054A7D996D9AE57426006EAEAFE7EDA05AB78DCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PunCockpit/<OnDropdownConnectAs_CB>d__99
struct U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COnDropdownConnectAs_CBU3Ed__99_tAF325E61B3B3CD523D7C870F805E106EFAA1DC10_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.PunCockpitEmbed/<Start>d__6
struct U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CStartU3Ed__6_t871B93813AEEDB52C00E5B74505B0B3BE510856E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateAddition>d__10
struct U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateAdditionU3Ed__10_t59C7DD9ABB36956E1955DDECD307A0EE70C17C76_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.RegionListCell/<AnimateRemove>d__11
struct U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateRemoveU3Ed__11_t80030D639A4878F9E058D38F6CBA92EB2EBE6AD0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Realtime.RegionPinger/<RegionPingCoroutine>d__17
struct U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRegionPingCoroutineU3Ed__17_tBBF42CEF61C373B063026640122B2FC9B64D1874_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
struct Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_tAB213B8346D4CAD5732D0AB431BB7AD6A69B4450_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
struct U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__5_t81636FB27032C3D80B05D77F556E69CF91EF7DDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateAddition>d__11
struct U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateAdditionU3Ed__11_t2E21D5A18E122355F9A6903D463EB744E8330DCB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.RoomListCell/<AnimateRemove>d__12
struct U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateRemoveU3Ed__12_t3EC527C98DAC8AA2924718EFC40E657896568F64_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Photon.Pun.Demo.Cockpit.RoomListView/<clearStatus>d__12
struct U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CclearStatusU3Ed__12_t32F53CB98F6BC47EBD90336480D54D81C2B8D581_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<ResetAndDeterminePivot>d__29
struct U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CResetAndDeterminePivotU3Ed__29_t0D5B44C9186603C9CB45577B58ACE29BB95C7AEB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<RotateHintSequence>d__31
struct U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRotateHintSequenceU3Ed__31_tD7CA5F3DF204FCD3FD9D4DAAB3218D353CBE53ED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.RotateAroundPoint/<TrackPositionSequence>d__30
struct U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CTrackPositionSequenceU3Ed__30_t2319437E536559ABDD3BDE91FF28AE4B9266EE8F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Scripts.RouteManipulator/<DestroyObjectDelayed>d__25
struct U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDestroyObjectDelayedU3Ed__25_t7D04D133AD27BB059352C9C55B433D30CB857B64_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Scripts.RouteManipulator/<SnapHoldToSpatialMesh>d__29
struct U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSnapHoldToSpatialMeshU3Ed__29_tABD5A2F9FD5D0C84150476ABDA2E17E18E57F3E5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.RuntimeSceneUtils/<GetRootGameObjectsInLoadedScenes>d__2
struct U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper>(obj) {}

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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

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

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetRootGameObjectsInLoadedScenesU3Ed__2_t8DC2AA4D02B4E9544A3E3EB2C48A9078E80C9F2F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Scripts.ScrollRouteMenuPopulator/<UpdateListOverTime>d__33
struct U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateListOverTimeU3Ed__33_tBE028E660E170289C7FE19BB7BA53727A7AAD246_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Scrollbar/<ClickRepeat>d__58
struct U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CClickRepeatU3Ed__58_t4A7572863E83E4FDDB7EC44F38E5C0055224BDCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.ScrollingObjectCollection/<AnimateTo>d__204
struct U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAnimateToU3Ed__204_t4C43EB2182BD3895ECCE29F91D279DB65C8DA9E4_ComCallableWrapper(obj));
}
