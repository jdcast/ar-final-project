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
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<System.String>>
struct Task_1_t0E8DCF3287EB22723CCCA9DCEB6F171BF39A3CE9;
// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>
struct Task_1_t2E4655E30362118F83C7AD6482F39B7E8D73D60C;
// System.Threading.Tasks.Task`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>
struct Task_1_t4489417385AEDDD60FB05D73E4FE0C1925AECFF1;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
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
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
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
// Scripts.TCPClient
struct TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Scripts.TCPClient/<GetMesh>d__16
struct U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05;
// Scripts.TCPClient/<GetMeshList>d__18
struct U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42;
// Scripts.TCPClient/<GetRoute>d__17
struct U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1;
// Scripts.TCPClient/<GetRouteList>d__19
struct U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB;
// Scripts.TCPClient/<SendFile>d__13
struct U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A;
IL2CPP_EXTERN_C String_t* _stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42_m1D8217374EC172CD47CC46897CA465FFC73DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB_mC5236E58C24B6FCDCF52159E709A86BEBB9D633B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m343F3F299984673DBDF36E4359877989538AE23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mFA0D1D629238A218F73AB7D6B70F7EE4B1DC303F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mA64FBB01B644067DB66A5218CFE59B9C03062D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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


// Scripts.TCPClient/<GetMesh>d__16
struct U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<GetMesh>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> Scripts.TCPClient/<GetMesh>d__16::<>t__builder
	AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F  ___U3CU3Et__builder_1;
	// System.String Scripts.TCPClient/<GetMesh>d__16::mesh
	String_t* ___mesh_2;
	// Scripts.TCPClient Scripts.TCPClient/<GetMesh>d__16::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_3;
	// System.String Scripts.TCPClient/<GetMesh>d__16::<mesh_file>5__1
	String_t* ___U3Cmesh_fileU3E5__1_4;
	// System.Char[] Scripts.TCPClient/<GetMesh>d__16::<response>5__2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__2_5;
	// System.String Scripts.TCPClient/<GetMesh>d__16::<responseStr>5__3
	String_t* ___U3CresponseStrU3E5__3_6;
	// System.String Scripts.TCPClient/<GetMesh>d__16::<filename>5__4
	String_t* ___U3CfilenameU3E5__4_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<GetMesh>d__16::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_mesh_2() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___mesh_2)); }
	inline String_t* get_mesh_2() const { return ___mesh_2; }
	inline String_t** get_address_of_mesh_2() { return &___mesh_2; }
	inline void set_mesh_2(String_t* value)
	{
		___mesh_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CU3E4__this_3)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cmesh_fileU3E5__1_4() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3Cmesh_fileU3E5__1_4)); }
	inline String_t* get_U3Cmesh_fileU3E5__1_4() const { return ___U3Cmesh_fileU3E5__1_4; }
	inline String_t** get_address_of_U3Cmesh_fileU3E5__1_4() { return &___U3Cmesh_fileU3E5__1_4; }
	inline void set_U3Cmesh_fileU3E5__1_4(String_t* value)
	{
		___U3Cmesh_fileU3E5__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3Cmesh_fileU3E5__1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CresponseU3E5__2_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__2_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CresponseStrU3E5__3_6)); }
	inline String_t* get_U3CresponseStrU3E5__3_6() const { return ___U3CresponseStrU3E5__3_6; }
	inline String_t** get_address_of_U3CresponseStrU3E5__3_6() { return &___U3CresponseStrU3E5__3_6; }
	inline void set_U3CresponseStrU3E5__3_6(String_t* value)
	{
		___U3CresponseStrU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfilenameU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CfilenameU3E5__4_7)); }
	inline String_t* get_U3CfilenameU3E5__4_7() const { return ___U3CfilenameU3E5__4_7; }
	inline String_t** get_address_of_U3CfilenameU3E5__4_7() { return &___U3CfilenameU3E5__4_7; }
	inline void set_U3CfilenameU3E5__4_7(String_t* value)
	{
		___U3CfilenameU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfilenameU3E5__4_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// Scripts.TCPClient/<GetMeshList>d__18
struct U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<GetMeshList>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>> Scripts.TCPClient/<GetMeshList>d__18::<>t__builder
	AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2  ___U3CU3Et__builder_1;
	// Scripts.TCPClient Scripts.TCPClient/<GetMeshList>d__18::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.String> Scripts.TCPClient/<GetMeshList>d__18::<meshList>5__1
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CmeshListU3E5__1_3;
	// System.Char[] Scripts.TCPClient/<GetMeshList>d__18::<response>5__2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__2_4;
	// System.String Scripts.TCPClient/<GetMeshList>d__18::<responseStr>5__3
	String_t* ___U3CresponseStrU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<GetMeshList>d__18::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CU3E4__this_2)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CmeshListU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CmeshListU3E5__1_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CmeshListU3E5__1_3() const { return ___U3CmeshListU3E5__1_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CmeshListU3E5__1_3() { return &___U3CmeshListU3E5__1_3; }
	inline void set_U3CmeshListU3E5__1_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CmeshListU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmeshListU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CresponseU3E5__2_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__2_4() const { return ___U3CresponseU3E5__2_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__2_4() { return &___U3CresponseU3E5__2_4; }
	inline void set_U3CresponseU3E5__2_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CresponseStrU3E5__3_5)); }
	inline String_t* get_U3CresponseStrU3E5__3_5() const { return ___U3CresponseStrU3E5__3_5; }
	inline String_t** get_address_of_U3CresponseStrU3E5__3_5() { return &___U3CresponseStrU3E5__3_5; }
	inline void set_U3CresponseStrU3E5__3_5(String_t* value)
	{
		___U3CresponseStrU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
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


// Scripts.TCPClient/<GetRouteList>d__19
struct U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<GetRouteList>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>> Scripts.TCPClient/<GetRouteList>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2  ___U3CU3Et__builder_1;
	// Scripts.TCPClient Scripts.TCPClient/<GetRouteList>d__19::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.String> Scripts.TCPClient/<GetRouteList>d__19::<routeList>5__1
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CrouteListU3E5__1_3;
	// System.Char[] Scripts.TCPClient/<GetRouteList>d__19::<response>5__2
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__2_4;
	// System.String Scripts.TCPClient/<GetRouteList>d__19::<responseStr>5__3
	String_t* ___U3CresponseStrU3E5__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<GetRouteList>d__19::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CU3E4__this_2)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrouteListU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CrouteListU3E5__1_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CrouteListU3E5__1_3() const { return ___U3CrouteListU3E5__1_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CrouteListU3E5__1_3() { return &___U3CrouteListU3E5__1_3; }
	inline void set_U3CrouteListU3E5__1_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CrouteListU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrouteListU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CresponseU3E5__2_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__2_4() const { return ___U3CresponseU3E5__2_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__2_4() { return &___U3CresponseU3E5__2_4; }
	inline void set_U3CresponseU3E5__2_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CresponseStrU3E5__3_5)); }
	inline String_t* get_U3CresponseStrU3E5__3_5() const { return ___U3CresponseStrU3E5__3_5; }
	inline String_t** get_address_of_U3CresponseStrU3E5__3_5() { return &___U3CresponseStrU3E5__3_5; }
	inline void set_U3CresponseStrU3E5__3_5(String_t* value)
	{
		___U3CresponseStrU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB, ___U3CU3Eu__1_6)); }
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


