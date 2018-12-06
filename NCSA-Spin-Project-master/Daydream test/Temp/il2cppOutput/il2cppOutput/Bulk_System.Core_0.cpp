#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t3802591843;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Linq.Expressions.ElementInit>
struct Action_1_t2854954556;
// System.Action`1<System.Linq.Expressions.Expression>
struct Action_1_t1760631621;
// System.Action`1<System.Linq.Expressions.MemberBinding>
struct Action_1_t437959295;
// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct Action_1_t1290889679;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t886128184;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.TimeZoneInfo/TimeType,System.Collections.DictionaryEntry>
struct Transform_1_t2521566318;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t1396226614;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ElementInit>
struct IList_1_t202839448;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t3403483809;
// System.Collections.Generic.IList`1<System.Linq.Expressions.MemberBinding>
struct IList_1_t2080811483;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t2933741867;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t900354228;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>[]
struct KeyValuePair_2U5BU5D_t2143006960;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t1770412147;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct List_1_t1546524651;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3895063248;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2800740313;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t1478067987;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2330998371;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t4292682451;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t297610732;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidTimeZoneException
struct InvalidTimeZoneException_t4066718130;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t77573129;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t1874387742;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t3613654278;
// System.Linq.Expressions.ElementInit
struct ElementInit_t2682486961;
// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t2120383524;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t1561124052;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t3698930233;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3131094331;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t4000042569;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t1201848431;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t265491700;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t2956213603;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t676945469;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t3353502159;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t3826576684;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t3675920717;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t679298166;
// System.Linq.Expressions.NewExpression
struct NewExpression_t1271006003;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1118422084;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t2086022908;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t3914580921;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080583;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.ObjectDisposedException
struct ObjectDisposedException_t21392786;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t984015687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.CompilerServices.ExtensionAttribute
struct ExtensionAttribute_t1723066603;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.Aes
struct Aes_t1218282760;
// System.Security.Cryptography.AesManaged
struct AesManaged_t1129950597;
// System.Security.Cryptography.AesTransform
struct AesTransform_t2957123611;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_t248831461;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Security.Cryptography.KeySizes
struct KeySizes_t85027896;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.TimeZoneInfo
struct TimeZoneInfo_t161405854;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t74449909;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992;
// System.TimeZoneInfo/TimeType[]
struct TimeTypeU5BU5D_t2917227474;
// System.TimeZoneNotFoundException
struct TimeZoneNotFoundException_t171073523;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* Action_1_t1290889679_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t1760631621_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t2854954556_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t437959295_il2cpp_TypeInfo_var;
extern RuntimeClass* AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var;
extern RuntimeClass* AdjustmentRule_t74449909_il2cpp_TypeInfo_var;
extern RuntimeClass* AesTransform_t2957123611_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* BinaryExpression_t77573129_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CipherMode_t84635067_il2cpp_TypeInfo_var;
extern RuntimeClass* ConditionalExpression_t1874387742_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantExpression_t3613654278_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptographicException_t248831461_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1396226614_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t736164020_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExpressionPrinter_t2120383524_il2cpp_TypeInfo_var;
extern RuntimeClass* ExpressionType_t2886294549_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var;
extern RuntimeClass* InvocationExpression_t3698930233_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyBuilder_t2049230356_il2cpp_TypeInfo_var;
extern RuntimeClass* KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var;
extern RuntimeClass* KeySizes_t85027896_il2cpp_TypeInfo_var;
extern RuntimeClass* LambdaExpression_t3131094331_il2cpp_TypeInfo_var;
extern RuntimeClass* ListInitExpression_t4000042569_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1546524651_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1770412147_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberAssignment_t1201848431_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberBindingType_t648944624_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberExpression_t2956213603_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberInitExpression_t676945469_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberListBinding_t3353502159_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberMemberBinding_t3826576684_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodCallExpression_t3675920717_il2cpp_TypeInfo_var;
extern RuntimeClass* NewArrayExpression_t679298166_il2cpp_TypeInfo_var;
extern RuntimeClass* NewExpression_t1271006003_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectDisposedException_t21392786_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PaddingMode_t2546806710_il2cpp_TypeInfo_var;
extern RuntimeClass* ParameterExpression_t1118422084_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeZoneInfo_t161405854_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var;
extern RuntimeClass* TransitionTime_t449921781_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeBinaryExpression_t2086022908_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var;
extern RuntimeClass* UnaryExpression_t3914580921_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D10_10_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D11_11_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D1_1_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D2_2_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D3_3_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D4_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D5_5_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D6_6_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D7_7_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D8_8_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D9_9_FieldInfo_var;
extern String_t* _stringLiteral1202628576;
extern String_t* _stringLiteral136749170;
extern String_t* _stringLiteral1373758191;
extern String_t* _stringLiteral1453361438;
extern String_t* _stringLiteral1528915702;
extern String_t* _stringLiteral1561769044;
extern String_t* _stringLiteral1574560297;
extern String_t* _stringLiteral1599610208;
extern String_t* _stringLiteral1601163033;
extern String_t* _stringLiteral1771851981;
extern String_t* _stringLiteral1810271857;
extern String_t* _stringLiteral18249897;
extern String_t* _stringLiteral1844453138;
extern String_t* _stringLiteral1894924580;
extern String_t* _stringLiteral2025020366;
extern String_t* _stringLiteral2053830539;
extern String_t* _stringLiteral2077913984;
extern String_t* _stringLiteral2091341596;
extern String_t* _stringLiteral2101785501;
extern String_t* _stringLiteral2136391555;
extern String_t* _stringLiteral2153550409;
extern String_t* _stringLiteral2167393519;
extern String_t* _stringLiteral2191586598;
extern String_t* _stringLiteral2212699745;
extern String_t* _stringLiteral2277405654;
extern String_t* _stringLiteral2282716040;
extern String_t* _stringLiteral2306550058;
extern String_t* _stringLiteral2374226348;
extern String_t* _stringLiteral2376781826;
extern String_t* _stringLiteral2387040967;
extern String_t* _stringLiteral2401610308;
extern String_t* _stringLiteral2432405111;
extern String_t* _stringLiteral244543716;
extern String_t* _stringLiteral2457238620;
extern String_t* _stringLiteral2495112056;
extern String_t* _stringLiteral251636811;
extern String_t* _stringLiteral2585275424;
extern String_t* _stringLiteral2609825863;
extern String_t* _stringLiteral263903928;
extern String_t* _stringLiteral2713363123;
extern String_t* _stringLiteral2825121886;
extern String_t* _stringLiteral289204851;
extern String_t* _stringLiteral2962044487;
extern String_t* _stringLiteral2992454296;
extern String_t* _stringLiteral3009079190;
extern String_t* _stringLiteral3073595182;
extern String_t* _stringLiteral3126236545;
extern String_t* _stringLiteral3152468735;
extern String_t* _stringLiteral3174732046;
extern String_t* _stringLiteral3181813962;
extern String_t* _stringLiteral3188105535;
extern String_t* _stringLiteral3243520166;
extern String_t* _stringLiteral3246833729;
extern String_t* _stringLiteral3266137301;
extern String_t* _stringLiteral327508185;
extern String_t* _stringLiteral335008478;
extern String_t* _stringLiteral3372390906;
extern String_t* _stringLiteral3372752593;
extern String_t* _stringLiteral339086443;
extern String_t* _stringLiteral3410052326;
extern String_t* _stringLiteral3427887931;
extern String_t* _stringLiteral3430552138;
extern String_t* _stringLiteral3450124154;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3451631505;
extern String_t* _stringLiteral3451697042;
extern String_t* _stringLiteral3451762559;
extern String_t* _stringLiteral3451762578;
extern String_t* _stringLiteral3451762580;
extern String_t* _stringLiteral3451828116;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3452614534;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3452614546;
extern String_t* _stringLiteral3452614547;
extern String_t* _stringLiteral3452614548;
extern String_t* _stringLiteral3452614611;
extern String_t* _stringLiteral3452614612;
extern String_t* _stringLiteral3452614642;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3454449607;
extern String_t* _stringLiteral3455629281;
extern String_t* _stringLiteral3456022484;
extern String_t* _stringLiteral3456087936;
extern String_t* _stringLiteral3478177746;
extern String_t* _stringLiteral3495190937;
extern String_t* _stringLiteral3497985806;
extern String_t* _stringLiteral3502150264;
extern String_t* _stringLiteral356329547;
extern String_t* _stringLiteral3610891033;
extern String_t* _stringLiteral3638045652;
extern String_t* _stringLiteral3672279257;
extern String_t* _stringLiteral3695872217;
extern String_t* _stringLiteral3823085299;
extern String_t* _stringLiteral389898510;
extern String_t* _stringLiteral3941128596;
extern String_t* _stringLiteral3975560191;
extern String_t* _stringLiteral3977229295;
extern String_t* _stringLiteral3992013369;
extern String_t* _stringLiteral4170759834;
extern String_t* _stringLiteral4248262063;
extern String_t* _stringLiteral4294193667;
extern String_t* _stringLiteral438779933;
extern String_t* _stringLiteral4613441;
extern String_t* _stringLiteral560592250;
extern String_t* _stringLiteral576230762;
extern String_t* _stringLiteral645215293;
extern String_t* _stringLiteral89615844;
extern String_t* _stringLiteral897330846;
extern String_t* _stringLiteral928723642;
extern String_t* _stringLiteral943589392;
extern String_t* _stringLiteral995612621;
extern const RuntimeMethod* Action_1__ctor_m1086995192_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2050332088_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m521837620_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m757341569_RuntimeMethod_var;
extern const RuntimeMethod* AdjustmentRule_GetObjectData_m2214958557_RuntimeMethod_var;
extern const RuntimeMethod* AdjustmentRule_OnDeserialization_m2703381884_RuntimeMethod_var;
extern const RuntimeMethod* AdjustmentRule__ctor_m495727949_RuntimeMethod_var;
extern const RuntimeMethod* AesTransform__ctor_m3143546745_RuntimeMethod_var;
extern const RuntimeMethod* Check_FirstAndSecond_m1286658405_RuntimeMethod_var;
extern const RuntimeMethod* Check_SourceAndFunc_m1489824209_RuntimeMethod_var;
extern const RuntimeMethod* Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var;
extern const RuntimeMethod* Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var;
extern const RuntimeMethod* Check_SourceAndPredicate_m2332465641_RuntimeMethod_var;
extern const RuntimeMethod* Check_SourceAndSelector_m4013530551_RuntimeMethod_var;
extern const RuntimeMethod* Check_Source_m4098695967_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1718909353_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m670166897_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m224509051_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4261191612_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m4064694223_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2315657164_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m823070101_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionPrinter_VisitNewArray_m3475799212_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionPrinter_VisitTypeIs_m745155014_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionPrinter_VisitUnary_m4044978277_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_VisitBinding_m1636609709_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_VisitList_TisElementInit_t2682486961_m3463988893_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_VisitList_TisExpression_t1588164026_m3347616343_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_VisitList_TisMemberBinding_t265491700_m3317302336_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_VisitList_TisParameterExpression_t1118422084_m3269433003_RuntimeMethod_var;
extern const RuntimeMethod* ExpressionVisitor_Visit_m3238193698_RuntimeMethod_var;
extern const RuntimeMethod* Expression_CheckLambda_m3787444653_RuntimeMethod_var;
extern const RuntimeMethod* Expression_CheckNonGenericMethod_m3227574805_RuntimeMethod_var;
extern const RuntimeMethod* Expression_Constant_m374760797_RuntimeMethod_var;
extern const RuntimeMethod* Expression_Property_m493981664_RuntimeMethod_var;
extern const RuntimeMethod* Expression_Quote_m2632568450_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2__ctor_m2324111314_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2071921741_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3123410994_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1397479321_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1698810603_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_m1862724733_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3286616822_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2598981433_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m27745599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2451877167_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m947837680_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2470931760_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Count_m2443279563_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Count_m2483166938_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Count_m3216249872_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Item_m1189576603_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Item_m2250468099_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyCollection_1_get_Item_m3207760739_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_CTS_m764800021_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_FinalDecrypt_m764004682_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_FinalEncrypt_m748885414_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_InternalTransformBlock_m1743612142_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_OFB_m3690147804_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_ThrowBadPaddingException_m2898061954_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_TransformFinalBlock_m1030888689_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform_Transform_m1683494363_RuntimeMethod_var;
extern const RuntimeMethod* SymmetricTransform__ctor_m2693628991_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_GetObjectData_m2434535635_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_HasSameRules_m697432081_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_IsDaylightSavingTime_m2475480634_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_OnDeserialization_m1663302437_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var;
extern const RuntimeMethod* TimeZoneInfo_get_Local_m3767312181_RuntimeMethod_var;
extern const RuntimeMethod* TransitionTime_GetObjectData_m565919319_RuntimeMethod_var;
extern const RuntimeMethod* TransitionTime_OnDeserialization_m482900757_RuntimeMethod_var;
extern const RuntimeMethod* TransitionTime__ctor_m1012552555_RuntimeMethod_var;
extern const RuntimeMethod* TransitionTime__ctor_m1241469383_RuntimeMethod_var;
extern const RuntimeType* Boolean_t97287965_0_0_0_var;
extern const RuntimeType* Delegate_t1188392813_0_0_0_var;
extern const RuntimeType* Expression_t1588164026_0_0_0_var;
extern const RuntimeType* Nullable_1_t1819850047_0_0_0_var;
extern const RuntimeType* Nullable_1_t3772285925_0_0_0_var;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeType* Void_t1185182177_0_0_0_var;
extern const uint32_t AdjustmentRule_CreateAdjustmentRule_m1020400594_MetadataUsageId;
extern const uint32_t AdjustmentRule_Equals_m4095462908_MetadataUsageId;
extern const uint32_t AdjustmentRule_GetObjectData_m2214958557_MetadataUsageId;
extern const uint32_t AdjustmentRule_OnDeserialization_m2703381884_MetadataUsageId;
extern const uint32_t AdjustmentRule__ctor_m495727949_MetadataUsageId;
extern const uint32_t AesManaged_CreateDecryptor_m692040246_MetadataUsageId;
extern const uint32_t AesManaged_CreateEncryptor_m2294080233_MetadataUsageId;
extern const uint32_t AesTransform_Decrypt128_m3018534522_MetadataUsageId;
extern const uint32_t AesTransform_Encrypt128_m424393011_MetadataUsageId;
extern const uint32_t AesTransform_SubByte_m3350159546_MetadataUsageId;
extern const uint32_t AesTransform__cctor_m2567644034_MetadataUsageId;
extern const uint32_t AesTransform__ctor_m3143546745_MetadataUsageId;
extern const uint32_t Aes__ctor_m178909601_MetadataUsageId;
extern const uint32_t Check_FirstAndSecond_m1286658405_MetadataUsageId;
extern const uint32_t Check_SourceAndFunc_m1489824209_MetadataUsageId;
extern const uint32_t Check_SourceAndKeyElementSelectors_m4285999668_MetadataUsageId;
extern const uint32_t Check_SourceAndKeySelector_m1202955589_MetadataUsageId;
extern const uint32_t Check_SourceAndPredicate_m2332465641_MetadataUsageId;
extern const uint32_t Check_SourceAndSelector_m4013530551_MetadataUsageId;
extern const uint32_t Check_Source_m4098695967_MetadataUsageId;
extern const uint32_t ExpressionPrinter_HasStringRepresentation_m1491716173_MetadataUsageId;
extern const uint32_t ExpressionPrinter_IsBoolean_m3915202565_MetadataUsageId;
extern const uint32_t ExpressionPrinter_OperatorToString_m2097423961_MetadataUsageId;
extern const uint32_t ExpressionPrinter_PrintArrayIndex_m3909025307_MetadataUsageId;
extern const uint32_t ExpressionPrinter_ToString_m2797236515_MetadataUsageId;
extern const uint32_t ExpressionPrinter_ToString_m3553691067_MetadataUsageId;
extern const uint32_t ExpressionPrinter_ToString_m695496964_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitBinary_m2093948925_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitConditional_m29246237_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitConstant_m688764185_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitElementInitializer_m11676246_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitInvocation_m4287485943_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitLambda_m1976283827_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitListInit_m1063702748_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMemberAccess_m3686066408_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMemberAssignment_m491940330_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMemberInit_m2120763772_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMemberListBinding_m3623708527_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMemberMemberBinding_m4212821825_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitMethodCall_m2901281752_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitNewArray_m3475799212_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitNew_m686720947_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitParameter_m2043054640_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitTypeIs_m745155014_MetadataUsageId;
extern const uint32_t ExpressionPrinter_VisitUnary_m4044978277_MetadataUsageId;
extern const uint32_t ExpressionPrinter__ctor_m1950713947_MetadataUsageId;
extern const uint32_t ExpressionVisitor_VisitBindingList_m1328016562_MetadataUsageId;
extern const uint32_t ExpressionVisitor_VisitBinding_m1636609709_MetadataUsageId;
extern const uint32_t ExpressionVisitor_VisitElementInitializerList_m226941505_MetadataUsageId;
extern const uint32_t ExpressionVisitor_VisitExpressionList_m2907260662_MetadataUsageId;
extern const uint32_t ExpressionVisitor_Visit_m3238193698_MetadataUsageId;
extern const uint32_t Expression_CheckLambda_m3787444653_MetadataUsageId;
extern const uint32_t Expression_CheckNonGenericMethod_m3227574805_MetadataUsageId;
extern const uint32_t Expression_Constant_m3269986673_MetadataUsageId;
extern const uint32_t Expression_Constant_m374760797_MetadataUsageId;
extern const uint32_t Expression_Property_m493981664_MetadataUsageId;
extern const uint32_t Expression_Quote_m2632568450_MetadataUsageId;
extern const uint32_t Extensions_GetInvokeMethod_m2591588064_MetadataUsageId;
extern const uint32_t Extensions_IsExpression_m3809696797_MetadataUsageId;
extern const uint32_t Extensions_IsNullable_m780193409_MetadataUsageId;
extern const uint32_t KeyBuilder_IV_m3340234014_MetadataUsageId;
extern const uint32_t KeyBuilder_Key_m2503211157_MetadataUsageId;
extern const uint32_t KeyBuilder_get_Rng_m3373220441_MetadataUsageId;
extern const uint32_t Locale_GetText_m2427493201_MetadataUsageId;
extern const uint32_t SymmetricTransform_CTS_m764800021_MetadataUsageId;
extern const uint32_t SymmetricTransform_CheckInput_m2092289040_MetadataUsageId;
extern const uint32_t SymmetricTransform_FinalDecrypt_m764004682_MetadataUsageId;
extern const uint32_t SymmetricTransform_FinalEncrypt_m748885414_MetadataUsageId;
extern const uint32_t SymmetricTransform_InternalTransformBlock_m1743612142_MetadataUsageId;
extern const uint32_t SymmetricTransform_OFB_m3690147804_MetadataUsageId;
extern const uint32_t SymmetricTransform_Random_m3740038270_MetadataUsageId;
extern const uint32_t SymmetricTransform_ThrowBadPaddingException_m2898061954_MetadataUsageId;
extern const uint32_t SymmetricTransform_TransformBlock_m851059707_MetadataUsageId;
extern const uint32_t SymmetricTransform_TransformFinalBlock_m1030888689_MetadataUsageId;
extern const uint32_t SymmetricTransform_Transform_m1683494363_MetadataUsageId;
extern const uint32_t SymmetricTransform__ctor_m2693628991_MetadataUsageId;
extern const uint32_t TimeType_ToString_m3568850299_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m1792093365_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m3151472709_MetadataUsageId;
extern const uint32_t TimeZoneInfo_CreateCustomTimeZone_m4187381152_MetadataUsageId;
extern const uint32_t TimeZoneInfo_Equals_m832693802_MetadataUsageId;
extern const uint32_t TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetAdjustmentRules_m496065111_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetApplicableRule_m3152592286_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetObjectData_m2434535635_MetadataUsageId;
extern const uint32_t TimeZoneInfo_GetUtcOffset_m3780875423_MetadataUsageId;
extern const uint32_t TimeZoneInfo_HasSameRules_m697432081_MetadataUsageId;
extern const uint32_t TimeZoneInfo_IsDaylightSavingTime_m2475480634_MetadataUsageId;
extern const uint32_t TimeZoneInfo_IsInvalidTime_m1886861930_MetadataUsageId;
extern const uint32_t TimeZoneInfo_OnDeserialization_m1663302437_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ParseAbbreviations_m1471889884_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ParseTZBuffer_m3851257210_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ParseTimesTypes_m1754682716_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ParseTransitions_m542357583_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058_MetadataUsageId;
extern const uint32_t TimeZoneInfo_TransitionPoint_m2194238407_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ValidTZFile_m3505397244_MetadataUsageId;
extern const uint32_t TimeZoneInfo_ValidateRules_m1341992406_MetadataUsageId;
extern const uint32_t TimeZoneInfo__ctor_m1956250117_MetadataUsageId;
extern const uint32_t TimeZoneInfo_get_Local_m3767312181_MetadataUsageId;
extern const uint32_t TimeZoneInfo_get_TimeZoneDirectory_m1493272576_MetadataUsageId;
extern const uint32_t TimeZoneInfo_get_Utc_m4037366733_MetadataUsageId;
extern const uint32_t TransitionTime_Equals_m2918964558_MetadataUsageId;
extern const uint32_t TransitionTime_GetObjectData_m565919319_MetadataUsageId;
extern const uint32_t TransitionTime_OnDeserialization_m482900757_MetadataUsageId;
extern const uint32_t TransitionTime__ctor_m1012552555_MetadataUsageId;
extern const uint32_t TransitionTime__ctor_m1241469383_MetadataUsageId;
extern const uint32_t TransitionTime_op_Equality_m844747352_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct ParameterInfoU5BU5D_t390618515;
struct PropertyInfoU5BU5D_t1461822886;
struct KeySizesU5BU5D_t722666473;
struct AdjustmentRuleU5BU5D_t1469475992;
struct UInt32U5BU5D_t2770800703;


#ifndef U3CMODULEU3E_T692745528_H
#define U3CMODULEU3E_T692745528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745528 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745528_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LOCALE_T4128636110_H
#define LOCALE_T4128636110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636110  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636110_H
#ifndef KEYBUILDER_T2049230356_H
#define KEYBUILDER_T2049230356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2049230356  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2049230356_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2049230356_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2049230356_H
#ifndef SYMMETRICTRANSFORM_T3802591843_H
#define SYMMETRICTRANSFORM_T3802591843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591843  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591843_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef DICTIONARY_2_T736164020_H
#define DICTIONARY_2_T736164020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t736164020  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t736164020_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t886128184 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t886128184 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t886128184 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t886128184 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T736164020_H
#ifndef DICTIONARY_2_T1396226614_H
#define DICTIONARY_2_T1396226614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct  Dictionary_2_t1396226614  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TimeTypeU5BU5D_t2917227474* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___valueSlots_7)); }
	inline TimeTypeU5BU5D_t2917227474* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TimeTypeU5BU5D_t2917227474** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TimeTypeU5BU5D_t2917227474* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1396226614_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2521566318 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1396226614_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2521566318 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2521566318 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2521566318 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1396226614_H
#ifndef LIST_1_T1770412147_H
#define LIST_1_T1770412147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct  List_1_t1770412147  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t2143006960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t2143006960* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t2143006960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t2143006960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1770412147, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1770412147_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	KeyValuePair_2U5BU5D_t2143006960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1770412147_StaticFields, ___EmptyArray_4)); }
	inline KeyValuePair_2U5BU5D_t2143006960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline KeyValuePair_2U5BU5D_t2143006960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(KeyValuePair_2U5BU5D_t2143006960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1770412147_H
#ifndef LIST_1_T1546524651_H
#define LIST_1_T1546524651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct  List_1_t1546524651  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AdjustmentRuleU5BU5D_t1469475992* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____items_1)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get__items_1() const { return ____items_1; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1546524651, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1546524651_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AdjustmentRuleU5BU5D_t1469475992* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1546524651_StaticFields, ___EmptyArray_4)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1546524651_H
#ifndef READONLYCOLLECTION_1_T3895063248_H
#define READONLYCOLLECTION_1_T3895063248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct  ReadOnlyCollection_1_t3895063248  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3895063248, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3895063248_H
#ifndef READONLYCOLLECTION_1_T2800740313_H
#define READONLYCOLLECTION_1_T2800740313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct  ReadOnlyCollection_1_t2800740313  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2800740313, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2800740313_H
#ifndef READONLYCOLLECTION_1_T1478067987_H
#define READONLYCOLLECTION_1_T1478067987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct  ReadOnlyCollection_1_t1478067987  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t1478067987, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T1478067987_H
#ifndef READONLYCOLLECTION_1_T2330998371_H
#define READONLYCOLLECTION_1_T2330998371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct  ReadOnlyCollection_1_t2330998371  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2330998371, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2330998371_H
#ifndef READONLYCOLLECTION_1_T297610732_H
#define READONLYCOLLECTION_1_T297610732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct  ReadOnlyCollection_1_t297610732  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t297610732, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T297610732_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public RuntimeObject
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_0)); }
	inline Stream_t1273022909 * get_Null_0() const { return ___Null_0; }
	inline Stream_t1273022909 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_t1273022909 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef CHECK_T192468399_H
#define CHECK_T192468399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Check
struct  Check_t192468399  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHECK_T192468399_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef ELEMENTINIT_T2682486961_H
#define ELEMENTINIT_T2682486961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ElementInit
struct  ElementInit_t2682486961  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::add_method
	MethodInfo_t * ___add_method_0;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_1;

public:
	inline static int32_t get_offset_of_add_method_0() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___add_method_0)); }
	inline MethodInfo_t * get_add_method_0() const { return ___add_method_0; }
	inline MethodInfo_t ** get_address_of_add_method_0() { return &___add_method_0; }
	inline void set_add_method_0(MethodInfo_t * value)
	{
		___add_method_0 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(ElementInit_t2682486961, ___arguments_1)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_1() const { return ___arguments_1; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTINIT_T2682486961_H
#ifndef EXPRESSIONVISITOR_T1561124052_H
#define EXPRESSIONVISITOR_T1561124052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionVisitor
struct  ExpressionVisitor_t1561124052  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONVISITOR_T1561124052_H
#ifndef EXTENSIONS_T2537735880_H
#define EXTENSIONS_T2537735880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Extensions
struct  Extensions_t2537735880  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONS_T2537735880_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
#ifndef KEYSIZES_T85027896_H
#define KEYSIZES_T85027896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t85027896  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t85027896, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T85027896_H
#ifndef RANDOMNUMBERGENERATOR_T386037858_H
#define RANDOMNUMBERGENERATOR_T386037858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t386037858  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T386037858_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U24ARRAYTYPEU241024_T3907531058_H
#define U24ARRAYTYPEU241024_T3907531058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3907531058 
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
		uint8_t U24ArrayTypeU241024_t3907531058__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3907531058_H
#ifndef U24ARRAYTYPEU24120_T4289081652_H
#define U24ARRAYTYPEU24120_T4289081652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4289081652 
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
		uint8_t U24ArrayTypeU24120_t4289081652__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4289081652_H
#ifndef U24ARRAYTYPEU24136_T1950429486_H
#define U24ARRAYTYPEU24136_T1950429486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1950429486 
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
		uint8_t U24ArrayTypeU24136_t1950429486__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1950429486_H
#ifndef U24ARRAYTYPEU24256_T1929481984_H
#define U24ARRAYTYPEU24256_T1929481984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481984 
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
		uint8_t U24ArrayTypeU24256_t1929481984__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481984_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef INVALIDTIMEZONEEXCEPTION_T4066718130_H
#define INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t4066718130  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifndef EXPRESSIONPRINTER_T2120383524_H
#define EXPRESSIONPRINTER_T2120383524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionPrinter
struct  ExpressionPrinter_t2120383524  : public ExpressionVisitor_t1561124052
{
public:
	// System.Text.StringBuilder System.Linq.Expressions.ExpressionPrinter::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(ExpressionPrinter_t2120383524, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONPRINTER_T2120383524_H
#ifndef MONOTODOATTRIBUTE_T4131080583_H
#define MONOTODOATTRIBUTE_T4131080583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080583  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080583_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef EXTENSIONATTRIBUTE_T1723066603_H
#define EXTENSIONATTRIBUTE_T1723066603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t1723066603  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T1723066603_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591843
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef TIMETYPE_T2507513283_H
#define TIMETYPE_T2507513283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TimeType
struct  TimeType_t2507513283 
{
public:
	// System.Int32 System.TimeZoneInfo/TimeType::Offset
	int32_t ___Offset_0;
	// System.Boolean System.TimeZoneInfo/TimeType::IsDst
	bool ___IsDst_1;
	// System.String System.TimeZoneInfo/TimeType::Name
	String_t* ___Name_2;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___Offset_0)); }
	inline int32_t get_Offset_0() const { return ___Offset_0; }
	inline int32_t* get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(int32_t value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_IsDst_1() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___IsDst_1)); }
	inline bool get_IsDst_1() const { return ___IsDst_1; }
	inline bool* get_address_of_IsDst_1() { return &___IsDst_1; }
	inline void set_IsDst_1(bool value)
	{
		___IsDst_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(TimeType_t2507513283, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t2507513283_marshaled_pinvoke
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	char* ___Name_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TimeType
struct TimeType_t2507513283_marshaled_com
{
	int32_t ___Offset_0;
	int32_t ___IsDst_1;
	Il2CppChar* ___Name_2;
};
#endif // TIMETYPE_T2507513283_H
#ifndef TIMEZONENOTFOUNDEXCEPTION_T171073523_H
#define TIMEZONENOTFOUNDEXCEPTION_T171073523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneNotFoundException
struct  TimeZoneNotFoundException_t171073523  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONENOTFOUNDEXCEPTION_T171073523_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255364  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t1950429486  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t4289081652  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t1929481984  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t1929481984  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t1950429486  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t1950429486 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t1950429486  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t4289081652  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t4289081652 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t4289081652  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t1929481984  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t1929481984 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t1929481984  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t1929481984  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t1929481984 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t1929481984  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255364_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255364_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYOFWEEK_T3650621421_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef FALLBACK_T3495999270_H
#define FALLBACK_T3495999270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Fallback
struct  Fallback_t3495999270 
{
public:
	// System.Int32 System.Linq.Enumerable/Fallback::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Fallback_t3495999270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLBACK_T3495999270_H
#ifndef EXPRESSIONTYPE_T2886294549_H
#define EXPRESSIONTYPE_T2886294549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ExpressionType
struct  ExpressionType_t2886294549 
{
public:
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExpressionType_t2886294549, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONTYPE_T2886294549_H
#ifndef MEMBERBINDINGTYPE_T648944624_H
#define MEMBERBINDINGTYPE_T648944624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBindingType
struct  MemberBindingType_t648944624 
{
public:
	// System.Int32 System.Linq.Expressions.MemberBindingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberBindingType_t648944624, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERBINDINGTYPE_T648944624_H
#ifndef SORTDIRECTION_T3222219096_H
#define SORTDIRECTION_T3222219096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortDirection
struct  SortDirection_t3222219096 
{
public:
	// System.Int32 System.Linq.SortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortDirection_t3222219096, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTDIRECTION_T3222219096_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T84635067_H
#ifndef CRYPTOGRAPHICEXCEPTION_T248831461_H
#define CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t248831461  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2546806710_H
#ifndef TIMEZONEINFO_T161405854_H
#define TIMEZONEINFO_T161405854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t161405854  : public RuntimeObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t881159249  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules_9;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___baseUtcOffset_0)); }
	inline TimeSpan_t881159249  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t881159249 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t881159249  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___daylightDisplayName_1), value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_2), value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_standardDisplayName_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___standardDisplayName_5)); }
	inline String_t* get_standardDisplayName_5() const { return ___standardDisplayName_5; }
	inline String_t** get_address_of_standardDisplayName_5() { return &___standardDisplayName_5; }
	inline void set_standardDisplayName_5(String_t* value)
	{
		___standardDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___standardDisplayName_5), value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___disableDaylightSavingTime_6)); }
	inline bool get_disableDaylightSavingTime_6() const { return ___disableDaylightSavingTime_6; }
	inline bool* get_address_of_disableDaylightSavingTime_6() { return &___disableDaylightSavingTime_6; }
	inline void set_disableDaylightSavingTime_6(bool value)
	{
		___disableDaylightSavingTime_6 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___adjustmentRules_9)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get_adjustmentRules_9() const { return ___adjustmentRules_9; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of_adjustmentRules_9() { return &___adjustmentRules_9; }
	inline void set_adjustmentRules_9(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		___adjustmentRules_9 = value;
		Il2CppCodeGenWriteBarrier((&___adjustmentRules_9), value);
	}
};

struct TimeZoneInfo_t161405854_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t161405854 * ___local_4;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t161405854 * ___utc_7;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_8;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t161405854 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t161405854 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t161405854 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_4), value);
	}

	inline static int32_t get_offset_of_utc_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___utc_7)); }
	inline TimeZoneInfo_t161405854 * get_utc_7() const { return ___utc_7; }
	inline TimeZoneInfo_t161405854 ** get_address_of_utc_7() { return &___utc_7; }
	inline void set_utc_7(TimeZoneInfo_t161405854 * value)
	{
		___utc_7 = value;
		Il2CppCodeGenWriteBarrier((&___utc_7), value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___timeZoneDirectory_8)); }
	inline String_t* get_timeZoneDirectory_8() const { return ___timeZoneDirectory_8; }
	inline String_t** get_address_of_timeZoneDirectory_8() { return &___timeZoneDirectory_8; }
	inline void set_timeZoneDirectory_8(String_t* value)
	{
		___timeZoneDirectory_8 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneDirectory_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONEINFO_T161405854_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_1;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_2;
	// System.Boolean System.IO.FileStream::async
	bool ___async_3;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_4;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_5;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_6;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_8;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_9;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_10;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_11;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_12;
	// System.String System.IO.FileStream::name
	String_t* ___name_13;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_14;

public:
	inline static int32_t get_offset_of_access_1() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_1)); }
	inline int32_t get_access_1() const { return ___access_1; }
	inline int32_t* get_address_of_access_1() { return &___access_1; }
	inline void set_access_1(int32_t value)
	{
		___access_1 = value;
	}

	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_2)); }
	inline bool get_owner_2() const { return ___owner_2; }
	inline bool* get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(bool value)
	{
		___owner_2 = value;
	}

	inline static int32_t get_offset_of_async_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_3)); }
	inline bool get_async_3() const { return ___async_3; }
	inline bool* get_address_of_async_3() { return &___async_3; }
	inline void set_async_3(bool value)
	{
		___async_3 = value;
	}

	inline static int32_t get_offset_of_canseek_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_4)); }
	inline bool get_canseek_4() const { return ___canseek_4; }
	inline bool* get_address_of_canseek_4() { return &___canseek_4; }
	inline void set_canseek_4(bool value)
	{
		___canseek_4 = value;
	}

	inline static int32_t get_offset_of_append_startpos_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_5)); }
	inline int64_t get_append_startpos_5() const { return ___append_startpos_5; }
	inline int64_t* get_address_of_append_startpos_5() { return &___append_startpos_5; }
	inline void set_append_startpos_5(int64_t value)
	{
		___append_startpos_5 = value;
	}

	inline static int32_t get_offset_of_anonymous_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_6)); }
	inline bool get_anonymous_6() const { return ___anonymous_6; }
	inline bool* get_address_of_anonymous_6() { return &___anonymous_6; }
	inline void set_anonymous_6(bool value)
	{
		___anonymous_6 = value;
	}

	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_buf_size_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_8)); }
	inline int32_t get_buf_size_8() const { return ___buf_size_8; }
	inline int32_t* get_address_of_buf_size_8() { return &___buf_size_8; }
	inline void set_buf_size_8(int32_t value)
	{
		___buf_size_8 = value;
	}

	inline static int32_t get_offset_of_buf_length_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_9)); }
	inline int32_t get_buf_length_9() const { return ___buf_length_9; }
	inline int32_t* get_address_of_buf_length_9() { return &___buf_length_9; }
	inline void set_buf_length_9(int32_t value)
	{
		___buf_length_9 = value;
	}

	inline static int32_t get_offset_of_buf_offset_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_10)); }
	inline int32_t get_buf_offset_10() const { return ___buf_offset_10; }
	inline int32_t* get_address_of_buf_offset_10() { return &___buf_offset_10; }
	inline void set_buf_offset_10(int32_t value)
	{
		___buf_offset_10 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_11)); }
	inline bool get_buf_dirty_11() const { return ___buf_dirty_11; }
	inline bool* get_address_of_buf_dirty_11() { return &___buf_dirty_11; }
	inline void set_buf_dirty_11(bool value)
	{
		___buf_dirty_11 = value;
	}

	inline static int32_t get_offset_of_buf_start_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_12)); }
	inline int64_t get_buf_start_12() const { return ___buf_start_12; }
	inline int64_t* get_address_of_buf_start_12() { return &___buf_start_12; }
	inline void set_buf_start_12(int64_t value)
	{
		___buf_start_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_handle_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_14)); }
	inline intptr_t get_handle_14() const { return ___handle_14; }
	inline intptr_t* get_address_of_handle_14() { return &___handle_14; }
	inline void set_handle_14(intptr_t value)
	{
		___handle_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef EXPRESSION_T1588164026_H
#define EXPRESSION_T1588164026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.Expression
struct  Expression_t1588164026  : public RuntimeObject
{
public:
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::node_type
	int32_t ___node_type_0;
	// System.Type System.Linq.Expressions.Expression::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_node_type_0() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___node_type_0)); }
	inline int32_t get_node_type_0() const { return ___node_type_0; }
	inline int32_t* get_address_of_node_type_0() { return &___node_type_0; }
	inline void set_node_type_0(int32_t value)
	{
		___node_type_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Expression_t1588164026, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1588164026_H
#ifndef MEMBERBINDING_T265491700_H
#define MEMBERBINDING_T265491700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t265491700  : public RuntimeObject
{
public:
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::binding_type
	int32_t ___binding_type_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_binding_type_0() { return static_cast<int32_t>(offsetof(MemberBinding_t265491700, ___binding_type_0)); }
	inline int32_t get_binding_type_0() const { return ___binding_type_0; }
	inline int32_t* get_address_of_binding_type_0() { return &___binding_type_0; }
	inline void set_binding_type_0(int32_t value)
	{
		___binding_type_0 = value;
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(MemberBinding_t265491700, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((&___member_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERBINDING_T265491700_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t984015687 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline UnmanagedMarshal_t984015687 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t984015687 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t984015687 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T1861056598_H
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T2854954556_H
#define ACTION_1_T2854954556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Linq.Expressions.ElementInit>
struct  Action_1_t2854954556  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T2854954556_H
#ifndef ACTION_1_T1760631621_H
#define ACTION_1_T1760631621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Linq.Expressions.Expression>
struct  Action_1_t1760631621  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1760631621_H
#ifndef ACTION_1_T437959295_H
#define ACTION_1_T437959295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Linq.Expressions.MemberBinding>
struct  Action_1_t437959295  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T437959295_H
#ifndef ACTION_1_T1290889679_H
#define ACTION_1_T1290889679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct  Action_1_t1290889679  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1290889679_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef KEYVALUEPAIR_2_T298337405_H
#define KEYVALUEPAIR_2_T298337405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>
struct  KeyValuePair_2_t298337405 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t3738529785  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TimeType_t2507513283  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t298337405, ___key_0)); }
	inline DateTime_t3738529785  get_key_0() const { return ___key_0; }
	inline DateTime_t3738529785 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t3738529785  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t298337405, ___value_1)); }
	inline TimeType_t2507513283  get_value_1() const { return ___value_1; }
	inline TimeType_t2507513283 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TimeType_t2507513283  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T298337405_H
#ifndef BINARYEXPRESSION_T77573129_H
#define BINARYEXPRESSION_T77573129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t77573129  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1588164026 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1588164026 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t3131094331 * ___conversion_4;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___left_2)); }
	inline Expression_t1588164026 * get_left_2() const { return ___left_2; }
	inline Expression_t1588164026 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Expression_t1588164026 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier((&___left_2), value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___right_3)); }
	inline Expression_t1588164026 * get_right_3() const { return ___right_3; }
	inline Expression_t1588164026 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Expression_t1588164026 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier((&___right_3), value);
	}

	inline static int32_t get_offset_of_conversion_4() { return static_cast<int32_t>(offsetof(BinaryExpression_t77573129, ___conversion_4)); }
	inline LambdaExpression_t3131094331 * get_conversion_4() const { return ___conversion_4; }
	inline LambdaExpression_t3131094331 ** get_address_of_conversion_4() { return &___conversion_4; }
	inline void set_conversion_4(LambdaExpression_t3131094331 * value)
	{
		___conversion_4 = value;
		Il2CppCodeGenWriteBarrier((&___conversion_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYEXPRESSION_T77573129_H
#ifndef CONDITIONALEXPRESSION_T1874387742_H
#define CONDITIONALEXPRESSION_T1874387742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t1874387742  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t1588164026 * ___test_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t1588164026 * ___if_true_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t1588164026 * ___if_false_4;

public:
	inline static int32_t get_offset_of_test_2() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___test_2)); }
	inline Expression_t1588164026 * get_test_2() const { return ___test_2; }
	inline Expression_t1588164026 ** get_address_of_test_2() { return &___test_2; }
	inline void set_test_2(Expression_t1588164026 * value)
	{
		___test_2 = value;
		Il2CppCodeGenWriteBarrier((&___test_2), value);
	}

	inline static int32_t get_offset_of_if_true_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___if_true_3)); }
	inline Expression_t1588164026 * get_if_true_3() const { return ___if_true_3; }
	inline Expression_t1588164026 ** get_address_of_if_true_3() { return &___if_true_3; }
	inline void set_if_true_3(Expression_t1588164026 * value)
	{
		___if_true_3 = value;
		Il2CppCodeGenWriteBarrier((&___if_true_3), value);
	}

	inline static int32_t get_offset_of_if_false_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t1874387742, ___if_false_4)); }
	inline Expression_t1588164026 * get_if_false_4() const { return ___if_false_4; }
	inline Expression_t1588164026 ** get_address_of_if_false_4() { return &___if_false_4; }
	inline void set_if_false_4(Expression_t1588164026 * value)
	{
		___if_false_4 = value;
		Il2CppCodeGenWriteBarrier((&___if_false_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONDITIONALEXPRESSION_T1874387742_H
#ifndef CONSTANTEXPRESSION_T3613654278_H
#define CONSTANTEXPRESSION_T3613654278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t3613654278  : public Expression_t1588164026
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ConstantExpression_t3613654278, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTEXPRESSION_T3613654278_H
#ifndef INVOCATIONEXPRESSION_T3698930233_H
#define INVOCATIONEXPRESSION_T3698930233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.InvocationExpression
struct  InvocationExpression_t3698930233  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(InvocationExpression_t3698930233, ___arguments_3)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOCATIONEXPRESSION_T3698930233_H
#ifndef LAMBDAEXPRESSION_T3131094331_H
#define LAMBDAEXPRESSION_T3131094331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.LambdaExpression
struct  LambdaExpression_t3131094331  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1588164026 * ___body_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2330998371 * ___parameters_3;

public:
	inline static int32_t get_offset_of_body_2() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___body_2)); }
	inline Expression_t1588164026 * get_body_2() const { return ___body_2; }
	inline Expression_t1588164026 ** get_address_of_body_2() { return &___body_2; }
	inline void set_body_2(Expression_t1588164026 * value)
	{
		___body_2 = value;
		Il2CppCodeGenWriteBarrier((&___body_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t3131094331, ___parameters_3)); }
	inline ReadOnlyCollection_1_t2330998371 * get_parameters_3() const { return ___parameters_3; }
	inline ReadOnlyCollection_1_t2330998371 ** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(ReadOnlyCollection_1_t2330998371 * value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAMBDAEXPRESSION_T3131094331_H
#ifndef LISTINITEXPRESSION_T4000042569_H
#define LISTINITEXPRESSION_T4000042569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t4000042569  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_initializers_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___initializers_3)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_3() const { return ___initializers_3; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_3() { return &___initializers_3; }
	inline void set_initializers_3(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_3 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTINITEXPRESSION_T4000042569_H
#ifndef MEMBERASSIGNMENT_T1201848431_H
#define MEMBERASSIGNMENT_T1201848431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment
struct  MemberAssignment_t1201848431  : public MemberBinding_t265491700
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::expression
	Expression_t1588164026 * ___expression_2;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberAssignment_t1201848431, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERASSIGNMENT_T1201848431_H
#ifndef MEMBEREXPRESSION_T2956213603_H
#define MEMBEREXPRESSION_T2956213603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberExpression
struct  MemberExpression_t2956213603  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::member
	MemberInfo_t * ___member_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(MemberExpression_t2956213603, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_member_3() { return static_cast<int32_t>(offsetof(MemberExpression_t2956213603, ___member_3)); }
	inline MemberInfo_t * get_member_3() const { return ___member_3; }
	inline MemberInfo_t ** get_address_of_member_3() { return &___member_3; }
	inline void set_member_3(MemberInfo_t * value)
	{
		___member_3 = value;
		Il2CppCodeGenWriteBarrier((&___member_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBEREXPRESSION_T2956213603_H
#ifndef MEMBERINITEXPRESSION_T676945469_H
#define MEMBERINITEXPRESSION_T676945469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t676945469  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t1478067987 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___new_expression_2), value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___bindings_3)); }
	inline ReadOnlyCollection_1_t1478067987 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t1478067987 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t1478067987 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINITEXPRESSION_T676945469_H
#ifndef MEMBERLISTBINDING_T3353502159_H
#define MEMBERLISTBINDING_T3353502159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberListBinding
struct  MemberListBinding_t3353502159  : public MemberBinding_t265491700
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_2;

public:
	inline static int32_t get_offset_of_initializers_2() { return static_cast<int32_t>(offsetof(MemberListBinding_t3353502159, ___initializers_2)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_2() const { return ___initializers_2; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_2() { return &___initializers_2; }
	inline void set_initializers_2(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_2 = value;
		Il2CppCodeGenWriteBarrier((&___initializers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLISTBINDING_T3353502159_H
#ifndef MEMBERMEMBERBINDING_T3826576684_H
#define MEMBERMEMBERBINDING_T3826576684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberMemberBinding
struct  MemberMemberBinding_t3826576684  : public MemberBinding_t265491700
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::bindings
	ReadOnlyCollection_1_t1478067987 * ___bindings_2;

public:
	inline static int32_t get_offset_of_bindings_2() { return static_cast<int32_t>(offsetof(MemberMemberBinding_t3826576684, ___bindings_2)); }
	inline ReadOnlyCollection_1_t1478067987 * get_bindings_2() const { return ___bindings_2; }
	inline ReadOnlyCollection_1_t1478067987 ** get_address_of_bindings_2() { return &___bindings_2; }
	inline void set_bindings_2(ReadOnlyCollection_1_t1478067987 * value)
	{
		___bindings_2 = value;
		Il2CppCodeGenWriteBarrier((&___bindings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERMEMBERBINDING_T3826576684_H
#ifndef METHODCALLEXPRESSION_T3675920717_H
#define METHODCALLEXPRESSION_T3675920717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t3675920717  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t1588164026 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___obj_2)); }
	inline Expression_t1588164026 * get_obj_2() const { return ___obj_2; }
	inline Expression_t1588164026 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Expression_t1588164026 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier((&___method_3), value);
	}

	inline static int32_t get_offset_of_arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpression_t3675920717, ___arguments_4)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_4() const { return ___arguments_4; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_4() { return &___arguments_4; }
	inline void set_arguments_4(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_4 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLEXPRESSION_T3675920717_H
#ifndef NEWARRAYEXPRESSION_T679298166_H
#define NEWARRAYEXPRESSION_T679298166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayExpression
struct  NewArrayExpression_t679298166  : public Expression_t1588164026
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::expressions
	ReadOnlyCollection_1_t2800740313 * ___expressions_2;

public:
	inline static int32_t get_offset_of_expressions_2() { return static_cast<int32_t>(offsetof(NewArrayExpression_t679298166, ___expressions_2)); }
	inline ReadOnlyCollection_1_t2800740313 * get_expressions_2() const { return ___expressions_2; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_expressions_2() { return &___expressions_2; }
	inline void set_expressions_2(ReadOnlyCollection_1_t2800740313 * value)
	{
		___expressions_2 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWARRAYEXPRESSION_T679298166_H
#ifndef NEWEXPRESSION_T1271006003_H
#define NEWEXPRESSION_T1271006003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t1271006003  : public Expression_t1588164026
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t297610732 * ___members_3;

public:
	inline static int32_t get_offset_of_arguments_2() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___arguments_2)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_2() const { return ___arguments_2; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_2() { return &___arguments_2; }
	inline void set_arguments_2(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_2 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_2), value);
	}

	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___members_3)); }
	inline ReadOnlyCollection_1_t297610732 * get_members_3() const { return ___members_3; }
	inline ReadOnlyCollection_1_t297610732 ** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(ReadOnlyCollection_1_t297610732 * value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWEXPRESSION_T1271006003_H
#ifndef PARAMETEREXPRESSION_T1118422084_H
#define PARAMETEREXPRESSION_T1118422084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t1118422084  : public Expression_t1588164026
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ParameterExpression_t1118422084, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETEREXPRESSION_T1118422084_H
#ifndef TYPEBINARYEXPRESSION_T2086022908_H
#define TYPEBINARYEXPRESSION_T2086022908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypeBinaryExpression
struct  TypeBinaryExpression_t2086022908  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::expression
	Expression_t1588164026 * ___expression_2;
	// System.Type System.Linq.Expressions.TypeBinaryExpression::type_operand
	Type_t * ___type_operand_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2086022908, ___expression_2)); }
	inline Expression_t1588164026 * get_expression_2() const { return ___expression_2; }
	inline Expression_t1588164026 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t1588164026 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier((&___expression_2), value);
	}

	inline static int32_t get_offset_of_type_operand_3() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2086022908, ___type_operand_3)); }
	inline Type_t * get_type_operand_3() const { return ___type_operand_3; }
	inline Type_t ** get_address_of_type_operand_3() { return &___type_operand_3; }
	inline void set_type_operand_3(Type_t * value)
	{
		___type_operand_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_operand_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBINARYEXPRESSION_T2086022908_H
#ifndef UNARYEXPRESSION_T3914580921_H
#define UNARYEXPRESSION_T3914580921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t3914580921  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t1588164026 * ___operand_2;

public:
	inline static int32_t get_offset_of_operand_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___operand_2)); }
	inline Expression_t1588164026 * get_operand_2() const { return ___operand_2; }
	inline Expression_t1588164026 ** get_address_of_operand_2() { return &___operand_2; }
	inline void set_operand_2(Expression_t1588164026 * value)
	{
		___operand_2 = value;
		Il2CppCodeGenWriteBarrier((&___operand_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNARYEXPRESSION_T3914580921_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef TRANSITIONTIME_T449921781_H
#define TRANSITIONTIME_T449921781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_t449921781 
{
public:
	// System.DateTime System.TimeZoneInfo/TransitionTime::timeOfDay
	DateTime_t3738529785  ___timeOfDay_0;
	// System.Int32 System.TimeZoneInfo/TransitionTime::month
	int32_t ___month_1;
	// System.Int32 System.TimeZoneInfo/TransitionTime::day
	int32_t ___day_2;
	// System.Int32 System.TimeZoneInfo/TransitionTime::week
	int32_t ___week_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::isFixedDateRule
	bool ___isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___timeOfDay_0)); }
	inline DateTime_t3738529785  get_timeOfDay_0() const { return ___timeOfDay_0; }
	inline DateTime_t3738529785 * get_address_of_timeOfDay_0() { return &___timeOfDay_0; }
	inline void set_timeOfDay_0(DateTime_t3738529785  value)
	{
		___timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___month_1)); }
	inline int32_t get_month_1() const { return ___month_1; }
	inline int32_t* get_address_of_month_1() { return &___month_1; }
	inline void set_month_1(int32_t value)
	{
		___month_1 = value;
	}

	inline static int32_t get_offset_of_day_2() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___day_2)); }
	inline int32_t get_day_2() const { return ___day_2; }
	inline int32_t* get_address_of_day_2() { return &___day_2; }
	inline void set_day_2(int32_t value)
	{
		___day_2 = value;
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___week_3)); }
	inline int32_t get_week_3() const { return ___week_3; }
	inline int32_t* get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(int32_t value)
	{
		___week_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___isFixedDateRule_5)); }
	inline bool get_isFixedDateRule_5() const { return ___isFixedDateRule_5; }
	inline bool* get_address_of_isFixedDateRule_5() { return &___isFixedDateRule_5; }
	inline void set_isFixedDateRule_5(bool value)
	{
		___isFixedDateRule_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_pinvoke
{
	DateTime_t3738529785  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_com
{
	DateTime_t3738529785  ___timeOfDay_0;
	int32_t ___month_1;
	int32_t ___day_2;
	int32_t ___week_3;
	int32_t ___dayOfWeek_4;
	int32_t ___isFixedDateRule_5;
};
#endif // TRANSITIONTIME_T449921781_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H
#ifndef ADJUSTMENTRULE_T74449909_H
#define ADJUSTMENTRULE_T74449909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t74449909  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateEnd
	DateTime_t3738529785  ___dateEnd_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::dateStart
	DateTime_t3738529785  ___dateStart_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::daylightDelta
	TimeSpan_t881159249  ___daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionEnd
	TransitionTime_t449921781  ___daylightTransitionEnd_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::daylightTransitionStart
	TransitionTime_t449921781  ___daylightTransitionStart_4;

public:
	inline static int32_t get_offset_of_dateEnd_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___dateEnd_0)); }
	inline DateTime_t3738529785  get_dateEnd_0() const { return ___dateEnd_0; }
	inline DateTime_t3738529785 * get_address_of_dateEnd_0() { return &___dateEnd_0; }
	inline void set_dateEnd_0(DateTime_t3738529785  value)
	{
		___dateEnd_0 = value;
	}

	inline static int32_t get_offset_of_dateStart_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___dateStart_1)); }
	inline DateTime_t3738529785  get_dateStart_1() const { return ___dateStart_1; }
	inline DateTime_t3738529785 * get_address_of_dateStart_1() { return &___dateStart_1; }
	inline void set_dateStart_1(DateTime_t3738529785  value)
	{
		___dateStart_1 = value;
	}

	inline static int32_t get_offset_of_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightDelta_2)); }
	inline TimeSpan_t881159249  get_daylightDelta_2() const { return ___daylightDelta_2; }
	inline TimeSpan_t881159249 * get_address_of_daylightDelta_2() { return &___daylightDelta_2; }
	inline void set_daylightDelta_2(TimeSpan_t881159249  value)
	{
		___daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionEnd_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightTransitionEnd_3)); }
	inline TransitionTime_t449921781  get_daylightTransitionEnd_3() const { return ___daylightTransitionEnd_3; }
	inline TransitionTime_t449921781 * get_address_of_daylightTransitionEnd_3() { return &___daylightTransitionEnd_3; }
	inline void set_daylightTransitionEnd_3(TransitionTime_t449921781  value)
	{
		___daylightTransitionEnd_3 = value;
	}

	inline static int32_t get_offset_of_daylightTransitionStart_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___daylightTransitionStart_4)); }
	inline TransitionTime_t449921781  get_daylightTransitionStart_4() const { return ___daylightTransitionStart_4; }
	inline TransitionTime_t449921781 * get_address_of_daylightTransitionStart_4() { return &___daylightTransitionStart_4; }
	inline void set_daylightTransitionStart_4(TransitionTime_t449921781  value)
	{
		___daylightTransitionStart_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADJUSTMENTRULE_T74449909_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeySizes_t85027896 * m_Items[1];

public:
	inline KeySizes_t85027896 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeySizes_t85027896 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeySizes_t85027896 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline KeySizes_t85027896 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeySizes_t85027896 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeySizes_t85027896 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AdjustmentRule_t74449909 * m_Items[1];

public:
	inline AdjustmentRule_t74449909 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AdjustmentRule_t74449909 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AdjustmentRule_t74449909 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AdjustmentRule_t74449909 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AdjustmentRule_t74449909 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AdjustmentRule_t74449909 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3533048922_gshared (ReadOnlyCollection_1_t4292682451 * __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ReadOnlyCollection_1_get_Item_m3234599553_gshared (ReadOnlyCollection_1_t4292682451 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4064694223_gshared (Dictionary_2_t1396226614 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR TimeType_t2507513283  Dictionary_2_get_Item_m2315657164_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t298337405  List_1_get_Item_m2470931760_gshared (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  KeyValuePair_2_get_Key_m2071921741_gshared (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeType_t2507513283  KeyValuePair_2_get_Value_m3123410994_gshared (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947837680_gshared (List_1_t1770412147 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m1416767016_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m224509051_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m107019914_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m670166897_gshared (Dictionary_2_t1396226614 * __this, int32_t p0, TimeType_t2507513283  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2598981433_gshared (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m2324111314_gshared (KeyValuePair_2_t298337405 * __this, DateTime_t3738529785  p0, TimeType_t2507513283  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1397479321_gshared (List_1_t1770412147 * __this, KeyValuePair_2_t298337405  p0, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C" IL2CPP_METHOD_ATTR RandomNumberGenerator_t386037858 * RandomNumberGenerator_Create_m4162970280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" IL2CPP_METHOD_ATTR RandomNumberGenerator_t386037858 * KeyBuilder_get_Rng_m3373220441 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* KeyBuilder_IV_m3340234014 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method);
// System.Object System.Array::Clone()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m2672907798 (RuntimeArray * __this, const RuntimeMethod* method);
// System.String Locale::GetText(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m2427493201 (RuntimeObject * __this /* static, unused */, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m503735289 (CryptographicException_t248831461 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Clear_m2231608178 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3095902440 (NotImplementedException_t3489357830 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m1626635120 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m3603759869 (ObjectDisposedException_t21392786 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_CheckInput_m2092289040 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void CryptographicException__ctor_m3803155940 (CryptographicException_t248831461 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" IL2CPP_METHOD_ATTR bool SymmetricTransform_get_KeepLastBlock_m2492071306 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SymmetricTransform_InternalTransformBlock_m1743612142 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_Random_m3740038270 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_ThrowBadPaddingException_m2898061954 (SymmetricTransform_t3802591843 * __this, int32_t ___padding0, int32_t ___length1, int32_t ___position2, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricTransform_FinalEncrypt_m748885414 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricTransform_FinalDecrypt_m764004682 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m2499432361 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C" IL2CPP_METHOD_ATTR void Expression__ctor_m2516416328 (Expression_t1588164026 * __this, int32_t ___node_type0, Type_t * ___type1, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m695496964 (RuntimeObject * __this /* static, unused */, ElementInit_t2682486961 * ___init0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m3553691067 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ConstantExpression::.ctor(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR void ConstantExpression__ctor_m150340203 (ConstantExpression_t3613654278 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR ConstantExpression_t3613654278 * Expression_Constant_m374760797 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsNullable_m780193409 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsAssignableTo_m3054773707 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, Type_t * ___type1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Extensions_GetInvokeMethod_m2591588064 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m3216249872 (ReadOnlyCollection_1_t2330998371 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t2330998371 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m3533048922_gshared)(__this, method);
}
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>::get_Item(System.Int32)
inline ParameterExpression_t1118422084 * ReadOnlyCollection_1_get_Item_m1189576603 (ReadOnlyCollection_1_t2330998371 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ParameterExpression_t1118422084 * (*) (ReadOnlyCollection_1_t2330998371 *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m3234599553_gshared)(__this, p0, method);
}
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C" IL2CPP_METHOD_ATTR Type_t * Expression_get_Type_m3318651915 (Expression_t1588164026 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Expression_CanAssign_m2137729393 (RuntimeObject * __this /* static, unused */, Type_t * ___target0, Type_t * ___source1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsExpression_m3809696797 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method);
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR UnaryExpression_t3914580921 * Expression_Quote_m2632568450 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR void Expression_CheckNonGenericMethod_m3227574805 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___method0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_m2399864271 (MethodBase_t * __this, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Linq.Expressions.Expression::GetAssociatedProperty(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Expression_GetAssociatedProperty_m3680799355 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR void MemberExpression__ctor_m4019112431 (MemberExpression_t2956213603 * __this, Expression_t1588164026 * ___expression0, MemberInfo_t * ___member1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
extern "C" IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m2387618479 (UnaryExpression_t3914580921 * __this, int32_t ___node_type0, Expression_t1588164026 * ___operand1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m583967485 (ExpressionVisitor_t1561124052 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter__ctor_m3872905865 (ExpressionPrinter_t2120383524 * __this, StringBuilder_t * ___builder0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter__ctor_m1950713947 (ExpressionPrinter_t2120383524 * __this, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_m3317489284 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1640838743 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m921870684 (StringBuilder_t * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::get_AddMethod()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ElementInit_get_AddMethod_m1221910039 (ElementInit_t2682486961 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m3624003222 (ExpressionPrinter_t2120383524 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m2213693087 (ExpressionPrinter_t2120383524 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * ElementInit_get_Arguments_m4152899655 (ElementInit_t2682486961 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t Expression_get_NodeType_m2930019583 (Expression_t1588164026 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m2798477873 (ExpressionPrinter_t2120383524 * __this, String_t* ___str0, ObjectU5BU5D_t2843939325* ___objs1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * UnaryExpression_get_Operand_m4259740027 (UnaryExpression_t3914580921 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR bool ExpressionPrinter_IsBoolean_m3915202565 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * BinaryExpression_get_Left_m2696259424 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * BinaryExpression_get_Right_m4063605363 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_PrintArrayIndex_m3909025307 (ExpressionPrinter_t2120383524 * __this, BinaryExpression_t77573129 * ___index0, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_OperatorToString_m2097423961 (RuntimeObject * __this /* static, unused */, BinaryExpression_t77573129 * ___binary0, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * TypeBinaryExpression_get_Expression_m3342510543 (TypeBinaryExpression_t2086022908 * __this, const RuntimeMethod* method);
// System.Type System.Linq.Expressions.TypeBinaryExpression::get_TypeOperand()
extern "C" IL2CPP_METHOD_ATTR Type_t * TypeBinaryExpression_get_TypeOperand_m354187380 (TypeBinaryExpression_t2086022908 * __this, const RuntimeMethod* method);
// System.Object System.Linq.Expressions.ConstantExpression::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstantExpression_get_Value_m1505431025 (ConstantExpression_t3613654278 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ExpressionPrinter_HasStringRepresentation_m1491716173 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_Test()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_Test_m2318551020 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfTrue()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_IfTrue_m2644523070 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfFalse()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_IfFalse_m2385420502 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ParameterExpression::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* ParameterExpression_get_Name_m1531348536 (ParameterExpression_t1118422084 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MemberExpression_get_Expression_m2281151650 (MemberExpression_t2956213603 * __this, const RuntimeMethod* method);
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_get_Member_m322166973 (MemberExpression_t2956213603 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MethodCallExpression_get_Object_m280553409 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * MethodCallExpression_get_Method_m910238317 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * MethodCallExpression_get_Arguments_m122658011 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method);
// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::get_Member()
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * MemberBinding_get_Member_m3336797922 (MemberBinding_t265491700 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MemberAssignment_get_Expression_m1732568863 (MemberAssignment_t1201848431 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::get_Bindings()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1478067987 * MemberMemberBinding_get_Bindings_m1599294955 (MemberMemberBinding_t3826576684 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Linq.Expressions.MemberBinding>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m1086995192 (Action_1_t437959295 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t437959295 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::get_Initializers()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3895063248 * MemberListBinding_get_Initializers_m460074968 (MemberListBinding_t3353502159 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Linq.Expressions.ElementInit>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m521837620 (Action_1_t2854954556 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2854954556 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2330998371 * LambdaExpression_get_Parameters_m3130715867 (LambdaExpression_t3131094331 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m757341569 (Action_1_t1290889679 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1290889679 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * LambdaExpression_get_Body_m872577278 (LambdaExpression_t3131094331 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::get_Members()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t297610732 * NewExpression_get_Members_m212325048 (NewExpression_t1271006003 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m2483166938 (ReadOnlyCollection_1_t297610732 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t297610732 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m3533048922_gshared)(__this, method);
}
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>::get_Item(System.Int32)
inline MemberInfo_t * ReadOnlyCollection_1_get_Item_m2250468099 (ReadOnlyCollection_1_t297610732 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (ReadOnlyCollection_1_t297610732 *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m3234599553_gshared)(__this, p0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * NewExpression_get_Arguments_m1504132429 (NewExpression_t1271006003 * __this, const RuntimeMethod* method);
// !0 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
inline Expression_t1588164026 * ReadOnlyCollection_1_get_Item_m3207760739 (ReadOnlyCollection_1_t2800740313 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Expression_t1588164026 * (*) (ReadOnlyCollection_1_t2800740313 *, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m3234599553_gshared)(__this, p0, method);
}
// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::get_NewExpression()
extern "C" IL2CPP_METHOD_ATTR NewExpression_t1271006003 * MemberInitExpression_get_NewExpression_m1059333861 (MemberInitExpression_t676945469 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::get_Bindings()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1478067987 * MemberInitExpression_get_Bindings_m1935169625 (MemberInitExpression_t676945469 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::get_NewExpression()
extern "C" IL2CPP_METHOD_ATTR NewExpression_t1271006003 * ListInitExpression_get_NewExpression_m674899584 (ListInitExpression_t4000042569 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::get_Initializers()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3895063248 * ListInitExpression_get_Initializers_m501817842 (ListInitExpression_t4000042569 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::get_Expressions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * NewArrayExpression_get_Expressions_m3464497019 (NewArrayExpression_t679298166 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * InvocationExpression_get_Expression_m4051150720 (InvocationExpression_t3698930233 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * InvocationExpression_get_Arguments_m3727914624 (InvocationExpression_t3698930233 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_m2443279563 (ReadOnlyCollection_1_t2800740313 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t2800740313 *, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m3533048922_gshared)(__this, method);
}
// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t MemberBinding_get_BindingType_m4112689226 (MemberBinding_t265491700 * __this, const RuntimeMethod* method);
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" IL2CPP_METHOD_ATTR LambdaExpression_t3131094331 * BinaryExpression_get_Conversion_m3082139200 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Linq.Expressions.Expression>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2050332088 (Action_1_t1760631621 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1760631621 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsGenericInstanceOf_m2766332956 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_ArrayTypeIsAssignableTo_m2248005716 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___candidate1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m1197120913 (Type_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
extern "C" IL2CPP_METHOD_ATTR bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method);
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m2797236515 (RuntimeObject * __this /* static, unused */, MemberBinding_t265491700 * ___binding0, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SymmetricAlgorithm__ctor_m467277132 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KeySizes__ctor_m3113946058 (KeySizes_t85027896 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.Aes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Aes__ctor_m178909601 (Aes_t1218282760 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* KeyBuilder_Key_m2503211157 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform__ctor_m3143546745 (AesTransform_t2957123611 * __this, Aes_t1218282760 * ___algo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___key2, ByteU5BU5D_t4116647657* ___iv3, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricAlgorithm_get_IV_m1875559108 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_IV_m3196220308 (SymmetricAlgorithm_t4254223087 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricAlgorithm_get_Key_m3241860519 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_Key_m1775642191 (SymmetricAlgorithm_t4254223087 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
extern "C" IL2CPP_METHOD_ATTR int32_t SymmetricAlgorithm_get_KeySize_m4185004893 (SymmetricAlgorithm_t4254223087 * __this, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricAlgorithm_set_KeySize_m3805756466 (SymmetricAlgorithm_t4254223087 * __this, int32_t p0, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AesManaged_get_Key_m538801386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method);
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AesManaged_get_IV_m118095902 (AesManaged_t1129950597 * __this, const RuntimeMethod* method);
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateDecryptor_m692040246 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method);
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateEncryptor_m2294080233 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SymmetricAlgorithm_Dispose_m1120980942 (SymmetricAlgorithm_t4254223087 * __this, bool p0, const RuntimeMethod* method);
// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform__ctor_m2693628991 (SymmetricTransform_t3802591843 * __this, SymmetricAlgorithm_t4254223087 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___rgbIV2, const RuntimeMethod* method);
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t AesTransform_SubByte_m3350159546 (AesTransform_t2957123611 * __this, uint32_t ___a0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform_Encrypt128_m424393011 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform_Decrypt128_m3018534522 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m3689759052 (TimeSpan_t881159249 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_GreaterThan_m734703194 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_LessThan_m1594498345 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeZoneException__ctor_m4131156752 (InvalidTimeZoneException_t4066718130 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  AdjustmentRule_get_DaylightDelta_m2159274191 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeSpan_op_Addition_m672714982 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AdjustmentRule_get_DateStart_m2176962503 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m3768590082 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AdjustmentRule_get_DateEnd_m3164615624 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m1022058599 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268 (RuntimeObject * __this /* static, unused */, String_t* ___id0, String_t* ___filepath1, const RuntimeMethod* method);
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_TimeZoneDirectory_m1493272576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.TimeZoneNotFoundException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TimeZoneNotFoundException__ctor_m2966108609 (TimeZoneNotFoundException_t171073523 * __this, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t p0, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m4187381152 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m1792093365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TimeZoneInfo__ctor_m1956250117 (TimeZoneInfo_t161405854 * __this, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method);
// System.String System.TimeZoneInfo::get_Id()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_Id_m3716673190 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_HasSameRules_m697432081 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_ValidTZFile_m3505397244 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___length1, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_ParseTZBuffer_m3851257210 (RuntimeObject * __this /* static, unused */, String_t* ___id0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 System.String::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t String_GetHashCode_m1906374149 (String_t* __this, const RuntimeMethod* method);
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C" IL2CPP_METHOD_ATTR AdjustmentRuleU5BU5D_t1469475992* TimeZoneInfo_GetAdjustmentRules_m496065111 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t AdjustmentRule_GetHashCode_m3136432906 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::IsDaylightSavingTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_IsDaylightSavingTime_m2475480634 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method);
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo::GetApplicableRule(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR AdjustmentRule_t74449909 * TimeZoneInfo_GetApplicableRule_m3152592286 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method);
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeZoneInfo_get_BaseUtcOffset_m808429276 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_m2467851530 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C" IL2CPP_METHOD_ATTR bool AdjustmentRule_Equals_m4095462908 (AdjustmentRule_t74449909 * __this, AdjustmentRule_t74449909 * ___other0, const RuntimeMethod* method);
// System.DateTimeKind System.DateTime::get_Kind()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m2154871796 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::IsInvalidTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_IsInvalidTime_m1886861930 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::get_Utc()
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_get_Utc_m4037366733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::get_SupportsDaylightSavingTime()
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method);
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_get_Local_m3767312181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.DateTime::IsDaylightSavingTime()
extern "C" IL2CPP_METHOD_ATTR bool DateTime_IsDaylightSavingTime_m2632700238 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::ToUniversalTime()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_ToUniversalTime_m1945318289 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_SpecifyKind_m3332658812 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, int32_t p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Date()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Date_m46742767 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionStart_m3488892433 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m1184003812 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo::TransitionPoint(System.TimeZoneInfo/TransitionTime,System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TimeZoneInfo_TransitionPoint_m2194238407 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___transition0, int32_t ___year1, const RuntimeMethod* method);
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionEnd()
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionEnd_m3747881060 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1950274531 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_op_Subtraction_m529926081 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThanOrEqual_m674703316 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool DateTime_op_LessThan_m2497205152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_op_Addition_m1857121695 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_DisplayName_m3871974074 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m1557984015 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_m1297598877 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m12900168 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::get_TimeOfDay()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  DateTime_get_TimeOfDay_m82064893 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.DayOfWeek System.DateTime::get_DayOfWeek()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_DayOfWeek_m2326490739 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m3334751603 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_m3191031940 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_DaysInMonth_m2587936260 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m1089563119 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TimeZoneInfo_SwapInt32_m4051795925 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, const RuntimeMethod* method);
// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeZoneException__ctor_m6234683 (InvalidTimeZoneException_t4066718130 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t736164020 * TimeZoneInfo_ParseAbbreviations_m1471889884 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1396226614 * TimeZoneInfo_ParseTimesTypes_m1754682716 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t736164020 * ___abbreviations3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C" IL2CPP_METHOD_ATTR List_1_t1770412147 * TimeZoneInfo_ParseTransitions_m542357583 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t1396226614 * ___time_types3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Count()
inline int32_t Dictionary_2_get_Count_m4064694223 (Dictionary_2_t1396226614 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t1396226614 *, const RuntimeMethod*))Dictionary_2_get_Count_m4064694223_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::get_Item(!0)
inline TimeType_t2507513283  Dictionary_2_get_Item_m2315657164 (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  TimeType_t2507513283  (*) (Dictionary_2_t1396226614 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2315657164_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::.ctor()
inline void List_1__ctor_m27745599 (List_1_t1546524651 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Item(System.Int32)
inline KeyValuePair_2_t298337405  List_1_get_Item_m2470931760 (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t298337405  (*) (List_1_t1770412147 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2470931760_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Key()
inline DateTime_t3738529785  KeyValuePair_2_get_Key_m2071921741 (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method)
{
	return ((  DateTime_t3738529785  (*) (KeyValuePair_2_t298337405 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2071921741_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::get_Value()
inline TimeType_t2507513283  KeyValuePair_2_get_Value_m3123410994 (KeyValuePair_2_t298337405 * __this, const RuntimeMethod* method)
{
	return ((  TimeType_t2507513283  (*) (KeyValuePair_2_t298337405 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3123410994_gshared)(__this, method);
}
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C" IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m1566006993 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m1623500273 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  TransitionTime_CreateFixedDateRule_m488639024 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_op_Inequality_m1903374519 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method);
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR AdjustmentRule_t74449909 * AdjustmentRule_CreateAdjustmentRule_m1020400594 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::Add(!0)
inline void List_1_Add_m1698810603 (List_1_t1546524651 * __this, AdjustmentRule_t74449909 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1546524651 *, AdjustmentRule_t74449909 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeSpan_op_Subtraction_m3592306516 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::get_Count()
inline int32_t List_1_get_Count_m947837680 (List_1_t1770412147 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1770412147 *, const RuntimeMethod*))List_1_get_Count_m947837680_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::get_Count()
inline int32_t List_1_get_Count_m2451877167 (List_1_t1546524651 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C" IL2CPP_METHOD_ATTR List_1_t1546524651 * TimeZoneInfo_ValidateRules_m1341992406 (RuntimeObject * __this /* static, unused */, List_1_t1546524651 * ___adjustmentRules0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::ToArray()
inline AdjustmentRuleU5BU5D_t1469475992* List_1_ToArray_m3286616822 (List_1_t1546524651 * __this, const RuntimeMethod* method)
{
	return ((  AdjustmentRuleU5BU5D_t1469475992* (*) (List_1_t1546524651 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m3151472709 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>::Remove(!0)
inline bool List_1_Remove_m1862724733 (List_1_t1546524651 * __this, AdjustmentRule_t74449909 * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1546524651 *, AdjustmentRule_t74449909 *, const RuntimeMethod*))List_1_Remove_m1416767016_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_m4261191612 (Dictionary_2_t736164020 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t736164020 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m1718909353 (Dictionary_2_t736164020 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t736164020 *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m3238060835 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String System.Text.StringBuilder::ToString(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_m774364392 (StringBuilder_t * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m224509051 (Dictionary_2_t1396226614 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1396226614 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m224509051_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m823070101 (Dictionary_2_t736164020 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t736164020 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m107019914_gshared)(__this, p0, method);
}
// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void TimeType__ctor_m1663688892 (TimeType_t2507513283 * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>::Add(!0,!1)
inline void Dictionary_2_Add_m670166897 (Dictionary_2_t1396226614 * __this, int32_t p0, TimeType_t2507513283  p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1396226614 *, int32_t, TimeType_t2507513283 , const RuntimeMethod*))Dictionary_2_Add_m670166897_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::.ctor(System.Int32)
inline void List_1__ctor_m2598981433 (List_1_t1770412147 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1770412147 *, int32_t, const RuntimeMethod*))List_1__ctor_m2598981433_gshared)(__this, p0, method);
}
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TimeZoneInfo_DateTimeFromUnixTime_m2151402451 (RuntimeObject * __this /* static, unused */, int64_t ___unix_time0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m2324111314 (KeyValuePair_2_t298337405 * __this, DateTime_t3738529785  p0, TimeType_t2507513283  p1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t298337405 *, DateTime_t3738529785 , TimeType_t2507513283 , const RuntimeMethod*))KeyValuePair_2__ctor_m2324111314_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>::Add(!0)
inline void List_1_Add_m1397479321 (List_1_t1770412147 * __this, KeyValuePair_2_t298337405  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1770412147 *, KeyValuePair_2_t298337405 , const RuntimeMethod*))List_1_Add_m1397479321_gshared)(__this, p0, method);
}
// System.DateTime System.DateTime::AddSeconds(System.Double)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_AddSeconds_m332574389 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_op_Equality_m844747352 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m495727949 (AdjustmentRule_t74449909 * __this, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C" IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m1999885032 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method);
// System.Int32 System.DateTime::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_m2261847002 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeSpan_GetHashCode_m1939414618 (TimeSpan_t881159249 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m2153693963 (TransitionTime_t449921781 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeType_ToString_m3568850299 (TimeType_t2507513283 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime__ctor_m1241469383 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime__ctor_m1012552555 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime_GetObjectData_m565919319 (TransitionTime_t449921781 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m2918964558 (TransitionTime_t449921781 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m2330892423 (TransitionTime_t449921781 * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime_OnDeserialization_m482900757 (TransitionTime_t449921781 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method);
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
// System.String Locale::GetText(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m1626635120 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___msg0;
		return L_0;
	}
}
// System.String Locale::GetText(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* Locale_GetText_m2427493201 (RuntimeObject * __this /* static, unused */, String_t* ___fmt0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Locale_GetText_m2427493201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___fmt0;
		ObjectU5BU5D_t2843939325* L_1 = ___args1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m630303134(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C" IL2CPP_METHOD_ATTR RandomNumberGenerator_t386037858 * KeyBuilder_get_Rng_m3373220441 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_get_Rng_m3373220441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RandomNumberGenerator_t386037858 * L_0 = ((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->get_rng_0();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		RandomNumberGenerator_t386037858 * L_1 = RandomNumberGenerator_Create_m4162970280(NULL /*static, unused*/, /*hidden argument*/NULL);
		((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->set_rng_0(L_1);
	}

IL_0014:
	{
		RandomNumberGenerator_t386037858 * L_2 = ((KeyBuilder_t2049230356_StaticFields*)il2cpp_codegen_static_fields_for(KeyBuilder_t2049230356_il2cpp_TypeInfo_var))->get_rng_0();
		return L_2;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* KeyBuilder_Key_m2503211157 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_Key_m2503211157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		RandomNumberGenerator_t386037858 * L_2 = KeyBuilder_get_Rng_m3373220441(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* KeyBuilder_IV_m3340234014 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyBuilder_IV_m3340234014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___size0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		RandomNumberGenerator_t386037858 * L_2 = KeyBuilder_get_Rng_m3373220441(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
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
// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform__ctor_m2693628991 (SymmetricTransform_t3802591843 * __this, SymmetricAlgorithm_t4254223087 * ___symmAlgo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___rgbIV2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform__ctor_m2693628991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SymmetricAlgorithm_t4254223087 * L_0 = ___symmAlgo0;
		__this->set_algo_0(L_0);
		bool L_1 = ___encryption1;
		__this->set_encrypt_1(L_1);
		SymmetricAlgorithm_t4254223087 * L_2 = __this->get_algo_0();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_2);
		__this->set_BlockSizeByte_2(((int32_t)((int32_t)L_3>>(int32_t)3)));
		ByteU5BU5D_t4116647657* L_4 = ___rgbIV2;
		if (L_4)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_6 = KeyBuilder_IV_m3340234014(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		___rgbIV2 = L_6;
		goto IL_004c;
	}

IL_003f:
	{
		ByteU5BU5D_t4116647657* L_7 = ___rgbIV2;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		RuntimeObject * L_8 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_7, /*hidden argument*/NULL);
		___rgbIV2 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_8, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		ByteU5BU5D_t4116647657* L_9 = ___rgbIV2;
		NullCheck(L_9);
		int32_t L_10 = __this->get_BlockSizeByte_2();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) >= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		ByteU5BU5D_t4116647657* L_13 = ___rgbIV2;
		NullCheck(L_13);
		int32_t L_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))));
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		int32_t L_17 = __this->get_BlockSizeByte_2();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_19);
		String_t* L_20 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2387040967, L_16, /*hidden argument*/NULL);
		V_0 = L_20;
		String_t* L_21 = V_0;
		CryptographicException_t248831461 * L_22 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, SymmetricTransform__ctor_m2693628991_RuntimeMethod_var);
	}

IL_008b:
	{
		int32_t L_23 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_24 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->set_temp_3(L_24);
		ByteU5BU5D_t4116647657* L_25 = ___rgbIV2;
		ByteU5BU5D_t4116647657* L_26 = __this->get_temp_3();
		int32_t L_27 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_28 = ___rgbIV2;
		NullCheck(L_28);
		int32_t L_29 = Math_Min_m3468062251(NULL /*static, unused*/, L_27, (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), /*hidden argument*/NULL);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_25, 0, (RuntimeArray *)(RuntimeArray *)L_26, 0, L_29, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_31 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_30);
		__this->set_temp2_4(L_31);
		SymmetricAlgorithm_t4254223087 * L_32 = __this->get_algo_0();
		NullCheck(L_32);
		int32_t L_33 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize() */, L_32);
		__this->set_FeedBackByte_7(((int32_t)((int32_t)L_33>>(int32_t)3)));
		int32_t L_34 = __this->get_FeedBackByte_7();
		if (!L_34)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_35 = __this->get_BlockSizeByte_2();
		int32_t L_36 = __this->get_FeedBackByte_7();
		__this->set_FeedBackIter_8(((int32_t)((int32_t)L_35/(int32_t)L_36)));
	}

IL_00fa:
	{
		int32_t L_37 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_38 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_37);
		__this->set_workBuff_5(L_38);
		int32_t L_39 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_40 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->set_workout_6(L_40);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_System_IDisposable_Dispose_m3657987482 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, (bool)1);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_Finalize_m4129642865 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(8 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_Dispose_m375394407 (SymmetricTransform_t3802591843 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_disposed_9();
		if (L_0)
		{
			goto IL_004a;
		}
	}
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = __this->get_temp_3();
		int32_t L_3 = __this->get_BlockSizeByte_2();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, 0, L_3, /*hidden argument*/NULL);
		__this->set_temp_3((ByteU5BU5D_t4116647657*)NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_temp2_4();
		int32_t L_5 = __this->get_BlockSizeByte_2();
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, 0, L_5, /*hidden argument*/NULL);
		__this->set_temp2_4((ByteU5BU5D_t4116647657*)NULL);
	}

IL_0043:
	{
		__this->set_m_disposed_9((bool)1);
	}

IL_004a:
	{
		return;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" IL2CPP_METHOD_ATTR bool SymmetricTransform_get_CanReuseTransform_m3495714228 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_Transform_m1683494363 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_Transform_m1683494363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = __this->get_algo_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0054;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_006e;
	}

IL_002d:
	{
		ByteU5BU5D_t4116647657* L_3 = ___input0;
		ByteU5BU5D_t4116647657* L_4 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_3, L_4);
		goto IL_0093;
	}

IL_003a:
	{
		ByteU5BU5D_t4116647657* L_5 = ___input0;
		ByteU5BU5D_t4116647657* L_6 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[]) */, __this, L_5, L_6);
		goto IL_0093;
	}

IL_0047:
	{
		ByteU5BU5D_t4116647657* L_7 = ___input0;
		ByteU5BU5D_t4116647657* L_8 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[]) */, __this, L_7, L_8);
		goto IL_0093;
	}

IL_0054:
	{
		ByteU5BU5D_t4116647657* L_9 = ___input0;
		ByteU5BU5D_t4116647657* L_10 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(14 /* System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[]) */, __this, L_9, L_10);
		goto IL_0093;
	}

IL_0061:
	{
		ByteU5BU5D_t4116647657* L_11 = ___input0;
		ByteU5BU5D_t4116647657* L_12 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(15 /* System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		goto IL_0093;
	}

IL_006e:
	{
		SymmetricAlgorithm_t4254223087 * L_13 = __this->get_algo_0();
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode() */, L_13);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(CipherMode_t84635067_il2cpp_TypeInfo_var, &L_15);
		NullCheck((Enum_t4135868527 *)L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t4135868527 *)L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2609825863, L_17, /*hidden argument*/NULL);
		NotImplementedException_t3489357830 * L_19 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3095902440(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, SymmetricTransform_Transform_m1683494363_RuntimeMethod_var);
	}

IL_0093:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_CBC_m3648398454 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (!L_0)
		{
			goto IL_005c;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_temp_3();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint8_t*)L_3);
		ByteU5BU5D_t4116647657* L_5 = ___input0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_3) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4^(int32_t)L_8)))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_12 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_13 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_12, L_13);
		ByteU5BU5D_t4116647657* L_14 = ___output1;
		ByteU5BU5D_t4116647657* L_15 = __this->get_temp_3();
		int32_t L_16 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, 0, (RuntimeArray *)(RuntimeArray *)L_15, 0, L_16, /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_005c:
	{
		ByteU5BU5D_t4116647657* L_17 = ___input0;
		ByteU5BU5D_t4116647657* L_18 = __this->get_temp2_4();
		int32_t L_19 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, 0, L_19, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = ___input0;
		ByteU5BU5D_t4116647657* L_21 = ___output1;
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_20, L_21);
		V_1 = 0;
		goto IL_0097;
	}

IL_007f:
	{
		ByteU5BU5D_t4116647657* L_22 = ___output1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		uint8_t* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		int32_t L_25 = *((uint8_t*)L_24);
		ByteU5BU5D_t4116647657* L_26 = __this->get_temp_3();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		*((int8_t*)L_24) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25^(int32_t)L_29)))));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_33 = __this->get_temp2_4();
		ByteU5BU5D_t4116647657* L_34 = __this->get_temp_3();
		int32_t L_35 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_33, 0, (RuntimeArray *)(RuntimeArray *)L_34, 0, L_35, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_CFB_m1755507252 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (!L_0)
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 0;
		goto IL_0098;
	}

IL_0012:
	{
		ByteU5BU5D_t4116647657* L_1 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_2 = __this->get_temp2_4();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_1, L_2);
		V_1 = 0;
		goto IL_0043;
	}

IL_002b:
	{
		ByteU5BU5D_t4116647657* L_3 = ___output1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = __this->get_temp2_4();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___input0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9^(int32_t)L_14))))));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_FeedBackByte_7();
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_18 = __this->get_temp_3();
		int32_t L_19 = __this->get_FeedBackByte_7();
		ByteU5BU5D_t4116647657* L_20 = __this->get_temp_3();
		int32_t L_21 = __this->get_BlockSizeByte_2();
		int32_t L_22 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, (RuntimeArray *)(RuntimeArray *)L_20, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)L_22)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_23 = ___output1;
		int32_t L_24 = V_0;
		ByteU5BU5D_t4116647657* L_25 = __this->get_temp_3();
		int32_t L_26 = __this->get_BlockSizeByte_2();
		int32_t L_27 = __this->get_FeedBackByte_7();
		int32_t L_28 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_23, L_24, (RuntimeArray *)(RuntimeArray *)L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_27)), L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0098:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = __this->get_FeedBackIter_8();
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0150;
	}

IL_00a9:
	{
		V_2 = 0;
		goto IL_0144;
	}

IL_00b0:
	{
		__this->set_encrypt_1((bool)1);
		ByteU5BU5D_t4116647657* L_32 = __this->get_temp_3();
		ByteU5BU5D_t4116647657* L_33 = __this->get_temp2_4();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void Mono.Security.Cryptography.SymmetricTransform::ECB(System.Byte[],System.Byte[]) */, __this, L_32, L_33);
		__this->set_encrypt_1((bool)0);
		ByteU5BU5D_t4116647657* L_34 = __this->get_temp_3();
		int32_t L_35 = __this->get_FeedBackByte_7();
		ByteU5BU5D_t4116647657* L_36 = __this->get_temp_3();
		int32_t L_37 = __this->get_BlockSizeByte_2();
		int32_t L_38 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, L_35, (RuntimeArray *)(RuntimeArray *)L_36, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_39 = ___input0;
		int32_t L_40 = V_2;
		ByteU5BU5D_t4116647657* L_41 = __this->get_temp_3();
		int32_t L_42 = __this->get_BlockSizeByte_2();
		int32_t L_43 = __this->get_FeedBackByte_7();
		int32_t L_44 = __this->get_FeedBackByte_7();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, L_40, (RuntimeArray *)(RuntimeArray *)L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)), L_44, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_0134;
	}

IL_011c:
	{
		ByteU5BU5D_t4116647657* L_45 = ___output1;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		ByteU5BU5D_t4116647657* L_48 = __this->get_temp2_4();
		int32_t L_49 = V_3;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5D_t4116647657* L_52 = ___input0;
		int32_t L_53 = V_3;
		int32_t L_54 = V_2;
		NullCheck(L_52);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54));
		uint8_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47))), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_51^(int32_t)L_56))))));
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0134:
	{
		int32_t L_58 = V_3;
		int32_t L_59 = __this->get_FeedBackByte_7();
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_60 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0144:
	{
		int32_t L_61 = V_2;
		int32_t L_62 = __this->get_FeedBackIter_8();
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_00b0;
		}
	}

IL_0150:
	{
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_OFB_m3690147804 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_OFB_m3690147804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptographicException_t248831461 * L_0 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_0, _stringLiteral3478177746, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SymmetricTransform_OFB_m3690147804_RuntimeMethod_var);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_CTS_m764800021 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_CTS_m764800021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CryptographicException_t248831461 * L_0 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_0, _stringLiteral3430552138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SymmetricTransform_CTS_m764800021_RuntimeMethod_var);
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_CheckInput_m2092289040 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_CheckInput_m2092289040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___inputBuffer0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3152468735, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___inputOffset1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_3, _stringLiteral2167393519, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_0028:
	{
		int32_t L_4 = ___inputCount2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_5 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_5, _stringLiteral438779933, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_003f:
	{
		int32_t L_6 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_7 = ___inputBuffer0;
		NullCheck(L_7);
		int32_t L_8 = ___inputCount2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)L_8)))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_10, _stringLiteral3152468735, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, SymmetricTransform_CheckInput_m2092289040_RuntimeMethod_var);
	}

IL_005f:
	{
		return;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SymmetricTransform_TransformBlock_m851059707 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_TransformBlock_m851059707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_m_disposed_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral389898510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		SymmetricTransform_CheckInput_m2092289040(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = ___outputBuffer3;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral2053830539, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_7 = ___outputOffset4;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, _stringLiteral1561769044, _stringLiteral3073595182, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_0049:
	{
		ByteU5BU5D_t4116647657* L_9 = ___outputBuffer3;
		NullCheck(L_9);
		int32_t L_10 = ___inputCount2;
		int32_t L_11 = ___outputOffset4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))), (int32_t)L_10)), (int32_t)L_11));
		bool L_12 = __this->get_encrypt_1();
		if (L_12)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_13)))
		{
			goto IL_009c;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_14 = __this->get_algo_0();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_14);
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_16 = __this->get_algo_0();
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_16);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_009c;
		}
	}

IL_0087:
	{
		String_t* L_18 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_19 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_19, _stringLiteral2053830539, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_009c:
	{
		bool L_20 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_21 = V_0;
		int32_t L_22 = __this->get_BlockSizeByte_2();
		if ((((int32_t)0) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)))))
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_23 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_24 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_24, _stringLiteral2053830539, L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_00ca:
	{
		goto IL_010e;
	}

IL_00cf:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)0) <= ((int32_t)L_25)))
		{
			goto IL_010e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_26 = ___inputBuffer0;
		NullCheck(L_26);
		int32_t L_27 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_28 = ___outputBuffer3;
		NullCheck(L_28);
		int32_t L_29 = __this->get_BlockSizeByte_2();
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))), (int32_t)L_27)), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))))))) == ((uint32_t)L_29))))
		{
			goto IL_00f9;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_30 = ___outputBuffer3;
		NullCheck(L_30);
		int32_t L_31 = ___outputOffset4;
		___inputCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (int32_t)L_31));
		goto IL_010e;
	}

IL_00f9:
	{
		String_t* L_32 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral251636811, /*hidden argument*/NULL);
		CryptographicException_t248831461 * L_33 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m3803155940(L_33, _stringLiteral2053830539, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, NULL, SymmetricTransform_TransformBlock_m851059707_RuntimeMethod_var);
	}

IL_010e:
	{
		ByteU5BU5D_t4116647657* L_34 = ___inputBuffer0;
		int32_t L_35 = ___inputOffset1;
		int32_t L_36 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_37 = ___outputBuffer3;
		int32_t L_38 = ___outputOffset4;
		int32_t L_39 = SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}
}
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" IL2CPP_METHOD_ATTR bool SymmetricTransform_get_KeepLastBlock_m2492071306 (SymmetricTransform_t3802591843 * __this, const RuntimeMethod* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = __this->get_encrypt_1();
		if (L_0)
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_1 = __this->get_algo_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_3 = __this->get_algo_0();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_3);
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B4_0 = 0;
	}

IL_0030:
	{
		return (bool)G_B4_0;
	}
}
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SymmetricTransform_InternalTransformBlock_m1743612142 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, ByteU5BU5D_t4116647657* ___outputBuffer3, int32_t ___outputOffset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_InternalTransformBlock_m1743612142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___inputOffset1;
		V_0 = L_0;
		int32_t L_1 = ___inputCount2;
		int32_t L_2 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = ___inputCount2;
		int32_t L_4 = __this->get_BlockSizeByte_2();
		if (!((int32_t)((int32_t)L_3%(int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		CryptographicException_t248831461 * L_5 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_5, _stringLiteral3823085299, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SymmetricTransform_InternalTransformBlock_m1743612142_RuntimeMethod_var);
	}

IL_0026:
	{
		int32_t L_6 = ___inputCount2;
		int32_t L_7 = __this->get_BlockSizeByte_2();
		V_1 = ((int32_t)((int32_t)L_6/(int32_t)L_7));
		goto IL_0036;
	}

IL_0034:
	{
		V_1 = 1;
	}

IL_0036:
	{
		bool L_8 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1));
	}

IL_0045:
	{
		V_2 = 0;
		bool L_10 = __this->get_lastBlock_10();
		if (!L_10)
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_12 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_11, L_12);
		ByteU5BU5D_t4116647657* L_13 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_14 = ___outputBuffer3;
		int32_t L_15 = ___outputOffset4;
		int32_t L_16 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = ___outputOffset4;
		int32_t L_18 = __this->get_BlockSizeByte_2();
		___outputOffset4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = V_2;
		int32_t L_20 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)L_20));
		__this->set_lastBlock_10((bool)0);
	}

IL_0095:
	{
		V_3 = 0;
		goto IL_00f9;
	}

IL_009c:
	{
		ByteU5BU5D_t4116647657* L_21 = ___inputBuffer0;
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = __this->get_workBuff_5();
		int32_t L_24 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, L_22, (RuntimeArray *)(RuntimeArray *)L_23, 0, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_25 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_26 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_25, L_26);
		ByteU5BU5D_t4116647657* L_27 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_28 = ___outputBuffer3;
		int32_t L_29 = ___outputOffset4;
		int32_t L_30 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_27, 0, (RuntimeArray *)(RuntimeArray *)L_28, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		int32_t L_32 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)L_32));
		int32_t L_33 = ___outputOffset4;
		int32_t L_34 = __this->get_BlockSizeByte_2();
		___outputOffset4 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
		int32_t L_35 = V_2;
		int32_t L_36 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36));
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_38 = V_3;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_009c;
		}
	}
	{
		bool L_40 = SymmetricTransform_get_KeepLastBlock_m2492071306(__this, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0126;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = ___inputBuffer0;
		int32_t L_42 = V_0;
		ByteU5BU5D_t4116647657* L_43 = __this->get_workBuff_5();
		int32_t L_44 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_41, L_42, (RuntimeArray *)(RuntimeArray *)L_43, 0, L_44, /*hidden argument*/NULL);
		__this->set_lastBlock_10((bool)1);
	}

IL_0126:
	{
		int32_t L_45 = V_2;
		return L_45;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_Random_m3740038270 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_Random_m3740038270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		RandomNumberGenerator_t386037858 * L_0 = __this->get__rng_11();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RandomNumberGenerator_t386037858 * L_1 = RandomNumberGenerator_Create_m4162970280(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__rng_11(L_1);
	}

IL_0016:
	{
		int32_t L_2 = ___length2;
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		RandomNumberGenerator_t386037858 * L_4 = __this->get__rng_11();
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_4, L_5);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = ___buffer0;
		int32_t L_8 = ___start1;
		int32_t L_9 = ___length2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, 0, (RuntimeArray *)(RuntimeArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SymmetricTransform_ThrowBadPaddingException_m2898061954 (SymmetricTransform_t3802591843 * __this, int32_t ___padding0, int32_t ___length1, int32_t ___position2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_ThrowBadPaddingException_m2898061954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral2101785501, /*hidden argument*/NULL);
		int32_t L_1 = ___padding0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(PaddingMode_t2546806710_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2844511972(NULL /*static, unused*/, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = ___length1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral289204851, /*hidden argument*/NULL);
		int32_t L_8 = ___length1;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2844511972(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, L_6, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0039:
	{
		int32_t L_13 = ___position2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_0;
		String_t* L_15 = Locale_GetText_m1626635120(NULL /*static, unused*/, _stringLiteral4613441, /*hidden argument*/NULL);
		int32_t L_16 = ___position2;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m2844511972(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
	}

IL_005c:
	{
		String_t* L_21 = V_0;
		CryptographicException_t248831461 * L_22 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, SymmetricTransform_ThrowBadPaddingException_m2898061954_RuntimeMethod_var);
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricTransform_FinalEncrypt_m748885414 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_FinalEncrypt_m748885414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = ___inputCount2;
		int32_t L_1 = __this->get_BlockSizeByte_2();
		int32_t L_2 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_0/(int32_t)L_1)), (int32_t)L_2));
		int32_t L_3 = ___inputCount2;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4));
		int32_t L_5 = V_0;
		V_2 = L_5;
		SymmetricAlgorithm_t4254223087 * L_6 = __this->get_algo_0();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_6);
		V_8 = L_7;
		int32_t L_8 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0041;
			}
			case 3:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0041:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10));
		goto IL_00a8;
	}

IL_004f:
	{
		int32_t L_11 = ___inputCount2;
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_12 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_12;
	}

IL_005c:
	{
		int32_t L_13 = V_1;
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_14 = __this->get_algo_0();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_14);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_007e;
		}
	}
	{
		CryptographicException_t248831461 * L_16 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_16, _stringLiteral3246833729, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, SymmetricTransform_FinalEncrypt_m748885414_RuntimeMethod_var);
	}

IL_007e:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_19 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18)));
		V_3 = L_19;
		ByteU5BU5D_t4116647657* L_20 = ___inputBuffer0;
		int32_t L_21 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_22 = V_3;
		int32_t L_23 = ___inputCount2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, L_21, (RuntimeArray *)(RuntimeArray *)L_22, 0, L_23, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_24 = V_3;
		___inputBuffer0 = L_24;
		___inputOffset1 = 0;
		ByteU5BU5D_t4116647657* L_25 = V_3;
		NullCheck(L_25);
		___inputCount2 = (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length))));
		int32_t L_26 = ___inputCount2;
		V_2 = L_26;
	}

IL_00a3:
	{
		goto IL_00a8;
	}

IL_00a8:
	{
		int32_t L_27 = V_2;
		ByteU5BU5D_t4116647657* L_28 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_27);
		V_4 = L_28;
		V_5 = 0;
		goto IL_00e9;
	}

IL_00b8:
	{
		ByteU5BU5D_t4116647657* L_29 = ___inputBuffer0;
		int32_t L_30 = ___inputOffset1;
		int32_t L_31 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_32 = V_4;
		int32_t L_33 = V_5;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_29, L_30, L_31, L_32, L_33, /*hidden argument*/NULL);
		int32_t L_34 = ___inputOffset1;
		int32_t L_35 = __this->get_BlockSizeByte_2();
		___inputOffset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35));
		int32_t L_36 = V_5;
		int32_t L_37 = __this->get_BlockSizeByte_2();
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37));
		int32_t L_38 = V_2;
		int32_t L_39 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)L_39));
	}

IL_00e9:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_40) > ((int32_t)L_41)))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_42 = __this->get_BlockSizeByte_2();
		int32_t L_43 = V_1;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)L_43)))));
		SymmetricAlgorithm_t4254223087 * L_44 = __this->get_algo_0();
		NullCheck(L_44);
		int32_t L_45 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_44);
		V_8 = L_45;
		int32_t L_46 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)2)))
		{
			case 0:
			{
				goto IL_019a;
			}
			case 1:
			{
				goto IL_01e2;
			}
			case 2:
			{
				goto IL_012b;
			}
			case 3:
			{
				goto IL_0159;
			}
		}
	}
	{
		goto IL_01e2;
	}

IL_012b:
	{
		ByteU5BU5D_t4116647657* L_47 = V_4;
		ByteU5BU5D_t4116647657* L_48 = V_4;
		NullCheck(L_48);
		uint8_t L_49 = V_6;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))), (int32_t)1))), (uint8_t)L_49);
		ByteU5BU5D_t4116647657* L_50 = ___inputBuffer0;
		int32_t L_51 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_52 = V_4;
		int32_t L_53 = V_0;
		int32_t L_54 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_50, L_51, (RuntimeArray *)(RuntimeArray *)L_52, L_53, L_54, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_55 = V_4;
		int32_t L_56 = V_0;
		int32_t L_57 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_58 = V_4;
		int32_t L_59 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_55, L_56, L_57, L_58, L_59, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_0159:
	{
		ByteU5BU5D_t4116647657* L_60 = V_4;
		ByteU5BU5D_t4116647657* L_61 = V_4;
		NullCheck(L_61);
		uint8_t L_62 = V_6;
		uint8_t L_63 = V_6;
		SymmetricTransform_Random_m3740038270(__this, L_60, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_61)->max_length)))), (int32_t)L_62)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_63, (int32_t)1)), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_64 = V_4;
		ByteU5BU5D_t4116647657* L_65 = V_4;
		NullCheck(L_65);
		uint8_t L_66 = V_6;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_65)->max_length)))), (int32_t)1))), (uint8_t)L_66);
		ByteU5BU5D_t4116647657* L_67 = ___inputBuffer0;
		int32_t L_68 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_69 = V_4;
		int32_t L_70 = V_0;
		int32_t L_71 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_67, L_68, (RuntimeArray *)(RuntimeArray *)L_69, L_70, L_71, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_72 = V_4;
		int32_t L_73 = V_0;
		int32_t L_74 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_75 = V_4;
		int32_t L_76 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_72, L_73, L_74, L_75, L_76, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_019a:
	{
		ByteU5BU5D_t4116647657* L_77 = V_4;
		NullCheck(L_77);
		V_7 = (((int32_t)((int32_t)(((RuntimeArray *)L_77)->max_length))));
		goto IL_01ac;
	}

IL_01a5:
	{
		ByteU5BU5D_t4116647657* L_78 = V_4;
		int32_t L_79 = V_7;
		uint8_t L_80 = V_6;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)L_80);
	}

IL_01ac:
	{
		int32_t L_81 = V_7;
		int32_t L_82 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		V_7 = L_82;
		ByteU5BU5D_t4116647657* L_83 = V_4;
		NullCheck(L_83);
		uint8_t L_84 = V_6;
		if ((((int32_t)L_82) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_83)->max_length)))), (int32_t)L_84)))))
		{
			goto IL_01a5;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_85 = ___inputBuffer0;
		int32_t L_86 = ___inputOffset1;
		ByteU5BU5D_t4116647657* L_87 = V_4;
		int32_t L_88 = V_0;
		int32_t L_89 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_85, L_86, (RuntimeArray *)(RuntimeArray *)L_87, L_88, L_89, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_90 = V_4;
		int32_t L_91 = V_0;
		int32_t L_92 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_93 = V_4;
		int32_t L_94 = V_0;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_90, L_91, L_92, L_93, L_94, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01e2:
	{
		ByteU5BU5D_t4116647657* L_95 = ___inputBuffer0;
		int32_t L_96 = ___inputOffset1;
		int32_t L_97 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_98 = V_4;
		int32_t L_99 = V_5;
		SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_95, L_96, L_97, L_98, L_99, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01fa:
	{
		ByteU5BU5D_t4116647657* L_100 = V_4;
		return L_100;
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricTransform_FinalDecrypt_m764004682 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_FinalDecrypt_m764004682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B12_0 = 0;
	{
		int32_t L_0 = ___inputCount2;
		int32_t L_1 = __this->get_BlockSizeByte_2();
		if ((((int32_t)((int32_t)((int32_t)L_0%(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		CryptographicException_t248831461 * L_2 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_2, _stringLiteral3823085299, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SymmetricTransform_FinalDecrypt_m764004682_RuntimeMethod_var);
	}

IL_0019:
	{
		int32_t L_3 = ___inputCount2;
		V_0 = L_3;
		bool L_4 = __this->get_lastBlock_10();
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_BlockSizeByte_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t4116647657* L_8 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0066;
	}

IL_003d:
	{
		ByteU5BU5D_t4116647657* L_9 = ___inputBuffer0;
		int32_t L_10 = ___inputOffset1;
		int32_t L_11 = __this->get_BlockSizeByte_2();
		ByteU5BU5D_t4116647657* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = SymmetricTransform_InternalTransformBlock_m1743612142(__this, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		int32_t L_15 = ___inputOffset1;
		int32_t L_16 = __this->get_BlockSizeByte_2();
		___inputOffset1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16));
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_18));
		int32_t L_19 = ___inputCount2;
		int32_t L_20 = __this->get_BlockSizeByte_2();
		___inputCount2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_20));
	}

IL_0066:
	{
		int32_t L_21 = ___inputCount2;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		bool L_22 = __this->get_lastBlock_10();
		if (!L_22)
		{
			goto IL_00ae;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_23 = __this->get_workBuff_5();
		ByteU5BU5D_t4116647657* L_24 = __this->get_workout_6();
		VirtActionInvoker2< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[]) */, __this, L_23, L_24);
		ByteU5BU5D_t4116647657* L_25 = __this->get_workout_6();
		ByteU5BU5D_t4116647657* L_26 = V_1;
		int32_t L_27 = V_2;
		int32_t L_28 = __this->get_BlockSizeByte_2();
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_25, 0, (RuntimeArray *)(RuntimeArray *)L_26, L_27, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_2;
		int32_t L_30 = __this->get_BlockSizeByte_2();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30));
		__this->set_lastBlock_10((bool)0);
	}

IL_00ae:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = V_1;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		G_B12_0 = ((int32_t)(L_35));
		goto IL_00c0;
	}

IL_00bf:
	{
		G_B12_0 = 0;
	}

IL_00c0:
	{
		V_4 = (uint8_t)G_B12_0;
		SymmetricAlgorithm_t4254223087 * L_36 = __this->get_algo_0();
		NullCheck(L_36);
		int32_t L_37 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_36);
		V_8 = L_37;
		int32_t L_38 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1)))
		{
			case 0:
			{
				goto IL_01fd;
			}
			case 1:
			{
				goto IL_018f;
			}
			case 2:
			{
				goto IL_01fd;
			}
			case 3:
			{
				goto IL_00f1;
			}
			case 4:
			{
				goto IL_015d;
			}
		}
	}
	{
		goto IL_0202;
	}

IL_00f1:
	{
		uint8_t L_39 = V_4;
		if (!L_39)
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_40 = V_4;
		int32_t L_41 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_40) <= ((int32_t)L_41)))
		{
			goto IL_0119;
		}
	}

IL_0105:
	{
		SymmetricAlgorithm_t4254223087 * L_42 = __this->get_algo_0();
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_42);
		uint8_t L_44 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_43, L_44, (-1), /*hidden argument*/NULL);
	}

IL_0119:
	{
		uint8_t L_45 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)1));
		goto IL_014b;
	}

IL_0124:
	{
		ByteU5BU5D_t4116647657* L_46 = V_1;
		int32_t L_47 = V_0;
		int32_t L_48 = V_5;
		NullCheck(L_46);
		int32_t L_49 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1)), (int32_t)L_48));
		uint8_t L_50 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_51 = __this->get_algo_0();
		NullCheck(L_51);
		int32_t L_52 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_51);
		int32_t L_53 = V_5;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_52, (-1), L_53, /*hidden argument*/NULL);
	}

IL_0145:
	{
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
	}

IL_014b:
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_56 = V_0;
		uint8_t L_57 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57));
		goto IL_0202;
	}

IL_015d:
	{
		uint8_t L_58 = V_4;
		if (!L_58)
		{
			goto IL_0171;
		}
	}
	{
		uint8_t L_59 = V_4;
		int32_t L_60 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_59) <= ((int32_t)L_60)))
		{
			goto IL_0185;
		}
	}

IL_0171:
	{
		SymmetricAlgorithm_t4254223087 * L_61 = __this->get_algo_0();
		NullCheck(L_61);
		int32_t L_62 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_61);
		uint8_t L_63 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_62, L_63, (-1), /*hidden argument*/NULL);
	}

IL_0185:
	{
		int32_t L_64 = V_0;
		uint8_t L_65 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_65));
		goto IL_0202;
	}

IL_018f:
	{
		uint8_t L_66 = V_4;
		if (!L_66)
		{
			goto IL_01a3;
		}
	}
	{
		uint8_t L_67 = V_4;
		int32_t L_68 = __this->get_BlockSizeByte_2();
		if ((((int32_t)L_67) <= ((int32_t)L_68)))
		{
			goto IL_01b7;
		}
	}

IL_01a3:
	{
		SymmetricAlgorithm_t4254223087 * L_69 = __this->get_algo_0();
		NullCheck(L_69);
		int32_t L_70 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_69);
		uint8_t L_71 = V_4;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_70, L_71, (-1), /*hidden argument*/NULL);
	}

IL_01b7:
	{
		uint8_t L_72 = V_4;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)1));
		goto IL_01eb;
	}

IL_01c2:
	{
		ByteU5BU5D_t4116647657* L_73 = V_1;
		int32_t L_74 = V_0;
		int32_t L_75 = V_6;
		NullCheck(L_73);
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)1)), (int32_t)L_75));
		uint8_t L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		uint8_t L_78 = V_4;
		if ((((int32_t)L_77) == ((int32_t)L_78)))
		{
			goto IL_01e5;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_79 = __this->get_algo_0();
		NullCheck(L_79);
		int32_t L_80 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_79);
		int32_t L_81 = V_6;
		SymmetricTransform_ThrowBadPaddingException_m2898061954(__this, L_80, (-1), L_81, /*hidden argument*/NULL);
	}

IL_01e5:
	{
		int32_t L_82 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1));
	}

IL_01eb:
	{
		int32_t L_83 = V_6;
		if ((((int32_t)L_83) > ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_84 = V_0;
		uint8_t L_85 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_84, (int32_t)L_85));
		goto IL_0202;
	}

IL_01fd:
	{
		goto IL_0202;
	}

IL_0202:
	{
		int32_t L_86 = V_0;
		if ((((int32_t)L_86) <= ((int32_t)0)))
		{
			goto IL_0229;
		}
	}
	{
		int32_t L_87 = V_0;
		ByteU5BU5D_t4116647657* L_88 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_7 = L_88;
		ByteU5BU5D_t4116647657* L_89 = V_1;
		ByteU5BU5D_t4116647657* L_90 = V_7;
		int32_t L_91 = V_0;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_89, 0, (RuntimeArray *)(RuntimeArray *)L_90, 0, L_91, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_92 = V_1;
		ByteU5BU5D_t4116647657* L_93 = V_1;
		NullCheck(L_93);
		Array_Clear_m2231608178(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_92, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_93)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_94 = V_7;
		return L_94;
	}

IL_0229:
	{
		ByteU5BU5D_t4116647657* L_95 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_95;
	}
}
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* SymmetricTransform_TransformFinalBlock_m1030888689 (SymmetricTransform_t3802591843 * __this, ByteU5BU5D_t4116647657* ___inputBuffer0, int32_t ___inputOffset1, int32_t ___inputCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricTransform_TransformFinalBlock_m1030888689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_disposed_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectDisposedException_t21392786 * L_1 = (ObjectDisposedException_t21392786 *)il2cpp_codegen_object_new(ObjectDisposedException_t21392786_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3603759869(L_1, _stringLiteral389898510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SymmetricTransform_TransformFinalBlock_m1030888689_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_2 = ___inputBuffer0;
		int32_t L_3 = ___inputOffset1;
		int32_t L_4 = ___inputCount2;
		SymmetricTransform_CheckInput_m2092289040(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = __this->get_encrypt_1();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = ___inputBuffer0;
		int32_t L_7 = ___inputOffset1;
		int32_t L_8 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_9 = SymmetricTransform_FinalEncrypt_m748885414(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		ByteU5BU5D_t4116647657* L_10 = ___inputBuffer0;
		int32_t L_11 = ___inputOffset1;
		int32_t L_12 = ___inputCount2;
		ByteU5BU5D_t4116647657* L_13 = SymmetricTransform_FinalDecrypt_m764004682(__this, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
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
extern "C"  void DelegatePInvokeWrapper_Action_t1264377477 (Action_t1264377477 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Action_Invoke_m937035532((Action_t1264377477 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m2907948038 (Action_t1264377477 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void Action_EndInvoke_m1690492879 (Action_t1264377477 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.InvalidTimeZoneException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeZoneException__ctor_m6234683 (InvalidTimeZoneException_t4066718130 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidTimeZoneException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeZoneException__ctor_m4131156752 (InvalidTimeZoneException_t4066718130 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.InvalidTimeZoneException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void InvalidTimeZoneException__ctor_m2740086004 (InvalidTimeZoneException_t4066718130 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___sc1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___sc1;
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Linq.Check::Source(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_Source_m4098695967 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_Source_m4098695967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_Source_m4098695967_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndFunc(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndFunc_m1489824209 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___func1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndFunc_m1489824209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_SourceAndFunc_m1489824209_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___func1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3174732046, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_SourceAndFunc_m1489824209_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndSelector(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndSelector_m4013530551 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___selector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndSelector_m4013530551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_SourceAndSelector_m4013530551_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___selector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3977229295, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_SourceAndSelector_m4013530551_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndPredicate_m2332465641 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndPredicate_m2332465641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_SourceAndPredicate_m2332465641_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3941128596, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_SourceAndPredicate_m2332465641_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::FirstAndSecond(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_FirstAndSecond_m1286658405 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___first0, RuntimeObject * ___second1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_FirstAndSecond_m1286658405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___first0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2374226348, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_FirstAndSecond_m1286658405_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___second1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral3502150264, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_FirstAndSecond_m1286658405_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndKeySelector(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndKeySelector_m1202955589 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___keySelector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndKeySelector_m1202955589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2212699745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_SourceAndKeySelector_m1202955589_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndKeyElementSelectors(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Check_SourceAndKeyElementSelectors_m4285999668 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___source0, RuntimeObject * ___keySelector1, RuntimeObject * ___elementSelector2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Check_SourceAndKeyElementSelectors_m4285999668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___source0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4294193667, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___keySelector1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2212699745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___elementSelector2;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3009079190, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Check_SourceAndKeyElementSelectors_m4285999668_RuntimeMethod_var);
	}

IL_0033:
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
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * BinaryExpression_get_Left_m2696259424 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_left_2();
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * BinaryExpression_get_Right_m4063605363 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_right_3();
		return L_0;
	}
}
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::get_Conversion()
extern "C" IL2CPP_METHOD_ATTR LambdaExpression_t3131094331 * BinaryExpression_get_Conversion_m3082139200 (BinaryExpression_t77573129 * __this, const RuntimeMethod* method)
{
	{
		LambdaExpression_t3131094331 * L_0 = __this->get_conversion_4();
		return L_0;
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
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_Test()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_Test_m2318551020 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_test_2();
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfTrue()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_IfTrue_m2644523070 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_if_true_3();
		return L_0;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::get_IfFalse()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * ConditionalExpression_get_IfFalse_m2385420502 (ConditionalExpression_t1874387742 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_if_false_4();
		return L_0;
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
// System.Void System.Linq.Expressions.ConstantExpression::.ctor(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR void ConstantExpression__ctor_m150340203 (ConstantExpression_t3613654278 * __this, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type1;
		Expression__ctor_m2516416328(__this, ((int32_t)9), L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		__this->set_value_2(L_1);
		return;
	}
}
// System.Object System.Linq.Expressions.ConstantExpression::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * ConstantExpression_get_Value_m1505431025 (ConstantExpression_t3613654278 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_value_2();
		return L_0;
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
// System.Reflection.MethodInfo System.Linq.Expressions.ElementInit::get_AddMethod()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * ElementInit_get_AddMethod_m1221910039 (ElementInit_t2682486961 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_add_method_0();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.ElementInit::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * ElementInit_get_Arguments_m4152899655 (ElementInit_t2682486961 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = __this->get_arguments_1();
		return L_0;
	}
}
// System.String System.Linq.Expressions.ElementInit::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ElementInit_ToString_m3271262360 (ElementInit_t2682486961 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ExpressionPrinter_ToString_m695496964(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
extern "C" IL2CPP_METHOD_ATTR void Expression__ctor_m2516416328 (Expression_t1588164026 * __this, int32_t ___node_type0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___node_type0;
		__this->set_node_type_0(L_0);
		Type_t * L_1 = ___type1;
		__this->set_type_1(L_1);
		return;
	}
}
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern "C" IL2CPP_METHOD_ATTR int32_t Expression_get_NodeType_m2930019583 (Expression_t1588164026 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_node_type_0();
		return L_0;
	}
}
// System.Type System.Linq.Expressions.Expression::get_Type()
extern "C" IL2CPP_METHOD_ATTR Type_t * Expression_get_Type_m3318651915 (Expression_t1588164026 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_type_1();
		return L_0;
	}
}
// System.String System.Linq.Expressions.Expression::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Expression_ToString_m2402886593 (Expression_t1588164026 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ExpressionPrinter_ToString_m3553691067(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
extern "C" IL2CPP_METHOD_ATTR ConstantExpression_t3613654278 * Expression_Constant_m3269986673 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_Constant_m3269986673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		ConstantExpression_t3613654278 * L_3 = (ConstantExpression_t3613654278 *)il2cpp_codegen_object_new(ConstantExpression_t3613654278_il2cpp_TypeInfo_var);
		ConstantExpression__ctor_m150340203(L_3, NULL, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0017:
	{
		RuntimeObject * L_4 = ___value0;
		RuntimeObject * L_5 = ___value0;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m88164663(L_5, /*hidden argument*/NULL);
		ConstantExpression_t3613654278 * L_7 = Expression_Constant_m374760797(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
extern "C" IL2CPP_METHOD_ATTR ConstantExpression_t3613654278 * Expression_Constant_m374760797 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_Constant_m374760797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3243520166, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Expression_Constant_m374760797_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___value0;
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		Type_t * L_3 = ___type1;
		NullCheck(L_3);
		bool L_4 = Type_get_IsValueType_m3108065642(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_5 = ___type1;
		bool L_6 = Extensions_IsNullable_m780193409(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Expression_Constant_m374760797_RuntimeMethod_var);
	}

IL_0033:
	{
		goto IL_0065;
	}

IL_0038:
	{
		Type_t * L_8 = ___type1;
		NullCheck(L_8);
		bool L_9 = Type_get_IsValueType_m3108065642(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Type_t * L_10 = ___type1;
		bool L_11 = Extensions_IsNullable_m780193409(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0065;
		}
	}

IL_004e:
	{
		RuntimeObject * L_12 = ___value0;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m88164663(L_12, /*hidden argument*/NULL);
		Type_t * L_14 = ___type1;
		bool L_15 = Extensions_IsAssignableTo_m3054773707(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		ArgumentException_t132251570 * L_16 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, Expression_Constant_m374760797_RuntimeMethod_var);
	}

IL_0065:
	{
		RuntimeObject * L_17 = ___value0;
		Type_t * L_18 = ___type1;
		ConstantExpression_t3613654278 * L_19 = (ConstantExpression_t3613654278 *)il2cpp_codegen_object_new(ConstantExpression_t3613654278_il2cpp_TypeInfo_var);
		ConstantExpression__ctor_m150340203(L_19, L_17, L_18, /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Expression_CanAssign_m2137729393 (RuntimeObject * __this /* static, unused */, Type_t * ___target0, Type_t * ___source1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___target0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m3108065642(L_0, /*hidden argument*/NULL);
		Type_t * L_2 = ___source1;
		NullCheck(L_2);
		bool L_3 = Type_get_IsValueType_m3108065642(L_2, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_1^(int32_t)L_3)))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		Type_t * L_4 = ___source1;
		Type_t * L_5 = ___target0;
		bool L_6 = Extensions_IsAssignableTo_m3054773707(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * Expression_CheckLambda_m3787444653 (RuntimeObject * __this /* static, unused */, Type_t * ___delegateType0, Expression_t1588164026 * ___body1, ReadOnlyCollection_1_t2330998371 * ___parameters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_CheckLambda_m3787444653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	ParameterInfoU5BU5D_t390618515* V_1 = NULL;
	int32_t V_2 = 0;
	ParameterExpression_t1118422084 * V_3 = NULL;
	{
		Type_t * L_0 = ___delegateType0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Delegate_t1188392813_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3610891033, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_0020:
	{
		Type_t * L_5 = ___delegateType0;
		MethodInfo_t * L_6 = Extensions_GetInvokeMethod_m2591588064(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MethodInfo_t * L_7 = V_0;
		if (L_7)
		{
			goto IL_003d;
		}
	}
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_8, _stringLiteral2077913984, _stringLiteral3610891033, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_003d:
	{
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_9);
		ParameterInfoU5BU5D_t390618515* L_10 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_9);
		V_1 = L_10;
		ParameterInfoU5BU5D_t390618515* L_11 = V_1;
		NullCheck(L_11);
		ReadOnlyCollection_1_t2330998371 * L_12 = ___parameters2;
		NullCheck(L_12);
		int32_t L_13 = ReadOnlyCollection_1_get_Count_m3216249872(L_12, /*hidden argument*/ReadOnlyCollection_1_get_Count_m3216249872_RuntimeMethod_var);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))))) == ((int32_t)L_13)))
		{
			goto IL_0068;
		}
	}
	{
		Type_t * L_14 = ___delegateType0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral897330846, L_14, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_16 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_16, L_15, _stringLiteral3610891033, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_0068:
	{
		V_2 = 0;
		goto IL_00c2;
	}

IL_006f:
	{
		ReadOnlyCollection_1_t2330998371 * L_17 = ___parameters2;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		ParameterExpression_t1118422084 * L_19 = ReadOnlyCollection_1_get_Item_m1189576603(L_17, L_18, /*hidden argument*/ReadOnlyCollection_1_get_Item_m1189576603_RuntimeMethod_var);
		V_3 = L_19;
		ParameterExpression_t1118422084 * L_20 = V_3;
		if (L_20)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_21 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_21, _stringLiteral3372390906, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_0088:
	{
		ParameterExpression_t1118422084 * L_22 = V_3;
		NullCheck(L_22);
		Type_t * L_23 = Expression_get_Type_m3318651915(L_22, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t390618515* L_24 = V_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		ParameterInfo_t1861056598 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Type_t * L_28 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_27);
		bool L_29 = Expression_CanAssign_m2137729393(NULL /*static, unused*/, L_23, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00be;
		}
	}
	{
		ParameterInfoU5BU5D_t390618515* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		ParameterInfo_t1861056598 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Type_t * L_34 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_33);
		ParameterExpression_t1118422084 * L_35 = V_3;
		NullCheck(L_35);
		Type_t * L_36 = Expression_get_Type_m3318651915(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2962044487, L_34, L_36, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_38 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_38, L_37, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_00be:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00c2:
	{
		int32_t L_40 = V_2;
		ParameterInfoU5BU5D_t390618515* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
		MethodInfo_t * L_42 = V_0;
		NullCheck(L_42);
		Type_t * L_43 = VirtFuncInvoker0< Type_t * >::Invoke(35 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_42);
		RuntimeTypeHandle_t3027515415  L_44 = { reinterpret_cast<intptr_t> (Void_t1185182177_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_43) == ((RuntimeObject*)(Type_t *)L_45)))
		{
			goto IL_0129;
		}
	}
	{
		MethodInfo_t * L_46 = V_0;
		NullCheck(L_46);
		Type_t * L_47 = VirtFuncInvoker0< Type_t * >::Invoke(35 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_46);
		Expression_t1588164026 * L_48 = ___body1;
		NullCheck(L_48);
		Type_t * L_49 = Expression_get_Type_m3318651915(L_48, /*hidden argument*/NULL);
		bool L_50 = Expression_CanAssign_m2137729393(NULL /*static, unused*/, L_47, L_49, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_0129;
		}
	}
	{
		MethodInfo_t * L_51 = V_0;
		NullCheck(L_51);
		Type_t * L_52 = VirtFuncInvoker0< Type_t * >::Invoke(35 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_51);
		bool L_53 = Extensions_IsExpression_m3809696797(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_010d;
		}
	}
	{
		Expression_t1588164026 * L_54 = ___body1;
		UnaryExpression_t3914580921 * L_55 = Expression_Quote_m2632568450(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		return L_55;
	}

IL_010d:
	{
		Expression_t1588164026 * L_56 = ___body1;
		NullCheck(L_56);
		Type_t * L_57 = Expression_get_Type_m3318651915(L_56, /*hidden argument*/NULL);
		MethodInfo_t * L_58 = V_0;
		NullCheck(L_58);
		Type_t * L_59 = VirtFuncInvoker0< Type_t * >::Invoke(35 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_58);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2191586598, L_57, L_59, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_61 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_61, L_60, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, NULL, Expression_CheckLambda_m3787444653_RuntimeMethod_var);
	}

IL_0129:
	{
		Expression_t1588164026 * L_62 = ___body1;
		return L_62;
	}
}
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
extern "C" IL2CPP_METHOD_ATTR void Expression_CheckNonGenericMethod_m3227574805 (RuntimeObject * __this /* static, unused */, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_CheckNonGenericMethod_m3227574805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodBase_t * L_0 = ___method0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition() */, L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		MethodBase_t * L_2 = ___method0;
		NullCheck(L_2);
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_2);
		if (!L_3)
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral18249897, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Expression_CheckNonGenericMethod_m3227574805_RuntimeMethod_var);
	}

IL_0021:
	{
		return;
	}
}
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Property(System.Linq.Expressions.Expression,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR MemberExpression_t2956213603 * Expression_Property_m493981664 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, MethodInfo_t * ___propertyAccessor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_Property_m493981664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___propertyAccessor1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2025020366, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Expression_Property_m493981664_RuntimeMethod_var);
	}

IL_0011:
	{
		MethodInfo_t * L_2 = ___propertyAccessor1;
		Expression_CheckNonGenericMethod_m3227574805(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		MethodInfo_t * L_3 = ___propertyAccessor1;
		NullCheck(L_3);
		bool L_4 = MethodBase_get_IsStatic_m2399864271(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0054;
		}
	}
	{
		Expression_t1588164026 * L_5 = ___expression0;
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_6 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_6, _stringLiteral928723642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Expression_Property_m493981664_RuntimeMethod_var);
	}

IL_0033:
	{
		Expression_t1588164026 * L_7 = ___expression0;
		NullCheck(L_7);
		Type_t * L_8 = Expression_get_Type_m3318651915(L_7, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = ___propertyAccessor1;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		bool L_11 = Extensions_IsAssignableTo_m3054773707(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		ArgumentException_t132251570 * L_12 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_12, _stringLiteral928723642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Expression_Property_m493981664_RuntimeMethod_var);
	}

IL_0054:
	{
		MethodInfo_t * L_13 = ___propertyAccessor1;
		PropertyInfo_t * L_14 = Expression_GetAssociatedProperty_m3680799355(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		PropertyInfo_t * L_15 = V_0;
		if (L_15)
		{
			goto IL_0072;
		}
	}
	{
		MethodInfo_t * L_16 = ___propertyAccessor1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2282716040, L_16, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, Expression_Property_m493981664_RuntimeMethod_var);
	}

IL_0072:
	{
		Expression_t1588164026 * L_19 = ___expression0;
		PropertyInfo_t * L_20 = V_0;
		PropertyInfo_t * L_21 = V_0;
		NullCheck(L_21);
		Type_t * L_22 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_21);
		MemberExpression_t2956213603 * L_23 = (MemberExpression_t2956213603 *)il2cpp_codegen_object_new(MemberExpression_t2956213603_il2cpp_TypeInfo_var);
		MemberExpression__ctor_m4019112431(L_23, L_19, L_20, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Reflection.PropertyInfo System.Linq.Expressions.Expression::GetAssociatedProperty(System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR PropertyInfo_t * Expression_GetAssociatedProperty_m3680799355 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	PropertyInfo_t * V_0 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_1 = NULL;
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = ___method0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (PropertyInfo_t *)NULL;
	}

IL_0008:
	{
		MethodInfo_t * L_1 = ___method0;
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		PropertyInfoU5BU5D_t1461822886* L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(62 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)124));
		V_1 = L_3;
		V_2 = 0;
		goto IL_004d;
	}

IL_001d:
	{
		PropertyInfoU5BU5D_t1461822886* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PropertyInfo_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		MethodInfo_t * L_8 = ___method0;
		PropertyInfo_t * L_9 = V_0;
		NullCheck(L_9);
		MethodInfo_t * L_10 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_9, (bool)1);
		NullCheck(L_8);
		bool L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_8, L_10);
		if (!L_11)
		{
			goto IL_0035;
		}
	}
	{
		PropertyInfo_t * L_12 = V_0;
		return L_12;
	}

IL_0035:
	{
		MethodInfo_t * L_13 = ___method0;
		PropertyInfo_t * L_14 = V_0;
		NullCheck(L_14);
		MethodInfo_t * L_15 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_14, (bool)1);
		NullCheck(L_13);
		bool L_16 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_15);
		if (!L_16)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_17 = V_0;
		return L_17;
	}

IL_0049:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_19 = V_2;
		PropertyInfoU5BU5D_t1461822886* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_001d;
		}
	}
	{
		return (PropertyInfo_t *)NULL;
	}
}
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR UnaryExpression_t3914580921 * Expression_Quote_m2632568450 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Expression_Quote_m2632568450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Expression_t1588164026 * L_0 = ___expression0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral928723642, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Expression_Quote_m2632568450_RuntimeMethod_var);
	}

IL_0011:
	{
		Expression_t1588164026 * L_2 = ___expression0;
		Expression_t1588164026 * L_3 = ___expression0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		UnaryExpression_t3914580921 * L_5 = (UnaryExpression_t3914580921 *)il2cpp_codegen_object_new(UnaryExpression_t3914580921_il2cpp_TypeInfo_var);
		UnaryExpression__ctor_m2387618479(L_5, ((int32_t)40), L_2, L_4, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter__ctor_m3872905865 (ExpressionPrinter_t2120383524 * __this, StringBuilder_t * ___builder0, const RuntimeMethod* method)
{
	{
		ExpressionVisitor__ctor_m583967485(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = ___builder0;
		__this->set_builder_0(L_0);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter__ctor_m1950713947 (ExpressionPrinter_t2120383524 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter__ctor_m1950713947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		ExpressionPrinter__ctor_m3872905865(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m3553691067 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_ToString_m3553691067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionPrinter_t2120383524 * V_0 = NULL;
	{
		ExpressionPrinter_t2120383524 * L_0 = (ExpressionPrinter_t2120383524 *)il2cpp_codegen_object_new(ExpressionPrinter_t2120383524_il2cpp_TypeInfo_var);
		ExpressionPrinter__ctor_m1950713947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ExpressionPrinter_t2120383524 * L_1 = V_0;
		Expression_t1588164026 * L_2 = ___expression0;
		NullCheck(L_1);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_1, L_2);
		ExpressionPrinter_t2120383524 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = StringBuilder_ToString_m3317489284(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m695496964 (RuntimeObject * __this /* static, unused */, ElementInit_t2682486961 * ___init0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_ToString_m695496964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionPrinter_t2120383524 * V_0 = NULL;
	{
		ExpressionPrinter_t2120383524 * L_0 = (ExpressionPrinter_t2120383524 *)il2cpp_codegen_object_new(ExpressionPrinter_t2120383524_il2cpp_TypeInfo_var);
		ExpressionPrinter__ctor_m1950713947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ExpressionPrinter_t2120383524 * L_1 = V_0;
		ElementInit_t2682486961 * L_2 = ___init0;
		NullCheck(L_1);
		VirtActionInvoker1< ElementInit_t2682486961 * >::Invoke(6 /* System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit) */, L_1, L_2);
		ExpressionPrinter_t2120383524 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = StringBuilder_ToString_m3317489284(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_ToString_m2797236515 (RuntimeObject * __this /* static, unused */, MemberBinding_t265491700 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_ToString_m2797236515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExpressionPrinter_t2120383524 * V_0 = NULL;
	{
		ExpressionPrinter_t2120383524 * L_0 = (ExpressionPrinter_t2120383524 *)il2cpp_codegen_object_new(ExpressionPrinter_t2120383524_il2cpp_TypeInfo_var);
		ExpressionPrinter__ctor_m1950713947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ExpressionPrinter_t2120383524 * L_1 = V_0;
		MemberBinding_t265491700 * L_2 = ___binding0;
		NullCheck(L_1);
		VirtActionInvoker1< MemberBinding_t265491700 * >::Invoke(5 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding) */, L_1, L_2);
		ExpressionPrinter_t2120383524 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t * L_4 = L_3->get_builder_0();
		NullCheck(L_4);
		String_t* L_5 = StringBuilder_ToString_m3317489284(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m2213693087 (ExpressionPrinter_t2120383524 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		String_t* L_1 = ___str0;
		NullCheck(L_0);
		StringBuilder_Append_m1965104174(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m3624003222 (ExpressionPrinter_t2120383524 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		StringBuilder_Append_m1640838743(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_Print_m2798477873 (ExpressionPrinter_t2120383524 * __this, String_t* ___str0, ObjectU5BU5D_t2843939325* ___objs1, const RuntimeMethod* method)
{
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		String_t* L_1 = ___str0;
		ObjectU5BU5D_t2843939325* L_2 = ___objs1;
		NullCheck(L_0);
		StringBuilder_AppendFormat_m921870684(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitElementInitializer_m11676246 (ExpressionPrinter_t2120383524 * __this, ElementInit_t2682486961 * ___initializer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitElementInitializer_m11676246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ElementInit_t2682486961 * L_0 = ___initializer0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = ElementInit_get_AddMethod_m1221910039(L_0, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m3624003222(__this, L_1, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		ElementInit_t2682486961 * L_2 = ___initializer0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t2800740313 * L_3 = ElementInit_get_Arguments_m4152899655(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_3);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitUnary_m4044978277 (ExpressionPrinter_t2120383524 * __this, UnaryExpression_t3914580921 * ___unary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitUnary_m4044978277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UnaryExpression_t3914580921 * L_0 = ___unary0;
		NullCheck(L_0);
		int32_t L_1 = Expression_get_NodeType_m2930019583(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)28))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)29))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)4)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)40))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)44))))
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_00f6;
	}

IL_004b:
	{
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		UnaryExpression_t3914580921 * L_12 = ___unary0;
		NullCheck(L_12);
		int32_t L_13 = Expression_get_NodeType_m2930019583(L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(ExpressionType_t2886294549_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral335008478, L_11, /*hidden argument*/NULL);
		UnaryExpression_t3914580921 * L_16 = ___unary0;
		NullCheck(L_16);
		Expression_t1588164026 * L_17 = UnaryExpression_get_Operand_m4259740027(L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_17);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614531, /*hidden argument*/NULL);
		UnaryExpression_t3914580921 * L_18 = ___unary0;
		NullCheck(L_18);
		Expression_t1588164026 * L_19 = UnaryExpression_get_Operand_m4259740027(L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_19);
		return;
	}

IL_009a:
	{
		UnaryExpression_t3914580921 * L_20 = ___unary0;
		NullCheck(L_20);
		Expression_t1588164026 * L_21 = UnaryExpression_get_Operand_m4259740027(L_20, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_21);
		return;
	}

IL_00a7:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		UnaryExpression_t3914580921 * L_22 = ___unary0;
		NullCheck(L_22);
		Expression_t1588164026 * L_23 = UnaryExpression_get_Operand_m4259740027(L_22, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_23);
		ObjectU5BU5D_t2843939325* L_24 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		UnaryExpression_t3914580921 * L_26 = ___unary0;
		NullCheck(L_26);
		Type_t * L_27 = Expression_get_Type_m3318651915(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral3672279257, L_25, /*hidden argument*/NULL);
		return;
	}

IL_00de:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614533, /*hidden argument*/NULL);
		UnaryExpression_t3914580921 * L_29 = ___unary0;
		NullCheck(L_29);
		Expression_t1588164026 * L_30 = UnaryExpression_get_Operand_m4259740027(L_29, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_30);
		return;
	}

IL_00f6:
	{
		NotImplementedException_t3489357830 * L_31 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, ExpressionPrinter_VisitUnary_m4044978277_RuntimeMethod_var);
	}
}
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR String_t* ExpressionPrinter_OperatorToString_m2097423961 (RuntimeObject * __this /* static, unused */, BinaryExpression_t77573129 * ___binary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_OperatorToString_m2097423961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B23_0 = NULL;
	String_t* G_B27_0 = NULL;
	{
		BinaryExpression_t77573129 * L_0 = ___binary0;
		NullCheck(L_0);
		int32_t L_1 = Expression_get_NodeType_m2930019583(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_00c2;
			}
			case 1:
			{
				goto IL_00c2;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_00c8;
			}
			case 4:
			{
				goto IL_0164;
			}
			case 5:
			{
				goto IL_0164;
			}
			case 6:
			{
				goto IL_0164;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_0164;
			}
			case 9:
			{
				goto IL_0164;
			}
			case 10:
			{
				goto IL_0164;
			}
			case 11:
			{
				goto IL_0164;
			}
			case 12:
			{
				goto IL_00d4;
			}
			case 13:
			{
				goto IL_00da;
			}
			case 14:
			{
				goto IL_00e0;
			}
			case 15:
			{
				goto IL_00e6;
			}
			case 16:
			{
				goto IL_00ec;
			}
			case 17:
			{
				goto IL_0164;
			}
			case 18:
			{
				goto IL_0164;
			}
			case 19:
			{
				goto IL_00f2;
			}
			case 20:
			{
				goto IL_00f8;
			}
			case 21:
			{
				goto IL_00fe;
			}
			case 22:
			{
				goto IL_0164;
			}
			case 23:
			{
				goto IL_0164;
			}
			case 24:
			{
				goto IL_0164;
			}
			case 25:
			{
				goto IL_0104;
			}
			case 26:
			{
				goto IL_010a;
			}
			case 27:
			{
				goto IL_010a;
			}
			case 28:
			{
				goto IL_0164;
			}
			case 29:
			{
				goto IL_0164;
			}
			case 30:
			{
				goto IL_0164;
			}
			case 31:
			{
				goto IL_0164;
			}
			case 32:
			{
				goto IL_0164;
			}
			case 33:
			{
				goto IL_0164;
			}
			case 34:
			{
				goto IL_0164;
			}
			case 35:
			{
				goto IL_0110;
			}
			case 36:
			{
				goto IL_0149;
			}
			case 37:
			{
				goto IL_0116;
			}
			case 38:
			{
				goto IL_0164;
			}
			case 39:
			{
				goto IL_011c;
			}
			case 40:
			{
				goto IL_0164;
			}
			case 41:
			{
				goto IL_0122;
			}
			case 42:
			{
				goto IL_0128;
			}
			case 43:
			{
				goto IL_0128;
			}
		}
	}
	{
		goto IL_0164;
	}

IL_00c2:
	{
		return _stringLiteral3452614533;
	}

IL_00c8:
	{
		return _stringLiteral3450124154;
	}

IL_00ce:
	{
		return _stringLiteral3451631505;
	}

IL_00d4:
	{
		return _stringLiteral3452614529;
	}

IL_00da:
	{
		return _stringLiteral3452614547;
	}

IL_00e0:
	{
		return _stringLiteral3452614642;
	}

IL_00e6:
	{
		return _stringLiteral3452614546;
	}

IL_00ec:
	{
		return _stringLiteral3451762578;
	}

IL_00f2:
	{
		return _stringLiteral3451828116;
	}

IL_00f8:
	{
		return _stringLiteral3452614548;
	}

IL_00fe:
	{
		return _stringLiteral3451762580;
	}

IL_0104:
	{
		return _stringLiteral3452614523;
	}

IL_010a:
	{
		return _stringLiteral3452614534;
	}

IL_0110:
	{
		return _stringLiteral3451762559;
	}

IL_0116:
	{
		return _stringLiteral3456022484;
	}

IL_011c:
	{
		return _stringLiteral3452614642;
	}

IL_0122:
	{
		return _stringLiteral3451697042;
	}

IL_0128:
	{
		return _stringLiteral3452614531;
	}

IL_012e:
	{
		BinaryExpression_t77573129 * L_3 = ___binary0;
		bool L_4 = ExpressionPrinter_IsBoolean_m3915202565(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0143;
		}
	}
	{
		G_B23_0 = _stringLiteral3266137301;
		goto IL_0148;
	}

IL_0143:
	{
		G_B23_0 = _stringLiteral3452614522;
	}

IL_0148:
	{
		return G_B23_0;
	}

IL_0149:
	{
		BinaryExpression_t77573129 * L_5 = ___binary0;
		bool L_6 = ExpressionPrinter_IsBoolean_m3915202565(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_015e;
		}
	}
	{
		G_B27_0 = _stringLiteral3455629281;
		goto IL_0163;
	}

IL_015e:
	{
		G_B27_0 = _stringLiteral3452614612;
	}

IL_0163:
	{
		return G_B27_0;
	}

IL_0164:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR bool ExpressionPrinter_IsBoolean_m3915202565 (RuntimeObject * __this /* static, unused */, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_IsBoolean_m3915202565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		NullCheck(L_0);
		Type_t * L_1 = Expression_get_Type_m3318651915(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (Boolean_t97287965_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		Expression_t1588164026 * L_4 = ___expression0;
		NullCheck(L_4);
		Type_t * L_5 = Expression_get_Type_m3318651915(L_4, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (Nullable_1_t1819850047_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B3_0 = ((((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_7))? 1 : 0);
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 1;
	}

IL_002a:
	{
		return (bool)G_B3_0;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_PrintArrayIndex_m3909025307 (ExpressionPrinter_t2120383524 * __this, BinaryExpression_t77573129 * ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_PrintArrayIndex_m3909025307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BinaryExpression_t77573129 * L_0 = ___index0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = BinaryExpression_get_Left_m2696259424(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614645, /*hidden argument*/NULL);
		BinaryExpression_t77573129 * L_2 = ___index0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = BinaryExpression_get_Right_m4063605363(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614643, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitBinary_m2093948925 (ExpressionPrinter_t2120383524 * __this, BinaryExpression_t77573129 * ___binary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitBinary_m2093948925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BinaryExpression_t77573129 * L_0 = ___binary0;
		NullCheck(L_0);
		int32_t L_1 = Expression_get_NodeType_m2930019583(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_001b;
	}

IL_0013:
	{
		BinaryExpression_t77573129 * L_3 = ___binary0;
		ExpressionPrinter_PrintArrayIndex_m3909025307(__this, L_3, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		BinaryExpression_t77573129 * L_4 = ___binary0;
		NullCheck(L_4);
		Expression_t1588164026 * L_5 = BinaryExpression_get_Left_m2696259424(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_5);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		BinaryExpression_t77573129 * L_8 = ___binary0;
		String_t* L_9 = ExpressionPrinter_OperatorToString_m2097423961(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral943589392, L_7, /*hidden argument*/NULL);
		BinaryExpression_t77573129 * L_10 = ___binary0;
		NullCheck(L_10);
		Expression_t1588164026 * L_11 = BinaryExpression_get_Right_m4063605363(L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_11);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitTypeIs_m745155014 (ExpressionPrinter_t2120383524 * __this, TypeBinaryExpression_t2086022908 * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitTypeIs_m745155014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TypeBinaryExpression_t2086022908 * L_0 = ___type0;
		NullCheck(L_0);
		int32_t L_1 = Expression_get_NodeType_m2930019583(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)45))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_004b;
	}

IL_0014:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		TypeBinaryExpression_t2086022908 * L_3 = ___type0;
		NullCheck(L_3);
		Expression_t1588164026 * L_4 = TypeBinaryExpression_get_Expression_m3342510543(L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_4);
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		TypeBinaryExpression_t2086022908 * L_7 = ___type0;
		NullCheck(L_7);
		Type_t * L_8 = TypeBinaryExpression_get_TypeOperand_m354187380(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral3695872217, L_6, /*hidden argument*/NULL);
		return;
	}

IL_004b:
	{
		NotImplementedException_t3489357830 * L_10 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, ExpressionPrinter_VisitTypeIs_m745155014_RuntimeMethod_var);
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitConstant_m688764185 (ExpressionPrinter_t2120383524 * __this, ConstantExpression_t3613654278 * ___constant0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitConstant_m688764185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		ConstantExpression_t3613654278 * L_0 = ___constant0;
		NullCheck(L_0);
		RuntimeObject * L_1 = ConstantExpression_get_Value_m1505431025(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral1202628576, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_001d:
	{
		RuntimeObject * L_3 = V_0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614526, /*hidden argument*/NULL);
		RuntimeObject * L_4 = V_0;
		ExpressionPrinter_Print_m3624003222(__this, L_4, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614526, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_004a:
	{
		RuntimeObject * L_5 = V_0;
		bool L_6 = ExpressionPrinter_HasStringRepresentation_m1491716173(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0077;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3495190937, /*hidden argument*/NULL);
		RuntimeObject * L_7 = V_0;
		ExpressionPrinter_Print_m3624003222(__this, L_7, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		goto IL_007e;
	}

IL_0077:
	{
		RuntimeObject * L_8 = V_0;
		ExpressionPrinter_Print_m3624003222(__this, L_8, /*hidden argument*/NULL);
	}

IL_007e:
	{
		return;
	}
}
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ExpressionPrinter_HasStringRepresentation_m1491716173 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_HasStringRepresentation_m1491716173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitConditional_m29246237 (ExpressionPrinter_t2120383524 * __this, ConditionalExpression_t1874387742 * ___conditional0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitConditional_m29246237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral2713363123, /*hidden argument*/NULL);
		ConditionalExpression_t1874387742 * L_0 = ___conditional0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = ConditionalExpression_get_Test_m2318551020(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3450517380, /*hidden argument*/NULL);
		ConditionalExpression_t1874387742 * L_2 = ___conditional0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = ConditionalExpression_get_IfTrue_m2644523070(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3450517380, /*hidden argument*/NULL);
		ConditionalExpression_t1874387742 * L_4 = ___conditional0;
		NullCheck(L_4);
		Expression_t1588164026 * L_5 = ConditionalExpression_get_IfFalse_m2385420502(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_5);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitParameter_m2043054640 (ExpressionPrinter_t2120383524 * __this, ParameterExpression_t1118422084 * ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitParameter_m2043054640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	ExpressionPrinter_t2120383524 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	ExpressionPrinter_t2120383524 * G_B1_1 = NULL;
	{
		ParameterExpression_t1118422084 * L_0 = ___parameter0;
		NullCheck(L_0);
		String_t* L_1 = ParameterExpression_get_Name_m1531348536(L_0, /*hidden argument*/NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		G_B2_0 = _stringLiteral4170759834;
		G_B2_1 = G_B1_1;
	}

IL_0013:
	{
		NullCheck(G_B2_1);
		ExpressionPrinter_Print_m2213693087(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMemberAccess_m3686066408 (ExpressionPrinter_t2120383524 * __this, MemberExpression_t2956213603 * ___access0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMemberAccess_m3686066408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberExpression_t2956213603 * L_0 = ___access0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = MemberExpression_get_Expression_m2281151650(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		MemberExpression_t2956213603 * L_2 = ___access0;
		NullCheck(L_2);
		MemberInfo_t * L_3 = MemberExpression_get_Member_m322166973(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		ExpressionPrinter_Print_m2213693087(__this, L_5, /*hidden argument*/NULL);
		goto IL_0032;
	}

IL_0026:
	{
		MemberExpression_t2956213603 * L_6 = ___access0;
		NullCheck(L_6);
		Expression_t1588164026 * L_7 = MemberExpression_get_Expression_m2281151650(L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_7);
	}

IL_0032:
	{
		ObjectU5BU5D_t2843939325* L_8 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		MemberExpression_t2956213603 * L_10 = ___access0;
		NullCheck(L_10);
		MemberInfo_t * L_11 = MemberExpression_get_Member_m322166973(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral2091341596, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMethodCall_m2901281752 (ExpressionPrinter_t2120383524 * __this, MethodCallExpression_t3675920717 * ___call0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMethodCall_m2901281752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCallExpression_t3675920717 * L_0 = ___call0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = MethodCallExpression_get_Object_m280553409(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		MethodCallExpression_t3675920717 * L_2 = ___call0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = MethodCallExpression_get_Object_m280553409(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614530, /*hidden argument*/NULL);
	}

IL_0022:
	{
		MethodCallExpression_t3675920717 * L_4 = ___call0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = MethodCallExpression_get_Method_m910238317(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		ExpressionPrinter_Print_m2213693087(__this, L_6, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		MethodCallExpression_t3675920717 * L_7 = ___call0;
		NullCheck(L_7);
		ReadOnlyCollection_1_t2800740313 * L_8 = MethodCallExpression_get_Arguments_m122658011(L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_8);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMemberAssignment_m491940330 (ExpressionPrinter_t2120383524 * __this, MemberAssignment_t1201848431 * ___assignment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMemberAssignment_m491940330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		MemberAssignment_t1201848431 * L_2 = ___assignment0;
		NullCheck(L_2);
		MemberInfo_t * L_3 = MemberBinding_get_Member_m3336797922(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral1810271857, L_1, /*hidden argument*/NULL);
		MemberAssignment_t1201848431 * L_5 = ___assignment0;
		NullCheck(L_5);
		Expression_t1588164026 * L_6 = MemberAssignment_get_Expression_m1732568863(L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_6);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMemberMemberBinding_m4212821825 (ExpressionPrinter_t2120383524 * __this, MemberMemberBinding_t3826576684 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMemberMemberBinding_m4212821825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberMemberBinding_t3826576684 * L_0 = ___binding0;
		NullCheck(L_0);
		MemberInfo_t * L_1 = MemberBinding_get_Member_m3336797922(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		ExpressionPrinter_Print_m2213693087(__this, L_2, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3181813962, /*hidden argument*/NULL);
		MemberMemberBinding_t3826576684 * L_3 = ___binding0;
		NullCheck(L_3);
		ReadOnlyCollection_1_t1478067987 * L_4 = MemberMemberBinding_get_Bindings_m1599294955(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 5);
		Action_1_t437959295 * L_6 = (Action_1_t437959295 *)il2cpp_codegen_object_new(Action_1_t437959295_il2cpp_TypeInfo_var);
		Action_1__ctor_m1086995192(L_6, __this, (intptr_t)L_5, /*hidden argument*/Action_1__ctor_m1086995192_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t1478067987 *, Action_1_t437959295 * >::Invoke(ExpressionVisitor_VisitList_TisMemberBinding_t265491700_m3317302336_RuntimeMethod_var, __this, L_4, L_6);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMemberListBinding_m3623708527 (ExpressionPrinter_t2120383524 * __this, MemberListBinding_t3353502159 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMemberListBinding_m3623708527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberListBinding_t3353502159 * L_0 = ___binding0;
		NullCheck(L_0);
		MemberInfo_t * L_1 = MemberBinding_get_Member_m3336797922(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		ExpressionPrinter_Print_m2213693087(__this, L_2, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3181813962, /*hidden argument*/NULL);
		MemberListBinding_t3353502159 * L_3 = ___binding0;
		NullCheck(L_3);
		ReadOnlyCollection_1_t3895063248 * L_4 = MemberListBinding_get_Initializers_m460074968(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		Action_1_t2854954556 * L_6 = (Action_1_t2854954556 *)il2cpp_codegen_object_new(Action_1_t2854954556_il2cpp_TypeInfo_var);
		Action_1__ctor_m521837620(L_6, __this, (intptr_t)L_5, /*hidden argument*/Action_1__ctor_m521837620_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t3895063248 *, Action_1_t2854954556 * >::Invoke(ExpressionVisitor_VisitList_TisElementInit_t2682486961_m3463988893_RuntimeMethod_var, __this, L_4, L_6);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitLambda_m1976283827 (ExpressionPrinter_t2120383524 * __this, LambdaExpression_t3131094331 * ___lambda0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitLambda_m1976283827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LambdaExpression_t3131094331 * L_0 = ___lambda0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t2330998371 * L_1 = LambdaExpression_get_Parameters_m3130715867(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = ReadOnlyCollection_1_get_Count_m3216249872(L_1, /*hidden argument*/ReadOnlyCollection_1_get_Count_m3216249872_RuntimeMethod_var);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		LambdaExpression_t3131094331 * L_3 = ___lambda0;
		NullCheck(L_3);
		ReadOnlyCollection_1_t2330998371 * L_4 = LambdaExpression_get_Parameters_m3130715867(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = (intptr_t)GetVirtualMethodInfo(__this, 4);
		Action_1_t1290889679 * L_6 = (Action_1_t1290889679 *)il2cpp_codegen_object_new(Action_1_t1290889679_il2cpp_TypeInfo_var);
		Action_1__ctor_m757341569(L_6, __this, (intptr_t)L_5, /*hidden argument*/Action_1__ctor_m757341569_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t2330998371 *, Action_1_t1290889679 * >::Invoke(ExpressionVisitor_VisitList_TisParameterExpression_t1118422084_m3269433003_RuntimeMethod_var, __this, L_4, L_6);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		goto IL_0057;
	}

IL_0045:
	{
		LambdaExpression_t3131094331 * L_7 = ___lambda0;
		NullCheck(L_7);
		ReadOnlyCollection_1_t2330998371 * L_8 = LambdaExpression_get_Parameters_m3130715867(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		ParameterExpression_t1118422084 * L_9 = ReadOnlyCollection_1_get_Item_m1189576603(L_8, 0, /*hidden argument*/ReadOnlyCollection_1_get_Item_m1189576603_RuntimeMethod_var);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_9);
	}

IL_0057:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral89615844, /*hidden argument*/NULL);
		LambdaExpression_t3131094331 * L_10 = ___lambda0;
		NullCheck(L_10);
		Expression_t1588164026 * L_11 = LambdaExpression_get_Body_m872577278(L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_11);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitNew_m686720947 (ExpressionPrinter_t2120383524 * __this, NewExpression_t1271006003 * ___nex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitNew_m686720947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NewExpression_t1271006003 * L_2 = ___nex0;
		NullCheck(L_2);
		Type_t * L_3 = Expression_get_Type_m3318651915(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral339086443, L_1, /*hidden argument*/NULL);
		NewExpression_t1271006003 * L_5 = ___nex0;
		NullCheck(L_5);
		ReadOnlyCollection_1_t297610732 * L_6 = NewExpression_get_Members_m212325048(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00a5;
		}
	}
	{
		NewExpression_t1271006003 * L_7 = ___nex0;
		NullCheck(L_7);
		ReadOnlyCollection_1_t297610732 * L_8 = NewExpression_get_Members_m212325048(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ReadOnlyCollection_1_get_Count_m2483166938(L_8, /*hidden argument*/ReadOnlyCollection_1_get_Count_m2483166938_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00a5;
		}
	}
	{
		V_0 = 0;
		goto IL_008f;
	}

IL_0042:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3450517380, /*hidden argument*/NULL);
	}

IL_0054:
	{
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		NewExpression_t1271006003 * L_13 = ___nex0;
		NullCheck(L_13);
		ReadOnlyCollection_1_t297610732 * L_14 = NewExpression_get_Members_m212325048(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		MemberInfo_t * L_16 = ReadOnlyCollection_1_get_Item_m2250468099(L_14, L_15, /*hidden argument*/ReadOnlyCollection_1_get_Item_m2250468099_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_17);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		ExpressionPrinter_Print_m2798477873(__this, _stringLiteral1810271857, L_12, /*hidden argument*/NULL);
		NewExpression_t1271006003 * L_18 = ___nex0;
		NullCheck(L_18);
		ReadOnlyCollection_1_t2800740313 * L_19 = NewExpression_get_Arguments_m1504132429(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		NullCheck(L_19);
		Expression_t1588164026 * L_21 = ReadOnlyCollection_1_get_Item_m3207760739(L_19, L_20, /*hidden argument*/ReadOnlyCollection_1_get_Item_m3207760739_RuntimeMethod_var);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_21);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		NewExpression_t1271006003 * L_24 = ___nex0;
		NullCheck(L_24);
		ReadOnlyCollection_1_t297610732 * L_25 = NewExpression_get_Members_m212325048(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		int32_t L_26 = ReadOnlyCollection_1_get_Count_m2483166938(L_25, /*hidden argument*/ReadOnlyCollection_1_get_Count_m2483166938_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0042;
		}
	}
	{
		goto IL_00b1;
	}

IL_00a5:
	{
		NewExpression_t1271006003 * L_27 = ___nex0;
		NullCheck(L_27);
		ReadOnlyCollection_1_t2800740313 * L_28 = NewExpression_get_Arguments_m1504132429(L_27, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_28);
	}

IL_00b1:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitMemberInit_m2120763772 (ExpressionPrinter_t2120383524 * __this, MemberInitExpression_t676945469 * ___init0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitMemberInit_m2120763772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInitExpression_t676945469 * L_0 = ___init0;
		NullCheck(L_0);
		NewExpression_t1271006003 * L_1 = MemberInitExpression_get_NewExpression_m1059333861(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3456087936, /*hidden argument*/NULL);
		MemberInitExpression_t676945469 * L_2 = ___init0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t1478067987 * L_3 = MemberInitExpression_get_Bindings_m1935169625(L_2, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)GetVirtualMethodInfo(__this, 5);
		Action_1_t437959295 * L_5 = (Action_1_t437959295 *)il2cpp_codegen_object_new(Action_1_t437959295_il2cpp_TypeInfo_var);
		Action_1__ctor_m1086995192(L_5, __this, (intptr_t)L_4, /*hidden argument*/Action_1__ctor_m1086995192_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t1478067987 *, Action_1_t437959295 * >::Invoke(ExpressionVisitor_VisitList_TisMemberBinding_t265491700_m3317302336_RuntimeMethod_var, __this, L_3, L_5);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitListInit_m1063702748 (ExpressionPrinter_t2120383524 * __this, ListInitExpression_t4000042569 * ___init0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitListInit_m1063702748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ListInitExpression_t4000042569 * L_0 = ___init0;
		NullCheck(L_0);
		NewExpression_t1271006003 * L_1 = ListInitExpression_get_NewExpression_m674899584(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3456087936, /*hidden argument*/NULL);
		ListInitExpression_t4000042569 * L_2 = ___init0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t3895063248 * L_3 = ListInitExpression_get_Initializers_m501817842(L_2, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		Action_1_t2854954556 * L_5 = (Action_1_t2854954556 *)il2cpp_codegen_object_new(Action_1_t2854954556_il2cpp_TypeInfo_var);
		Action_1__ctor_m521837620(L_5, __this, (intptr_t)L_4, /*hidden argument*/Action_1__ctor_m521837620_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t3895063248 *, Action_1_t2854954556 * >::Invoke(ExpressionVisitor_VisitList_TisElementInit_t2682486961_m3463988893_RuntimeMethod_var, __this, L_3, L_5);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitNewArray_m3475799212 (ExpressionPrinter_t2120383524 * __this, NewArrayExpression_t679298166 * ___newArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitNewArray_m3475799212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral327508185, /*hidden argument*/NULL);
		NewArrayExpression_t679298166 * L_0 = ___newArray0;
		NullCheck(L_0);
		int32_t L_1 = Expression_get_NodeType_m2930019583(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0079;
	}

IL_0027:
	{
		NewArrayExpression_t679298166 * L_4 = ___newArray0;
		NullCheck(L_4);
		Type_t * L_5 = Expression_get_Type_m3318651915(L_4, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m3624003222(__this, L_5, /*hidden argument*/NULL);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614536, /*hidden argument*/NULL);
		NewArrayExpression_t679298166 * L_6 = ___newArray0;
		NullCheck(L_6);
		ReadOnlyCollection_1_t2800740313 * L_7 = NewArrayExpression_get_Expressions_m3464497019(L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_7);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
		return;
	}

IL_0056:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3188105535, /*hidden argument*/NULL);
		NewArrayExpression_t679298166 * L_8 = ___newArray0;
		NullCheck(L_8);
		ReadOnlyCollection_1_t2800740313 * L_9 = NewArrayExpression_get_Expressions_m3464497019(L_8, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_9);
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614611, /*hidden argument*/NULL);
		return;
	}

IL_0079:
	{
		NotSupportedException_t1314879016 * L_10 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, ExpressionPrinter_VisitNewArray_m3475799212_RuntimeMethod_var);
	}
}
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionPrinter_VisitInvocation_m4287485943 (ExpressionPrinter_t2120383524 * __this, InvocationExpression_t3698930233 * ___invocation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionPrinter_VisitInvocation_m4287485943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral560592250, /*hidden argument*/NULL);
		InvocationExpression_t3698930233 * L_0 = ___invocation0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = InvocationExpression_get_Expression_m4051150720(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		InvocationExpression_t3698930233 * L_2 = ___invocation0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t2800740313 * L_3 = InvocationExpression_get_Arguments_m3727914624(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = ReadOnlyCollection_1_get_Count_m2443279563(L_3, /*hidden argument*/ReadOnlyCollection_1_get_Count_m2443279563_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3450517380, /*hidden argument*/NULL);
		InvocationExpression_t3698930233 * L_5 = ___invocation0;
		NullCheck(L_5);
		ReadOnlyCollection_1_t2800740313 * L_6 = InvocationExpression_get_Arguments_m3727914624(L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_6);
	}

IL_003e:
	{
		ExpressionPrinter_Print_m2213693087(__this, _stringLiteral3452614535, /*hidden argument*/NULL);
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
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m583967485 (ExpressionVisitor_t1561124052 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_Visit_m3238193698 (ExpressionVisitor_t1561124052 * __this, Expression_t1588164026 * ___expression0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionVisitor_Visit_m3238193698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Expression_t1588164026 * L_0 = ___expression0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		Expression_t1588164026 * L_1 = ___expression0;
		NullCheck(L_1);
		int32_t L_2 = Expression_get_NodeType_m2930019583(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_00e2;
			}
			case 1:
			{
				goto IL_00e2;
			}
			case 2:
			{
				goto IL_00e2;
			}
			case 3:
			{
				goto IL_00e2;
			}
			case 4:
			{
				goto IL_00d1;
			}
			case 5:
			{
				goto IL_00e2;
			}
			case 6:
			{
				goto IL_0148;
			}
			case 7:
			{
				goto IL_00e2;
			}
			case 8:
			{
				goto IL_0104;
			}
			case 9:
			{
				goto IL_0115;
			}
			case 10:
			{
				goto IL_00d1;
			}
			case 11:
			{
				goto IL_00d1;
			}
			case 12:
			{
				goto IL_00e2;
			}
			case 13:
			{
				goto IL_00e2;
			}
			case 14:
			{
				goto IL_00e2;
			}
			case 15:
			{
				goto IL_00e2;
			}
			case 16:
			{
				goto IL_00e2;
			}
			case 17:
			{
				goto IL_018c;
			}
			case 18:
			{
				goto IL_0159;
			}
			case 19:
			{
				goto IL_00e2;
			}
			case 20:
			{
				goto IL_00e2;
			}
			case 21:
			{
				goto IL_00e2;
			}
			case 22:
			{
				goto IL_01ae;
			}
			case 23:
			{
				goto IL_0137;
			}
			case 24:
			{
				goto IL_019d;
			}
			case 25:
			{
				goto IL_00e2;
			}
			case 26:
			{
				goto IL_00e2;
			}
			case 27:
			{
				goto IL_00e2;
			}
			case 28:
			{
				goto IL_00d1;
			}
			case 29:
			{
				goto IL_00d1;
			}
			case 30:
			{
				goto IL_00d1;
			}
			case 31:
			{
				goto IL_016a;
			}
			case 32:
			{
				goto IL_017b;
			}
			case 33:
			{
				goto IL_017b;
			}
			case 34:
			{
				goto IL_00d1;
			}
			case 35:
			{
				goto IL_00e2;
			}
			case 36:
			{
				goto IL_00e2;
			}
			case 37:
			{
				goto IL_00e2;
			}
			case 38:
			{
				goto IL_0126;
			}
			case 39:
			{
				goto IL_00e2;
			}
			case 40:
			{
				goto IL_00d1;
			}
			case 41:
			{
				goto IL_00e2;
			}
			case 42:
			{
				goto IL_00e2;
			}
			case 43:
			{
				goto IL_00e2;
			}
			case 44:
			{
				goto IL_00d1;
			}
			case 45:
			{
				goto IL_00f3;
			}
		}
	}
	{
		goto IL_01bf;
	}

IL_00d1:
	{
		Expression_t1588164026 * L_4 = ___expression0;
		VirtActionInvoker1< UnaryExpression_t3914580921 * >::Invoke(7 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression) */, __this, ((UnaryExpression_t3914580921 *)CastclassSealed((RuntimeObject*)L_4, UnaryExpression_t3914580921_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_00e2:
	{
		Expression_t1588164026 * L_5 = ___expression0;
		VirtActionInvoker1< BinaryExpression_t77573129 * >::Invoke(8 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression) */, __this, ((BinaryExpression_t77573129 *)CastclassSealed((RuntimeObject*)L_5, BinaryExpression_t77573129_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_00f3:
	{
		Expression_t1588164026 * L_6 = ___expression0;
		VirtActionInvoker1< TypeBinaryExpression_t2086022908 * >::Invoke(9 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression) */, __this, ((TypeBinaryExpression_t2086022908 *)CastclassSealed((RuntimeObject*)L_6, TypeBinaryExpression_t2086022908_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0104:
	{
		Expression_t1588164026 * L_7 = ___expression0;
		VirtActionInvoker1< ConditionalExpression_t1874387742 * >::Invoke(11 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression) */, __this, ((ConditionalExpression_t1874387742 *)CastclassSealed((RuntimeObject*)L_7, ConditionalExpression_t1874387742_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0115:
	{
		Expression_t1588164026 * L_8 = ___expression0;
		VirtActionInvoker1< ConstantExpression_t3613654278 * >::Invoke(10 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression) */, __this, ((ConstantExpression_t3613654278 *)CastclassSealed((RuntimeObject*)L_8, ConstantExpression_t3613654278_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0126:
	{
		Expression_t1588164026 * L_9 = ___expression0;
		VirtActionInvoker1< ParameterExpression_t1118422084 * >::Invoke(12 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression) */, __this, ((ParameterExpression_t1118422084 *)CastclassSealed((RuntimeObject*)L_9, ParameterExpression_t1118422084_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0137:
	{
		Expression_t1588164026 * L_10 = ___expression0;
		VirtActionInvoker1< MemberExpression_t2956213603 * >::Invoke(13 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression) */, __this, ((MemberExpression_t2956213603 *)CastclassSealed((RuntimeObject*)L_10, MemberExpression_t2956213603_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0148:
	{
		Expression_t1588164026 * L_11 = ___expression0;
		VirtActionInvoker1< MethodCallExpression_t3675920717 * >::Invoke(14 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression) */, __this, ((MethodCallExpression_t3675920717 *)CastclassSealed((RuntimeObject*)L_11, MethodCallExpression_t3675920717_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_0159:
	{
		Expression_t1588164026 * L_12 = ___expression0;
		VirtActionInvoker1< LambdaExpression_t3131094331 * >::Invoke(22 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression) */, __this, ((LambdaExpression_t3131094331 *)CastclassClass((RuntimeObject*)L_12, LambdaExpression_t3131094331_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_016a:
	{
		Expression_t1588164026 * L_13 = ___expression0;
		VirtActionInvoker1< NewExpression_t1271006003 * >::Invoke(23 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression) */, __this, ((NewExpression_t1271006003 *)CastclassSealed((RuntimeObject*)L_13, NewExpression_t1271006003_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_017b:
	{
		Expression_t1588164026 * L_14 = ___expression0;
		VirtActionInvoker1< NewArrayExpression_t679298166 * >::Invoke(26 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression) */, __this, ((NewArrayExpression_t679298166 *)CastclassSealed((RuntimeObject*)L_14, NewArrayExpression_t679298166_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_018c:
	{
		Expression_t1588164026 * L_15 = ___expression0;
		VirtActionInvoker1< InvocationExpression_t3698930233 * >::Invoke(27 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression) */, __this, ((InvocationExpression_t3698930233 *)CastclassSealed((RuntimeObject*)L_15, InvocationExpression_t3698930233_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_019d:
	{
		Expression_t1588164026 * L_16 = ___expression0;
		VirtActionInvoker1< MemberInitExpression_t676945469 * >::Invoke(24 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression) */, __this, ((MemberInitExpression_t676945469 *)CastclassSealed((RuntimeObject*)L_16, MemberInitExpression_t676945469_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_01ae:
	{
		Expression_t1588164026 * L_17 = ___expression0;
		VirtActionInvoker1< ListInitExpression_t4000042569 * >::Invoke(25 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression) */, __this, ((ListInitExpression_t4000042569 *)CastclassSealed((RuntimeObject*)L_17, ListInitExpression_t4000042569_il2cpp_TypeInfo_var)));
		goto IL_01da;
	}

IL_01bf:
	{
		Expression_t1588164026 * L_18 = ___expression0;
		NullCheck(L_18);
		int32_t L_19 = Expression_get_NodeType_m2930019583(L_18, /*hidden argument*/NULL);
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(ExpressionType_t2886294549_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral356329547, L_21, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_23 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_23, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, ExpressionVisitor_Visit_m3238193698_RuntimeMethod_var);
	}

IL_01da:
	{
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitBinding_m1636609709 (ExpressionVisitor_t1561124052 * __this, MemberBinding_t265491700 * ___binding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionVisitor_VisitBinding_m1636609709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberBinding_t265491700 * L_0 = ___binding0;
		NullCheck(L_0);
		int32_t L_1 = MemberBinding_get_BindingType_m4112689226(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_001e:
	{
		MemberBinding_t265491700 * L_3 = ___binding0;
		VirtActionInvoker1< MemberAssignment_t1201848431 * >::Invoke(17 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment) */, __this, ((MemberAssignment_t1201848431 *)CastclassSealed((RuntimeObject*)L_3, MemberAssignment_t1201848431_il2cpp_TypeInfo_var)));
		goto IL_006c;
	}

IL_002f:
	{
		MemberBinding_t265491700 * L_4 = ___binding0;
		VirtActionInvoker1< MemberMemberBinding_t3826576684 * >::Invoke(18 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding) */, __this, ((MemberMemberBinding_t3826576684 *)CastclassSealed((RuntimeObject*)L_4, MemberMemberBinding_t3826576684_il2cpp_TypeInfo_var)));
		goto IL_006c;
	}

IL_0040:
	{
		MemberBinding_t265491700 * L_5 = ___binding0;
		VirtActionInvoker1< MemberListBinding_t3353502159 * >::Invoke(19 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding) */, __this, ((MemberListBinding_t3353502159 *)CastclassSealed((RuntimeObject*)L_5, MemberListBinding_t3353502159_il2cpp_TypeInfo_var)));
		goto IL_006c;
	}

IL_0051:
	{
		MemberBinding_t265491700 * L_6 = ___binding0;
		NullCheck(L_6);
		int32_t L_7 = MemberBinding_get_BindingType_m4112689226(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(MemberBindingType_t648944624_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2495112056, L_9, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ExpressionVisitor_VisitBinding_m1636609709_RuntimeMethod_var);
	}

IL_006c:
	{
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitElementInitializer_m282263183 (ExpressionVisitor_t1561124052 * __this, ElementInit_t2682486961 * ___initializer0, const RuntimeMethod* method)
{
	{
		ElementInit_t2682486961 * L_0 = ___initializer0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t2800740313 * L_1 = ElementInit_get_Arguments_m4152899655(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitUnary_m358598023 (ExpressionVisitor_t1561124052 * __this, UnaryExpression_t3914580921 * ___unary0, const RuntimeMethod* method)
{
	{
		UnaryExpression_t3914580921 * L_0 = ___unary0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = UnaryExpression_get_Operand_m4259740027(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitBinary_m72017849 (ExpressionVisitor_t1561124052 * __this, BinaryExpression_t77573129 * ___binary0, const RuntimeMethod* method)
{
	{
		BinaryExpression_t77573129 * L_0 = ___binary0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = BinaryExpression_get_Left_m2696259424(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		BinaryExpression_t77573129 * L_2 = ___binary0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = BinaryExpression_get_Right_m4063605363(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		BinaryExpression_t77573129 * L_4 = ___binary0;
		NullCheck(L_4);
		LambdaExpression_t3131094331 * L_5 = BinaryExpression_get_Conversion_m3082139200(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_5);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitTypeIs_m2243103659 (ExpressionVisitor_t1561124052 * __this, TypeBinaryExpression_t2086022908 * ___type0, const RuntimeMethod* method)
{
	{
		TypeBinaryExpression_t2086022908 * L_0 = ___type0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = TypeBinaryExpression_get_Expression_m3342510543(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitConstant_m242046764 (ExpressionVisitor_t1561124052 * __this, ConstantExpression_t3613654278 * ___constant0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitConditional_m2913264709 (ExpressionVisitor_t1561124052 * __this, ConditionalExpression_t1874387742 * ___conditional0, const RuntimeMethod* method)
{
	{
		ConditionalExpression_t1874387742 * L_0 = ___conditional0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = ConditionalExpression_get_Test_m2318551020(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		ConditionalExpression_t1874387742 * L_2 = ___conditional0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = ConditionalExpression_get_IfTrue_m2644523070(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
		ConditionalExpression_t1874387742 * L_4 = ___conditional0;
		NullCheck(L_4);
		Expression_t1588164026 * L_5 = ConditionalExpression_get_IfFalse_m2385420502(L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_5);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitParameter_m806276623 (ExpressionVisitor_t1561124052 * __this, ParameterExpression_t1118422084 * ___parameter0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMemberAccess_m3680895393 (ExpressionVisitor_t1561124052 * __this, MemberExpression_t2956213603 * ___member0, const RuntimeMethod* method)
{
	{
		MemberExpression_t2956213603 * L_0 = ___member0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = MemberExpression_get_Expression_m2281151650(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMethodCall_m34893273 (ExpressionVisitor_t1561124052 * __this, MethodCallExpression_t3675920717 * ___methodCall0, const RuntimeMethod* method)
{
	{
		MethodCallExpression_t3675920717 * L_0 = ___methodCall0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = MethodCallExpression_get_Object_m280553409(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		MethodCallExpression_t3675920717 * L_2 = ___methodCall0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t2800740313 * L_3 = MethodCallExpression_get_Arguments_m122658011(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_3);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitExpressionList_m2907260662 (ExpressionVisitor_t1561124052 * __this, ReadOnlyCollection_1_t2800740313 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionVisitor_VisitExpressionList_m2907260662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = ___list0;
		intptr_t L_1 = (intptr_t)GetVirtualMethodInfo(__this, 4);
		Action_1_t1760631621 * L_2 = (Action_1_t1760631621 *)il2cpp_codegen_object_new(Action_1_t1760631621_il2cpp_TypeInfo_var);
		Action_1__ctor_m2050332088(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m2050332088_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t2800740313 *, Action_1_t1760631621 * >::Invoke(ExpressionVisitor_VisitList_TisExpression_t1588164026_m3347616343_RuntimeMethod_var, __this, L_0, L_2);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMemberAssignment_m1713140545 (ExpressionVisitor_t1561124052 * __this, MemberAssignment_t1201848431 * ___assignment0, const RuntimeMethod* method)
{
	{
		MemberAssignment_t1201848431 * L_0 = ___assignment0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = MemberAssignment_get_Expression_m1732568863(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMemberMemberBinding_m1154267345 (ExpressionVisitor_t1561124052 * __this, MemberMemberBinding_t3826576684 * ___binding0, const RuntimeMethod* method)
{
	{
		MemberMemberBinding_t3826576684 * L_0 = ___binding0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t1478067987 * L_1 = MemberMemberBinding_get_Bindings_m1599294955(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t1478067987 * >::Invoke(20 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMemberListBinding_m299472766 (ExpressionVisitor_t1561124052 * __this, MemberListBinding_t3353502159 * ___binding0, const RuntimeMethod* method)
{
	{
		MemberListBinding_t3353502159 * L_0 = ___binding0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t3895063248 * L_1 = MemberListBinding_get_Initializers_m460074968(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t3895063248 * >::Invoke(21 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitBindingList_m1328016562 (ExpressionVisitor_t1561124052 * __this, ReadOnlyCollection_1_t1478067987 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionVisitor_VisitBindingList_m1328016562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyCollection_1_t1478067987 * L_0 = ___list0;
		intptr_t L_1 = (intptr_t)GetVirtualMethodInfo(__this, 5);
		Action_1_t437959295 * L_2 = (Action_1_t437959295 *)il2cpp_codegen_object_new(Action_1_t437959295_il2cpp_TypeInfo_var);
		Action_1__ctor_m1086995192(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m1086995192_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t1478067987 *, Action_1_t437959295 * >::Invoke(ExpressionVisitor_VisitList_TisMemberBinding_t265491700_m3317302336_RuntimeMethod_var, __this, L_0, L_2);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitElementInitializerList_m226941505 (ExpressionVisitor_t1561124052 * __this, ReadOnlyCollection_1_t3895063248 * ___list0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExpressionVisitor_VisitElementInitializerList_m226941505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyCollection_1_t3895063248 * L_0 = ___list0;
		intptr_t L_1 = (intptr_t)GetVirtualMethodInfo(__this, 6);
		Action_1_t2854954556 * L_2 = (Action_1_t2854954556 *)il2cpp_codegen_object_new(Action_1_t2854954556_il2cpp_TypeInfo_var);
		Action_1__ctor_m521837620(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m521837620_RuntimeMethod_var);
		GenericVirtActionInvoker2< ReadOnlyCollection_1_t3895063248 *, Action_1_t2854954556 * >::Invoke(ExpressionVisitor_VisitList_TisElementInit_t2682486961_m3463988893_RuntimeMethod_var, __this, L_0, L_2);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitLambda_m423322362 (ExpressionVisitor_t1561124052 * __this, LambdaExpression_t3131094331 * ___lambda0, const RuntimeMethod* method)
{
	{
		LambdaExpression_t3131094331 * L_0 = ___lambda0;
		NullCheck(L_0);
		Expression_t1588164026 * L_1 = LambdaExpression_get_Body_m872577278(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitNew_m510235719 (ExpressionVisitor_t1561124052 * __this, NewExpression_t1271006003 * ___nex0, const RuntimeMethod* method)
{
	{
		NewExpression_t1271006003 * L_0 = ___nex0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t2800740313 * L_1 = NewExpression_get_Arguments_m1504132429(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitMemberInit_m1176107652 (ExpressionVisitor_t1561124052 * __this, MemberInitExpression_t676945469 * ___init0, const RuntimeMethod* method)
{
	{
		MemberInitExpression_t676945469 * L_0 = ___init0;
		NullCheck(L_0);
		NewExpression_t1271006003 * L_1 = MemberInitExpression_get_NewExpression_m1059333861(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< NewExpression_t1271006003 * >::Invoke(23 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression) */, __this, L_1);
		MemberInitExpression_t676945469 * L_2 = ___init0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t1478067987 * L_3 = MemberInitExpression_get_Bindings_m1935169625(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t1478067987 * >::Invoke(20 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>) */, __this, L_3);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitListInit_m1656484009 (ExpressionVisitor_t1561124052 * __this, ListInitExpression_t4000042569 * ___init0, const RuntimeMethod* method)
{
	{
		ListInitExpression_t4000042569 * L_0 = ___init0;
		NullCheck(L_0);
		NewExpression_t1271006003 * L_1 = ListInitExpression_get_NewExpression_m674899584(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< NewExpression_t1271006003 * >::Invoke(23 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression) */, __this, L_1);
		ListInitExpression_t4000042569 * L_2 = ___init0;
		NullCheck(L_2);
		ReadOnlyCollection_1_t3895063248 * L_3 = ListInitExpression_get_Initializers_m501817842(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t3895063248 * >::Invoke(21 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>) */, __this, L_3);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitNewArray_m3312496240 (ExpressionVisitor_t1561124052 * __this, NewArrayExpression_t679298166 * ___newArray0, const RuntimeMethod* method)
{
	{
		NewArrayExpression_t679298166 * L_0 = ___newArray0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t2800740313 * L_1 = NewArrayExpression_get_Expressions_m3464497019(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_1);
		return;
	}
}
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
extern "C" IL2CPP_METHOD_ATTR void ExpressionVisitor_VisitInvocation_m1710443739 (ExpressionVisitor_t1561124052 * __this, InvocationExpression_t3698930233 * ___invocation0, const RuntimeMethod* method)
{
	{
		InvocationExpression_t3698930233 * L_0 = ___invocation0;
		NullCheck(L_0);
		ReadOnlyCollection_1_t2800740313 * L_1 = InvocationExpression_get_Arguments_m3727914624(L_0, /*hidden argument*/NULL);
		VirtActionInvoker1< ReadOnlyCollection_1_t2800740313 * >::Invoke(16 /* System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>) */, __this, L_1);
		InvocationExpression_t3698930233 * L_2 = ___invocation0;
		NullCheck(L_2);
		Expression_t1588164026 * L_3 = InvocationExpression_get_Expression_m4051150720(L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< Expression_t1588164026 * >::Invoke(4 /* System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_3);
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
// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsGenericInstanceOf_m2766332956 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, Type_t * ___type1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___self0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Type_t * L_2 = ___self0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t * L_4 = ___type1;
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))? 1 : 0);
	}
}
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsNullable_m780193409 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_IsNullable_m780193409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___self0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m3108065642(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_2 = ___self0;
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Nullable_1_t3772285925_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		bool L_5 = Extensions_IsGenericInstanceOf_m2766332956(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsExpression_m3809696797 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_IsExpression_m3809696797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___self0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Expression_t1588164026_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_3 = ___self0;
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (Expression_t1588164026_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_3, L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_IsAssignableTo_m3054773707 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, Type_t * ___type1, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = ___type1;
		Type_t * L_1 = ___self0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_3 = ___self0;
		Type_t * L_4 = ___type1;
		bool L_5 = Extensions_ArrayTypeIsAssignableTo_m2248005716(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Extensions_GetInvokeMethod_m2591588064 (RuntimeObject * __this /* static, unused */, Type_t * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Extensions_GetInvokeMethod_m2591588064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Type_GetMethod_m1197120913(L_0, _stringLiteral2401610308, ((int32_t)20), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Extensions_ArrayTypeIsAssignableTo_m2248005716 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___candidate1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsArray_m2591212821(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___candidate1;
		NullCheck(L_2);
		bool L_3 = Type_get_IsArray_m2591212821(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(44 /* System.Int32 System.Type::GetArrayRank() */, L_4);
		Type_t * L_6 = ___candidate1;
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(44 /* System.Int32 System.Type::GetArrayRank() */, L_6);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		Type_t * L_8 = ___type0;
		NullCheck(L_8);
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_8);
		Type_t * L_10 = ___candidate1;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_10);
		bool L_12 = Extensions_IsAssignableTo_m3054773707(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * InvocationExpression_get_Expression_m4051150720 (InvocationExpression_t3698930233 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_expression_2();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * InvocationExpression_get_Arguments_m3727914624 (InvocationExpression_t3698930233 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = __this->get_arguments_3();
		return L_0;
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
// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
extern "C" IL2CPP_METHOD_ATTR void LambdaExpression__ctor_m731497957 (LambdaExpression_t3131094331 * __this, Type_t * ___delegateType0, Expression_t1588164026 * ___body1, ReadOnlyCollection_1_t2330998371 * ___parameters2, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___delegateType0;
		Expression__ctor_m2516416328(__this, ((int32_t)18), L_0, /*hidden argument*/NULL);
		Expression_t1588164026 * L_1 = ___body1;
		__this->set_body_2(L_1);
		ReadOnlyCollection_1_t2330998371 * L_2 = ___parameters2;
		__this->set_parameters_3(L_2);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * LambdaExpression_get_Body_m872577278 (LambdaExpression_t3131094331 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_body_2();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2330998371 * LambdaExpression_get_Parameters_m3130715867 (LambdaExpression_t3131094331 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2330998371 * L_0 = __this->get_parameters_3();
		return L_0;
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
// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::get_NewExpression()
extern "C" IL2CPP_METHOD_ATTR NewExpression_t1271006003 * ListInitExpression_get_NewExpression_m674899584 (ListInitExpression_t4000042569 * __this, const RuntimeMethod* method)
{
	{
		NewExpression_t1271006003 * L_0 = __this->get_new_expression_2();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::get_Initializers()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3895063248 * ListInitExpression_get_Initializers_m501817842 (ListInitExpression_t4000042569 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t3895063248 * L_0 = __this->get_initializers_3();
		return L_0;
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
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberAssignment::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MemberAssignment_get_Expression_m1732568863 (MemberAssignment_t1201848431 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_expression_2();
		return L_0;
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
// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::get_BindingType()
extern "C" IL2CPP_METHOD_ATTR int32_t MemberBinding_get_BindingType_m4112689226 (MemberBinding_t265491700 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_binding_type_0();
		return L_0;
	}
}
// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::get_Member()
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * MemberBinding_get_Member_m3336797922 (MemberBinding_t265491700 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_member_1();
		return L_0;
	}
}
// System.String System.Linq.Expressions.MemberBinding::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MemberBinding_ToString_m2825554407 (MemberBinding_t265491700 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ExpressionPrinter_ToString_m2797236515(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void System.Linq.Expressions.MemberExpression::.ctor(System.Linq.Expressions.Expression,System.Reflection.MemberInfo,System.Type)
extern "C" IL2CPP_METHOD_ATTR void MemberExpression__ctor_m4019112431 (MemberExpression_t2956213603 * __this, Expression_t1588164026 * ___expression0, MemberInfo_t * ___member1, Type_t * ___type2, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type2;
		Expression__ctor_m2516416328(__this, ((int32_t)23), L_0, /*hidden argument*/NULL);
		Expression_t1588164026 * L_1 = ___expression0;
		__this->set_expression_2(L_1);
		MemberInfo_t * L_2 = ___member1;
		__this->set_member_3(L_2);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MemberExpression_get_Expression_m2281151650 (MemberExpression_t2956213603 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_expression_2();
		return L_0;
	}
}
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern "C" IL2CPP_METHOD_ATTR MemberInfo_t * MemberExpression_get_Member_m322166973 (MemberExpression_t2956213603 * __this, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = __this->get_member_3();
		return L_0;
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
// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::get_NewExpression()
extern "C" IL2CPP_METHOD_ATTR NewExpression_t1271006003 * MemberInitExpression_get_NewExpression_m1059333861 (MemberInitExpression_t676945469 * __this, const RuntimeMethod* method)
{
	{
		NewExpression_t1271006003 * L_0 = __this->get_new_expression_2();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::get_Bindings()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1478067987 * MemberInitExpression_get_Bindings_m1935169625 (MemberInitExpression_t676945469 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t1478067987 * L_0 = __this->get_bindings_3();
		return L_0;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::get_Initializers()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t3895063248 * MemberListBinding_get_Initializers_m460074968 (MemberListBinding_t3353502159 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t3895063248 * L_0 = __this->get_initializers_2();
		return L_0;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::get_Bindings()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t1478067987 * MemberMemberBinding_get_Bindings_m1599294955 (MemberMemberBinding_t3826576684 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t1478067987 * L_0 = __this->get_bindings_2();
		return L_0;
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
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * MethodCallExpression_get_Object_m280553409 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_obj_2();
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * MethodCallExpression_get_Method_m910238317 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method)
{
	{
		MethodInfo_t * L_0 = __this->get_method_3();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * MethodCallExpression_get_Arguments_m122658011 (MethodCallExpression_t3675920717 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = __this->get_arguments_4();
		return L_0;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::get_Expressions()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * NewArrayExpression_get_Expressions_m3464497019 (NewArrayExpression_t679298166 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = __this->get_expressions_2();
		return L_0;
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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::get_Arguments()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2800740313 * NewExpression_get_Arguments_m1504132429 (NewExpression_t1271006003 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t2800740313 * L_0 = __this->get_arguments_2();
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::get_Members()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t297610732 * NewExpression_get_Members_m212325048 (NewExpression_t1271006003 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t297610732 * L_0 = __this->get_members_3();
		return L_0;
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
// System.String System.Linq.Expressions.ParameterExpression::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* ParameterExpression_get_Name_m1531348536 (ParameterExpression_t1118422084 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_2();
		return L_0;
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
// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::get_Expression()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * TypeBinaryExpression_get_Expression_m3342510543 (TypeBinaryExpression_t2086022908 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_expression_2();
		return L_0;
	}
}
// System.Type System.Linq.Expressions.TypeBinaryExpression::get_TypeOperand()
extern "C" IL2CPP_METHOD_ATTR Type_t * TypeBinaryExpression_get_TypeOperand_m354187380 (TypeBinaryExpression_t2086022908 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_type_operand_3();
		return L_0;
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
// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
extern "C" IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m2387618479 (UnaryExpression_t3914580921 * __this, int32_t ___node_type0, Expression_t1588164026 * ___operand1, Type_t * ___type2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___node_type0;
		Type_t * L_1 = ___type2;
		Expression__ctor_m2516416328(__this, L_0, L_1, /*hidden argument*/NULL);
		Expression_t1588164026 * L_2 = ___operand1;
		__this->set_operand_2(L_2);
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern "C" IL2CPP_METHOD_ATTR Expression_t1588164026 * UnaryExpression_get_Operand_m4259740027 (UnaryExpression_t3914580921 * __this, const RuntimeMethod* method)
{
	{
		Expression_t1588164026 * L_0 = __this->get_operand_2();
		return L_0;
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
// System.Void System.MonoTODOAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoTODOAttribute__ctor_m2619396706 (MonoTODOAttribute_t4131080583 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ExtensionAttribute__ctor_m1708143005 (ExtensionAttribute_t1723066603 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
// System.Void System.Security.Cryptography.Aes::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Aes__ctor_m178909601 (Aes_t1218282760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Aes__ctor_m178909601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SymmetricAlgorithm__ctor_m467277132(__this, /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_KeySizeValue_2(((int32_t)256));
		((SymmetricAlgorithm_t4254223087 *)__this)->set_BlockSizeValue_0(((int32_t)128));
		KeySizesU5BU5D_t722666473* L_0 = (KeySizesU5BU5D_t722666473*)SZArrayNew(KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var, (uint32_t)1);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_LegalKeySizesValue_5(L_0);
		KeySizesU5BU5D_t722666473* L_1 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_LegalKeySizesValue_5();
		KeySizes_t85027896 * L_2 = (KeySizes_t85027896 *)il2cpp_codegen_object_new(KeySizes_t85027896_il2cpp_TypeInfo_var);
		KeySizes__ctor_m3113946058(L_2, ((int32_t)128), ((int32_t)256), ((int32_t)64), /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t85027896 *)L_2);
		KeySizesU5BU5D_t722666473* L_3 = (KeySizesU5BU5D_t722666473*)SZArrayNew(KeySizesU5BU5D_t722666473_il2cpp_TypeInfo_var, (uint32_t)1);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_LegalBlockSizesValue_4(L_3);
		KeySizesU5BU5D_t722666473* L_4 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_LegalBlockSizesValue_4();
		KeySizes_t85027896 * L_5 = (KeySizes_t85027896 *)il2cpp_codegen_object_new(KeySizes_t85027896_il2cpp_TypeInfo_var);
		KeySizes__ctor_m3113946058(L_5, ((int32_t)128), ((int32_t)128), 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (KeySizes_t85027896 *)L_5);
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
// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AesManaged__ctor_m1349486362 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		Aes__ctor_m178909601(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C" IL2CPP_METHOD_ATTR void AesManaged_GenerateIV_m1368817386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_BlockSizeValue_0();
		ByteU5BU5D_t4116647657* L_1 = KeyBuilder_IV_m3340234014(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_IVValue_1(L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C" IL2CPP_METHOD_ATTR void AesManaged_GenerateKey_m2004209814 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((SymmetricAlgorithm_t4254223087 *)__this)->get_KeySizeValue_2();
		ByteU5BU5D_t4116647657* L_1 = KeyBuilder_Key_m2503211157(NULL /*static, unused*/, ((int32_t)((int32_t)L_0>>(int32_t)3)), /*hidden argument*/NULL);
		((SymmetricAlgorithm_t4254223087 *)__this)->set_KeyValue_3(L_1);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateDecryptor_m692040246 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesManaged_CreateDecryptor_m692040246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbKey0;
		ByteU5BU5D_t4116647657* L_1 = ___rgbIV1;
		AesTransform_t2957123611 * L_2 = (AesTransform_t2957123611 *)il2cpp_codegen_object_new(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3143546745(L_2, __this, (bool)0, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateEncryptor_m2294080233 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbIV1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesManaged_CreateEncryptor_m2294080233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbKey0;
		ByteU5BU5D_t4116647657* L_1 = ___rgbIV1;
		AesTransform_t2957123611 * L_2 = (AesTransform_t2957123611 *)il2cpp_codegen_object_new(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		AesTransform__ctor_m3143546745(L_2, __this, (bool)1, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AesManaged_get_IV_m118095902 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = SymmetricAlgorithm_get_IV_m1875559108(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AesManaged_set_IV_m3705704588 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		SymmetricAlgorithm_set_IV_m3196220308(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* AesManaged_get_Key_m538801386 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = SymmetricAlgorithm_get_Key_m3241860519(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AesManaged_set_Key_m767972181 (AesManaged_t1129950597 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		SymmetricAlgorithm_set_Key_m1775642191(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C" IL2CPP_METHOD_ATTR int32_t AesManaged_get_KeySize_m1181452829 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = SymmetricAlgorithm_get_KeySize_m4185004893(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AesManaged_set_KeySize_m1150692274 (AesManaged_t1129950597 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		SymmetricAlgorithm_set_KeySize_m3805756466(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateDecryptor_m752875210 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = AesManaged_get_Key_m538801386(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = AesManaged_get_IV_m118095902(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = AesManaged_CreateDecryptor_m692040246(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AesManaged_CreateEncryptor_m1611897367 (AesManaged_t1129950597 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = AesManaged_get_Key_m538801386(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = AesManaged_get_IV_m118095902(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = AesManaged_CreateEncryptor_m2294080233(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AesManaged_Dispose_m615303088 (AesManaged_t1129950597 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		SymmetricAlgorithm_Dispose_m1120980942(__this, L_0, /*hidden argument*/NULL);
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
// System.Void System.Security.Cryptography.AesTransform::.ctor(System.Security.Cryptography.Aes,System.Boolean,System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform__ctor_m3143546745 (AesTransform_t2957123611 * __this, Aes_t1218282760 * ___algo0, bool ___encryption1, ByteU5BU5D_t4116647657* ___key2, ByteU5BU5D_t4116647657* ___iv3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform__ctor_m3143546745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	UInt32U5BU5D_t2770800703* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		Aes_t1218282760 * L_0 = ___algo0;
		bool L_1 = ___encryption1;
		ByteU5BU5D_t4116647657* L_2 = ___iv3;
		SymmetricTransform__ctor_m2693628991(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_3 = ___key2;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		CryptographicException_t248831461 * L_4 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_4, _stringLiteral2153550409, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_001b:
	{
		ByteU5BU5D_t4116647657* L_5 = ___iv3;
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_6 = ___iv3;
		NullCheck(L_6);
		Aes_t1218282760 * L_7 = ___algo0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))))) == ((int32_t)((int32_t)((int32_t)L_8>>(int32_t)3)))))
		{
			goto IL_0067;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		ByteU5BU5D_t4116647657* L_11 = ___iv3;
		NullCheck(L_11);
		int32_t L_12 = (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))));
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_10;
		Aes_t1218282760 * L_15 = ___algo0;
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_15);
		int32_t L_17 = ((int32_t)((int32_t)L_16>>(int32_t)3));
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_18);
		String_t* L_19 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2136391555, L_14, /*hidden argument*/NULL);
		V_0 = L_19;
		String_t* L_20 = V_0;
		CryptographicException_t248831461 * L_21 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_21, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_0067:
	{
		ByteU5BU5D_t4116647657* L_22 = ___key2;
		NullCheck(L_22);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))));
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)16))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)24))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)32))))
		{
			goto IL_00c2;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_26 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_27 = L_26;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_27;
		int32_t L_32 = ((int32_t)16);
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_31;
		int32_t L_35 = ((int32_t)24);
		RuntimeObject * L_36 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_36);
		ObjectU5BU5D_t2843939325* L_37 = L_34;
		int32_t L_38 = ((int32_t)32);
		RuntimeObject * L_39 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_39);
		String_t* L_40 = Locale_GetText_m2427493201(NULL /*static, unused*/, _stringLiteral2585275424, L_37, /*hidden argument*/NULL);
		V_2 = L_40;
		String_t* L_41 = V_2;
		CryptographicException_t248831461 * L_42 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_42, L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, NULL, AesTransform__ctor_m3143546745_RuntimeMethod_var);
	}

IL_00c2:
	{
		int32_t L_43 = V_1;
		V_1 = ((int32_t)((int32_t)L_43<<(int32_t)3));
		int32_t L_44 = V_1;
		__this->set_Nk_13(((int32_t)((int32_t)L_44>>(int32_t)5)));
		int32_t L_45 = __this->get_Nk_13();
		if ((!(((uint32_t)L_45) == ((uint32_t)8))))
		{
			goto IL_00e8;
		}
	}
	{
		__this->set_Nr_14(((int32_t)14));
		goto IL_0109;
	}

IL_00e8:
	{
		int32_t L_46 = __this->get_Nk_13();
		if ((!(((uint32_t)L_46) == ((uint32_t)6))))
		{
			goto IL_0101;
		}
	}
	{
		__this->set_Nr_14(((int32_t)12));
		goto IL_0109;
	}

IL_0101:
	{
		__this->set_Nr_14(((int32_t)10));
	}

IL_0109:
	{
		int32_t L_47 = __this->get_Nr_14();
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1))));
		int32_t L_48 = V_3;
		UInt32U5BU5D_t2770800703* L_49 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)L_48);
		V_4 = L_49;
		V_5 = 0;
		V_6 = 0;
		goto IL_0171;
	}

IL_0127:
	{
		ByteU5BU5D_t4116647657* L_50 = ___key2;
		int32_t L_51 = V_5;
		int32_t L_52 = L_51;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		NullCheck(L_50);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_7 = ((int32_t)((int32_t)L_54<<(int32_t)((int32_t)24)));
		uint32_t L_55 = V_7;
		ByteU5BU5D_t4116647657* L_56 = ___key2;
		int32_t L_57 = V_5;
		int32_t L_58 = L_57;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
		NullCheck(L_56);
		int32_t L_59 = L_58;
		uint8_t L_60 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_7 = ((int32_t)((int32_t)L_55|(int32_t)((int32_t)((int32_t)L_60<<(int32_t)((int32_t)16)))));
		uint32_t L_61 = V_7;
		ByteU5BU5D_t4116647657* L_62 = ___key2;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		NullCheck(L_62);
		int32_t L_65 = L_64;
		uint8_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_7 = ((int32_t)((int32_t)L_61|(int32_t)((int32_t)((int32_t)L_66<<(int32_t)8))));
		uint32_t L_67 = V_7;
		ByteU5BU5D_t4116647657* L_68 = ___key2;
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		NullCheck(L_68);
		int32_t L_71 = L_70;
		uint8_t L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_7 = ((int32_t)((int32_t)L_67|(int32_t)L_72));
		UInt32U5BU5D_t2770800703* L_73 = V_4;
		int32_t L_74 = V_6;
		uint32_t L_75 = V_7;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint32_t)L_75);
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0171:
	{
		int32_t L_77 = V_6;
		int32_t L_78 = __this->get_Nk_13();
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_79 = __this->get_Nk_13();
		V_8 = L_79;
		goto IL_0212;
	}

IL_018b:
	{
		UInt32U5BU5D_t2770800703* L_80 = V_4;
		int32_t L_81 = V_8;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)1));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_9 = L_83;
		int32_t L_84 = V_8;
		int32_t L_85 = __this->get_Nk_13();
		if (((int32_t)((int32_t)L_84%(int32_t)L_85)))
		{
			goto IL_01d3;
		}
	}
	{
		uint32_t L_86 = V_9;
		uint32_t L_87 = V_9;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_86<<(int32_t)8))|(int32_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_87>>((int32_t)24)))&(int32_t)((int32_t)255)))));
		uint32_t L_88 = V_10;
		uint32_t L_89 = AesTransform_SubByte_m3350159546(__this, L_88, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_90 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_Rcon_15();
		int32_t L_91 = V_8;
		int32_t L_92 = __this->get_Nk_13();
		NullCheck(L_90);
		int32_t L_93 = ((int32_t)((int32_t)L_91/(int32_t)L_92));
		uint32_t L_94 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_9 = ((int32_t)((int32_t)L_89^(int32_t)L_94));
		goto IL_01f8;
	}

IL_01d3:
	{
		int32_t L_95 = __this->get_Nk_13();
		if ((((int32_t)L_95) <= ((int32_t)6)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_96 = V_8;
		int32_t L_97 = __this->get_Nk_13();
		if ((!(((uint32_t)((int32_t)((int32_t)L_96%(int32_t)L_97))) == ((uint32_t)4))))
		{
			goto IL_01f8;
		}
	}
	{
		uint32_t L_98 = V_9;
		uint32_t L_99 = AesTransform_SubByte_m3350159546(__this, L_98, /*hidden argument*/NULL);
		V_9 = L_99;
	}

IL_01f8:
	{
		UInt32U5BU5D_t2770800703* L_100 = V_4;
		int32_t L_101 = V_8;
		UInt32U5BU5D_t2770800703* L_102 = V_4;
		int32_t L_103 = V_8;
		int32_t L_104 = __this->get_Nk_13();
		NullCheck(L_102);
		int32_t L_105 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_103, (int32_t)L_104));
		uint32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		uint32_t L_107 = V_9;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (uint32_t)((int32_t)((int32_t)L_106^(int32_t)L_107)));
		int32_t L_108 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0212:
	{
		int32_t L_109 = V_8;
		int32_t L_110 = V_3;
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_018b;
		}
	}
	{
		bool L_111 = ___encryption1;
		if (L_111)
		{
			goto IL_02ef;
		}
	}
	{
		V_11 = 0;
		int32_t L_112 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)4));
		goto IL_0273;
	}

IL_022d:
	{
		V_13 = 0;
		goto IL_025f;
	}

IL_0235:
	{
		UInt32U5BU5D_t2770800703* L_113 = V_4;
		int32_t L_114 = V_11;
		int32_t L_115 = V_13;
		NullCheck(L_113);
		int32_t L_116 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		uint32_t L_117 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_14 = L_117;
		UInt32U5BU5D_t2770800703* L_118 = V_4;
		int32_t L_119 = V_11;
		int32_t L_120 = V_13;
		UInt32U5BU5D_t2770800703* L_121 = V_4;
		int32_t L_122 = V_12;
		int32_t L_123 = V_13;
		NullCheck(L_121);
		int32_t L_124 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)L_123));
		uint32_t L_125 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120))), (uint32_t)L_125);
		UInt32U5BU5D_t2770800703* L_126 = V_4;
		int32_t L_127 = V_12;
		int32_t L_128 = V_13;
		uint32_t L_129 = V_14;
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)L_128))), (uint32_t)L_129);
		int32_t L_130 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
	}

IL_025f:
	{
		int32_t L_131 = V_13;
		if ((((int32_t)L_131) < ((int32_t)4)))
		{
			goto IL_0235;
		}
	}
	{
		int32_t L_132 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)4));
		int32_t L_133 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_133, (int32_t)4));
	}

IL_0273:
	{
		int32_t L_134 = V_11;
		int32_t L_135 = V_12;
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_022d;
		}
	}
	{
		V_15 = 4;
		goto IL_02e2;
	}

IL_0284:
	{
		UInt32U5BU5D_t2770800703* L_136 = V_4;
		int32_t L_137 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_138 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		ByteU5BU5D_t4116647657* L_139 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_140 = V_4;
		int32_t L_141 = V_15;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_139);
		uintptr_t L_144 = (((uintptr_t)((int32_t)((uint32_t)L_143>>((int32_t)24)))));
		uint8_t L_145 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_138);
		uint8_t L_146 = L_145;
		uint32_t L_147 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t2770800703* L_148 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		ByteU5BU5D_t4116647657* L_149 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_150 = V_4;
		int32_t L_151 = V_15;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_149);
		int32_t L_154 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_153>>((int32_t)16))))));
		uint8_t L_155 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_148);
		uint8_t L_156 = L_155;
		uint32_t L_157 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		UInt32U5BU5D_t2770800703* L_158 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		ByteU5BU5D_t4116647657* L_159 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_160 = V_4;
		int32_t L_161 = V_15;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		uint32_t L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_159);
		int32_t L_164 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_163>>8)))));
		uint8_t L_165 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		NullCheck(L_158);
		uint8_t L_166 = L_165;
		uint32_t L_167 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		UInt32U5BU5D_t2770800703* L_168 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		ByteU5BU5D_t4116647657* L_169 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		UInt32U5BU5D_t2770800703* L_170 = V_4;
		int32_t L_171 = V_15;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		uint32_t L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_169);
		int32_t L_174 = (((int32_t)((uint8_t)L_173)));
		uint8_t L_175 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		NullCheck(L_168);
		uint8_t L_176 = L_175;
		uint32_t L_177 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_147^(int32_t)L_157))^(int32_t)L_167))^(int32_t)L_177)));
		int32_t L_178 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
	}

IL_02e2:
	{
		int32_t L_179 = V_15;
		UInt32U5BU5D_t2770800703* L_180 = V_4;
		NullCheck(L_180);
		if ((((int32_t)L_179) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_180)->max_length)))), (int32_t)4)))))
		{
			goto IL_0284;
		}
	}

IL_02ef:
	{
		UInt32U5BU5D_t2770800703* L_181 = V_4;
		__this->set_expandedKey_12(L_181);
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AesTransform__cctor_m2567644034 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform__cctor_m2567644034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t2770800703* L_0 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		UInt32U5BU5D_t2770800703* L_1 = L_0;
		RuntimeFieldHandle_t1871169219  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D1_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_Rcon_15(L_1);
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_t4116647657* L_4 = L_3;
		RuntimeFieldHandle_t1871169219  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D2_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_SBox_16(L_4);
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_t4116647657* L_7 = L_6;
		RuntimeFieldHandle_t1871169219  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D3_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iSBox_17(L_7);
		UInt32U5BU5D_t2770800703* L_9 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_10 = L_9;
		RuntimeFieldHandle_t1871169219  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D4_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T0_18(L_10);
		UInt32U5BU5D_t2770800703* L_12 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_13 = L_12;
		RuntimeFieldHandle_t1871169219  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D5_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T1_19(L_13);
		UInt32U5BU5D_t2770800703* L_15 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_16 = L_15;
		RuntimeFieldHandle_t1871169219  L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D6_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, L_17, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T2_20(L_16);
		UInt32U5BU5D_t2770800703* L_18 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_19 = L_18;
		RuntimeFieldHandle_t1871169219  L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D7_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, L_20, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_T3_21(L_19);
		UInt32U5BU5D_t2770800703* L_21 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_22 = L_21;
		RuntimeFieldHandle_t1871169219  L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D8_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_22, L_23, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT0_22(L_22);
		UInt32U5BU5D_t2770800703* L_24 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_25 = L_24;
		RuntimeFieldHandle_t1871169219  L_26 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D9_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_25, L_26, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT1_23(L_25);
		UInt32U5BU5D_t2770800703* L_27 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_28 = L_27;
		RuntimeFieldHandle_t1871169219  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D10_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT2_24(L_28);
		UInt32U5BU5D_t2770800703* L_30 = (UInt32U5BU5D_t2770800703*)SZArrayNew(UInt32U5BU5D_t2770800703_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t2770800703* L_31 = L_30;
		RuntimeFieldHandle_t1871169219  L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255364____U24U24fieldU2D11_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_31, L_32, /*hidden argument*/NULL);
		((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->set_iT3_25(L_31);
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::ECB(System.Byte[],System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform_ECB_m240244807 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___input0, ByteU5BU5D_t4116647657* ___output1, const RuntimeMethod* method)
{
	{
		bool L_0 = ((SymmetricTransform_t3802591843 *)__this)->get_encrypt_1();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___input0;
		ByteU5BU5D_t4116647657* L_2 = ___output1;
		UInt32U5BU5D_t2770800703* L_3 = __this->get_expandedKey_12();
		AesTransform_Encrypt128_m424393011(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_002c;
	}

IL_001e:
	{
		ByteU5BU5D_t4116647657* L_4 = ___input0;
		ByteU5BU5D_t4116647657* L_5 = ___output1;
		UInt32U5BU5D_t2770800703* L_6 = __this->get_expandedKey_12();
		AesTransform_Decrypt128_m3018534522(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.UInt32 System.Security.Cryptography.AesTransform::SubByte(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t AesTransform_SubByte_m3350159546 (AesTransform_t2957123611 * __this, uint32_t ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_SubByte_m3350159546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		uint32_t L_0 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)L_0));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		uintptr_t L_3 = (((uintptr_t)L_2));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		uint32_t L_5 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_5>>8))));
		uint32_t L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_8 = V_0;
		NullCheck(L_7);
		uintptr_t L_9 = (((uintptr_t)L_8));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)((int32_t)L_10<<(int32_t)8))));
		uint32_t L_11 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_11>>((int32_t)16)))));
		uint32_t L_12 = V_1;
		ByteU5BU5D_t4116647657* L_13 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_14 = V_0;
		NullCheck(L_13);
		uintptr_t L_15 = (((uintptr_t)L_14));
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_1 = ((int32_t)((int32_t)L_12|(int32_t)((int32_t)((int32_t)L_16<<(int32_t)((int32_t)16)))));
		uint32_t L_17 = ___a0;
		V_0 = ((int32_t)((int32_t)((int32_t)255)&(int32_t)((int32_t)((uint32_t)L_17>>((int32_t)24)))));
		uint32_t L_18 = V_1;
		ByteU5BU5D_t4116647657* L_19 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_20 = V_0;
		NullCheck(L_19);
		uintptr_t L_21 = (((uintptr_t)L_20));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		return ((int32_t)((int32_t)L_18|(int32_t)((int32_t)((int32_t)L_22<<(int32_t)((int32_t)24)))));
	}
}
// System.Void System.Security.Cryptography.AesTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform_Encrypt128_m424393011 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_Encrypt128_m424393011_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t4116647657* L_0 = ___indata0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = ___indata0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = ___indata0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = ___indata0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t2770800703* L_12 = ___ekey2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_t4116647657* L_15 = ___indata0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = ___indata0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = ___indata0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_t4116647657* L_24 = ___indata0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t2770800703* L_27 = ___ekey2;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_t4116647657* L_30 = ___indata0;
		NullCheck(L_30);
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_t4116647657* L_33 = ___indata0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_t4116647657* L_36 = ___indata0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_t4116647657* L_39 = ___indata0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t2770800703* L_42 = ___ekey2;
		NullCheck(L_42);
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_t4116647657* L_45 = ___indata0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_t4116647657* L_48 = ___indata0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_t4116647657* L_51 = ___indata0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_t4116647657* L_54 = ___indata0;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t2770800703* L_57 = ___ekey2;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_60 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_61 = V_0;
		NullCheck(L_60);
		uintptr_t L_62 = (((uintptr_t)((int32_t)((uint32_t)L_61>>((int32_t)24)))));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t2770800703* L_64 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_65 = V_1;
		NullCheck(L_64);
		int32_t L_66 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16))))));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t2770800703* L_68 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8)))));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t2770800703* L_72 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = (((int32_t)((uint8_t)L_73)));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_t2770800703* L_76 = ___ekey2;
		NullCheck(L_76);
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_t2770800703* L_79 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_80 = V_1;
		NullCheck(L_79);
		uintptr_t L_81 = (((uintptr_t)((int32_t)((uint32_t)L_80>>((int32_t)24)))));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t2770800703* L_83 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_84 = V_2;
		NullCheck(L_83);
		int32_t L_85 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16))))));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t2770800703* L_87 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8)))));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t2770800703* L_91 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_92 = V_0;
		NullCheck(L_91);
		int32_t L_93 = (((int32_t)((uint8_t)L_92)));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t2770800703* L_95 = ___ekey2;
		NullCheck(L_95);
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_t2770800703* L_98 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_99 = V_2;
		NullCheck(L_98);
		uintptr_t L_100 = (((uintptr_t)((int32_t)((uint32_t)L_99>>((int32_t)24)))));
		uint32_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t2770800703* L_102 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_103 = V_3;
		NullCheck(L_102);
		int32_t L_104 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))));
		uint32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t2770800703* L_106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_107 = V_0;
		NullCheck(L_106);
		int32_t L_108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8)))));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t2770800703* L_110 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_111 = V_1;
		NullCheck(L_110);
		int32_t L_112 = (((int32_t)((uint8_t)L_111)));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_t2770800703* L_114 = ___ekey2;
		NullCheck(L_114);
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_t2770800703* L_117 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_118 = V_3;
		NullCheck(L_117);
		uintptr_t L_119 = (((uintptr_t)((int32_t)((uint32_t)L_118>>((int32_t)24)))));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_t2770800703* L_121 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_122 = V_0;
		NullCheck(L_121);
		int32_t L_123 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16))))));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_t2770800703* L_125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_126 = V_1;
		NullCheck(L_125);
		int32_t L_127 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8)))));
		uint32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_t2770800703* L_129 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_130 = V_2;
		NullCheck(L_129);
		int32_t L_131 = (((int32_t)((uint8_t)L_130)));
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t2770800703* L_133 = ___ekey2;
		NullCheck(L_133);
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_t2770800703* L_136 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_137 = V_4;
		NullCheck(L_136);
		uintptr_t L_138 = (((uintptr_t)((int32_t)((uint32_t)L_137>>((int32_t)24)))));
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t2770800703* L_140 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_141 = V_5;
		NullCheck(L_140);
		int32_t L_142 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16))))));
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_t2770800703* L_144 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_145 = V_6;
		NullCheck(L_144);
		int32_t L_146 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t2770800703* L_148 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_149 = V_7;
		NullCheck(L_148);
		int32_t L_150 = (((int32_t)((uint8_t)L_149)));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t2770800703* L_152 = ___ekey2;
		NullCheck(L_152);
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_t2770800703* L_155 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		uintptr_t L_157 = (((uintptr_t)((int32_t)((uint32_t)L_156>>((int32_t)24)))));
		uint32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t2770800703* L_159 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_160 = V_6;
		NullCheck(L_159);
		int32_t L_161 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16))))));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_t2770800703* L_163 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_164 = V_7;
		NullCheck(L_163);
		int32_t L_165 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8)))));
		uint32_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_t2770800703* L_167 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_168 = V_4;
		NullCheck(L_167);
		int32_t L_169 = (((int32_t)((uint8_t)L_168)));
		uint32_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_t2770800703* L_171 = ___ekey2;
		NullCheck(L_171);
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_t2770800703* L_174 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_175 = V_6;
		NullCheck(L_174);
		uintptr_t L_176 = (((uintptr_t)((int32_t)((uint32_t)L_175>>((int32_t)24)))));
		uint32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t2770800703* L_178 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_179 = V_7;
		NullCheck(L_178);
		int32_t L_180 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16))))));
		uint32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_t2770800703* L_182 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8)))));
		uint32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_t2770800703* L_186 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_187 = V_5;
		NullCheck(L_186);
		int32_t L_188 = (((int32_t)((uint8_t)L_187)));
		uint32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_t2770800703* L_190 = ___ekey2;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_t2770800703* L_193 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_194 = V_7;
		NullCheck(L_193);
		uintptr_t L_195 = (((uintptr_t)((int32_t)((uint32_t)L_194>>((int32_t)24)))));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_t2770800703* L_197 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_198 = V_4;
		NullCheck(L_197);
		int32_t L_199 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_t2770800703* L_201 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_202 = V_5;
		NullCheck(L_201);
		int32_t L_203 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8)))));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_t2770800703* L_205 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_206 = V_6;
		NullCheck(L_205);
		int32_t L_207 = (((int32_t)((uint8_t)L_206)));
		uint32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_t2770800703* L_209 = ___ekey2;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_t2770800703* L_212 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_213 = V_0;
		NullCheck(L_212);
		uintptr_t L_214 = (((uintptr_t)((int32_t)((uint32_t)L_213>>((int32_t)24)))));
		uint32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_t2770800703* L_216 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_217 = V_1;
		NullCheck(L_216);
		int32_t L_218 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16))))));
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_t2770800703* L_220 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8)))));
		uint32_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_t2770800703* L_224 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_225 = V_3;
		NullCheck(L_224);
		int32_t L_226 = (((int32_t)((uint8_t)L_225)));
		uint32_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_t2770800703* L_228 = ___ekey2;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_t2770800703* L_231 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_232 = V_1;
		NullCheck(L_231);
		uintptr_t L_233 = (((uintptr_t)((int32_t)((uint32_t)L_232>>((int32_t)24)))));
		uint32_t L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_t2770800703* L_235 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_236 = V_2;
		NullCheck(L_235);
		int32_t L_237 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16))))));
		uint32_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_t2770800703* L_239 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_240 = V_3;
		NullCheck(L_239);
		int32_t L_241 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8)))));
		uint32_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_t2770800703* L_243 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_244 = V_0;
		NullCheck(L_243);
		int32_t L_245 = (((int32_t)((uint8_t)L_244)));
		uint32_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_t2770800703* L_247 = ___ekey2;
		NullCheck(L_247);
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_t2770800703* L_250 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_251 = V_2;
		NullCheck(L_250);
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		uint32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_t2770800703* L_254 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_255 = V_3;
		NullCheck(L_254);
		int32_t L_256 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16))))));
		uint32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_t2770800703* L_258 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_259 = V_0;
		NullCheck(L_258);
		int32_t L_260 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8)))));
		uint32_t L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_t2770800703* L_262 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_263 = V_1;
		NullCheck(L_262);
		int32_t L_264 = (((int32_t)((uint8_t)L_263)));
		uint32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_t2770800703* L_266 = ___ekey2;
		NullCheck(L_266);
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_t2770800703* L_269 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_270 = V_3;
		NullCheck(L_269);
		uintptr_t L_271 = (((uintptr_t)((int32_t)((uint32_t)L_270>>((int32_t)24)))));
		uint32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_t2770800703* L_273 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_274 = V_0;
		NullCheck(L_273);
		int32_t L_275 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16))))));
		uint32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_t2770800703* L_277 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8)))));
		uint32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_t2770800703* L_281 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_282 = V_2;
		NullCheck(L_281);
		int32_t L_283 = (((int32_t)((uint8_t)L_282)));
		uint32_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_t2770800703* L_285 = ___ekey2;
		NullCheck(L_285);
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_t2770800703* L_288 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_289 = V_4;
		NullCheck(L_288);
		uintptr_t L_290 = (((uintptr_t)((int32_t)((uint32_t)L_289>>((int32_t)24)))));
		uint32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_t2770800703* L_292 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_293 = V_5;
		NullCheck(L_292);
		int32_t L_294 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16))))));
		uint32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_t2770800703* L_296 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_297 = V_6;
		NullCheck(L_296);
		int32_t L_298 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8)))));
		uint32_t L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_t2770800703* L_300 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_301 = V_7;
		NullCheck(L_300);
		int32_t L_302 = (((int32_t)((uint8_t)L_301)));
		uint32_t L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_t2770800703* L_304 = ___ekey2;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_t2770800703* L_307 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_308 = V_5;
		NullCheck(L_307);
		uintptr_t L_309 = (((uintptr_t)((int32_t)((uint32_t)L_308>>((int32_t)24)))));
		uint32_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_t2770800703* L_311 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_312 = V_6;
		NullCheck(L_311);
		int32_t L_313 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16))))));
		uint32_t L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_t2770800703* L_315 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_316 = V_7;
		NullCheck(L_315);
		int32_t L_317 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8)))));
		uint32_t L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_t2770800703* L_319 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_320 = V_4;
		NullCheck(L_319);
		int32_t L_321 = (((int32_t)((uint8_t)L_320)));
		uint32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_t2770800703* L_323 = ___ekey2;
		NullCheck(L_323);
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_t2770800703* L_326 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		uintptr_t L_328 = (((uintptr_t)((int32_t)((uint32_t)L_327>>((int32_t)24)))));
		uint32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_t2770800703* L_330 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_331 = V_7;
		NullCheck(L_330);
		int32_t L_332 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16))))));
		uint32_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_t2770800703* L_334 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_335 = V_4;
		NullCheck(L_334);
		int32_t L_336 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8)))));
		uint32_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_t2770800703* L_338 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_339 = V_5;
		NullCheck(L_338);
		int32_t L_340 = (((int32_t)((uint8_t)L_339)));
		uint32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_t2770800703* L_342 = ___ekey2;
		NullCheck(L_342);
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_t2770800703* L_345 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_346 = V_7;
		NullCheck(L_345);
		uintptr_t L_347 = (((uintptr_t)((int32_t)((uint32_t)L_346>>((int32_t)24)))));
		uint32_t L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_t2770800703* L_349 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_350 = V_4;
		NullCheck(L_349);
		int32_t L_351 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16))))));
		uint32_t L_352 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_t2770800703* L_353 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_354 = V_5;
		NullCheck(L_353);
		int32_t L_355 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8)))));
		uint32_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_t2770800703* L_357 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_358 = V_6;
		NullCheck(L_357);
		int32_t L_359 = (((int32_t)((uint8_t)L_358)));
		uint32_t L_360 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_t2770800703* L_361 = ___ekey2;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_t2770800703* L_364 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_365 = V_0;
		NullCheck(L_364);
		uintptr_t L_366 = (((uintptr_t)((int32_t)((uint32_t)L_365>>((int32_t)24)))));
		uint32_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_t2770800703* L_368 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_369 = V_1;
		NullCheck(L_368);
		int32_t L_370 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16))))));
		uint32_t L_371 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_t2770800703* L_372 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_373 = V_2;
		NullCheck(L_372);
		int32_t L_374 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8)))));
		uint32_t L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_t2770800703* L_376 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_377 = V_3;
		NullCheck(L_376);
		int32_t L_378 = (((int32_t)((uint8_t)L_377)));
		uint32_t L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_t2770800703* L_380 = ___ekey2;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_t2770800703* L_383 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_384 = V_1;
		NullCheck(L_383);
		uintptr_t L_385 = (((uintptr_t)((int32_t)((uint32_t)L_384>>((int32_t)24)))));
		uint32_t L_386 = (L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_t2770800703* L_387 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_388 = V_2;
		NullCheck(L_387);
		int32_t L_389 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16))))));
		uint32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_t2770800703* L_391 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_392 = V_3;
		NullCheck(L_391);
		int32_t L_393 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8)))));
		uint32_t L_394 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_t2770800703* L_395 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_396 = V_0;
		NullCheck(L_395);
		int32_t L_397 = (((int32_t)((uint8_t)L_396)));
		uint32_t L_398 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_t2770800703* L_399 = ___ekey2;
		NullCheck(L_399);
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_t2770800703* L_402 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_403 = V_2;
		NullCheck(L_402);
		uintptr_t L_404 = (((uintptr_t)((int32_t)((uint32_t)L_403>>((int32_t)24)))));
		uint32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_t2770800703* L_406 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_407 = V_3;
		NullCheck(L_406);
		int32_t L_408 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16))))));
		uint32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_t2770800703* L_410 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		int32_t L_412 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint32_t L_413 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_t2770800703* L_414 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_415 = V_1;
		NullCheck(L_414);
		int32_t L_416 = (((int32_t)((uint8_t)L_415)));
		uint32_t L_417 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_t2770800703* L_418 = ___ekey2;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_t2770800703* L_421 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_422 = V_3;
		NullCheck(L_421);
		uintptr_t L_423 = (((uintptr_t)((int32_t)((uint32_t)L_422>>((int32_t)24)))));
		uint32_t L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_t2770800703* L_425 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_426 = V_0;
		NullCheck(L_425);
		int32_t L_427 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16))))));
		uint32_t L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_t2770800703* L_429 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_430 = V_1;
		NullCheck(L_429);
		int32_t L_431 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8)))));
		uint32_t L_432 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_t2770800703* L_433 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_434 = V_2;
		NullCheck(L_433);
		int32_t L_435 = (((int32_t)((uint8_t)L_434)));
		uint32_t L_436 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_t2770800703* L_437 = ___ekey2;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_t2770800703* L_440 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_441 = V_4;
		NullCheck(L_440);
		uintptr_t L_442 = (((uintptr_t)((int32_t)((uint32_t)L_441>>((int32_t)24)))));
		uint32_t L_443 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_t2770800703* L_444 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_445 = V_5;
		NullCheck(L_444);
		int32_t L_446 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16))))));
		uint32_t L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_t2770800703* L_448 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_449 = V_6;
		NullCheck(L_448);
		int32_t L_450 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8)))));
		uint32_t L_451 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_t2770800703* L_452 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_453 = V_7;
		NullCheck(L_452);
		int32_t L_454 = (((int32_t)((uint8_t)L_453)));
		uint32_t L_455 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_t2770800703* L_456 = ___ekey2;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_t2770800703* L_459 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_460 = V_5;
		NullCheck(L_459);
		uintptr_t L_461 = (((uintptr_t)((int32_t)((uint32_t)L_460>>((int32_t)24)))));
		uint32_t L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_t2770800703* L_463 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_464 = V_6;
		NullCheck(L_463);
		int32_t L_465 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint32_t L_466 = (L_463)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_t2770800703* L_467 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_468 = V_7;
		NullCheck(L_467);
		int32_t L_469 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8)))));
		uint32_t L_470 = (L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_t2770800703* L_471 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_472 = V_4;
		NullCheck(L_471);
		int32_t L_473 = (((int32_t)((uint8_t)L_472)));
		uint32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_t2770800703* L_475 = ___ekey2;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_t2770800703* L_478 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_479 = V_6;
		NullCheck(L_478);
		uintptr_t L_480 = (((uintptr_t)((int32_t)((uint32_t)L_479>>((int32_t)24)))));
		uint32_t L_481 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_t2770800703* L_482 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_483 = V_7;
		NullCheck(L_482);
		int32_t L_484 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16))))));
		uint32_t L_485 = (L_482)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_t2770800703* L_486 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_487 = V_4;
		NullCheck(L_486);
		int32_t L_488 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8)))));
		uint32_t L_489 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_t2770800703* L_490 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_491 = V_5;
		NullCheck(L_490);
		int32_t L_492 = (((int32_t)((uint8_t)L_491)));
		uint32_t L_493 = (L_490)->GetAt(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_t2770800703* L_494 = ___ekey2;
		NullCheck(L_494);
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_t2770800703* L_497 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_498 = V_7;
		NullCheck(L_497);
		uintptr_t L_499 = (((uintptr_t)((int32_t)((uint32_t)L_498>>((int32_t)24)))));
		uint32_t L_500 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_t2770800703* L_501 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_502 = V_4;
		NullCheck(L_501);
		int32_t L_503 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16))))));
		uint32_t L_504 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_t2770800703* L_505 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_506 = V_5;
		NullCheck(L_505);
		int32_t L_507 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8)))));
		uint32_t L_508 = (L_505)->GetAt(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_t2770800703* L_509 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_510 = V_6;
		NullCheck(L_509);
		int32_t L_511 = (((int32_t)((uint8_t)L_510)));
		uint32_t L_512 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_t2770800703* L_513 = ___ekey2;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_t2770800703* L_516 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_517 = V_0;
		NullCheck(L_516);
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		uint32_t L_519 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_t2770800703* L_520 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_521 = V_1;
		NullCheck(L_520);
		int32_t L_522 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16))))));
		uint32_t L_523 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_t2770800703* L_524 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_525 = V_2;
		NullCheck(L_524);
		int32_t L_526 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8)))));
		uint32_t L_527 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_t2770800703* L_528 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_529 = V_3;
		NullCheck(L_528);
		int32_t L_530 = (((int32_t)((uint8_t)L_529)));
		uint32_t L_531 = (L_528)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_t2770800703* L_532 = ___ekey2;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_t2770800703* L_535 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_536 = V_1;
		NullCheck(L_535);
		uintptr_t L_537 = (((uintptr_t)((int32_t)((uint32_t)L_536>>((int32_t)24)))));
		uint32_t L_538 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_t2770800703* L_539 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_540 = V_2;
		NullCheck(L_539);
		int32_t L_541 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16))))));
		uint32_t L_542 = (L_539)->GetAt(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_t2770800703* L_543 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_544 = V_3;
		NullCheck(L_543);
		int32_t L_545 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8)))));
		uint32_t L_546 = (L_543)->GetAt(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_t2770800703* L_547 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_548 = V_0;
		NullCheck(L_547);
		int32_t L_549 = (((int32_t)((uint8_t)L_548)));
		uint32_t L_550 = (L_547)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_t2770800703* L_551 = ___ekey2;
		NullCheck(L_551);
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_t2770800703* L_554 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_555 = V_2;
		NullCheck(L_554);
		uintptr_t L_556 = (((uintptr_t)((int32_t)((uint32_t)L_555>>((int32_t)24)))));
		uint32_t L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_t2770800703* L_558 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_559 = V_3;
		NullCheck(L_558);
		int32_t L_560 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16))))));
		uint32_t L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_t2770800703* L_562 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_563 = V_0;
		NullCheck(L_562);
		int32_t L_564 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8)))));
		uint32_t L_565 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_t2770800703* L_566 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_567 = V_1;
		NullCheck(L_566);
		int32_t L_568 = (((int32_t)((uint8_t)L_567)));
		uint32_t L_569 = (L_566)->GetAt(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_t2770800703* L_570 = ___ekey2;
		NullCheck(L_570);
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_t2770800703* L_573 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_574 = V_3;
		NullCheck(L_573);
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		uint32_t L_576 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_t2770800703* L_577 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_578 = V_0;
		NullCheck(L_577);
		int32_t L_579 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16))))));
		uint32_t L_580 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_t2770800703* L_581 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_582 = V_1;
		NullCheck(L_581);
		int32_t L_583 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8)))));
		uint32_t L_584 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_t2770800703* L_585 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_586 = V_2;
		NullCheck(L_585);
		int32_t L_587 = (((int32_t)((uint8_t)L_586)));
		uint32_t L_588 = (L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_t2770800703* L_589 = ___ekey2;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_t2770800703* L_592 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_593 = V_4;
		NullCheck(L_592);
		uintptr_t L_594 = (((uintptr_t)((int32_t)((uint32_t)L_593>>((int32_t)24)))));
		uint32_t L_595 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_t2770800703* L_596 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_597 = V_5;
		NullCheck(L_596);
		int32_t L_598 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16))))));
		uint32_t L_599 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_t2770800703* L_600 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_601 = V_6;
		NullCheck(L_600);
		int32_t L_602 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8)))));
		uint32_t L_603 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_t2770800703* L_604 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_605 = V_7;
		NullCheck(L_604);
		int32_t L_606 = (((int32_t)((uint8_t)L_605)));
		uint32_t L_607 = (L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_t2770800703* L_608 = ___ekey2;
		NullCheck(L_608);
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAt(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_t2770800703* L_611 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_612 = V_5;
		NullCheck(L_611);
		uintptr_t L_613 = (((uintptr_t)((int32_t)((uint32_t)L_612>>((int32_t)24)))));
		uint32_t L_614 = (L_611)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_t2770800703* L_615 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_616 = V_6;
		NullCheck(L_615);
		int32_t L_617 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16))))));
		uint32_t L_618 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_t2770800703* L_619 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_620 = V_7;
		NullCheck(L_619);
		int32_t L_621 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8)))));
		uint32_t L_622 = (L_619)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_t2770800703* L_623 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_624 = V_4;
		NullCheck(L_623);
		int32_t L_625 = (((int32_t)((uint8_t)L_624)));
		uint32_t L_626 = (L_623)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_t2770800703* L_627 = ___ekey2;
		NullCheck(L_627);
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_t2770800703* L_630 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_631 = V_6;
		NullCheck(L_630);
		uintptr_t L_632 = (((uintptr_t)((int32_t)((uint32_t)L_631>>((int32_t)24)))));
		uint32_t L_633 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_t2770800703* L_634 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_635 = V_7;
		NullCheck(L_634);
		int32_t L_636 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16))))));
		uint32_t L_637 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_t2770800703* L_638 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_639 = V_4;
		NullCheck(L_638);
		int32_t L_640 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8)))));
		uint32_t L_641 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_t2770800703* L_642 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_643 = V_5;
		NullCheck(L_642);
		int32_t L_644 = (((int32_t)((uint8_t)L_643)));
		uint32_t L_645 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_t2770800703* L_646 = ___ekey2;
		NullCheck(L_646);
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAt(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_t2770800703* L_649 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_650 = V_7;
		NullCheck(L_649);
		uintptr_t L_651 = (((uintptr_t)((int32_t)((uint32_t)L_650>>((int32_t)24)))));
		uint32_t L_652 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_t2770800703* L_653 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_654 = V_4;
		NullCheck(L_653);
		int32_t L_655 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16))))));
		uint32_t L_656 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_t2770800703* L_657 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_658 = V_5;
		NullCheck(L_657);
		int32_t L_659 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8)))));
		uint32_t L_660 = (L_657)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_t2770800703* L_661 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_662 = V_6;
		NullCheck(L_661);
		int32_t L_663 = (((int32_t)((uint8_t)L_662)));
		uint32_t L_664 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_t2770800703* L_665 = ___ekey2;
		NullCheck(L_665);
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAt(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_t2770800703* L_668 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_669 = V_0;
		NullCheck(L_668);
		uintptr_t L_670 = (((uintptr_t)((int32_t)((uint32_t)L_669>>((int32_t)24)))));
		uint32_t L_671 = (L_668)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_t2770800703* L_672 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_673 = V_1;
		NullCheck(L_672);
		int32_t L_674 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16))))));
		uint32_t L_675 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_t2770800703* L_676 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_677 = V_2;
		NullCheck(L_676);
		int32_t L_678 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8)))));
		uint32_t L_679 = (L_676)->GetAt(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_t2770800703* L_680 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_681 = V_3;
		NullCheck(L_680);
		int32_t L_682 = (((int32_t)((uint8_t)L_681)));
		uint32_t L_683 = (L_680)->GetAt(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_t2770800703* L_684 = ___ekey2;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_t2770800703* L_687 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_688 = V_1;
		NullCheck(L_687);
		uintptr_t L_689 = (((uintptr_t)((int32_t)((uint32_t)L_688>>((int32_t)24)))));
		uint32_t L_690 = (L_687)->GetAt(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_t2770800703* L_691 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_692 = V_2;
		NullCheck(L_691);
		int32_t L_693 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16))))));
		uint32_t L_694 = (L_691)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_t2770800703* L_695 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_696 = V_3;
		NullCheck(L_695);
		int32_t L_697 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8)))));
		uint32_t L_698 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_t2770800703* L_699 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_700 = V_0;
		NullCheck(L_699);
		int32_t L_701 = (((int32_t)((uint8_t)L_700)));
		uint32_t L_702 = (L_699)->GetAt(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_t2770800703* L_703 = ___ekey2;
		NullCheck(L_703);
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAt(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_t2770800703* L_706 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_707 = V_2;
		NullCheck(L_706);
		uintptr_t L_708 = (((uintptr_t)((int32_t)((uint32_t)L_707>>((int32_t)24)))));
		uint32_t L_709 = (L_706)->GetAt(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_t2770800703* L_710 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_711 = V_3;
		NullCheck(L_710);
		int32_t L_712 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16))))));
		uint32_t L_713 = (L_710)->GetAt(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_t2770800703* L_714 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		int32_t L_716 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8)))));
		uint32_t L_717 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_t2770800703* L_718 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_719 = V_1;
		NullCheck(L_718);
		int32_t L_720 = (((int32_t)((uint8_t)L_719)));
		uint32_t L_721 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_t2770800703* L_722 = ___ekey2;
		NullCheck(L_722);
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAt(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_t2770800703* L_725 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_726 = V_3;
		NullCheck(L_725);
		uintptr_t L_727 = (((uintptr_t)((int32_t)((uint32_t)L_726>>((int32_t)24)))));
		uint32_t L_728 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_t2770800703* L_729 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_730 = V_0;
		NullCheck(L_729);
		int32_t L_731 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16))))));
		uint32_t L_732 = (L_729)->GetAt(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_t2770800703* L_733 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_734 = V_1;
		NullCheck(L_733);
		int32_t L_735 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8)))));
		uint32_t L_736 = (L_733)->GetAt(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_t2770800703* L_737 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_738 = V_2;
		NullCheck(L_737);
		int32_t L_739 = (((int32_t)((uint8_t)L_738)));
		uint32_t L_740 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_t2770800703* L_741 = ___ekey2;
		NullCheck(L_741);
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAt(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_745 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_746 = V_4;
		NullCheck(L_745);
		uintptr_t L_747 = (((uintptr_t)((int32_t)((uint32_t)L_746>>((int32_t)24)))));
		uint32_t L_748 = (L_745)->GetAt(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_t2770800703* L_749 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_750 = V_5;
		NullCheck(L_749);
		int32_t L_751 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16))))));
		uint32_t L_752 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_t2770800703* L_753 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_754 = V_6;
		NullCheck(L_753);
		int32_t L_755 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8)))));
		uint32_t L_756 = (L_753)->GetAt(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_t2770800703* L_757 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_758 = V_7;
		NullCheck(L_757);
		int32_t L_759 = (((int32_t)((uint8_t)L_758)));
		uint32_t L_760 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_t2770800703* L_761 = ___ekey2;
		NullCheck(L_761);
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAt(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_t2770800703* L_764 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_765 = V_5;
		NullCheck(L_764);
		uintptr_t L_766 = (((uintptr_t)((int32_t)((uint32_t)L_765>>((int32_t)24)))));
		uint32_t L_767 = (L_764)->GetAt(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_t2770800703* L_768 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_769 = V_6;
		NullCheck(L_768);
		int32_t L_770 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16))))));
		uint32_t L_771 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_t2770800703* L_772 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_773 = V_7;
		NullCheck(L_772);
		int32_t L_774 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8)))));
		uint32_t L_775 = (L_772)->GetAt(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_t2770800703* L_776 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_777 = V_4;
		NullCheck(L_776);
		int32_t L_778 = (((int32_t)((uint8_t)L_777)));
		uint32_t L_779 = (L_776)->GetAt(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_t2770800703* L_780 = ___ekey2;
		NullCheck(L_780);
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_t2770800703* L_783 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_784 = V_6;
		NullCheck(L_783);
		uintptr_t L_785 = (((uintptr_t)((int32_t)((uint32_t)L_784>>((int32_t)24)))));
		uint32_t L_786 = (L_783)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_t2770800703* L_787 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_788 = V_7;
		NullCheck(L_787);
		int32_t L_789 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16))))));
		uint32_t L_790 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_t2770800703* L_791 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_792 = V_4;
		NullCheck(L_791);
		int32_t L_793 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8)))));
		uint32_t L_794 = (L_791)->GetAt(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_t2770800703* L_795 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_796 = V_5;
		NullCheck(L_795);
		int32_t L_797 = (((int32_t)((uint8_t)L_796)));
		uint32_t L_798 = (L_795)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_t2770800703* L_799 = ___ekey2;
		NullCheck(L_799);
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_t2770800703* L_802 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_803 = V_7;
		NullCheck(L_802);
		uintptr_t L_804 = (((uintptr_t)((int32_t)((uint32_t)L_803>>((int32_t)24)))));
		uint32_t L_805 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_t2770800703* L_806 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_807 = V_4;
		NullCheck(L_806);
		int32_t L_808 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16))))));
		uint32_t L_809 = (L_806)->GetAt(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_t2770800703* L_810 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_811 = V_5;
		NullCheck(L_810);
		int32_t L_812 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8)))));
		uint32_t L_813 = (L_810)->GetAt(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_t2770800703* L_814 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_815 = V_6;
		NullCheck(L_814);
		int32_t L_816 = (((int32_t)((uint8_t)L_815)));
		uint32_t L_817 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_t2770800703* L_818 = ___ekey2;
		NullCheck(L_818);
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAt(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_t2770800703* L_821 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_822 = V_0;
		NullCheck(L_821);
		uintptr_t L_823 = (((uintptr_t)((int32_t)((uint32_t)L_822>>((int32_t)24)))));
		uint32_t L_824 = (L_821)->GetAt(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_t2770800703* L_825 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_826 = V_1;
		NullCheck(L_825);
		int32_t L_827 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16))))));
		uint32_t L_828 = (L_825)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_t2770800703* L_829 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_830 = V_2;
		NullCheck(L_829);
		int32_t L_831 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8)))));
		uint32_t L_832 = (L_829)->GetAt(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_t2770800703* L_833 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_834 = V_3;
		NullCheck(L_833);
		int32_t L_835 = (((int32_t)((uint8_t)L_834)));
		uint32_t L_836 = (L_833)->GetAt(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_t2770800703* L_837 = ___ekey2;
		NullCheck(L_837);
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAt(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_t2770800703* L_840 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_841 = V_1;
		NullCheck(L_840);
		uintptr_t L_842 = (((uintptr_t)((int32_t)((uint32_t)L_841>>((int32_t)24)))));
		uint32_t L_843 = (L_840)->GetAt(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_t2770800703* L_844 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_845 = V_2;
		NullCheck(L_844);
		int32_t L_846 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16))))));
		uint32_t L_847 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_t2770800703* L_848 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_849 = V_3;
		NullCheck(L_848);
		int32_t L_850 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8)))));
		uint32_t L_851 = (L_848)->GetAt(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_t2770800703* L_852 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_853 = V_0;
		NullCheck(L_852);
		int32_t L_854 = (((int32_t)((uint8_t)L_853)));
		uint32_t L_855 = (L_852)->GetAt(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_t2770800703* L_856 = ___ekey2;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_t2770800703* L_859 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_860 = V_2;
		NullCheck(L_859);
		uintptr_t L_861 = (((uintptr_t)((int32_t)((uint32_t)L_860>>((int32_t)24)))));
		uint32_t L_862 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_t2770800703* L_863 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_864 = V_3;
		NullCheck(L_863);
		int32_t L_865 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16))))));
		uint32_t L_866 = (L_863)->GetAt(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_t2770800703* L_867 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_868 = V_0;
		NullCheck(L_867);
		int32_t L_869 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8)))));
		uint32_t L_870 = (L_867)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_t2770800703* L_871 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_872 = V_1;
		NullCheck(L_871);
		int32_t L_873 = (((int32_t)((uint8_t)L_872)));
		uint32_t L_874 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_t2770800703* L_875 = ___ekey2;
		NullCheck(L_875);
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAt(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_t2770800703* L_878 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_879 = V_3;
		NullCheck(L_878);
		uintptr_t L_880 = (((uintptr_t)((int32_t)((uint32_t)L_879>>((int32_t)24)))));
		uint32_t L_881 = (L_878)->GetAt(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_t2770800703* L_882 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_883 = V_0;
		NullCheck(L_882);
		int32_t L_884 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16))))));
		uint32_t L_885 = (L_882)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_t2770800703* L_886 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_887 = V_1;
		NullCheck(L_886);
		int32_t L_888 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8)))));
		uint32_t L_889 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_t2770800703* L_890 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_891 = V_2;
		NullCheck(L_890);
		int32_t L_892 = (((int32_t)((uint8_t)L_891)));
		uint32_t L_893 = (L_890)->GetAt(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_t2770800703* L_894 = ___ekey2;
		NullCheck(L_894);
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAt(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_898 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_899 = V_4;
		NullCheck(L_898);
		uintptr_t L_900 = (((uintptr_t)((int32_t)((uint32_t)L_899>>((int32_t)24)))));
		uint32_t L_901 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_t2770800703* L_902 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_903 = V_5;
		NullCheck(L_902);
		int32_t L_904 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16))))));
		uint32_t L_905 = (L_902)->GetAt(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_t2770800703* L_906 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_907 = V_6;
		NullCheck(L_906);
		int32_t L_908 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8)))));
		uint32_t L_909 = (L_906)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_t2770800703* L_910 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_911 = V_7;
		NullCheck(L_910);
		int32_t L_912 = (((int32_t)((uint8_t)L_911)));
		uint32_t L_913 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_t2770800703* L_914 = ___ekey2;
		NullCheck(L_914);
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAt(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_t2770800703* L_917 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_918 = V_5;
		NullCheck(L_917);
		uintptr_t L_919 = (((uintptr_t)((int32_t)((uint32_t)L_918>>((int32_t)24)))));
		uint32_t L_920 = (L_917)->GetAt(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_t2770800703* L_921 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_922 = V_6;
		NullCheck(L_921);
		int32_t L_923 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16))))));
		uint32_t L_924 = (L_921)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_t2770800703* L_925 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_926 = V_7;
		NullCheck(L_925);
		int32_t L_927 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8)))));
		uint32_t L_928 = (L_925)->GetAt(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_t2770800703* L_929 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_930 = V_4;
		NullCheck(L_929);
		int32_t L_931 = (((int32_t)((uint8_t)L_930)));
		uint32_t L_932 = (L_929)->GetAt(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_t2770800703* L_933 = ___ekey2;
		NullCheck(L_933);
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAt(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_t2770800703* L_936 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_937 = V_6;
		NullCheck(L_936);
		uintptr_t L_938 = (((uintptr_t)((int32_t)((uint32_t)L_937>>((int32_t)24)))));
		uint32_t L_939 = (L_936)->GetAt(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_t2770800703* L_940 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_941 = V_7;
		NullCheck(L_940);
		int32_t L_942 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16))))));
		uint32_t L_943 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_t2770800703* L_944 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_945 = V_4;
		NullCheck(L_944);
		int32_t L_946 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8)))));
		uint32_t L_947 = (L_944)->GetAt(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_t2770800703* L_948 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_949 = V_5;
		NullCheck(L_948);
		int32_t L_950 = (((int32_t)((uint8_t)L_949)));
		uint32_t L_951 = (L_948)->GetAt(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_t2770800703* L_952 = ___ekey2;
		NullCheck(L_952);
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_t2770800703* L_955 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_956 = V_7;
		NullCheck(L_955);
		uintptr_t L_957 = (((uintptr_t)((int32_t)((uint32_t)L_956>>((int32_t)24)))));
		uint32_t L_958 = (L_955)->GetAt(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_t2770800703* L_959 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_960 = V_4;
		NullCheck(L_959);
		int32_t L_961 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16))))));
		uint32_t L_962 = (L_959)->GetAt(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_t2770800703* L_963 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_964 = V_5;
		NullCheck(L_963);
		int32_t L_965 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8)))));
		uint32_t L_966 = (L_963)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_t2770800703* L_967 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_968 = V_6;
		NullCheck(L_967);
		int32_t L_969 = (((int32_t)((uint8_t)L_968)));
		uint32_t L_970 = (L_967)->GetAt(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_t2770800703* L_971 = ___ekey2;
		NullCheck(L_971);
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAt(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_t2770800703* L_974 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_975 = V_0;
		NullCheck(L_974);
		uintptr_t L_976 = (((uintptr_t)((int32_t)((uint32_t)L_975>>((int32_t)24)))));
		uint32_t L_977 = (L_974)->GetAt(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_t2770800703* L_978 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_979 = V_1;
		NullCheck(L_978);
		int32_t L_980 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16))))));
		uint32_t L_981 = (L_978)->GetAt(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_t2770800703* L_982 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_983 = V_2;
		NullCheck(L_982);
		int32_t L_984 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8)))));
		uint32_t L_985 = (L_982)->GetAt(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_t2770800703* L_986 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_987 = V_3;
		NullCheck(L_986);
		int32_t L_988 = (((int32_t)((uint8_t)L_987)));
		uint32_t L_989 = (L_986)->GetAt(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_t2770800703* L_990 = ___ekey2;
		NullCheck(L_990);
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAt(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_t2770800703* L_993 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_994 = V_1;
		NullCheck(L_993);
		uintptr_t L_995 = (((uintptr_t)((int32_t)((uint32_t)L_994>>((int32_t)24)))));
		uint32_t L_996 = (L_993)->GetAt(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_t2770800703* L_997 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_998 = V_2;
		NullCheck(L_997);
		int32_t L_999 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16))))));
		uint32_t L_1000 = (L_997)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_t2770800703* L_1001 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1002 = V_3;
		NullCheck(L_1001);
		int32_t L_1003 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8)))));
		uint32_t L_1004 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_t2770800703* L_1005 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1006 = V_0;
		NullCheck(L_1005);
		int32_t L_1007 = (((int32_t)((uint8_t)L_1006)));
		uint32_t L_1008 = (L_1005)->GetAt(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_t2770800703* L_1009 = ___ekey2;
		NullCheck(L_1009);
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAt(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_t2770800703* L_1012 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1013 = V_2;
		NullCheck(L_1012);
		uintptr_t L_1014 = (((uintptr_t)((int32_t)((uint32_t)L_1013>>((int32_t)24)))));
		uint32_t L_1015 = (L_1012)->GetAt(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_t2770800703* L_1016 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1017 = V_3;
		NullCheck(L_1016);
		int32_t L_1018 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16))))));
		uint32_t L_1019 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_t2770800703* L_1020 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1021 = V_0;
		NullCheck(L_1020);
		int32_t L_1022 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8)))));
		uint32_t L_1023 = (L_1020)->GetAt(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_t2770800703* L_1024 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1025 = V_1;
		NullCheck(L_1024);
		int32_t L_1026 = (((int32_t)((uint8_t)L_1025)));
		uint32_t L_1027 = (L_1024)->GetAt(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_t2770800703* L_1028 = ___ekey2;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_t2770800703* L_1031 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T0_18();
		uint32_t L_1032 = V_3;
		NullCheck(L_1031);
		uintptr_t L_1033 = (((uintptr_t)((int32_t)((uint32_t)L_1032>>((int32_t)24)))));
		uint32_t L_1034 = (L_1031)->GetAt(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_t2770800703* L_1035 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T1_19();
		uint32_t L_1036 = V_0;
		NullCheck(L_1035);
		int32_t L_1037 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16))))));
		uint32_t L_1038 = (L_1035)->GetAt(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_t2770800703* L_1039 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T2_20();
		uint32_t L_1040 = V_1;
		NullCheck(L_1039);
		int32_t L_1041 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8)))));
		uint32_t L_1042 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_t2770800703* L_1043 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_T3_21();
		uint32_t L_1044 = V_2;
		NullCheck(L_1043);
		int32_t L_1045 = (((int32_t)((uint8_t)L_1044)));
		uint32_t L_1046 = (L_1043)->GetAt(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_t2770800703* L_1047 = ___ekey2;
		NullCheck(L_1047);
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAt(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t4116647657* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1051 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1052 = V_4;
		NullCheck(L_1051);
		uintptr_t L_1053 = (((uintptr_t)((int32_t)((uint32_t)L_1052>>((int32_t)24)))));
		uint8_t L_1054 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_t2770800703* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		NullCheck(L_1055);
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAt(static_cast<il2cpp_array_size_t>(L_1057));
		NullCheck(L_1050);
		(L_1050)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1059 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1060 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1061 = V_5;
		NullCheck(L_1060);
		int32_t L_1062 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16))))));
		uint8_t L_1063 = (L_1060)->GetAt(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_t2770800703* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		NullCheck(L_1064);
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1066));
		NullCheck(L_1059);
		(L_1059)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1068 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1069 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1070 = V_6;
		NullCheck(L_1069);
		int32_t L_1071 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8)))));
		uint8_t L_1072 = (L_1069)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_t2770800703* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		NullCheck(L_1073);
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAt(static_cast<il2cpp_array_size_t>(L_1075));
		NullCheck(L_1068);
		(L_1068)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1077 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1078 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1079 = V_7;
		NullCheck(L_1078);
		int32_t L_1080 = (((int32_t)((uint8_t)L_1079)));
		uint8_t L_1081 = (L_1078)->GetAt(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_t2770800703* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		NullCheck(L_1082);
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1085));
		NullCheck(L_1077);
		(L_1077)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)(((int32_t)((uint8_t)L_1086)))))))));
		ByteU5BU5D_t4116647657* L_1087 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1088 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1089 = V_5;
		NullCheck(L_1088);
		uintptr_t L_1090 = (((uintptr_t)((int32_t)((uint32_t)L_1089>>((int32_t)24)))));
		uint8_t L_1091 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_t2770800703* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		NullCheck(L_1092);
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAt(static_cast<il2cpp_array_size_t>(L_1094));
		NullCheck(L_1087);
		(L_1087)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1096 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1097 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1098 = V_6;
		NullCheck(L_1097);
		int32_t L_1099 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16))))));
		uint8_t L_1100 = (L_1097)->GetAt(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_t2770800703* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		NullCheck(L_1101);
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAt(static_cast<il2cpp_array_size_t>(L_1103));
		NullCheck(L_1096);
		(L_1096)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1105 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1107 = V_7;
		NullCheck(L_1106);
		int32_t L_1108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8)))));
		uint8_t L_1109 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_t2770800703* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		NullCheck(L_1110);
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAt(static_cast<il2cpp_array_size_t>(L_1112));
		NullCheck(L_1105);
		(L_1105)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1114 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1115 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1116 = V_4;
		NullCheck(L_1115);
		int32_t L_1117 = (((int32_t)((uint8_t)L_1116)));
		uint8_t L_1118 = (L_1115)->GetAt(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_t2770800703* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		NullCheck(L_1119);
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAt(static_cast<il2cpp_array_size_t>(L_1122));
		NullCheck(L_1114);
		(L_1114)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)(((int32_t)((uint8_t)L_1123)))))))));
		ByteU5BU5D_t4116647657* L_1124 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1126 = V_6;
		NullCheck(L_1125);
		uintptr_t L_1127 = (((uintptr_t)((int32_t)((uint32_t)L_1126>>((int32_t)24)))));
		uint8_t L_1128 = (L_1125)->GetAt(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_t2770800703* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		NullCheck(L_1129);
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		NullCheck(L_1124);
		(L_1124)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1133 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1134 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1135 = V_7;
		NullCheck(L_1134);
		int32_t L_1136 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16))))));
		uint8_t L_1137 = (L_1134)->GetAt(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_t2770800703* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		NullCheck(L_1138);
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAt(static_cast<il2cpp_array_size_t>(L_1140));
		NullCheck(L_1133);
		(L_1133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1142 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1143 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1144 = V_4;
		NullCheck(L_1143);
		int32_t L_1145 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8)))));
		uint8_t L_1146 = (L_1143)->GetAt(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_t2770800703* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		NullCheck(L_1147);
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		NullCheck(L_1142);
		(L_1142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1151 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1152 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1153 = V_5;
		NullCheck(L_1152);
		int32_t L_1154 = (((int32_t)((uint8_t)L_1153)));
		uint8_t L_1155 = (L_1152)->GetAt(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_t2770800703* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		NullCheck(L_1156);
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAt(static_cast<il2cpp_array_size_t>(L_1159));
		NullCheck(L_1151);
		(L_1151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)(((int32_t)((uint8_t)L_1160)))))))));
		ByteU5BU5D_t4116647657* L_1161 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1162 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1163 = V_7;
		NullCheck(L_1162);
		uintptr_t L_1164 = (((uintptr_t)((int32_t)((uint32_t)L_1163>>((int32_t)24)))));
		uint8_t L_1165 = (L_1162)->GetAt(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_t2770800703* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		NullCheck(L_1166);
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1168));
		NullCheck(L_1161);
		(L_1161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1170 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1171 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1172 = V_4;
		NullCheck(L_1171);
		int32_t L_1173 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16))))));
		uint8_t L_1174 = (L_1171)->GetAt(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_t2770800703* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		NullCheck(L_1175);
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAt(static_cast<il2cpp_array_size_t>(L_1177));
		NullCheck(L_1170);
		(L_1170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1179 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1180 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1181 = V_5;
		NullCheck(L_1180);
		int32_t L_1182 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8)))));
		uint8_t L_1183 = (L_1180)->GetAt(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_t2770800703* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		NullCheck(L_1184);
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAt(static_cast<il2cpp_array_size_t>(L_1186));
		NullCheck(L_1179);
		(L_1179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1188 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1189 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_SBox_16();
		uint32_t L_1190 = V_6;
		NullCheck(L_1189);
		int32_t L_1191 = (((int32_t)((uint8_t)L_1190)));
		uint8_t L_1192 = (L_1189)->GetAt(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_t2770800703* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		NullCheck(L_1193);
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAt(static_cast<il2cpp_array_size_t>(L_1196));
		NullCheck(L_1188);
		(L_1188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)(((int32_t)((uint8_t)L_1197)))))))));
		return;
	}
}
// System.Void System.Security.Cryptography.AesTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR void AesTransform_Decrypt128_m3018534522 (AesTransform_t2957123611 * __this, ByteU5BU5D_t4116647657* ___indata0, ByteU5BU5D_t4116647657* ___outdata1, UInt32U5BU5D_t2770800703* ___ekey2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AesTransform_Decrypt128_m3018534522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		V_8 = ((int32_t)40);
		ByteU5BU5D_t4116647657* L_0 = ___indata0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = ___indata0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = ___indata0;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = ___indata0;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t2770800703* L_12 = ___ekey2;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_8<<(int32_t)8))))|(int32_t)L_11))^(int32_t)L_14));
		ByteU5BU5D_t4116647657* L_15 = ___indata0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = ___indata0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = ___indata0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_t4116647657* L_24 = ___indata0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t2770800703* L_27 = ___ekey2;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_20<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_23<<(int32_t)8))))|(int32_t)L_26))^(int32_t)L_29));
		ByteU5BU5D_t4116647657* L_30 = ___indata0;
		NullCheck(L_30);
		int32_t L_31 = 8;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		ByteU5BU5D_t4116647657* L_33 = ___indata0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)9);
		uint8_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_t4116647657* L_36 = ___indata0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)10);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_t4116647657* L_39 = ___indata0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)11);
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t2770800703* L_42 = ___ekey2;
		NullCheck(L_42);
		int32_t L_43 = 2;
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_35<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_38<<(int32_t)8))))|(int32_t)L_41))^(int32_t)L_44));
		ByteU5BU5D_t4116647657* L_45 = ___indata0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)12);
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		ByteU5BU5D_t4116647657* L_48 = ___indata0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)13);
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		ByteU5BU5D_t4116647657* L_51 = ___indata0;
		NullCheck(L_51);
		int32_t L_52 = ((int32_t)14);
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		ByteU5BU5D_t4116647657* L_54 = ___indata0;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)15);
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t2770800703* L_57 = ___ekey2;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_47<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_50<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_53<<(int32_t)8))))|(int32_t)L_56))^(int32_t)L_59));
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_60 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_61 = V_0;
		NullCheck(L_60);
		uintptr_t L_62 = (((uintptr_t)((int32_t)((uint32_t)L_61>>((int32_t)24)))));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t2770800703* L_64 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_65>>((int32_t)16))))));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		UInt32U5BU5D_t2770800703* L_68 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_69>>8)))));
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t2770800703* L_72 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_73 = V_1;
		NullCheck(L_72);
		int32_t L_74 = (((int32_t)((uint8_t)L_73)));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		UInt32U5BU5D_t2770800703* L_76 = ___ekey2;
		NullCheck(L_76);
		int32_t L_77 = 4;
		uint32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_63^(int32_t)L_67))^(int32_t)L_71))^(int32_t)L_75))^(int32_t)L_78));
		UInt32U5BU5D_t2770800703* L_79 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_80 = V_1;
		NullCheck(L_79);
		uintptr_t L_81 = (((uintptr_t)((int32_t)((uint32_t)L_80>>((int32_t)24)))));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t2770800703* L_83 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_84>>((int32_t)16))))));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		UInt32U5BU5D_t2770800703* L_87 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_88 = V_3;
		NullCheck(L_87);
		int32_t L_89 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_88>>8)))));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t2770800703* L_91 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = (((int32_t)((uint8_t)L_92)));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t2770800703* L_95 = ___ekey2;
		NullCheck(L_95);
		int32_t L_96 = 5;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_82^(int32_t)L_86))^(int32_t)L_90))^(int32_t)L_94))^(int32_t)L_97));
		UInt32U5BU5D_t2770800703* L_98 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_99 = V_2;
		NullCheck(L_98);
		uintptr_t L_100 = (((uintptr_t)((int32_t)((uint32_t)L_99>>((int32_t)24)))));
		uint32_t L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		UInt32U5BU5D_t2770800703* L_102 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_103 = V_1;
		NullCheck(L_102);
		int32_t L_104 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_103>>((int32_t)16))))));
		uint32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t2770800703* L_106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_107 = V_0;
		NullCheck(L_106);
		int32_t L_108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>8)))));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		UInt32U5BU5D_t2770800703* L_110 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_111 = V_3;
		NullCheck(L_110);
		int32_t L_112 = (((int32_t)((uint8_t)L_111)));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		UInt32U5BU5D_t2770800703* L_114 = ___ekey2;
		NullCheck(L_114);
		int32_t L_115 = 6;
		uint32_t L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_101^(int32_t)L_105))^(int32_t)L_109))^(int32_t)L_113))^(int32_t)L_116));
		UInt32U5BU5D_t2770800703* L_117 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_118 = V_3;
		NullCheck(L_117);
		uintptr_t L_119 = (((uintptr_t)((int32_t)((uint32_t)L_118>>((int32_t)24)))));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		UInt32U5BU5D_t2770800703* L_121 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_122 = V_2;
		NullCheck(L_121);
		int32_t L_123 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_122>>((int32_t)16))))));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		UInt32U5BU5D_t2770800703* L_125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_126 = V_1;
		NullCheck(L_125);
		int32_t L_127 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_126>>8)))));
		uint32_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		UInt32U5BU5D_t2770800703* L_129 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_130 = V_0;
		NullCheck(L_129);
		int32_t L_131 = (((int32_t)((uint8_t)L_130)));
		uint32_t L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		UInt32U5BU5D_t2770800703* L_133 = ___ekey2;
		NullCheck(L_133);
		int32_t L_134 = 7;
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_120^(int32_t)L_124))^(int32_t)L_128))^(int32_t)L_132))^(int32_t)L_135));
		UInt32U5BU5D_t2770800703* L_136 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_137 = V_4;
		NullCheck(L_136);
		uintptr_t L_138 = (((uintptr_t)((int32_t)((uint32_t)L_137>>((int32_t)24)))));
		uint32_t L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt32U5BU5D_t2770800703* L_140 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_141 = V_7;
		NullCheck(L_140);
		int32_t L_142 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_141>>((int32_t)16))))));
		uint32_t L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		UInt32U5BU5D_t2770800703* L_144 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_145 = V_6;
		NullCheck(L_144);
		int32_t L_146 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_145>>8)))));
		uint32_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		UInt32U5BU5D_t2770800703* L_148 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_149 = V_5;
		NullCheck(L_148);
		int32_t L_150 = (((int32_t)((uint8_t)L_149)));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		UInt32U5BU5D_t2770800703* L_152 = ___ekey2;
		NullCheck(L_152);
		int32_t L_153 = 8;
		uint32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_139^(int32_t)L_143))^(int32_t)L_147))^(int32_t)L_151))^(int32_t)L_154));
		UInt32U5BU5D_t2770800703* L_155 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_156 = V_5;
		NullCheck(L_155);
		uintptr_t L_157 = (((uintptr_t)((int32_t)((uint32_t)L_156>>((int32_t)24)))));
		uint32_t L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		UInt32U5BU5D_t2770800703* L_159 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_160 = V_4;
		NullCheck(L_159);
		int32_t L_161 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_160>>((int32_t)16))))));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		UInt32U5BU5D_t2770800703* L_163 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_164 = V_7;
		NullCheck(L_163);
		int32_t L_165 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_164>>8)))));
		uint32_t L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		UInt32U5BU5D_t2770800703* L_167 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_168 = V_6;
		NullCheck(L_167);
		int32_t L_169 = (((int32_t)((uint8_t)L_168)));
		uint32_t L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		UInt32U5BU5D_t2770800703* L_171 = ___ekey2;
		NullCheck(L_171);
		int32_t L_172 = ((int32_t)9);
		uint32_t L_173 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_158^(int32_t)L_162))^(int32_t)L_166))^(int32_t)L_170))^(int32_t)L_173));
		UInt32U5BU5D_t2770800703* L_174 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_175 = V_6;
		NullCheck(L_174);
		uintptr_t L_176 = (((uintptr_t)((int32_t)((uint32_t)L_175>>((int32_t)24)))));
		uint32_t L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		UInt32U5BU5D_t2770800703* L_178 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_179 = V_5;
		NullCheck(L_178);
		int32_t L_180 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_179>>((int32_t)16))))));
		uint32_t L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		UInt32U5BU5D_t2770800703* L_182 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_183 = V_4;
		NullCheck(L_182);
		int32_t L_184 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_183>>8)))));
		uint32_t L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		UInt32U5BU5D_t2770800703* L_186 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_187 = V_7;
		NullCheck(L_186);
		int32_t L_188 = (((int32_t)((uint8_t)L_187)));
		uint32_t L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		UInt32U5BU5D_t2770800703* L_190 = ___ekey2;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)10);
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_177^(int32_t)L_181))^(int32_t)L_185))^(int32_t)L_189))^(int32_t)L_192));
		UInt32U5BU5D_t2770800703* L_193 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_194 = V_7;
		NullCheck(L_193);
		uintptr_t L_195 = (((uintptr_t)((int32_t)((uint32_t)L_194>>((int32_t)24)))));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt32U5BU5D_t2770800703* L_197 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_198 = V_6;
		NullCheck(L_197);
		int32_t L_199 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_198>>((int32_t)16))))));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		UInt32U5BU5D_t2770800703* L_201 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_202 = V_5;
		NullCheck(L_201);
		int32_t L_203 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_202>>8)))));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		UInt32U5BU5D_t2770800703* L_205 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_206 = V_4;
		NullCheck(L_205);
		int32_t L_207 = (((int32_t)((uint8_t)L_206)));
		uint32_t L_208 = (L_205)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		UInt32U5BU5D_t2770800703* L_209 = ___ekey2;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)11);
		uint32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_196^(int32_t)L_200))^(int32_t)L_204))^(int32_t)L_208))^(int32_t)L_211));
		UInt32U5BU5D_t2770800703* L_212 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_213 = V_0;
		NullCheck(L_212);
		uintptr_t L_214 = (((uintptr_t)((int32_t)((uint32_t)L_213>>((int32_t)24)))));
		uint32_t L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		UInt32U5BU5D_t2770800703* L_216 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_217 = V_3;
		NullCheck(L_216);
		int32_t L_218 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_217>>((int32_t)16))))));
		uint32_t L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		UInt32U5BU5D_t2770800703* L_220 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_221 = V_2;
		NullCheck(L_220);
		int32_t L_222 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_221>>8)))));
		uint32_t L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		UInt32U5BU5D_t2770800703* L_224 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_225 = V_1;
		NullCheck(L_224);
		int32_t L_226 = (((int32_t)((uint8_t)L_225)));
		uint32_t L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		UInt32U5BU5D_t2770800703* L_228 = ___ekey2;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)12);
		uint32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_215^(int32_t)L_219))^(int32_t)L_223))^(int32_t)L_227))^(int32_t)L_230));
		UInt32U5BU5D_t2770800703* L_231 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_232 = V_1;
		NullCheck(L_231);
		uintptr_t L_233 = (((uintptr_t)((int32_t)((uint32_t)L_232>>((int32_t)24)))));
		uint32_t L_234 = (L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		UInt32U5BU5D_t2770800703* L_235 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_236 = V_0;
		NullCheck(L_235);
		int32_t L_237 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_236>>((int32_t)16))))));
		uint32_t L_238 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		UInt32U5BU5D_t2770800703* L_239 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_240 = V_3;
		NullCheck(L_239);
		int32_t L_241 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_240>>8)))));
		uint32_t L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		UInt32U5BU5D_t2770800703* L_243 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_244 = V_2;
		NullCheck(L_243);
		int32_t L_245 = (((int32_t)((uint8_t)L_244)));
		uint32_t L_246 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		UInt32U5BU5D_t2770800703* L_247 = ___ekey2;
		NullCheck(L_247);
		int32_t L_248 = ((int32_t)13);
		uint32_t L_249 = (L_247)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_234^(int32_t)L_238))^(int32_t)L_242))^(int32_t)L_246))^(int32_t)L_249));
		UInt32U5BU5D_t2770800703* L_250 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_251 = V_2;
		NullCheck(L_250);
		uintptr_t L_252 = (((uintptr_t)((int32_t)((uint32_t)L_251>>((int32_t)24)))));
		uint32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		UInt32U5BU5D_t2770800703* L_254 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_255 = V_1;
		NullCheck(L_254);
		int32_t L_256 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_255>>((int32_t)16))))));
		uint32_t L_257 = (L_254)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		UInt32U5BU5D_t2770800703* L_258 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_259 = V_0;
		NullCheck(L_258);
		int32_t L_260 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_259>>8)))));
		uint32_t L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		UInt32U5BU5D_t2770800703* L_262 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_263 = V_3;
		NullCheck(L_262);
		int32_t L_264 = (((int32_t)((uint8_t)L_263)));
		uint32_t L_265 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_264));
		UInt32U5BU5D_t2770800703* L_266 = ___ekey2;
		NullCheck(L_266);
		int32_t L_267 = ((int32_t)14);
		uint32_t L_268 = (L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_253^(int32_t)L_257))^(int32_t)L_261))^(int32_t)L_265))^(int32_t)L_268));
		UInt32U5BU5D_t2770800703* L_269 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_270 = V_3;
		NullCheck(L_269);
		uintptr_t L_271 = (((uintptr_t)((int32_t)((uint32_t)L_270>>((int32_t)24)))));
		uint32_t L_272 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_271));
		UInt32U5BU5D_t2770800703* L_273 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_274 = V_2;
		NullCheck(L_273);
		int32_t L_275 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_274>>((int32_t)16))))));
		uint32_t L_276 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_275));
		UInt32U5BU5D_t2770800703* L_277 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_278 = V_1;
		NullCheck(L_277);
		int32_t L_279 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_278>>8)))));
		uint32_t L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		UInt32U5BU5D_t2770800703* L_281 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_282 = V_0;
		NullCheck(L_281);
		int32_t L_283 = (((int32_t)((uint8_t)L_282)));
		uint32_t L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		UInt32U5BU5D_t2770800703* L_285 = ___ekey2;
		NullCheck(L_285);
		int32_t L_286 = ((int32_t)15);
		uint32_t L_287 = (L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_272^(int32_t)L_276))^(int32_t)L_280))^(int32_t)L_284))^(int32_t)L_287));
		UInt32U5BU5D_t2770800703* L_288 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_289 = V_4;
		NullCheck(L_288);
		uintptr_t L_290 = (((uintptr_t)((int32_t)((uint32_t)L_289>>((int32_t)24)))));
		uint32_t L_291 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		UInt32U5BU5D_t2770800703* L_292 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_293 = V_7;
		NullCheck(L_292);
		int32_t L_294 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_293>>((int32_t)16))))));
		uint32_t L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		UInt32U5BU5D_t2770800703* L_296 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_297 = V_6;
		NullCheck(L_296);
		int32_t L_298 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_297>>8)))));
		uint32_t L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		UInt32U5BU5D_t2770800703* L_300 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_301 = V_5;
		NullCheck(L_300);
		int32_t L_302 = (((int32_t)((uint8_t)L_301)));
		uint32_t L_303 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		UInt32U5BU5D_t2770800703* L_304 = ___ekey2;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)16);
		uint32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_291^(int32_t)L_295))^(int32_t)L_299))^(int32_t)L_303))^(int32_t)L_306));
		UInt32U5BU5D_t2770800703* L_307 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_308 = V_5;
		NullCheck(L_307);
		uintptr_t L_309 = (((uintptr_t)((int32_t)((uint32_t)L_308>>((int32_t)24)))));
		uint32_t L_310 = (L_307)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		UInt32U5BU5D_t2770800703* L_311 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_312 = V_4;
		NullCheck(L_311);
		int32_t L_313 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_312>>((int32_t)16))))));
		uint32_t L_314 = (L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		UInt32U5BU5D_t2770800703* L_315 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_316 = V_7;
		NullCheck(L_315);
		int32_t L_317 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_316>>8)))));
		uint32_t L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		UInt32U5BU5D_t2770800703* L_319 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_320 = V_6;
		NullCheck(L_319);
		int32_t L_321 = (((int32_t)((uint8_t)L_320)));
		uint32_t L_322 = (L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		UInt32U5BU5D_t2770800703* L_323 = ___ekey2;
		NullCheck(L_323);
		int32_t L_324 = ((int32_t)17);
		uint32_t L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_310^(int32_t)L_314))^(int32_t)L_318))^(int32_t)L_322))^(int32_t)L_325));
		UInt32U5BU5D_t2770800703* L_326 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_327 = V_6;
		NullCheck(L_326);
		uintptr_t L_328 = (((uintptr_t)((int32_t)((uint32_t)L_327>>((int32_t)24)))));
		uint32_t L_329 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		UInt32U5BU5D_t2770800703* L_330 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_331 = V_5;
		NullCheck(L_330);
		int32_t L_332 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_331>>((int32_t)16))))));
		uint32_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		UInt32U5BU5D_t2770800703* L_334 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_335 = V_4;
		NullCheck(L_334);
		int32_t L_336 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_335>>8)))));
		uint32_t L_337 = (L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		UInt32U5BU5D_t2770800703* L_338 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_339 = V_7;
		NullCheck(L_338);
		int32_t L_340 = (((int32_t)((uint8_t)L_339)));
		uint32_t L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		UInt32U5BU5D_t2770800703* L_342 = ___ekey2;
		NullCheck(L_342);
		int32_t L_343 = ((int32_t)18);
		uint32_t L_344 = (L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_343));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_329^(int32_t)L_333))^(int32_t)L_337))^(int32_t)L_341))^(int32_t)L_344));
		UInt32U5BU5D_t2770800703* L_345 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_346 = V_7;
		NullCheck(L_345);
		uintptr_t L_347 = (((uintptr_t)((int32_t)((uint32_t)L_346>>((int32_t)24)))));
		uint32_t L_348 = (L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		UInt32U5BU5D_t2770800703* L_349 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_350 = V_6;
		NullCheck(L_349);
		int32_t L_351 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_350>>((int32_t)16))))));
		uint32_t L_352 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		UInt32U5BU5D_t2770800703* L_353 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_354 = V_5;
		NullCheck(L_353);
		int32_t L_355 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_354>>8)))));
		uint32_t L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		UInt32U5BU5D_t2770800703* L_357 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_358 = V_4;
		NullCheck(L_357);
		int32_t L_359 = (((int32_t)((uint8_t)L_358)));
		uint32_t L_360 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		UInt32U5BU5D_t2770800703* L_361 = ___ekey2;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)19);
		uint32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_348^(int32_t)L_352))^(int32_t)L_356))^(int32_t)L_360))^(int32_t)L_363));
		UInt32U5BU5D_t2770800703* L_364 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_365 = V_0;
		NullCheck(L_364);
		uintptr_t L_366 = (((uintptr_t)((int32_t)((uint32_t)L_365>>((int32_t)24)))));
		uint32_t L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		UInt32U5BU5D_t2770800703* L_368 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_369 = V_3;
		NullCheck(L_368);
		int32_t L_370 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_369>>((int32_t)16))))));
		uint32_t L_371 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		UInt32U5BU5D_t2770800703* L_372 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_373 = V_2;
		NullCheck(L_372);
		int32_t L_374 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_373>>8)))));
		uint32_t L_375 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		UInt32U5BU5D_t2770800703* L_376 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_377 = V_1;
		NullCheck(L_376);
		int32_t L_378 = (((int32_t)((uint8_t)L_377)));
		uint32_t L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		UInt32U5BU5D_t2770800703* L_380 = ___ekey2;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)20);
		uint32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_367^(int32_t)L_371))^(int32_t)L_375))^(int32_t)L_379))^(int32_t)L_382));
		UInt32U5BU5D_t2770800703* L_383 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_384 = V_1;
		NullCheck(L_383);
		uintptr_t L_385 = (((uintptr_t)((int32_t)((uint32_t)L_384>>((int32_t)24)))));
		uint32_t L_386 = (L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		UInt32U5BU5D_t2770800703* L_387 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_388 = V_0;
		NullCheck(L_387);
		int32_t L_389 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_388>>((int32_t)16))))));
		uint32_t L_390 = (L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		UInt32U5BU5D_t2770800703* L_391 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_392 = V_3;
		NullCheck(L_391);
		int32_t L_393 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_392>>8)))));
		uint32_t L_394 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		UInt32U5BU5D_t2770800703* L_395 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_396 = V_2;
		NullCheck(L_395);
		int32_t L_397 = (((int32_t)((uint8_t)L_396)));
		uint32_t L_398 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		UInt32U5BU5D_t2770800703* L_399 = ___ekey2;
		NullCheck(L_399);
		int32_t L_400 = ((int32_t)21);
		uint32_t L_401 = (L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_400));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_386^(int32_t)L_390))^(int32_t)L_394))^(int32_t)L_398))^(int32_t)L_401));
		UInt32U5BU5D_t2770800703* L_402 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_403 = V_2;
		NullCheck(L_402);
		uintptr_t L_404 = (((uintptr_t)((int32_t)((uint32_t)L_403>>((int32_t)24)))));
		uint32_t L_405 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_404));
		UInt32U5BU5D_t2770800703* L_406 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_407 = V_1;
		NullCheck(L_406);
		int32_t L_408 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_407>>((int32_t)16))))));
		uint32_t L_409 = (L_406)->GetAt(static_cast<il2cpp_array_size_t>(L_408));
		UInt32U5BU5D_t2770800703* L_410 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_411 = V_0;
		NullCheck(L_410);
		int32_t L_412 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_411>>8)))));
		uint32_t L_413 = (L_410)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		UInt32U5BU5D_t2770800703* L_414 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_415 = V_3;
		NullCheck(L_414);
		int32_t L_416 = (((int32_t)((uint8_t)L_415)));
		uint32_t L_417 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		UInt32U5BU5D_t2770800703* L_418 = ___ekey2;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)22);
		uint32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_405^(int32_t)L_409))^(int32_t)L_413))^(int32_t)L_417))^(int32_t)L_420));
		UInt32U5BU5D_t2770800703* L_421 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_422 = V_3;
		NullCheck(L_421);
		uintptr_t L_423 = (((uintptr_t)((int32_t)((uint32_t)L_422>>((int32_t)24)))));
		uint32_t L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		UInt32U5BU5D_t2770800703* L_425 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_426 = V_2;
		NullCheck(L_425);
		int32_t L_427 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_426>>((int32_t)16))))));
		uint32_t L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		UInt32U5BU5D_t2770800703* L_429 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_430 = V_1;
		NullCheck(L_429);
		int32_t L_431 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_430>>8)))));
		uint32_t L_432 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		UInt32U5BU5D_t2770800703* L_433 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_434 = V_0;
		NullCheck(L_433);
		int32_t L_435 = (((int32_t)((uint8_t)L_434)));
		uint32_t L_436 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		UInt32U5BU5D_t2770800703* L_437 = ___ekey2;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)23);
		uint32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_424^(int32_t)L_428))^(int32_t)L_432))^(int32_t)L_436))^(int32_t)L_439));
		UInt32U5BU5D_t2770800703* L_440 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_441 = V_4;
		NullCheck(L_440);
		uintptr_t L_442 = (((uintptr_t)((int32_t)((uint32_t)L_441>>((int32_t)24)))));
		uint32_t L_443 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		UInt32U5BU5D_t2770800703* L_444 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_445 = V_7;
		NullCheck(L_444);
		int32_t L_446 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_445>>((int32_t)16))))));
		uint32_t L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		UInt32U5BU5D_t2770800703* L_448 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_449 = V_6;
		NullCheck(L_448);
		int32_t L_450 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_449>>8)))));
		uint32_t L_451 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		UInt32U5BU5D_t2770800703* L_452 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_453 = V_5;
		NullCheck(L_452);
		int32_t L_454 = (((int32_t)((uint8_t)L_453)));
		uint32_t L_455 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		UInt32U5BU5D_t2770800703* L_456 = ___ekey2;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)24);
		uint32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_443^(int32_t)L_447))^(int32_t)L_451))^(int32_t)L_455))^(int32_t)L_458));
		UInt32U5BU5D_t2770800703* L_459 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_460 = V_5;
		NullCheck(L_459);
		uintptr_t L_461 = (((uintptr_t)((int32_t)((uint32_t)L_460>>((int32_t)24)))));
		uint32_t L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		UInt32U5BU5D_t2770800703* L_463 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_464 = V_4;
		NullCheck(L_463);
		int32_t L_465 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_464>>((int32_t)16))))));
		uint32_t L_466 = (L_463)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		UInt32U5BU5D_t2770800703* L_467 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_468 = V_7;
		NullCheck(L_467);
		int32_t L_469 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_468>>8)))));
		uint32_t L_470 = (L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		UInt32U5BU5D_t2770800703* L_471 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_472 = V_6;
		NullCheck(L_471);
		int32_t L_473 = (((int32_t)((uint8_t)L_472)));
		uint32_t L_474 = (L_471)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		UInt32U5BU5D_t2770800703* L_475 = ___ekey2;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)25);
		uint32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_462^(int32_t)L_466))^(int32_t)L_470))^(int32_t)L_474))^(int32_t)L_477));
		UInt32U5BU5D_t2770800703* L_478 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_479 = V_6;
		NullCheck(L_478);
		uintptr_t L_480 = (((uintptr_t)((int32_t)((uint32_t)L_479>>((int32_t)24)))));
		uint32_t L_481 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_480));
		UInt32U5BU5D_t2770800703* L_482 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_483 = V_5;
		NullCheck(L_482);
		int32_t L_484 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_483>>((int32_t)16))))));
		uint32_t L_485 = (L_482)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		UInt32U5BU5D_t2770800703* L_486 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_487 = V_4;
		NullCheck(L_486);
		int32_t L_488 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_487>>8)))));
		uint32_t L_489 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		UInt32U5BU5D_t2770800703* L_490 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_491 = V_7;
		NullCheck(L_490);
		int32_t L_492 = (((int32_t)((uint8_t)L_491)));
		uint32_t L_493 = (L_490)->GetAt(static_cast<il2cpp_array_size_t>(L_492));
		UInt32U5BU5D_t2770800703* L_494 = ___ekey2;
		NullCheck(L_494);
		int32_t L_495 = ((int32_t)26);
		uint32_t L_496 = (L_494)->GetAt(static_cast<il2cpp_array_size_t>(L_495));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_481^(int32_t)L_485))^(int32_t)L_489))^(int32_t)L_493))^(int32_t)L_496));
		UInt32U5BU5D_t2770800703* L_497 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_498 = V_7;
		NullCheck(L_497);
		uintptr_t L_499 = (((uintptr_t)((int32_t)((uint32_t)L_498>>((int32_t)24)))));
		uint32_t L_500 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		UInt32U5BU5D_t2770800703* L_501 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_502 = V_6;
		NullCheck(L_501);
		int32_t L_503 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_502>>((int32_t)16))))));
		uint32_t L_504 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_503));
		UInt32U5BU5D_t2770800703* L_505 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_506 = V_5;
		NullCheck(L_505);
		int32_t L_507 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_506>>8)))));
		uint32_t L_508 = (L_505)->GetAt(static_cast<il2cpp_array_size_t>(L_507));
		UInt32U5BU5D_t2770800703* L_509 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_510 = V_4;
		NullCheck(L_509);
		int32_t L_511 = (((int32_t)((uint8_t)L_510)));
		uint32_t L_512 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_511));
		UInt32U5BU5D_t2770800703* L_513 = ___ekey2;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)27);
		uint32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_500^(int32_t)L_504))^(int32_t)L_508))^(int32_t)L_512))^(int32_t)L_515));
		UInt32U5BU5D_t2770800703* L_516 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_517 = V_0;
		NullCheck(L_516);
		uintptr_t L_518 = (((uintptr_t)((int32_t)((uint32_t)L_517>>((int32_t)24)))));
		uint32_t L_519 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		UInt32U5BU5D_t2770800703* L_520 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_521 = V_3;
		NullCheck(L_520);
		int32_t L_522 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_521>>((int32_t)16))))));
		uint32_t L_523 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		UInt32U5BU5D_t2770800703* L_524 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_525 = V_2;
		NullCheck(L_524);
		int32_t L_526 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_525>>8)))));
		uint32_t L_527 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_526));
		UInt32U5BU5D_t2770800703* L_528 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_529 = V_1;
		NullCheck(L_528);
		int32_t L_530 = (((int32_t)((uint8_t)L_529)));
		uint32_t L_531 = (L_528)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		UInt32U5BU5D_t2770800703* L_532 = ___ekey2;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)28);
		uint32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_519^(int32_t)L_523))^(int32_t)L_527))^(int32_t)L_531))^(int32_t)L_534));
		UInt32U5BU5D_t2770800703* L_535 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_536 = V_1;
		NullCheck(L_535);
		uintptr_t L_537 = (((uintptr_t)((int32_t)((uint32_t)L_536>>((int32_t)24)))));
		uint32_t L_538 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		UInt32U5BU5D_t2770800703* L_539 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_540 = V_0;
		NullCheck(L_539);
		int32_t L_541 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_540>>((int32_t)16))))));
		uint32_t L_542 = (L_539)->GetAt(static_cast<il2cpp_array_size_t>(L_541));
		UInt32U5BU5D_t2770800703* L_543 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_544 = V_3;
		NullCheck(L_543);
		int32_t L_545 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_544>>8)))));
		uint32_t L_546 = (L_543)->GetAt(static_cast<il2cpp_array_size_t>(L_545));
		UInt32U5BU5D_t2770800703* L_547 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_548 = V_2;
		NullCheck(L_547);
		int32_t L_549 = (((int32_t)((uint8_t)L_548)));
		uint32_t L_550 = (L_547)->GetAt(static_cast<il2cpp_array_size_t>(L_549));
		UInt32U5BU5D_t2770800703* L_551 = ___ekey2;
		NullCheck(L_551);
		int32_t L_552 = ((int32_t)29);
		uint32_t L_553 = (L_551)->GetAt(static_cast<il2cpp_array_size_t>(L_552));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_538^(int32_t)L_542))^(int32_t)L_546))^(int32_t)L_550))^(int32_t)L_553));
		UInt32U5BU5D_t2770800703* L_554 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_555 = V_2;
		NullCheck(L_554);
		uintptr_t L_556 = (((uintptr_t)((int32_t)((uint32_t)L_555>>((int32_t)24)))));
		uint32_t L_557 = (L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		UInt32U5BU5D_t2770800703* L_558 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_559 = V_1;
		NullCheck(L_558);
		int32_t L_560 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_559>>((int32_t)16))))));
		uint32_t L_561 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_560));
		UInt32U5BU5D_t2770800703* L_562 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_563 = V_0;
		NullCheck(L_562);
		int32_t L_564 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_563>>8)))));
		uint32_t L_565 = (L_562)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		UInt32U5BU5D_t2770800703* L_566 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_567 = V_3;
		NullCheck(L_566);
		int32_t L_568 = (((int32_t)((uint8_t)L_567)));
		uint32_t L_569 = (L_566)->GetAt(static_cast<il2cpp_array_size_t>(L_568));
		UInt32U5BU5D_t2770800703* L_570 = ___ekey2;
		NullCheck(L_570);
		int32_t L_571 = ((int32_t)30);
		uint32_t L_572 = (L_570)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_557^(int32_t)L_561))^(int32_t)L_565))^(int32_t)L_569))^(int32_t)L_572));
		UInt32U5BU5D_t2770800703* L_573 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_574 = V_3;
		NullCheck(L_573);
		uintptr_t L_575 = (((uintptr_t)((int32_t)((uint32_t)L_574>>((int32_t)24)))));
		uint32_t L_576 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_575));
		UInt32U5BU5D_t2770800703* L_577 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_578 = V_2;
		NullCheck(L_577);
		int32_t L_579 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_578>>((int32_t)16))))));
		uint32_t L_580 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		UInt32U5BU5D_t2770800703* L_581 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_582 = V_1;
		NullCheck(L_581);
		int32_t L_583 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_582>>8)))));
		uint32_t L_584 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_583));
		UInt32U5BU5D_t2770800703* L_585 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_586 = V_0;
		NullCheck(L_585);
		int32_t L_587 = (((int32_t)((uint8_t)L_586)));
		uint32_t L_588 = (L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_587));
		UInt32U5BU5D_t2770800703* L_589 = ___ekey2;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)31);
		uint32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_576^(int32_t)L_580))^(int32_t)L_584))^(int32_t)L_588))^(int32_t)L_591));
		UInt32U5BU5D_t2770800703* L_592 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_593 = V_4;
		NullCheck(L_592);
		uintptr_t L_594 = (((uintptr_t)((int32_t)((uint32_t)L_593>>((int32_t)24)))));
		uint32_t L_595 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		UInt32U5BU5D_t2770800703* L_596 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_597 = V_7;
		NullCheck(L_596);
		int32_t L_598 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_597>>((int32_t)16))))));
		uint32_t L_599 = (L_596)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		UInt32U5BU5D_t2770800703* L_600 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_601 = V_6;
		NullCheck(L_600);
		int32_t L_602 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_601>>8)))));
		uint32_t L_603 = (L_600)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		UInt32U5BU5D_t2770800703* L_604 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_605 = V_5;
		NullCheck(L_604);
		int32_t L_606 = (((int32_t)((uint8_t)L_605)));
		uint32_t L_607 = (L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		UInt32U5BU5D_t2770800703* L_608 = ___ekey2;
		NullCheck(L_608);
		int32_t L_609 = ((int32_t)32);
		uint32_t L_610 = (L_608)->GetAt(static_cast<il2cpp_array_size_t>(L_609));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_595^(int32_t)L_599))^(int32_t)L_603))^(int32_t)L_607))^(int32_t)L_610));
		UInt32U5BU5D_t2770800703* L_611 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_612 = V_5;
		NullCheck(L_611);
		uintptr_t L_613 = (((uintptr_t)((int32_t)((uint32_t)L_612>>((int32_t)24)))));
		uint32_t L_614 = (L_611)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		UInt32U5BU5D_t2770800703* L_615 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_616 = V_4;
		NullCheck(L_615);
		int32_t L_617 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_616>>((int32_t)16))))));
		uint32_t L_618 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_617));
		UInt32U5BU5D_t2770800703* L_619 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_620 = V_7;
		NullCheck(L_619);
		int32_t L_621 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_620>>8)))));
		uint32_t L_622 = (L_619)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		UInt32U5BU5D_t2770800703* L_623 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_624 = V_6;
		NullCheck(L_623);
		int32_t L_625 = (((int32_t)((uint8_t)L_624)));
		uint32_t L_626 = (L_623)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt32U5BU5D_t2770800703* L_627 = ___ekey2;
		NullCheck(L_627);
		int32_t L_628 = ((int32_t)33);
		uint32_t L_629 = (L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_614^(int32_t)L_618))^(int32_t)L_622))^(int32_t)L_626))^(int32_t)L_629));
		UInt32U5BU5D_t2770800703* L_630 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_631 = V_6;
		NullCheck(L_630);
		uintptr_t L_632 = (((uintptr_t)((int32_t)((uint32_t)L_631>>((int32_t)24)))));
		uint32_t L_633 = (L_630)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		UInt32U5BU5D_t2770800703* L_634 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_635 = V_5;
		NullCheck(L_634);
		int32_t L_636 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_635>>((int32_t)16))))));
		uint32_t L_637 = (L_634)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		UInt32U5BU5D_t2770800703* L_638 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_639 = V_4;
		NullCheck(L_638);
		int32_t L_640 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_639>>8)))));
		uint32_t L_641 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_640));
		UInt32U5BU5D_t2770800703* L_642 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_643 = V_7;
		NullCheck(L_642);
		int32_t L_644 = (((int32_t)((uint8_t)L_643)));
		uint32_t L_645 = (L_642)->GetAt(static_cast<il2cpp_array_size_t>(L_644));
		UInt32U5BU5D_t2770800703* L_646 = ___ekey2;
		NullCheck(L_646);
		int32_t L_647 = ((int32_t)34);
		uint32_t L_648 = (L_646)->GetAt(static_cast<il2cpp_array_size_t>(L_647));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_633^(int32_t)L_637))^(int32_t)L_641))^(int32_t)L_645))^(int32_t)L_648));
		UInt32U5BU5D_t2770800703* L_649 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_650 = V_7;
		NullCheck(L_649);
		uintptr_t L_651 = (((uintptr_t)((int32_t)((uint32_t)L_650>>((int32_t)24)))));
		uint32_t L_652 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_651));
		UInt32U5BU5D_t2770800703* L_653 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_654 = V_6;
		NullCheck(L_653);
		int32_t L_655 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_654>>((int32_t)16))))));
		uint32_t L_656 = (L_653)->GetAt(static_cast<il2cpp_array_size_t>(L_655));
		UInt32U5BU5D_t2770800703* L_657 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_658 = V_5;
		NullCheck(L_657);
		int32_t L_659 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_658>>8)))));
		uint32_t L_660 = (L_657)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		UInt32U5BU5D_t2770800703* L_661 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_662 = V_4;
		NullCheck(L_661);
		int32_t L_663 = (((int32_t)((uint8_t)L_662)));
		uint32_t L_664 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_663));
		UInt32U5BU5D_t2770800703* L_665 = ___ekey2;
		NullCheck(L_665);
		int32_t L_666 = ((int32_t)35);
		uint32_t L_667 = (L_665)->GetAt(static_cast<il2cpp_array_size_t>(L_666));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_652^(int32_t)L_656))^(int32_t)L_660))^(int32_t)L_664))^(int32_t)L_667));
		UInt32U5BU5D_t2770800703* L_668 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_669 = V_0;
		NullCheck(L_668);
		uintptr_t L_670 = (((uintptr_t)((int32_t)((uint32_t)L_669>>((int32_t)24)))));
		uint32_t L_671 = (L_668)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		UInt32U5BU5D_t2770800703* L_672 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_673 = V_3;
		NullCheck(L_672);
		int32_t L_674 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_673>>((int32_t)16))))));
		uint32_t L_675 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_674));
		UInt32U5BU5D_t2770800703* L_676 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_677 = V_2;
		NullCheck(L_676);
		int32_t L_678 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_677>>8)))));
		uint32_t L_679 = (L_676)->GetAt(static_cast<il2cpp_array_size_t>(L_678));
		UInt32U5BU5D_t2770800703* L_680 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_681 = V_1;
		NullCheck(L_680);
		int32_t L_682 = (((int32_t)((uint8_t)L_681)));
		uint32_t L_683 = (L_680)->GetAt(static_cast<il2cpp_array_size_t>(L_682));
		UInt32U5BU5D_t2770800703* L_684 = ___ekey2;
		NullCheck(L_684);
		int32_t L_685 = ((int32_t)36);
		uint32_t L_686 = (L_684)->GetAt(static_cast<il2cpp_array_size_t>(L_685));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_671^(int32_t)L_675))^(int32_t)L_679))^(int32_t)L_683))^(int32_t)L_686));
		UInt32U5BU5D_t2770800703* L_687 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_688 = V_1;
		NullCheck(L_687);
		uintptr_t L_689 = (((uintptr_t)((int32_t)((uint32_t)L_688>>((int32_t)24)))));
		uint32_t L_690 = (L_687)->GetAt(static_cast<il2cpp_array_size_t>(L_689));
		UInt32U5BU5D_t2770800703* L_691 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_692 = V_0;
		NullCheck(L_691);
		int32_t L_693 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_692>>((int32_t)16))))));
		uint32_t L_694 = (L_691)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		UInt32U5BU5D_t2770800703* L_695 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_696 = V_3;
		NullCheck(L_695);
		int32_t L_697 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_696>>8)))));
		uint32_t L_698 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_697));
		UInt32U5BU5D_t2770800703* L_699 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_700 = V_2;
		NullCheck(L_699);
		int32_t L_701 = (((int32_t)((uint8_t)L_700)));
		uint32_t L_702 = (L_699)->GetAt(static_cast<il2cpp_array_size_t>(L_701));
		UInt32U5BU5D_t2770800703* L_703 = ___ekey2;
		NullCheck(L_703);
		int32_t L_704 = ((int32_t)37);
		uint32_t L_705 = (L_703)->GetAt(static_cast<il2cpp_array_size_t>(L_704));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_690^(int32_t)L_694))^(int32_t)L_698))^(int32_t)L_702))^(int32_t)L_705));
		UInt32U5BU5D_t2770800703* L_706 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_707 = V_2;
		NullCheck(L_706);
		uintptr_t L_708 = (((uintptr_t)((int32_t)((uint32_t)L_707>>((int32_t)24)))));
		uint32_t L_709 = (L_706)->GetAt(static_cast<il2cpp_array_size_t>(L_708));
		UInt32U5BU5D_t2770800703* L_710 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_711 = V_1;
		NullCheck(L_710);
		int32_t L_712 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_711>>((int32_t)16))))));
		uint32_t L_713 = (L_710)->GetAt(static_cast<il2cpp_array_size_t>(L_712));
		UInt32U5BU5D_t2770800703* L_714 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_715 = V_0;
		NullCheck(L_714);
		int32_t L_716 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_715>>8)))));
		uint32_t L_717 = (L_714)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		UInt32U5BU5D_t2770800703* L_718 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_719 = V_3;
		NullCheck(L_718);
		int32_t L_720 = (((int32_t)((uint8_t)L_719)));
		uint32_t L_721 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_720));
		UInt32U5BU5D_t2770800703* L_722 = ___ekey2;
		NullCheck(L_722);
		int32_t L_723 = ((int32_t)38);
		uint32_t L_724 = (L_722)->GetAt(static_cast<il2cpp_array_size_t>(L_723));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_709^(int32_t)L_713))^(int32_t)L_717))^(int32_t)L_721))^(int32_t)L_724));
		UInt32U5BU5D_t2770800703* L_725 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_726 = V_3;
		NullCheck(L_725);
		uintptr_t L_727 = (((uintptr_t)((int32_t)((uint32_t)L_726>>((int32_t)24)))));
		uint32_t L_728 = (L_725)->GetAt(static_cast<il2cpp_array_size_t>(L_727));
		UInt32U5BU5D_t2770800703* L_729 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_730 = V_2;
		NullCheck(L_729);
		int32_t L_731 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_730>>((int32_t)16))))));
		uint32_t L_732 = (L_729)->GetAt(static_cast<il2cpp_array_size_t>(L_731));
		UInt32U5BU5D_t2770800703* L_733 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_734 = V_1;
		NullCheck(L_733);
		int32_t L_735 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_734>>8)))));
		uint32_t L_736 = (L_733)->GetAt(static_cast<il2cpp_array_size_t>(L_735));
		UInt32U5BU5D_t2770800703* L_737 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_738 = V_0;
		NullCheck(L_737);
		int32_t L_739 = (((int32_t)((uint8_t)L_738)));
		uint32_t L_740 = (L_737)->GetAt(static_cast<il2cpp_array_size_t>(L_739));
		UInt32U5BU5D_t2770800703* L_741 = ___ekey2;
		NullCheck(L_741);
		int32_t L_742 = ((int32_t)39);
		uint32_t L_743 = (L_741)->GetAt(static_cast<il2cpp_array_size_t>(L_742));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_728^(int32_t)L_732))^(int32_t)L_736))^(int32_t)L_740))^(int32_t)L_743));
		int32_t L_744 = __this->get_Nr_14();
		if ((((int32_t)L_744) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_745 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_746 = V_4;
		NullCheck(L_745);
		uintptr_t L_747 = (((uintptr_t)((int32_t)((uint32_t)L_746>>((int32_t)24)))));
		uint32_t L_748 = (L_745)->GetAt(static_cast<il2cpp_array_size_t>(L_747));
		UInt32U5BU5D_t2770800703* L_749 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_750 = V_7;
		NullCheck(L_749);
		int32_t L_751 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_750>>((int32_t)16))))));
		uint32_t L_752 = (L_749)->GetAt(static_cast<il2cpp_array_size_t>(L_751));
		UInt32U5BU5D_t2770800703* L_753 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_754 = V_6;
		NullCheck(L_753);
		int32_t L_755 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_754>>8)))));
		uint32_t L_756 = (L_753)->GetAt(static_cast<il2cpp_array_size_t>(L_755));
		UInt32U5BU5D_t2770800703* L_757 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_758 = V_5;
		NullCheck(L_757);
		int32_t L_759 = (((int32_t)((uint8_t)L_758)));
		uint32_t L_760 = (L_757)->GetAt(static_cast<il2cpp_array_size_t>(L_759));
		UInt32U5BU5D_t2770800703* L_761 = ___ekey2;
		NullCheck(L_761);
		int32_t L_762 = ((int32_t)40);
		uint32_t L_763 = (L_761)->GetAt(static_cast<il2cpp_array_size_t>(L_762));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_748^(int32_t)L_752))^(int32_t)L_756))^(int32_t)L_760))^(int32_t)L_763));
		UInt32U5BU5D_t2770800703* L_764 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_765 = V_5;
		NullCheck(L_764);
		uintptr_t L_766 = (((uintptr_t)((int32_t)((uint32_t)L_765>>((int32_t)24)))));
		uint32_t L_767 = (L_764)->GetAt(static_cast<il2cpp_array_size_t>(L_766));
		UInt32U5BU5D_t2770800703* L_768 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_769 = V_4;
		NullCheck(L_768);
		int32_t L_770 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_769>>((int32_t)16))))));
		uint32_t L_771 = (L_768)->GetAt(static_cast<il2cpp_array_size_t>(L_770));
		UInt32U5BU5D_t2770800703* L_772 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_773 = V_7;
		NullCheck(L_772);
		int32_t L_774 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_773>>8)))));
		uint32_t L_775 = (L_772)->GetAt(static_cast<il2cpp_array_size_t>(L_774));
		UInt32U5BU5D_t2770800703* L_776 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_777 = V_6;
		NullCheck(L_776);
		int32_t L_778 = (((int32_t)((uint8_t)L_777)));
		uint32_t L_779 = (L_776)->GetAt(static_cast<il2cpp_array_size_t>(L_778));
		UInt32U5BU5D_t2770800703* L_780 = ___ekey2;
		NullCheck(L_780);
		int32_t L_781 = ((int32_t)41);
		uint32_t L_782 = (L_780)->GetAt(static_cast<il2cpp_array_size_t>(L_781));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_767^(int32_t)L_771))^(int32_t)L_775))^(int32_t)L_779))^(int32_t)L_782));
		UInt32U5BU5D_t2770800703* L_783 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_784 = V_6;
		NullCheck(L_783);
		uintptr_t L_785 = (((uintptr_t)((int32_t)((uint32_t)L_784>>((int32_t)24)))));
		uint32_t L_786 = (L_783)->GetAt(static_cast<il2cpp_array_size_t>(L_785));
		UInt32U5BU5D_t2770800703* L_787 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_788 = V_5;
		NullCheck(L_787);
		int32_t L_789 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_788>>((int32_t)16))))));
		uint32_t L_790 = (L_787)->GetAt(static_cast<il2cpp_array_size_t>(L_789));
		UInt32U5BU5D_t2770800703* L_791 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_792 = V_4;
		NullCheck(L_791);
		int32_t L_793 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_792>>8)))));
		uint32_t L_794 = (L_791)->GetAt(static_cast<il2cpp_array_size_t>(L_793));
		UInt32U5BU5D_t2770800703* L_795 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_796 = V_7;
		NullCheck(L_795);
		int32_t L_797 = (((int32_t)((uint8_t)L_796)));
		uint32_t L_798 = (L_795)->GetAt(static_cast<il2cpp_array_size_t>(L_797));
		UInt32U5BU5D_t2770800703* L_799 = ___ekey2;
		NullCheck(L_799);
		int32_t L_800 = ((int32_t)42);
		uint32_t L_801 = (L_799)->GetAt(static_cast<il2cpp_array_size_t>(L_800));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_786^(int32_t)L_790))^(int32_t)L_794))^(int32_t)L_798))^(int32_t)L_801));
		UInt32U5BU5D_t2770800703* L_802 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_803 = V_7;
		NullCheck(L_802);
		uintptr_t L_804 = (((uintptr_t)((int32_t)((uint32_t)L_803>>((int32_t)24)))));
		uint32_t L_805 = (L_802)->GetAt(static_cast<il2cpp_array_size_t>(L_804));
		UInt32U5BU5D_t2770800703* L_806 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_807 = V_6;
		NullCheck(L_806);
		int32_t L_808 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_807>>((int32_t)16))))));
		uint32_t L_809 = (L_806)->GetAt(static_cast<il2cpp_array_size_t>(L_808));
		UInt32U5BU5D_t2770800703* L_810 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_811 = V_5;
		NullCheck(L_810);
		int32_t L_812 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_811>>8)))));
		uint32_t L_813 = (L_810)->GetAt(static_cast<il2cpp_array_size_t>(L_812));
		UInt32U5BU5D_t2770800703* L_814 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_815 = V_4;
		NullCheck(L_814);
		int32_t L_816 = (((int32_t)((uint8_t)L_815)));
		uint32_t L_817 = (L_814)->GetAt(static_cast<il2cpp_array_size_t>(L_816));
		UInt32U5BU5D_t2770800703* L_818 = ___ekey2;
		NullCheck(L_818);
		int32_t L_819 = ((int32_t)43);
		uint32_t L_820 = (L_818)->GetAt(static_cast<il2cpp_array_size_t>(L_819));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_805^(int32_t)L_809))^(int32_t)L_813))^(int32_t)L_817))^(int32_t)L_820));
		UInt32U5BU5D_t2770800703* L_821 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_822 = V_0;
		NullCheck(L_821);
		uintptr_t L_823 = (((uintptr_t)((int32_t)((uint32_t)L_822>>((int32_t)24)))));
		uint32_t L_824 = (L_821)->GetAt(static_cast<il2cpp_array_size_t>(L_823));
		UInt32U5BU5D_t2770800703* L_825 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_826 = V_3;
		NullCheck(L_825);
		int32_t L_827 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_826>>((int32_t)16))))));
		uint32_t L_828 = (L_825)->GetAt(static_cast<il2cpp_array_size_t>(L_827));
		UInt32U5BU5D_t2770800703* L_829 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_830 = V_2;
		NullCheck(L_829);
		int32_t L_831 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_830>>8)))));
		uint32_t L_832 = (L_829)->GetAt(static_cast<il2cpp_array_size_t>(L_831));
		UInt32U5BU5D_t2770800703* L_833 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_834 = V_1;
		NullCheck(L_833);
		int32_t L_835 = (((int32_t)((uint8_t)L_834)));
		uint32_t L_836 = (L_833)->GetAt(static_cast<il2cpp_array_size_t>(L_835));
		UInt32U5BU5D_t2770800703* L_837 = ___ekey2;
		NullCheck(L_837);
		int32_t L_838 = ((int32_t)44);
		uint32_t L_839 = (L_837)->GetAt(static_cast<il2cpp_array_size_t>(L_838));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_824^(int32_t)L_828))^(int32_t)L_832))^(int32_t)L_836))^(int32_t)L_839));
		UInt32U5BU5D_t2770800703* L_840 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_841 = V_1;
		NullCheck(L_840);
		uintptr_t L_842 = (((uintptr_t)((int32_t)((uint32_t)L_841>>((int32_t)24)))));
		uint32_t L_843 = (L_840)->GetAt(static_cast<il2cpp_array_size_t>(L_842));
		UInt32U5BU5D_t2770800703* L_844 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_845 = V_0;
		NullCheck(L_844);
		int32_t L_846 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_845>>((int32_t)16))))));
		uint32_t L_847 = (L_844)->GetAt(static_cast<il2cpp_array_size_t>(L_846));
		UInt32U5BU5D_t2770800703* L_848 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_849 = V_3;
		NullCheck(L_848);
		int32_t L_850 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_849>>8)))));
		uint32_t L_851 = (L_848)->GetAt(static_cast<il2cpp_array_size_t>(L_850));
		UInt32U5BU5D_t2770800703* L_852 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_853 = V_2;
		NullCheck(L_852);
		int32_t L_854 = (((int32_t)((uint8_t)L_853)));
		uint32_t L_855 = (L_852)->GetAt(static_cast<il2cpp_array_size_t>(L_854));
		UInt32U5BU5D_t2770800703* L_856 = ___ekey2;
		NullCheck(L_856);
		int32_t L_857 = ((int32_t)45);
		uint32_t L_858 = (L_856)->GetAt(static_cast<il2cpp_array_size_t>(L_857));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_843^(int32_t)L_847))^(int32_t)L_851))^(int32_t)L_855))^(int32_t)L_858));
		UInt32U5BU5D_t2770800703* L_859 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_860 = V_2;
		NullCheck(L_859);
		uintptr_t L_861 = (((uintptr_t)((int32_t)((uint32_t)L_860>>((int32_t)24)))));
		uint32_t L_862 = (L_859)->GetAt(static_cast<il2cpp_array_size_t>(L_861));
		UInt32U5BU5D_t2770800703* L_863 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_864 = V_1;
		NullCheck(L_863);
		int32_t L_865 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_864>>((int32_t)16))))));
		uint32_t L_866 = (L_863)->GetAt(static_cast<il2cpp_array_size_t>(L_865));
		UInt32U5BU5D_t2770800703* L_867 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_868 = V_0;
		NullCheck(L_867);
		int32_t L_869 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_868>>8)))));
		uint32_t L_870 = (L_867)->GetAt(static_cast<il2cpp_array_size_t>(L_869));
		UInt32U5BU5D_t2770800703* L_871 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_872 = V_3;
		NullCheck(L_871);
		int32_t L_873 = (((int32_t)((uint8_t)L_872)));
		uint32_t L_874 = (L_871)->GetAt(static_cast<il2cpp_array_size_t>(L_873));
		UInt32U5BU5D_t2770800703* L_875 = ___ekey2;
		NullCheck(L_875);
		int32_t L_876 = ((int32_t)46);
		uint32_t L_877 = (L_875)->GetAt(static_cast<il2cpp_array_size_t>(L_876));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_862^(int32_t)L_866))^(int32_t)L_870))^(int32_t)L_874))^(int32_t)L_877));
		UInt32U5BU5D_t2770800703* L_878 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_879 = V_3;
		NullCheck(L_878);
		uintptr_t L_880 = (((uintptr_t)((int32_t)((uint32_t)L_879>>((int32_t)24)))));
		uint32_t L_881 = (L_878)->GetAt(static_cast<il2cpp_array_size_t>(L_880));
		UInt32U5BU5D_t2770800703* L_882 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_883 = V_2;
		NullCheck(L_882);
		int32_t L_884 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_883>>((int32_t)16))))));
		uint32_t L_885 = (L_882)->GetAt(static_cast<il2cpp_array_size_t>(L_884));
		UInt32U5BU5D_t2770800703* L_886 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_887 = V_1;
		NullCheck(L_886);
		int32_t L_888 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_887>>8)))));
		uint32_t L_889 = (L_886)->GetAt(static_cast<il2cpp_array_size_t>(L_888));
		UInt32U5BU5D_t2770800703* L_890 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_891 = V_0;
		NullCheck(L_890);
		int32_t L_892 = (((int32_t)((uint8_t)L_891)));
		uint32_t L_893 = (L_890)->GetAt(static_cast<il2cpp_array_size_t>(L_892));
		UInt32U5BU5D_t2770800703* L_894 = ___ekey2;
		NullCheck(L_894);
		int32_t L_895 = ((int32_t)47);
		uint32_t L_896 = (L_894)->GetAt(static_cast<il2cpp_array_size_t>(L_895));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_881^(int32_t)L_885))^(int32_t)L_889))^(int32_t)L_893))^(int32_t)L_896));
		V_8 = ((int32_t)48);
		int32_t L_897 = __this->get_Nr_14();
		if ((((int32_t)L_897) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0b08;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t2770800703* L_898 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_899 = V_4;
		NullCheck(L_898);
		uintptr_t L_900 = (((uintptr_t)((int32_t)((uint32_t)L_899>>((int32_t)24)))));
		uint32_t L_901 = (L_898)->GetAt(static_cast<il2cpp_array_size_t>(L_900));
		UInt32U5BU5D_t2770800703* L_902 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_903 = V_7;
		NullCheck(L_902);
		int32_t L_904 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_903>>((int32_t)16))))));
		uint32_t L_905 = (L_902)->GetAt(static_cast<il2cpp_array_size_t>(L_904));
		UInt32U5BU5D_t2770800703* L_906 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_907 = V_6;
		NullCheck(L_906);
		int32_t L_908 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_907>>8)))));
		uint32_t L_909 = (L_906)->GetAt(static_cast<il2cpp_array_size_t>(L_908));
		UInt32U5BU5D_t2770800703* L_910 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_911 = V_5;
		NullCheck(L_910);
		int32_t L_912 = (((int32_t)((uint8_t)L_911)));
		uint32_t L_913 = (L_910)->GetAt(static_cast<il2cpp_array_size_t>(L_912));
		UInt32U5BU5D_t2770800703* L_914 = ___ekey2;
		NullCheck(L_914);
		int32_t L_915 = ((int32_t)48);
		uint32_t L_916 = (L_914)->GetAt(static_cast<il2cpp_array_size_t>(L_915));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_901^(int32_t)L_905))^(int32_t)L_909))^(int32_t)L_913))^(int32_t)L_916));
		UInt32U5BU5D_t2770800703* L_917 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_918 = V_5;
		NullCheck(L_917);
		uintptr_t L_919 = (((uintptr_t)((int32_t)((uint32_t)L_918>>((int32_t)24)))));
		uint32_t L_920 = (L_917)->GetAt(static_cast<il2cpp_array_size_t>(L_919));
		UInt32U5BU5D_t2770800703* L_921 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_922 = V_4;
		NullCheck(L_921);
		int32_t L_923 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_922>>((int32_t)16))))));
		uint32_t L_924 = (L_921)->GetAt(static_cast<il2cpp_array_size_t>(L_923));
		UInt32U5BU5D_t2770800703* L_925 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_926 = V_7;
		NullCheck(L_925);
		int32_t L_927 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_926>>8)))));
		uint32_t L_928 = (L_925)->GetAt(static_cast<il2cpp_array_size_t>(L_927));
		UInt32U5BU5D_t2770800703* L_929 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_930 = V_6;
		NullCheck(L_929);
		int32_t L_931 = (((int32_t)((uint8_t)L_930)));
		uint32_t L_932 = (L_929)->GetAt(static_cast<il2cpp_array_size_t>(L_931));
		UInt32U5BU5D_t2770800703* L_933 = ___ekey2;
		NullCheck(L_933);
		int32_t L_934 = ((int32_t)49);
		uint32_t L_935 = (L_933)->GetAt(static_cast<il2cpp_array_size_t>(L_934));
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_920^(int32_t)L_924))^(int32_t)L_928))^(int32_t)L_932))^(int32_t)L_935));
		UInt32U5BU5D_t2770800703* L_936 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_937 = V_6;
		NullCheck(L_936);
		uintptr_t L_938 = (((uintptr_t)((int32_t)((uint32_t)L_937>>((int32_t)24)))));
		uint32_t L_939 = (L_936)->GetAt(static_cast<il2cpp_array_size_t>(L_938));
		UInt32U5BU5D_t2770800703* L_940 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_941 = V_5;
		NullCheck(L_940);
		int32_t L_942 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_941>>((int32_t)16))))));
		uint32_t L_943 = (L_940)->GetAt(static_cast<il2cpp_array_size_t>(L_942));
		UInt32U5BU5D_t2770800703* L_944 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_945 = V_4;
		NullCheck(L_944);
		int32_t L_946 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_945>>8)))));
		uint32_t L_947 = (L_944)->GetAt(static_cast<il2cpp_array_size_t>(L_946));
		UInt32U5BU5D_t2770800703* L_948 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_949 = V_7;
		NullCheck(L_948);
		int32_t L_950 = (((int32_t)((uint8_t)L_949)));
		uint32_t L_951 = (L_948)->GetAt(static_cast<il2cpp_array_size_t>(L_950));
		UInt32U5BU5D_t2770800703* L_952 = ___ekey2;
		NullCheck(L_952);
		int32_t L_953 = ((int32_t)50);
		uint32_t L_954 = (L_952)->GetAt(static_cast<il2cpp_array_size_t>(L_953));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_939^(int32_t)L_943))^(int32_t)L_947))^(int32_t)L_951))^(int32_t)L_954));
		UInt32U5BU5D_t2770800703* L_955 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_956 = V_7;
		NullCheck(L_955);
		uintptr_t L_957 = (((uintptr_t)((int32_t)((uint32_t)L_956>>((int32_t)24)))));
		uint32_t L_958 = (L_955)->GetAt(static_cast<il2cpp_array_size_t>(L_957));
		UInt32U5BU5D_t2770800703* L_959 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_960 = V_6;
		NullCheck(L_959);
		int32_t L_961 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_960>>((int32_t)16))))));
		uint32_t L_962 = (L_959)->GetAt(static_cast<il2cpp_array_size_t>(L_961));
		UInt32U5BU5D_t2770800703* L_963 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_964 = V_5;
		NullCheck(L_963);
		int32_t L_965 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_964>>8)))));
		uint32_t L_966 = (L_963)->GetAt(static_cast<il2cpp_array_size_t>(L_965));
		UInt32U5BU5D_t2770800703* L_967 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_968 = V_4;
		NullCheck(L_967);
		int32_t L_969 = (((int32_t)((uint8_t)L_968)));
		uint32_t L_970 = (L_967)->GetAt(static_cast<il2cpp_array_size_t>(L_969));
		UInt32U5BU5D_t2770800703* L_971 = ___ekey2;
		NullCheck(L_971);
		int32_t L_972 = ((int32_t)51);
		uint32_t L_973 = (L_971)->GetAt(static_cast<il2cpp_array_size_t>(L_972));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_958^(int32_t)L_962))^(int32_t)L_966))^(int32_t)L_970))^(int32_t)L_973));
		UInt32U5BU5D_t2770800703* L_974 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_975 = V_0;
		NullCheck(L_974);
		uintptr_t L_976 = (((uintptr_t)((int32_t)((uint32_t)L_975>>((int32_t)24)))));
		uint32_t L_977 = (L_974)->GetAt(static_cast<il2cpp_array_size_t>(L_976));
		UInt32U5BU5D_t2770800703* L_978 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_979 = V_3;
		NullCheck(L_978);
		int32_t L_980 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_979>>((int32_t)16))))));
		uint32_t L_981 = (L_978)->GetAt(static_cast<il2cpp_array_size_t>(L_980));
		UInt32U5BU5D_t2770800703* L_982 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_983 = V_2;
		NullCheck(L_982);
		int32_t L_984 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_983>>8)))));
		uint32_t L_985 = (L_982)->GetAt(static_cast<il2cpp_array_size_t>(L_984));
		UInt32U5BU5D_t2770800703* L_986 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_987 = V_1;
		NullCheck(L_986);
		int32_t L_988 = (((int32_t)((uint8_t)L_987)));
		uint32_t L_989 = (L_986)->GetAt(static_cast<il2cpp_array_size_t>(L_988));
		UInt32U5BU5D_t2770800703* L_990 = ___ekey2;
		NullCheck(L_990);
		int32_t L_991 = ((int32_t)52);
		uint32_t L_992 = (L_990)->GetAt(static_cast<il2cpp_array_size_t>(L_991));
		V_4 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_977^(int32_t)L_981))^(int32_t)L_985))^(int32_t)L_989))^(int32_t)L_992));
		UInt32U5BU5D_t2770800703* L_993 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_994 = V_1;
		NullCheck(L_993);
		uintptr_t L_995 = (((uintptr_t)((int32_t)((uint32_t)L_994>>((int32_t)24)))));
		uint32_t L_996 = (L_993)->GetAt(static_cast<il2cpp_array_size_t>(L_995));
		UInt32U5BU5D_t2770800703* L_997 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_998 = V_0;
		NullCheck(L_997);
		int32_t L_999 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_998>>((int32_t)16))))));
		uint32_t L_1000 = (L_997)->GetAt(static_cast<il2cpp_array_size_t>(L_999));
		UInt32U5BU5D_t2770800703* L_1001 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1002 = V_3;
		NullCheck(L_1001);
		int32_t L_1003 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1002>>8)))));
		uint32_t L_1004 = (L_1001)->GetAt(static_cast<il2cpp_array_size_t>(L_1003));
		UInt32U5BU5D_t2770800703* L_1005 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1006 = V_2;
		NullCheck(L_1005);
		int32_t L_1007 = (((int32_t)((uint8_t)L_1006)));
		uint32_t L_1008 = (L_1005)->GetAt(static_cast<il2cpp_array_size_t>(L_1007));
		UInt32U5BU5D_t2770800703* L_1009 = ___ekey2;
		NullCheck(L_1009);
		int32_t L_1010 = ((int32_t)53);
		uint32_t L_1011 = (L_1009)->GetAt(static_cast<il2cpp_array_size_t>(L_1010));
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_996^(int32_t)L_1000))^(int32_t)L_1004))^(int32_t)L_1008))^(int32_t)L_1011));
		UInt32U5BU5D_t2770800703* L_1012 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1013 = V_2;
		NullCheck(L_1012);
		uintptr_t L_1014 = (((uintptr_t)((int32_t)((uint32_t)L_1013>>((int32_t)24)))));
		uint32_t L_1015 = (L_1012)->GetAt(static_cast<il2cpp_array_size_t>(L_1014));
		UInt32U5BU5D_t2770800703* L_1016 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1017 = V_1;
		NullCheck(L_1016);
		int32_t L_1018 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1017>>((int32_t)16))))));
		uint32_t L_1019 = (L_1016)->GetAt(static_cast<il2cpp_array_size_t>(L_1018));
		UInt32U5BU5D_t2770800703* L_1020 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1021 = V_0;
		NullCheck(L_1020);
		int32_t L_1022 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1021>>8)))));
		uint32_t L_1023 = (L_1020)->GetAt(static_cast<il2cpp_array_size_t>(L_1022));
		UInt32U5BU5D_t2770800703* L_1024 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1025 = V_3;
		NullCheck(L_1024);
		int32_t L_1026 = (((int32_t)((uint8_t)L_1025)));
		uint32_t L_1027 = (L_1024)->GetAt(static_cast<il2cpp_array_size_t>(L_1026));
		UInt32U5BU5D_t2770800703* L_1028 = ___ekey2;
		NullCheck(L_1028);
		int32_t L_1029 = ((int32_t)54);
		uint32_t L_1030 = (L_1028)->GetAt(static_cast<il2cpp_array_size_t>(L_1029));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1015^(int32_t)L_1019))^(int32_t)L_1023))^(int32_t)L_1027))^(int32_t)L_1030));
		UInt32U5BU5D_t2770800703* L_1031 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT0_22();
		uint32_t L_1032 = V_3;
		NullCheck(L_1031);
		uintptr_t L_1033 = (((uintptr_t)((int32_t)((uint32_t)L_1032>>((int32_t)24)))));
		uint32_t L_1034 = (L_1031)->GetAt(static_cast<il2cpp_array_size_t>(L_1033));
		UInt32U5BU5D_t2770800703* L_1035 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT1_23();
		uint32_t L_1036 = V_2;
		NullCheck(L_1035);
		int32_t L_1037 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1036>>((int32_t)16))))));
		uint32_t L_1038 = (L_1035)->GetAt(static_cast<il2cpp_array_size_t>(L_1037));
		UInt32U5BU5D_t2770800703* L_1039 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT2_24();
		uint32_t L_1040 = V_1;
		NullCheck(L_1039);
		int32_t L_1041 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1040>>8)))));
		uint32_t L_1042 = (L_1039)->GetAt(static_cast<il2cpp_array_size_t>(L_1041));
		UInt32U5BU5D_t2770800703* L_1043 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iT3_25();
		uint32_t L_1044 = V_0;
		NullCheck(L_1043);
		int32_t L_1045 = (((int32_t)((uint8_t)L_1044)));
		uint32_t L_1046 = (L_1043)->GetAt(static_cast<il2cpp_array_size_t>(L_1045));
		UInt32U5BU5D_t2770800703* L_1047 = ___ekey2;
		NullCheck(L_1047);
		int32_t L_1048 = ((int32_t)55);
		uint32_t L_1049 = (L_1047)->GetAt(static_cast<il2cpp_array_size_t>(L_1048));
		V_7 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1034^(int32_t)L_1038))^(int32_t)L_1042))^(int32_t)L_1046))^(int32_t)L_1049));
		V_8 = ((int32_t)56);
	}

IL_0b08:
	{
		ByteU5BU5D_t4116647657* L_1050 = ___outdata1;
		IL2CPP_RUNTIME_CLASS_INIT(AesTransform_t2957123611_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1051 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1052 = V_4;
		NullCheck(L_1051);
		uintptr_t L_1053 = (((uintptr_t)((int32_t)((uint32_t)L_1052>>((int32_t)24)))));
		uint8_t L_1054 = (L_1051)->GetAt(static_cast<il2cpp_array_size_t>(L_1053));
		UInt32U5BU5D_t2770800703* L_1055 = ___ekey2;
		int32_t L_1056 = V_8;
		NullCheck(L_1055);
		int32_t L_1057 = L_1056;
		uint32_t L_1058 = (L_1055)->GetAt(static_cast<il2cpp_array_size_t>(L_1057));
		NullCheck(L_1050);
		(L_1050)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1054^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1058>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1059 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1060 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1061 = V_7;
		NullCheck(L_1060);
		int32_t L_1062 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1061>>((int32_t)16))))));
		uint8_t L_1063 = (L_1060)->GetAt(static_cast<il2cpp_array_size_t>(L_1062));
		UInt32U5BU5D_t2770800703* L_1064 = ___ekey2;
		int32_t L_1065 = V_8;
		NullCheck(L_1064);
		int32_t L_1066 = L_1065;
		uint32_t L_1067 = (L_1064)->GetAt(static_cast<il2cpp_array_size_t>(L_1066));
		NullCheck(L_1059);
		(L_1059)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1063^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1067>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1068 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1069 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1070 = V_6;
		NullCheck(L_1069);
		int32_t L_1071 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1070>>8)))));
		uint8_t L_1072 = (L_1069)->GetAt(static_cast<il2cpp_array_size_t>(L_1071));
		UInt32U5BU5D_t2770800703* L_1073 = ___ekey2;
		int32_t L_1074 = V_8;
		NullCheck(L_1073);
		int32_t L_1075 = L_1074;
		uint32_t L_1076 = (L_1073)->GetAt(static_cast<il2cpp_array_size_t>(L_1075));
		NullCheck(L_1068);
		(L_1068)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1072^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1076>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1077 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1078 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1079 = V_5;
		NullCheck(L_1078);
		int32_t L_1080 = (((int32_t)((uint8_t)L_1079)));
		uint8_t L_1081 = (L_1078)->GetAt(static_cast<il2cpp_array_size_t>(L_1080));
		UInt32U5BU5D_t2770800703* L_1082 = ___ekey2;
		int32_t L_1083 = V_8;
		int32_t L_1084 = L_1083;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1084, (int32_t)1));
		NullCheck(L_1082);
		int32_t L_1085 = L_1084;
		uint32_t L_1086 = (L_1082)->GetAt(static_cast<il2cpp_array_size_t>(L_1085));
		NullCheck(L_1077);
		(L_1077)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1081^(int32_t)(((int32_t)((uint8_t)L_1086)))))))));
		ByteU5BU5D_t4116647657* L_1087 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1088 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1089 = V_5;
		NullCheck(L_1088);
		uintptr_t L_1090 = (((uintptr_t)((int32_t)((uint32_t)L_1089>>((int32_t)24)))));
		uint8_t L_1091 = (L_1088)->GetAt(static_cast<il2cpp_array_size_t>(L_1090));
		UInt32U5BU5D_t2770800703* L_1092 = ___ekey2;
		int32_t L_1093 = V_8;
		NullCheck(L_1092);
		int32_t L_1094 = L_1093;
		uint32_t L_1095 = (L_1092)->GetAt(static_cast<il2cpp_array_size_t>(L_1094));
		NullCheck(L_1087);
		(L_1087)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1091^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1095>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1096 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1097 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1098 = V_4;
		NullCheck(L_1097);
		int32_t L_1099 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1098>>((int32_t)16))))));
		uint8_t L_1100 = (L_1097)->GetAt(static_cast<il2cpp_array_size_t>(L_1099));
		UInt32U5BU5D_t2770800703* L_1101 = ___ekey2;
		int32_t L_1102 = V_8;
		NullCheck(L_1101);
		int32_t L_1103 = L_1102;
		uint32_t L_1104 = (L_1101)->GetAt(static_cast<il2cpp_array_size_t>(L_1103));
		NullCheck(L_1096);
		(L_1096)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1100^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1104>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1105 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1106 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1107 = V_7;
		NullCheck(L_1106);
		int32_t L_1108 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1107>>8)))));
		uint8_t L_1109 = (L_1106)->GetAt(static_cast<il2cpp_array_size_t>(L_1108));
		UInt32U5BU5D_t2770800703* L_1110 = ___ekey2;
		int32_t L_1111 = V_8;
		NullCheck(L_1110);
		int32_t L_1112 = L_1111;
		uint32_t L_1113 = (L_1110)->GetAt(static_cast<il2cpp_array_size_t>(L_1112));
		NullCheck(L_1105);
		(L_1105)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1109^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1113>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1114 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1115 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1116 = V_6;
		NullCheck(L_1115);
		int32_t L_1117 = (((int32_t)((uint8_t)L_1116)));
		uint8_t L_1118 = (L_1115)->GetAt(static_cast<il2cpp_array_size_t>(L_1117));
		UInt32U5BU5D_t2770800703* L_1119 = ___ekey2;
		int32_t L_1120 = V_8;
		int32_t L_1121 = L_1120;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1121, (int32_t)1));
		NullCheck(L_1119);
		int32_t L_1122 = L_1121;
		uint32_t L_1123 = (L_1119)->GetAt(static_cast<il2cpp_array_size_t>(L_1122));
		NullCheck(L_1114);
		(L_1114)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1118^(int32_t)(((int32_t)((uint8_t)L_1123)))))))));
		ByteU5BU5D_t4116647657* L_1124 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1125 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1126 = V_6;
		NullCheck(L_1125);
		uintptr_t L_1127 = (((uintptr_t)((int32_t)((uint32_t)L_1126>>((int32_t)24)))));
		uint8_t L_1128 = (L_1125)->GetAt(static_cast<il2cpp_array_size_t>(L_1127));
		UInt32U5BU5D_t2770800703* L_1129 = ___ekey2;
		int32_t L_1130 = V_8;
		NullCheck(L_1129);
		int32_t L_1131 = L_1130;
		uint32_t L_1132 = (L_1129)->GetAt(static_cast<il2cpp_array_size_t>(L_1131));
		NullCheck(L_1124);
		(L_1124)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1128^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1132>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1133 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1134 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1135 = V_5;
		NullCheck(L_1134);
		int32_t L_1136 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1135>>((int32_t)16))))));
		uint8_t L_1137 = (L_1134)->GetAt(static_cast<il2cpp_array_size_t>(L_1136));
		UInt32U5BU5D_t2770800703* L_1138 = ___ekey2;
		int32_t L_1139 = V_8;
		NullCheck(L_1138);
		int32_t L_1140 = L_1139;
		uint32_t L_1141 = (L_1138)->GetAt(static_cast<il2cpp_array_size_t>(L_1140));
		NullCheck(L_1133);
		(L_1133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1137^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1141>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1142 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1143 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1144 = V_4;
		NullCheck(L_1143);
		int32_t L_1145 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1144>>8)))));
		uint8_t L_1146 = (L_1143)->GetAt(static_cast<il2cpp_array_size_t>(L_1145));
		UInt32U5BU5D_t2770800703* L_1147 = ___ekey2;
		int32_t L_1148 = V_8;
		NullCheck(L_1147);
		int32_t L_1149 = L_1148;
		uint32_t L_1150 = (L_1147)->GetAt(static_cast<il2cpp_array_size_t>(L_1149));
		NullCheck(L_1142);
		(L_1142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1146^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1150>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1151 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1152 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1153 = V_7;
		NullCheck(L_1152);
		int32_t L_1154 = (((int32_t)((uint8_t)L_1153)));
		uint8_t L_1155 = (L_1152)->GetAt(static_cast<il2cpp_array_size_t>(L_1154));
		UInt32U5BU5D_t2770800703* L_1156 = ___ekey2;
		int32_t L_1157 = V_8;
		int32_t L_1158 = L_1157;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1158, (int32_t)1));
		NullCheck(L_1156);
		int32_t L_1159 = L_1158;
		uint32_t L_1160 = (L_1156)->GetAt(static_cast<il2cpp_array_size_t>(L_1159));
		NullCheck(L_1151);
		(L_1151)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1155^(int32_t)(((int32_t)((uint8_t)L_1160)))))))));
		ByteU5BU5D_t4116647657* L_1161 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1162 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1163 = V_7;
		NullCheck(L_1162);
		uintptr_t L_1164 = (((uintptr_t)((int32_t)((uint32_t)L_1163>>((int32_t)24)))));
		uint8_t L_1165 = (L_1162)->GetAt(static_cast<il2cpp_array_size_t>(L_1164));
		UInt32U5BU5D_t2770800703* L_1166 = ___ekey2;
		int32_t L_1167 = V_8;
		NullCheck(L_1166);
		int32_t L_1168 = L_1167;
		uint32_t L_1169 = (L_1166)->GetAt(static_cast<il2cpp_array_size_t>(L_1168));
		NullCheck(L_1161);
		(L_1161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1165^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1169>>((int32_t)24))))))))))));
		ByteU5BU5D_t4116647657* L_1170 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1171 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1172 = V_6;
		NullCheck(L_1171);
		int32_t L_1173 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1172>>((int32_t)16))))));
		uint8_t L_1174 = (L_1171)->GetAt(static_cast<il2cpp_array_size_t>(L_1173));
		UInt32U5BU5D_t2770800703* L_1175 = ___ekey2;
		int32_t L_1176 = V_8;
		NullCheck(L_1175);
		int32_t L_1177 = L_1176;
		uint32_t L_1178 = (L_1175)->GetAt(static_cast<il2cpp_array_size_t>(L_1177));
		NullCheck(L_1170);
		(L_1170)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1174^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1178>>((int32_t)16))))))))))));
		ByteU5BU5D_t4116647657* L_1179 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1180 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1181 = V_5;
		NullCheck(L_1180);
		int32_t L_1182 = (((int32_t)((uint8_t)((int32_t)((uint32_t)L_1181>>8)))));
		uint8_t L_1183 = (L_1180)->GetAt(static_cast<il2cpp_array_size_t>(L_1182));
		UInt32U5BU5D_t2770800703* L_1184 = ___ekey2;
		int32_t L_1185 = V_8;
		NullCheck(L_1184);
		int32_t L_1186 = L_1185;
		uint32_t L_1187 = (L_1184)->GetAt(static_cast<il2cpp_array_size_t>(L_1186));
		NullCheck(L_1179);
		(L_1179)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1183^(int32_t)(((int32_t)((uint8_t)((int32_t)((uint32_t)L_1187>>8)))))))))));
		ByteU5BU5D_t4116647657* L_1188 = ___outdata1;
		ByteU5BU5D_t4116647657* L_1189 = ((AesTransform_t2957123611_StaticFields*)il2cpp_codegen_static_fields_for(AesTransform_t2957123611_il2cpp_TypeInfo_var))->get_iSBox_17();
		uint32_t L_1190 = V_4;
		NullCheck(L_1189);
		int32_t L_1191 = (((int32_t)((uint8_t)L_1190)));
		uint8_t L_1192 = (L_1189)->GetAt(static_cast<il2cpp_array_size_t>(L_1191));
		UInt32U5BU5D_t2770800703* L_1193 = ___ekey2;
		int32_t L_1194 = V_8;
		int32_t L_1195 = L_1194;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_1195, (int32_t)1));
		NullCheck(L_1193);
		int32_t L_1196 = L_1195;
		uint32_t L_1197 = (L_1193)->GetAt(static_cast<il2cpp_array_size_t>(L_1196));
		NullCheck(L_1188);
		(L_1188)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1192^(int32_t)(((int32_t)((uint8_t)L_1197)))))))));
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
// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TimeZoneInfo__ctor_m1956250117 (TimeZoneInfo_t161405854 * __this, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo__ctor_m1956250117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* G_B30_0 = NULL;
	TimeZoneInfo_t161405854 * G_B30_1 = NULL;
	String_t* G_B29_0 = NULL;
	TimeZoneInfo_t161405854 * G_B29_1 = NULL;
	String_t* G_B32_0 = NULL;
	TimeZoneInfo_t161405854 * G_B32_1 = NULL;
	String_t* G_B31_0 = NULL;
	TimeZoneInfo_t161405854 * G_B31_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3454449607, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral1601163033, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0032:
	{
		int64_t L_6 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&___baseUtcOffset1), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_6%(int64_t)(((int64_t)((int64_t)((int32_t)600000000)))))))
		{
			goto IL_0050;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral645215293, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0050:
	{
		TimeSpan_t881159249  L_8 = ___baseUtcOffset1;
		TimeSpan_t881159249  L_9;
		memset(&L_9, 0, sizeof(L_9));
		TimeSpan__ctor_m3689759052((&L_9), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_10 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}
	{
		TimeSpan_t881159249  L_11 = ___baseUtcOffset1;
		TimeSpan_t881159249  L_12;
		memset(&L_12, 0, sizeof(L_12));
		TimeSpan__ctor_m3689759052((&L_12), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_13 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0083;
		}
	}

IL_0078:
	{
		ArgumentOutOfRangeException_t777629997 * L_14 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_14, _stringLiteral3372752593, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0083:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_15 = ___adjustmentRules5;
		if (!L_15)
		{
			goto IL_0181;
		}
	}
	{
		AdjustmentRuleU5BU5D_t1469475992* L_16 = ___adjustmentRules5;
		NullCheck(L_16);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))
		{
			goto IL_0181;
		}
	}
	{
		V_0 = (AdjustmentRule_t74449909 *)NULL;
		AdjustmentRuleU5BU5D_t1469475992* L_17 = ___adjustmentRules5;
		V_2 = L_17;
		V_3 = 0;
		goto IL_0178;
	}

IL_009f:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		AdjustmentRule_t74449909 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		AdjustmentRule_t74449909 * L_22 = V_1;
		if (L_22)
		{
			goto IL_00b4;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_23 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_23, _stringLiteral1373758191, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_00b4:
	{
		TimeSpan_t881159249  L_24 = ___baseUtcOffset1;
		AdjustmentRule_t74449909 * L_25 = V_1;
		NullCheck(L_25);
		TimeSpan_t881159249  L_26 = AdjustmentRule_get_DaylightDelta_m2159274191(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_27 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_24, L_26, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_28;
		memset(&L_28, 0, sizeof(L_28));
		TimeSpan__ctor_m3689759052((&L_28), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		bool L_29 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		TimeSpan_t881159249  L_30 = ___baseUtcOffset1;
		AdjustmentRule_t74449909 * L_31 = V_1;
		NullCheck(L_31);
		TimeSpan_t881159249  L_32 = AdjustmentRule_get_DaylightDelta_m2159274191(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_33 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_34;
		memset(&L_34, 0, sizeof(L_34));
		TimeSpan__ctor_m3689759052((&L_34), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		bool L_35 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00fd;
		}
	}

IL_00f2:
	{
		InvalidTimeZoneException_t4066718130 * L_36 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_36, _stringLiteral3975560191, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_00fd:
	{
		AdjustmentRule_t74449909 * L_37 = V_0;
		if (!L_37)
		{
			goto IL_0124;
		}
	}
	{
		AdjustmentRule_t74449909 * L_38 = V_0;
		NullCheck(L_38);
		DateTime_t3738529785  L_39 = AdjustmentRule_get_DateStart_m2176962503(L_38, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_40 = V_1;
		NullCheck(L_40);
		DateTime_t3738529785  L_41 = AdjustmentRule_get_DateStart_m2176962503(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_42 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_39, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0124;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_43 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_43, _stringLiteral136749170, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0124:
	{
		AdjustmentRule_t74449909 * L_44 = V_0;
		if (!L_44)
		{
			goto IL_014b;
		}
	}
	{
		AdjustmentRule_t74449909 * L_45 = V_0;
		NullCheck(L_45);
		DateTime_t3738529785  L_46 = AdjustmentRule_get_DateEnd_m3164615624(L_45, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_47 = V_1;
		NullCheck(L_47);
		DateTime_t3738529785  L_48 = AdjustmentRule_get_DateStart_m2176962503(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_49 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_014b;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_50 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_50, _stringLiteral1453361438, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_014b:
	{
		AdjustmentRule_t74449909 * L_51 = V_0;
		if (!L_51)
		{
			goto IL_0172;
		}
	}
	{
		AdjustmentRule_t74449909 * L_52 = V_0;
		NullCheck(L_52);
		DateTime_t3738529785  L_53 = AdjustmentRule_get_DateEnd_m3164615624(L_52, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_54 = V_1;
		NullCheck(L_54);
		DateTime_t3738529785  L_55 = AdjustmentRule_get_DateStart_m2176962503(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_56 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_53, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0172;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_57 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_57, _stringLiteral2306550058, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, NULL, TimeZoneInfo__ctor_m1956250117_RuntimeMethod_var);
	}

IL_0172:
	{
		AdjustmentRule_t74449909 * L_58 = V_1;
		V_0 = L_58;
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0178:
	{
		int32_t L_60 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_61 = V_2;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_61)->max_length)))))))
		{
			goto IL_009f;
		}
	}

IL_0181:
	{
		String_t* L_62 = ___id0;
		__this->set_id_3(L_62);
		TimeSpan_t881159249  L_63 = ___baseUtcOffset1;
		__this->set_baseUtcOffset_0(L_63);
		String_t* L_64 = ___displayName2;
		String_t* L_65 = L_64;
		G_B29_0 = L_65;
		G_B29_1 = __this;
		if (L_65)
		{
			G_B30_0 = L_65;
			G_B30_1 = __this;
			goto IL_0199;
		}
	}
	{
		String_t* L_66 = ___id0;
		G_B30_0 = L_66;
		G_B30_1 = G_B29_1;
	}

IL_0199:
	{
		NullCheck(G_B30_1);
		G_B30_1->set_displayName_2(G_B30_0);
		String_t* L_67 = ___standardDisplayName3;
		String_t* L_68 = L_67;
		G_B31_0 = L_68;
		G_B31_1 = __this;
		if (L_68)
		{
			G_B32_0 = L_68;
			G_B32_1 = __this;
			goto IL_01a9;
		}
	}
	{
		String_t* L_69 = ___id0;
		G_B32_0 = L_69;
		G_B32_1 = G_B31_1;
	}

IL_01a9:
	{
		NullCheck(G_B32_1);
		G_B32_1->set_standardDisplayName_5(G_B32_0);
		String_t* L_70 = ___daylightDisplayName4;
		__this->set_daylightDisplayName_1(L_70);
		bool L_71 = ___disableDaylightSavingTime6;
		__this->set_disableDaylightSavingTime_6(L_71);
		AdjustmentRuleU5BU5D_t1469475992* L_72 = ___adjustmentRules5;
		__this->set_adjustmentRules_9(L_72);
		return;
	}
}
// System.Void System.TimeZoneInfo::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TimeZoneInfo__cctor_m3311629113 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeZoneInfo_get_BaseUtcOffset_m808429276 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_baseUtcOffset_0();
		return L_0;
	}
}
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_DisplayName_m3871974074 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_2();
		return L_0;
	}
}
// System.String System.TimeZoneInfo::get_Id()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_Id_m3716673190 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_3();
		return L_0;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_get_Local_m3767312181 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_Local_m3767312181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_local_4();
		if (L_0)
		{
			goto IL_0058;
		}
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_1 = TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268(NULL /*static, unused*/, _stringLiteral3126236545, _stringLiteral3497985806, /*hidden argument*/NULL);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_local_4(L_1);
		goto IL_0058;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		{
		}

IL_0024:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
			String_t* L_2 = TimeZoneInfo_get_TimeZoneDirectory_m1493272576(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_2, _stringLiteral2825121886, /*hidden argument*/NULL);
			TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268(NULL /*static, unused*/, _stringLiteral3126236545, L_3, /*hidden argument*/NULL);
			((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_local_4(L_4);
			goto IL_0053;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0047;
			throw e;
		}

CATCH_0047:
		{ // begin catch(System.Object)
			{
				TimeZoneNotFoundException_t171073523 * L_5 = (TimeZoneNotFoundException_t171073523 *)il2cpp_codegen_object_new(TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var);
				TimeZoneNotFoundException__ctor_m2966108609(L_5, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TimeZoneInfo_get_Local_m3767312181_RuntimeMethod_var);
			}

IL_004e:
			{
				goto IL_0053;
			}
		} // end catch (depth: 2)

IL_0053:
		{
			goto IL_0058;
		}
	} // end catch (depth: 1)

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_6 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_local_4();
		return L_6;
	}
}
// System.Boolean System.TimeZoneInfo::get_SupportsDaylightSavingTime()
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_disableDaylightSavingTime_6();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::get_Utc()
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_get_Utc_m4037366733 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_Utc_m4037366733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_utc_7();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		TimeSpan_t881159249  L_1;
		memset(&L_1, 0, sizeof(L_1));
		TimeSpan__ctor_m1896986612((&L_1), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_CreateCustomTimeZone_m4187381152(NULL /*static, unused*/, _stringLiteral3410052326, L_1, _stringLiteral3410052326, _stringLiteral3410052326, /*hidden argument*/NULL);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_utc_7(L_2);
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_3 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_utc_7();
		return L_3;
	}
}
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_get_TimeZoneDirectory_m1493272576 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_get_TimeZoneDirectory_m1493272576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		String_t* L_0 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_timeZoneDirectory_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->set_timeZoneDirectory_8(_stringLiteral1599610208);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		String_t* L_1 = ((TimeZoneInfo_t161405854_StaticFields*)il2cpp_codegen_static_fields_for(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var))->get_timeZoneDirectory_8();
		return L_1;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m4187381152 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m4187381152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_CreateCustomTimeZone_m1792093365(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (String_t*)NULL, (AdjustmentRuleU5BU5D_t1469475992*)(AdjustmentRuleU5BU5D_t1469475992*)NULL, (bool)1, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m3151472709 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m3151472709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		String_t* L_4 = ___daylightDisplayName4;
		AdjustmentRuleU5BU5D_t1469475992* L_5 = ___adjustmentRules5;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_6 = TimeZoneInfo_CreateCustomTimeZone_m1792093365(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_CreateCustomTimeZone_m1792093365 (RuntimeObject * __this /* static, unused */, String_t* ___id0, TimeSpan_t881159249  ___baseUtcOffset1, String_t* ___displayName2, String_t* ___standardDisplayName3, String_t* ___daylightDisplayName4, AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules5, bool ___disableDaylightSavingTime6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_CreateCustomTimeZone_m1792093365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		TimeSpan_t881159249  L_1 = ___baseUtcOffset1;
		String_t* L_2 = ___displayName2;
		String_t* L_3 = ___standardDisplayName3;
		String_t* L_4 = ___daylightDisplayName4;
		AdjustmentRuleU5BU5D_t1469475992* L_5 = ___adjustmentRules5;
		bool L_6 = ___disableDaylightSavingTime6;
		TimeZoneInfo_t161405854 * L_7 = (TimeZoneInfo_t161405854 *)il2cpp_codegen_object_new(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo__ctor_m1956250117(L_7, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_Equals_m832693802 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_Equals_m832693802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		TimeZoneInfo_t161405854 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		TimeZoneInfo_t161405854 * L_1 = ___other0;
		NullCheck(L_1);
		String_t* L_2 = TimeZoneInfo_get_Id_m3716673190(L_1, /*hidden argument*/NULL);
		String_t* L_3 = TimeZoneInfo_get_Id_m3716673190(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		TimeZoneInfo_t161405854 * L_5 = ___other0;
		bool L_6 = TimeZoneInfo_HasSameRules_m697432081(__this, L_5, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 0;
	}

IL_0028:
	{
		return (bool)G_B5_0;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268 (RuntimeObject * __this /* static, unused */, String_t* ___id0, String_t* ___filepath1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	FileStream_t4292183065 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	TimeZoneInfo_t161405854 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___filepath1;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		TimeZoneNotFoundException_t171073523 * L_2 = (TimeZoneNotFoundException_t171073523 *)il2cpp_codegen_object_new(TimeZoneNotFoundException_t171073523_il2cpp_TypeInfo_var);
		TimeZoneNotFoundException__ctor_m2966108609(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
	}

IL_0011:
	{
		ByteU5BU5D_t4116647657* L_3 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16384));
		V_0 = L_3;
		String_t* L_4 = ___filepath1;
		FileStream_t4292183065 * L_5 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		FileStream_t4292183065 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(16 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)16384));
		V_1 = L_8;
		IL2CPP_LEAVE(0x43, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_9 = V_2;
			if (!L_9)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			FileStream_t4292183065 * L_10 = V_2;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
	{
		ByteU5BU5D_t4116647657* L_11 = V_0;
		int32_t L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		bool L_13 = TimeZoneInfo_ValidTZFile_m3505397244(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_005a;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_14 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m4131156752(L_14, _stringLiteral2277405654, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
	}

IL_005a:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_15 = ___id0;
			ByteU5BU5D_t4116647657* L_16 = V_0;
			int32_t L_17 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
			TimeZoneInfo_t161405854 * L_18 = TimeZoneInfo_ParseTZBuffer_m3851257210(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
			V_4 = L_18;
			goto IL_0080;
		}

IL_0069:
		{
			; // IL_0069: leave IL_0080
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006e;
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t *)__exception_local);
			Exception_t * L_19 = V_3;
			NullCheck(L_19);
			String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_19);
			InvalidTimeZoneException_t4066718130 * L_21 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
			InvalidTimeZoneException__ctor_m4131156752(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, NULL, TimeZoneInfo_FindSystemTimeZoneByFileName_m3059498268_RuntimeMethod_var);
		}

IL_007b:
		{
			goto IL_0080;
		}
	} // end catch (depth: 1)

IL_0080:
	{
		TimeZoneInfo_t161405854 * L_22 = V_4;
		return L_22;
	}
}
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C" IL2CPP_METHOD_ATTR AdjustmentRuleU5BU5D_t1469475992* TimeZoneInfo_GetAdjustmentRules_m496065111 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetAdjustmentRules_m496065111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_disableDaylightSavingTime_6();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		AdjustmentRuleU5BU5D_t1469475992* L_1 = (AdjustmentRuleU5BU5D_t1469475992*)SZArrayNew(AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_0012:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_2 = __this->get_adjustmentRules_9();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		RuntimeObject * L_3 = Array_Clone_m2672907798((RuntimeArray *)(RuntimeArray *)L_2, /*hidden argument*/NULL);
		return ((AdjustmentRuleU5BU5D_t1469475992*)Castclass((RuntimeObject*)L_3, AdjustmentRuleU5BU5D_t1469475992_il2cpp_TypeInfo_var));
	}
}
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TimeZoneInfo_GetHashCode_m3205587869 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = TimeZoneInfo_get_Id_m3716673190(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m1906374149(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AdjustmentRuleU5BU5D_t1469475992* L_2 = TimeZoneInfo_GetAdjustmentRules_m496065111(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_002b;
	}

IL_001a:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AdjustmentRule_t74449909 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		int32_t L_7 = V_0;
		AdjustmentRule_t74449909 * L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = AdjustmentRule_GetHashCode_m3136432906(L_8, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7^(int32_t)L_9));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_11 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TimeZoneInfo_GetObjectData_m2434535635 (TimeZoneInfo_t161405854 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetObjectData_m2434535635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, TimeZoneInfo_GetObjectData_m2434535635_RuntimeMethod_var);
	}
}
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeZoneInfo_GetUtcOffset_m3780875423 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetUtcOffset_m3780875423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		bool L_1 = TimeZoneInfo_IsDaylightSavingTime_m2475480634(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		DateTime_t3738529785  L_2 = ___dateTime0;
		AdjustmentRule_t74449909 * L_3 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		TimeSpan_t881159249  L_4 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_5 = V_0;
		NullCheck(L_5);
		TimeSpan_t881159249  L_6 = AdjustmentRule_get_DaylightDelta_m2159274191(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_7 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0026:
	{
		TimeSpan_t881159249  L_8 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_HasSameRules_m697432081 (TimeZoneInfo_t161405854 * __this, TimeZoneInfo_t161405854 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_HasSameRules_m697432081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TimeZoneInfo_t161405854 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2432405111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TimeZoneInfo_HasSameRules_m697432081_RuntimeMethod_var);
	}

IL_0011:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_2 = __this->get_adjustmentRules_9();
		TimeZoneInfo_t161405854 * L_3 = ___other0;
		NullCheck(L_3);
		AdjustmentRuleU5BU5D_t1469475992* L_4 = L_3->get_adjustmentRules_9();
		if ((((int32_t)((((RuntimeObject*)(AdjustmentRuleU5BU5D_t1469475992*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)((((RuntimeObject*)(AdjustmentRuleU5BU5D_t1469475992*)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0))))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_5 = __this->get_adjustmentRules_9();
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		TimeSpan_t881159249  L_6 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		TimeZoneInfo_t161405854 * L_7 = ___other0;
		NullCheck(L_7);
		TimeSpan_t881159249  L_8 = TimeZoneInfo_get_BaseUtcOffset_m808429276(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_9 = TimeSpan_op_Inequality_m2467851530(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_10 = __this->get_adjustmentRules_9();
		NullCheck(L_10);
		TimeZoneInfo_t161405854 * L_11 = ___other0;
		NullCheck(L_11);
		AdjustmentRuleU5BU5D_t1469475992* L_12 = L_11->get_adjustmentRules_9();
		NullCheck(L_12);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)0;
	}

IL_0066:
	{
		V_0 = 0;
		goto IL_008d;
	}

IL_006d:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_13 = __this->get_adjustmentRules_9();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		AdjustmentRule_t74449909 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		TimeZoneInfo_t161405854 * L_17 = ___other0;
		NullCheck(L_17);
		AdjustmentRuleU5BU5D_t1469475992* L_18 = L_17->get_adjustmentRules_9();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		AdjustmentRule_t74449909 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		bool L_22 = AdjustmentRule_Equals_m4095462908(L_16, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0089;
		}
	}
	{
		return (bool)0;
	}

IL_0089:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_008d:
	{
		int32_t L_24 = V_0;
		AdjustmentRuleU5BU5D_t1469475992* L_25 = __this->get_adjustmentRules_9();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.TimeZoneInfo::IsDaylightSavingTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_IsDaylightSavingTime_m2475480634 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_IsDaylightSavingTime_m2475480634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	TransitionTime_t449921781  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TransitionTime_t449921781  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t G_B18_0 = 0;
	TransitionTime_t449921781  G_B18_1;
	memset(&G_B18_1, 0, sizeof(G_B18_1));
	int32_t G_B17_0 = 0;
	TransitionTime_t449921781  G_B17_1;
	memset(&G_B17_1, 0, sizeof(G_B17_1));
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	TransitionTime_t449921781  G_B19_2;
	memset(&G_B19_2, 0, sizeof(G_B19_2));
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t3738529785  L_1 = ___dateTime0;
		bool L_2 = TimeZoneInfo_IsInvalidTime_m1886861930(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral1574560297, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TimeZoneInfo_IsDaylightSavingTime_m2475480634_RuntimeMethod_var);
	}

IL_0024:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_4 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_4))))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		bool L_5 = TimeZoneInfo_get_SupportsDaylightSavingTime_m3644631779(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		int32_t L_6 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}

IL_0057:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_8 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_8))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_9 = DateTime_IsDaylightSavingTime_m2632700238((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		return L_9;
	}

IL_006a:
	{
		int32_t L_10 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_11 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_11)))
		{
			goto IL_0096;
		}
	}
	{
		DateTime_t3738529785  L_12 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_13 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_12, 1, /*hidden argument*/NULL);
		bool L_14 = TimeZoneInfo_IsDaylightSavingTime_m2475480634(__this, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0096:
	{
		DateTime_t3738529785  L_15 = DateTime_get_Date_m46742767((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_16 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		AdjustmentRule_t74449909 * L_17 = V_0;
		if (L_17)
		{
			goto IL_00ac;
		}
	}
	{
		return (bool)0;
	}

IL_00ac:
	{
		AdjustmentRule_t74449909 * L_18 = V_0;
		NullCheck(L_18);
		TransitionTime_t449921781  L_19 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_18, /*hidden argument*/NULL);
		int32_t L_20 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_21 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		AdjustmentRule_t74449909 * L_22 = V_0;
		NullCheck(L_22);
		TransitionTime_t449921781  L_23 = AdjustmentRule_get_DaylightTransitionEnd_m3747881060(L_22, /*hidden argument*/NULL);
		int32_t L_24 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_25 = V_0;
		NullCheck(L_25);
		TransitionTime_t449921781  L_26 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_25, /*hidden argument*/NULL);
		V_3 = L_26;
		int32_t L_27 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&V_3), /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_28 = V_0;
		NullCheck(L_28);
		TransitionTime_t449921781  L_29 = AdjustmentRule_get_DaylightTransitionEnd_m3747881060(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		int32_t L_30 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&V_4), /*hidden argument*/NULL);
		G_B17_0 = L_24;
		G_B17_1 = L_23;
		if ((((int32_t)L_27) >= ((int32_t)L_30)))
		{
			G_B18_0 = L_24;
			G_B18_1 = L_23;
			goto IL_00f4;
		}
	}
	{
		G_B19_0 = 0;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_00f5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_31 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, G_B19_2, ((int32_t)il2cpp_codegen_add((int32_t)G_B19_1, (int32_t)G_B19_0)), /*hidden argument*/NULL);
		V_2 = L_31;
		int32_t L_32 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_012e;
		}
	}
	{
		DateTime_t3738529785  L_33 = V_1;
		TimeSpan_t881159249  L_34 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_35 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		DateTime_t3738529785  L_36 = V_2;
		TimeSpan_t881159249  L_37 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_38 = V_0;
		NullCheck(L_38);
		TimeSpan_t881159249  L_39 = AdjustmentRule_get_DaylightDelta_m2159274191(L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_40 = TimeSpan_op_Addition_m672714982(NULL /*static, unused*/, L_37, L_39, /*hidden argument*/NULL);
		DateTime_t3738529785  L_41 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_36, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_012e:
	{
		DateTime_t3738529785  L_42 = ___dateTime0;
		DateTime_t3738529785  L_43 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_44 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0143;
		}
	}
	{
		DateTime_t3738529785  L_45 = ___dateTime0;
		DateTime_t3738529785  L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_47 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		G_B24_0 = ((int32_t)(L_47));
		goto IL_0144;
	}

IL_0143:
	{
		G_B24_0 = 0;
	}

IL_0144:
	{
		return (bool)G_B24_0;
	}
}
// System.Boolean System.TimeZoneInfo::IsInvalidTime(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_IsInvalidTime_m1886861930 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_IsInvalidTime_m1886861930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		int32_t L_1 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_2)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		DateTime_t3738529785  L_3 = ___dateTime0;
		AdjustmentRule_t74449909 * L_4 = TimeZoneInfo_GetApplicableRule_m3152592286(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		AdjustmentRule_t74449909 * L_5 = V_0;
		NullCheck(L_5);
		TransitionTime_t449921781  L_6 = AdjustmentRule_get_DaylightTransitionStart_m3488892433(L_5, /*hidden argument*/NULL);
		int32_t L_7 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_8 = TimeZoneInfo_TransitionPoint_m2194238407(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		DateTime_t3738529785  L_9 = ___dateTime0;
		DateTime_t3738529785  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0069;
		}
	}
	{
		DateTime_t3738529785  L_12 = ___dateTime0;
		DateTime_t3738529785  L_13 = V_1;
		AdjustmentRule_t74449909 * L_14 = V_0;
		NullCheck(L_14);
		TimeSpan_t881159249  L_15 = AdjustmentRule_get_DaylightDelta_m2159274191(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_16 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		bool L_17 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0069;
		}
	}
	{
		return (bool)1;
	}

IL_0069:
	{
		return (bool)0;
	}
}
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C" IL2CPP_METHOD_ATTR void TimeZoneInfo_OnDeserialization_m1663302437 (TimeZoneInfo_t161405854 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_OnDeserialization_m1663302437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, TimeZoneInfo_OnDeserialization_m1663302437_RuntimeMethod_var);
	}
}
// System.String System.TimeZoneInfo::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeZoneInfo_ToString_m2855824657 (TimeZoneInfo_t161405854 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = TimeZoneInfo_get_DisplayName_m3871974074(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo::GetApplicableRule(System.DateTime)
extern "C" IL2CPP_METHOD_ATTR AdjustmentRule_t74449909 * TimeZoneInfo_GetApplicableRule_m3152592286 (TimeZoneInfo_t161405854 * __this, DateTime_t3738529785  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_GetApplicableRule_m3152592286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		DateTime_t3738529785  L_0 = ___dateTime0;
		V_0 = L_0;
		int32_t L_1 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_2 = TimeZoneInfo_get_Local_m3767312181(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_2)))
		{
			goto IL_002d;
		}
	}
	{
		DateTime_t3738529785  L_3 = DateTime_ToUniversalTime_m1945318289((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_4 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002d:
	{
		int32_t L_6 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0052;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_7 = TimeZoneInfo_get_Utc_m4037366733(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(TimeZoneInfo_t161405854 *)__this) == ((RuntimeObject*)(TimeZoneInfo_t161405854 *)L_7)))
		{
			goto IL_0052;
		}
	}
	{
		DateTime_t3738529785  L_8 = V_0;
		TimeSpan_t881159249  L_9 = TimeZoneInfo_get_BaseUtcOffset_m808429276(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_10 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0052:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_11 = __this->get_adjustmentRules_9();
		V_2 = L_11;
		V_3 = 0;
		goto IL_009f;
	}

IL_0060:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		AdjustmentRule_t74449909 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
		AdjustmentRule_t74449909 * L_16 = V_1;
		NullCheck(L_16);
		DateTime_t3738529785  L_17 = AdjustmentRule_get_DateStart_m2176962503(L_16, /*hidden argument*/NULL);
		DateTime_t3738529785  L_18 = DateTime_get_Date_m46742767((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_19 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		return (AdjustmentRule_t74449909 *)NULL;
	}

IL_007d:
	{
		AdjustmentRule_t74449909 * L_20 = V_1;
		NullCheck(L_20);
		DateTime_t3738529785  L_21 = AdjustmentRule_get_DateEnd_m3164615624(L_20, /*hidden argument*/NULL);
		DateTime_t3738529785  L_22 = DateTime_get_Date_m46742767((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_23 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		goto IL_009b;
	}

IL_0099:
	{
		AdjustmentRule_t74449909 * L_24 = V_1;
		return L_24;
	}

IL_009b:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_27)->max_length)))))))
		{
			goto IL_0060;
		}
	}
	{
		return (AdjustmentRule_t74449909 *)NULL;
	}
}
// System.DateTime System.TimeZoneInfo::TransitionPoint(System.TimeZoneInfo/TransitionTime,System.Int32)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TimeZoneInfo_TransitionPoint_m2194238407 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___transition0, int32_t ___year1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_TransitionPoint_m2194238407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = TransitionTime_get_IsFixedDateRule_m1557984015((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = ___year1;
		int32_t L_2 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		int32_t L_3 = TransitionTime_get_Day_m1297598877((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_4;
		memset(&L_4, 0, sizeof(L_4));
		DateTime__ctor_m12900168((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		DateTime_t3738529785  L_5 = TransitionTime_get_TimeOfDay_m2066448705((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		V_2 = L_5;
		TimeSpan_t881159249  L_6 = DateTime_get_TimeOfDay_m82064893((DateTime_t3738529785 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_7 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0035:
	{
		int32_t L_8 = ___year1;
		int32_t L_9 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_3), L_8, L_9, 1, /*hidden argument*/NULL);
		int32_t L_10 = DateTime_get_DayOfWeek_m2326490739((DateTime_t3738529785 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = TransitionTime_get_Week_m3334751603((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		int32_t L_12 = TransitionTime_get_DayOfWeek_m3191031940((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), (int32_t)7)))), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13))%(int32_t)7))));
		int32_t L_14 = V_1;
		int32_t L_15 = ___year1;
		int32_t L_16 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		int32_t L_17 = DateTime_DaysInMonth_m2587936260(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_14) <= ((int32_t)L_17)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)7));
	}

IL_007e:
	{
		int32_t L_19 = ___year1;
		int32_t L_20 = TransitionTime_get_Month_m1950274531((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		DateTime_t3738529785  L_22;
		memset(&L_22, 0, sizeof(L_22));
		DateTime__ctor_m12900168((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		DateTime_t3738529785  L_23 = TransitionTime_get_TimeOfDay_m2066448705((TransitionTime_t449921781 *)(&___transition0), /*hidden argument*/NULL);
		V_4 = L_23;
		TimeSpan_t881159249  L_24 = DateTime_get_TimeOfDay_m82064893((DateTime_t3738529785 *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_25 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool TimeZoneInfo_ValidTZFile_m3505397244 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ValidTZFile_m3505397244_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		StringBuilder_t * L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		StringBuilder_Append_m2383614642(L_1, (((int32_t)((uint16_t)L_5))), /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = StringBuilder_ToString_m3317489284(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_9, _stringLiteral3992013369, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		int32_t L_11 = ___length1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16384))))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		return (bool)1;
	}
}
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TimeZoneInfo_SwapInt32_m4051795925 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		int32_t L_1 = ___i0;
		int32_t L_2 = ___i0;
		int32_t L_3 = ___i0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)8))&(int32_t)((int32_t)65280)))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))&(int32_t)((int32_t)16711680)))))|(int32_t)((int32_t)((int32_t)L_3<<(int32_t)((int32_t)24)))));
	}
}
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t TimeZoneInfo_ReadBigEndianInt32_m3367804058 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___start1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ReadBigEndianInt32_m3367804058_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer0;
		int32_t L_1 = ___start1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int32_t L_2 = BitConverter_ToInt32_m1089563119(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0014:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_6 = TimeZoneInfo_SwapInt32_m4051795925(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR TimeZoneInfo_t161405854 * TimeZoneInfo_ParseTZBuffer_m3851257210 (RuntimeObject * __this /* static, unused */, String_t* ___id0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTZBuffer_m3851257210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Dictionary_2_t736164020 * V_6 = NULL;
	Dictionary_2_t1396226614 * V_7 = NULL;
	List_1_t1770412147 * V_8 = NULL;
	TimeSpan_t881159249  V_9;
	memset(&V_9, 0, sizeof(V_9));
	TimeSpan_t881159249  V_10;
	memset(&V_10, 0, sizeof(V_10));
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	bool V_13 = false;
	DateTime_t3738529785  V_14;
	memset(&V_14, 0, sizeof(V_14));
	List_1_t1546524651 * V_15 = NULL;
	int32_t V_16 = 0;
	KeyValuePair_2_t298337405  V_17;
	memset(&V_17, 0, sizeof(V_17));
	DateTime_t3738529785  V_18;
	memset(&V_18, 0, sizeof(V_18));
	TimeType_t2507513283  V_19;
	memset(&V_19, 0, sizeof(V_19));
	DateTime_t3738529785  V_20;
	memset(&V_20, 0, sizeof(V_20));
	DateTime_t3738529785  V_21;
	memset(&V_21, 0, sizeof(V_21));
	DateTime_t3738529785  V_22;
	memset(&V_22, 0, sizeof(V_22));
	TransitionTime_t449921781  V_23;
	memset(&V_23, 0, sizeof(V_23));
	TransitionTime_t449921781  V_24;
	memset(&V_24, 0, sizeof(V_24));
	TimeType_t2507513283  V_25;
	memset(&V_25, 0, sizeof(V_25));
	TimeType_t2507513283  V_26;
	memset(&V_26, 0, sizeof(V_26));
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_1 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_0, ((int32_t)20), /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t4116647657* L_2 = ___buffer1;
		int32_t L_3 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)24), /*hidden argument*/NULL);
		V_1 = L_3;
		ByteU5BU5D_t4116647657* L_4 = ___buffer1;
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_4, ((int32_t)28), /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___buffer1;
		int32_t L_7 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_6, ((int32_t)32), /*hidden argument*/NULL);
		V_3 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___buffer1;
		int32_t L_9 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_8, ((int32_t)36), /*hidden argument*/NULL);
		V_4 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___buffer1;
		int32_t L_11 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_10, ((int32_t)40), /*hidden argument*/NULL);
		V_5 = L_11;
		int32_t L_12 = ___length2;
		int32_t L_13 = V_3;
		int32_t L_14 = V_4;
		int32_t L_15 = V_5;
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)5)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)6)))), (int32_t)L_15)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)8)))), (int32_t)L_17)), (int32_t)L_18)))))
		{
			goto IL_005a;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_19 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_005a:
	{
		ByteU5BU5D_t4116647657* L_20 = ___buffer1;
		int32_t L_21 = V_3;
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		Dictionary_2_t736164020 * L_25 = TimeZoneInfo_ParseAbbreviations_m1471889884(NULL /*static, unused*/, L_20, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_21)))), (int32_t)L_22)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_23)))), L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		ByteU5BU5D_t4116647657* L_26 = ___buffer1;
		int32_t L_27 = V_3;
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		Dictionary_2_t736164020 * L_30 = V_6;
		Dictionary_2_t1396226614 * L_31 = TimeZoneInfo_ParseTimesTypes_m1754682716(NULL /*static, unused*/, L_26, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)44), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_27)))), (int32_t)L_28)), L_29, L_30, /*hidden argument*/NULL);
		V_7 = L_31;
		ByteU5BU5D_t4116647657* L_32 = ___buffer1;
		int32_t L_33 = V_3;
		Dictionary_2_t1396226614 * L_34 = V_7;
		List_1_t1770412147 * L_35 = TimeZoneInfo_ParseTransitions_m542357583(NULL /*static, unused*/, L_32, ((int32_t)44), L_33, L_34, /*hidden argument*/NULL);
		V_8 = L_35;
		Dictionary_2_t1396226614 * L_36 = V_7;
		NullCheck(L_36);
		int32_t L_37 = Dictionary_2_get_Count_m4064694223(L_36, /*hidden argument*/Dictionary_2_get_Count_m4064694223_RuntimeMethod_var);
		if (L_37)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_38 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, NULL, TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_00a4:
	{
		Dictionary_2_t1396226614 * L_39 = V_7;
		NullCheck(L_39);
		int32_t L_40 = Dictionary_2_get_Count_m4064694223(L_39, /*hidden argument*/Dictionary_2_get_Count_m4064694223_RuntimeMethod_var);
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_00cd;
		}
	}
	{
		Dictionary_2_t1396226614 * L_41 = V_7;
		NullCheck(L_41);
		TimeType_t2507513283  L_42 = Dictionary_2_get_Item_m2315657164(L_41, 0, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		V_26 = L_42;
		bool L_43 = (&V_26)->get_IsDst_1();
		if (!L_43)
		{
			goto IL_00cd;
		}
	}
	{
		InvalidTimeZoneException_t4066718130 * L_44 = (InvalidTimeZoneException_t4066718130 *)il2cpp_codegen_object_new(InvalidTimeZoneException_t4066718130_il2cpp_TypeInfo_var);
		InvalidTimeZoneException__ctor_m6234683(L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, NULL, TimeZoneInfo_ParseTZBuffer_m3851257210_RuntimeMethod_var);
	}

IL_00cd:
	{
		TimeSpan__ctor_m1896986612((TimeSpan_t881159249 *)(&V_9), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		TimeSpan__ctor_m1896986612((TimeSpan_t881159249 *)(&V_10), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_11 = (String_t*)NULL;
		V_12 = (String_t*)NULL;
		V_13 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_45 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_13();
		V_14 = L_45;
		List_1_t1546524651 * L_46 = (List_1_t1546524651 *)il2cpp_codegen_object_new(List_1_t1546524651_il2cpp_TypeInfo_var);
		List_1__ctor_m27745599(L_46, /*hidden argument*/List_1__ctor_m27745599_RuntimeMethod_var);
		V_15 = L_46;
		V_16 = 0;
		goto IL_031d;
	}

IL_00fe:
	{
		List_1_t1770412147 * L_47 = V_8;
		int32_t L_48 = V_16;
		NullCheck(L_47);
		KeyValuePair_2_t298337405  L_49 = List_1_get_Item_m2470931760(L_47, L_48, /*hidden argument*/List_1_get_Item_m2470931760_RuntimeMethod_var);
		V_17 = L_49;
		DateTime_t3738529785  L_50 = KeyValuePair_2_get_Key_m2071921741((KeyValuePair_2_t298337405 *)(&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m2071921741_RuntimeMethod_var);
		V_18 = L_50;
		TimeType_t2507513283  L_51 = KeyValuePair_2_get_Value_m3123410994((KeyValuePair_2_t298337405 *)(&V_17), /*hidden argument*/KeyValuePair_2_get_Value_m3123410994_RuntimeMethod_var);
		V_19 = L_51;
		bool L_52 = (&V_19)->get_IsDst_1();
		if (L_52)
		{
			goto IL_02c1;
		}
	}
	{
		String_t* L_53 = V_11;
		String_t* L_54 = (&V_19)->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_55 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_53, L_54, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_014e;
		}
	}
	{
		double L_56 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_9), /*hidden argument*/NULL);
		int32_t L_57 = (&V_19)->get_Offset_0();
		if ((((double)L_56) == ((double)(((double)((double)L_57))))))
		{
			goto IL_0174;
		}
	}

IL_014e:
	{
		String_t* L_58 = (&V_19)->get_Name_2();
		V_11 = L_58;
		V_12 = (String_t*)NULL;
		int32_t L_59 = (&V_19)->get_Offset_0();
		TimeSpan__ctor_m3689759052((TimeSpan_t881159249 *)(&V_9), 0, 0, L_59, /*hidden argument*/NULL);
		List_1_t1546524651 * L_60 = (List_1_t1546524651 *)il2cpp_codegen_object_new(List_1_t1546524651_il2cpp_TypeInfo_var);
		List_1__ctor_m27745599(L_60, /*hidden argument*/List_1__ctor_m27745599_RuntimeMethod_var);
		V_15 = L_60;
		V_13 = (bool)0;
	}

IL_0174:
	{
		bool L_61 = V_13;
		if (!L_61)
		{
			goto IL_02b9;
		}
	}
	{
		DateTime_t3738529785  L_62 = V_14;
		TimeSpan_t881159249  L_63 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_64 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		V_14 = L_64;
		DateTime_t3738529785  L_65 = V_18;
		TimeSpan_t881159249  L_66 = V_9;
		DateTime_t3738529785  L_67 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_68 = V_10;
		DateTime_t3738529785  L_69 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		V_20 = L_69;
		DateTime_t3738529785  L_70 = DateTime_get_Date_m46742767((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		int32_t L_71 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		DateTime_t3738529785  L_72;
		memset(&L_72, 0, sizeof(L_72));
		DateTime__ctor_m12900168((&L_72), L_71, 1, 1, /*hidden argument*/NULL);
		bool L_73 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_70, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_01dc;
		}
	}
	{
		int32_t L_74 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		int32_t L_75 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_01dc;
		}
	}
	{
		DateTime_t3738529785  L_76 = V_20;
		TimeSpan_t881159249  L_77;
		memset(&L_77, 0, sizeof(L_77));
		TimeSpan__ctor_m3689759052((&L_77), ((int32_t)24), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_78 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_76, L_77, /*hidden argument*/NULL);
		V_20 = L_78;
	}

IL_01dc:
	{
		int32_t L_79 = DateTime_get_Month_m1566006993((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		if ((((int32_t)L_79) >= ((int32_t)7)))
		{
			goto IL_01fe;
		}
	}
	{
		int32_t L_80 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_21), L_80, 1, 1, /*hidden argument*/NULL);
		goto IL_020e;
	}

IL_01fe:
	{
		int32_t L_81 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_21), L_81, 7, 1, /*hidden argument*/NULL);
	}

IL_020e:
	{
		int32_t L_82 = DateTime_get_Month_m1566006993((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		if ((((int32_t)L_82) < ((int32_t)7)))
		{
			goto IL_0232;
		}
	}
	{
		int32_t L_83 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_22), L_83, ((int32_t)12), ((int32_t)31), /*hidden argument*/NULL);
		goto IL_0243;
	}

IL_0232:
	{
		int32_t L_84 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_22), L_84, 6, ((int32_t)30), /*hidden argument*/NULL);
	}

IL_0243:
	{
		DateTime_t3738529785  L_85;
		memset(&L_85, 0, sizeof(L_85));
		DateTime__ctor_m12900168((&L_85), 1, 1, 1, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_86 = DateTime_get_TimeOfDay_m82064893((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_87 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/NULL);
		int32_t L_88 = DateTime_get_Month_m1566006993((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		int32_t L_89 = DateTime_get_Day_m1623500273((DateTime_t3738529785 *)(&V_14), /*hidden argument*/NULL);
		TransitionTime_t449921781  L_90 = TransitionTime_CreateFixedDateRule_m488639024(NULL /*static, unused*/, L_87, L_88, L_89, /*hidden argument*/NULL);
		V_23 = L_90;
		DateTime_t3738529785  L_91;
		memset(&L_91, 0, sizeof(L_91));
		DateTime__ctor_m12900168((&L_91), 1, 1, 1, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_92 = DateTime_get_TimeOfDay_m82064893((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		DateTime_t3738529785  L_93 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_91, L_92, /*hidden argument*/NULL);
		int32_t L_94 = DateTime_get_Month_m1566006993((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		int32_t L_95 = DateTime_get_Day_m1623500273((DateTime_t3738529785 *)(&V_20), /*hidden argument*/NULL);
		TransitionTime_t449921781  L_96 = TransitionTime_CreateFixedDateRule_m488639024(NULL /*static, unused*/, L_93, L_94, L_95, /*hidden argument*/NULL);
		V_24 = L_96;
		TransitionTime_t449921781  L_97 = V_23;
		TransitionTime_t449921781  L_98 = V_24;
		bool L_99 = TransitionTime_op_Inequality_m1903374519(NULL /*static, unused*/, L_97, L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_02b9;
		}
	}
	{
		List_1_t1546524651 * L_100 = V_15;
		DateTime_t3738529785  L_101 = V_21;
		DateTime_t3738529785  L_102 = V_22;
		TimeSpan_t881159249  L_103 = V_10;
		TransitionTime_t449921781  L_104 = V_23;
		TransitionTime_t449921781  L_105 = V_24;
		AdjustmentRule_t74449909 * L_106 = AdjustmentRule_CreateAdjustmentRule_m1020400594(NULL /*static, unused*/, L_101, L_102, L_103, L_104, L_105, /*hidden argument*/NULL);
		NullCheck(L_100);
		List_1_Add_m1698810603(L_100, L_106, /*hidden argument*/List_1_Add_m1698810603_RuntimeMethod_var);
	}

IL_02b9:
	{
		V_13 = (bool)0;
		goto IL_0317;
	}

IL_02c1:
	{
		String_t* L_107 = V_12;
		String_t* L_108 = (&V_19)->get_Name_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_109 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_107, L_108, /*hidden argument*/NULL);
		if (L_109)
		{
			goto IL_02f0;
		}
	}
	{
		double L_110 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_10), /*hidden argument*/NULL);
		int32_t L_111 = (&V_19)->get_Offset_0();
		double L_112 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_9), /*hidden argument*/NULL);
		if ((((double)L_110) == ((double)((double)il2cpp_codegen_subtract((double)(((double)((double)L_111))), (double)L_112)))))
		{
			goto IL_0310;
		}
	}

IL_02f0:
	{
		String_t* L_113 = (&V_19)->get_Name_2();
		V_12 = L_113;
		int32_t L_114 = (&V_19)->get_Offset_0();
		TimeSpan_t881159249  L_115;
		memset(&L_115, 0, sizeof(L_115));
		TimeSpan__ctor_m3689759052((&L_115), 0, 0, L_114, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_116 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_117 = TimeSpan_op_Subtraction_m3592306516(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		V_10 = L_117;
	}

IL_0310:
	{
		DateTime_t3738529785  L_118 = V_18;
		V_14 = L_118;
		V_13 = (bool)1;
	}

IL_0317:
	{
		int32_t L_119 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
	}

IL_031d:
	{
		int32_t L_120 = V_16;
		List_1_t1770412147 * L_121 = V_8;
		NullCheck(L_121);
		int32_t L_122 = List_1_get_Count_m947837680(L_121, /*hidden argument*/List_1_get_Count_m947837680_RuntimeMethod_var);
		if ((((int32_t)L_120) < ((int32_t)L_122)))
		{
			goto IL_00fe;
		}
	}
	{
		List_1_t1546524651 * L_123 = V_15;
		NullCheck(L_123);
		int32_t L_124 = List_1_get_Count_m2451877167(L_123, /*hidden argument*/List_1_get_Count_m2451877167_RuntimeMethod_var);
		if (L_124)
		{
			goto IL_036d;
		}
	}
	{
		Dictionary_2_t1396226614 * L_125 = V_7;
		NullCheck(L_125);
		TimeType_t2507513283  L_126 = Dictionary_2_get_Item_m2315657164(L_125, 0, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		V_25 = L_126;
		String_t* L_127 = V_11;
		if (L_127)
		{
			goto IL_0361;
		}
	}
	{
		String_t* L_128 = (&V_25)->get_Name_2();
		V_11 = L_128;
		int32_t L_129 = (&V_25)->get_Offset_0();
		TimeSpan__ctor_m3689759052((TimeSpan_t881159249 *)(&V_9), 0, 0, L_129, /*hidden argument*/NULL);
	}

IL_0361:
	{
		String_t* L_130 = ___id0;
		TimeSpan_t881159249  L_131 = V_9;
		String_t* L_132 = ___id0;
		String_t* L_133 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		TimeZoneInfo_t161405854 * L_134 = TimeZoneInfo_CreateCustomTimeZone_m4187381152(NULL /*static, unused*/, L_130, L_131, L_132, L_133, /*hidden argument*/NULL);
		return L_134;
	}

IL_036d:
	{
		String_t* L_135 = ___id0;
		TimeSpan_t881159249  L_136 = V_9;
		String_t* L_137 = ___id0;
		String_t* L_138 = V_11;
		String_t* L_139 = V_12;
		List_1_t1546524651 * L_140 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		List_1_t1546524651 * L_141 = TimeZoneInfo_ValidateRules_m1341992406(NULL /*static, unused*/, L_140, /*hidden argument*/NULL);
		NullCheck(L_141);
		AdjustmentRuleU5BU5D_t1469475992* L_142 = List_1_ToArray_m3286616822(L_141, /*hidden argument*/List_1_ToArray_m3286616822_RuntimeMethod_var);
		TimeZoneInfo_t161405854 * L_143 = TimeZoneInfo_CreateCustomTimeZone_m3151472709(NULL /*static, unused*/, L_135, L_136, L_137, L_138, L_139, L_142, /*hidden argument*/NULL);
		return L_143;
	}
}
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C" IL2CPP_METHOD_ATTR List_1_t1546524651 * TimeZoneInfo_ValidateRules_m1341992406 (RuntimeObject * __this /* static, unused */, List_1_t1546524651 * ___adjustmentRules0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ValidateRules_m1341992406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AdjustmentRule_t74449909 * V_0 = NULL;
	AdjustmentRule_t74449909 * V_1 = NULL;
	AdjustmentRuleU5BU5D_t1469475992* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (AdjustmentRule_t74449909 *)NULL;
		List_1_t1546524651 * L_0 = ___adjustmentRules0;
		NullCheck(L_0);
		AdjustmentRuleU5BU5D_t1469475992* L_1 = List_1_ToArray_m3286616822(L_0, /*hidden argument*/List_1_ToArray_m3286616822_RuntimeMethod_var);
		V_2 = L_1;
		V_3 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		AdjustmentRuleU5BU5D_t1469475992* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		AdjustmentRule_t74449909 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		AdjustmentRule_t74449909 * L_6 = V_0;
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		AdjustmentRule_t74449909 * L_7 = V_0;
		NullCheck(L_7);
		DateTime_t3738529785  L_8 = AdjustmentRule_get_DateEnd_m3164615624(L_7, /*hidden argument*/NULL);
		AdjustmentRule_t74449909 * L_9 = V_1;
		NullCheck(L_9);
		DateTime_t3738529785  L_10 = AdjustmentRule_get_DateStart_m2176962503(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0038;
		}
	}
	{
		List_1_t1546524651 * L_12 = ___adjustmentRules0;
		AdjustmentRule_t74449909 * L_13 = V_1;
		NullCheck(L_12);
		List_1_Remove_m1862724733(L_12, L_13, /*hidden argument*/List_1_Remove_m1862724733_RuntimeMethod_var);
	}

IL_0038:
	{
		AdjustmentRule_t74449909 * L_14 = V_1;
		V_0 = L_14;
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_16 = V_3;
		AdjustmentRuleU5BU5D_t1469475992* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		List_1_t1546524651 * L_18 = ___adjustmentRules0;
		return L_18;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t736164020 * TimeZoneInfo_ParseAbbreviations_m1471889884 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseAbbreviations_m1471889884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t736164020 * V_0 = NULL;
	int32_t V_1 = 0;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	int32_t V_5 = 0;
	{
		Dictionary_2_t736164020 * L_0 = (Dictionary_2_t736164020 *)il2cpp_codegen_object_new(Dictionary_2_t736164020_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4261191612(L_0, /*hidden argument*/Dictionary_2__ctor_m4261191612_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_1, /*hidden argument*/NULL);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0083;
	}

IL_0015:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_3;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = (((int32_t)((uint16_t)L_6)));
		Il2CppChar L_7 = V_4;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t * L_8 = V_2;
		Il2CppChar L_9 = V_4;
		NullCheck(L_8);
		StringBuilder_Append_m2383614642(L_8, L_9, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0032:
	{
		Dictionary_2_t736164020 * L_10 = V_0;
		int32_t L_11 = V_1;
		StringBuilder_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = StringBuilder_ToString_m3317489284(L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_m1718909353(L_10, L_11, L_13, /*hidden argument*/Dictionary_2_Add_m1718909353_RuntimeMethod_var);
		V_5 = 1;
		goto IL_0068;
	}

IL_0047:
	{
		Dictionary_2_t736164020 * L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_5;
		StringBuilder_t * L_17 = V_2;
		int32_t L_18 = V_5;
		StringBuilder_t * L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m3238060835(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_5;
		NullCheck(L_17);
		String_t* L_22 = StringBuilder_ToString_m774364392(L_17, L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)L_21)), /*hidden argument*/NULL);
		NullCheck(L_14);
		Dictionary_2_Add_m1718909353(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), L_22, /*hidden argument*/Dictionary_2_Add_m1718909353_RuntimeMethod_var);
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0068:
	{
		int32_t L_24 = V_5;
		StringBuilder_t * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = StringBuilder_get_Length_m3238060835(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)L_26)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_27 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		StringBuilder_t * L_28 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_28, /*hidden argument*/NULL);
		V_2 = L_28;
	}

IL_007f:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0083:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = ___count2;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0015;
		}
	}
	{
		Dictionary_2_t736164020 * L_32 = V_0;
		return L_32;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1396226614 * TimeZoneInfo_ParseTimesTypes_m1754682716 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t736164020 * ___abbreviations3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTimesTypes_m1754682716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1396226614 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	{
		int32_t L_0 = ___count2;
		Dictionary_2_t1396226614 * L_1 = (Dictionary_2_t1396226614 *)il2cpp_codegen_object_new(Dictionary_2_t1396226614_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m224509051(L_1, L_0, /*hidden argument*/Dictionary_2__ctor_m224509051_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_4)))), /*hidden argument*/NULL);
		V_2 = L_5;
		ByteU5BU5D_t4116647657* L_6 = ___buffer0;
		int32_t L_7 = ___index1;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_8)))), (int32_t)4));
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		ByteU5BU5D_t4116647657* L_11 = ___buffer0;
		int32_t L_12 = ___index1;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)6, (int32_t)L_13)))), (int32_t)5));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		Dictionary_2_t1396226614 * L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		uint8_t L_19 = V_3;
		Dictionary_2_t736164020 * L_20 = ___abbreviations3;
		uint8_t L_21 = V_4;
		NullCheck(L_20);
		String_t* L_22 = Dictionary_2_get_Item_m823070101(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m823070101_RuntimeMethod_var);
		TimeType_t2507513283  L_23;
		memset(&L_23, 0, sizeof(L_23));
		TimeType__ctor_m1663688892((&L_23), L_18, (bool)((((int32_t)((((int32_t)L_19) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_22, /*hidden argument*/NULL);
		NullCheck(L_16);
		Dictionary_2_Add_m670166897(L_16, L_17, L_23, /*hidden argument*/Dictionary_2_Add_m670166897_RuntimeMethod_var);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_25 = V_1;
		int32_t L_26 = ___count2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_000e;
		}
	}
	{
		Dictionary_2_t1396226614 * L_27 = V_0;
		return L_27;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C" IL2CPP_METHOD_ATTR List_1_t1770412147 * TimeZoneInfo_ParseTransitions_m542357583 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buffer0, int32_t ___index1, int32_t ___count2, Dictionary_2_t1396226614 * ___time_types3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZoneInfo_ParseTransitions_m542357583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1770412147 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	uint8_t V_4 = 0x0;
	{
		int32_t L_0 = ___count2;
		List_1_t1770412147 * L_1 = (List_1_t1770412147 *)il2cpp_codegen_object_new(List_1_t1770412147_il2cpp_TypeInfo_var);
		List_1__ctor_m2598981433(L_1, L_0, /*hidden argument*/List_1__ctor_m2598981433_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0045;
	}

IL_000e:
	{
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = ___index1;
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t161405854_il2cpp_TypeInfo_var);
		int32_t L_5 = TimeZoneInfo_ReadBigEndianInt32_m3367804058(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_4)))), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		DateTime_t3738529785  L_7 = TimeZoneInfo_DateTimeFromUnixTime_m2151402451(NULL /*static, unused*/, (((int64_t)((int64_t)L_6))), /*hidden argument*/NULL);
		V_3 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___buffer0;
		int32_t L_9 = ___index1;
		int32_t L_10 = ___count2;
		int32_t L_11 = V_1;
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_10)))), (int32_t)L_11));
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		List_1_t1770412147 * L_14 = V_0;
		DateTime_t3738529785  L_15 = V_3;
		Dictionary_2_t1396226614 * L_16 = ___time_types3;
		uint8_t L_17 = V_4;
		NullCheck(L_16);
		TimeType_t2507513283  L_18 = Dictionary_2_get_Item_m2315657164(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m2315657164_RuntimeMethod_var);
		KeyValuePair_2_t298337405  L_19;
		memset(&L_19, 0, sizeof(L_19));
		KeyValuePair_2__ctor_m2324111314((&L_19), L_15, L_18, /*hidden argument*/KeyValuePair_2__ctor_m2324111314_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_Add_m1397479321(L_14, L_19, /*hidden argument*/List_1_Add_m1397479321_RuntimeMethod_var);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = ___count2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_000e;
		}
	}
	{
		List_1_t1770412147 * L_23 = V_0;
		return L_23;
	}
}
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TimeZoneInfo_DateTimeFromUnixTime_m2151402451 (RuntimeObject * __this /* static, unused */, int64_t ___unix_time0, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime__ctor_m12900168((DateTime_t3738529785 *)(&V_0), ((int32_t)1970), 1, 1, /*hidden argument*/NULL);
		int64_t L_0 = ___unix_time0;
		DateTime_t3738529785  L_1 = DateTime_AddSeconds_m332574389((DateTime_t3738529785 *)(&V_0), (((double)((double)L_0))), /*hidden argument*/NULL);
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
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m495727949 (AdjustmentRule_t74449909 * __this, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule__ctor_m495727949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateStart0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___dateEnd1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1528915702, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0029:
	{
		TransitionTime_t449921781  L_3 = ___daylightTransitionStart3;
		TransitionTime_t449921781  L_4 = ___daylightTransitionEnd4;
		bool L_5 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral995612621, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0042:
	{
		int64_t L_7 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___dateStart0), /*hidden argument*/NULL);
		if (((int64_t)((int64_t)L_7%(int64_t)((int64_t)864000000000LL))))
		{
			goto IL_006e;
		}
	}
	{
		int64_t L_8 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___dateEnd1), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_8%(int64_t)((int64_t)864000000000LL))))
		{
			goto IL_0079;
		}
	}

IL_006e:
	{
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, _stringLiteral244543716, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0079:
	{
		DateTime_t3738529785  L_10 = ___dateEnd1;
		DateTime_t3738529785  L_11 = ___dateStart0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_12 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0090;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, _stringLiteral263903928, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_0090:
	{
		TimeSpan_t881159249  L_14 = ___daylightDelta2;
		TimeSpan_t881159249  L_15;
		memset(&L_15, 0, sizeof(L_15));
		TimeSpan__ctor_m3689759052((&L_15), ((int32_t)14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_16 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00b8;
		}
	}
	{
		TimeSpan_t881159249  L_17 = ___daylightDelta2;
		TimeSpan_t881159249  L_18;
		memset(&L_18, 0, sizeof(L_18));
		TimeSpan__ctor_m3689759052((&L_18), ((int32_t)-14), 0, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_19 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c3;
		}
	}

IL_00b8:
	{
		ArgumentOutOfRangeException_t777629997 * L_20 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_20, _stringLiteral1844453138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_00c3:
	{
		int64_t L_21 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&___daylightDelta2), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_21%(int64_t)(((int64_t)((int64_t)((int32_t)10000000)))))))
		{
			goto IL_00e1;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_22 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_22, _stringLiteral3638045652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, NULL, AdjustmentRule__ctor_m495727949_RuntimeMethod_var);
	}

IL_00e1:
	{
		DateTime_t3738529785  L_23 = ___dateStart0;
		__this->set_dateStart_1(L_23);
		DateTime_t3738529785  L_24 = ___dateEnd1;
		__this->set_dateEnd_0(L_24);
		TimeSpan_t881159249  L_25 = ___daylightDelta2;
		__this->set_daylightDelta_2(L_25);
		TransitionTime_t449921781  L_26 = ___daylightTransitionStart3;
		__this->set_daylightTransitionStart_4(L_26);
		TransitionTime_t449921781  L_27 = ___daylightTransitionEnd4;
		__this->set_daylightTransitionEnd_3(L_27);
		return;
	}
}
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AdjustmentRule_get_DateEnd_m3164615624 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_dateEnd_0();
		return L_0;
	}
}
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  AdjustmentRule_get_DateStart_m2176962503 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_dateStart_1();
		return L_0;
	}
}
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  AdjustmentRule_get_DaylightDelta_m2159274191 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = __this->get_daylightDelta_2();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionEnd()
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionEnd_m3747881060 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = __this->get_daylightTransitionEnd_3();
		return L_0;
	}
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  AdjustmentRule_get_DaylightTransitionStart_m3488892433 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = __this->get_daylightTransitionStart_4();
		return L_0;
	}
}
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR AdjustmentRule_t74449909 * AdjustmentRule_CreateAdjustmentRule_m1020400594 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___dateStart0, DateTime_t3738529785  ___dateEnd1, TimeSpan_t881159249  ___daylightDelta2, TransitionTime_t449921781  ___daylightTransitionStart3, TransitionTime_t449921781  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_CreateAdjustmentRule_m1020400594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___dateStart0;
		DateTime_t3738529785  L_1 = ___dateEnd1;
		TimeSpan_t881159249  L_2 = ___daylightDelta2;
		TransitionTime_t449921781  L_3 = ___daylightTransitionStart3;
		TransitionTime_t449921781  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_t74449909 * L_5 = (AdjustmentRule_t74449909 *)il2cpp_codegen_object_new(AdjustmentRule_t74449909_il2cpp_TypeInfo_var);
		AdjustmentRule__ctor_m495727949(L_5, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C" IL2CPP_METHOD_ATTR bool AdjustmentRule_Equals_m4095462908 (AdjustmentRule_t74449909 * __this, AdjustmentRule_t74449909 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_Equals_m4095462908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		DateTime_t3738529785  L_0 = __this->get_dateStart_1();
		AdjustmentRule_t74449909 * L_1 = ___other0;
		NullCheck(L_1);
		DateTime_t3738529785  L_2 = L_1->get_dateStart_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_3 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_006b;
		}
	}
	{
		DateTime_t3738529785  L_4 = __this->get_dateEnd_0();
		AdjustmentRule_t74449909 * L_5 = ___other0;
		NullCheck(L_5);
		DateTime_t3738529785  L_6 = L_5->get_dateEnd_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_7 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		TimeSpan_t881159249  L_8 = __this->get_daylightDelta_2();
		AdjustmentRule_t74449909 * L_9 = ___other0;
		NullCheck(L_9);
		TimeSpan_t881159249  L_10 = L_9->get_daylightDelta_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_11 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		TransitionTime_t449921781  L_12 = __this->get_daylightTransitionStart_4();
		AdjustmentRule_t74449909 * L_13 = ___other0;
		NullCheck(L_13);
		TransitionTime_t449921781  L_14 = L_13->get_daylightTransitionStart_4();
		bool L_15 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		TransitionTime_t449921781  L_16 = __this->get_daylightTransitionEnd_3();
		AdjustmentRule_t74449909 * L_17 = ___other0;
		NullCheck(L_17);
		TransitionTime_t449921781  L_18 = L_17->get_daylightTransitionEnd_3();
		bool L_19 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_19));
		goto IL_006c;
	}

IL_006b:
	{
		G_B6_0 = 0;
	}

IL_006c:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t AdjustmentRule_GetHashCode_m3136432906 (AdjustmentRule_t74449909 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785 * L_0 = __this->get_address_of_dateStart_1();
		int32_t L_1 = DateTime_GetHashCode_m2261847002((DateTime_t3738529785 *)L_0, /*hidden argument*/NULL);
		DateTime_t3738529785 * L_2 = __this->get_address_of_dateEnd_0();
		int32_t L_3 = DateTime_GetHashCode_m2261847002((DateTime_t3738529785 *)L_2, /*hidden argument*/NULL);
		TimeSpan_t881159249 * L_4 = __this->get_address_of_daylightDelta_2();
		int32_t L_5 = TimeSpan_GetHashCode_m1939414618((TimeSpan_t881159249 *)L_4, /*hidden argument*/NULL);
		TransitionTime_t449921781 * L_6 = __this->get_address_of_daylightTransitionStart_4();
		int32_t L_7 = TransitionTime_GetHashCode_m2153693963((TransitionTime_t449921781 *)L_6, /*hidden argument*/NULL);
		TransitionTime_t449921781 * L_8 = __this->get_address_of_daylightTransitionEnd_3();
		int32_t L_9 = TransitionTime_GetHashCode_m2153693963((TransitionTime_t449921781 *)L_8, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7))^(int32_t)L_9));
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void AdjustmentRule_GetObjectData_m2214958557 (AdjustmentRule_t74449909 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_GetObjectData_m2214958557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, AdjustmentRule_GetObjectData_m2214958557_RuntimeMethod_var);
	}
}
// System.Void System.TimeZoneInfo/AdjustmentRule::OnDeserialization(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AdjustmentRule_OnDeserialization_m2703381884 (AdjustmentRule_t74449909 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_OnDeserialization_m2703381884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, AdjustmentRule_OnDeserialization_m2703381884_RuntimeMethod_var);
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
// Conversion methods for marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_pinvoke(const TimeType_t2507513283& unmarshaled, TimeType_t2507513283_marshaled_pinvoke& marshaled)
{
	marshaled.___Offset_0 = unmarshaled.get_Offset_0();
	marshaled.___IsDst_1 = static_cast<int32_t>(unmarshaled.get_IsDst_1());
	marshaled.___Name_2 = il2cpp_codegen_marshal_string(unmarshaled.get_Name_2());
}
extern "C" void TimeType_t2507513283_marshal_pinvoke_back(const TimeType_t2507513283_marshaled_pinvoke& marshaled, TimeType_t2507513283& unmarshaled)
{
	int32_t unmarshaled_Offset_temp_0 = 0;
	unmarshaled_Offset_temp_0 = marshaled.___Offset_0;
	unmarshaled.set_Offset_0(unmarshaled_Offset_temp_0);
	bool unmarshaled_IsDst_temp_1 = false;
	unmarshaled_IsDst_temp_1 = static_cast<bool>(marshaled.___IsDst_1);
	unmarshaled.set_IsDst_1(unmarshaled_IsDst_temp_1);
	unmarshaled.set_Name_2(il2cpp_codegen_marshal_string_result(marshaled.___Name_2));
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_pinvoke_cleanup(TimeType_t2507513283_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_com(const TimeType_t2507513283& unmarshaled, TimeType_t2507513283_marshaled_com& marshaled)
{
	marshaled.___Offset_0 = unmarshaled.get_Offset_0();
	marshaled.___IsDst_1 = static_cast<int32_t>(unmarshaled.get_IsDst_1());
	marshaled.___Name_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Name_2());
}
extern "C" void TimeType_t2507513283_marshal_com_back(const TimeType_t2507513283_marshaled_com& marshaled, TimeType_t2507513283& unmarshaled)
{
	int32_t unmarshaled_Offset_temp_0 = 0;
	unmarshaled_Offset_temp_0 = marshaled.___Offset_0;
	unmarshaled.set_Offset_0(unmarshaled_Offset_temp_0);
	bool unmarshaled_IsDst_temp_1 = false;
	unmarshaled_IsDst_temp_1 = static_cast<bool>(marshaled.___IsDst_1);
	unmarshaled.set_IsDst_1(unmarshaled_IsDst_temp_1);
	unmarshaled.set_Name_2(il2cpp_codegen_marshal_bstring_result(marshaled.___Name_2));
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TimeType
extern "C" void TimeType_t2507513283_marshal_com_cleanup(TimeType_t2507513283_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_2);
	marshaled.___Name_2 = NULL;
}
// System.Void System.TimeZoneInfo/TimeType::.ctor(System.Int32,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void TimeType__ctor_m1663688892 (TimeType_t2507513283 * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___offset0;
		__this->set_Offset_0(L_0);
		bool L_1 = ___is_dst1;
		__this->set_IsDst_1(L_1);
		String_t* L_2 = ___abbrev2;
		__this->set_Name_2(L_2);
		return;
	}
}
extern "C"  void TimeType__ctor_m1663688892_AdjustorThunk (RuntimeObject * __this, int32_t ___offset0, bool ___is_dst1, String_t* ___abbrev2, const RuntimeMethod* method)
{
	TimeType_t2507513283 * _thisAdjusted = reinterpret_cast<TimeType_t2507513283 *>(__this + 1);
	TimeType__ctor_m1663688892(_thisAdjusted, ___offset0, ___is_dst1, ___abbrev2, method);
}
// System.String System.TimeZoneInfo/TimeType::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TimeType_ToString_m3568850299 (TimeType_t2507513283 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeType_ToString_m3568850299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2457238620);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2457238620);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		int32_t L_3 = __this->get_Offset_0();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral4248262063);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral4248262063);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		bool L_8 = __this->get_IsDst_1();
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral2992454296);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2992454296);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = __this->get_Name_2();
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* TimeType_ToString_m3568850299_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TimeType_t2507513283 * _thisAdjusted = reinterpret_cast<TimeType_t2507513283 *>(__this + 1);
	return TimeType_ToString_m3568850299(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_pinvoke(const TransitionTime_t449921781& unmarshaled, TransitionTime_t449921781_marshaled_pinvoke& marshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception, NULL, NULL);
}
extern "C" void TransitionTime_t449921781_marshal_pinvoke_back(const TransitionTime_t449921781_marshaled_pinvoke& marshaled, TransitionTime_t449921781& unmarshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_pinvoke_cleanup(TransitionTime_t449921781_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_com(const TransitionTime_t449921781& unmarshaled, TransitionTime_t449921781_marshaled_com& marshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception, NULL, NULL);
}
extern "C" void TransitionTime_t449921781_marshal_com_back(const TransitionTime_t449921781_marshaled_com& marshaled, TransitionTime_t449921781& unmarshaled)
{
	Exception_t* ___timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___timeOfDay_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
extern "C" void TransitionTime_t449921781_marshal_com_cleanup(TransitionTime_t449921781_marshaled_com& marshaled)
{
}
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime__ctor_m1012552555 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime__ctor_m1012552555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		TransitionTime__ctor_m1241469383((TransitionTime_t449921781 *)__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___day2;
		if ((((int32_t)L_2) < ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = ___day2;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0022;
		}
	}

IL_0017:
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral1894924580, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TransitionTime__ctor_m1012552555_RuntimeMethod_var);
	}

IL_0022:
	{
		int32_t L_5 = ___day2;
		__this->set_day_2(L_5);
		__this->set_isFixedDateRule_5((bool)1);
		return;
	}
}
extern "C"  void TransitionTime__ctor_m1012552555_AdjustorThunk (RuntimeObject * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime__ctor_m1012552555(_thisAdjusted, ___timeOfDay0, ___month1, ___day2, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime__ctor_m1241469383 (TransitionTime_t449921781 * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime__ctor_m1241469383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1 = DateTime_get_Month_m1566006993((DateTime_t3738529785 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = DateTime_get_Day_m1623500273((DateTime_t3738529785 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}

IL_0027:
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral1771851981, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0032:
	{
		int32_t L_4 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t132251570 * L_5 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_5, _stringLiteral2376781826, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0049:
	{
		int64_t L_6 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_6%(int64_t)(((int64_t)((int64_t)((int32_t)10000)))))))
		{
			goto IL_0067;
		}
	}
	{
		ArgumentException_t132251570 * L_7 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_7, _stringLiteral576230762, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0067:
	{
		int32_t L_8 = ___month1;
		if ((((int32_t)L_8) < ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_9 = ___month1;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0081;
		}
	}

IL_0076:
	{
		ArgumentOutOfRangeException_t777629997 * L_10 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_10, _stringLiteral3427887931, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, TransitionTime__ctor_m1241469383_RuntimeMethod_var);
	}

IL_0081:
	{
		DateTime_t3738529785  L_11 = ___timeOfDay0;
		__this->set_timeOfDay_0(L_11);
		int32_t L_12 = ___month1;
		__this->set_month_1(L_12);
		__this->set_week_3((-1));
		__this->set_dayOfWeek_4((-1));
		__this->set_day_2((-1));
		__this->set_isFixedDateRule_5((bool)0);
		return;
	}
}
extern "C"  void TransitionTime__ctor_m1241469383_AdjustorThunk (RuntimeObject * __this, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime__ctor_m1241469383(_thisAdjusted, ___timeOfDay0, ___month1, method);
}
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = __this->get_timeOfDay_0();
		return L_0;
	}
}
extern "C"  DateTime_t3738529785  TransitionTime_get_TimeOfDay_m2066448705_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_TimeOfDay_m2066448705(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1950274531 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_month_1();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Month_m1950274531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Month_m1950274531(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_m1297598877 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_day_2();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Day_m1297598877_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Day_m1297598877(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m3334751603 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_week_3();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_Week_m3334751603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_Week_m3334751603(_thisAdjusted, method);
}
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_m3191031940 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dayOfWeek_4();
		return L_0;
	}
}
extern "C"  int32_t TransitionTime_get_DayOfWeek_m3191031940_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_DayOfWeek_m3191031940(_thisAdjusted, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m1557984015 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isFixedDateRule_5();
		return L_0;
	}
}
extern "C"  bool TransitionTime_get_IsFixedDateRule_m1557984015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_get_IsFixedDateRule_m1557984015(_thisAdjusted, method);
}
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TransitionTime_t449921781  TransitionTime_CreateFixedDateRule_m488639024 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___day2;
		TransitionTime_t449921781  L_3;
		memset(&L_3, 0, sizeof(L_3));
		TransitionTime__ctor_m1012552555((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime_GetObjectData_m565919319 (TransitionTime_t449921781 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_GetObjectData_m565919319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, TransitionTime_GetObjectData_m565919319_RuntimeMethod_var);
	}
}
extern "C"  void TransitionTime_GetObjectData_m565919319_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime_GetObjectData_m565919319(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m2918964558 (TransitionTime_t449921781 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_Equals_m2918964558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransitionTime_t449921781_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, (*(TransitionTime_t449921781 *)__this), ((*(TransitionTime_t449921781 *)((TransitionTime_t449921781 *)UnBox(L_1, TransitionTime_t449921781_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_001d:
	{
		return (bool)0;
	}
}
extern "C"  bool TransitionTime_Equals_m2918964558_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_Equals_m2918964558(_thisAdjusted, ___other0, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m2330892423 (TransitionTime_t449921781 * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = ___other0;
		bool L_1 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, (*(TransitionTime_t449921781 *)__this), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  bool TransitionTime_Equals_m2330892423_AdjustorThunk (RuntimeObject * __this, TransitionTime_t449921781  ___other0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_Equals_m2330892423(_thisAdjusted, ___other0, method);
}
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m2153693963 (TransitionTime_t449921781 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_day_2();
		int32_t L_1 = __this->get_dayOfWeek_4();
		int32_t L_2 = __this->get_month_1();
		DateTime_t3738529785 * L_3 = __this->get_address_of_timeOfDay_0();
		int64_t L_4 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_week_3();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2))^(int32_t)(((int32_t)((int32_t)L_4)))))^(int32_t)L_5));
	}
}
extern "C"  int32_t TransitionTime_GetHashCode_m2153693963_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	return TransitionTime_GetHashCode_m2153693963(_thisAdjusted, method);
}
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C" IL2CPP_METHOD_ATTR void TransitionTime_OnDeserialization_m482900757 (TransitionTime_t449921781 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_OnDeserialization_m482900757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, TransitionTime_OnDeserialization_m482900757_RuntimeMethod_var);
	}
}
extern "C"  void TransitionTime_OnDeserialization_m482900757_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	TransitionTime_t449921781 * _thisAdjusted = reinterpret_cast<TransitionTime_t449921781 *>(__this + 1);
	TransitionTime_OnDeserialization_m482900757(_thisAdjusted, ___sender0, method);
}
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_op_Equality_m844747352 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_op_Equality_m844747352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = (&___t10)->get_day_2();
		int32_t L_1 = (&___t21)->get_day_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_2 = (&___t10)->get_dayOfWeek_4();
		int32_t L_3 = (&___t21)->get_dayOfWeek_4();
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0076;
		}
	}
	{
		bool L_4 = (&___t10)->get_isFixedDateRule_5();
		bool L_5 = (&___t21)->get_isFixedDateRule_5();
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_6 = (&___t10)->get_month_1();
		int32_t L_7 = (&___t21)->get_month_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0076;
		}
	}
	{
		DateTime_t3738529785  L_8 = (&___t10)->get_timeOfDay_0();
		DateTime_t3738529785  L_9 = (&___t21)->get_timeOfDay_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_10 = DateTime_op_Equality_m1022058599(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_11 = (&___t10)->get_week_3();
		int32_t L_12 = (&___t21)->get_week_3();
		G_B7_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		return (bool)G_B7_0;
	}
}
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" IL2CPP_METHOD_ATTR bool TransitionTime_op_Inequality_m1903374519 (RuntimeObject * __this /* static, unused */, TransitionTime_t449921781  ___t10, TransitionTime_t449921781  ___t21, const RuntimeMethod* method)
{
	{
		TransitionTime_t449921781  L_0 = ___t10;
		TransitionTime_t449921781  L_1 = ___t21;
		bool L_2 = TransitionTime_op_Equality_m844747352(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
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
// System.Void System.TimeZoneNotFoundException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TimeZoneNotFoundException__ctor_m2966108609 (TimeZoneNotFoundException_t171073523 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZoneNotFoundException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void TimeZoneNotFoundException__ctor_m3351866141 (TimeZoneNotFoundException_t171073523 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___sc1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___sc1;
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
