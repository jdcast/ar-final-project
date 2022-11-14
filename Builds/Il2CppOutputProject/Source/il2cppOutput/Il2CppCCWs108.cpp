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


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Byte[]>
struct Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473;
// System.Func`1<System.String>
struct Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor>>
struct Func_2_t8D7C4BA94FFEAFA20F28FCE64840B0FE1C6030CE;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceOsInfo>>
struct Func_2_t66B912C90F564830A7922A88359ADD604A164AFD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.GameObject>>
struct Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>>
struct Func_2_t396C2A92922BBB2A6CB7A55350D1786273665A1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.HttpWebResponse>>
struct Func_2_t83231D2AB79D8A20265500D02AEA10F0531EF5CC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.IAnchorManager>>
struct Func_2_t7C5DDFEE969A673C02BA997C6E38BB19AAA9085F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>>
struct Func_2_t96075A6FD711BEAE3C2CED906FBF26BBDC89938E;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>>
struct Func_2_t2CC658E8FBDE5D82A16BD0E9ED3FD0112A2D4433;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>>
struct Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps>>
struct Func_2_tC4A170AAA7F61A680B871561DA2C27CF26EE84FB;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IntPtr>>
struct Func_2_t9C736A8FFB7936F6D0B131359E37C558D21B76E2;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo>>
struct Func_2_t81B0EB7AEB14907FB2E7FD1A278C128EE21FABC9;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>>
struct Func_2_t1E6DDF609D3E894280F039511686198AAE0C3B7B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName>>
struct Func_2_t7B7F45362C6B9598BACB042B2B17A7CCA6EF06A1;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.Material>>
struct Func_2_tB4C50B69CF591E97A7E78859196CDAA97BE2A060;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<UnityEngine.Mesh>>
struct Func_2_t1294B6691BFFA0021F01550D5C9398949C0577EC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>>
struct Func_2_t9BD3EA37C16E98E7E941124B6925734343848907;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>>
struct Func_2_t69019C95A5142516E064BF33D9AD3BDEF7578D10;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>>
struct Func_2_tC1059740D81C8E52C892D4D4B582CD907BFCF115;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>>
struct Func_2_tA28793C0F1CFA815FBEB2737D5323EC4C30F3FA5;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>>
struct Func_2_t0EC3C69E577E1ED2B0B9FEE4328CD6FAC9AA5606;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>>
struct Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor>
struct TaskFactory_1_tF2FD3BC629AC095879136129E07174FA01FA244A;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceOsInfo>
struct TaskFactory_1_tBD1B45C03FAF5463A0B91061EC71C634C9200134;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.GameObject>
struct TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56;
// System.Threading.Tasks.TaskFactory`1<Windows.Perception.People.HandMeshObserver>
struct TaskFactory_1_t3D74EA14CFC3901838CA351F7CC6ED8B48B15FF0;
// System.Threading.Tasks.TaskFactory`1<System.Net.HttpWebResponse>
struct TaskFactory_1_t1B64F65F924FFCC928A668B5EF32DEE31478691B;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.WorldLocking.Core.IAnchorManager>
struct TaskFactory_1_t3662C5167ED579F7DE452A08B82E859F264948A7;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>
struct TaskFactory_1_tDA28D2BA62A4A2B0A561BFF05045D6CB2ACB43E0;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct TaskFactory_1_t4A579C7CDD0AD507BD1741FD1FD11A3A5D3B9BD1;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps>
struct TaskFactory_1_t73BA32A7E75131733AE230469784026CE14A5CE9;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.IntPtr>
struct TaskFactory_1_tD87279FAF06F0066CB51D6F002B9F8568190B208;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo>
struct TaskFactory_1_tEF7F72BBEDCA449A6DDC8FFC325FA330B56C39DE;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct TaskFactory_1_tC8008D594399D087FC058067DB2E2B5B3F63A356;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName>
struct TaskFactory_1_t34DABE809B567ADC99600D8249C81FBFF23A06F4;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Material>
struct TaskFactory_1_tBFEFD238E0D778546F0EC2E5692AF23AC05FD855;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Mesh>
struct TaskFactory_1_tF1A800AE104E590436BE8D86EB48AA996BC06060;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct TaskFactory_1_t066C7E47C7502F181CAC9D7D7E557B6E9FC9B18C;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct TaskFactory_1_tD2B66BA90D4097E6AE9104DE786004DE724F5D58;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct TaskFactory_1_tD3E3D90B7FD10FE1F00DD7AE246F00E5D63FE2E7;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct TaskFactory_1_tB949B70C6DA67224F7F0B393A83B4430ED70BBA5;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct TaskFactory_1_t1A01075AA5AEEA563D382093872AD13264F0E878;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor
struct CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceOsInfo
struct DeviceOsInfo_t61EF591AE3B62CD0FA82D56C37B8B3CD447088D7;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// Microsoft.MixedReality.WorldLocking.Core.IAnchorManager
struct IAnchorManager_tB1FFFF700C45A94CE8729186EF82591176412F41;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg
struct ILocalPeg_t60254AE29AA84A683956D1922AAFC0EA251594A6;
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps
struct InstalledApps_t91DF6F0F261D8E8B004B2786B96395414D6673B6;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo
struct IpConfigInfo_tDD421ACFCEB36EAF9B1D6EE7AE5E66DB05A91F6A;
// Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties
struct LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName
struct MachineName_tF6A7D21A775B5F304033C800297B9236B986629F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces
struct NetworkInterfaces_t1F0AE43A767FCE25334C6402D0EBBC0B9880B3F1;
// Microsoft.MixedReality.OpenXR.OpenXRAnchorStore
struct OpenXRAnchorStore_tE6DB138E546421658694AA40E60D47886FDF2FDC;
// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo
struct PowerStateInfo_t743EA6A8D6B4D5D91DF3307023C493BC002A4AEC;
// Microsoft.Azure.SpatialAnchors.SessionStatus
struct SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


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


// Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.Response::responseBody
	String_t* ___responseBody_1;
	// System.Func`1<System.String> Microsoft.MixedReality.Toolkit.Utilities.Response::responseBodyAction
	Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * ___responseBodyAction_2;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Utilities.Response::responseData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___responseData_3;
	// System.Func`1<System.Byte[]> Microsoft.MixedReality.Toolkit.Utilities.Response::responseDataAction
	Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * ___responseDataAction_4;
	// System.Int64 Microsoft.MixedReality.Toolkit.Utilities.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_responseBody_1() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___responseBody_1)); }
	inline String_t* get_responseBody_1() const { return ___responseBody_1; }
	inline String_t** get_address_of_responseBody_1() { return &___responseBody_1; }
	inline void set_responseBody_1(String_t* value)
	{
		___responseBody_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBody_1), (void*)value);
	}

	inline static int32_t get_offset_of_responseBodyAction_2() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___responseBodyAction_2)); }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * get_responseBodyAction_2() const { return ___responseBodyAction_2; }
	inline Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 ** get_address_of_responseBodyAction_2() { return &___responseBodyAction_2; }
	inline void set_responseBodyAction_2(Func_1_t2F3325DADD1F420568A48646BFC825E9F29472B1 * value)
	{
		___responseBodyAction_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseBodyAction_2), (void*)value);
	}

	inline static int32_t get_offset_of_responseData_3() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___responseData_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_responseData_3() const { return ___responseData_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_responseData_3() { return &___responseData_3; }
	inline void set_responseData_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___responseData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseData_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseDataAction_4() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___responseDataAction_4)); }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * get_responseDataAction_4() const { return ___responseDataAction_4; }
	inline Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 ** get_address_of_responseDataAction_4() { return &___responseDataAction_4; }
	inline void set_responseDataAction_4(Func_1_tD8059ADEA67BC54CB9CB92E8719A3A6BE8473473 * value)
	{
		___responseDataAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseDataAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5, ___U3CResponseCodeU3Ek__BackingField_5)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_5() const { return ___U3CResponseCodeU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_5() { return &___U3CResponseCodeU3Ek__BackingField_5; }
	inline void set_U3CResponseCodeU3Ek__BackingField_5(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Utilities.Response
struct Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___responseBody_1;
	Il2CppMethodPointer ___responseBodyAction_2;
	Il2CppSafeArray/*NONE*/* ___responseData_3;
	Il2CppMethodPointer ___responseDataAction_4;
	int64_t ___U3CResponseCodeU3Ek__BackingField_5;
};

// Microsoft.MixedReality.OpenXR.SerializationCompletionReason
struct SerializationCompletionReason_t448924FAFCAB1BF852AA17CF353206BF5087378D 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t448924FAFCAB1BF852AA17CF353206BF5087378D, ___value___2)); }
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


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor>
struct Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6, ___m_result_40)); }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * get_m_result_40() const { return ___m_result_40; }
	inline CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(CloudSpatialAnchor_t03448002616C4EF52821932C9ACC3DEFA04A8D70 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF2FD3BC629AC095879136129E07174FA01FA244A * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8D7C4BA94FFEAFA20F28FCE64840B0FE1C6030CE * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tF2FD3BC629AC095879136129E07174FA01FA244A * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tF2FD3BC629AC095879136129E07174FA01FA244A ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tF2FD3BC629AC095879136129E07174FA01FA244A * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8D7C4BA94FFEAFA20F28FCE64840B0FE1C6030CE * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8D7C4BA94FFEAFA20F28FCE64840B0FE1C6030CE ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8D7C4BA94FFEAFA20F28FCE64840B0FE1C6030CE * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceOsInfo>
struct Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	DeviceOsInfo_t61EF591AE3B62CD0FA82D56C37B8B3CD447088D7 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487, ___m_result_40)); }
	inline DeviceOsInfo_t61EF591AE3B62CD0FA82D56C37B8B3CD447088D7 * get_m_result_40() const { return ___m_result_40; }
	inline DeviceOsInfo_t61EF591AE3B62CD0FA82D56C37B8B3CD447088D7 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(DeviceOsInfo_t61EF591AE3B62CD0FA82D56C37B8B3CD447088D7 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBD1B45C03FAF5463A0B91061EC71C634C9200134 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t66B912C90F564830A7922A88359ADD604A164AFD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tBD1B45C03FAF5463A0B91061EC71C634C9200134 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tBD1B45C03FAF5463A0B91061EC71C634C9200134 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tBD1B45C03FAF5463A0B91061EC71C634C9200134 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t66B912C90F564830A7922A88359ADD604A164AFD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t66B912C90F564830A7922A88359ADD604A164AFD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t66B912C90F564830A7922A88359ADD604A164AFD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C, ___m_result_40)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_result_40() const { return ___m_result_40; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t7616F193B779041331AAF6115F4E457BA4737C56 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF0F1D24987897E5B40E43DBECDCF7D8605AAB24D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6, ___m_result_40)); }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * get_m_result_40() const { return ___m_result_40; }
	inline HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(HandMeshObserver_t4E960DFA1ED29FC104F755C33586FA3AE67CD273 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3D74EA14CFC3901838CA351F7CC6ED8B48B15FF0 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t396C2A92922BBB2A6CB7A55350D1786273665A1F * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3D74EA14CFC3901838CA351F7CC6ED8B48B15FF0 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3D74EA14CFC3901838CA351F7CC6ED8B48B15FF0 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3D74EA14CFC3901838CA351F7CC6ED8B48B15FF0 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t396C2A92922BBB2A6CB7A55350D1786273665A1F * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t396C2A92922BBB2A6CB7A55350D1786273665A1F ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t396C2A92922BBB2A6CB7A55350D1786273665A1F * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.HttpWebResponse>
struct Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857, ___m_result_40)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_m_result_40() const { return ___m_result_40; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t1B64F65F924FFCC928A668B5EF32DEE31478691B * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t83231D2AB79D8A20265500D02AEA10F0531EF5CC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t1B64F65F924FFCC928A668B5EF32DEE31478691B * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t1B64F65F924FFCC928A668B5EF32DEE31478691B ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t1B64F65F924FFCC928A668B5EF32DEE31478691B * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t83231D2AB79D8A20265500D02AEA10F0531EF5CC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t83231D2AB79D8A20265500D02AEA10F0531EF5CC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t83231D2AB79D8A20265500D02AEA10F0531EF5CC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.IAnchorManager>
struct Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3662C5167ED579F7DE452A08B82E859F264948A7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7C5DDFEE969A673C02BA997C6E38BB19AAA9085F * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3662C5167ED579F7DE452A08B82E859F264948A7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3662C5167ED579F7DE452A08B82E859F264948A7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3662C5167ED579F7DE452A08B82E859F264948A7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t7C5DDFEE969A673C02BA997C6E38BB19AAA9085F * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t7C5DDFEE969A673C02BA997C6E38BB19AAA9085F ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t7C5DDFEE969A673C02BA997C6E38BB19AAA9085F * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t59286038B43A588F6C7510F65EEBDD12F1B50FCF * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t8387297726CF7D42C8E21B98835B7E65A03B8030 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>
struct Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tDA28D2BA62A4A2B0A561BFF05045D6CB2ACB43E0 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t96075A6FD711BEAE3C2CED906FBF26BBDC89938E * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tDA28D2BA62A4A2B0A561BFF05045D6CB2ACB43E0 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tDA28D2BA62A4A2B0A561BFF05045D6CB2ACB43E0 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tDA28D2BA62A4A2B0A561BFF05045D6CB2ACB43E0 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t96075A6FD711BEAE3C2CED906FBF26BBDC89938E * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t96075A6FD711BEAE3C2CED906FBF26BBDC89938E ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t96075A6FD711BEAE3C2CED906FBF26BBDC89938E * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2, ___m_result_40)); }
	inline RuntimeObject* get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4A579C7CDD0AD507BD1741FD1FD11A3A5D3B9BD1 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2CC658E8FBDE5D82A16BD0E9ED3FD0112A2D4433 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4A579C7CDD0AD507BD1741FD1FD11A3A5D3B9BD1 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4A579C7CDD0AD507BD1741FD1FD11A3A5D3B9BD1 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4A579C7CDD0AD507BD1741FD1FD11A3A5D3B9BD1 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2CC658E8FBDE5D82A16BD0E9ED3FD0112A2D4433 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2CC658E8FBDE5D82A16BD0E9ED3FD0112A2D4433 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2CC658E8FBDE5D82A16BD0E9ED3FD0112A2D4433 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74, ___m_result_40)); }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * get_m_result_40() const { return ___m_result_40; }
	inline InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(InputAnimation_tD9345F0646C7227BE0F5D4D1E286B399D7753534 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC5773A7F5FB0315235DABE4696D4D0ABF288DE0D * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t60234BEFF912B17E5B854081B3E154E746B06B84 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps>
struct Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	InstalledApps_t91DF6F0F261D8E8B004B2786B96395414D6673B6 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF, ___m_result_40)); }
	inline InstalledApps_t91DF6F0F261D8E8B004B2786B96395414D6673B6 * get_m_result_40() const { return ___m_result_40; }
	inline InstalledApps_t91DF6F0F261D8E8B004B2786B96395414D6673B6 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(InstalledApps_t91DF6F0F261D8E8B004B2786B96395414D6673B6 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t73BA32A7E75131733AE230469784026CE14A5CE9 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC4A170AAA7F61A680B871561DA2C27CF26EE84FB * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t73BA32A7E75131733AE230469784026CE14A5CE9 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t73BA32A7E75131733AE230469784026CE14A5CE9 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t73BA32A7E75131733AE230469784026CE14A5CE9 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC4A170AAA7F61A680B871561DA2C27CF26EE84FB * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC4A170AAA7F61A680B871561DA2C27CF26EE84FB ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC4A170AAA7F61A680B871561DA2C27CF26EE84FB * value)
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