// Scripts.TCPClient/<SendFile>d__13
struct U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8  : public RuntimeObject
{
public:
	// System.Int32 Scripts.TCPClient/<SendFile>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Scripts.TCPClient/<SendFile>d__13::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Scripts.TCPClient/<SendFile>d__13::filename
	String_t* ___filename_2;
	// System.String Scripts.TCPClient/<SendFile>d__13::serializedMesh
	String_t* ___serializedMesh_3;
	// Scripts.TCPClient Scripts.TCPClient/<SendFile>d__13::<>4__this
	TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * ___U3CU3E4__this_4;
	// System.Char[] Scripts.TCPClient/<SendFile>d__13::<response>5__1
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CresponseU3E5__1_5;
	// System.String Scripts.TCPClient/<SendFile>d__13::<responseStr>5__2
	String_t* ___U3CresponseStrU3E5__2_6;
	// System.Exception Scripts.TCPClient/<SendFile>d__13::<e>5__3
	Exception_t * ___U3CeU3E5__3_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32> Scripts.TCPClient/<SendFile>d__13::<>u__1
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CU3Et__builder_1)); }
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

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_2), (void*)value);
	}

	inline static int32_t get_offset_of_serializedMesh_3() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___serializedMesh_3)); }
	inline String_t* get_serializedMesh_3() const { return ___serializedMesh_3; }
	inline String_t** get_address_of_serializedMesh_3() { return &___serializedMesh_3; }
	inline void set_serializedMesh_3(String_t* value)
	{
		___serializedMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CU3E4__this_4)); }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__1_5() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CresponseU3E5__1_5)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CresponseU3E5__1_5() const { return ___U3CresponseU3E5__1_5; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CresponseU3E5__1_5() { return &___U3CresponseU3E5__1_5; }
	inline void set_U3CresponseU3E5__1_5(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CresponseU3E5__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseU3E5__1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CresponseStrU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CresponseStrU3E5__2_6)); }
	inline String_t* get_U3CresponseStrU3E5__2_6() const { return ___U3CresponseStrU3E5__2_6; }
	inline String_t** get_address_of_U3CresponseStrU3E5__2_6() { return &___U3CresponseStrU3E5__2_6; }
	inline void set_U3CresponseStrU3E5__2_6(String_t* value)
	{
		___U3CresponseStrU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresponseStrU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CeU3E5__3_7)); }
	inline Exception_t * get_U3CeU3E5__3_7() const { return ___U3CeU3E5__3_7; }
	inline Exception_t ** get_address_of_U3CeU3E5__3_7() { return &___U3CeU3E5__3_7; }
	inline void set_U3CeU3E5__3_7(Exception_t * value)
	{
		___U3CeU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Scripts.TCPClient
struct TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Scripts.TCPClient::host
	String_t* ___host_4;
	// System.String Scripts.TCPClient::port
	String_t* ___port_5;
	// System.Boolean Scripts.TCPClient::_useUWP
	bool ____useUWP_6;
	// Windows.Networking.Sockets.StreamSocket Scripts.TCPClient::socket
	StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * ___socket_7;
	// System.IO.StreamWriter Scripts.TCPClient::writer
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___writer_8;
	// System.IO.StreamReader Scripts.TCPClient::reader
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___reader_9;
	// System.Int32 Scripts.TCPClient::BUFFER_SIZE
	int32_t ___BUFFER_SIZE_10;
	// System.String Scripts.TCPClient::errorStatus
	String_t* ___errorStatus_11;
	// System.String Scripts.TCPClient::successStatus
	String_t* ___successStatus_12;

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

	inline static int32_t get_offset_of__useUWP_6() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ____useUWP_6)); }
	inline bool get__useUWP_6() const { return ____useUWP_6; }
	inline bool* get_address_of__useUWP_6() { return &____useUWP_6; }
	inline void set__useUWP_6(bool value)
	{
		____useUWP_6 = value;
	}

	inline static int32_t get_offset_of_socket_7() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___socket_7)); }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * get_socket_7() const { return ___socket_7; }
	inline StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 ** get_address_of_socket_7() { return &___socket_7; }
	inline void set_socket_7(StreamSocket_t3CD82424B360BB662A7EDBFC29AF3397C917E921 * value)
	{
		___socket_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_7), (void*)value);
	}

	inline static int32_t get_offset_of_writer_8() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___writer_8)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_writer_8() const { return ___writer_8; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_writer_8() { return &___writer_8; }
	inline void set_writer_8(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___writer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_8), (void*)value);
	}

	inline static int32_t get_offset_of_reader_9() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___reader_9)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_reader_9() const { return ___reader_9; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_reader_9() { return &___reader_9; }
	inline void set_reader_9(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___reader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_9), (void*)value);
	}

	inline static int32_t get_offset_of_BUFFER_SIZE_10() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___BUFFER_SIZE_10)); }
	inline int32_t get_BUFFER_SIZE_10() const { return ___BUFFER_SIZE_10; }
	inline int32_t* get_address_of_BUFFER_SIZE_10() { return &___BUFFER_SIZE_10; }
	inline void set_BUFFER_SIZE_10(int32_t value)
	{
		___BUFFER_SIZE_10 = value;
	}

	inline static int32_t get_offset_of_errorStatus_11() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___errorStatus_11)); }
	inline String_t* get_errorStatus_11() const { return ___errorStatus_11; }
	inline String_t** get_address_of_errorStatus_11() { return &___errorStatus_11; }
	inline void set_errorStatus_11(String_t* value)
	{
		___errorStatus_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorStatus_11), (void*)value);
	}

	inline static int32_t get_offset_of_successStatus_12() { return static_cast<int32_t>(offsetof(TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7, ___successStatus_12)); }
	inline String_t* get_successStatus_12() const { return ___successStatus_12; }
	inline String_t** get_address_of_successStatus_12() { return &___successStatus_12; }
	inline void set_successStatus_12(String_t* value)
	{
		___successStatus_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successStatus_12), (void*)value);
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


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Int32>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_gshared (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared (AsyncTaskMethodBuilder_1_tDD2A3BA099C327938EA03C35FDB1A7502BA73020 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF8F23D572031748AD428623AE16803455997E297_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m56C00E186C52C3A18C014B019D76A4D67D5EDC2D_gshared (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m8C29AFD88FFAB48A99FF7282D5BBC3C945E02D49_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);
// System.Void System.ValueTuple`3<System.Object,System.Object,System.Object>::.ctor(!0,!1,!2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_m8868D9B867F41FEEDC7C736B39DAB0889188EC78_gshared (ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAE131B53917AD7132F6BA2C05D5D17C38C5A2E59_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Quaternion>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB694FED8ED86CB8BDEE281F2AB01269B9B86CC84_gshared (List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___item0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m29F2BD2081981778A27B69F8183673928FD88754_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Object,System.Object,System.Object>>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mB77116BCE998196139BEFEA2EC78DE9F9EA37B55_gshared (AsyncTaskMethodBuilder_1_tB1CCD13BC2283917A63DABA66122A60C5A08976B * __this, ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D  ___result0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,System.Object>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_mEB2673CE750E1CEF9B34860793DD41850950C3F9_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, RuntimeObject ** ___stateMachine1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetMesh>d__16>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
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
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m29521EB618E38AF72FF0C4094070C1489F4129B3_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6 (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m3E4AB12877D4FE377F26708CF6899C49360007FA_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetMeshList>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42_m1D8217374EC172CD47CC46897CA465FFC73DB11A (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetRoute>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1_mEDAD8C8F0CFC31ED6FE93D928AE373E244F3D1A0 (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tDFAF8BB019ABF4E7B14E4E65C8FCDF4BD20A5C63 *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetRouteU3Ed__17_tA809249951CA23128278BAA3FACF2103A5EDF0D1 **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m8C29AFD88FFAB48A99FF7282D5BBC3C945E02D49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.ValueTuple`3<System.Collections.Generic.List`1<System.String>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Quaternion>>::.ctor(!0,!1,!2)
inline void ValueTuple_3__ctor_m7E53EB26F7AAE089259EB40549E6BE87E6F236C1 (ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___item10, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___item21, List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB * ___item32, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_3_t0F69F67A79A16D68CAAA5371DF2E8C7921239A2A *, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, List_1_t2558DEC96F7E6007750607B083ADB3AC48A30CCB *, const RuntimeMethod*))ValueTuple_3__ctor_m8868D9B867F41FEEDC7C736B39DAB0889188EC78_gshared)(__this, ___item10, ___item21, ___item32, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
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
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<System.String>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<GetRouteList>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB_mC5236E58C24B6FCDCF52159E709A86BEBB9D633B (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB **, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_m90601238F76D73C506C0984B8A6CE5E88D3EF86C_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>,Scripts.TCPClient/<SendFile>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * ___awaiter0, U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 ** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 **, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisRuntimeObject_mEB2673CE750E1CEF9B34860793DD41850950C3F9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Scripts.TCPClient/<GetMesh>d__16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshU3Ed__16__ctor_m35D9498678F3BF0CB454C88531B00AA7A402AB64 (U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<GetMesh>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshU3Ed__16_MoveNext_m3BC9DD9A3479D43712D1696C89370901DCDD1D63 (U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 * V_3 = NULL;
	bool V_4 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Exception_t * V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	int32_t G_B13_0 = 0;
	int32_t G_B21_0 = 0;
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
			goto IL_00a1;
		}

IL_0017:
		{
			goto IL_01bc;
		}

IL_001c:
		{
			// writer.Write("sendFile");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_3();
			NullCheck(L_3);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_8();
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D);
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_3();
			NullCheck(L_5);
			int32_t L_6 = L_5->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
			__this->set_U3CresponseU3E5__2_5(L_7);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_3();
			NullCheck(L_8);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__2_5();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_3();
			NullCheck(L_11);
			int32_t L_12 = L_11->get_BUFFER_SIZE_10();
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
				goto IL_00bd;
			}
		}

IL_007a:
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_17 = V_2;
			__this->set_U3CU3Eu__1_8(L_17);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_18 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), (U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A_RuntimeMethod_var);
			goto IL_02cc;
		}

IL_00a1:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_19 = __this->get_U3CU3Eu__1_8();
			V_2 = L_19;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_20 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
		}

IL_00bd:
		{
			int32_t L_22;
			L_22 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			// string responseStr = new string(response);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = __this->get_U3CresponseU3E5__2_5();
			String_t* L_24;
			L_24 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_23, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_6(L_24);
			// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
			String_t* L_25 = __this->get_U3CresponseStrU3E5__3_6();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			NullCheck(L_25);
			String_t* L_27;
			L_27 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_25, L_26, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_6(L_27);
			// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return null; }
			String_t* L_28 = __this->get_U3CresponseStrU3E5__3_6();
			NullCheck(L_28);
			int32_t L_29;
			L_29 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_28, /*hidden argument*/NULL);
			if ((((int32_t)L_29) <= ((int32_t)0)))
			{
				goto IL_0110;
			}
		}

