#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// Doozy.Runtime.Colors.ColorEvent
struct ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Doozy.Runtime.Colors.SelectableColor
struct SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352;
// System.String
struct String_t;
// Doozy.Runtime.Colors.ThemeColor
struct ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59;
IL2CPP_EXTERN_C String_t* _stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Doozy.Runtime.Colors.ColorUtils
struct ColorUtils_tEABBBE2908D3A2824A4B10D6FC86EA694EA30145  : public RuntimeObject
{
};

// Doozy.Runtime.Colors.SelectableColor
struct SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352  : public RuntimeObject
{
	// System.Boolean Doozy.Runtime.Colors.SelectableColor::m_IsDarkTheme
	bool ___m_IsDarkTheme_0;
	// Doozy.Runtime.Colors.SelectionState Doozy.Runtime.Colors.SelectableColor::<currentState>k__BackingField
	int32_t ___U3CcurrentStateU3Ek__BackingField_1;
	// Doozy.Runtime.Colors.ColorEvent Doozy.Runtime.Colors.SelectableColor::onStateChanged
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* ___onStateChanged_2;
	// Doozy.Runtime.Colors.ThemeColor Doozy.Runtime.Colors.SelectableColor::Normal
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Normal_3;
	// Doozy.Runtime.Colors.ThemeColor Doozy.Runtime.Colors.SelectableColor::Highlighted
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Highlighted_4;
	// Doozy.Runtime.Colors.ThemeColor Doozy.Runtime.Colors.SelectableColor::Pressed
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Pressed_5;
	// Doozy.Runtime.Colors.ThemeColor Doozy.Runtime.Colors.SelectableColor::Selected
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Selected_6;
	// Doozy.Runtime.Colors.ThemeColor Doozy.Runtime.Colors.SelectableColor::Disabled
	ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* ___Disabled_7;
};

// Doozy.Runtime.Colors.SelectableColorExtensions
struct SelectableColorExtensions_t068E2CB3A9FF70DEE4F33EF5223F5F04033257E9  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Doozy.Runtime.Colors.Models.HSL
struct HSL_tFC0E043357C640451DED090325DB7789B92F1C85 
{
	// System.Single Doozy.Runtime.Colors.Models.HSL::h
	float ___h_0;
	// System.Single Doozy.Runtime.Colors.Models.HSL::s
	float ___s_1;
	// System.Single Doozy.Runtime.Colors.Models.HSL::l
	float ___l_2;
};

