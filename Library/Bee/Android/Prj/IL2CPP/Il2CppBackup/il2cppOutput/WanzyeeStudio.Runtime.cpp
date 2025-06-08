#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016;
// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>
struct Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
struct Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_tF9905F052EF12704501D5B272E965D9B1311A014;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>
struct Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844;
// System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly>
struct IEnumerable_1_t11F08D46A18E820E6CD80DE57F40444AD29E6689;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.JsonConverter>
struct IEnumerable_1_t62BE791C78973DE7E50F66A9160B62CA8DD1FCC5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Linq.IOrderedEnumerable`1<System.Type>
struct IOrderedEnumerable_1_tC720FA06F1A450C4355F836CB7F7A6E72A5BD8B6;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t58901670B7FA44803364AA3059A3F981A991011A;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6;
// WanzyeeStudio.Json.PartialConverter`1<System.Object>
struct PartialConverter_1_t7C4FAF3EC97D5A005291564255B028FB9954AA0E;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>
struct PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0;
// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// WanzyeeStudio.Json.BoundsConverter
struct BoundsConverter_t8650A73E5A29B087653B170514F8B4E3017592D9;
// WanzyeeStudio.Json.ColorConverter
struct ColorConverter_tEBA5FBCAEE2D8117B0E4714D73404E4563E6C3E6;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// WanzyeeStudio.Json.DictionaryConverter
struct DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// WanzyeeStudio.Json.Matrix4x4Converter
struct Matrix4x4Converter_tA7CE0011BCF10DB30E6D34024070EAFAC75CB660;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// WanzyeeStudio.Json.QuaternionConverter
struct QuaternionConverter_t4AC7A2497B54B5A3F284F432ADCC0A241F70ADE9;
// WanzyeeStudio.Json.RectConverter
struct RectConverter_t31FA8B77E77470F7F91580487DF41FD85AD16653;
// WanzyeeStudio.Json.RectOffsetConverter
struct RectOffsetConverter_t3CC688C0F82A3D96F43DBD6C66E7EF1BA37CEC14;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.String
struct String_t;
// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// WanzyeeStudio.Json.Vector2Converter
struct Vector2Converter_t51323FFC66E9B33CD2E93244339E40ADF1CF6C2D;
// WanzyeeStudio.Json.Vector3Converter
struct Vector3Converter_tE776220EDA287A2CAE715B8C94824EF38E2929DB;
// WanzyeeStudio.Json.Vector4Converter
struct Vector4Converter_tE87465E5D89F3CC8CFBC03AF64CE8ECF318F5FD1;
// Newtonsoft.Json.Converters.VersionConverter
struct VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WanzyeeStudio.Json.JsonNetUtility/<>c
struct U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625;
// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE;
// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32;

IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E50F2B5959EA8333729D48896BBD7054EF0408;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral46A3E4CF4159352EA245C4FF7641E52B161DCFF3;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE0048E8AE6615C77DAF1F821ED1047BE66CD89;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral99384866927DAD4E202E9EBBBB04233FC161C3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCAD78B4B9E2CCB93612604A7D3D741361E2BB6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Concat_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m7A07604504CE39C3571ACDF5364A7CF544D0087A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisType_t_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD884B69525386CF35EF28136A6715815CF45B047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisString_t_TisString_t_m6632E57E00D785EC600C506EEE3E81232E1E97E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m3B9CE99A8BCAE6B638E56F2E2811EC012642C910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m9B77D02DC1875DEB05C11783691C0E80E91C7CC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m42B2285DEAD3BDAB4C97CC76FE38D9F3D65B5D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m7457F66BDD5A435CD900F556D87C49CBC09F304E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m4E2B5C9372AF285C94727A49FE73B802ADC8BF95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m75ACFCDB703FD54EE9986F1D6BA5801B8BA0F1F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mC02DC08939B7C14FEBD6D316882FB5853480989B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_mC95610AA4B97474D7F8888FED0D961116887974D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_m6CA9B31E7886BE70ACD702B5CC1DF049AD9CB14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m3E70EB479674FD8E9B25713D2630EF539DA8A019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_m77DD5CF5EDB0C3DF5D985EC1B5B203AD72D00ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m1B8DCB644CFFE8641DEBB5BD34F7B40DD3AB2127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeU3Eb__1_0_m9379ADAA91BC7D056980CADF7F0552CA86706C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m4AB3B069C2675475BA35218F3305623FF04C0555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_m97079F3E46933DF76D3853BA8DF660D7867F83DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t4F866F723F9E0A522C362494DC799D065D96C726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9777AEEEDD09D2910708FCEB2B5D72AE37C994AB 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