IL_00fb:
		{
			String_t* L_30 = __this->get_U3CresponseStrU3E5__3_6();
			NullCheck(L_30);
			bool L_31;
			L_31 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_30, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
			G_B13_0 = ((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
			goto IL_0111;
		}

IL_0110:
		{
			G_B13_0 = 1;
		}

IL_0111:
		{
			V_4 = (bool)G_B13_0;
			bool L_32 = V_4;
			if (!L_32)
			{
				goto IL_011f;
			}
		}

IL_0117:
		{
			// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return null; }
			V_1 = (String_t*)NULL;
			goto IL_029b;
		}

IL_011f:
		{
			// string filename = mesh + ".txt";
			String_t* L_33 = __this->get_mesh_2();
			String_t* L_34;
			L_34 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_33, _stringLiteral6D2D60FB81DB361B60B9512761B3ED9FF250BB96, /*hidden argument*/NULL);
			__this->set_U3CfilenameU3E5__4_7(L_34);
			// writer.Write(filename);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_35 = __this->get_U3CU3E4__this_3();
			NullCheck(L_35);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_36 = L_35->get_writer_8();
			String_t* L_37 = __this->get_U3CfilenameU3E5__4_7();
			NullCheck(L_36);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, L_37);
			// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_38 = __this->get_U3CU3E4__this_3();
			NullCheck(L_38);
			int32_t L_39 = L_38->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_40 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_39);
			__this->set_U3CresponseU3E5__2_5(L_40);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_41 = __this->get_U3CU3E4__this_3();
			NullCheck(L_41);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_42 = L_41->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_43 = __this->get_U3CresponseU3E5__2_5();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_44 = __this->get_U3CU3E4__this_3();
			NullCheck(L_44);
			int32_t L_45 = L_44->get_BUFFER_SIZE_10();
			NullCheck(L_42);
			Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_46;
			L_46 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_42, L_43, 0, L_45);
			NullCheck(L_46);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_47;
			L_47 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_46, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
			V_5 = L_47;
			bool L_48;
			L_48 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
			if (L_48)
			{
				goto IL_01d9;
			}
		}