// Doozy.Runtime.Colors.Models.HSV
struct HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 
{
	// System.Single Doozy.Runtime.Colors.Models.HSV::h
	float ___h_0;
	// System.Single Doozy.Runtime.Colors.Models.HSV::s
	float ___s_1;
	// System.Single Doozy.Runtime.Colors.Models.HSV::v
	float ___v_2;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Doozy.Runtime.Colors.Models.RGB
struct RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 
{
	// System.Single Doozy.Runtime.Colors.Models.RGB::r
	float ___r_0;
	// System.Single Doozy.Runtime.Colors.Models.RGB::g
	float ___g_1;
	// System.Single Doozy.Runtime.Colors.Models.RGB::b
	float ___b_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Doozy.Runtime.Colors.Models.HSL/H
struct H_t0D2E16D64663E0956BCDB00DF6D27D0BB87E8396 
{
	union
	{
		struct
		{
		};
		uint8_t H_t0D2E16D64663E0956BCDB00DF6D27D0BB87E8396__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.HSL/L
struct L_tE9E899D202ACDF6316EC3A326E6F4C8537976D6F 
{
	union
	{
		struct
		{
		};
		uint8_t L_tE9E899D202ACDF6316EC3A326E6F4C8537976D6F__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.HSL/S
struct S_t0B4FA2E233D57DE1477ECE717D8DE9A6195C9397 
{
	union
	{
		struct
		{
		};
		uint8_t S_t0B4FA2E233D57DE1477ECE717D8DE9A6195C9397__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.HSV/H
struct H_t128C6825EBABB1868739A6FD80E99520E86242ED 
{
	union
	{
		struct
		{
		};
		uint8_t H_t128C6825EBABB1868739A6FD80E99520E86242ED__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.HSV/S
struct S_tD05A69BC6DB47A85E6AC78E56DAECF2D3F72756C 
{
	union
	{
		struct
		{
		};
		uint8_t S_tD05A69BC6DB47A85E6AC78E56DAECF2D3F72756C__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.HSV/V
struct V_t4EBFA8F2CB6FC28942ECC2EF349B2C8234E3ED57 
{
	union
	{
		struct
		{
		};
		uint8_t V_t4EBFA8F2CB6FC28942ECC2EF349B2C8234E3ED57__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.RGB/B
struct B_tCC2DA0BFB9FB4FFAA4888CEA386DA794D356787C 
{
	union
	{
		struct
		{
		};
		uint8_t B_tCC2DA0BFB9FB4FFAA4888CEA386DA794D356787C__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.RGB/G
struct G_t985108CA5E56B31BA26D10E2FC93B547DEAC120F 
{
	union
	{
		struct
		{
		};
		uint8_t G_t985108CA5E56B31BA26D10E2FC93B547DEAC120F__padding[1];
	};
};

// Doozy.Runtime.Colors.Models.RGB/R
struct R_tF84A30CF694A07C61D9D2A3CDE98655D831E3E26 
{
	union
	{
		struct
		{
		};
		uint8_t R_tF84A30CF694A07C61D9D2A3CDE98655D831E3E26__padding[1];
	};
};

// Doozy.Runtime.Colors.ColorEvent
struct ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Doozy.Runtime.Colors.ThemeColor
struct ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E  : public RuntimeObject
{
	// System.Boolean Doozy.Runtime.Colors.ThemeColor::<isDarkTheme>k__BackingField
	bool ___U3CisDarkThemeU3Ek__BackingField_0;
	// UnityEngine.Color Doozy.Runtime.Colors.ThemeColor::ColorOnDark
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorOnDark_1;
	// UnityEngine.Color Doozy.Runtime.Colors.ThemeColor::ColorOnLight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ColorOnLight_2;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method) ;

// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.Single Doozy.Runtime.Colors.ColorUtils::Hue(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_Hue_m7F42124BC27EA694AB4CAC36C7E7297EDEEFD70A (float ___r0, float ___g1, float ___b2, bool ___factorize3, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.Models.RGB::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.HSL::ToRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.ColorUtils::RGBtoCOLOR(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_RGBtoCOLOR_m3B89398414E5AC8AD4FE70AD0035B79C3E0CC50A (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___rgb0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.HSV::ToRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.Models.HSL::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___h0, float ___s1, float ___l2, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.HSL::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.ColorUtils::RGBtoHSL(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_m9A28C2E75D3AE3D29ADB1CF42460F5F49488F8F1 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.Models.HSV::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___h0, float ___s1, float ___v2, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.HSV::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.ColorUtils::RGBtoHSV(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m65866DD6DCA34F650815447436CF3576870F5819 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.HSL::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.RGB::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.HSV::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_currentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.SelectableColor::SelectionStateChanged(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::GetCurrentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.ThemeColor::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.ThemeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) ;
// System.Boolean Doozy.Runtime.Colors.SelectableColor::get_isDarkTheme()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.ColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_mC2B5BE475CEDDD1A4A8C2B4BD290CD54070F6CF0 (ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* __this, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.SelectableColor::SetSelectionState(Doozy.Runtime.Colors.SelectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___state0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.SelectionState Doozy.Runtime.Colors.SelectableColor::get_currentState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_normalColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_highlightedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_pressedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void Doozy.Runtime.Colors.SelectableColor::set_currentState(Doozy.Runtime.Colors.SelectionState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
inline void UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_gshared)(__this, ___arg00, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.HSL::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::HSLtoRGB(Doozy.Runtime.Colors.Models.HSL)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSLtoRGB_mFFC7E0D5D62951007FDA879749B584C4A247C8A6 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.Models.RGB::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___alpha0, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.Models.HSL::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___alpha0, const RuntimeMethod* method) ;
// System.Single Doozy.Runtime.Colors.Models.HSL::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 Doozy.Runtime.Colors.Models.HSL::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String Doozy.Runtime.Colors.Models.HSL::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, bool ___factorize0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.HSV::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::HSVtoRGB(Doozy.Runtime.Colors.Models.HSV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSVtoRGB_m275E2893AEEBB6974B6C8BABD935D6A81965A9DF (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color Doozy.Runtime.Colors.Models.HSV::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___alpha0, const RuntimeMethod* method) ;
// System.Single Doozy.Runtime.Colors.Models.HSV::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Int32 Doozy.Runtime.Colors.Models.HSV::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) ;
// System.String Doozy.Runtime.Colors.Models.HSV::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, bool ___factorize0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.RGB::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.ColorUtils::RGBtoHSL(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_mA0223308FEFD2AD4B442DF176BF0AD53960104D4 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___rgb0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.RGB::ToHSL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.ColorUtils::RGBtoHSV(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m375EBDD8F6EABFDA2F71122F11B1C909EB6B781F (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___value0, const RuntimeMethod* method) ;
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.RGB::ToHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
// System.Single Doozy.Runtime.Colors.Models.RGB::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Int32 Doozy.Runtime.Colors.Models.RGB::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.RGB::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) ;
// System.String Doozy.Runtime.Colors.Models.RGB::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___factorize0, const RuntimeMethod* method) ;
// System.String UnityEngine.ColorUtility::ToHtmlStringRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColorUtility_ToHtmlStringRGB_m0BF395744067B28A8C48609D4BA97F8920CBB346 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Doozy.Runtime.Colors.Models.RGB::ToHEX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___addHashTag0, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0 (double ___value0, int32_t ___digits1, int32_t ___mode2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Doozy.Runtime.Colors.ColorUtils::Hue(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_Hue_m7F42124BC27EA694AB4CAC36C7E7297EDEEFD70A (float ___r0, float ___g1, float ___b2, bool ___factorize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (r == g && g == b) return 0;
		float L_0 = ___r0;
		float L_1 = ___g1;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		float L_2 = ___g1;
		float L_3 = ___b2;
		if ((!(((float)L_2) == ((float)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		// if (r == g && g == b) return 0;
		return (0.0f);
	}

IL_000e:
	{
		// float hue = 0;
		V_0 = (0.0f);
		// if (r >= g && g >= b) hue = 60 * ((g - b) / (r - b));         //(A) If R ? G ? B  |  H = 60? x [(G-B)/(R-B)]
		float L_4 = ___r0;
		float L_5 = ___g1;
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_002f;
		}
	}
	{
		float L_6 = ___g1;
		float L_7 = ___b2;
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_002f;
		}
	}
	{
		// if (r >= g && g >= b) hue = 60 * ((g - b) / (r - b));         //(A) If R ? G ? B  |  H = 60? x [(G-B)/(R-B)]
		float L_8 = ___g1;
		float L_9 = ___b2;
		float L_10 = ___r0;
		float L_11 = ___b2;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)(((float)il2cpp_codegen_subtract(L_8, L_9))/((float)il2cpp_codegen_subtract(L_10, L_11))))));
		goto IL_00c3;
	}

IL_002f:
	{
		// else if (g > r && r >= b) hue = 60 * (2 - (r - b) / (g - b)); //(B) If G > R ? B  |  H = 60? x [2 - (R-B)/(G-B)]
		float L_12 = ___g1;
		float L_13 = ___r0;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_004d;
		}
	}
	{
		float L_14 = ___r0;
		float L_15 = ___b2;
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_004d;
		}
	}
	{
		// else if (g > r && r >= b) hue = 60 * (2 - (r - b) / (g - b)); //(B) If G > R ? B  |  H = 60? x [2 - (R-B)/(G-B)]
		float L_16 = ___r0;
		float L_17 = ___b2;
		float L_18 = ___g1;
		float L_19 = ___b2;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((2.0f), ((float)(((float)il2cpp_codegen_subtract(L_16, L_17))/((float)il2cpp_codegen_subtract(L_18, L_19))))))));
		goto IL_00c3;
	}

IL_004d:
	{
		// else if (g >= b && b > r) hue = 60 * (2 + (b - r) / (g - r)); //(C) If G ? B > R  |  H = 60? x [2 + (B-R)/(G-R)]
		float L_20 = ___g1;
		float L_21 = ___b2;
		if ((!(((float)L_20) >= ((float)L_21))))
		{
			goto IL_006b;
		}
	}
	{
		float L_22 = ___b2;
		float L_23 = ___r0;
		if ((!(((float)L_22) > ((float)L_23))))
		{
			goto IL_006b;
		}
	}
	{
		// else if (g >= b && b > r) hue = 60 * (2 + (b - r) / (g - r)); //(C) If G ? B > R  |  H = 60? x [2 + (B-R)/(G-R)]
		float L_24 = ___b2;
		float L_25 = ___r0;
		float L_26 = ___g1;
		float L_27 = ___r0;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_add((2.0f), ((float)(((float)il2cpp_codegen_subtract(L_24, L_25))/((float)il2cpp_codegen_subtract(L_26, L_27))))))));
		goto IL_00c3;
	}

IL_006b:
	{
		// else if (b > g && g > r) hue = 60 * (4 - (g - r) / (b - r));  //(D) If B > G > R  |  H = 60? x [4 - (G-R)/(B-R)]
		float L_28 = ___b2;
		float L_29 = ___g1;
		if ((!(((float)L_28) > ((float)L_29))))
		{
			goto IL_0089;
		}
	}
	{
		float L_30 = ___g1;
		float L_31 = ___r0;
		if ((!(((float)L_30) > ((float)L_31))))
		{
			goto IL_0089;
		}
	}
	{
		// else if (b > g && g > r) hue = 60 * (4 - (g - r) / (b - r));  //(D) If B > G > R  |  H = 60? x [4 - (G-R)/(B-R)]
		float L_32 = ___g1;
		float L_33 = ___r0;
		float L_34 = ___b2;
		float L_35 = ___r0;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((4.0f), ((float)(((float)il2cpp_codegen_subtract(L_32, L_33))/((float)il2cpp_codegen_subtract(L_34, L_35))))))));
		goto IL_00c3;
	}

IL_0089:
	{
		// else if (b > r && r >= g) hue = 60 * (4 + (r - g) / (b - g)); //(E) If B > R ? G  |  H = 60? x [4 + (R-G)/(B-G)]
		float L_36 = ___b2;
		float L_37 = ___r0;
		if ((!(((float)L_36) > ((float)L_37))))
		{
			goto IL_00a7;
		}
	}
	{
		float L_38 = ___r0;
		float L_39 = ___g1;
		if ((!(((float)L_38) >= ((float)L_39))))
		{
			goto IL_00a7;
		}
	}
	{
		// else if (b > r && r >= g) hue = 60 * (4 + (r - g) / (b - g)); //(E) If B > R ? G  |  H = 60? x [4 + (R-G)/(B-G)]
		float L_40 = ___r0;
		float L_41 = ___g1;
		float L_42 = ___b2;
		float L_43 = ___g1;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_add((4.0f), ((float)(((float)il2cpp_codegen_subtract(L_40, L_41))/((float)il2cpp_codegen_subtract(L_42, L_43))))))));
		goto IL_00c3;
	}