// Newtonsoft.Json.JsonConvert
struct JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2  : public RuntimeObject
{
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// WanzyeeStudio.Json.JsonNetUtility
struct JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// WanzyeeStudio.Json.JsonNetUtility/<>c
struct U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625  : public RuntimeObject
{
};

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE  : public RuntimeObject
{
	// System.String[] WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0::_indexes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____indexes_0;
};

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1
struct U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32  : public RuntimeObject
{
	// System.String WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1::row
	String_t* ___row_0;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>
struct PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// WanzyeeStudio.Json.DictionaryConverter
struct DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<CamelCaseText>k__BackingField
	bool ___U3CCamelCaseTextU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<AllowIntegerValues>k__BackingField
	bool ___U3CAllowIntegerValuesU3Ek__BackingField_1;
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

// Newtonsoft.Json.Converters.VersionConverter
struct VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
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

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// WanzyeeStudio.Json.BoundsConverter
struct BoundsConverter_t8650A73E5A29B087653B170514F8B4E3017592D9  : public PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010
{
};

// WanzyeeStudio.Json.ColorConverter
struct ColorConverter_tEBA5FBCAEE2D8117B0E4714D73404E4563E6C3E6  : public PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38
{
};

// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_tBAFC8D79770520A5FE179D99B00E863ECFD41FBC 
{
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t572F7AE07F2480341B7A6A66E2B76630B513F797 
{
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t9C3D12600E1C83D014F016D8B1F88411FF41263C 
{
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_tC6052391FA7B95E92AFFABA381532EEFA193FB9F 
{
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t996735A0C7CC889B941C53B522E62A988B47402A 
{
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t6D69CDEC3FBD6B43B168CFE1033506CE3F50EE8C 
{
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_tB923F780A6087CF142D4D00486E840D870ECDA5D 
{
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;
};

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_t4CCE312D5A245F25EB81559ED52F386ECA54F110 
{
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Formatting
struct Formatting_t38B3D1A17CE6825AA2C906374AD2434FD10ED7EC 
{
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t58901670B7FA44803364AA3059A3F981A991011A* ____values_16;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_17;
};

// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_t4F8244AEE40CAB63CA2C1E281038F4E2B3E3887E 
{
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.JsonToken
struct JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5 
{
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;
};

// WanzyeeStudio.Json.Matrix4x4Converter
struct Matrix4x4Converter_tA7CE0011BCF10DB30E6D34024070EAFAC75CB660  : public PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6
{
};

// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tA3EC6C7A5429A693E0370D712C7850854F60B6B2 
{
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tD1037A7561C66E2015BA288AF16A9F2DC9307FA5 
{
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t4BDE6EFA837EAE85524EDF0FE21D0B9668F4FD6A 
{
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tA895C8A4A1D7444BBEDD0E29D7490C625BF93131 
{
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t435BCAA15E433D8D2F5DB0D05A41E7E564671737 
{
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;
};

// WanzyeeStudio.Json.QuaternionConverter
struct QuaternionConverter_t4AC7A2497B54B5A3F284F432ADCC0A241F70ADE9  : public PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97
{
};

// WanzyeeStudio.Json.RectConverter
struct RectConverter_t31FA8B77E77470F7F91580487DF41FD85AD16653  : public PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041
{
};

// WanzyeeStudio.Json.RectOffsetConverter
struct RectOffsetConverter_t3CC688C0F82A3D96F43DBD6C66E7EF1BA37CEC14  : public PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D
{
};

// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t7D243173DF188E0478CF37E7C940CDDCAC1E0D20 
{
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t6C5E715C7EA7676CB7369DBE8EB487724B07F354 
{
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t4D77402771E5E38DE1AE390B60542985276D9D69 
{
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;
};

// WanzyeeStudio.Json.Vector2Converter
struct Vector2Converter_t51323FFC66E9B33CD2E93244339E40ADF1CF6C2D  : public PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40
{
};

// WanzyeeStudio.Json.Vector3Converter
struct Vector3Converter_tE776220EDA287A2CAE715B8C94824EF38E2929DB  : public PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0
{
};

// WanzyeeStudio.Json.Vector4Converter
struct Vector4Converter_tE87465E5D89F3CC8CFBC03AF64CE8ECF318F5FD1  : public PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468
{
};

// Newtonsoft.Json.JsonReader/State
struct State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4 
{
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.JsonWriter/State
struct State_tAE23C0C2937491FB5A76EBB46CC416A10DB1667D 
{
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
struct Nullable_1_t1C3F89420BA276AC864AB125B6036E7955B6E4F7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tDB9851E133717B16EF4D1F0B933444974B766016  : public MulticastDelegate_t
{
};

// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>
struct Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>
struct Func_2_tF9905F052EF12704501D5B272E965D9B1311A014  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>
struct Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844  : public MulticastDelegate_t
{
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_12;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormat
	Nullable_1_t1C3F89420BA276AC864AB125B6036E7955B6E4F7 ____typeNameAssemblyFormat_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializerSettings::<Binder>k__BackingField
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___U3CBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>

// System.Reflection.Assembly

// System.Reflection.Assembly

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// Newtonsoft.Json.Linq.JToken

// Newtonsoft.Json.JsonConvert
struct JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields
{
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::<DefaultSettings>k__BackingField
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___U3CDefaultSettingsU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.JsonConvert::True
	String_t* ___True_1;
	// System.String Newtonsoft.Json.JsonConvert::False
	String_t* ___False_2;
	// System.String Newtonsoft.Json.JsonConvert::Null
	String_t* ___Null_3;
	// System.String Newtonsoft.Json.JsonConvert::Undefined
	String_t* ___Undefined_4;
	// System.String Newtonsoft.Json.JsonConvert::PositiveInfinity
	String_t* ___PositiveInfinity_5;
	// System.String Newtonsoft.Json.JsonConvert::NegativeInfinity
	String_t* ___NegativeInfinity_6;
	// System.String Newtonsoft.Json.JsonConvert::NaN
	String_t* ___NaN_7;
};

// Newtonsoft.Json.JsonConvert

// Newtonsoft.Json.JsonConverter

// Newtonsoft.Json.JsonConverter

// WanzyeeStudio.Json.JsonNetUtility
struct JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_StaticFields
{
	// Newtonsoft.Json.JsonSerializerSettings WanzyeeStudio.Json.JsonNetUtility::defaultSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___defaultSettings_0;
};

// WanzyeeStudio.Json.JsonNetUtility

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WanzyeeStudio.Json.JsonNetUtility/<>c
struct U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields
{
	// WanzyeeStudio.Json.JsonNetUtility/<>c WanzyeeStudio.Json.JsonNetUtility/<>c::<>9
	U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* ___U3CU3E9_0;
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__1_0
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___U3CU3E9__1_0_1;
	// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__2_0
	Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* ___U3CU3E9__2_0_2;
	// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__2_1
	Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* ___U3CU3E9__2_1_3;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_0
	Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* ___U3CU3E9__4_0_4;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_1
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__4_1_5;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_2
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__4_2_6;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_3
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__4_3_7;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_4
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__4_4_8;
	// System.Func`2<System.Type,System.Boolean> WanzyeeStudio.Json.JsonNetUtility/<>c::<>9__4_5
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__4_5_9;
};

// WanzyeeStudio.Json.JsonNetUtility/<>c

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1

// WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>
struct PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>
struct PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>
struct PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>
struct PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>
struct PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>
struct PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>
struct PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>
struct PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>
struct PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> WanzyeeStudio.Json.PartialConverter`1::_properties
	Dictionary_2_t54242F75D8069638C3D67A4D2BB618F7599C1644* ____properties_0;
};

// WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// WanzyeeStudio.Json.DictionaryConverter

// WanzyeeStudio.Json.DictionaryConverter

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Newtonsoft.Json.Converters.StringEnumConverter

// Newtonsoft.Json.Converters.StringEnumConverter

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

// Newtonsoft.Json.Converters.VersionConverter

// Newtonsoft.Json.Converters.VersionConverter

// System.Void

// System.Void

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// UnityEngine.Bounds

// UnityEngine.Bounds

// WanzyeeStudio.Json.BoundsConverter

// WanzyeeStudio.Json.BoundsConverter

// WanzyeeStudio.Json.ColorConverter

// WanzyeeStudio.Json.ColorConverter

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Newtonsoft.Json.Formatting

// Newtonsoft.Json.Formatting

// Newtonsoft.Json.Linq.JArray

// Newtonsoft.Json.Linq.JArray

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.JsonToken

// Newtonsoft.Json.JsonToken

// WanzyeeStudio.Json.Matrix4x4Converter

// WanzyeeStudio.Json.Matrix4x4Converter

// WanzyeeStudio.Json.QuaternionConverter

// WanzyeeStudio.Json.QuaternionConverter

// WanzyeeStudio.Json.RectConverter

// WanzyeeStudio.Json.RectConverter

// WanzyeeStudio.Json.RectOffsetConverter

// WanzyeeStudio.Json.RectOffsetConverter

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// WanzyeeStudio.Json.Vector2Converter

// WanzyeeStudio.Json.Vector2Converter

// WanzyeeStudio.Json.Vector3Converter

// WanzyeeStudio.Json.Vector3Converter

// WanzyeeStudio.Json.Vector4Converter

// WanzyeeStudio.Json.Vector4Converter

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

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>

// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>

// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>

// System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>

// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>

// System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>

// System.Func`2<System.String,System.String>

// System.Func`2<System.String,System.String>

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>

// System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTempate_1;
};

// Newtonsoft.Json.JsonWriter

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_10;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_19;
};

// Newtonsoft.Json.JsonSerializerSettings
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* m_Items[1];

	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5_gshared (PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC_gshared (PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared (RuntimeObject* ___0_source, Func_2_t9F45EF9F857977243C345F24571962D2521DB4A1* ___1_selector, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Boolean>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1B09AD2E4A007457A93A907E58334FD629FAC0AB_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_keySelector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4_gshared (PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E_gshared (PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2_gshared (PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m058F5E4B8A42F597BF9803D49E32E851A7A8C52A_gshared (PartialConverter_1_t7C4FAF3EC97D5A005291564255B028FB9954AA0E* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2_gshared (PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6_gshared (PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0* __this, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F_gshared (PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Bounds>::.ctor()
inline void PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5 (PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t985B799D4EE6D233E896C582C3F91F887ACE5010*, const RuntimeMethod*))PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Color>::.ctor()
inline void PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC (PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t503BE8BE15F98E4C73652A9EFE3AD1591B2B7D38*, const RuntimeMethod*))PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF (Type_t* ___0_type, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JArray_GetEnumerator_m3A0A8116C13003EA3883AB9D5F2A9E8069192A4F (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___0_propertyName, const RuntimeMethod* method) ;
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JToken_ToObject_m4D96B7C479825194EC4FEFF0EFBCD306B78BAB5A (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, Type_t* ___0_objectType, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___1_jsonSerializer, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String Newtonsoft.Json.Linq.JToken::ToString(Newtonsoft.Json.Formatting,Newtonsoft.Json.JsonConverter[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JToken_ToString_mF787D2075E09E9D7156C38286D1770E13F27A8DD (JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* __this, int32_t ___0_formatting, JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___1_converters, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_gshared)(___0_source, method);
}
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_mE7F0CF9C2D3AD9D1B19A24F16FB151C9F63E7A2F (JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_jsonWriter, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline (const RuntimeMethod* method) ;
// System.Void System.Func`1<Newtonsoft.Json.JsonSerializerSettings>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCA643E39063F9A7008EEF900CA5C8A9BBFF7F799 (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Newtonsoft.Json.JsonConvert::set_DefaultSettings(System.Func`1<Newtonsoft.Json.JsonSerializerSettings>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___0_value, const RuntimeMethod* method) ;
// System.Type[] WanzyeeStudio.Json.JsonNetUtility::FindConverterTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* JsonNetUtility_FindConverterTypes_mAA80FB671BBA270D542107BE068005DFD1EF0E82 (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,Newtonsoft.Json.JsonConverter>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD97B976F200DE87D9D3910071AC6C4A0671AB34F (Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m3B9CE99A8BCAE6B638E56F2E2811EC012642C910 (RuntimeObject* ___0_source, Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter__ctor_m36B6009E735666675AEB30CD83B385291E98CC73 (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.VersionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionConverter__ctor_m847EFC9A24C80B75A2A30334525A3859C6A5B3C8 (VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Concat<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Concat_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m7A07604504CE39C3571ACDF5364A7CF544D0087A (RuntimeObject* ___0_first, RuntimeObject* ___1_second, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Concat_TisRuntimeObject_m84DD8C4D7381636C5F798202183E95C359606D33_gshared)(___0_first, ___1_second, method);
}
// System.Void System.Func`2<Newtonsoft.Json.JsonConverter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m986C7B7B7070CA012608C94FB5B268254CD685DB (Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m42B2285DEAD3BDAB4C97CC76FE38D9F3D65B5D46 (RuntimeObject* ___0_source, Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Newtonsoft.Json.JsonConverter>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* Enumerable_ToList_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m9B77D02DC1875DEB05C11783691C0E80E91C7CC2 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Reflection.Assembly,System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4 (RuntimeObject* ___0_source, Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___0_source, ___1_selector, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8 (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Type,System.Boolean>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisType_t_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD884B69525386CF35EF28136A6715815CF45B047 (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_keySelector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1B09AD2E4A007457A93A907E58334FD629FAC0AB_gshared)(___0_source, ___1_keySelector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter> WanzyeeStudio.Json.JsonNetUtility::CreateConverters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* JsonNetUtility_CreateConverters_mD2120294DBAEDB2704DFA90CBEE69240FE5D0E07 (const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Converters(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.JsonNetUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7B313988F3FFFBEB513FDB980C0F0D2D258B70E (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonConverter WanzyeeStudio.Json.JsonNetUtility::CreateConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* JsonNetUtility_CreateConverter_m03F83B16807F0557CF0ECAF9144E4E56EFF4677D (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554 (Type_t* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_types, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___0_left, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m4A3021197903AE67DA74899DD0F700D891A34DD4 (U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Collections.Generic.IEnumerable`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4A9B7DC847F99DB2FD0BA764145147086C2247A4 (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisString_t_TisString_t_m6632E57E00D785EC600C506EEE3E81232E1E97E4 (RuntimeObject* ___0_source, Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisRuntimeObject_mC89216034DEE8779F1AC2D0A984C0ADE855BED00_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Matrix4x4>::.ctor()
inline void PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4 (PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tFF4D2FE13B5AA96EE2703347FCFE7C6D5C6D8CD6*, const RuntimeMethod*))PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mD8C3BF28FC1D9EC1B6FDE13BFF820E42CB02C396 (U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6 (RuntimeObject* ___0_source, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Quaternion>::.ctor()
inline void PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E (PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tD30E230F2D2C49831CF8ABB747B2619174728F97*, const RuntimeMethod*))PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Rect>::.ctor()
inline void PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2 (PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tD780560BE2BC3C0A98BDBB471C834909DE4A1041*, const RuntimeMethod*))PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.RectOffset>::.ctor()
inline void PartialConverter_1__ctor_m7457F66BDD5A435CD900F556D87C49CBC09F304E (PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t8BEAB51A83410F38EA1FFF04BDF8BB006877525D*, const RuntimeMethod*))PartialConverter_1__ctor_m058F5E4B8A42F597BF9803D49E32E851A7A8C52A_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector2>::.ctor()
inline void PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2 (PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_t4CB30BAC23F3405FD647A849C8B2E1645E3F5F40*, const RuntimeMethod*))PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector3>::.ctor()
inline void PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6 (PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tE94E3D4837CE10D2B44D4931751BDE85027397B0*, const RuntimeMethod*))PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6_gshared)(__this, method);
}
// System.Void WanzyeeStudio.Json.PartialConverter`1<UnityEngine.Vector4>::.ctor()
inline void PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F (PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468* __this, const RuntimeMethod* method)
{
	((  void (*) (PartialConverter_1_tFDBAFBF16AC5C011559126F90124766C3B4DD468*, const RuntimeMethod*))PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F_gshared)(__this, method);
}
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
// System.Void WanzyeeStudio.Json.BoundsConverter::PreserveProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsConverter_PreserveProperties_m095D610BEAFC6C4D044C283435AAD4F46F0CAB5E (BoundsConverter_t8650A73E5A29B087653B170514F8B4E3017592D9* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var _dummy = new Bounds();
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// _dummy.center = _dummy.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B((&V_0), L_0, NULL);
		// _dummy.extents = _dummy.extents;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F((&V_0), L_1, NULL);
		// }
		return;
	}
}
// System.String[] WanzyeeStudio.Json.BoundsConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* BoundsConverter_GetPropertyNames_m3D4EC49E6971913BF23BDC8D47EBF33467FC39D4 (BoundsConverter_t8650A73E5A29B087653B170514F8B4E3017592D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46A3E4CF4159352EA245C4FF7641E52B161DCFF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"center", "extents"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF26F502B14F503952C33ADFF928357DED0388E8D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral46A3E4CF4159352EA245C4FF7641E52B161DCFF3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral46A3E4CF4159352EA245C4FF7641E52B161DCFF3);
		return L_2;
	}
}
// System.Void WanzyeeStudio.Json.BoundsConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsConverter__ctor_m46B61116EF64AD7E189C2CBC9701E5D5D79779BE (BoundsConverter_t8650A73E5A29B087653B170514F8B4E3017592D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5(__this, PartialConverter_1__ctor_m64F8ABD6ECCD3BBF12B5955054D11612C9A3BEB5_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.ColorConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ColorConverter_GetPropertyNames_m0F54788E496B3B157DA849A1551C8329B1896DB9 (ColorConverter_tEBA5FBCAEE2D8117B0E4714D73404E4563E6C3E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"r", "g", "b", "a"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA33A5CAE02B786C2060461DF8C6764B4C05E9423);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.ColorConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorConverter__ctor_m1FEE4A258BD3E3546F8D341B94FD71B504B7291F (ColorConverter_tEBA5FBCAEE2D8117B0E4714D73404E4563E6C3E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC(__this, PartialConverter_1__ctor_mF7DB44C86F517CB3A805B556B93B8659A09456CC_RuntimeMethod_var);
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
// System.Boolean WanzyeeStudio.Json.DictionaryConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DictionaryConverter_CanConvert_m025A4D83136D14C84977584AF88EADFD82C910D3 (DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4F866F723F9E0A522C362494DC799D065D96C726_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		// if(!objectType.IsGenericType) return false;
		Type_t* L_0 = ___0_objectType;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(42 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if(!objectType.IsGenericType) return false;
		return (bool)0;
	}

IL_000a:
	{
		// var _type = objectType.GetGenericTypeDefinition();
		Type_t* L_2 = ___0_objectType;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(50 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		// return typeof(Dictionary<,>) == _type || typeof(IDictionary<,>) == _type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		Type_t* L_6 = V_0;
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IDictionary_2_t4F866F723F9E0A522C362494DC799D065D96C726_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Type_t* L_10 = V_0;
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_10, NULL);
		return L_11;
	}

IL_0034:
	{
		return (bool)1;
	}
}
// System.Object WanzyeeStudio.Json.DictionaryConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryConverter_ReadJson_m97A8E1B1AF1EC938669A03C75A624C728FE87B5A (DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCAD78B4B9E2CCB93612604A7D3D741361E2BB6);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___0_reader;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((!(((uint32_t)((int32_t)11)) == ((uint32_t)L_1))))
		{
			goto IL_000c;
		}
	}
	{
		// if(JsonToken.Null == reader.TokenType) return null;
		return NULL;
	}

IL_000c:
	{
		// var _result = Activator.CreateInstance(objectType) as IDictionary;
		Type_t* L_2 = ___1_objectType;
		RuntimeObject* L_3;
		L_3 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_2, NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		// var _args = objectType.GetGenericArguments();
		Type_t* L_4 = ___1_objectType;
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(52 /* System.Type[] System.Type::GetGenericArguments() */, L_4);
		V_1 = L_5;
		// foreach(JObject _pair in JArray.Load(reader)){
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_6 = ___0_reader;
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_7;
		L_7 = JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807(L_6, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = JArray_GetEnumerator_m3A0A8116C13003EA3883AB9D5F2A9E8069192A4F(L_7, NULL);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a6:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00af;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009c_1;
			}

IL_002d_1:
			{
				// foreach(JObject _pair in JArray.Load(reader)){
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
				L_12 = InterfaceFuncInvoker0< JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t0632E50BDC15D0ABBB866944CAA2D6DB854B9641_il2cpp_TypeInfo_var, L_11);
				V_3 = ((JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)CastclassClass((RuntimeObject*)L_12, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var));
				// var _key = _pair["Key"].ToObject(_args[0], serializer);
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_13 = V_3;
				NullCheck(L_13);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_14;
				L_14 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_13, _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07, NULL);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = V_1;
				NullCheck(L_15);
				int32_t L_16 = 0;
				Type_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
				JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_18 = ___3_serializer;
				NullCheck(L_14);
				RuntimeObject* L_19;
				L_19 = JToken_ToObject_m4D96B7C479825194EC4FEFF0EFBCD306B78BAB5A(L_14, L_17, L_18, NULL);
				V_4 = L_19;
				// var _value = _pair["Value"].ToObject(_args[1], serializer);
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_20 = V_3;
				NullCheck(L_20);
				JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_21;
				L_21 = JObject_get_Item_m889A29E8FCEA531AF829407F208DD05F0108C50B(L_20, _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3, NULL);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = V_1;
				NullCheck(L_22);
				int32_t L_23 = 1;
				Type_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_25 = ___3_serializer;
				NullCheck(L_21);
				RuntimeObject* L_26;
				L_26 = JToken_ToObject_m4D96B7C479825194EC4FEFF0EFBCD306B78BAB5A(L_21, L_24, L_25, NULL);
				V_5 = L_26;
				// if(!_result.Contains(_key)) _result.Add(_key, _value);
				RuntimeObject* L_27 = V_0;
				RuntimeObject* L_28 = V_4;
				NullCheck(L_27);
				bool L_29;
				L_29 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_27, L_28);
				if (L_29)
				{
					goto IL_007d_1;
				}
			}
			{
				// if(!_result.Contains(_key)) _result.Add(_key, _value);
				RuntimeObject* L_30 = V_0;
				RuntimeObject* L_31 = V_4;
				RuntimeObject* L_32 = V_5;
				NullCheck(L_30);
				InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_30, L_31, L_32);
				goto IL_009c_1;
			}

IL_007d_1:
			{
				// else Debug.LogWarningFormat("Ignore pair with repeat key: {0}", _pair.ToString(Formatting.None));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_35 = V_3;
				JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_36;
				L_36 = Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_inline(Array_Empty_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_mFA4697517835E4E1FFADA62370BB78401E0C99F0_RuntimeMethod_var);
				NullCheck(L_35);
				String_t* L_37;
				L_37 = JToken_ToString_mF787D2075E09E9D7156C38286D1770E13F27A8DD(L_35, 0, L_36, NULL);
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_37);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_37);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralFCCAD78B4B9E2CCB93612604A7D3D741361E2BB6, L_34, NULL);
			}

IL_009c_1:
			{
				// foreach(JObject _pair in JArray.Load(reader)){
				RuntimeObject* L_38 = V_2;
				NullCheck(L_38);
				bool L_39;
				L_39 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_38);
				if (L_39)
				{
					goto IL_002d_1;
				}
			}
			{
				goto IL_00b0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		// return _result;
		RuntimeObject* L_40 = V_0;
		return L_40;
	}
}
// System.Void WanzyeeStudio.Json.DictionaryConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryConverter_WriteJson_m0DFE6BB406A4CB1F7D423377EABFD723B9B33AD4 (DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serializer.Serialize(writer, (value as IDictionary).Cast<object>());
		JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* L_0 = ___2_serializer;
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_1 = ___0_writer;
		RuntimeObject* L_2 = ___1_value;
		RuntimeObject* L_3;
		L_3 = Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29(((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), Enumerable_Cast_TisRuntimeObject_m21250FA47CFF08469ACE158D6FA4E1FE11837D29_RuntimeMethod_var);
		NullCheck(L_0);
		JsonSerializer_Serialize_mE7F0CF9C2D3AD9D1B19A24F16FB151C9F63E7A2F(L_0, L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void WanzyeeStudio.Json.DictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryConverter__ctor_m0838D4557E0ACC0BF1388F4A209656C980FBD85C (DictionaryConverter_t710ABC59EB214DAAC5ED30F58CB61084B9C7E8EC* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Void WanzyeeStudio.Json.JsonNetUtility::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNetUtility_Initialize_m6FAE82AE74375B007CD30E7FC8DFF1DB3D86AB66 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeU3Eb__1_0_m9379ADAA91BC7D056980CADF7F0552CA86706C83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* G_B3_0 = NULL;
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* G_B2_0 = NULL;
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0;
		L_0 = JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline(NULL);
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_1 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_3 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_4 = (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)il2cpp_codegen_object_new(Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_mCA643E39063F9A7008EEF900CA5C8A9BBFF7F799(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitializeU3Eb__1_0_m9379ADAA91BC7D056980CADF7F0552CA86706C83_RuntimeMethod_var), NULL);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_5 = L_4;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_5);
		G_B3_0 = L_5;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline(G_B3_0, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter> WanzyeeStudio.Json.JsonNetUtility::CreateConverters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* JsonNetUtility_CreateConverters_mD2120294DBAEDB2704DFA90CBEE69240FE5D0E07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Concat_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m7A07604504CE39C3571ACDF5364A7CF544D0087A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m3B9CE99A8BCAE6B638E56F2E2811EC012642C910_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m9B77D02DC1875DEB05C11783691C0E80E91C7CC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m42B2285DEAD3BDAB4C97CC76FE38D9F3D65B5D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m4E2B5C9372AF285C94727A49FE73B802ADC8BF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m75ACFCDB703FD54EE9986F1D6BA5801B8BA0F1F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* V_1 = NULL;
	Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* G_B2_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B2_1 = NULL;
	Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* G_B1_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* G_B1_1 = NULL;
	Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		// var _customs = FindConverterTypes().Select((type) => CreateConverter(type));
		il2cpp_codegen_runtime_class_init_inline(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0;
		L_0 = JsonNetUtility_FindConverterTypes_mAA80FB671BBA270D542107BE068005DFD1EF0E82(NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* L_1 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2;
		Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_3 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* L_4 = (Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844*)il2cpp_codegen_object_new(Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mD97B976F200DE87D9D3910071AC6C4A0671AB34F(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m4E2B5C9372AF285C94727A49FE73B802ADC8BF95_RuntimeMethod_var), NULL);
		Func_2_t11B8B34C731CEA3FEDF4A51DA97880D4E2955844* L_5 = L_4;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisType_t_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m3B9CE99A8BCAE6B638E56F2E2811EC012642C910((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisType_t_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m3B9CE99A8BCAE6B638E56F2E2811EC012642C910_RuntimeMethod_var);
		V_0 = L_6;
		// var _builtins = new JsonConverter[]{new StringEnumConverter(), new VersionConverter()};
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_7 = (JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E*)(JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E*)SZArrayNew(JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E_il2cpp_TypeInfo_var, (uint32_t)2);
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_8 = L_7;
		StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184* L_9 = (StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184*)il2cpp_codegen_object_new(StringEnumConverter_t7C66875DF7AB0719190AEEF8924A99F49C480184_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		StringEnumConverter__ctor_m36B6009E735666675AEB30CD83B385291E98CC73(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*)L_9);
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_10 = L_8;
		VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5* L_11 = (VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5*)il2cpp_codegen_object_new(VersionConverter_tD05642E722EDAABE162CA1FFF42A4293B0813FB5_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		VersionConverter__ctor_m847EFC9A24C80B75A2A30334525A3859C6A5B3C8(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*)L_11);
		V_1 = L_10;
		// return _customs.Concat(_builtins).Where((converter) => null != converter).ToList();
		RuntimeObject* L_12 = V_0;
		JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* L_13 = V_1;
		RuntimeObject* L_14;
		L_14 = Enumerable_Concat_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m7A07604504CE39C3571ACDF5364A7CF544D0087A(L_12, (RuntimeObject*)L_13, Enumerable_Concat_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m7A07604504CE39C3571ACDF5364A7CF544D0087A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* L_15 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3;
		Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* L_16 = L_15;
		G_B3_0 = L_16;
		G_B3_1 = L_14;
		if (L_16)
		{
			G_B4_0 = L_16;
			G_B4_1 = L_14;
			goto IL_0067;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_17 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* L_18 = (Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF*)il2cpp_codegen_object_new(Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_m986C7B7B7070CA012608C94FB5B268254CD685DB(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m75ACFCDB703FD54EE9986F1D6BA5801B8BA0F1F4_RuntimeMethod_var), NULL);
		Func_2_tD90BBCFEF8B1CED328A6AAAB3D73D06157A92ABF* L_19 = L_18;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__2_1_3), (void*)L_19);
		G_B4_0 = L_19;
		G_B4_1 = G_B3_1;
	}

IL_0067:
	{
		RuntimeObject* L_20;
		L_20 = Enumerable_Where_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m42B2285DEAD3BDAB4C97CC76FE38D9F3D65B5D46(G_B4_1, G_B4_0, Enumerable_Where_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m42B2285DEAD3BDAB4C97CC76FE38D9F3D65B5D46_RuntimeMethod_var);
		List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* L_21;
		L_21 = Enumerable_ToList_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m9B77D02DC1875DEB05C11783691C0E80E91C7CC2(L_20, Enumerable_ToList_TisJsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_m9B77D02DC1875DEB05C11783691C0E80E91C7CC2_RuntimeMethod_var);
		return L_21;
	}
}
// Newtonsoft.Json.JsonConverter WanzyeeStudio.Json.JsonNetUtility::CreateConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* JsonNetUtility_CreateConverter_m03F83B16807F0557CF0ECAF9144E4E56EFF4677D (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// try{ return Activator.CreateInstance(type) as JsonConverter; }
		Type_t* L_0 = ___0_type;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_mFF030428C64FDDFACC74DFAC97388A1C628BFBCF(L_0, NULL);
		V_0 = ((JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*)IsInstClass((RuntimeObject*)L_1, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_il2cpp_TypeInfo_var));
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Exception)
		Exception_t* L_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		// catch(Exception exception){ Debug.LogErrorFormat("Can't create JsonConverter {0}:\n{1}", type, exception); }
		V_1 = L_2;
		// catch(Exception exception){ Debug.LogErrorFormat("Can't create JsonConverter {0}:\n{1}", type, exception); }
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		Type_t* L_5 = ___0_type;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		Exception_t* L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99384866927DAD4E202E9EBBBB04233FC161C3BC)), L_6, NULL);
		// catch(Exception exception){ Debug.LogErrorFormat("Can't create JsonConverter {0}:\n{1}", type, exception); }
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// return null;
		return (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*)NULL;
	}

IL_002b:
	{
		// }
		JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* L_8 = V_0;
		return L_8;
	}
}
// System.Type[] WanzyeeStudio.Json.JsonNetUtility::FindConverterTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* JsonNetUtility_FindConverterTypes_mAA80FB671BBA270D542107BE068005DFD1EF0E82 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisType_t_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD884B69525386CF35EF28136A6715815CF45B047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mC02DC08939B7C14FEBD6D316882FB5853480989B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_mC95610AA4B97474D7F8888FED0D961116887974D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_m6CA9B31E7886BE70ACD702B5CC1DF049AD9CB14F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m3E70EB479674FD8E9B25713D2630EF539DA8A019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_m77DD5CF5EDB0C3DF5D985EC1B5B203AD72D00ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m1B8DCB644CFFE8641DEBB5BD34F7B40DD3AB2127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* G_B2_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B2_1 = NULL;
	Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* G_B1_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* G_B1_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B10_0 = NULL;
	RuntimeObject* G_B10_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B12_0 = NULL;
	RuntimeObject* G_B12_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B11_0 = NULL;
	RuntimeObject* G_B11_1 = NULL;
	{
		// return AppDomain.CurrentDomain.GetAssemblies(
		// 
		//     ).SelectMany((dll) => dll.GetTypes()
		//     ).Where((type) => typeof(JsonConverter).IsAssignableFrom(type)
		// 
		//     ).Where((type) => (!type.IsAbstract && !type.IsGenericTypeDefinition)
		//     ).Where((type) => null != type.GetConstructor(new Type[0])
		// 
		//     ).Where((type) => !(null != type.Namespace && type.Namespace.StartsWith("Newtonsoft.Json"))
		//     ).OrderBy((type) => null != type.Namespace && type.Namespace.StartsWith("WanzyeeStudio")
		// 
		// ).ToArray();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_2 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_4;
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_4 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_5 = (Func_2_tDB9851E133717B16EF4D1F0B933444974B766016*)il2cpp_codegen_object_new(Func_2_tDB9851E133717B16EF4D1F0B933444974B766016_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mE7E2BD541D8288445CB79C54B1F9805C5D66D5BB(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mC02DC08939B7C14FEBD6D316882FB5853480989B_RuntimeMethod_var), NULL);
		Func_2_tDB9851E133717B16EF4D1F0B933444974B766016* L_6 = L_5;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_4), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0029:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_SelectMany_TisAssembly_t_TisType_t_m1FF8A47655C6E0122E1020678BBCD470923B9CA4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_8 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_5;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_10 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_11 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_mC95610AA4B97474D7F8888FED0D961116887974D_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_12 = L_11;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_1_5), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_004d:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B4_1, G_B4_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_14 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_6;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = L_13;
			goto IL_0071;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_16 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_17 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_m6CA9B31E7886BE70ACD702B5CC1DF049AD9CB14F_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_18 = L_17;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_2_6), (void*)L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
	}

IL_0071:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B6_1, G_B6_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_20 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_3_7;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_21 = L_20;
		G_B7_0 = L_21;
		G_B7_1 = L_19;
		if (L_21)
		{
			G_B8_0 = L_21;
			G_B8_1 = L_19;
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_22 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_23 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_23, L_22, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m3E70EB479674FD8E9B25713D2630EF539DA8A019_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_24 = L_23;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_3_7 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_3_7), (void*)L_24);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
	}

IL_0095:
	{
		RuntimeObject* L_25;
		L_25 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B8_1, G_B8_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_26 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_8;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_27 = L_26;
		G_B9_0 = L_27;
		G_B9_1 = L_25;
		if (L_27)
		{
			G_B10_0 = L_27;
			G_B10_1 = L_25;
			goto IL_00b9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_28 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_29 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_29, L_28, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_m77DD5CF5EDB0C3DF5D985EC1B5B203AD72D00ED4_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_30 = L_29;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_8 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_4_8), (void*)L_30);
		G_B10_0 = L_30;
		G_B10_1 = G_B9_1;
	}