IL_0194:
		{
			int32_t L_49 = 1;
			V_0 = L_49;
			__this->set_U3CU3E1__state_0(L_49);
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_50 = V_5;
			__this->set_U3CU3Eu__1_8(L_50);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_51 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_51, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), (U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05_mCB023372F62401EE82CB50D644D6649193603B4A_RuntimeMethod_var);
			goto IL_02cc;
		}

IL_01bc:
		{
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_52 = __this->get_U3CU3Eu__1_8();
			V_5 = L_52;
			TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_53 = __this->get_address_of_U3CU3Eu__1_8();
			il2cpp_codegen_initobj(L_53, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
			int32_t L_54 = (-1);
			V_0 = L_54;
			__this->set_U3CU3E1__state_0(L_54);
		}

IL_01d9:
		{
			int32_t L_55;
			L_55 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
			// responseStr = new string(response);
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_56 = __this->get_U3CresponseU3E5__2_5();
			String_t* L_57;
			L_57 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_56, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_6(L_57);
			// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
			String_t* L_58 = __this->get_U3CresponseStrU3E5__3_6();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
			NullCheck(L_58);
			String_t* L_60;
			L_60 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_58, L_59, /*hidden argument*/NULL);
			__this->set_U3CresponseStrU3E5__3_6(L_60);
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { return null; }
			String_t* L_61 = __this->get_U3CresponseStrU3E5__3_6();
			NullCheck(L_61);
			int32_t L_62;
			L_62 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_61, /*hidden argument*/NULL);
			if ((((int32_t)L_62) <= ((int32_t)0)))
			{
				goto IL_0229;
			}
		}

