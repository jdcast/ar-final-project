#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53;
// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB;
// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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


// System.Diagnostics.DebuggerBrowsableState
struct DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091 
{
public:
	// System.Int32 System.Diagnostics.DebuggerBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggerBrowsableState_t2A824ECEB650CFABB239FD0918FCC88A09B45091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HeaderAttribute
struct HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.HeaderAttribute::header
	String_t* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB, ___header_0)); }
	inline String_t* get_header_0() const { return ___header_0; }
	inline String_t** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(String_t* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header_0), (void*)value);
	}
};


// UnityEngine.RangeAttribute
struct RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};


// UnityEngine.TooltipAttribute
struct TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_0), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// System.Diagnostics.DebuggerBrowsableAttribute
struct DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggerBrowsableState System.Diagnostics.DebuggerBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggerBrowsableAttribute::.ctor(System.Diagnostics.DebuggerBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5 (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042 (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * __this, String_t* ___tooltip0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000 (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * __this, float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.HeaderAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * __this, String_t* ___header0, const RuntimeMethod* method);
static void Microsoft_MixedReality_WorldLocking_Tools_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[0];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 263LL, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_U3CAttachmentPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_AdjusterFixed_get_AttachmentPoint_m67CD08ECBEFCDF6BBCDC8D22DFE91FBC0D63D569(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_AdjusterFixed_set_AttachmentPoint_mFA3D5C1CC9953510294151ADFA83FF15DC1D3B10(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926_CustomAttributesCacheGenerator_connectingLine(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x6C\x61\x63\x65\x68\x6F\x6C\x64\x65\x72\x20\x6D\x61\x74\x65\x72\x69\x61\x6C\x20\x74\x6F\x20\x65\x6E\x73\x75\x72\x65\x20\x74\x68\x65\x20\x72\x65\x71\x75\x69\x72\x65\x64\x20\x73\x68\x61\x64\x65\x72\x20\x69\x73\x20\x70\x61\x63\x6B\x61\x67\x65\x64\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926_CustomAttributesCacheGenerator_verticalDisplacement(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x65\x72\x74\x69\x63\x61\x6C\x20\x64\x69\x73\x74\x61\x6E\x63\x65\x20\x74\x6F\x20\x6F\x66\x66\x73\x65\x74\x20\x66\x72\x6F\x6D\x20\x61\x63\x74\x75\x61\x6C\x20\x61\x6E\x63\x68\x6F\x72\x73\x2C\x20\x74\x6F\x20\x61\x76\x6F\x69\x64\x20\x76\x69\x73\x75\x61\x6C\x73\x20\x61\x74\x20\x65\x79\x65\x20\x6C\x65\x76\x65\x6C\x2E"), NULL);
	}
}
static void U3CU3Ec_t333DFA6AF693232AB788172B16196263202BB854_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t020BF4524CC6E3E6139B6F8552A931629901EAF9_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FrameVisual_tB453D401B34D36501814CED5379D9180505EA532_CustomAttributesCacheGenerator_originMarker(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x56\x69\x73\x75\x61\x6C\x20\x6D\x61\x72\x6B\x65\x72\x20\x74\x6F\x20\x62\x65\x20\x63\x6F\x6C\x6F\x72\x65\x64"), NULL);
	}
}
static void FrameVisual_tB453D401B34D36501814CED5379D9180505EA532_CustomAttributesCacheGenerator_originText(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6F\x62\x6A\x65\x63\x74\x20\x74\x6F\x20\x62\x65\x20\x63\x6F\x6C\x6F\x72\x65\x64\x20\x61\x6E\x64\x20\x73\x65\x74\x20\x74\x6F\x20\x74\x68\x65\x20\x6E\x61\x6D\x65\x20\x6F\x66\x20\x74\x68\x69\x73\x20\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5_CustomAttributesCacheGenerator_iconObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x61\x6E\x63\x68\x6F\x72\x20\x76\x69\x73\x75\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x20\x69\x63\x6F\x6E\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x68\x61\x76\x65\x20\x69\x74\x73\x20\x63\x6F\x6C\x6F\x72\x20\x61\x64\x6A\x75\x73\x74\x65\x64"), NULL);
	}
}
static void FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5_CustomAttributesCacheGenerator_textObject(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x61\x6E\x63\x68\x6F\x72\x20\x76\x69\x73\x75\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x20\x49\x44\x20\x74\x65\x78\x74\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x68\x61\x76\x65\x20\x69\x74\x73\x20\x74\x65\x78\x74\x26\x63\x6F\x6C\x6F\x72\x20\x61\x64\x6A\x75\x73\x74\x65\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_active(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x68\x65\x20\x4D\x61\x70\x70\x69\x6E\x67\x20\x69\x73\x20\x61\x63\x74\x69\x76\x65\x2E\x20\x49\x66\x20\x69\x6E\x61\x63\x74\x69\x76\x65\x2C\x20\x61\x6C\x6C\x20\x72\x65\x73\x6F\x75\x72\x63\x65\x73\x20\x64\x69\x73\x70\x6F\x73\x65\x64\x20\x61\x6E\x64\x20\x6F\x6E\x6C\x79\x20\x72\x65\x6D\x61\x64\x65\x20\x77\x68\x65\x6E\x20\x61\x63\x74\x69\x76\x65\x20\x61\x67\x61\x69\x6E\x2E"), NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_drawMaterial(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4D\x61\x74\x65\x72\x69\x61\x6C\x20\x74\x6F\x20\x64\x72\x61\x77\x20\x73\x75\x72\x66\x61\x63\x65\x73\x20\x77\x69\x74\x68\x2E\x20\x4D\x61\x79\x20\x62\x65\x20\x6E\x75\x6C\x6C\x20\x69\x66\x20\x6E\x6F\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x77\x61\x6E\x74\x65\x64\x2E"), NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_display(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x6F\x20\x72\x65\x6E\x64\x65\x72\x20\x74\x68\x65\x20\x61\x63\x74\x69\x76\x65\x20\x73\x75\x72\x66\x61\x63\x65\x73\x20\x77\x69\x74\x68\x20\x74\x68\x65\x20\x67\x69\x76\x65\x6E\x20\x6D\x61\x74\x65\x72\x69\x61\x6C"), NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_collide(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x57\x68\x65\x74\x68\x65\x72\x20\x74\x6F\x20\x70\x65\x72\x66\x6F\x72\x6D\x20\x63\x6F\x6C\x6C\x69\x73\x69\x6F\x6E\x73\x20\x61\x6E\x64\x20\x72\x61\x79\x63\x61\x73\x74\x73\x20\x61\x67\x61\x69\x6E\x73\x74\x20\x74\x68\x65\x73\x65\x20\x73\x75\x72\x66\x61\x63\x65\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_hangerObject(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x6A\x65\x63\x74\x20\x74\x6F\x20\x61\x74\x74\x61\x63\x68\x20\x73\x75\x72\x66\x61\x63\x65\x20\x6F\x62\x6A\x65\x63\x74\x73\x20\x74\x6F\x2E\x20\x4D\x61\x79\x20\x62\x65\x20\x6E\x75\x6C\x6C\x20\x74\x6F\x20\x61\x64\x64\x20\x73\x75\x72\x66\x61\x63\x65\x20\x6F\x62\x6A\x65\x63\x74\x73\x20\x74\x6F\x20\x73\x63\x65\x6E\x65\x20\x72\x6F\x6F\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_centerObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x6A\x65\x63\x74\x20\x61\x72\x6F\x75\x6E\x64\x20\x77\x68\x69\x63\x68\x20\x73\x70\x61\x74\x69\x61\x6C\x20\x6D\x61\x70\x70\x69\x6E\x67\x73\x20\x61\x72\x65\x20\x63\x65\x6E\x74\x65\x72\x65\x64\x2E\x20\x53\x65\x74\x20\x74\x6F\x20\x6E\x75\x6C\x6C\x20\x74\x6F\x20\x63\x65\x6E\x74\x65\x72\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x2E"), NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_updatePeriod(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x50\x65\x72\x69\x6F\x64\x20\x69\x6E\x20\x73\x65\x63\x6F\x6E\x64\x73\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x74\x6F\x20\x75\x70\x64\x61\x74\x65\x20\x73\x75\x72\x66\x61\x63\x65\x73\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_radius(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x52\x61\x64\x69\x75\x73\x20\x61\x72\x6F\x75\x6E\x64\x20\x74\x68\x65\x20\x63\x61\x6D\x65\x72\x61\x20\x74\x6F\x20\x6D\x61\x70\x2E"), NULL);
	}
}
static void FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_quality(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x51\x75\x61\x6C\x69\x74\x79\x20\x61\x74\x20\x77\x68\x69\x63\x68\x20\x74\x6F\x20\x74\x65\x73\x73\x65\x6C\x6C\x61\x74\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_prefabToPlace(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x70\x72\x65\x66\x61\x62\x20\x74\x6F\x20\x70\x6C\x61\x63\x65\x20\x69\x6E\x20\x74\x68\x65\x20\x77\x6F\x72\x6C\x64\x20\x61\x74\x20\x67\x61\x7A\x65\x20\x70\x6F\x73\x69\x74\x69\x6F\x6E\x20\x6F\x6E\x20\x61\x69\x72\x20\x74\x61\x70\x73\x2E"), NULL);
	}
}
static void FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_U3CActiveU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[0];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[1];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_FrozenTapToAdd_get_Active_mC675C188D42E1CAC0090E7C98FFF77D78402A1FC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_FrozenTapToAdd_set_Active_m19C78C584640D3F5577B2DAF9AD73A71B99C33F3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_console(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x28\x6F\x70\x74\x69\x6F\x6E\x61\x6C\x29\x20\x54\x65\x78\x74\x4D\x65\x73\x68\x20\x6F\x6E\x20\x77\x68\x69\x63\x68\x20\x74\x6F\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x74\x68\x65\x20\x6F\x75\x74\x70\x75\x74\x20\x6C\x6F\x67\x2E"), NULL);
	}
}
static void SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_lineCount(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x6D\x61\x78\x69\x6D\x75\x6D\x20\x6E\x75\x6D\x62\x65\x72\x20\x6F\x66\x20\x6C\x69\x6E\x65\x73\x20\x74\x6F\x20\x64\x69\x73\x70\x6C\x61\x79\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_screenVerbosity(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x6D\x69\x6E\x69\x6D\x75\x6D\x20\x76\x65\x72\x62\x6F\x73\x69\x74\x79\x20\x6C\x65\x76\x65\x6C\x20\x6D\x65\x73\x73\x61\x67\x65\x20\x74\x6F\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x6F\x6E\x20\x73\x63\x72\x65\x65\x6E\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_logVerbosity(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x6D\x69\x6E\x69\x6D\x75\x6D\x20\x76\x65\x72\x62\x6F\x73\x69\x74\x79\x20\x6C\x65\x76\x65\x6C\x20\x6D\x65\x73\x73\x61\x67\x65\x20\x74\x6F\x20\x77\x72\x69\x74\x65\x20\x74\x6F\x20\x55\x6E\x69\x74\x79\x20\x6C\x6F\x67\x2E"), NULL);
	}
}
static void SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_logFile(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x70\x74\x69\x6F\x6E\x61\x6C\x20\x66\x69\x6C\x65\x20\x74\x6F\x20\x77\x72\x69\x74\x65\x20\x6C\x6F\x67\x20\x65\x6E\x74\x72\x69\x65\x73\x20\x69\x6E\x74\x6F\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SimpleSprite_t7CA590357EFD3F6EA8298D235B7A7429B3C9ABB5_CustomAttributesCacheGenerator_target(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x4F\x62\x6A\x65\x63\x74\x20\x74\x6F\x20\x66\x61\x63\x65\x20\x74\x6F\x77\x61\x72\x64\x73\x2E\x20\x44\x65\x66\x61\x75\x6C\x74\x73\x20\x74\x6F\x20\x63\x61\x6D\x65\x72\x61\x20\x61\x74\x20\x74\x69\x6D\x65\x20\x53\x74\x61\x72\x74\x20\x69\x73\x20\x63\x61\x6C\x6C\x65\x64\x2E"), NULL);
	}
}
static void SimpleSprite_t7CA590357EFD3F6EA8298D235B7A7429B3C9ABB5_CustomAttributesCacheGenerator_swivel(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x77\x69\x76\x65\x6C\x20\x6D\x65\x61\x6E\x73\x20\x72\x6F\x74\x61\x74\x65\x20\x61\x62\x6F\x75\x74\x20\x59\x2D\x61\x78\x69\x73\x2C\x20\x73\x65\x74\x20\x74\x6F\x20\x66\x61\x6C\x73\x65\x20\x74\x6F\x20\x66\x61\x63\x65\x20\x64\x69\x72\x65\x63\x74\x6C\x79\x20\x61\x74\x20\x74\x61\x72\x67\x65\x74\x2E"), NULL);
	}
}
static void SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_weightCubeMaxSize(CustomAttributesCache* cache)
{
	{
		RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 * tmp = (RangeAttribute_t14A6532D68168764C15E7CF1FDABCD99CB32D0C5 *)cache->attributes[0];
		RangeAttribute__ctor_mC74D39A9F20DD2A0D4174F05785ABE4F0DAEF000(tmp, 0.100000001f, 2.0f, NULL);
	}
}
static void SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_targetSubtree(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x53\x75\x62\x74\x72\x65\x65\x20\x77\x68\x6F\x73\x65\x20\x53\x70\x61\x63\x65\x50\x69\x6E\x73\x20\x73\x68\x6F\x75\x6C\x64\x20\x62\x65\x20\x76\x69\x73\x75\x61\x6C\x69\x7A\x65\x64\x2E\x20\x4E\x75\x6C\x6C\x20\x66\x6F\x72\x20\x67\x6C\x6F\x62\x61\x6C\x20\x41\x6C\x69\x67\x6E\x6D\x65\x6E\x74\x4D\x61\x6E\x61\x67\x65\x72\x2E"), NULL);
	}
}
static void SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_isVisible(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_SpacePinMeshVisualizer_U3CFindAlignmentManagerFromSubtreeU3Eb__51_0_m983CDE4C94D4B994FE0A28D1DDEAFC1437D372FC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void SpacePinPercentageVisualizer_t9867715F80F4B4DF33D21A4A8F1271F742A3C280_CustomAttributesCacheGenerator_lowPercentageColor(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x65\x72\x63\x65\x6E\x74\x61\x67\x65\x20\x43\x6F\x6C\x6F\x72\x73"), NULL);
	}
}
static void SpacePinPercentageVisualizer_t9867715F80F4B4DF33D21A4A8F1271F742A3C280_CustomAttributesCacheGenerator_lowPercentageOutlineColor(CustomAttributesCache* cache)
{
	{
		HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB * tmp = (HeaderAttribute_t9B431E6BA0524D46406D9C413D6A71CB5F2DD1AB *)cache->attributes[0];
		HeaderAttribute__ctor_m601319E0BCE8C44A9E79B2C0ABAAD0FEF46A9F1E(tmp, il2cpp_codegen_string_new_wrapper("\x50\x65\x72\x63\x65\x6E\x74\x61\x67\x65\x20\x4F\x75\x74\x6C\x69\x6E\x65\x20\x43\x6F\x6C\x6F\x72\x73"), NULL);
	}
}
static void SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_ringObject(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x63\x68\x69\x6C\x64\x20\x6F\x62\x6A\x65\x63\x74\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x68\x61\x76\x65\x20\x69\x74\x73\x20\x63\x6F\x6C\x6F\x72\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x6C\x65\x64"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_discObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x63\x68\x69\x6C\x64\x20\x6F\x62\x6A\x65\x63\x74\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x68\x61\x76\x65\x20\x69\x74\x73\x20\x73\x63\x61\x6C\x65\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x6C\x65\x64"), NULL);
	}
}
static void SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_textObject(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x63\x68\x69\x6C\x64\x20\x54\x65\x78\x74\x20\x6F\x62\x6A\x65\x63\x74\x20\x74\x68\x61\x74\x20\x77\x69\x6C\x6C\x20\x68\x61\x76\x65\x20\x69\x74\x73\x20\x63\x6F\x6C\x6F\x72\x20\x61\x6E\x64\x20\x74\x65\x78\x74\x20\x63\x6F\x6E\x74\x72\x6F\x6C\x6C\x65\x64"), NULL);
	}
}
static void StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshVersionTimestamp(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6D\x65\x73\x68\x20\x74\x6F\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x76\x65\x72\x73\x69\x6F\x6E\x20\x61\x6E\x64\x20\x74\x69\x6D\x65\x73\x74\x61\x6D\x70\x2E"), NULL);
	}
}
static void StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshErrorStatus(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6D\x65\x73\x68\x20\x66\x6F\x72\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x6F\x66\x20\x65\x72\x72\x6F\x72\x20\x73\x74\x61\x74\x75\x73\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshStateIndicator(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6D\x65\x73\x68\x20\x66\x6F\x72\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x6F\x66\x20\x63\x75\x72\x72\x65\x6E\x74\x20\x73\x74\x61\x74\x65\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshInfo(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6D\x65\x73\x68\x20\x66\x6F\x72\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x6F\x66\x20\x73\x75\x6D\x6D\x61\x72\x79\x20\x69\x6E\x66\x6F\x2E"), NULL);
	}
}
static void StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshMetrics(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[1];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x65\x78\x74\x20\x6D\x65\x73\x68\x20\x66\x6F\x72\x20\x64\x69\x73\x70\x6C\x61\x79\x20\x6F\x66\x20\x64\x65\x74\x61\x69\x6C\x65\x64\x20\x6D\x65\x74\x72\x69\x63\x73\x2E"), NULL);
	}
}
static void ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_U3CAttachmentPointU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
	{
		DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 * tmp = (DebuggerBrowsableAttribute_t2FA4793AD1982F5150E07D26822ED5953CD90F53 *)cache->attributes[1];
		DebuggerBrowsableAttribute__ctor_mAA8BCC1E418754685F320B14A08AC226E76346E5(tmp, 0LL, NULL);
	}
}
static void ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_alwaysLock(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x41\x6C\x77\x61\x79\x73\x20\x75\x73\x65\x20\x57\x6F\x72\x6C\x64\x41\x6E\x63\x68\x6F\x72\x20\x74\x6F\x20\x77\x6F\x72\x6C\x64\x20\x6C\x6F\x63\x6B\x2C\x20\x77\x68\x65\x74\x68\x65\x72\x20\x46\x72\x6F\x7A\x65\x6E\x20\x57\x6F\x72\x6C\x64\x20\x69\x73\x20\x61\x63\x74\x69\x76\x65\x20\x6F\x72\x20\x6E\x6F\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_ToggleWorldAnchor_get_AttachmentPoint_m57D50E7465F2C42FCFC5FFCD38D48B979B982E52(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_ToggleWorldAnchor_set_AttachmentPoint_mE816D80C4216791982B045FB21F430F06D334CE1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void WorldAnchorAdapter_t3A82F112081A629318F91FA684E3C11D961AFE60_CustomAttributesCacheGenerator_worldAnchorObject(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74\x20\x68\x6F\x6C\x64\x69\x6E\x67\x20\x74\x68\x65\x20\x57\x6F\x72\x6C\x64\x41\x6E\x63\x68\x6F\x72\x20\x63\x6F\x6D\x70\x6F\x6E\x65\x6E\x74\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void WorldAnchorAdapter_t3A82F112081A629318F91FA684E3C11D961AFE60_CustomAttributesCacheGenerator_targetObject(CustomAttributesCache* cache)
{
	{
		TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B * tmp = (TooltipAttribute_t503A1598A4E68E91673758F50447D0EDFB95149B *)cache->attributes[0];
		TooltipAttribute__ctor_m1839ACEC1560968A6D0EA55D7EB4535546588042(tmp, il2cpp_codegen_string_new_wrapper("\x54\x68\x65\x20\x47\x61\x6D\x65\x4F\x62\x6A\x65\x63\x74\x20\x74\x6F\x20\x62\x65\x20\x61\x6C\x69\x67\x6E\x65\x64\x20\x74\x6F\x20\x74\x68\x65\x20\x57\x6F\x72\x6C\x64\x41\x6E\x63\x68\x6F\x72\x2E"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void U3CPrivateImplementationDetailsU3E_tB1D11234C794D37B0B590BEFF472A84411785593_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Microsoft_MixedReality_WorldLocking_Tools_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Microsoft_MixedReality_WorldLocking_Tools_AttributeGenerators[53] = 
{
	U3CU3Ec_t333DFA6AF693232AB788172B16196263202BB854_CustomAttributesCacheGenerator,
	U3CU3Ec_t020BF4524CC6E3E6139B6F8552A931629901EAF9_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_tB1D11234C794D37B0B590BEFF472A84411785593_CustomAttributesCacheGenerator,
	AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_U3CAttachmentPointU3Ek__BackingField,
	AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926_CustomAttributesCacheGenerator_connectingLine,
	AnchorGraphVisual_tD55799591BF2B332DDC5DBFF1E79CE20B7A42926_CustomAttributesCacheGenerator_verticalDisplacement,
	FrameVisual_tB453D401B34D36501814CED5379D9180505EA532_CustomAttributesCacheGenerator_originMarker,
	FrameVisual_tB453D401B34D36501814CED5379D9180505EA532_CustomAttributesCacheGenerator_originText,
	FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5_CustomAttributesCacheGenerator_iconObject,
	FrozenAnchorVisual_t44D06A314D6C08D25381C108F43C035FE44448D5_CustomAttributesCacheGenerator_textObject,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_active,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_drawMaterial,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_display,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_collide,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_hangerObject,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_centerObject,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_updatePeriod,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_radius,
	FrozenSpatialMapping_tA2CAF25B542A568D59EA6186C7C4D2E2950E336E_CustomAttributesCacheGenerator_quality,
	FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_prefabToPlace,
	FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_U3CActiveU3Ek__BackingField,
	SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_console,
	SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_lineCount,
	SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_screenVerbosity,
	SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_logVerbosity,
	SimpleConsole_t279C9D74D61ADABAB4488A9B2D8FF98FA35F8278_CustomAttributesCacheGenerator_logFile,
	SimpleSprite_t7CA590357EFD3F6EA8298D235B7A7429B3C9ABB5_CustomAttributesCacheGenerator_target,
	SimpleSprite_t7CA590357EFD3F6EA8298D235B7A7429B3C9ABB5_CustomAttributesCacheGenerator_swivel,
	SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_weightCubeMaxSize,
	SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_targetSubtree,
	SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_isVisible,
	SpacePinPercentageVisualizer_t9867715F80F4B4DF33D21A4A8F1271F742A3C280_CustomAttributesCacheGenerator_lowPercentageColor,
	SpacePinPercentageVisualizer_t9867715F80F4B4DF33D21A4A8F1271F742A3C280_CustomAttributesCacheGenerator_lowPercentageOutlineColor,
	SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_ringObject,
	SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_discObject,
	SpongyAnchorVisual_tCE8B26DB799E90D4E2881343CDB18E9B3EC09ECA_CustomAttributesCacheGenerator_textObject,
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshVersionTimestamp,
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshErrorStatus,
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshStateIndicator,
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshInfo,
	StatusToText_tD785A822006F9AF3CA093916F41C473B744BB04B_CustomAttributesCacheGenerator_textMeshMetrics,
	ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_U3CAttachmentPointU3Ek__BackingField,
	ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_alwaysLock,
	WorldAnchorAdapter_t3A82F112081A629318F91FA684E3C11D961AFE60_CustomAttributesCacheGenerator_worldAnchorObject,
	WorldAnchorAdapter_t3A82F112081A629318F91FA684E3C11D961AFE60_CustomAttributesCacheGenerator_targetObject,
	AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_AdjusterFixed_get_AttachmentPoint_m67CD08ECBEFCDF6BBCDC8D22DFE91FBC0D63D569,
	AdjusterFixed_tA49EDC9CBDAFEBD3F101CBEB45425FA4F2865E7E_CustomAttributesCacheGenerator_AdjusterFixed_set_AttachmentPoint_mFA3D5C1CC9953510294151ADFA83FF15DC1D3B10,
	FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_FrozenTapToAdd_get_Active_mC675C188D42E1CAC0090E7C98FFF77D78402A1FC,
	FrozenTapToAdd_t772D707C506998312305FDDDF1EC435C00947CFB_CustomAttributesCacheGenerator_FrozenTapToAdd_set_Active_m19C78C584640D3F5577B2DAF9AD73A71B99C33F3,
	SpacePinMeshVisualizer_tE51935780978C9933ED8FD5C2D0976A03984E4D2_CustomAttributesCacheGenerator_SpacePinMeshVisualizer_U3CFindAlignmentManagerFromSubtreeU3Eb__51_0_m983CDE4C94D4B994FE0A28D1DDEAFC1437D372FC,
	ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_ToggleWorldAnchor_get_AttachmentPoint_m57D50E7465F2C42FCFC5FFCD38D48B979B982E52,
	ToggleWorldAnchor_t1B1167AAE4D649411357DCAC4BBEA35B598EB09B_CustomAttributesCacheGenerator_ToggleWorldAnchor_set_AttachmentPoint_mE816D80C4216791982B045FB21F430F06D334CE1,
	Microsoft_MixedReality_WorldLocking_Tools_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