IL_00b9:
	{
		RuntimeObject* L_31;
		L_31 = Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8(G_B10_1, G_B10_0, Enumerable_Where_TisType_t_mA4A7776893ADF4E3CAB6F7AEC94DF71DDF7931F8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_32 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_9;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_33 = L_32;
		G_B11_0 = L_33;
		G_B11_1 = L_31;
		if (L_33)
		{
			G_B12_0 = L_33;
			G_B12_1 = L_31;
			goto IL_00dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_34 = ((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_35 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_35, L_34, (intptr_t)((void*)U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m1B8DCB644CFFE8641DEBB5BD34F7B40DD3AB2127_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_36 = L_35;
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_9 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9__4_5_9), (void*)L_36);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
	}

IL_00dd:
	{
		RuntimeObject* L_37;
		L_37 = Enumerable_OrderBy_TisType_t_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD884B69525386CF35EF28136A6715815CF45B047(G_B12_1, G_B12_0, Enumerable_OrderBy_TisType_t_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD884B69525386CF35EF28136A6715815CF45B047_RuntimeMethod_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_38;
		L_38 = Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89(L_37, Enumerable_ToArray_TisType_t_m8E2C7EBDC8CEB2393785B9E910ECF6D478007A89_RuntimeMethod_var);
		return L_38;
	}
}
// System.Void WanzyeeStudio.Json.JsonNetUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNetUtility__cctor_m9EFD57C275E9455C05054035C3A60CAACEF3C7AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static JsonSerializerSettings defaultSettings = new JsonSerializerSettings(){
		//     Converters = CreateConverters()
		// };
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = L_0;
		List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* L_2;
		L_2 = JsonNetUtility_CreateConverters_mD2120294DBAEDB2704DFA90CBEE69240FE5D0E07(NULL);
		NullCheck(L_1);
		JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline(L_1, L_2, NULL);
		((JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_StaticFields*)il2cpp_codegen_static_fields_for(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var))->___defaultSettings_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_StaticFields*)il2cpp_codegen_static_fields_for(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var))->___defaultSettings_0), (void*)L_1);
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
// System.Void WanzyeeStudio.Json.JsonNetUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m20B4A45E14BF3740917B3FC734C57FC6EDE05851 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* L_0 = (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625*)il2cpp_codegen_object_new(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mE7B313988F3FFFBEB513FDB980C0F0D2D258B70E(L_0, NULL);
		((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void WanzyeeStudio.Json.JsonNetUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7B313988F3FFFBEB513FDB980C0F0D2D258B70E (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Newtonsoft.Json.JsonSerializerSettings WanzyeeStudio.Json.JsonNetUtility/<>c::<Initialize>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* U3CU3Ec_U3CInitializeU3Eb__1_0_m9379ADAA91BC7D056980CADF7F0552CA86706C83 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(null == JsonConvert.DefaultSettings) JsonConvert.DefaultSettings = () => defaultSettings;
		il2cpp_codegen_runtime_class_init_inline(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = ((JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_StaticFields*)il2cpp_codegen_static_fields_for(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var))->___defaultSettings_0;
		return L_0;
	}
}
// Newtonsoft.Json.JsonConverter WanzyeeStudio.Json.JsonNetUtility/<>c::<CreateConverters>b__2_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* U3CU3Ec_U3CCreateConvertersU3Eb__2_0_m4E2B5C9372AF285C94727A49FE73B802ADC8BF95 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var _customs = FindConverterTypes().Select((type) => CreateConverter(type));
		Type_t* L_0 = ___0_type;
		il2cpp_codegen_runtime_class_init_inline(JsonNetUtility_t28331BED9AAADEEC2B4E9606C33483DAD161AA00_il2cpp_TypeInfo_var);
		JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* L_1;
		L_1 = JsonNetUtility_CreateConverter_m03F83B16807F0557CF0ECAF9144E4E56EFF4677D(L_0, NULL);
		return L_1;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<CreateConverters>b__2_1(Newtonsoft.Json.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCreateConvertersU3Eb__2_1_m75ACFCDB703FD54EE9986F1D6BA5801B8BA0F1F4 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___0_converter, const RuntimeMethod* method) 
{
	{
		// return _customs.Concat(_builtins).Where((converter) => null != converter).ToList();
		JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* L_0 = ___0_converter;
		return (bool)((!(((RuntimeObject*)(JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CFindConverterTypesU3Eb__4_0_mC02DC08939B7C14FEBD6D316882FB5853480989B (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Assembly_t* ___0_dll, const RuntimeMethod* method) 
{
	{
		// ).SelectMany((dll) => dll.GetTypes()
		Assembly_t* L_0 = ___0_dll;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(16 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_1_mC95610AA4B97474D7F8888FED0D961116887974D (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).Where((type) => typeof(JsonConverter).IsAssignableFrom(type)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_type;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		return L_3;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_2_m6CA9B31E7886BE70ACD702B5CC1DF049AD9CB14F (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		// ).Where((type) => (!type.IsAbstract && !type.IsGenericTypeDefinition)
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(43 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_2);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_3(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_3_m3E70EB479674FD8E9B25713D2630EF539DA8A019 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).Where((type) => null != type.GetConstructor(new Type[0])
		Type_t* L_0 = ___0_type;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_2;
		L_2 = Type_GetConstructor_m7F0E5E1A61477DE81B35AE780C21FA6830124554(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4((ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, L_2, NULL);
		return L_3;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_4(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_4_m77DD5CF5EDB0C3DF5D985EC1B5B203AD72D00ED4 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E50F2B5959EA8333729D48896BBD7054EF0408);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).Where((type) => !(null != type.Namespace && type.Namespace.StartsWith("Newtonsoft.Json"))
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteral02E50F2B5959EA8333729D48896BBD7054EF0408, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)1;
	}
}
// System.Boolean WanzyeeStudio.Json.JsonNetUtility/<>c::<FindConverterTypes>b__4_5(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindConverterTypesU3Eb__4_5_m1B8DCB644CFFE8641DEBB5BD34F7B40DD3AB2127 (U3CU3Ec_t8A368DB6D428483DD5F7FEF4D179F7064A13B625* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE0048E8AE6615C77DAF1F821ED1047BE66CD89);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ).OrderBy((type) => null != type.Namespace && type.Namespace.StartsWith("WanzyeeStudio")
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_0);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_Namespace() */, L_2);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteral7BE0048E8AE6615C77DAF1F821ED1047BE66CD89, NULL);
		return L_4;
	}

IL_0019:
	{
		return (bool)0;
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
// System.String[] WanzyeeStudio.Json.Matrix4x4Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Matrix4x4Converter_GetPropertyNames_m36E979701BA57BD9797E81D2331564B3494296E5 (Matrix4x4Converter_tA7CE0011BCF10DB30E6D34024070EAFAC75CB660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisString_t_TisString_t_m6632E57E00D785EC600C506EEE3E81232E1E97E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m4AB3B069C2675475BA35218F3305623FF04C0555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* L_0 = (U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_m4A3021197903AE67DA74899DD0F700D891A34DD4(L_0, NULL);
		V_0 = L_0;
		// var _indexes = new []{"0", "1", "2", "3"};
		U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* L_1 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		NullCheck(L_1);
		L_1->____indexes_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->____indexes_0), (void*)L_6);
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7->____indexes_0;
		U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* L_9 = V_0;
		Func_2_tF9905F052EF12704501D5B272E965D9B1311A014* L_10 = (Func_2_tF9905F052EF12704501D5B272E965D9B1311A014*)il2cpp_codegen_object_new(Func_2_tF9905F052EF12704501D5B272E965D9B1311A014_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_m4A9B7DC847F99DB2FD0BA764145147086C2247A4(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m4AB3B069C2675475BA35218F3305623FF04C0555_RuntimeMethod_var), NULL);
		RuntimeObject* L_11;
		L_11 = Enumerable_SelectMany_TisString_t_TisString_t_m6632E57E00D785EC600C506EEE3E81232E1E97E4((RuntimeObject*)L_8, L_10, Enumerable_SelectMany_TisString_t_TisString_t_m6632E57E00D785EC600C506EEE3E81232E1E97E4_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_11, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		return L_12;
	}
}
// System.Void WanzyeeStudio.Json.Matrix4x4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4Converter__ctor_m7ED55021D0FA7CF81AD7764F528FFB61BC02A5B9 (Matrix4x4Converter_tA7CE0011BCF10DB30E6D34024070EAFAC75CB660* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4(__this, PartialConverter_1__ctor_m2A78192A3D9E58731F1BEB8CD51FF0C8C636CFE4_RuntimeMethod_var);
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
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_m4A3021197903AE67DA74899DD0F700D891A34DD4 (U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_0::<GetPropertyNames>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CGetPropertyNamesU3Eb__0_m4AB3B069C2675475BA35218F3305623FF04C0555 (U3CU3Ec__DisplayClass0_0_t38F6FAD45BBD963AC4221A94B859A78B17402DBE* __this, String_t* ___0_row, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_m97079F3E46933DF76D3853BA8DF660D7867F83DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* L_0 = (U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_1__ctor_mD8C3BF28FC1D9EC1B6FDE13BFF820E42CB02C396(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* L_1 = V_0;
		String_t* L_2 = ___0_row;
		NullCheck(L_1);
		L_1->___row_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___row_0), (void*)L_2);
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->____indexes_0;
		U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* L_4 = V_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_5 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_m97079F3E46933DF76D3853BA8DF660D7867F83DE_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6((RuntimeObject*)L_3, L_5, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		return L_6;
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
// System.Void WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_1__ctor_mD8C3BF28FC1D9EC1B6FDE13BFF820E42CB02C396 (U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String WanzyeeStudio.Json.Matrix4x4Converter/<>c__DisplayClass0_1::<GetPropertyNames>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass0_1_U3CGetPropertyNamesU3Eb__1_m97079F3E46933DF76D3853BA8DF660D7867F83DE (U3CU3Ec__DisplayClass0_1_tB47AB13764037C0597615FFEF161AAEC04750E32* __this, String_t* ___0_column, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _indexes.SelectMany((row) => _indexes.Select((column) => "m" + row + column)).ToArray();
		String_t* L_0 = __this->___row_0;
		String_t* L_1 = ___0_column;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_0, L_1, NULL);
		return L_2;
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
// System.String[] WanzyeeStudio.Json.QuaternionConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* QuaternionConverter_GetPropertyNames_mA93957C415977F4EFD36E66163F561C94C496C57 (QuaternionConverter_t4AC7A2497B54B5A3F284F432ADCC0A241F70ADE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"x", "y", "z", "w"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.QuaternionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionConverter__ctor_mD1BE7C0D9CEAE1E0C8BCCE3B43746E39D05CE12B (QuaternionConverter_t4AC7A2497B54B5A3F284F432ADCC0A241F70ADE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E(__this, PartialConverter_1__ctor_m1B0C88AA6F0402F86819F361296BE85A0448B62E_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.RectConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RectConverter_GetPropertyNames_m165C06DE5EAA33AAECE4065607A7DC968344340E (RectConverter_t31FA8B77E77470F7F91580487DF41FD85AD16653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"x", "y", "width", "height"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.RectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectConverter__ctor_mFD1CC853159D29A9385BEF58312114753FE8025F (RectConverter_t31FA8B77E77470F7F91580487DF41FD85AD16653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2(__this, PartialConverter_1__ctor_m7FD47CAC1C25CC61BF3EB43D44C6025EF1D116F2_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.RectOffsetConverter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* RectOffsetConverter_GetPropertyNames_m154D376DCE068567E184C8FAAE2D6CFF07B1928E (RectOffsetConverter_t3CC688C0F82A3D96F43DBD6C66E7EF1BA37CEC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"left", "right", "top", "bottom"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA11BC0AB16491B5DAEE99EAA33CF52FE6BC826E3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0DFA9AA29082727751167EB3C54FCAD0F9EDC665);
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.RectOffsetConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectOffsetConverter__ctor_m5C2EEE106E469DF54E46BD1E4DD4E3C7AB9D1E82 (RectOffsetConverter_t3CC688C0F82A3D96F43DBD6C66E7EF1BA37CEC14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m7457F66BDD5A435CD900F556D87C49CBC09F304E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m7457F66BDD5A435CD900F556D87C49CBC09F304E(__this, PartialConverter_1__ctor_m7457F66BDD5A435CD900F556D87C49CBC09F304E_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector2Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Vector2Converter_GetPropertyNames_m92940BDBD091C65AB89DAB573835308A815F5A92 (Vector2Converter_t51323FFC66E9B33CD2E93244339E40ADF1CF6C2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"x", "y"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		return L_2;
	}
}
// System.Void WanzyeeStudio.Json.Vector2Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Converter__ctor_m6C1FEB18364C440FB6A8451F05901BDBC0F912DC (Vector2Converter_t51323FFC66E9B33CD2E93244339E40ADF1CF6C2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2(__this, PartialConverter_1__ctor_m9AAC71EA4E358E893B50CAAB9E6ECB766983E3F2_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector3Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Vector3Converter_GetPropertyNames_m69A7FB4C0343F5CB3DCA1F6BF3BF685E60C473A5 (Vector3Converter_tE776220EDA287A2CAE715B8C94824EF38E2929DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"x", "y", "z"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		return L_3;
	}
}
// System.Void WanzyeeStudio.Json.Vector3Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Converter__ctor_mDC80DCF8F33BDCCF825ED597A42D4C1E82B02689 (Vector3Converter_tE776220EDA287A2CAE715B8C94824EF38E2929DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6(__this, PartialConverter_1__ctor_mB74A066B99C892861D9BAB69505264D2B846C7A6_RuntimeMethod_var);
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
// System.String[] WanzyeeStudio.Json.Vector4Converter::GetPropertyNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Vector4Converter_GetPropertyNames_m004D149A9BE5F93C5F7F87CBFC02B18957B2C010 (Vector4Converter_tE87465E5D89F3CC8CFBC03AF64CE8ECF318F5FD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new []{"x", "y", "z", "w"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		return L_4;
	}
}
// System.Void WanzyeeStudio.Json.Vector4Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Converter__ctor_m8B03EC9AECBF4352F86F2BEC6A5802927B633840 (Vector4Converter_tE87465E5D89F3CC8CFBC03AF64CE8ECF318F5FD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F(__this, PartialConverter_1__ctor_mEFECBC2092CD69467F3F8D24FDA1A016F8EB993F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = ((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CConvertersU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConvertersU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
