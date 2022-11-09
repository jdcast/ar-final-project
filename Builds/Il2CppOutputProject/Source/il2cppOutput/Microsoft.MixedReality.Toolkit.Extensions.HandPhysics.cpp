#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_tCAA81AB160A13E632399F0F4409E13F13B838902;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody[]
struct JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t81B35976BCAABB86634D8CAB6C5EBECE36D65D3A;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCAA81AB160A13E632399F0F4409E13F13B838902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604;
IL2CPP_EXTERN_C String_t* _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA525E745821399EEF6F1D2733A285A82160939;
IL2CPP_EXTERN_C String_t* _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392;
IL2CPP_EXTERN_C String_t* _stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_m9012C4A466AC0CBD1277E8318158B6FA598434C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_m33DEBA2AB8FFBF3CA816C09363DACCDD46E16E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1C19AE3A56AB91987527111BBF08C8DE22CFFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB8379109D09F89709C33DBE17D0A79E460FDCE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754;
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t88A74FE42FBA51DCA8ACBD840434D12529D39358 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_tCAA81AB160A13E632399F0F4409E13F13B838902  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902, ____items_1)); }
	inline JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* get__items_1() const { return ____items_1; }
	inline JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCAA81AB160A13E632399F0F4409E13F13B838902_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902_StaticFields, ____emptyArray_5)); }
	inline JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointKinematicBodyU5BU5D_tFDB57421711513B2C61413147478D8A7A505DA5E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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

struct Il2CppArrayBounds;

// System.Array


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

// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Enumerator_tFBD6B058F84161E431312D383C14974637A14214 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFBD6B058F84161E431312D383C14974637A14214, ___list_0)); }
	inline List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * get_list_0() const { return ___list_0; }
	inline List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFBD6B058F84161E431312D383C14974637A14214, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFBD6B058F84161E431312D383C14974637A14214, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFBD6B058F84161E431312D383C14974637A14214, ___current_3)); }
	inline JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * get_current_3() const { return ___current_3; }
	inline JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02__padding[20];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B
	__StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02  ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0;

public:
	inline static int32_t get_offset_of_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F_StaticFields, ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0)); }
	inline __StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02  get_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() const { return ___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0; }
	inline __StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02 * get_address_of_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0() { return &___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0; }
	inline void set_U33F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0(__StaticArrayInitTypeSizeU3D20_t91C67A2A5315C39CDF4578E6494C9D1F4D23FE02  value)
	{
		___3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isInitialized_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isEnabled_5)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
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

// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Unity.Profiling.LowLevel.MarkerFlags
struct MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8 
{
public:
	// System.UInt16 Unity.Profiling.LowLevel.MarkerFlags::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarkerFlags_t4A8B5185BAD24803CE9A57187867CB93451AA9E8, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D  : public BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35  : public BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * ___handPhysicsServiceProfile_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CHandPhysicsServiceRootU3Ek__BackingField_10;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_12;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_14;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_15;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * ___jointKinematicBodies_18;

public:
	inline static int32_t get_offset_of_handPhysicsServiceProfile_9() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___handPhysicsServiceProfile_9)); }
	inline HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * get_handPhysicsServiceProfile_9() const { return ___handPhysicsServiceProfile_9; }
	inline HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C ** get_address_of_handPhysicsServiceProfile_9() { return &___handPhysicsServiceProfile_9; }
	inline void set_handPhysicsServiceProfile_9(HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * value)
	{
		___handPhysicsServiceProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPhysicsServiceProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsServiceRootU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___U3CHandPhysicsServiceRootU3Ek__BackingField_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CHandPhysicsServiceRootU3Ek__BackingField_10() const { return ___U3CHandPhysicsServiceRootU3Ek__BackingField_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CHandPhysicsServiceRootU3Ek__BackingField_10() { return &___U3CHandPhysicsServiceRootU3Ek__BackingField_10; }
	inline void set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CHandPhysicsServiceRootU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandPhysicsServiceRootU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsLayerU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___U3CHandPhysicsLayerU3Ek__BackingField_11)); }
	inline int32_t get_U3CHandPhysicsLayerU3Ek__BackingField_11() const { return ___U3CHandPhysicsLayerU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CHandPhysicsLayerU3Ek__BackingField_11() { return &___U3CHandPhysicsLayerU3Ek__BackingField_11; }
	inline void set_U3CHandPhysicsLayerU3Ek__BackingField_11(int32_t value)
	{
		___U3CHandPhysicsLayerU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CUsePalmKinematicBodyU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___U3CUsePalmKinematicBodyU3Ek__BackingField_12)); }
	inline bool get_U3CUsePalmKinematicBodyU3Ek__BackingField_12() const { return ___U3CUsePalmKinematicBodyU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUsePalmKinematicBodyU3Ek__BackingField_12() { return &___U3CUsePalmKinematicBodyU3Ek__BackingField_12; }
	inline void set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(bool value)
	{
		___U3CUsePalmKinematicBodyU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_13() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___fingerTipKinematicBodyPrefab_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_13() const { return ___fingerTipKinematicBodyPrefab_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_13() { return &___fingerTipKinematicBodyPrefab_13; }
	inline void set_fingerTipKinematicBodyPrefab_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_14() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___palmKinematicBodyPrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_14() const { return ___palmKinematicBodyPrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_14() { return &___palmKinematicBodyPrefab_14; }
	inline void set_palmKinematicBodyPrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_handJointService_15() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___handJointService_15)); }
	inline RuntimeObject* get_handJointService_15() const { return ___handJointService_15; }
	inline RuntimeObject** get_address_of_handJointService_15() { return &___handJointService_15; }
	inline void set_handJointService_15(RuntimeObject* value)
	{
		___handJointService_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_15), (void*)value);
	}

	inline static int32_t get_offset_of_jointKinematicBodies_18() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35, ___jointKinematicBodies_18)); }
	inline List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * get_jointKinematicBodies_18() const { return ___jointKinematicBodies_18; }
	inline List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 ** get_address_of_jointKinematicBodies_18() { return &___jointKinematicBodies_18; }
	inline void set_jointKinematicBodies_18(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * value)
	{
		___jointKinematicBodies_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointKinematicBodies_18), (void*)value);
	}
};