// System.Threading.Tasks.Task`1<System.IntPtr>
struct Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	intptr_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A, ___m_result_40)); }
	inline intptr_t get_m_result_40() const { return ___m_result_40; }
	inline intptr_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(intptr_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD87279FAF06F0066CB51D6F002B9F8568190B208 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9C736A8FFB7936F6D0B131359E37C558D21B76E2 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tD87279FAF06F0066CB51D6F002B9F8568190B208 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tD87279FAF06F0066CB51D6F002B9F8568190B208 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tD87279FAF06F0066CB51D6F002B9F8568190B208 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t9C736A8FFB7936F6D0B131359E37C558D21B76E2 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t9C736A8FFB7936F6D0B131359E37C558D21B76E2 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t9C736A8FFB7936F6D0B131359E37C558D21B76E2 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo>
struct Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	IpConfigInfo_tDD421ACFCEB36EAF9B1D6EE7AE5E66DB05A91F6A * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027, ___m_result_40)); }
	inline IpConfigInfo_tDD421ACFCEB36EAF9B1D6EE7AE5E66DB05A91F6A * get_m_result_40() const { return ___m_result_40; }
	inline IpConfigInfo_tDD421ACFCEB36EAF9B1D6EE7AE5E66DB05A91F6A ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(IpConfigInfo_tDD421ACFCEB36EAF9B1D6EE7AE5E66DB05A91F6A * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tEF7F72BBEDCA449A6DDC8FFC325FA330B56C39DE * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t81B0EB7AEB14907FB2E7FD1A278C128EE21FABC9 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tEF7F72BBEDCA449A6DDC8FFC325FA330B56C39DE * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tEF7F72BBEDCA449A6DDC8FFC325FA330B56C39DE ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tEF7F72BBEDCA449A6DDC8FFC325FA330B56C39DE * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t81B0EB7AEB14907FB2E7FD1A278C128EE21FABC9 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t81B0EB7AEB14907FB2E7FD1A278C128EE21FABC9 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t81B0EB7AEB14907FB2E7FD1A278C128EE21FABC9 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD, ___m_result_40)); }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * get_m_result_40() const { return ___m_result_40; }
	inline LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(LocalPegAndProperties_t899539BF61CC76111A707C31179ECC273DB5C6D3 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC8008D594399D087FC058067DB2E2B5B3F63A356 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1E6DDF609D3E894280F039511686198AAE0C3B7B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tC8008D594399D087FC058067DB2E2B5B3F63A356 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tC8008D594399D087FC058067DB2E2B5B3F63A356 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tC8008D594399D087FC058067DB2E2B5B3F63A356 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1E6DDF609D3E894280F039511686198AAE0C3B7B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1E6DDF609D3E894280F039511686198AAE0C3B7B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1E6DDF609D3E894280F039511686198AAE0C3B7B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName>
struct Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	MachineName_tF6A7D21A775B5F304033C800297B9236B986629F * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D, ___m_result_40)); }
	inline MachineName_tF6A7D21A775B5F304033C800297B9236B986629F * get_m_result_40() const { return ___m_result_40; }
	inline MachineName_tF6A7D21A775B5F304033C800297B9236B986629F ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(MachineName_tF6A7D21A775B5F304033C800297B9236B986629F * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t34DABE809B567ADC99600D8249C81FBFF23A06F4 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t7B7F45362C6B9598BACB042B2B17A7CCA6EF06A1 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t34DABE809B567ADC99600D8249C81FBFF23A06F4 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t34DABE809B567ADC99600D8249C81FBFF23A06F4 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t34DABE809B567ADC99600D8249C81FBFF23A06F4 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t7B7F45362C6B9598BACB042B2B17A7CCA6EF06A1 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t7B7F45362C6B9598BACB042B2B17A7CCA6EF06A1 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t7B7F45362C6B9598BACB042B2B17A7CCA6EF06A1 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_t4194BAE566D6853949C3692ACC88876B297CD975  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t4194BAE566D6853949C3692ACC88876B297CD975, ___m_result_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_result_40() const { return ___m_result_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tBFEFD238E0D778546F0EC2E5692AF23AC05FD855 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tB4C50B69CF591E97A7E78859196CDAA97BE2A060 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tBFEFD238E0D778546F0EC2E5692AF23AC05FD855 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tBFEFD238E0D778546F0EC2E5692AF23AC05FD855 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tBFEFD238E0D778546F0EC2E5692AF23AC05FD855 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tB4C50B69CF591E97A7E78859196CDAA97BE2A060 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tB4C50B69CF591E97A7E78859196CDAA97BE2A060 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tB4C50B69CF591E97A7E78859196CDAA97BE2A060 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<UnityEngine.Mesh>
struct Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A, ___m_result_40)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_result_40() const { return ___m_result_40; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tF1A800AE104E590436BE8D86EB48AA996BC06060 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1294B6691BFFA0021F01550D5C9398949C0577EC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tF1A800AE104E590436BE8D86EB48AA996BC06060 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tF1A800AE104E590436BE8D86EB48AA996BC06060 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tF1A800AE104E590436BE8D86EB48AA996BC06060 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1294B6691BFFA0021F01550D5C9398949C0577EC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1294B6691BFFA0021F01550D5C9398949C0577EC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1294B6691BFFA0021F01550D5C9398949C0577EC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct Task_1_t68101F485713C137AD3B19867F405A375A202E36  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	NetworkInterfaces_t1F0AE43A767FCE25334C6402D0EBBC0B9880B3F1 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t68101F485713C137AD3B19867F405A375A202E36, ___m_result_40)); }
	inline NetworkInterfaces_t1F0AE43A767FCE25334C6402D0EBBC0B9880B3F1 * get_m_result_40() const { return ___m_result_40; }
	inline NetworkInterfaces_t1F0AE43A767FCE25334C6402D0EBBC0B9880B3F1 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(NetworkInterfaces_t1F0AE43A767FCE25334C6402D0EBBC0B9880B3F1 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t68101F485713C137AD3B19867F405A375A202E36_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t066C7E47C7502F181CAC9D7D7E557B6E9FC9B18C * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t9BD3EA37C16E98E7E941124B6925734343848907 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t68101F485713C137AD3B19867F405A375A202E36_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t066C7E47C7502F181CAC9D7D7E557B6E9FC9B18C * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t066C7E47C7502F181CAC9D7D7E557B6E9FC9B18C ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t066C7E47C7502F181CAC9D7D7E557B6E9FC9B18C * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t68101F485713C137AD3B19867F405A375A202E36_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t9BD3EA37C16E98E7E941124B6925734343848907 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t9BD3EA37C16E98E7E941124B6925734343848907 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t9BD3EA37C16E98E7E941124B6925734343848907 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	OpenXRAnchorStore_tE6DB138E546421658694AA40E60D47886FDF2FDC * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC, ___m_result_40)); }
	inline OpenXRAnchorStore_tE6DB138E546421658694AA40E60D47886FDF2FDC * get_m_result_40() const { return ___m_result_40; }
	inline OpenXRAnchorStore_tE6DB138E546421658694AA40E60D47886FDF2FDC ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(OpenXRAnchorStore_tE6DB138E546421658694AA40E60D47886FDF2FDC * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD2B66BA90D4097E6AE9104DE786004DE724F5D58 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t69019C95A5142516E064BF33D9AD3BDEF7578D10 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tD2B66BA90D4097E6AE9104DE786004DE724F5D58 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tD2B66BA90D4097E6AE9104DE786004DE724F5D58 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tD2B66BA90D4097E6AE9104DE786004DE724F5D58 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t69019C95A5142516E064BF33D9AD3BDEF7578D10 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t69019C95A5142516E064BF33D9AD3BDEF7578D10 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t69019C95A5142516E064BF33D9AD3BDEF7578D10 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	PowerStateInfo_t743EA6A8D6B4D5D91DF3307023C493BC002A4AEC * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982, ___m_result_40)); }
	inline PowerStateInfo_t743EA6A8D6B4D5D91DF3307023C493BC002A4AEC * get_m_result_40() const { return ___m_result_40; }
	inline PowerStateInfo_t743EA6A8D6B4D5D91DF3307023C493BC002A4AEC ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(PowerStateInfo_t743EA6A8D6B4D5D91DF3307023C493BC002A4AEC * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tD3E3D90B7FD10FE1F00DD7AE246F00E5D63FE2E7 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC1059740D81C8E52C892D4D4B582CD907BFCF115 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tD3E3D90B7FD10FE1F00DD7AE246F00E5D63FE2E7 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tD3E3D90B7FD10FE1F00DD7AE246F00E5D63FE2E7 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tD3E3D90B7FD10FE1F00DD7AE246F00E5D63FE2E7 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC1059740D81C8E52C892D4D4B582CD907BFCF115 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC1059740D81C8E52C892D4D4B582CD907BFCF115 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC1059740D81C8E52C892D4D4B582CD907BFCF115 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880, ___m_result_40)); }
	inline Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5  get_m_result_40() const { return ___m_result_40; }
	inline Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t6D496C49C62BA506F35533BE79AF5B2BA24B64B5  value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBody_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseBodyAction_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseData_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_result_40))->___responseDataAction_4), (void*)NULL);
		#endif
	}
};