IL_00a7:
	{
		// else if (r >= b && b > g) hue = 60 * (6 - (b - g) / (r - g)); //(F) If R ? B > G  |  H = 60? x [6 - (B-G)/(R-G)]
		float L_44 = ___r0;
		float L_45 = ___b2;
		if ((!(((float)L_44) >= ((float)L_45))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_46 = ___b2;
		float L_47 = ___g1;
		if ((!(((float)L_46) > ((float)L_47))))
		{
			goto IL_00c3;
		}
	}
	{
		// else if (r >= b && b > g) hue = 60 * (6 - (b - g) / (r - g)); //(F) If R ? B > G  |  H = 60? x [6 - (B-G)/(R-G)]
		float L_48 = ___b2;
		float L_49 = ___g1;
		float L_50 = ___r0;
		float L_51 = ___g1;
		V_0 = ((float)il2cpp_codegen_multiply((60.0f), ((float)il2cpp_codegen_subtract((6.0f), ((float)(((float)il2cpp_codegen_subtract(L_48, L_49))/((float)il2cpp_codegen_subtract(L_50, L_51))))))));
	}

IL_00c3:
	{
		// if (factorize) Mathf.RoundToInt(hue);
		bool L_52 = ___factorize3;
		if (!L_52)
		{
			goto IL_00cd;
		}
	}
	{
		// if (factorize) Mathf.RoundToInt(hue);
		float L_53 = V_0;
		int32_t L_54;
		L_54 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(L_53, NULL);
	}

IL_00cd:
	{
		// return (float) Math.Round(hue / 360, 2);
		float L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_56;
		L_56 = Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline(((double)((float)(L_55/(360.0f)))), 2, NULL);
		return ((float)L_56);
	}
}
// System.Single Doozy.Runtime.Colors.ColorUtils::RGBtoHUE(Doozy.Runtime.Colors.Models.RGB,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorUtils_RGBtoHUE_m4F3EA12EC580ADC62AFD3F37EBE78AC16A5AC1EF (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___target0, bool ___factorize1, const RuntimeMethod* method) 
{
	{
		// Hue(target.r, target.g, target.b, factorize);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___target0;
		float L_1 = L_0.___r_0;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___target0;
		float L_3 = L_2.___g_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___target0;
		float L_5 = L_4.___b_2;
		bool L_6 = ___factorize1;
		float L_7;
		L_7 = ColorUtils_Hue_m7F42124BC27EA694AB4CAC36C7E7297EDEEFD70A(L_1, L_3, L_5, L_6, NULL);
		return L_7;
	}
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::HUEtoRGB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HUEtoRGB_m6B8AC8CE041F55A24EB6B863B40C52AA4E684DDD (float ___hue0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float R = Mathf.Abs(hue * 6 - 3) - 1;
		float L_0 = ___hue0;
		float L_1;
		L_1 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_0, (6.0f))), (3.0f))));
		// float G = 2 - Mathf.Abs(hue * 6 - 2);
		float L_2 = ___hue0;
		float L_3;
		L_3 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_2, (6.0f))), (2.0f))));
		V_0 = ((float)il2cpp_codegen_subtract((2.0f), L_3));
		// float B = 2 - Mathf.Abs(hue * 6 - 4);
		float L_4 = ___hue0;
		float L_5;
		L_5 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, (6.0f))), (4.0f))));
		V_1 = ((float)il2cpp_codegen_subtract((2.0f), L_5));
		// return new RGB(R, G, B);
		float L_6 = V_0;
		float L_7 = V_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_8;
		memset((&L_8), 0, sizeof(L_8));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_8), ((float)il2cpp_codegen_subtract(L_1, (1.0f))), L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.ColorUtils::RGBtoCOLOR(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_RGBtoCOLOR_m3B89398414E5AC8AD4FE70AD0035B79C3E0CC50A (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___rgb0, const RuntimeMethod* method) 
{
	{
		// new Color(rgb.r, rgb.g, rgb.g);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___rgb0;
		float L_1 = L_0.___r_0;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___rgb0;
		float L_3 = L_2.___g_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___rgb0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.ColorUtils::HSLtoCOLOR(Doozy.Runtime.Colors.Models.HSL)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_HSLtoCOLOR_mBEC36CFA7502BF76C8E668567C202E9FBD58662C (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___hsl0, const RuntimeMethod* method) 
{
	{
		// RGBtoCOLOR(hsl.ToRGB());
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0;
		L_0 = HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2((&___hsl0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ColorUtils_RGBtoCOLOR_m3B89398414E5AC8AD4FE70AD0035B79C3E0CC50A(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.ColorUtils::HSVtoCOLOR(Doozy.Runtime.Colors.Models.HSV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_HSVtoCOLOR_m4A1938A2EFF49C359411022910919B270D5BD5C8 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___hsv0, const RuntimeMethod* method) 
{
	{
		// RGBtoCOLOR(hsv.ToRGB());
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0;
		L_0 = HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74((&___hsv0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ColorUtils_RGBtoCOLOR_m3B89398414E5AC8AD4FE70AD0035B79C3E0CC50A(L_0, NULL);
		return L_1;
	}
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.ColorUtils::RGBtoHSL(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_m9A28C2E75D3AE3D29ADB1CF42460F5F49488F8F1 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float G_B5_0 = 0.0f;
	{
		// float Cmax = Mathf.Max(r, g, b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = ___r0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = ___g1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = ___b2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		float L_7;
		L_7 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_5, NULL);
		V_0 = L_7;
		// float Cmin = Mathf.Min(r, g, b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		float L_10 = ___r0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = ___g1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = ___b2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_14);
		float L_15;
		L_15 = Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline(L_13, NULL);
		V_1 = L_15;
		// float delta = Cmax - Cmin;
		float L_16 = V_0;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// float H = 0;
		V_3 = (0.0f);
		// float S = 0;
		V_4 = (0.0f);
		// float L = (Cmax + Cmin) / 2;
		float L_18 = V_0;
		float L_19 = V_1;
		V_5 = ((float)(((float)il2cpp_codegen_add(L_18, L_19))/(2.0f)));
		// if (delta == 0) return new HSL(H, S, L).Validate();
		float L_20 = V_2;
		if ((!(((float)L_20) == ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		// if (delta == 0) return new HSL(H, S, L).Validate();
		float L_21 = V_3;
		float L_22 = V_4;
		float L_23 = V_5;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_24;
		memset((&L_24), 0, sizeof(L_24));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_25;
		L_25 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_6), NULL);
		return L_25;
	}

IL_0068:
	{
		// H = Hue(r, g, b);
		float L_26 = ___r0;
		float L_27 = ___g1;
		float L_28 = ___b2;
		float L_29;
		L_29 = ColorUtils_Hue_m7F42124BC27EA694AB4CAC36C7E7297EDEEFD70A(L_26, L_27, L_28, (bool)0, NULL);
		V_3 = L_29;
		// S = L < 0.5f
		//         ? delta / (Cmax + Cmin)
		//         : delta / (2 - Cmax - Cmin);
		float L_30 = V_5;
		if ((((float)L_30) < ((float)(0.5f))))
		{
			goto IL_0088;
		}
	}
	{
		float L_31 = V_2;
		float L_32 = V_0;
		float L_33 = V_1;
		G_B5_0 = ((float)(L_31/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((2.0f), L_32)), L_33))));
		goto IL_008d;
	}

IL_0088:
	{
		float L_34 = V_2;
		float L_35 = V_0;
		float L_36 = V_1;
		G_B5_0 = ((float)(L_34/((float)il2cpp_codegen_add(L_35, L_36))));
	}

IL_008d:
	{
		V_4 = G_B5_0;
		// return new HSL(H, S, L).Validate();
		float L_37 = V_3;
		float L_38 = V_4;
		float L_39 = V_5;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_40;
		memset((&L_40), 0, sizeof(L_40));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_40), L_37, L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_41;
		L_41 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_6), NULL);
		return L_41;
	}
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.ColorUtils::RGBtoHSL(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_RGBtoHSL_mA0223308FEFD2AD4B442DF176BF0AD53960104D4 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___rgb0, const RuntimeMethod* method) 
{
	{
		// RGBtoHSL(rgb.r, rgb.g, rgb.b);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___rgb0;
		float L_1 = L_0.___r_0;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___rgb0;
		float L_3 = L_2.___g_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___rgb0;
		float L_5 = L_4.___b_2;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		L_6 = ColorUtils_RGBtoHSL_m9A28C2E75D3AE3D29ADB1CF42460F5F49488F8F1(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.ColorUtils::COLORtoHSL(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ColorUtils_COLORtoHSL_m3AACB5E9C1F1B4A375589DAC5FA1919A2ABE1A0F (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// RGBtoHSL(color.r, color.g, color.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___b_2;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		L_6 = ColorUtils_RGBtoHSL_m9A28C2E75D3AE3D29ADB1CF42460F5F49488F8F1(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.ColorUtils::RGBtoHSV(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m65866DD6DCA34F650815447436CF3576870F5819 (float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// float Cmax = Mathf.Max(r, g, b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = ___r0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = ___g1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = ___b2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		float L_7;
		L_7 = Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline(L_5, NULL);
		V_0 = L_7;
		// float Cmin = Mathf.Min(r, g, b);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_8;
		float L_10 = ___r0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = ___g1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = ___b2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_14);
		float L_15;
		L_15 = Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline(L_13, NULL);
		V_1 = L_15;
		// float delta = Cmax - Cmin;
		float L_16 = V_0;
		float L_17 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract(L_16, L_17));
		// float H = 0;
		V_3 = (0.0f);
		// float S = 0;
		V_4 = (0.0f);
		// float V = Cmax;
		float L_18 = V_0;
		V_5 = L_18;
		// if (delta == 0) return new HSV(H, S, V).Validate();
		float L_19 = V_2;
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// if (delta == 0) return new HSV(H, S, V).Validate();
		float L_20 = V_3;
		float L_21 = V_4;
		float L_22 = V_5;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_23;
		memset((&L_23), 0, sizeof(L_23));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_23), L_20, L_21, L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_24;
		L_24 = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C((&V_6), NULL);
		return L_24;
	}

IL_0060:
	{
		// H = Hue(r, g, b);
		float L_25 = ___r0;
		float L_26 = ___g1;
		float L_27 = ___b2;
		float L_28;
		L_28 = ColorUtils_Hue_m7F42124BC27EA694AB4CAC36C7E7297EDEEFD70A(L_25, L_26, L_27, (bool)0, NULL);
		V_3 = L_28;
		// S = delta / Cmax;
		float L_29 = V_2;
		float L_30 = V_0;
		V_4 = ((float)(L_29/L_30));
		// return new HSV(H, S, V).Validate();
		float L_31 = V_3;
		float L_32 = V_4;
		float L_33 = V_5;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_34;
		memset((&L_34), 0, sizeof(L_34));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_34), L_31, L_32, L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_35;
		L_35 = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C((&V_6), NULL);
		return L_35;
	}
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.ColorUtils::RGBtoHSV(Doozy.Runtime.Colors.Models.RGB)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_RGBtoHSV_m375EBDD8F6EABFDA2F71122F11B1C909EB6B781F (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ___value0, const RuntimeMethod* method) 
{
	{
		// RGBtoHSV(value.r, value.g, value.g);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = ___value0;
		float L_1 = L_0.___r_0;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2 = ___value0;
		float L_3 = L_2.___g_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_4 = ___value0;
		float L_5 = L_4.___g_1;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6;
		L_6 = ColorUtils_RGBtoHSV_m65866DD6DCA34F650815447436CF3576870F5819(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.ColorUtils::COLORtoHSV(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ColorUtils_COLORtoHSV_m3DF793E18AABEF018EF93B461D37954F0F3AE5CE (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// RGBtoHSV(color.r, color.g, color.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___b_2;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6;
		L_6 = ColorUtils_RGBtoHSV_m65866DD6DCA34F650815447436CF3576870F5819(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::COLORtoRGB(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_COLORtoRGB_mBC8CB838152ACD67F3356EB173B996D13789A69E (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// new RGB(color.r, color.g, color.b);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___color0;
		float L_5 = L_4.___b_2;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_6;
		memset((&L_6), 0, sizeof(L_6));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::HSLtoRGB(Doozy.Runtime.Colors.Models.HSL)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSLtoRGB_mFFC7E0D5D62951007FDA879749B584C4A247C8A6 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85 ___value0, const RuntimeMethod* method) 
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 V_10;
	memset((&V_10), 0, sizeof(V_10));
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// HSL hsl = new HSL(value.h, value.s, value.l).Validate();
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = ___value0;
		float L_1 = L_0.___h_0;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_2 = ___value0;
		float L_3 = L_2.___s_1;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_4 = ___value0;
		float L_5 = L_4.___l_2;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6;
		memset((&L_6), 0, sizeof(L_6));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_10 = L_6;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_7;
		L_7 = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556((&V_10), NULL);
		V_0 = L_7;
		// float H = hsl.Factorize().x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E((&V_0), NULL);
		float L_9 = L_8.___x_2;
		V_1 = L_9;
		// float S = hsl.s;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_10 = V_0;
		float L_11 = L_10.___s_1;
		V_2 = L_11;
		// float L = hsl.l;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_12 = V_0;
		float L_13 = L_12.___l_2;
		V_3 = L_13;
		// float C = (1 - Mathf.Abs(2 * L - 1)) * S;
		float L_14 = V_3;
		float L_15;
		L_15 = fabsf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_14)), (1.0f))));
		float L_16 = V_2;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_15)), L_16));
		// float X = C * (1 - Mathf.Abs(H / 60 % 2 - 1));
		float L_17 = V_4;
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract((fmodf(((float)(L_18/(60.0f))), (2.0f))), (1.0f))));
		V_5 = ((float)il2cpp_codegen_multiply(L_17, ((float)il2cpp_codegen_subtract((1.0f), L_19))));
		// float m = L - C / 2;
		float L_20 = V_3;
		float L_21 = V_4;
		V_6 = ((float)il2cpp_codegen_subtract(L_20, ((float)(L_21/(2.0f)))));
		// float r = 0, g = 0, b = 0;
		V_7 = (0.0f);
		// float r = 0, g = 0, b = 0;
		V_8 = (0.0f);
		// float r = 0, g = 0, b = 0;
		V_9 = (0.0f);
		// if (0 <= H && H < 60)
		float L_22 = V_1;
		if ((!(((float)(0.0f)) <= ((float)L_22))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_23 = V_1;
		if ((!(((float)L_23) < ((float)(60.0f)))))
		{
			goto IL_00c0;
		}
	}
	{
		// r = C;
		float L_24 = V_4;
		V_7 = L_24;
		// g = X;
		float L_25 = V_5;
		V_8 = L_25;
		// b = 0;
		V_9 = (0.0f);
		goto IL_0166;
	}

IL_00c0:
	{
		// else if (60 <= H && H < 120)
		float L_26 = V_1;
		if ((!(((float)(60.0f)) <= ((float)L_26))))
		{
			goto IL_00e4;
		}
	}
	{
		float L_27 = V_1;
		if ((!(((float)L_27) < ((float)(120.0f)))))
		{
			goto IL_00e4;
		}
	}
	{
		// r = X;
		float L_28 = V_5;
		V_7 = L_28;
		// g = C;
		float L_29 = V_4;
		V_8 = L_29;
		// b = 0;
		V_9 = (0.0f);
		goto IL_0166;
	}

IL_00e4:
	{
		// else if (120 <= H && H < 180)
		float L_30 = V_1;
		if ((!(((float)(120.0f)) <= ((float)L_30))))
		{
			goto IL_0105;
		}
	}
	{
		float L_31 = V_1;
		if ((!(((float)L_31) < ((float)(180.0f)))))
		{
			goto IL_0105;
		}
	}
	{
		// r = 0;
		V_7 = (0.0f);
		// g = C;
		float L_32 = V_4;
		V_8 = L_32;
		// b = X;
		float L_33 = V_5;
		V_9 = L_33;
		goto IL_0166;
	}

IL_0105:
	{
		// else if (180 <= H && H < 240)
		float L_34 = V_1;
		if ((!(((float)(180.0f)) <= ((float)L_34))))
		{
			goto IL_0126;
		}
	}
	{
		float L_35 = V_1;
		if ((!(((float)L_35) < ((float)(240.0f)))))
		{
			goto IL_0126;
		}
	}
	{
		// r = 0;
		V_7 = (0.0f);
		// g = X;
		float L_36 = V_5;
		V_8 = L_36;
		// b = C;
		float L_37 = V_4;
		V_9 = L_37;
		goto IL_0166;
	}

IL_0126:
	{
		// else if (240 <= H && H < 300)
		float L_38 = V_1;
		if ((!(((float)(240.0f)) <= ((float)L_38))))
		{
			goto IL_0147;
		}
	}
	{
		float L_39 = V_1;
		if ((!(((float)L_39) < ((float)(300.0f)))))
		{
			goto IL_0147;
		}
	}
	{
		// r = X;
		float L_40 = V_5;
		V_7 = L_40;
		// g = 0;
		V_8 = (0.0f);
		// b = C;
		float L_41 = V_4;
		V_9 = L_41;
		goto IL_0166;
	}

IL_0147:
	{
		// else if (300 <= H && H < 360)
		float L_42 = V_1;
		if ((!(((float)(300.0f)) <= ((float)L_42))))
		{
			goto IL_0166;
		}
	}
	{
		float L_43 = V_1;
		if ((!(((float)L_43) < ((float)(360.0f)))))
		{
			goto IL_0166;
		}
	}
	{
		// r = C;
		float L_44 = V_4;
		V_7 = L_44;
		// g = 0;
		V_8 = (0.0f);
		// b = X;
		float L_45 = V_5;
		V_9 = L_45;
	}

IL_0166:
	{
		// return new RGB(r + m, g + m, b + m).Validate();
		float L_46 = V_7;
		float L_47 = V_6;
		float L_48 = V_8;
		float L_49 = V_6;
		float L_50 = V_9;
		float L_51 = V_6;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_52;
		memset((&L_52), 0, sizeof(L_52));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_52), ((float)il2cpp_codegen_add(L_46, L_47)), ((float)il2cpp_codegen_add(L_48, L_49)), ((float)il2cpp_codegen_add(L_50, L_51)), /*hidden argument*/NULL);
		V_11 = L_52;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_53;
		L_53 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_11), NULL);
		return L_53;
	}
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.ColorUtils::HSVtoRGB(Doozy.Runtime.Colors.Models.HSV)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 ColorUtils_HSVtoRGB_m275E2893AEEBB6974B6C8BABD935D6A81965A9DF (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 ___value0, const RuntimeMethod* method) 
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		// var hsv = new HSV(value.h, value.s, value.v);
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = ___value0;
		float L_1 = L_0.___h_0;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_2 = ___value0;
		float L_3 = L_2.___s_1;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_4 = ___value0;
		float L_5 = L_4.___v_2;
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&V_0), L_1, L_3, L_5, NULL);
		// float H = hsv.Factorize().x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134((&V_0), NULL);
		float L_7 = L_6.___x_2;
		V_1 = L_7;
		// float S = hsv.s;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_8 = V_0;
		float L_9 = L_8.___s_1;
		V_2 = L_9;
		// float V = hsv.v;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_10 = V_0;
		float L_11 = L_10.___v_2;
		// float C = V * S;
		float L_12 = L_11;
		float L_13 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		// float X = C * (1 - Mathf.Abs(H / 60 % 2 - 1));
		float L_14 = V_3;
		float L_15 = V_1;
		float L_16;
		L_16 = fabsf(((float)il2cpp_codegen_subtract((fmodf(((float)(L_15/(60.0f))), (2.0f))), (1.0f))));
		V_4 = ((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_subtract((1.0f), L_16))));
		// float m = V - C;
		float L_17 = V_3;
		V_5 = ((float)il2cpp_codegen_subtract(L_12, L_17));
		// float r = 0, g = 0, b = 0;
		V_6 = (0.0f);
		// float r = 0, g = 0, b = 0;
		V_7 = (0.0f);
		// float r = 0, g = 0, b = 0;
		V_8 = (0.0f);
		// if (0 <= H && H < 60)
		float L_18 = V_1;
		if ((!(((float)(0.0f)) <= ((float)L_18))))
		{
			goto IL_0095;
		}
	}
	{
		float L_19 = V_1;
		if ((!(((float)L_19) < ((float)(60.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// r = C;
		float L_20 = V_3;
		V_6 = L_20;
		// g = X;
		float L_21 = V_4;
		V_7 = L_21;
		// b = 0;
		V_8 = (0.0f);
		goto IL_0133;
	}

IL_0095:
	{
		// else if (60 <= H && H < 120)
		float L_22 = V_1;
		if ((!(((float)(60.0f)) <= ((float)L_22))))
		{
			goto IL_00b5;
		}
	}
	{
		float L_23 = V_1;
		if ((!(((float)L_23) < ((float)(120.0f)))))
		{
			goto IL_00b5;
		}
	}
	{
		// r = X;
		float L_24 = V_4;
		V_6 = L_24;
		// g = C;
		float L_25 = V_3;
		V_7 = L_25;
		// b = 0;
		V_8 = (0.0f);
		goto IL_0133;
	}

IL_00b5:
	{
		// else if (120 <= H && H < 180)
		float L_26 = V_1;
		if ((!(((float)(120.0f)) <= ((float)L_26))))
		{
			goto IL_00d5;
		}
	}
	{
		float L_27 = V_1;
		if ((!(((float)L_27) < ((float)(180.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		// r = 0;
		V_6 = (0.0f);
		// g = C;
		float L_28 = V_3;
		V_7 = L_28;
		// b = X;
		float L_29 = V_4;
		V_8 = L_29;
		goto IL_0133;
	}

IL_00d5:
	{
		// else if (180 <= H && H < 240)
		float L_30 = V_1;
		if ((!(((float)(180.0f)) <= ((float)L_30))))
		{
			goto IL_00f5;
		}
	}
	{
		float L_31 = V_1;
		if ((!(((float)L_31) < ((float)(240.0f)))))
		{
			goto IL_00f5;
		}
	}
	{
		// r = 0;
		V_6 = (0.0f);
		// g = X;
		float L_32 = V_4;
		V_7 = L_32;
		// b = C;
		float L_33 = V_3;
		V_8 = L_33;
		goto IL_0133;
	}

IL_00f5:
	{
		// else if (240 <= H && H < 300)
		float L_34 = V_1;
		if ((!(((float)(240.0f)) <= ((float)L_34))))
		{
			goto IL_0115;
		}
	}
	{
		float L_35 = V_1;
		if ((!(((float)L_35) < ((float)(300.0f)))))
		{
			goto IL_0115;
		}
	}
	{
		// r = X;
		float L_36 = V_4;
		V_6 = L_36;
		// g = 0;
		V_7 = (0.0f);
		// b = C;
		float L_37 = V_3;
		V_8 = L_37;
		goto IL_0133;
	}

IL_0115:
	{
		// else if (300 <= H && H < 360)
		float L_38 = V_1;
		if ((!(((float)(300.0f)) <= ((float)L_38))))
		{
			goto IL_0133;
		}
	}
	{
		float L_39 = V_1;
		if ((!(((float)L_39) < ((float)(360.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// r = C;
		float L_40 = V_3;
		V_6 = L_40;
		// g = 0;
		V_7 = (0.0f);
		// b = X;
		float L_41 = V_4;
		V_8 = L_41;
	}

IL_0133:
	{
		// return new RGB(r + m, g + m, b + m);
		float L_42 = V_6;
		float L_43 = V_5;
		float L_44 = V_7;
		float L_45 = V_5;
		float L_46 = V_8;
		float L_47 = V_5;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_48;
		memset((&L_48), 0, sizeof(L_48));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_48), ((float)il2cpp_codegen_add(L_42, L_43)), ((float)il2cpp_codegen_add(L_44, L_45)), ((float)il2cpp_codegen_add(L_46, L_47)), /*hidden argument*/NULL);
		return L_48;
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
// System.Boolean Doozy.Runtime.Colors.SelectableColor::get_isDarkTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsDarkTheme;
		bool L_0 = __this->___m_IsDarkTheme_0;
		return L_0;
	}
}
// System.Void Doozy.Runtime.Colors.SelectableColor::set_isDarkTheme(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_set_isDarkTheme_m0758478AA6736E2B6C99E5A3667953B6167EC2F8 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_IsDarkTheme = value;
		bool L_0 = ___value0;
		__this->___m_IsDarkTheme_0 = L_0;
		// Normal.isDarkTheme = m_IsDarkTheme;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_1 = __this->___Normal_3;
		bool L_2 = __this->___m_IsDarkTheme_0;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_1, L_2);
		// Highlighted.isDarkTheme = m_IsDarkTheme;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_3 = __this->___Highlighted_4;
		bool L_4 = __this->___m_IsDarkTheme_0;
		NullCheck(L_3);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_3, L_4);
		// Pressed.isDarkTheme = m_IsDarkTheme;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_5 = __this->___Pressed_5;
		bool L_6 = __this->___m_IsDarkTheme_0;
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_5, L_6);
		// Selected.isDarkTheme = m_IsDarkTheme;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_7 = __this->___Selected_6;
		bool L_8 = __this->___m_IsDarkTheme_0;
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_7, L_8);
		// Disabled.isDarkTheme = m_IsDarkTheme;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_9 = __this->___Disabled_7;
		bool L_10 = __this->___m_IsDarkTheme_0;
		NullCheck(L_9);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_9, L_10);
		// SelectionStateChanged(currentColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718(__this, NULL);
		SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2(__this, L_11, NULL);
		// }
		return;
	}
}
// Doozy.Runtime.Colors.SelectionState Doozy.Runtime.Colors.SelectableColor::get_currentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CcurrentStateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Doozy.Runtime.Colors.SelectableColor::set_currentState(Doozy.Runtime.Colors.SelectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CcurrentStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_currentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color currentColor => GetCurrentColor();
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5(__this, NULL);
		return L_0;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_normalColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color normalColor => Normal.color;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Normal_3;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_highlightedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor => Highlighted.color;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Highlighted_4;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_pressedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color pressedColor => Pressed.color;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Pressed_5;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_selectedColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color selectedColor => Selected.color;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Selected_6;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::get_disabledColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// public Color disabledColor => Disabled.color;
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = __this->___Disabled_7;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75(L_0, NULL);
		return L_1;
	}
}
// System.Void Doozy.Runtime.Colors.SelectableColor::.ctor(Doozy.Runtime.Colors.ColorEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor__ctor_m4FA5A0095B4725642947877123E479B207F2566F (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* ___onStateChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B2_0 = NULL;
	SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* G_B2_1 = NULL;
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B1_0 = NULL;
	SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* G_B1_1 = NULL;
	{
		// public SelectableColor(ColorEvent onStateChanged = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Normal = new ThemeColor { isDarkTheme = isDarkTheme };
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_0 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_0, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_1 = L_0;
		bool L_2;
		L_2 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_1, L_2);
		__this->___Normal_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Normal_3), (void*)L_1);
		// Highlighted = new ThemeColor { isDarkTheme = isDarkTheme };
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_3 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_3, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_4 = L_3;
		bool L_5;
		L_5 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_4, L_5);
		__this->___Highlighted_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Highlighted_4), (void*)L_4);
		// Pressed = new ThemeColor { isDarkTheme = isDarkTheme };
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_6 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_6, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_7 = L_6;
		bool L_8;
		L_8 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_7, L_8);
		__this->___Pressed_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Pressed_5), (void*)L_7);
		// Selected = new ThemeColor { isDarkTheme = isDarkTheme };
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_9 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_9, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_10 = L_9;
		bool L_11;
		L_11 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_10, L_11);
		__this->___Selected_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Selected_6), (void*)L_10);
		// Disabled = new ThemeColor { isDarkTheme = isDarkTheme };
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_12 = (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E*)il2cpp_codegen_object_new(ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2(L_12, NULL);
		ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* L_13 = L_12;
		bool L_14;
		L_14 = SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline(__this, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean) */, L_13, L_14);
		__this->___Disabled_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Disabled_7), (void*)L_13);
		// this.onStateChanged = onStateChanged ?? new ColorEvent();
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_15 = ___onStateChanged0;
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_16 = L_15;
		G_B1_0 = L_16;
		G_B1_1 = __this;
		if (L_16)
		{
			G_B2_0 = L_16;
			G_B2_1 = __this;
			goto IL_0084;
		}
	}
	{
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_17 = (ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366*)il2cpp_codegen_object_new(ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ColorEvent__ctor_mC2B5BE475CEDDD1A4A8C2B4BD290CD54070F6CF0(L_17, NULL);
		G_B2_0 = L_17;
		G_B2_1 = G_B1_1;
	}

IL_0084:
	{
		NullCheck(G_B2_1);
		G_B2_1->___onStateChanged_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___onStateChanged_2), (void*)G_B2_0);
		// SetSelectionState(SelectionState.Normal);
		SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73(__this, 0, NULL);
		// }
		return;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.SelectableColor::GetCurrentColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (currentState)
		int32_t L_0;
		L_0 = SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0038;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0023:
	{
		// case SelectionState.Normal: return normalColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = SelectableColor_get_normalColor_m0E49019F66DFF06459E92CC65584A75BA5A99EFD(__this, NULL);
		return L_2;
	}