struct HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* ___handednessTypes_16;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* ___fingerTipTypes_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::UpdatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdatePerfMarker_19;

public:
	inline static int32_t get_offset_of_handednessTypes_16() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields, ___handednessTypes_16)); }
	inline HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* get_handednessTypes_16() const { return ___handednessTypes_16; }
	inline HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754** get_address_of_handednessTypes_16() { return &___handednessTypes_16; }
	inline void set_handednessTypes_16(HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* value)
	{
		___handednessTypes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handednessTypes_16), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTipTypes_17() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields, ___fingerTipTypes_17)); }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* get_fingerTipTypes_17() const { return ___fingerTipTypes_17; }
	inline TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F** get_address_of_fingerTipTypes_17() { return &___fingerTipTypes_17; }
	inline void set_fingerTipTypes_17(TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* value)
	{
		___fingerTipTypes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipTypes_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_19() { return static_cast<int32_t>(offsetof(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields, ___UpdatePerfMarker_19)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdatePerfMarker_19() const { return ___UpdatePerfMarker_19; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdatePerfMarker_19() { return &___UpdatePerfMarker_19; }
	inline void set_UpdatePerfMarker_19(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdatePerfMarker_19 = value;
	}
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C  : public BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::handPhysicsLayer
	int32_t ___handPhysicsLayer_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::fingerTipKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fingerTipKinematicBodyPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::usePalmKinematicBody
	bool ___usePalmKinematicBody_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::palmKinematicBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___palmKinematicBodyPrefab_8;

public:
	inline static int32_t get_offset_of_handPhysicsLayer_5() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C, ___handPhysicsLayer_5)); }
	inline int32_t get_handPhysicsLayer_5() const { return ___handPhysicsLayer_5; }
	inline int32_t* get_address_of_handPhysicsLayer_5() { return &___handPhysicsLayer_5; }
	inline void set_handPhysicsLayer_5(int32_t value)
	{
		___handPhysicsLayer_5 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_6() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C, ___fingerTipKinematicBodyPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fingerTipKinematicBodyPrefab_6() const { return ___fingerTipKinematicBodyPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fingerTipKinematicBodyPrefab_6() { return &___fingerTipKinematicBodyPrefab_6; }
	inline void set_fingerTipKinematicBodyPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fingerTipKinematicBodyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePalmKinematicBody_7() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C, ___usePalmKinematicBody_7)); }
	inline bool get_usePalmKinematicBody_7() const { return ___usePalmKinematicBody_7; }
	inline bool* get_address_of_usePalmKinematicBody_7() { return &___usePalmKinematicBody_7; }
	inline void set_usePalmKinematicBody_7(bool value)
	{
		___usePalmKinematicBody_7 = value;
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_8() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C, ___palmKinematicBodyPrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_palmKinematicBodyPrefab_8() const { return ___palmKinematicBodyPrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_palmKinematicBodyPrefab_8() { return &___palmKinematicBodyPrefab_8; }
	inline void set_palmKinematicBodyPrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___palmKinematicBodyPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<Joint>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CJointU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<HandednessType>k__BackingField
	uint8_t ___U3CHandednessTypeU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_6;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnEnableAction>k__BackingField
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * ___U3COnEnableActionU3Ek__BackingField_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnDisableAction>k__BackingField
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * ___U3COnDisableActionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CJointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49, ___U3CJointU3Ek__BackingField_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CJointU3Ek__BackingField_4() const { return ___U3CJointU3Ek__BackingField_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CJointU3Ek__BackingField_4() { return &___U3CJointU3Ek__BackingField_4; }
	inline void set_U3CJointU3Ek__BackingField_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CJointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandednessTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49, ___U3CHandednessTypeU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessTypeU3Ek__BackingField_5() const { return ___U3CHandednessTypeU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessTypeU3Ek__BackingField_5() { return &___U3CHandednessTypeU3Ek__BackingField_5; }
	inline void set_U3CHandednessTypeU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49, ___U3CJointTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_6() const { return ___U3CJointTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_6() { return &___U3CJointTypeU3Ek__BackingField_6; }
	inline void set_U3CJointTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnEnableActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49, ___U3COnEnableActionU3Ek__BackingField_7)); }
	inline Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * get_U3COnEnableActionU3Ek__BackingField_7() const { return ___U3COnEnableActionU3Ek__BackingField_7; }
	inline Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 ** get_address_of_U3COnEnableActionU3Ek__BackingField_7() { return &___U3COnEnableActionU3Ek__BackingField_7; }
	inline void set_U3COnEnableActionU3Ek__BackingField_7(Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * value)
	{
		___U3COnEnableActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnEnableActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDisableActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49, ___U3COnDisableActionU3Ek__BackingField_8)); }
	inline Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * get_U3COnDisableActionU3Ek__BackingField_8() const { return ___U3COnDisableActionU3Ek__BackingField_8; }
	inline Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 ** get_address_of_U3COnDisableActionU3Ek__BackingField_8() { return &___U3COnDisableActionU3Ek__BackingField_8; }
	inline void set_U3COnDisableActionU3Ek__BackingField_8(Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * value)
	{
		___U3COnDisableActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDisableActionU3Ek__BackingField_8), (void*)value);
	}
};