IL_0217:
		{
			String_t* L_63 = __this->get_U3CresponseStrU3E5__3_6();
			NullCheck(L_63);
			bool L_64;
			L_64 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_63, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A, /*hidden argument*/NULL);
			G_B21_0 = ((int32_t)(L_64));
			goto IL_022a;
		}

IL_0229:
		{
			G_B21_0 = 1;
		}

IL_022a:
		{
			V_6 = (bool)G_B21_0;
			bool L_65 = V_6;
			if (!L_65)
			{
				goto IL_0235;
			}
		}

IL_0230:
		{
			// if (responseStr.Length <= 0 || responseStr.Equals("done")) { return null; }
			V_1 = (String_t*)NULL;
			goto IL_029b;
		}

IL_0235:
		{
			// mesh_file = responseStr.ToString();
			String_t* L_66 = __this->get_U3CresponseStrU3E5__3_6();
			NullCheck(L_66);
			String_t* L_67;
			L_67 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_66);
			__this->set_U3Cmesh_fileU3E5__1_4(L_67);
			// writer.Write("done");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_68 = __this->get_U3CU3E4__this_3();
			NullCheck(L_68);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_69 = L_68->get_writer_8();
			NullCheck(L_69);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
			// return mesh_file;
			String_t* L_70 = __this->get_U3Cmesh_fileU3E5__1_4();
			V_1 = L_70;
			goto IL_029b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0265;
		}
		throw e;
	}