struct Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB949B70C6DA67224F7F0B393A83B4430ED70BBA5 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tA28793C0F1CFA815FBEB2737D5323EC4C30F3FA5 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB949B70C6DA67224F7F0B393A83B4430ED70BBA5 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB949B70C6DA67224F7F0B393A83B4430ED70BBA5 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB949B70C6DA67224F7F0B393A83B4430ED70BBA5 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tA28793C0F1CFA815FBEB2737D5323EC4C30F3FA5 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tA28793C0F1CFA815FBEB2737D5323EC4C30F3FA5 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tA28793C0F1CFA815FBEB2737D5323EC4C30F3FA5 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t1A01075AA5AEEA563D382093872AD13264F0E878 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t0EC3C69E577E1ED2B0B9FEE4328CD6FAC9AA5606 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t1A01075AA5AEEA563D382093872AD13264F0E878 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t1A01075AA5AEEA563D382093872AD13264F0E878 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t1A01075AA5AEEA563D382093872AD13264F0E878 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t0EC3C69E577E1ED2B0B9FEE4328CD6FAC9AA5606 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t0EC3C69E577E1ED2B0B9FEE4328CD6FAC9AA5606 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t0EC3C69E577E1ED2B0B9FEE4328CD6FAC9AA5606 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA, ___m_result_40)); }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * get_m_result_40() const { return ___m_result_40; }
	inline SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(SessionStatus_t3ED9BC0613433CC7C311985ECC8288C9DC4230DF * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t0C8E73A89F562A0382F33B73C5236628A2DD2891 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tF78E8EE9678C9393F45C04AADD6838E0CB3481AF * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);



// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.CloudSpatialAnchor>
struct Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t0CD9812C9A52EAA494FAF3E6BB2922F20A76BBB6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DeviceOsInfo>
struct Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tAE15A1919647B2649C12E67EC8D3F1B3BDC06487_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.GameObject>
struct Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tF6D78846E534BFB99B0E861E88F19FE43D8F954C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t91456D786DCDB709E9CE4AD7D55867EAA4E9B8E6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.HttpWebResponse>
struct Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t4B8CF50BCA70ADAD54A2813B464DF4A25F896857_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.Core.IAnchorManager>
struct Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t56B03BE3DA03B4439DE0D2104904B7923D96990A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t3AFFF2D3C6A7D6D2B49F501EAD698F6A2B7B957F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg>
struct Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5F83784AA6FFD199D340A256B33BBB75F8D44FC8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA70A9FE08635FB12AD8856B20DA60783D75B02E2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Input.InputAnimation>
struct Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tB231B84F8F2E5D004D7EE56C7AC413E80914BC74_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.InstalledApps>
struct Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t6F7CA8E69F36445E669783F681D8C2EFC6E264AF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.IntPtr>
struct Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tF5D51354847BBB1E35CCB8B6236A2AB032324D4A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.IpConfigInfo>
struct Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tD7DA066BF6FD0D25584440485D1B69708EB10027_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>
struct Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tF8B2733DA16626DB73CE57A3494E0E5F162F85CD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.MachineName>
struct Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tF4D5169AA34923DD2C107ABEE06B314423303D1D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.Material>
struct Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t4194BAE566D6853949C3692ACC88876B297CD975(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t4194BAE566D6853949C3692ACC88876B297CD975_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<UnityEngine.Mesh>
struct Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t289E84E25BF5051BAF7D347ED5FF5D5A56930F5A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.NetworkInterfaces>
struct Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t68101F485713C137AD3B19867F405A375A202E36(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t68101F485713C137AD3B19867F405A375A202E36_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.OpenXRAnchorStore>
struct Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t272F7528B174222367F7E30F65E57D1E7527B6AC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.WindowsDevicePortal.PowerStateInfo>
struct Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t5DB16C7733B6BC0F3DCFAD3C5DD224C7D5B13982_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Utilities.Response>
struct Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tEC990C8BF45429164CE40D283A3F83E130F3A880_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.MixedReality.OpenXR.SerializationCompletionReason>
struct Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t6333ABC9205D9FB56AB07CF959DDA4AFFB5757E8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<Microsoft.Azure.SpatialAnchors.SessionStatus>
struct Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper>(obj) {}

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

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tA104FC954AB18874E2536C4AF9E6C204DED071AA_ComCallableWrapper(obj));
}