struct JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateStatePerfMarker
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  ___UpdateStatePerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateStatePerfMarker_9() { return static_cast<int32_t>(offsetof(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_StaticFields, ___UpdateStatePerfMarker_9)); }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  get_UpdateStatePerfMarker_9() const { return ___UpdateStatePerfMarker_9; }
	inline ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * get_address_of_UpdateStatePerfMarker_9() { return &___UpdateStatePerfMarker_9; }
	inline void set_UpdateStatePerfMarker_9(ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  value)
	{
		___UpdateStatePerfMarker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m02DC963DDA03FC6D18EBB9ADDCC4BFB0648AD9A0_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::.ctor()
inline void List_1__ctor_mE1C19AE3A56AB91987527111BBF08C8DE22CFFA9 (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m2700BE55D2A59EDCB6C25E8105A294F391AE8593 (BaseExtensionService_t8E87CEDD05078448482EACAFBE5F7EF4A896330D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile2, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_m9012C4A466AC0CBD1277E8318158B6FA598434C8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_m02DC963DDA03FC6D18EBB9ADDCC4BFB0648AD9A0_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m5D1A948B8F56E24677428CE699313C780E6BFB11 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m38C54E38C3FAC160C8B35CE05098FF730785D725 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Initialize_m2854DC6A1734D75511EF9330824787E4E6B2E0B9 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mA2E8F4FABBC2EC607588B1DE3538FC3AF54E484D_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m780D21CEC07962CCC5B6375A1F9E7C067B00C146_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA3B2BF6956A0F376E59F6B09CA9F09318A0FC745_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m954A44D5CCB0D2D4604F8C8B644B47C91DAF315E_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m8E8DBDE10966AB5590FD497FABC0D91F05186EE6_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m41B2BD12F65BCD0911D55726E65DD2ABAC5A1415 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mBBB6C13BF489EE2D0BFC33CE46D92BE05EAD776A_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m8520F4221B5F82EB6B0AD19AA595B3A3211426A6 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m7A14AE02D6A421697FD06FBA6F570A6C43FA4D11_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Update_m968330C6BC77927CC3FE558A1E64671E8AA1CB16 (BaseService_tF2C2512816D1D0EE872AC911E3BAF7F9E5A44C16 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::GetEnumerator()
inline Enumerator_tFBD6B058F84161E431312D383C14974637A14214  List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFBD6B058F84161E431312D383C14974637A14214  (*) (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Current()
inline JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_inline (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * (*) (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_mF186A805C914BDA45C795A613027A8DB0CA4B981 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m6E346B5195E5C973F3C178E53E310B9475FADDFF_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m28BBF8AC962A56B7B523F7316FB902F5B77F86C3_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m8152F64340D53FCB5CAC70194544524641A03308_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m8425BDE5F14A8926ABFC118F0D1B882A46EFBF41 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::MoveNext()
inline bool Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9 (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Dispose()
inline void Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m0D4EACB43B2573C08A702003BC9CCE59A9EDB0F2 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m616F6AD91F63765A800E74F21B1AB664790FBA61_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m021431F78BBC5323CAF194A213F1017678CE5FB3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 ** ___jointKinematicBody5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Add(!0)
inline void List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * __this, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 *, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m345553F14DBEF117E75ECF73A98A950E74628AA2_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_mB72C8FBE25C7D4D417B5836DD69FFDB5242A089A (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Count()
inline int32_t List_1_get_Count_mB8379109D09F89709C33DBE17D0A79E460FDCE58_inline (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * GameObject_GetComponent_TisJointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_m33DEBA2AB8FFBF3CA816C09363DACCDD46E16E0A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_mB4CB23090DC8B818D239EC054F3B772ED1260825_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m8B6D0C357E5ADF3DF2FFD4E1F07C944C55E80589_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mABE9ABA5C514E086D617682809ED5CA84B6C72DC (BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnEnableAction_m01AF30642D405B067D7070DD60B922A631BB6824_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Invoke(!0)
inline void Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED (Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * __this, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 *, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnDisableAction_m2978A58C499C8BF65F5FD03B424E3040915D1D25_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0 (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD (String_t* ___name0, uint16_t ___categoryId1, uint16_t ___flags2, int32_t ___metadataCount3, const RuntimeMethod* method);
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4 (intptr_t ___markerPtr0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__ctor_m3946ADDBB1D5BE5ED6DDF4E49CD2E7D7B38F4EC0 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1C19AE3A56AB91987527111BBF08C8DE22CFFA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCAA81AB160A13E632399F0F4409E13F13B838902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IMixedRealityHandJointService handJointService = null;
		__this->set_handJointService_15((RuntimeObject*)NULL);
		// private List<JointKinematicBody> jointKinematicBodies = new List<JointKinematicBody>();
		List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_0 = (List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 *)il2cpp_codegen_object_new(List_1_tCAA81AB160A13E632399F0F4409E13F13B838902_il2cpp_TypeInfo_var);
		List_1__ctor_mE1C19AE3A56AB91987527111BBF08C8DE22CFFA9(L_0, /*hidden argument*/List_1__ctor_mE1C19AE3A56AB91987527111BBF08C8DE22CFFA9_RuntimeMethod_var);
		__this->set_jointKinematicBodies_18(L_0);
		// public HandPhysicsService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_3 = ___profile2;
		BaseExtensionService__ctor_m2700BE55D2A59EDCB6C25E8105A294F391AE8593(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// handPhysicsServiceProfile = (HandPhysicsServiceProfile)profile;
		BaseMixedRealityProfile_tC5DBD7146B1E1D467DE81BA1EAB45133408A59E1 * L_4 = ___profile2;
		__this->set_handPhysicsServiceProfile_9(((HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C *)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_mF186A805C914BDA45C795A613027A8DB0CA4B981 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_m9012C4A466AC0CBD1277E8318158B6FA598434C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->get_handJointService_15();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tB5CDABAF57AEFF02EB99AEC0144C51C89D980A26_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_m9012C4A466AC0CBD1277E8318158B6FA598434C8(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_m9012C4A466AC0CBD1277E8318158B6FA598434C8_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m7A14AE02D6A421697FD06FBA6F570A6C43FA4D11 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m616F6AD91F63765A800E74F21B1AB664790FBA61 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m780D21CEC07962CCC5B6375A1F9E7C067B00C146 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m345553F14DBEF117E75ECF73A98A950E74628AA2 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m954A44D5CCB0D2D4604F8C8B644B47C91DAF315E (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m0D4EACB43B2573C08A702003BC9CCE59A9EDB0F2 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m41B2BD12F65BCD0911D55726E65DD2ABAC5A1415 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// fingerTipKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_fingerTipKinematicBodyPrefab_13(L_0);
		// if (fingerTipKinematicBodyPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_fingerTipKinematicBodyPrefab_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m5D1A948B8F56E24677428CE699313C780E6BFB11(__this, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0023:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m38C54E38C3FAC160C8B35CE05098FF730785D725(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_PalmKinematicBodyPrefab_mB72C8FBE25C7D4D417B5836DD69FFDB5242A089A (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m8520F4221B5F82EB6B0AD19AA595B3A3211426A6 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// palmKinematicBodyPrefab = value;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_palmKinematicBodyPrefab_14(L_0);
		// if (palmKinematicBodyPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_palmKinematicBodyPrefab_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m5D1A948B8F56E24677428CE699313C780E6BFB11(__this, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_0023:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m38C54E38C3FAC160C8B35CE05098FF730785D725(__this, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Initialize_m4BE663C91796FC9D8B6202CADA1E99CD3665FB69 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// base.Initialize();
		BaseService_Initialize_m2854DC6A1734D75511EF9330824787E4E6B2E0B9(__this, /*hidden argument*/NULL);
		// HandPhysicsLayer = handPhysicsServiceProfile.HandPhysicsLayer;
		HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * L_0 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = HandPhysicsServiceProfile_get_HandPhysicsLayer_mA2E8F4FABBC2EC607588B1DE3538FC3AF54E484D_inline(L_0, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsLayer_m780D21CEC07962CCC5B6375A1F9E7C067B00C146_inline(__this, L_1, /*hidden argument*/NULL);
		// UsePalmKinematicBody = handPhysicsServiceProfile.UsePalmKinematicBody;
		HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * L_2 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_2);
		bool L_3;
		L_3 = HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA3B2BF6956A0F376E59F6B09CA9F09318A0FC745_inline(L_2, /*hidden argument*/NULL);
		HandPhysicsService_set_UsePalmKinematicBody_m954A44D5CCB0D2D4604F8C8B644B47C91DAF315E_inline(__this, L_3, /*hidden argument*/NULL);
		// FingerTipKinematicBodyPrefab = handPhysicsServiceProfile.FingerTipKinematicBodyPrefab;
		HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * L_4 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m8E8DBDE10966AB5590FD497FABC0D91F05186EE6_inline(L_4, /*hidden argument*/NULL);
		HandPhysicsService_set_FingerTipKinematicBodyPrefab_m41B2BD12F65BCD0911D55726E65DD2ABAC5A1415(__this, L_5, /*hidden argument*/NULL);
		// PalmKinematicBodyPrefab = handPhysicsServiceProfile.PalmKinematicBodyPrefab;
		HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * L_6 = __this->get_handPhysicsServiceProfile_9();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mBBB6C13BF489EE2D0BFC33CE46D92BE05EAD776A_inline(L_6, /*hidden argument*/NULL);
		HandPhysicsService_set_PalmKinematicBodyPrefab_m8520F4221B5F82EB6B0AD19AA595B3A3211426A6(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Enable_m380CE0139A444F9F0790B1001DD24DC77E6F44D7 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Enable();
		BaseService_Enable_m0009FE0AE05820A130A513ADFC9CA5E119A00258(__this, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = new GameObject("Hand Physics Service");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteral1D091D04287D4679285A2E663193C6F6B9AFDEAA, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsServiceRoot_m7A14AE02D6A421697FD06FBA6F570A6C43FA4D11_inline(__this, L_0, /*hidden argument*/NULL);
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_m5D1A948B8F56E24677428CE699313C780E6BFB11(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Disable_m90C0F7548C96D6B53A9FE770CA417A40F7222930 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (HandPhysicsServiceRoot != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// UnityEngine.Object.Destroy(HandPhysicsServiceRoot);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = null;
		HandPhysicsService_set_HandPhysicsServiceRoot_m7A14AE02D6A421697FD06FBA6F570A6C43FA4D11_inline(__this, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// base.Disable();
		BaseService_Disable_m35061F42654DE06AE5575CE47C32AE43CF9AC0B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Update_m90DD0886A663F4C3D5668540B97E17E0971CD7DD (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tFBD6B058F84161E431312D383C14974637A14214  V_2;
	memset((&V_2), 0, sizeof(V_2));
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * G_B6_0 = NULL;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * G_B5_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_0 = NULL;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * G_B7_1 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_19();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// base.Update();
			BaseService_Update_m968330C6BC77927CC3FE558A1E64671E8AA1CB16(__this, /*hidden argument*/NULL);
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_2 = __this->get_jointKinematicBodies_18();
			NullCheck(L_2);
			Enumerator_tFBD6B058F84161E431312D383C14974637A14214  L_3;
			L_3 = List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F(L_2, /*hidden argument*/List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			{
				goto IL_009c;
			}

IL_0026:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_4;
				L_4 = Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_inline((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_RuntimeMethod_var);
				V_3 = L_4;
				// if (HandJointService.IsHandTracked(jointKinematicBody.HandednessType))
				RuntimeObject* L_5;
				L_5 = HandPhysicsService_get_HandJointService_mF186A805C914BDA45C795A613027A8DB0CA4B981(__this, /*hidden argument*/NULL);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_6 = V_3;
				NullCheck(L_6);
				uint8_t L_7;
				L_7 = JointKinematicBody_get_HandednessType_m6E346B5195E5C973F3C178E53E310B9475FADDFF_inline(L_6, /*hidden argument*/NULL);
				NullCheck(L_5);
				bool L_8;
				L_8 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_il2cpp_TypeInfo_var, L_5, L_7);
				V_4 = L_8;
				bool L_9 = V_4;
				if (!L_9)
				{
					goto IL_0091;
				}
			}

IL_0046:
			{
				// jointKinematicBody.Joint = jointKinematicBody.Joint != null ? jointKinematicBody.Joint : HandJointService.RequestJointTransform(jointKinematicBody.JointType, jointKinematicBody.HandednessType);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_10 = V_3;
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_11 = V_3;
				NullCheck(L_11);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
				L_12 = JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline(L_11, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				G_B5_0 = L_10;
				if (L_13)
				{
					G_B6_0 = L_10;
					goto IL_006f;
				}
			}

IL_0056:
			{
				RuntimeObject* L_14;
				L_14 = HandPhysicsService_get_HandJointService_mF186A805C914BDA45C795A613027A8DB0CA4B981(__this, /*hidden argument*/NULL);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_15 = V_3;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = JointKinematicBody_get_JointType_m28BBF8AC962A56B7B523F7316FB902F5B77F86C3_inline(L_15, /*hidden argument*/NULL);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_17 = V_3;
				NullCheck(L_17);
				uint8_t L_18;
				L_18 = JointKinematicBody_get_HandednessType_m6E346B5195E5C973F3C178E53E310B9475FADDFF_inline(L_17, /*hidden argument*/NULL);
				NullCheck(L_14);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
				L_19 = InterfaceFuncInvoker2< Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_t165F08DD144BFEEDDB8F88A1FB99741DBC73FD8E_il2cpp_TypeInfo_var, L_14, L_16, L_18);
				G_B7_0 = L_19;
				G_B7_1 = G_B5_0;
				goto IL_0075;
			}

IL_006f:
			{
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_20 = V_3;
				NullCheck(L_20);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
				L_21 = JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline(L_20, /*hidden argument*/NULL);
				G_B7_0 = L_21;
				G_B7_1 = G_B6_0;
			}

IL_0075:
			{
				NullCheck(G_B7_1);
				JointKinematicBody_set_Joint_m8152F64340D53FCB5CAC70194544524641A03308_inline(G_B7_1, G_B7_0, /*hidden argument*/NULL);
				// jointKinematicBody.UpdateState(jointKinematicBody.Joint != null);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_22 = V_3;
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_23 = V_3;
				NullCheck(L_23);
				Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
				L_24 = JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline(L_23, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				NullCheck(L_22);
				JointKinematicBody_UpdateState_m8425BDE5F14A8926ABFC118F0D1B882A46EFBF41(L_22, L_25, /*hidden argument*/NULL);
				goto IL_009b;
			}

IL_0091:
			{
				// jointKinematicBody.UpdateState(false);
				JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_26 = V_3;
				NullCheck(L_26);
				JointKinematicBody_UpdateState_m8425BDE5F14A8926ABFC118F0D1B882A46EFBF41(L_26, (bool)0, /*hidden argument*/NULL);
			}

IL_009b:
			{
			}

IL_009c:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				bool L_27;
				L_27 = Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0026;
				}
			}

IL_00a5:
			{
				IL2CPP_LEAVE(0xB6, FINALLY_00a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00a7;
		}

FINALLY_00a7:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B_RuntimeMethod_var);
			IL2CPP_END_FINALLY(167)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(167)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xB6, IL_00b6)
		}

IL_00b6:
		{
			IL2CPP_LEAVE(0xC8, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(185)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_m5D1A948B8F56E24677428CE699313C780E6BFB11 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m38C54E38C3FAC160C8B35CE05098FF730785D725(__this, /*hidden argument*/NULL);
		// if (HandPhysicsServiceRoot == null) { return; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (HandPhysicsServiceRoot == null) { return; }
		goto IL_010d;
	}

IL_001e:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		V_1 = 0;
		goto IL_00fa;
	}

IL_0025:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		V_2 = 0;
		goto IL_0086;
	}

IL_002a:
	{
		// if (FingerTipKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m0D4EACB43B2573C08A702003BC9CCE59A9EDB0F2(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// if (FingerTipKinematicBodyPrefab == null) { continue; }
		goto IL_0082;
	}

IL_0040:
	{
		// if (TryCreateJointKinematicBody(FingerTipKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], fingerTipTypes[j], HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m0D4EACB43B2573C08A702003BC9CCE59A9EDB0F2(__this, /*hidden argument*/NULL);
		int32_t L_7;
		L_7 = HandPhysicsService_get_HandPhysicsLayer_m616F6AD91F63765A800E74F21B1AB664790FBA61_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_8 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_12 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_fingerTipTypes_17();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (int32_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = HandPhysicsService_TryCreateJointKinematicBody_m021431F78BBC5323CAF194A213F1017678CE5FB3(L_6, L_7, L_11, L_15, L_17, (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 **)(&V_3), /*hidden argument*/NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_20 = __this->get_jointKinematicBodies_18();
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_21 = V_3;
		NullCheck(L_20);
		List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE(L_20, L_21, /*hidden argument*/List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE_RuntimeMethod_var);
	}

IL_0081:
	{
	}

IL_0082:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0086:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_23 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_24 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_fingerTipTypes_17();
		NullCheck(L_24);
		V_6 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_002a;
		}
	}
	{
		// if (UsePalmKinematicBody)
		bool L_26;
		L_26 = HandPhysicsService_get_UsePalmKinematicBody_m345553F14DBEF117E75ECF73A98A950E74628AA2_inline(__this, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00f5;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = HandPhysicsService_get_PalmKinematicBodyPrefab_mB72C8FBE25C7D4D417B5836DD69FFDB5242A089A(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_9 = L_29;
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_00b8;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		goto IL_00f6;
	}

IL_00b8:
	{
		// if (TryCreateJointKinematicBody(PalmKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], TrackedHandJoint.Palm, HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = HandPhysicsService_get_PalmKinematicBodyPrefab_mB72C8FBE25C7D4D417B5836DD69FFDB5242A089A(__this, /*hidden argument*/NULL);
		int32_t L_32;
		L_32 = HandPhysicsService_get_HandPhysicsLayer_m616F6AD91F63765A800E74F21B1AB664790FBA61_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_33 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (uint8_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		bool L_39;
		L_39 = HandPhysicsService_TryCreateJointKinematicBody_m021431F78BBC5323CAF194A213F1017678CE5FB3(L_31, L_32, L_36, 2, L_38, (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 **)(&V_8), /*hidden argument*/NULL);
		V_10 = L_39;
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_00f4;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_41 = __this->get_jointKinematicBodies_18();
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_42 = V_8;
		NullCheck(L_41);
		List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE(L_41, L_42, /*hidden argument*/List_1_Add_m6E916339CD31D662C482BB0DB9B889BE2FED1AEE_RuntimeMethod_var);
	}

IL_00f4:
	{
	}

IL_00f5:
	{
	}

IL_00f6:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00fa:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_44 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_45 = ((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->get_handednessTypes_16();
		NullCheck(L_45);
		V_11 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))? 1 : 0);
		bool L_46 = V_11;
		if (L_46)
		{
			goto IL_0025;
		}
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m38C54E38C3FAC160C8B35CE05098FF730785D725 (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB8379109D09F89709C33DBE17D0A79E460FDCE58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tFBD6B058F84161E431312D383C14974637A14214  V_1;
	memset((&V_1), 0, sizeof(V_1));
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (jointKinematicBodies.Count > 0)
		List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_0 = __this->get_jointKinematicBodies_18();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mB8379109D09F89709C33DBE17D0A79E460FDCE58_inline(L_0, /*hidden argument*/List_1_get_Count_mB8379109D09F89709C33DBE17D0A79E460FDCE58_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_tCAA81AB160A13E632399F0F4409E13F13B838902 * L_3 = __this->get_jointKinematicBodies_18();
		NullCheck(L_3);
		Enumerator_tFBD6B058F84161E431312D383C14974637A14214  L_4;
		L_4 = List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F(L_3, /*hidden argument*/List_1_GetEnumerator_m2A781746F21728604081C0084902F907C0BDC99F_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0023:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_5;
			L_5 = Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_inline((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mBCE6DF97DEDCA4F064FDC2D60E17647843931851_RuntimeMethod_var);
			V_2 = L_5;
			// UnityEngine.Object.Destroy(jointKinematicBody.gameObject);
			JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_6 = V_2;
			NullCheck(L_6);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		}

IL_0039:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			bool L_8;
			L_8 = Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mAA2177664CC4D71BCCA3479DAAC1F707BCA1B7F9_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0023;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B((Enumerator_tFBD6B058F84161E431312D383C14974637A14214 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m2D971E898BC7930B374AE57DEC4B2D78A614077B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m021431F78BBC5323CAF194A213F1017678CE5FB3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent4, JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 ** ___jointKinematicBody5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisJointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_m33DEBA2AB8FFBF3CA816C09363DACCDD46E16E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * V_1 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// jointKinematicBody = null;
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 ** L_0 = ___jointKinematicBody5;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// GameObject currentGameObject = GameObject.Instantiate(rigidBodyPrefab, parent);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___rigidBodyPrefab0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___parent4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		V_0 = L_3;
		// currentGameObject.layer = layer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		int32_t L_5 = ___layer1;
		NullCheck(L_4);
		GameObject_set_layer_m2F946916ACB41A59C46346F5243F2BAC235A36A6(L_4, L_5, /*hidden argument*/NULL);
		// JointKinematicBody currentJoint = currentGameObject.GetComponent<JointKinematicBody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_0;
		NullCheck(L_6);
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_7;
		L_7 = GameObject_GetComponent_TisJointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_m33DEBA2AB8FFBF3CA816C09363DACCDD46E16E0A(L_6, /*hidden argument*/GameObject_GetComponent_TisJointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_m33DEBA2AB8FFBF3CA816C09363DACCDD46E16E0A_RuntimeMethod_var);
		V_1 = L_7;
		// if (currentJoint == null)
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_8 = V_1;
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a JointKinematicBody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralDA498934C25635BF965454E7B0EFC76A87F36A1B, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_0101;
	}

IL_0043:
	{
		// currentJoint.JointType = jointType;
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_12 = V_1;
		int32_t L_13 = ___jointType3;
		NullCheck(L_12);
		JointKinematicBody_set_JointType_mB4CB23090DC8B818D239EC054F3B772ED1260825_inline(L_12, L_13, /*hidden argument*/NULL);
		// currentJoint.HandednessType = handednessType;
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_14 = V_1;
		uint8_t L_15 = ___handednessType2;
		NullCheck(L_14);
		JointKinematicBody_set_HandednessType_m8B6D0C357E5ADF3DF2FFD4E1F07C944C55E80589_inline(L_14, L_15, /*hidden argument*/NULL);
		// currentGameObject.name = handednessType + " " + jointType;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		RuntimeObject * L_17 = Box(Handedness_t1B5FD9A7BE51F5D347A4366FD841FBFC26B7BD21_il2cpp_TypeInfo_var, (&___handednessType2));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		___handednessType2 = *(uint8_t*)UnBox(L_17);
		RuntimeObject * L_19 = Box(TrackedHandJoint_tFDADC49BA87BC6CBE390A69B0CC80925BAA37FD6_il2cpp_TypeInfo_var, (&___jointType3));
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		___jointType3 = *(int32_t*)UnBox(L_19);
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_16, L_21, /*hidden argument*/NULL);
		// if (currentGameObject.GetComponent<Collider>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_0;
		NullCheck(L_22);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_23;
		L_23 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_22, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00a8;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Collider component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral1B7C657456EEB67D39103E7D53301AB040007E6F, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_26, /*hidden argument*/NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_0101;
	}

IL_00a8:
	{
		// Rigidbody rigidbody = currentGameObject.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_0;
		NullCheck(L_27);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_28;
		L_28 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		V_2 = L_28;
		// if (rigidbody == null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_6 = L_30;
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d4;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Rigidbody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE32213B913E2692579F46DFC5F32A1E135F596B6, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		// return false;
		V_4 = (bool)0;
		goto IL_0101;
	}

IL_00d4:
	{
		// if (!rigidbody.isKinematic)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_33 = V_2;
		NullCheck(L_33);
		bool L_34;
		L_34 = Rigidbody_get_isKinematic_m597B48C45021313B6C6C4B126E405EF566C5C80C(L_33, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		// Debug.LogWarning("The HandPhysicsService FingerTipKinematicBodyPrefab rigidbody should be marked as kinematic, making kinematic.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral2CA525E745821399EEF6F1D2733A285A82160939, /*hidden argument*/NULL);
		// rigidbody.isKinematic = true;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_36 = V_2;
		NullCheck(L_36);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_36, (bool)1, /*hidden argument*/NULL);
	}

IL_00f8:
	{
		// jointKinematicBody = currentJoint;
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 ** L_37 = ___jointKinematicBody5;
		JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * L_38 = V_1;
		*((RuntimeObject **)L_37) = (RuntimeObject *)L_38;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_37, (void*)(RuntimeObject *)L_38);
		// return true;
		V_4 = (bool)1;
		goto IL_0101;
	}

IL_0101:
	{
		// }
		bool L_39 = V_4;
		return L_39;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__cctor_mC0A172DC8C1F8D33108D16F48C00EBF06D81268F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Handedness[] handednessTypes = new Handedness[]
		// {
		//     Handedness.Left,
		//     Handedness.Right
		// };
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_0 = (HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754*)(HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754*)SZArrayNew(HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754_il2cpp_TypeInfo_var, (uint32_t)2);
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		HandednessU5BU5D_tCD87AA61EA8D8E902C4D1AF13B8D50E9F047B754* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->set_handednessTypes_16(L_2);
		// private static readonly TrackedHandJoint[] fingerTipTypes = new TrackedHandJoint[]
		// {
		//     TrackedHandJoint.ThumbTip,
		//     TrackedHandJoint.IndexTip,
		//     TrackedHandJoint.MiddleTip,
		//     TrackedHandJoint.RingTip,
		//     TrackedHandJoint.PinkyTip
		// };
		TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_3 = (TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F*)(TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F*)SZArrayNew(TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F_il2cpp_TypeInfo_var, (uint32_t)5);
		TrackedHandJointU5BU5D_tFA1152B947AB07ACF1DFE43B4A96139E3340B76F* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0378E67E6C42C8CC80549B17070409DB6A93171F____3F88FBB7FD9DDD81E9E2A619815356D8409B35AEFD4F2B0F9CD9473E251D468B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->set_fingerTipTypes_17(L_4);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] HandPhysicsService.Update");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_6), _stringLiteral1C7FAA54D286D9BC344C94963A928369C13F9604, /*hidden argument*/NULL);
		((HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_19(L_6);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA3B2BF6956A0F376E59F6B09CA9F09318A0FC745 (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m8E8DBDE10966AB5590FD497FABC0D91F05186EE6 (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mBBB6C13BF489EE2D0BFC33CE46D92BE05EAD776A (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mA2E8F4FABBC2EC607588B1DE3538FC3AF54E484D (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsServiceProfile__ctor_m30405E6E4B0613EE9791A8744624251E6B596C03 (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// private int handPhysicsLayer = 0;
		__this->set_handPhysicsLayer_5(0);
		// private GameObject fingerTipKinematicBodyPrefab = null;
		__this->set_fingerTipKinematicBodyPrefab_6((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// private bool usePalmKinematicBody = false;
		__this->set_usePalmKinematicBody_7((bool)0);
		// private GameObject palmKinematicBodyPrefab = null;
		__this->set_palmKinematicBodyPrefab_8((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		BaseMixedRealityProfile__ctor_mABE9ABA5C514E086D617682809ED5CA84B6C72DC(__this, /*hidden argument*/NULL);
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m8152F64340D53FCB5CAC70194544524641A03308 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m6E346B5195E5C973F3C178E53E310B9475FADDFF (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m8B6D0C357E5ADF3DF2FFD4E1F07C944C55E80589 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m28BBF8AC962A56B7B523F7316FB902F5B77F86C3 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_mB4CB23090DC8B818D239EC054F3B772ED1260825 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnEnableAction_m01AF30642D405B067D7070DD60B922A631BB6824 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnEnableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnEnableAction_mA39A3736A5A4263265FCBFC716118119A6CCC2CE (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = ___value0;
		__this->set_U3COnEnableActionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnDisableAction_m2978A58C499C8BF65F5FD03B424E3040915D1D25 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnDisableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnDisableAction_mC67AC49527E42FD34BFFB96C3CBA92E93AB45836 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = ___value0;
		__this->set_U3COnDisableActionU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m8425BDE5F14A8926ABFC118F0D1B882A46EFBF41 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * G_B7_0 = NULL;
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * G_B6_0 = NULL;
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * G_B11_0 = NULL;
	Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * G_B10_0 = NULL;
	{
		// using (UpdateStatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var);
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0 = ((JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var))->get_UpdateStatePerfMarker_9();
		V_1 = L_0;
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		L_1 = ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline((ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// bool previousActiveState = gameObject.activeSelf;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_3;
			L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
			V_2 = L_3;
			// gameObject.SetActive(active);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			bool L_5 = ___active0;
			NullCheck(L_4);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, L_5, /*hidden argument*/NULL);
			// if (active)
			bool L_6 = ___active0;
			V_3 = L_6;
			bool L_7 = V_3;
			if (!L_7)
			{
				goto IL_005e;
			}
		}

IL_002e:
		{
			// transform.position = Joint.position;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
			L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
			L_9 = JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_9);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
			L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_10, /*hidden argument*/NULL);
			// transform.rotation = Joint.rotation;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
			L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
			L_12 = JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_12);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
			L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_13, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// if (previousActiveState != active)
			bool L_14 = V_2;
			bool L_15 = ___active0;
			V_4 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_4;
			if (!L_16)
			{
				goto IL_00a0;
			}
		}

IL_006b:
		{
			// if (active)
			bool L_17 = ___active0;
			V_5 = L_17;
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_008a;
			}
		}

IL_0073:
		{
			// OnEnableAction?.Invoke(this);
			Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_19;
			L_19 = JointKinematicBody_get_OnEnableAction_m01AF30642D405B067D7070DD60B922A631BB6824_inline(__this, /*hidden argument*/NULL);
			Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_20 = L_19;
			G_B6_0 = L_20;
			if (L_20)
			{
				G_B7_0 = L_20;
				goto IL_0080;
			}
		}

IL_007d:
		{
			goto IL_0087;
		}

IL_0080:
		{
			NullCheck(G_B7_0);
			Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED(G_B7_0, __this, /*hidden argument*/Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED_RuntimeMethod_var);
		}

IL_0087:
		{
			goto IL_009f;
		}

IL_008a:
		{
			// OnDisableAction?.Invoke(this);
			Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_21;
			L_21 = JointKinematicBody_get_OnDisableAction_m2978A58C499C8BF65F5FD03B424E3040915D1D25_inline(__this, /*hidden argument*/NULL);
			Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_22 = L_21;
			G_B10_0 = L_22;
			if (L_22)
			{
				G_B11_0 = L_22;
				goto IL_0097;
			}
		}

IL_0094:
		{
			goto IL_009e;
		}

IL_0097:
		{
			NullCheck(G_B11_0);
			Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED(G_B11_0, __this, /*hidden argument*/Action_1_Invoke_m627670AA57FFD3C77C93BC75EA4C7DA0D051EDED_RuntimeMethod_var);
		}

IL_009e:
		{
		}

IL_009f:
		{
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB2, FINALLY_00a3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a3;
	}

FINALLY_00a3:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline((AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(163)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(163)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__ctor_m3E8EB272E95E8160B8A62622F172241FDF91C2F7 (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__cctor_mDF613BEDE2B398FF30242FC09330710E4DC2C80B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1738C3F31C42EB3867F885AD91436A640396392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateStatePerfMarker = new ProfilerMarker("[MRTK] JointKinematicBody.UpdateState");
		ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline((&L_0), _stringLiteralC1738C3F31C42EB3867F885AD91436A640396392, /*hidden argument*/NULL);
		((JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49_il2cpp_TypeInfo_var))->set_UpdateStatePerfMarker_9(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mA2E8F4FABBC2EC607588B1DE3538FC3AF54E484D_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_m780D21CEC07962CCC5B6375A1F9E7C067B00C146_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_mA3B2BF6956A0F376E59F6B09CA9F09318A0FC745_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m954A44D5CCB0D2D4604F8C8B644B47C91DAF315E_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m8E8DBDE10966AB5590FD497FABC0D91F05186EE6_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mBBB6C13BF489EE2D0BFC33CE46D92BE05EAD776A_inline (HandPhysicsServiceProfile_t3E9E81A159851781AE2FCDB3BC914ADFDBA8417C * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m7A14AE02D6A421697FD06FBA6F570A6C43FA4D11_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * HandPhysicsService_get_HandPhysicsServiceRoot_m1735A2F2C4DAE6E714EAB8B41BC4FDF242AF99D8_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  ProfilerMarker_Auto_m136C2D8B4232A186FA4C8866BB389A5DCF69E0E5_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, const RuntimeMethod* method)
{
	AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m6E346B5195E5C973F3C178E53E310B9475FADDFF_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * JointKinematicBody_get_Joint_m98982BF71151E4CC14F671FF80F1B0137AEF767A_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m28BBF8AC962A56B7B523F7316FB902F5B77F86C3_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_m8152F64340D53FCB5CAC70194544524641A03308_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope_Dispose_m5CDDCDA2B8769738BB695661EC4AC55DD7A0D7CA_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerUnsafeUtility_EndSample_m0435B2EE7963614F3D154A83D44269FE4D1A85B0((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m616F6AD91F63765A800E74F21B1AB664790FBA61_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m345553F14DBEF117E75ECF73A98A950E74628AA2_inline (HandPhysicsService_t1FA5E970DF2E741A1FDF8EEF3BFA3AD522675F35 * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_mB4CB23090DC8B818D239EC054F3B772ED1260825_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m8B6D0C357E5ADF3DF2FFD4E1F07C944C55E80589_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mCE8D10CF2D2B2C4E51BF1BB66D75FDDE5BDA4A41_inline (ProfilerMarker_tAE86534C80C5D67768DB3B244D8D139A2E6495E1 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_m419027084C68545B765B9345949D8BFCB96C51AD(L_0, (uint16_t)1, 0, 0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnEnableAction_m01AF30642D405B067D7070DD60B922A631BB6824_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * JointKinematicBody_get_OnDisableAction_m2978A58C499C8BF65F5FD03B424E3040915D1D25_inline (JointKinematicBody_t280E32B31F123ED55808E5010903033FCE9C8A49 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_tBC78E9FE435EEAFC5257D5E423A77959ADB93B49 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AutoScope__ctor_m4131730A501F687FF95B2963EABAC7844C6B9859_inline (AutoScope_tEB00834B4CEE8558238837BA3A36B64020E48F8D * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerUnsafeUtility_BeginSample_m1B2CAD1BC7C7C390514317A8D51FB798D4622AE4((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