CATCH_0265:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3Cmesh_fileU3E5__1_4((String_t*)NULL);
		__this->set_U3CresponseU3E5__2_5((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		__this->set_U3CresponseStrU3E5__3_6((String_t*)NULL);
		__this->set_U3CfilenameU3E5__4_7((String_t*)NULL);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_71 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_72 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_71, L_72, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mF736FFAC649614B42D89C5FE96F9E9D8EF69D962_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02cc;
	} // end catch (depth: 1)

IL_029b:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		__this->set_U3Cmesh_fileU3E5__1_4((String_t*)NULL);
		__this->set_U3CresponseU3E5__2_5((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		__this->set_U3CresponseStrU3E5__3_6((String_t*)NULL);
		__this->set_U3CfilenameU3E5__4_7((String_t*)NULL);
		AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F * L_73 = __this->get_address_of_U3CU3Et__builder_1();
		String_t* L_74 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6((AsyncTaskMethodBuilder_1_tC561582A8C127A49DDAFC5B849F2648DCEEFC84F *)L_73, L_74, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_mED41A75B510B80C4E8D4766516ABB37736D7ADF6_RuntimeMethod_var);
	}

IL_02cc:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<GetMesh>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshU3Ed__16_SetStateMachine_mA7CA2639EB951949DE30C1668F4FF55615FC2C4D (U3CGetMeshU3Ed__16_t1C7B5BA1C854BFF93D1AED249A4A890E6DCD9F05 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Scripts.TCPClient/<GetMeshList>d__18::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshListU3Ed__18__ctor_mE5C932ADF154AEDD1C6E815CCE9C2C1BB7EAF866 (U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<GetMeshList>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshListU3Ed__18_MoveNext_mBE4798DE999FA7DF37EC44DFA3DB051F1516ADE8 (U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42_m1D8217374EC172CD47CC46897CA465FFC73DB11A_RuntimeMethod_var);
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
	U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 * V_3 = NULL;
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
			// List<string> meshList = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			__this->set_U3CmeshListU3E5__1_3(L_2);
			// writer.Write("listFiles");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_8();
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4);
			goto IL_0165;
		}

IL_0038:
		{
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			int32_t L_6 = L_5->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
			__this->set_U3CresponseU3E5__2_4(L_7);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_2();
			NullCheck(L_8);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__2_4();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_2();
			NullCheck(L_11);
			int32_t L_12 = L_11->get_BUFFER_SIZE_10();
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
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42_m1D8217374EC172CD47CC46897CA465FFC73DB11A((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), (U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42_m1D8217374EC172CD47CC46897CA465FFC73DB11A_RuntimeMethod_var);
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
			// meshList.Add(responseStr);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_35 = __this->get_U3CmeshListU3E5__1_3();
			String_t* L_36 = __this->get_U3CresponseStrU3E5__3_5();
			NullCheck(L_35);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_35, L_36, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			// writer.Write("ready");
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_37 = __this->get_U3CU3E4__this_2();
			NullCheck(L_37);
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_38 = L_37->get_writer_8();
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
			// return meshList;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_39 = __this->get_U3CmeshListU3E5__1_3();
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
		__this->set_U3CmeshListU3E5__1_3((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
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
		__this->set_U3CmeshListU3E5__1_3((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)NULL);
		AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_43 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_42, L_43, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m79936F1840D6DDB2B4104F32E3AD14FECC781455_RuntimeMethod_var);
	}

IL_01b3:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<GetMeshList>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetMeshListU3Ed__18_SetStateMachine_mF18C5C20550A8F2D2BA23786B3DF89182D1C21D8 (U3CGetMeshListU3Ed__18_t6368F6B9E569D8117EF1316E139B21C560EA3C42 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_7 = L_6->get_writer_8();
			NullCheck(L_7);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, _stringLiteralC62B35471AD4837EBFA0D235731BB63D235F1A7D);
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_3();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_9);
			__this->set_U3CresponseU3E5__4_7(L_10);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_3();
			NullCheck(L_11);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_12 = L_11->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_13 = __this->get_U3CresponseU3E5__4_7();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_14 = __this->get_U3CU3E4__this_3();
			NullCheck(L_14);
			int32_t L_15 = L_14->get_BUFFER_SIZE_10();
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
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_43 = L_42->get_writer_8();
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
			int32_t L_46 = L_45->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_47 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_46);
			__this->set_U3CresponseU3E5__4_7(L_47);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_48 = __this->get_U3CU3E4__this_3();
			NullCheck(L_48);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_49 = L_48->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_50 = __this->get_U3CresponseU3E5__4_7();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_51 = __this->get_U3CU3E4__this_3();
			NullCheck(L_51);
			int32_t L_52 = L_51->get_BUFFER_SIZE_10();
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
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_135 = L_134->get_writer_8();
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
// System.Void Scripts.TCPClient/<GetRouteList>d__19::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__19__ctor_mB9F7D93EEEBEC5A0FE16FC422F52A831E5020A97 (U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<GetRouteList>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__19_MoveNext_m71105D503C1DA5CC40BBF58133B0A293041997D5 (U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB_mC5236E58C24B6FCDCF52159E709A86BEBB9D633B_RuntimeMethod_var);
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
	U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB * V_3 = NULL;
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
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_8();
			NullCheck(L_4);
			VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteralE83973DB65775DCD96E0AB8728F0C47DD1C20BB4);
			goto IL_0165;
		}

IL_0038:
		{
			// char[] response = new char[BUFFER_SIZE];
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_2();
			NullCheck(L_5);
			int32_t L_6 = L_5->get_BUFFER_SIZE_10();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
			__this->set_U3CresponseU3E5__2_4(L_7);
			// await reader.ReadAsync(response, 0, BUFFER_SIZE);
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_2();
			NullCheck(L_8);
			StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_9();
			CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__2_4();
			TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_2();
			NullCheck(L_11);
			int32_t L_12 = L_11->get_BUFFER_SIZE_10();
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
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB_mC5236E58C24B6FCDCF52159E709A86BEBB9D633B((AsyncTaskMethodBuilder_1_t1EC7662D6CA81DF5B386F49D7B552A7185591CF2 *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), (U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB **)(&V_3), /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB_mC5236E58C24B6FCDCF52159E709A86BEBB9D633B_RuntimeMethod_var);
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
			StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_38 = L_37->get_writer_8();
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
// System.Void Scripts.TCPClient/<GetRouteList>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRouteListU3Ed__19_SetStateMachine_m268E03D19ACC5384A5500C89881334184115840E (U3CGetRouteListU3Ed__19_t41AC7C495AEBDEF42E0AA6A0C95B4D64D959FEEB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
// System.Void Scripts.TCPClient/<SendFile>d__13::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__13__ctor_m5DFC2A666C7B992EBD418CD2AB8E9DD4271C76E3 (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Scripts.TCPClient/<SendFile>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__13_MoveNext_mBE2262C5CE320AD704AF713CC7754278DBE72E70 (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 * V_2 = NULL;
	bool V_3 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 10> __leave_targets;
	int32_t G_B17_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
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
				goto IL_02be;
			}