IL_002a:
	{
		// case SelectionState.Highlighted: return highlightedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = SelectableColor_get_highlightedColor_m0A5728140FF96C37779ED4A64D08B944BF718B7D(__this, NULL);
		return L_3;
	}

IL_0031:
	{
		// case SelectionState.Pressed: return pressedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = SelectableColor_get_pressedColor_mC08278770C3CCBC47B4DD35DE2F604E149112AEA(__this, NULL);
		return L_4;
	}

IL_0038:
	{
		// case SelectionState.Selected: return selectedColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = SelectableColor_get_selectedColor_mE4A6E5871E71AF624E046AC2B70F126F1032964B(__this, NULL);
		return L_5;
	}

IL_003f:
	{
		// case SelectionState.Disabled: return disabledColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = SelectableColor_get_disabledColor_m778DA2F7C35E1CC60B08A5A97ED58FBB696F8DBD(__this, NULL);
		return L_6;
	}

IL_0046:
	{
		// default: throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SelectableColor_GetCurrentColor_mCE78C636FA2C3EFF768797FA32E7C7A16069B1A5_RuntimeMethod_var)));
	}
}
// System.Void Doozy.Runtime.Colors.SelectableColor::SetSelectionState(Doozy.Runtime.Colors.SelectionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SetSelectionState_m505011CD3A73CECCEB4F7C6E65A067809C3DFB73 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		// currentState = state;
		int32_t L_0 = ___state0;
		SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline(__this, L_0, NULL);
		// SelectionStateChanged(currentColor);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = SelectableColor_get_currentColor_mD6A22914A743082E1D03E1CCD618F7943C2F9718(__this, NULL);
		SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Doozy.Runtime.Colors.SelectableColor::SelectionStateChanged(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectableColor_SelectionStateChanged_m412D5666F61484C8F085917E8DD89118760372C2 (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B2_0 = NULL;
	ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* G_B1_0 = NULL;
	{
		// onStateChanged?.Invoke(color);
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_0 = __this->___onStateChanged_2;
		ColorEvent_t59F430CF585426606ACDC19926A361B2EACE6366* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D(G_B2_0, L_2, UnityEvent_1_Invoke_m742FE68F8584FCA2350604FAFF86FA120A2CFE8D_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Doozy.Runtime.Colors.ThemeColor::get_isDarkTheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThemeColor_get_isDarkTheme_m6DE97C6F75DBD06D118781A9B9F33E995A5291B4 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool isDarkTheme { get; set; }
		bool L_0 = __this->___U3CisDarkThemeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Doozy.Runtime.Colors.ThemeColor::set_isDarkTheme(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor_set_isDarkTheme_mDE3099D8A6ACC7D9888752440A4759052E8215E8 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public virtual bool isDarkTheme { get; set; }
		bool L_0 = ___value0;
		__this->___U3CisDarkThemeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.Color Doozy.Runtime.Colors.ThemeColor::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ThemeColor_get_color_mB27B7B647DF063A0EBA8BBC3D2D6895015CE8A75 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	{
		// isDarkTheme
		//     ? ColorOnDark
		//     : ColorOnLight;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(4 /* System.Boolean Doozy.Runtime.Colors.ThemeColor::get_isDarkTheme() */, __this);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___ColorOnLight_2;
		return L_1;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___ColorOnDark_1;
		return L_2;
	}
}
// System.Void Doozy.Runtime.Colors.ThemeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThemeColor__ctor_m3C6BD94A543044E5A31091845FA162FFD485D3A2 (ThemeColor_t53AE5921AF1DA1D944E0EFA1F73B238BE5E9DB1E* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public ThemeColor()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ColorOnDark = ColorOnLight = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0;
		V_0 = L_1;
		__this->___ColorOnLight_2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = V_0;
		__this->___ColorOnDark_1 = L_2;
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
// System.Void Doozy.Runtime.Colors.Models.HSL::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___h0, float ___s1, float ___l2, const RuntimeMethod* method) 
{
	{
		// this.h = h;
		float L_0 = ___h0;
		__this->___h_0 = L_0;
		// this.s = s;
		float L_1 = ___s1;
		__this->___s_1 = L_1;
		// this.l = l;
		float L_2 = ___l2;
		__this->___l_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398_AdjustorThunk (RuntimeObject* __this, float ___h0, float ___s1, float ___l2, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398(_thisAdjusted, ___h0, ___s1, ___l2, method);
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.HSL::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		// new HSL(h, s, l);
		float L_0 = __this->___h_0;
		float L_1 = __this->___s_1;
		float L_2 = __this->___l_2;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_3;
		memset((&L_3), 0, sizeof(L_3));
		HSL__ctor_m07507D631167D40DB30E5585E850958090FFB398((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = HSL_Copy_m294143F44AEBFBEF9B1413196D49920EEFD9CDB5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color Doozy.Runtime.Colors.Models.HSL::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___alpha0, const RuntimeMethod* method) 
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ColorUtils.HSLtoRGB(this).Validate().ToColor();
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSLtoRGB_mFFC7E0D5D62951007FDA879749B584C4A247C8A6(L_0, NULL);
		V_0 = L_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2;
		L_2 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_0), NULL);
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6((&V_0), (1.0f), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D_AdjustorThunk (RuntimeObject* __this, float ___alpha0, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = HSL_ToColor_m1CFCE9099A883C6357AF2884BB5D0669F1C5EB7D(_thisAdjusted, ___alpha0, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.HSL::ToRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		// ColorUtils.HSLtoRGB(this);
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_0 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSLtoRGB_mFFC7E0D5D62951007FDA879749B584C4A247C8A6(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = HSL_ToRGB_m7E1A7E1D4B0B9933831EA2E5F4FED8979A882DB2(_thisAdjusted, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.HSL::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	{
		// h = ValidateColor(h, H.MIN, H.MAX);
		float L_0 = __this->___h_0;
		float L_1;
		L_1 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___h_0 = L_1;
		// s = ValidateColor(s, S.MIN, S.MAX);
		float L_2 = __this->___s_1;
		float L_3;
		L_3 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___s_1 = L_3;
		// l = ValidateColor(l, L.MIN, L.MAX);
		float L_4 = __this->___l_2;
		float L_5;
		L_5 = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___l_2 = L_5;
		// return this;
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_6 = (*(HSL_tFC0E043357C640451DED090325DB7789B92F1C85*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = HSL_Validate_m124583A3CA57B47AA3A8E19A168F8BA21587A556(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Doozy.Runtime.Colors.Models.HSL::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// Mathf.Max(min, Mathf.Min(max, value));
		float L_0 = ___min1;
		float L_1 = ___max2;
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	float _returnValue;
	_returnValue = HSL_ValidateColor_mB89D7438AE24B49D075B81E9AFE7BA15C8E97810(_thisAdjusted, ___value0, ___min1, ___max2, method);
	return _returnValue;
}
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.HSL::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new Vector3
		// {
		//     x = FactorizeColor(h, H.MIN, H.MAX, H.F),
		//     y = FactorizeColor(s, S.MIN, S.MAX, S.F),
		//     z = FactorizeColor(l, L.MIN, L.MAX, L.F)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___h_0;
		int32_t L_1;
		L_1 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_0, (0.0f), (1.0f), (360.0f), NULL);
		(&V_0)->___x_2 = ((float)L_1);
		float L_2 = __this->___s_1;
		int32_t L_3;
		L_3 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_2, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___y_3 = ((float)L_3);
		float L_4 = __this->___l_2;
		int32_t L_5;
		L_5 = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(__this, L_4, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___z_4 = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Doozy.Runtime.Colors.Models.HSL::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365 (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) 
{
	{
		// (int) Mathf.Max(min * f, Mathf.Min(max * f, Mathf.Round(value * f)));
		float L_0 = ___min1;
		float L_1 = ___f3;
		float L_2 = ___max2;
		float L_3 = ___f3;
		float L_4 = ___value0;
		float L_5 = ___f3;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HSL_FactorizeColor_m3CD0D88C4CFFC3F603528BE25628173C37F6E365(_thisAdjusted, ___value0, ___min1, ___max2, ___f3, method);
	return _returnValue;
}
// System.String Doozy.Runtime.Colors.Models.HSL::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD (HSL_tFC0E043357C640451DED090325DB7789B92F1C85* __this, bool ___factorize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factorize
		//     ? $"hsl({Factorize().x}, {Factorize().y}%, {Factorize().z}%)"
		//     : $"hsl({h}, {s}%, {l}%)";
		bool L_0 = ___factorize0;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___h_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___s_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___l_2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_16 = L_15.___y_3;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = HSL_Factorize_mFF9B47DDA6A199D830BE76C8C18D7CE5C88DF50E(__this, NULL);
		float L_20 = L_19.___z_4;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral3527204424CF64E35556308132D94D7C1C5EAA59, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD_AdjustorThunk (RuntimeObject* __this, bool ___factorize0, const RuntimeMethod* method)
{
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSL_tFC0E043357C640451DED090325DB7789B92F1C85*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = HSL_ToString_m8E623A4FEF970D9DE94304301C06774A8014FABD(_thisAdjusted, ___factorize0, method);
	return _returnValue;
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
// System.Void Doozy.Runtime.Colors.Models.HSV::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___h0, float ___s1, float ___v2, const RuntimeMethod* method) 
{
	{
		// this.h = h;
		float L_0 = ___h0;
		__this->___h_0 = L_0;
		// this.s = s;
		float L_1 = ___s1;
		__this->___s_1 = L_1;
		// this.v = v;
		float L_2 = ___v2;
		__this->___v_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E_AdjustorThunk (RuntimeObject* __this, float ___h0, float ___s1, float ___v2, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E(_thisAdjusted, ___h0, ___s1, ___v2, method);
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.HSV::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		// new HSV(h, s, v);
		float L_0 = __this->___h_0;
		float L_1 = __this->___s_1;
		float L_2 = __this->___v_2;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_3;
		memset((&L_3), 0, sizeof(L_3));
		HSV__ctor_mEFD2720C943717443A1D1B5070F1E59AE3AD8F0E((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = HSV_Copy_m049ED385F7E372146A048AA8B5957A68449A5F0E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color Doozy.Runtime.Colors.Models.HSV::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___alpha0, const RuntimeMethod* method) 
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// ColorUtils.HSVtoRGB(this).Validate().ToColor();
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSVtoRGB_m275E2893AEEBB6974B6C8BABD935D6A81965A9DF(L_0, NULL);
		V_0 = L_1;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_2;
		L_2 = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1((&V_0), NULL);
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6((&V_0), (1.0f), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB_AdjustorThunk (RuntimeObject* __this, float ___alpha0, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = HSV_ToColor_mD5661A203743B6FC0D16C77490A7867F136DADDB(_thisAdjusted, ___alpha0, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.HSV::ToRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		// ColorUtils.HSVtoRGB(this);
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_0 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_1;
		L_1 = ColorUtils_HSVtoRGB_m275E2893AEEBB6974B6C8BABD935D6A81965A9DF(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = HSV_ToRGB_m503CEF1AE7E9FF0ABB7DD66FA4743CAF6B846A74(_thisAdjusted, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.HSV::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	{
		// h = ValidateColor(h, H.MIN, H.MAX);
		float L_0 = __this->___h_0;
		float L_1;
		L_1 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___h_0 = L_1;
		// s = ValidateColor(s, S.MIN, S.MAX);
		float L_2 = __this->___s_1;
		float L_3;
		L_3 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___s_1 = L_3;
		// v = ValidateColor(v, V.MIN, V.MAX);
		float L_4 = __this->___v_2;
		float L_5;
		L_5 = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___v_2 = L_5;
		// return this;
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_6 = (*(HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = HSV_Validate_m2F94DC90607C2E7D322CA997C754ECEACB911D1C(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Doozy.Runtime.Colors.Models.HSV::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// Mathf.Max(min, Mathf.Min(max, value));
		float L_0 = ___min1;
		float L_1 = ___max2;
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	float _returnValue;
	_returnValue = HSV_ValidateColor_m963E440AF2D2324D93836C34A5C1E91F59AD2CC8(_thisAdjusted, ___value0, ___min1, ___max2, method);
	return _returnValue;
}
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.HSV::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new Vector3
		// {
		//     x = FactorizeColor(h, H.MIN, H.MAX, H.F),
		//     y = FactorizeColor(s, S.MIN, S.MAX, S.F),
		//     z = FactorizeColor(v, V.MIN, V.MAX, V.F)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___h_0;
		int32_t L_1;
		L_1 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_0, (0.0f), (1.0f), (360.0f), NULL);
		(&V_0)->___x_2 = ((float)L_1);
		float L_2 = __this->___s_1;
		int32_t L_3;
		L_3 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_2, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___y_3 = ((float)L_3);
		float L_4 = __this->___v_2;
		int32_t L_5;
		L_5 = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(__this, L_4, (0.0f), (1.0f), (100.0f), NULL);
		(&V_0)->___z_4 = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Doozy.Runtime.Colors.Models.HSV::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) 
{
	{
		// (int) Mathf.Max(min * f, Mathf.Min(max * f, Mathf.Round(value * f)));
		float L_0 = ___min1;
		float L_1 = ___f3;
		float L_2 = ___max2;
		float L_3 = ___f3;
		float L_4 = ___value0;
		float L_5 = ___f3;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = HSV_FactorizeColor_m775C2F6787A32E7539E1CBFB41152659469003A5(_thisAdjusted, ___value0, ___min1, ___max2, ___f3, method);
	return _returnValue;
}
// System.String Doozy.Runtime.Colors.Models.HSV::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087 (HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* __this, bool ___factorize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factorize
		//     ? $"hsv({Factorize().x}, {Factorize().y}%, {Factorize().z}%)"
		//     : $"hsv({h}, {s}%, {v}%)";
		bool L_0 = ___factorize0;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___h_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___s_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___v_2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_16 = L_15.___y_3;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = HSV_Factorize_m635CC171538CF1EFAD187589F4513C2A4811E134(__this, NULL);
		float L_20 = L_19.___z_4;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral98027F81442491B914C4F0A083D8B130C0E82A2B, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087_AdjustorThunk (RuntimeObject* __this, bool ___factorize0, const RuntimeMethod* method)
{
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = HSV_ToString_mABA07D8FE9D210F9B9868F08405A9C46089EB087(_thisAdjusted, ___factorize0, method);
	return _returnValue;
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
// System.Void Doozy.Runtime.Colors.Models.RGB::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		// this.r = r;
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		// this.g = g;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		// this.b = b;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0_AdjustorThunk (RuntimeObject* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0(_thisAdjusted, ___r0, ___g1, ___b2, method);
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.RGB::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		// new RGB(r, g, b);
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2 = __this->___b_2;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_3;
		memset((&L_3), 0, sizeof(L_3));
		RGB__ctor_m9DF56DEFED8E6CF2921E19D4810804962AAFE5D0((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = RGB_Copy_m329C7072A88789A13FBE0FC279A26CBBC563F65E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Color Doozy.Runtime.Colors.Models.RGB::ToColor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___alpha0, const RuntimeMethod* method) 
{
	{
		// new Color(r, g, b, Mathf.Clamp(alpha, 0, 1));
		float L_0 = __this->___r_0;
		float L_1 = __this->___g_1;
		float L_2 = __this->___b_2;
		float L_3 = ___alpha0;
		float L_4;
		L_4 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_3, (0.0f), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6_AdjustorThunk (RuntimeObject* __this, float ___alpha0, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6(_thisAdjusted, ___alpha0, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.HSL Doozy.Runtime.Colors.Models.RGB::ToHSL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		// ColorUtils.RGBtoHSL(this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		HSL_tFC0E043357C640451DED090325DB7789B92F1C85 L_1;
		L_1 = ColorUtils_RGBtoHSL_mA0223308FEFD2AD4B442DF176BF0AD53960104D4(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  HSL_tFC0E043357C640451DED090325DB7789B92F1C85 RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	HSL_tFC0E043357C640451DED090325DB7789B92F1C85 _returnValue;
	_returnValue = RGB_ToHSL_m2379215AA7E0AA912895B0B26F319B0B0AA84B89(_thisAdjusted, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.HSV Doozy.Runtime.Colors.Models.RGB::ToHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		// ColorUtils.RGBtoHSV(this);
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_0 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 L_1;
		L_1 = ColorUtils_RGBtoHSV_m375EBDD8F6EABFDA2F71122F11B1C909EB6B781F(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	HSV_t791407B3770A4CEC2DDFC5053FC4DDFB53DFEDC1 _returnValue;
	_returnValue = RGB_ToHSV_mAF7EA8CB8A0B313D805D55C04221E1A13D0CE416(_thisAdjusted, method);
	return _returnValue;
}
// Doozy.Runtime.Colors.Models.RGB Doozy.Runtime.Colors.Models.RGB::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	{
		// r = ValidateColor(r, R.MIN, R.MAX);
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_0, (0.0f), (1.0f), NULL);
		__this->___r_0 = L_1;
		// g = ValidateColor(g, G.MIN, G.MAX);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_2, (0.0f), (1.0f), NULL);
		__this->___g_1 = L_3;
		// b = ValidateColor(b, B.MIN, B.MAX);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(__this, L_4, (0.0f), (1.0f), NULL);
		__this->___b_2 = L_5;
		// return this;
		RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 L_6 = (*(RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*)__this);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303 _returnValue;
	_returnValue = RGB_Validate_m56EFE035BD98595B411143C321CCD277879600B1(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Doozy.Runtime.Colors.Models.RGB::ValidateColor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// Mathf.Max(min, Mathf.Min(max, value));
		float L_0 = ___min1;
		float L_1 = ___max2;
		float L_2 = ___value0;
		float L_3;
		L_3 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  float RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	float _returnValue;
	_returnValue = RGB_ValidateColor_m40373F3205F0D67261425D11804C7AD0FE7D709E(_thisAdjusted, ___value0, ___min1, ___max2, method);
	return _returnValue;
}
// UnityEngine.Vector3 Doozy.Runtime.Colors.Models.RGB::Factorize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// new Vector3
		// {
		//     x = FactorizeColor(r, R.MIN, R.MAX, R.F),
		//     y = FactorizeColor(g, G.MIN, G.MAX, G.F),
		//     z = FactorizeColor(b, B.MIN, B.MAX, B.F)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = __this->___r_0;
		int32_t L_1;
		L_1 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_0, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___x_2 = ((float)L_1);
		float L_2 = __this->___g_1;
		int32_t L_3;
		L_3 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_2, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___y_3 = ((float)L_3);
		float L_4 = __this->___b_2;
		int32_t L_5;
		L_5 = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(__this, L_4, (0.0f), (1.0f), (255.0f), NULL);
		(&V_0)->___z_4 = ((float)L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Doozy.Runtime.Colors.Models.RGB::FactorizeColor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method) 
{
	{
		// (int)Mathf.Max(min * f, Mathf.Min(max * f, Mathf.Round(value * f)));
		float L_0 = ___min1;
		float L_1 = ___f3;
		float L_2 = ___max2;
		float L_3 = ___f3;
		float L_4 = ___value0;
		float L_5 = ___f3;
		float L_6;
		L_6 = bankers_roundf(((float)il2cpp_codegen_multiply(L_4, L_5)));
		float L_7;
		L_7 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline(((float)il2cpp_codegen_multiply(L_2, L_3)), L_6, NULL);
		float L_8;
		L_8 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_7, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}
}
IL2CPP_EXTERN_C  int32_t RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49_AdjustorThunk (RuntimeObject* __this, float ___value0, float ___min1, float ___max2, float ___f3, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RGB_FactorizeColor_m1551BE5E86A4815FD176BD1A01F87B7442DF7E49(_thisAdjusted, ___value0, ___min1, ___max2, ___f3, method);
	return _returnValue;
}
// System.String Doozy.Runtime.Colors.Models.RGB::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___factorize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// factorize
		//     ? $"rgb({Factorize().x}, {Factorize().y}, {Factorize().z})"
		//     : $"rgb({r}, {g}, {b})";
		bool L_0 = ___factorize0;
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		float L_1 = __this->___r_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->___g_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		float L_7 = __this->___b_2;
		float L_8 = L_7;
		RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E, L_3, L_6, L_9, NULL);
		return L_10;
	}

IL_002f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = L_12;
		RuntimeObject* L_14 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_16 = L_15.___y_3;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = RGB_Factorize_mAE1DE793FB4D17ADD6E31334B6B79762CEBAD075(__this, NULL);
		float L_20 = L_19.___z_4;
		float L_21 = L_20;
		RuntimeObject* L_22 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral0292E446EE91142ECA40D84274D17861CE8D706E, L_14, L_18, L_22, NULL);
		return L_23;
	}
}
IL2CPP_EXTERN_C  String_t* RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E_AdjustorThunk (RuntimeObject* __this, bool ___factorize0, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RGB_ToString_m01F1CEDF3F67D9F48DBB0D6AD2B37FB2BC15341E(_thisAdjusted, ___factorize0, method);
	return _returnValue;
}
// System.String Doozy.Runtime.Colors.Models.RGB::ToHEX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1 (RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* __this, bool ___addHashTag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// (addHashTag ? "#" : "") + ColorUtility.ToHtmlStringRGB(ToColor(1));
		bool L_0 = ___addHashTag0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_000f;
	}

IL_000a:
	{
		G_B3_0 = _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
	}

IL_000f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = RGB_ToColor_m91BD0BD2D9645207FD88F6788F25167A210D45F6(__this, (1.0f), NULL);
		String_t* L_2;
		L_2 = ColorUtility_ToHtmlStringRGB_m0BF395744067B28A8C48609D4BA97F8920CBB346(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1_AdjustorThunk (RuntimeObject* __this, bool ___addHashTag0, const RuntimeMethod* method)
{
	RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RGB_tACCC9559B8C456B2471D21C64E59CDECEA917303*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RGB_ToHEX_m45E928DC752D61F5D5EB51CB098152AB6C09D1E1(_thisAdjusted, ___addHashTag0, method);
	return _returnValue;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		int32_t L_1 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mDFA261F10D391C520F1E8B27A02F8EC44DEDA9F4_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_mE871C295DE57B4B797A84E7636E0ACCCAA7F6D5C_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___values0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___values0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___values0;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) < ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___values0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SelectableColor_get_isDarkTheme_m17B31F79AE5E7105BF8922182AB236E9E25D9126_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// get => m_IsDarkTheme;
		bool L_0 = __this->___m_IsDarkTheme_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SelectableColor_get_currentState_m75636D7702E1A9CC6301A1BC5B3031CC1CA6814D_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CcurrentStateU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SelectableColor_set_currentState_m77140C00AE632FA42D5FE8545A6217A00877D01A_inline (SelectableColor_tCCEB76F0A8CAD4609F09712C99ADE005503E9352* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___value0;
		__this->___U3CcurrentStateU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