IL_0034:
			{
				// writer.Write("receiveFile");
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_3 = __this->get_U3CU3E4__this_4();
				NullCheck(L_3);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_4 = L_3->get_writer_8();
				NullCheck(L_4);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, _stringLiteral6554F85E21127B1EB12CA6CB250F2CEE2A5DB70B);
				// char[] response = new char[BUFFER_SIZE];
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_5 = __this->get_U3CU3E4__this_4();
				NullCheck(L_5);
				int32_t L_6 = L_5->get_BUFFER_SIZE_10();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_6);
				__this->set_U3CresponseU3E5__1_5(L_7);
				// await reader.ReadAsync(response, 0, BUFFER_SIZE);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_8 = __this->get_U3CU3E4__this_4();
				NullCheck(L_8);
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_9 = L_8->get_reader_9();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = __this->get_U3CresponseU3E5__1_5();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_11 = __this->get_U3CU3E4__this_4();
				NullCheck(L_11);
				int32_t L_12 = L_11->get_BUFFER_SIZE_10();
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
				__this->set_U3CU3Eu__1_8(L_17);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_18 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_18, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_1), (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6_RuntimeMethod_var);
				goto IL_03ae;
			}

IL_00b9:
			{
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_19 = __this->get_U3CU3Eu__1_8();
				V_1 = L_19;
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_20 = __this->get_address_of_U3CU3Eu__1_8();
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
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = __this->get_U3CresponseU3E5__1_5();
				String_t* L_24;
				L_24 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_23, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_24);
				// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
				String_t* L_25 = __this->get_U3CresponseStrU3E5__2_6();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
				NullCheck(L_25);
				String_t* L_27;
				L_27 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_25, L_26, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_27);
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				String_t* L_28 = __this->get_U3CresponseStrU3E5__2_6();
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
				String_t* L_30 = __this->get_U3CresponseStrU3E5__2_6();
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
				goto IL_039a;
			}

IL_0133:
			{
				// writer.Write(filename);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_33 = __this->get_U3CU3E4__this_4();
				NullCheck(L_33);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_34 = L_33->get_writer_8();
				String_t* L_35 = __this->get_filename_2();
				NullCheck(L_34);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, L_35);
				// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_36 = __this->get_U3CU3E4__this_4();
				NullCheck(L_36);
				int32_t L_37 = L_36->get_BUFFER_SIZE_10();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_38 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_37);
				__this->set_U3CresponseU3E5__1_5(L_38);
				// await reader.ReadAsync(response, 0, BUFFER_SIZE);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_39 = __this->get_U3CU3E4__this_4();
				NullCheck(L_39);
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_40 = L_39->get_reader_9();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_41 = __this->get_U3CresponseU3E5__1_5();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_42 = __this->get_U3CU3E4__this_4();
				NullCheck(L_42);
				int32_t L_43 = L_42->get_BUFFER_SIZE_10();
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
				__this->set_U3CU3Eu__1_8(L_48);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_4), (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6_RuntimeMethod_var);
				goto IL_03ae;
			}

IL_01ba:
			{
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_50 = __this->get_U3CU3Eu__1_8();
				V_4 = L_50;
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_51 = __this->get_address_of_U3CU3Eu__1_8();
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
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_54 = __this->get_U3CresponseU3E5__1_5();
				String_t* L_55;
				L_55 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_54, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_55);
				// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
				String_t* L_56 = __this->get_U3CresponseStrU3E5__2_6();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_57 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
				NullCheck(L_56);
				String_t* L_58;
				L_58 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_56, L_57, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_58);
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				String_t* L_59 = __this->get_U3CresponseStrU3E5__2_6();
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
				String_t* L_61 = __this->get_U3CresponseStrU3E5__2_6();
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
				goto IL_039a;
			}

IL_0237:
			{
				// writer.Write(serializedMesh);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_64 = __this->get_U3CU3E4__this_4();
				NullCheck(L_64);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_65 = L_64->get_writer_8();
				String_t* L_66 = __this->get_serializedMesh_3();
				NullCheck(L_65);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_65, L_66);
				// response = new char[BUFFER_SIZE]; // reset buffer so we don't accrue/read garabage accidentally for different size buffers
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_67 = __this->get_U3CU3E4__this_4();
				NullCheck(L_67);
				int32_t L_68 = L_67->get_BUFFER_SIZE_10();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_69 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)L_68);
				__this->set_U3CresponseU3E5__1_5(L_69);
				// await reader.ReadAsync(response, 0, BUFFER_SIZE);
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_70 = __this->get_U3CU3E4__this_4();
				NullCheck(L_70);
				StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_71 = L_70->get_reader_9();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_72 = __this->get_U3CresponseU3E5__1_5();
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_73 = __this->get_U3CU3E4__this_4();
				NullCheck(L_73);
				int32_t L_74 = L_73->get_BUFFER_SIZE_10();
				NullCheck(L_71);
				Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_75;
				L_75 = VirtFuncInvoker3< Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, int32_t, int32_t >::Invoke(14 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.TextReader::ReadAsync(System.Char[],System.Int32,System.Int32) */, L_71, L_72, 0, L_74);
				NullCheck(L_75);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_76;
				L_76 = Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3(L_75, /*hidden argument*/Task_1_GetAwaiter_mCE77762B5BC443E380BAE24E7B55955C3D9996A3_RuntimeMethod_var);
				V_6 = L_76;
				bool L_77;
				L_77 = TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mDEAA3EFC914F8F7467C9185DA30055A6C54519D2_RuntimeMethod_var);
				if (L_77)
				{
					goto IL_02db;
				}
			}

IL_0296:
			{
				int32_t L_78 = 2;
				V_0 = L_78;
				__this->set_U3CU3E1__state_0(L_78);
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_79 = V_6;
				__this->set_U3CU3Eu__1_8(L_79);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_80 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_80, (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 **)(&V_2), /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887_TisU3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8_m8ADB5EDC5EC6E6BA8311DBD207D0DE0177211BE6_RuntimeMethod_var);
				goto IL_03ae;
			}

IL_02be:
			{
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_81 = __this->get_U3CU3Eu__1_8();
				V_6 = L_81;
				TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * L_82 = __this->get_address_of_U3CU3Eu__1_8();
				il2cpp_codegen_initobj(L_82, sizeof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 ));
				int32_t L_83 = (-1);
				V_0 = L_83;
				__this->set_U3CU3E1__state_0(L_83);
			}

IL_02db:
			{
				int32_t L_84;
				L_84 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_RuntimeMethod_var);
				// responseStr = new string(response);
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_85 = __this->get_U3CresponseU3E5__1_5();
				String_t* L_86;
				L_86 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_85, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_86);
				// responseStr = responseStr.Trim(new Char[] { '\0' }); // trim any empty bytes in the buffer
				String_t* L_87 = __this->get_U3CresponseStrU3E5__2_6();
				CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_88 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
				NullCheck(L_87);
				String_t* L_89;
				L_89 = String_Trim_m10D967E03EDCB170227406426558B7FEA27CD6CC(L_87, L_88, /*hidden argument*/NULL);
				__this->set_U3CresponseStrU3E5__2_6(L_89);
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				String_t* L_90 = __this->get_U3CresponseStrU3E5__2_6();
				NullCheck(L_90);
				int32_t L_91;
				L_91 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_90, /*hidden argument*/NULL);
				if ((((int32_t)L_91) <= ((int32_t)0)))
				{
					goto IL_032e;
				}
			}

IL_0319:
			{
				String_t* L_92 = __this->get_U3CresponseStrU3E5__2_6();
				NullCheck(L_92);
				bool L_93;
				L_93 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_92, _stringLiteral1B610611D3BE45C25E5133155F9D83AF5F3832ED, /*hidden argument*/NULL);
				G_B33_0 = ((((int32_t)L_93) == ((int32_t)0))? 1 : 0);
				goto IL_032f;
			}

IL_032e:
			{
				G_B33_0 = 1;
			}

IL_032f:
			{
				V_7 = (bool)G_B33_0;
				bool L_94 = V_7;
				if (!L_94)
				{
					goto IL_0338;
				}
			}

IL_0335:
			{
				// if (responseStr.Length <= 0 || !responseStr.Equals("ready")) { return; }
				goto IL_039a;
			}

IL_0338:
			{
				// writer.Write("done");
				TCPClient_tBE532CEF984FB02F7FAFEF2DC7ADD6E78D0E09F7 * L_95 = __this->get_U3CU3E4__this_4();
				NullCheck(L_95);
				StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_96 = L_95->get_writer_8();
				NullCheck(L_96);
				VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_96, _stringLiteralDB7A330309BFA84FB156E4FBA6A35A48D3B78C3A);
				__this->set_U3CresponseU3E5__1_5((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
				__this->set_U3CresponseStrU3E5__2_6((String_t*)NULL);
				goto IL_037e;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_035f;
			}
			throw e;
		}

CATCH_035f:
		{ // begin catch(System.Exception)
			// catch (Exception e)
			V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
			Exception_t * L_97 = V_8;
			__this->set_U3CeU3E5__3_7(L_97);
			// Debug.Log(e.ToString());
			Exception_t * L_98 = __this->get_U3CeU3E5__3_7();
			NullCheck(L_98);
			String_t* L_99;
			L_99 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_99, /*hidden argument*/NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_037e;
		} // end catch (depth: 2)

IL_037e:
		{
			goto IL_039a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0380;
		}
		throw e;
	}

CATCH_0380:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_100 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_101 = V_8;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_100, L_101, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03ae;
	} // end catch (depth: 1)

IL_039a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_102 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_102, /*hidden argument*/NULL);
	}

IL_03ae:
	{
		return;
	}
}
// System.Void Scripts.TCPClient/<SendFile>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendFileU3Ed__13_SetStateMachine_mFCE9E45DF074D2A491585B38046A639BA9DEC96D (U3CSendFileU3Ed__13_t9A1B67FA886ED46D87A95E1A43673E9F31BC5BD8 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
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
