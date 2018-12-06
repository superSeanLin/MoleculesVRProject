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
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Action`1<System.Int32>
struct Action_1_t3123413348;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_t4177122770;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int64,System.Collections.DictionaryEntry>
struct Transform_1_t1409584541;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t132201056;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken,System.Collections.DictionaryEntry>
struct Transform_1_t73727401;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t789006292;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t3521823603;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t1966579963;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t3502080855;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.Types.NetworkID>
struct IEqualityComparer_1_t2028950343;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t2949616159;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t3017264731;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t4078445860;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t3363058862;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t1351088715;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t1004336143;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t32447842;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>
struct List_1_t2090095927;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>
struct List_1_t343529635;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t2346872663;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Enum
struct Enum_t4135868527;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.SocketAddress
struct SocketAddress_t3739769427;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t4071955934;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t2082808316;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_t1890984120;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_t3224530281;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t4173981269;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t1246935692;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_t3548107960;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t1375549810;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t833512557;
// UnityEngine.Networking.GlobalConfigInternal
struct GlobalConfigInternal_t1872710257;
// UnityEngine.Networking.HostTopology
struct HostTopology_t4059263395;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t761087795;
// UnityEngine.Networking.Match.BasicResponse
struct BasicResponse_t1476713923;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t2600446299;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t1328247360;
// UnityEngine.Networking.Match.DestroyMatchRequest
struct DestroyMatchRequest_t2124150613;
// UnityEngine.Networking.Match.DropConnectionRequest
struct DropConnectionRequest_t2647317937;
// UnityEngine.Networking.Match.DropConnectionResponse
struct DropConnectionResponse_t3571632289;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t3991767598;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t845270609;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t1588429355;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t3200990838;
// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t3827228697;
// UnityEngine.Networking.Match.MatchDesc[]
struct MatchDescU5BU5D_t1151567716;
// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct MatchDirectConnectInfo_t2855340396;
// UnityEngine.Networking.Match.MatchDirectConnectInfo[]
struct MatchDirectConnectInfoU5BU5D_t2741069669;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t221301733;
// UnityEngine.Networking.Match.MatchInfoSnapshot
struct MatchInfoSnapshot_t3166422189;
// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot
struct MatchInfoDirectConnectSnapshot_t618021185;
// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot[]
struct MatchInfoDirectConnectSnapshotU5BU5D_t3993957532;
// UnityEngine.Networking.Match.MatchInfoSnapshot[]
struct MatchInfoSnapshotU5BU5D_t1141422592;
// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t2930480025;
// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct BasicResponseDelegate_t2196726690;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>
struct DataResponseDelegate_1_t309155718;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>
struct DataResponseDelegate_1_t3045732247;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>
struct DataResponseDelegate_1_t186927816;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>
struct InternalResponseDelegate_2_t3324166758;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct InternalResponseDelegate_2_t753237801;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct InternalResponseDelegate_2_t992249662;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct InternalResponseDelegate_2_t304736019;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct InternalResponseDelegate_2_t3313634249;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>
struct InternalResponseDelegate_2_t873951790;
// UnityEngine.Networking.Match.Request
struct Request_t2696089890;
// UnityEngine.Networking.Match.Response
struct Response_t2513603462;
// UnityEngine.Networking.Match.SetMatchAttributesRequest
struct SetMatchAttributesRequest_t2732203151;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t320639760;
// UnityEngine.Networking.Types.NetworkAccessToken[]
struct NetworkAccessTokenU5BU5D_t3424775857;
// UnityEngine.Networking.Types.NetworkID[]
struct NetworkIDU5BU5D_t383006840;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelQOS_t1890984120_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionConfig_t4173981269_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* CreateMatchRequest_t2600446299_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DestroyMatchRequest_t2124150613_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3502080855_il2cpp_TypeInfo_var;
extern RuntimeClass* DropConnectionRequest_t2647317937_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GlobalConfigInternal_t1872710257_il2cpp_TypeInfo_var;
extern RuntimeClass* HostPriority_t1616615738_il2cpp_TypeInfo_var;
extern RuntimeClass* HostTopologyInternal_t761087795_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3962448610_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t304736019_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t3313634249_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t873951790_il2cpp_TypeInfo_var;
extern RuntimeClass* InternalResponseDelegate_2_t992249662_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* JoinMatchRequest_t3991767598_il2cpp_TypeInfo_var;
extern RuntimeClass* ListMatchRequest_t1588429355_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1004336143_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1351088715_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2090095927_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3363058862_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t343529635_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4078445860_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* MatchInfoDirectConnectSnapshot_t618021185_il2cpp_TypeInfo_var;
extern RuntimeClass* MatchInfoSnapshot_t3166422189_il2cpp_TypeInfo_var;
extern RuntimeClass* MatchInfo_t221301733_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkAccessToken_t320639760_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkID_t4216585621_il2cpp_TypeInfo_var;
extern RuntimeClass* NodeID_t2347816311_il2cpp_TypeInfo_var;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* QosType_t3566496866_il2cpp_TypeInfo_var;
extern RuntimeClass* Request_t2696089890_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SetMatchAttributesRequest_t2732203151_il2cpp_TypeInfo_var;
extern RuntimeClass* SourceID_t1070216020_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TcpClient_t822906377_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Utility_t2761513741_il2cpp_TypeInfo_var;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255368____U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0_FieldInfo_var;
extern String_t* _stringLiteral1068878819;
extern String_t* _stringLiteral1112616250;
extern String_t* _stringLiteral1118566603;
extern String_t* _stringLiteral115901148;
extern String_t* _stringLiteral1165821571;
extern String_t* _stringLiteral1201550598;
extern String_t* _stringLiteral1276777634;
extern String_t* _stringLiteral1423808650;
extern String_t* _stringLiteral1437324351;
extern String_t* _stringLiteral1439649509;
extern String_t* _stringLiteral1442255268;
extern String_t* _stringLiteral1496010082;
extern String_t* _stringLiteral1509869451;
extern String_t* _stringLiteral1563464412;
extern String_t* _stringLiteral1575624523;
extern String_t* _stringLiteral1599216296;
extern String_t* _stringLiteral1614969392;
extern String_t* _stringLiteral1656358094;
extern String_t* _stringLiteral1686739920;
extern String_t* _stringLiteral1693422942;
extern String_t* _stringLiteral1735740363;
extern String_t* _stringLiteral1785386256;
extern String_t* _stringLiteral1819605569;
extern String_t* _stringLiteral1848928535;
extern String_t* _stringLiteral1862178633;
extern String_t* _stringLiteral1875478138;
extern String_t* _stringLiteral1901731153;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral1940688276;
extern String_t* _stringLiteral1946891126;
extern String_t* _stringLiteral1982104739;
extern String_t* _stringLiteral1982503484;
extern String_t* _stringLiteral1996371512;
extern String_t* _stringLiteral200980691;
extern String_t* _stringLiteral2027780650;
extern String_t* _stringLiteral2091236560;
extern String_t* _stringLiteral2098382620;
extern String_t* _stringLiteral2101124098;
extern String_t* _stringLiteral2172406980;
extern String_t* _stringLiteral2193882181;
extern String_t* _stringLiteral2227996048;
extern String_t* _stringLiteral2280338569;
extern String_t* _stringLiteral2337841988;
extern String_t* _stringLiteral2350028096;
extern String_t* _stringLiteral2373792937;
extern String_t* _stringLiteral2386490997;
extern String_t* _stringLiteral2417585805;
extern String_t* _stringLiteral2447759174;
extern String_t* _stringLiteral2471453923;
extern String_t* _stringLiteral2633051098;
extern String_t* _stringLiteral2696477506;
extern String_t* _stringLiteral2782796864;
extern String_t* _stringLiteral2828656510;
extern String_t* _stringLiteral2864547800;
extern String_t* _stringLiteral2869834625;
extern String_t* _stringLiteral2910973284;
extern String_t* _stringLiteral2968508303;
extern String_t* _stringLiteral3077925917;
extern String_t* _stringLiteral3080010154;
extern String_t* _stringLiteral3097465497;
extern String_t* _stringLiteral3151169944;
extern String_t* _stringLiteral3201718495;
extern String_t* _stringLiteral3288140609;
extern String_t* _stringLiteral332042649;
extern String_t* _stringLiteral333156630;
extern String_t* _stringLiteral3347455858;
extern String_t* _stringLiteral335420074;
extern String_t* _stringLiteral3452614648;
extern String_t* _stringLiteral3456874466;
extern String_t* _stringLiteral3498400675;
extern String_t* _stringLiteral3546950769;
extern String_t* _stringLiteral3552369471;
extern String_t* _stringLiteral3563946363;
extern String_t* _stringLiteral367361492;
extern String_t* _stringLiteral3675259609;
extern String_t* _stringLiteral3778735433;
extern String_t* _stringLiteral3793802062;
extern String_t* _stringLiteral3929789730;
extern String_t* _stringLiteral4005163414;
extern String_t* _stringLiteral4024629234;
extern String_t* _stringLiteral4039479833;
extern String_t* _stringLiteral4049040645;
extern String_t* _stringLiteral4063764210;
extern String_t* _stringLiteral414500564;
extern String_t* _stringLiteral4184904804;
extern String_t* _stringLiteral4292784458;
extern String_t* _stringLiteral556072317;
extern String_t* _stringLiteral584173395;
extern String_t* _stringLiteral597048638;
extern String_t* _stringLiteral613830633;
extern String_t* _stringLiteral615785339;
extern String_t* _stringLiteral62725243;
extern String_t* _stringLiteral727852980;
extern String_t* _stringLiteral753200322;
extern String_t* _stringLiteral780008887;
extern String_t* _stringLiteral782611174;
extern String_t* _stringLiteral793118085;
extern String_t* _stringLiteral875319902;
extern String_t* _stringLiteral93058573;
extern String_t* _stringLiteral961964331;
extern String_t* _stringLiteral965208087;
extern String_t* _stringLiteral975573261;
extern String_t* _stringLiteral984512269;
extern const RuntimeMethod* ChannelQOS__ctor_m3213155130_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_GetChannel_m2188161631_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_GetSharedOrderChannels_m1826991094_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_Validate_m2712188470_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig__ctor_m2640243122_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_set_MinUpdateTimeout_m3638055834_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_RuntimeMethod_var;
extern const RuntimeMethod* DataResponseDelegate_1_Invoke_m2625328205_RuntimeMethod_var;
extern const RuntimeMethod* DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3785116836_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3634856078_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m1903597580_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1533749912_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2501111586_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1082800239_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m187286838_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2278141307_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2814761745_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3004041484_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3020357317_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m332103838_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m349679386_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m491916196_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m957156581_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1671013569_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1808369071_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2439261711_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2463612473_RuntimeMethod_var;
extern const RuntimeMethod* GlobalConfigInternal__ctor_m15594627_RuntimeMethod_var;
extern const RuntimeMethod* GlobalConfig_set_ThreadAwakeTimeout_m4006727376_RuntimeMethod_var;
extern const RuntimeMethod* HostTopology_GetSpecialConnectionConfig_m1011380843_RuntimeMethod_var;
extern const RuntimeMethod* HostTopology__ctor_m284550224_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m1006820792_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m2438927016_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m3308930013_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m4032249314_RuntimeMethod_var;
extern const RuntimeMethod* InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1960376679_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2366351136_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m423166763_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m548998622_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_m3149855852_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1327152933_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m2476053975_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3706392678_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4246513235_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2320846806_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2649410098_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4168264895_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m441991155_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m607530126_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m818466152_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1160238088_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m119633916_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1422624963_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1480908111_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3550276212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1179646797_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2000198085_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m977601184_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_OnDropConnection_m1639108205_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_OnMatchDestroyed_m221375483_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_OnMatchJoined_m4206427941_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_OnMatchList_m2129293200_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_OnSetMatchAttributes_m3218031621_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490_RuntimeMethod_var;
extern const RuntimeMethod* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_AddHostWithSimulator_m2523855845_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_AddHost_m236682671_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_AddWebsocketHost_m3508994088_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_Send_m1813092975_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_StartBroadcastDiscovery_m3499887629_RuntimeMethod_var;
extern const RuntimeType* QosType_t3566496866_0_0_0_var;
extern const uint32_t BasicResponseDelegate_BeginInvoke_m1586966129_MetadataUsageId;
extern const uint32_t ChannelQOS__ctor_m3213155130_MetadataUsageId;
extern const uint32_t ConnectionConfigInternal__ctor_m151495501_MetadataUsageId;
extern const uint32_t ConnectionConfig_AddChannel_m2791320185_MetadataUsageId;
extern const uint32_t ConnectionConfig_GetChannel_m2188161631_MetadataUsageId;
extern const uint32_t ConnectionConfig_GetSharedOrderChannels_m1826991094_MetadataUsageId;
extern const uint32_t ConnectionConfig_Validate_m2712188470_MetadataUsageId;
extern const uint32_t ConnectionConfig__ctor_m2640243122_MetadataUsageId;
extern const uint32_t ConnectionConfig__ctor_m3078028383_MetadataUsageId;
extern const uint32_t ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId;
extern const uint32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233_MetadataUsageId;
extern const uint32_t ConnectionConfig_set_MinUpdateTimeout_m3638055834_MetadataUsageId;
extern const uint32_t ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_MetadataUsageId;
extern const uint32_t CreateMatchRequest_ToString_m24174952_MetadataUsageId;
extern const uint32_t CreateMatchRequest__ctor_m1120211933_MetadataUsageId;
extern const uint32_t CreateMatchResponse_ToString_m2170760668_MetadataUsageId;
extern const uint32_t DestroyMatchRequest_ToString_m3014217280_MetadataUsageId;
extern const uint32_t DestroyMatchRequest__ctor_m327028137_MetadataUsageId;
extern const uint32_t DropConnectionRequest_ToString_m973853606_MetadataUsageId;
extern const uint32_t DropConnectionRequest__ctor_m2312219607_MetadataUsageId;
extern const uint32_t DropConnectionResponse_ToString_m463686848_MetadataUsageId;
extern const uint32_t GlobalConfigInternal__ctor_m15594627_MetadataUsageId;
extern const uint32_t GlobalConfig_set_ThreadAwakeTimeout_m4006727376_MetadataUsageId;
extern const uint32_t HostTopologyInternal__ctor_m1686371270_MetadataUsageId;
extern const uint32_t HostTopology_GetSpecialConnectionConfig_m1011380843_MetadataUsageId;
extern const uint32_t HostTopology__ctor_m1320382600_MetadataUsageId;
extern const uint32_t HostTopology__ctor_m284550224_MetadataUsageId;
extern const uint32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456_MetadataUsageId;
extern const uint32_t JoinMatchRequest_ToString_m1421470052_MetadataUsageId;
extern const uint32_t JoinMatchRequest__ctor_m929255344_MetadataUsageId;
extern const uint32_t JoinMatchResponse_ToString_m3412211677_MetadataUsageId;
extern const uint32_t ListMatchRequest_ToString_m1671513149_MetadataUsageId;
extern const uint32_t ListMatchRequest__ctor_m189544352_MetadataUsageId;
extern const uint32_t ListMatchResponse_ToString_m3673418885_MetadataUsageId;
extern const uint32_t ListMatchResponse__ctor_m1031598034_MetadataUsageId;
extern const uint32_t MatchDesc_ToString_m354754803_MetadataUsageId;
extern const uint32_t MatchDirectConnectInfo_ToString_m3550485463_MetadataUsageId;
extern const uint32_t MatchInfoSnapshot__ctor_m3116124190_MetadataUsageId;
extern const uint32_t MatchInfo_ToString_m1494942688_MetadataUsageId;
extern const uint32_t MatchInfo__ctor_m1026163455_MetadataUsageId;
extern const uint32_t MatchInfo__ctor_m1464312026_MetadataUsageId;
extern const uint32_t NetworkAccessToken_GetByteString_m3125030115_MetadataUsageId;
extern const uint32_t NetworkAccessToken__ctor_m1548906336_MetadataUsageId;
extern const uint32_t NetworkAccessToken__ctor_m969521192_MetadataUsageId;
extern const uint32_t NetworkMatch_CreateMatch_m3079176019_MetadataUsageId;
extern const uint32_t NetworkMatch_CreateMatch_m3201661599_MetadataUsageId;
extern const uint32_t NetworkMatch_DestroyMatch_m4220430763_MetadataUsageId;
extern const uint32_t NetworkMatch_DestroyMatch_m851204137_MetadataUsageId;
extern const uint32_t NetworkMatch_DropConnection_m3349273159_MetadataUsageId;
extern const uint32_t NetworkMatch_DropConnection_m496130429_MetadataUsageId;
extern const uint32_t NetworkMatch_JoinMatch_m2200257013_MetadataUsageId;
extern const uint32_t NetworkMatch_JoinMatch_m3017753518_MetadataUsageId;
extern const uint32_t NetworkMatch_ListMatches_m3965275728_MetadataUsageId;
extern const uint32_t NetworkMatch_ListMatches_m628187040_MetadataUsageId;
extern const uint32_t NetworkMatch_OnMatchCreate_m1430680992_MetadataUsageId;
extern const uint32_t NetworkMatch_OnMatchJoined_m4206427941_MetadataUsageId;
extern const uint32_t NetworkMatch_OnMatchList_m2129293200_MetadataUsageId;
extern const uint32_t NetworkMatch_SetMatchAttributes_m2296300825_MetadataUsageId;
extern const uint32_t NetworkMatch_SetMatchAttributes_m3627579880_MetadataUsageId;
extern const uint32_t NetworkMatch__ctor_m3727241709_MetadataUsageId;
extern const uint32_t NetworkTransport_AddHostWithSimulator_m2523855845_MetadataUsageId;
extern const uint32_t NetworkTransport_AddHost_m236682671_MetadataUsageId;
extern const uint32_t NetworkTransport_AddWebsocketHost_m3508994088_MetadataUsageId;
extern const uint32_t NetworkTransport_CheckTopology_m750760940_MetadataUsageId;
extern const uint32_t NetworkTransport_ConnectEndPoint_m743044074_MetadataUsageId;
extern const uint32_t NetworkTransport_DoesEndPointUsePlatformProtocols_m748072121_MetadataUsageId;
extern const uint32_t NetworkTransport_Init_m1021203550_MetadataUsageId;
extern const uint32_t NetworkTransport_IsPortOpen_m2487963042_MetadataUsageId;
extern const uint32_t NetworkTransport_Send_m1813092975_MetadataUsageId;
extern const uint32_t NetworkTransport_StartBroadcastDiscovery_m3499887629_MetadataUsageId;
extern const uint32_t Request_ToString_m2900465251_MetadataUsageId;
extern const uint32_t Request__cctor_m3097775336_MetadataUsageId;
extern const uint32_t Response_SetFailure_m37322024_MetadataUsageId;
extern const uint32_t Response_ToString_m2727218217_MetadataUsageId;
extern const uint32_t SetMatchAttributesRequest_ToString_m3394706279_MetadataUsageId;
extern const uint32_t SetMatchAttributesRequest__ctor_m1899046165_MetadataUsageId;
extern const uint32_t Utility_GetAccessTokenForNetwork_m3460910439_MetadataUsageId;
extern const uint32_t Utility_SetAccessTokenForNetwork_m483792653_MetadataUsageId;
extern const uint32_t Utility__cctor_m3381620260_MetadataUsageId;
struct CertificateHandler_t2739891000_marshaled_com;
struct DownloadHandler_t2937767557_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745551_H
#define U3CMODULEU3E_T692745551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745551 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745551_H
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
#ifndef DICTIONARY_2_T3521823603_H
#define DICTIONARY_2_T3521823603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct  Dictionary_2_t3521823603  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int64U5BU5D_t2559172825* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___valueSlots_7)); }
	inline Int64U5BU5D_t2559172825* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int64U5BU5D_t2559172825** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int64U5BU5D_t2559172825* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3521823603_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1409584541 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3521823603_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1409584541 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1409584541 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1409584541 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3521823603_H
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1632706988_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t132201056 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t132201056 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t132201056 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t132201056 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef DICTIONARY_2_T3502080855_H
#define DICTIONARY_2_T3502080855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct  Dictionary_2_t3502080855  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	NetworkIDU5BU5D_t383006840* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	NetworkAccessTokenU5BU5D_t3424775857* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___keySlots_6)); }
	inline NetworkIDU5BU5D_t383006840* get_keySlots_6() const { return ___keySlots_6; }
	inline NetworkIDU5BU5D_t383006840** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(NetworkIDU5BU5D_t383006840* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___valueSlots_7)); }
	inline NetworkAccessTokenU5BU5D_t3424775857* get_valueSlots_7() const { return ___valueSlots_7; }
	inline NetworkAccessTokenU5BU5D_t3424775857** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(NetworkAccessTokenU5BU5D_t3424775857* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3502080855_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t73727401 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3502080855_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t73727401 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t73727401 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t73727401 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3502080855_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef LIST_1_T4078445860_H
#define LIST_1_T4078445860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct  List_1_t4078445860  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t3017264731* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____items_1)); }
	inline List_1U5BU5D_t3017264731* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t3017264731** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t3017264731* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4078445860_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t3017264731* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4078445860_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t3017264731* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t3017264731** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t3017264731* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4078445860_H
#ifndef LIST_1_T3363058862_H
#define LIST_1_T3363058862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct  List_1_t3363058862  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_t3224530281* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____items_1)); }
	inline ChannelQOSU5BU5D_t3224530281* get__items_1() const { return ____items_1; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChannelQOSU5BU5D_t3224530281* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3363058862_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ChannelQOSU5BU5D_t3224530281* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3363058862_StaticFields, ___EmptyArray_4)); }
	inline ChannelQOSU5BU5D_t3224530281* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ChannelQOSU5BU5D_t3224530281* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3363058862_H
#ifndef LIST_1_T1351088715_H
#define LIST_1_T1351088715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct  List_1_t1351088715  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_t3548107960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____items_1)); }
	inline ConnectionConfigU5BU5D_t3548107960* get__items_1() const { return ____items_1; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionConfigU5BU5D_t3548107960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1351088715_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ConnectionConfigU5BU5D_t3548107960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1351088715_StaticFields, ___EmptyArray_4)); }
	inline ConnectionConfigU5BU5D_t3548107960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ConnectionConfigU5BU5D_t3548107960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1351088715_H
#ifndef LIST_1_T1004336143_H
#define LIST_1_T1004336143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct  List_1_t1004336143  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchDescU5BU5D_t1151567716* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____items_1)); }
	inline MatchDescU5BU5D_t1151567716* get__items_1() const { return ____items_1; }
	inline MatchDescU5BU5D_t1151567716** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchDescU5BU5D_t1151567716* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1004336143, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1004336143_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchDescU5BU5D_t1151567716* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1004336143_StaticFields, ___EmptyArray_4)); }
	inline MatchDescU5BU5D_t1151567716* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchDescU5BU5D_t1151567716** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchDescU5BU5D_t1151567716* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1004336143_H
#ifndef LIST_1_T32447842_H
#define LIST_1_T32447842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct  List_1_t32447842  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchDirectConnectInfoU5BU5D_t2741069669* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____items_1)); }
	inline MatchDirectConnectInfoU5BU5D_t2741069669* get__items_1() const { return ____items_1; }
	inline MatchDirectConnectInfoU5BU5D_t2741069669** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchDirectConnectInfoU5BU5D_t2741069669* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t32447842, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t32447842_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchDirectConnectInfoU5BU5D_t2741069669* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t32447842_StaticFields, ___EmptyArray_4)); }
	inline MatchDirectConnectInfoU5BU5D_t2741069669* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchDirectConnectInfoU5BU5D_t2741069669** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchDirectConnectInfoU5BU5D_t2741069669* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T32447842_H
#ifndef LIST_1_T2090095927_H
#define LIST_1_T2090095927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>
struct  List_1_t2090095927  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____items_1)); }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* get__items_1() const { return ____items_1; }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2090095927, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2090095927_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2090095927_StaticFields, ___EmptyArray_4)); }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchInfoDirectConnectSnapshotU5BU5D_t3993957532** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchInfoDirectConnectSnapshotU5BU5D_t3993957532* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2090095927_H
#ifndef LIST_1_T343529635_H
#define LIST_1_T343529635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>
struct  List_1_t343529635  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatchInfoSnapshotU5BU5D_t1141422592* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____items_1)); }
	inline MatchInfoSnapshotU5BU5D_t1141422592* get__items_1() const { return ____items_1; }
	inline MatchInfoSnapshotU5BU5D_t1141422592** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatchInfoSnapshotU5BU5D_t1141422592* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t343529635, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t343529635_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MatchInfoSnapshotU5BU5D_t1141422592* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t343529635_StaticFields, ___EmptyArray_4)); }
	inline MatchInfoSnapshotU5BU5D_t1141422592* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MatchInfoSnapshotU5BU5D_t1141422592** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MatchInfoSnapshotU5BU5D_t1141422592* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T343529635_H
#ifndef READONLYCOLLECTION_1_T2346872663_H
#define READONLYCOLLECTION_1_T2346872663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct  ReadOnlyCollection_1_t2346872663  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2346872663, ___list_0)); }
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
#endif // READONLYCOLLECTION_1_T2346872663_H
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
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef SOCKETADDRESS_T3739769427_H
#define SOCKETADDRESS_T3739769427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SocketAddress
struct  SocketAddress_t3739769427  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.SocketAddress::data
	ByteU5BU5D_t4116647657* ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(SocketAddress_t3739769427, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETADDRESS_T3739769427_H
#ifndef TCPCLIENT_T822906377_H
#define TCPCLIENT_T822906377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t822906377  : public RuntimeObject
{
public:
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::stream
	NetworkStream_t4071955934 * ___stream_0;
	// System.Boolean System.Net.Sockets.TcpClient::active
	bool ___active_1;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::client
	Socket_t1119025450 * ___client_2;
	// System.Boolean System.Net.Sockets.TcpClient::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___stream_0)); }
	inline NetworkStream_t4071955934 * get_stream_0() const { return ___stream_0; }
	inline NetworkStream_t4071955934 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(NetworkStream_t4071955934 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___stream_0), value);
	}

	inline static int32_t get_offset_of_active_1() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___active_1)); }
	inline bool get_active_1() const { return ___active_1; }
	inline bool* get_address_of_active_1() { return &___active_1; }
	inline void set_active_1(bool value)
	{
		___active_1 = value;
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___client_2)); }
	inline Socket_t1119025450 * get_client_2() const { return ___client_2; }
	inline Socket_t1119025450 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(Socket_t1119025450 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier((&___client_2), value);
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCLIENT_T822906377_H
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
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_1;
	// System.String System.Uri::source
	String_t* ___source_2;
	// System.String System.Uri::scheme
	String_t* ___scheme_3;
	// System.String System.Uri::host
	String_t* ___host_4;
	// System.Int32 System.Uri::port
	int32_t ___port_5;
	// System.String System.Uri::path
	String_t* ___path_6;
	// System.String System.Uri::query
	String_t* ___query_7;
	// System.String System.Uri::fragment
	String_t* ___fragment_8;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_9;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_10;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_11;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_12;
	// System.String[] System.Uri::segments
	StringU5BU5D_t1281789340* ___segments_13;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_14;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_15;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_16;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_17;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_18;
	// System.UriParser System.Uri::parser
	UriParser_t3890150400 * ___parser_32;

public:
	inline static int32_t get_offset_of_isUnixFilePath_1() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnixFilePath_1)); }
	inline bool get_isUnixFilePath_1() const { return ___isUnixFilePath_1; }
	inline bool* get_address_of_isUnixFilePath_1() { return &___isUnixFilePath_1; }
	inline void set_isUnixFilePath_1(bool value)
	{
		___isUnixFilePath_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_scheme_3() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___scheme_3)); }
	inline String_t* get_scheme_3() const { return ___scheme_3; }
	inline String_t** get_address_of_scheme_3() { return &___scheme_3; }
	inline void set_scheme_3(String_t* value)
	{
		___scheme_3 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_3), value);
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_port_5() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___port_5)); }
	inline int32_t get_port_5() const { return ___port_5; }
	inline int32_t* get_address_of_port_5() { return &___port_5; }
	inline void set_port_5(int32_t value)
	{
		___port_5 = value;
	}

	inline static int32_t get_offset_of_path_6() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___path_6)); }
	inline String_t* get_path_6() const { return ___path_6; }
	inline String_t** get_address_of_path_6() { return &___path_6; }
	inline void set_path_6(String_t* value)
	{
		___path_6 = value;
		Il2CppCodeGenWriteBarrier((&___path_6), value);
	}

	inline static int32_t get_offset_of_query_7() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___query_7)); }
	inline String_t* get_query_7() const { return ___query_7; }
	inline String_t** get_address_of_query_7() { return &___query_7; }
	inline void set_query_7(String_t* value)
	{
		___query_7 = value;
		Il2CppCodeGenWriteBarrier((&___query_7), value);
	}

	inline static int32_t get_offset_of_fragment_8() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___fragment_8)); }
	inline String_t* get_fragment_8() const { return ___fragment_8; }
	inline String_t** get_address_of_fragment_8() { return &___fragment_8; }
	inline void set_fragment_8(String_t* value)
	{
		___fragment_8 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_8), value);
	}

	inline static int32_t get_offset_of_userinfo_9() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userinfo_9)); }
	inline String_t* get_userinfo_9() const { return ___userinfo_9; }
	inline String_t** get_address_of_userinfo_9() { return &___userinfo_9; }
	inline void set_userinfo_9(String_t* value)
	{
		___userinfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_9), value);
	}

	inline static int32_t get_offset_of_isUnc_10() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isUnc_10)); }
	inline bool get_isUnc_10() const { return ___isUnc_10; }
	inline bool* get_address_of_isUnc_10() { return &___isUnc_10; }
	inline void set_isUnc_10(bool value)
	{
		___isUnc_10 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_11() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isOpaquePart_11)); }
	inline bool get_isOpaquePart_11() const { return ___isOpaquePart_11; }
	inline bool* get_address_of_isOpaquePart_11() { return &___isOpaquePart_11; }
	inline void set_isOpaquePart_11(bool value)
	{
		___isOpaquePart_11 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_12() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___isAbsoluteUri_12)); }
	inline bool get_isAbsoluteUri_12() const { return ___isAbsoluteUri_12; }
	inline bool* get_address_of_isAbsoluteUri_12() { return &___isAbsoluteUri_12; }
	inline void set_isAbsoluteUri_12(bool value)
	{
		___isAbsoluteUri_12 = value;
	}

	inline static int32_t get_offset_of_segments_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___segments_13)); }
	inline StringU5BU5D_t1281789340* get_segments_13() const { return ___segments_13; }
	inline StringU5BU5D_t1281789340** get_address_of_segments_13() { return &___segments_13; }
	inline void set_segments_13(StringU5BU5D_t1281789340* value)
	{
		___segments_13 = value;
		Il2CppCodeGenWriteBarrier((&___segments_13), value);
	}

	inline static int32_t get_offset_of_userEscaped_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___userEscaped_14)); }
	inline bool get_userEscaped_14() const { return ___userEscaped_14; }
	inline bool* get_address_of_userEscaped_14() { return &___userEscaped_14; }
	inline void set_userEscaped_14(bool value)
	{
		___userEscaped_14 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedAbsoluteUri_15)); }
	inline String_t* get_cachedAbsoluteUri_15() const { return ___cachedAbsoluteUri_15; }
	inline String_t** get_address_of_cachedAbsoluteUri_15() { return &___cachedAbsoluteUri_15; }
	inline void set_cachedAbsoluteUri_15(String_t* value)
	{
		___cachedAbsoluteUri_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_15), value);
	}

	inline static int32_t get_offset_of_cachedToString_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedToString_16)); }
	inline String_t* get_cachedToString_16() const { return ___cachedToString_16; }
	inline String_t** get_address_of_cachedToString_16() { return &___cachedToString_16; }
	inline void set_cachedToString_16(String_t* value)
	{
		___cachedToString_16 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_16), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedLocalPath_17)); }
	inline String_t* get_cachedLocalPath_17() const { return ___cachedLocalPath_17; }
	inline String_t** get_address_of_cachedLocalPath_17() { return &___cachedLocalPath_17; }
	inline void set_cachedLocalPath_17(String_t* value)
	{
		___cachedLocalPath_17 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_17), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___cachedHashCode_18)); }
	inline int32_t get_cachedHashCode_18() const { return ___cachedHashCode_18; }
	inline int32_t* get_address_of_cachedHashCode_18() { return &___cachedHashCode_18; }
	inline void set_cachedHashCode_18(int32_t value)
	{
		___cachedHashCode_18 = value;
	}

	inline static int32_t get_offset_of_parser_32() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___parser_32)); }
	inline UriParser_t3890150400 * get_parser_32() const { return ___parser_32; }
	inline UriParser_t3890150400 ** get_address_of_parser_32() { return &___parser_32; }
	inline void set_parser_32(UriParser_t3890150400 * value)
	{
		___parser_32 = value;
		Il2CppCodeGenWriteBarrier((&___parser_32), value);
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_19;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_20;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_21;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_22;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_23;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_24;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_25;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_26;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_27;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_28;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_29;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_30;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t2082808316* ___schemes_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_37;

public:
	inline static int32_t get_offset_of_hexUpperChars_19() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___hexUpperChars_19)); }
	inline String_t* get_hexUpperChars_19() const { return ___hexUpperChars_19; }
	inline String_t** get_address_of_hexUpperChars_19() { return &___hexUpperChars_19; }
	inline void set_hexUpperChars_19(String_t* value)
	{
		___hexUpperChars_19 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_19), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_20)); }
	inline String_t* get_SchemeDelimiter_20() const { return ___SchemeDelimiter_20; }
	inline String_t** get_address_of_SchemeDelimiter_20() { return &___SchemeDelimiter_20; }
	inline void set_SchemeDelimiter_20(String_t* value)
	{
		___SchemeDelimiter_20 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_21)); }
	inline String_t* get_UriSchemeFile_21() const { return ___UriSchemeFile_21; }
	inline String_t** get_address_of_UriSchemeFile_21() { return &___UriSchemeFile_21; }
	inline void set_UriSchemeFile_21(String_t* value)
	{
		___UriSchemeFile_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_22)); }
	inline String_t* get_UriSchemeFtp_22() const { return ___UriSchemeFtp_22; }
	inline String_t** get_address_of_UriSchemeFtp_22() { return &___UriSchemeFtp_22; }
	inline void set_UriSchemeFtp_22(String_t* value)
	{
		___UriSchemeFtp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_23)); }
	inline String_t* get_UriSchemeGopher_23() const { return ___UriSchemeGopher_23; }
	inline String_t** get_address_of_UriSchemeGopher_23() { return &___UriSchemeGopher_23; }
	inline void set_UriSchemeGopher_23(String_t* value)
	{
		___UriSchemeGopher_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_24)); }
	inline String_t* get_UriSchemeHttp_24() const { return ___UriSchemeHttp_24; }
	inline String_t** get_address_of_UriSchemeHttp_24() { return &___UriSchemeHttp_24; }
	inline void set_UriSchemeHttp_24(String_t* value)
	{
		___UriSchemeHttp_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_25)); }
	inline String_t* get_UriSchemeHttps_25() const { return ___UriSchemeHttps_25; }
	inline String_t** get_address_of_UriSchemeHttps_25() { return &___UriSchemeHttps_25; }
	inline void set_UriSchemeHttps_25(String_t* value)
	{
		___UriSchemeHttps_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_26)); }
	inline String_t* get_UriSchemeMailto_26() const { return ___UriSchemeMailto_26; }
	inline String_t** get_address_of_UriSchemeMailto_26() { return &___UriSchemeMailto_26; }
	inline void set_UriSchemeMailto_26(String_t* value)
	{
		___UriSchemeMailto_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_27)); }
	inline String_t* get_UriSchemeNews_27() const { return ___UriSchemeNews_27; }
	inline String_t** get_address_of_UriSchemeNews_27() { return &___UriSchemeNews_27; }
	inline void set_UriSchemeNews_27(String_t* value)
	{
		___UriSchemeNews_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_28)); }
	inline String_t* get_UriSchemeNntp_28() const { return ___UriSchemeNntp_28; }
	inline String_t** get_address_of_UriSchemeNntp_28() { return &___UriSchemeNntp_28; }
	inline void set_UriSchemeNntp_28(String_t* value)
	{
		___UriSchemeNntp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_28), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_29)); }
	inline String_t* get_UriSchemeNetPipe_29() const { return ___UriSchemeNetPipe_29; }
	inline String_t** get_address_of_UriSchemeNetPipe_29() { return &___UriSchemeNetPipe_29; }
	inline void set_UriSchemeNetPipe_29(String_t* value)
	{
		___UriSchemeNetPipe_29 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_29), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_30)); }
	inline String_t* get_UriSchemeNetTcp_30() const { return ___UriSchemeNetTcp_30; }
	inline String_t** get_address_of_UriSchemeNetTcp_30() { return &___UriSchemeNetTcp_30; }
	inline void set_UriSchemeNetTcp_30(String_t* value)
	{
		___UriSchemeNetTcp_30 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_30), value);
	}

	inline static int32_t get_offset_of_schemes_31() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___schemes_31)); }
	inline UriSchemeU5BU5D_t2082808316* get_schemes_31() const { return ___schemes_31; }
	inline UriSchemeU5BU5D_t2082808316** get_address_of_schemes_31() { return &___schemes_31; }
	inline void set_schemes_31(UriSchemeU5BU5D_t2082808316* value)
	{
		___schemes_31 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_33() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map12_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_33() const { return ___U3CU3Ef__switchU24map12_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_33() { return &___U3CU3Ef__switchU24map12_33; }
	inline void set_U3CU3Ef__switchU24map12_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map13_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_34() const { return ___U3CU3Ef__switchU24map13_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_34() { return &___U3CU3Ef__switchU24map13_34; }
	inline void set_U3CU3Ef__switchU24map13_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map14_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_35() const { return ___U3CU3Ef__switchU24map14_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_35() { return &___U3CU3Ef__switchU24map14_35; }
	inline void set_U3CU3Ef__switchU24map14_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_35), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_36() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map15_36)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_36() const { return ___U3CU3Ef__switchU24map15_36; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_36() { return &___U3CU3Ef__switchU24map15_36; }
	inline void set_U3CU3Ef__switchU24map15_36(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_36), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_37() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___U3CU3Ef__switchU24map16_37)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_37() const { return ___U3CU3Ef__switchU24map16_37; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_37() { return &___U3CU3Ef__switchU24map16_37; }
	inline void set_U3CU3Ef__switchU24map16_37(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_37 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
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
#ifndef HOSTTOPOLOGY_T4059263395_H
#define HOSTTOPOLOGY_T4059263395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.HostTopology
struct  HostTopology_t4059263395  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t4173981269 * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t1351088715 * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_DefConfig_0)); }
	inline ConnectionConfig_t4173981269 * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t4173981269 ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t4173981269 * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefConfig_0), value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SpecialConnections_2)); }
	inline List_1_t1351088715 * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t1351088715 ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t1351088715 * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpecialConnections_2), value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTTOPOLOGY_T4059263395_H
#ifndef RESPONSE_T2513603462_H
#define RESPONSE_T2513603462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.Response
struct  Response_t2513603462  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.Match.Response::success
	bool ___success_0;
	// System.String UnityEngine.Networking.Match.Response::extendedInfo
	String_t* ___extendedInfo_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(Response_t2513603462, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_extendedInfo_1() { return static_cast<int32_t>(offsetof(Response_t2513603462, ___extendedInfo_1)); }
	inline String_t* get_extendedInfo_1() const { return ___extendedInfo_1; }
	inline String_t** get_address_of_extendedInfo_1() { return &___extendedInfo_1; }
	inline void set_extendedInfo_1(String_t* value)
	{
		___extendedInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___extendedInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSE_T2513603462_H
#ifndef NETWORKTRANSPORT_T1089479308_H
#define NETWORKTRANSPORT_T1089479308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransport
struct  NetworkTransport_t1089479308  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSPORT_T1089479308_H
#ifndef NETWORKACCESSTOKEN_T320639760_H
#define NETWORKACCESSTOKEN_T320639760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkAccessToken
struct  NetworkAccessToken_t320639760  : public RuntimeObject
{
public:
	// System.Byte[] UnityEngine.Networking.Types.NetworkAccessToken::array
	ByteU5BU5D_t4116647657* ___array_1;

public:
	inline static int32_t get_offset_of_array_1() { return static_cast<int32_t>(offsetof(NetworkAccessToken_t320639760, ___array_1)); }
	inline ByteU5BU5D_t4116647657* get_array_1() const { return ___array_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_array_1() { return &___array_1; }
	inline void set_array_1(ByteU5BU5D_t4116647657* value)
	{
		___array_1 = value;
		Il2CppCodeGenWriteBarrier((&___array_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKACCESSTOKEN_T320639760_H
#ifndef UTILITY_T2761513741_H
#define UTILITY_T2761513741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Utility
struct  Utility_t2761513741  : public RuntimeObject
{
public:

public:
};

struct Utility_t2761513741_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken> UnityEngine.Networking.Utility::s_dictTokens
	Dictionary_2_t3502080855 * ___s_dictTokens_0;

public:
	inline static int32_t get_offset_of_s_dictTokens_0() { return static_cast<int32_t>(offsetof(Utility_t2761513741_StaticFields, ___s_dictTokens_0)); }
	inline Dictionary_2_t3502080855 * get_s_dictTokens_0() const { return ___s_dictTokens_0; }
	inline Dictionary_2_t3502080855 ** get_address_of_s_dictTokens_0() { return &___s_dictTokens_0; }
	inline void set_s_dictTokens_0(Dictionary_2_t3502080855 * value)
	{
		___s_dictTokens_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_dictTokens_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITY_T2761513741_H
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef U24ARRAYTYPEU3D4_T1629360955_H
#define U24ARRAYTYPEU3D4_T1629360955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=4
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D4_t1629360955 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D4_t1629360955__padding[4];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D4_T1629360955_H
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
#ifndef ENUMERATOR_T1672722441_H
#define ENUMERATOR_T1672722441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct  Enumerator_t1672722441 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4078445860 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t2606371118 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___l_0)); }
	inline List_1_t4078445860 * get_l_0() const { return ___l_0; }
	inline List_1_t4078445860 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4078445860 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___current_3)); }
	inline List_1_t2606371118 * get_current_3() const { return ___current_3; }
	inline List_1_t2606371118 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t2606371118 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1672722441_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T957335443_H
#define ENUMERATOR_T957335443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>
struct  Enumerator_t957335443 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3363058862 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ChannelQOS_t1890984120 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___l_0)); }
	inline List_1_t3363058862 * get_l_0() const { return ___l_0; }
	inline List_1_t3363058862 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3363058862 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___current_3)); }
	inline ChannelQOS_t1890984120 * get_current_3() const { return ___current_3; }
	inline ChannelQOS_t1890984120 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ChannelQOS_t1890984120 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T957335443_H
#ifndef ENUMERATOR_T2893580020_H
#define ENUMERATOR_T2893580020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>
struct  Enumerator_t2893580020 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1004336143 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MatchDesc_t3827228697 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___l_0)); }
	inline List_1_t1004336143 * get_l_0() const { return ___l_0; }
	inline List_1_t1004336143 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1004336143 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2893580020, ___current_3)); }
	inline MatchDesc_t3827228697 * get_current_3() const { return ___current_3; }
	inline MatchDesc_t3827228697 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MatchDesc_t3827228697 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2893580020_H
#ifndef ENUMERATOR_T1921691719_H
#define ENUMERATOR_T1921691719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct  Enumerator_t1921691719 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t32447842 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MatchDirectConnectInfo_t2855340396 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___l_0)); }
	inline List_1_t32447842 * get_l_0() const { return ___l_0; }
	inline List_1_t32447842 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t32447842 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1921691719, ___current_3)); }
	inline MatchDirectConnectInfo_t2855340396 * get_current_3() const { return ___current_3; }
	inline MatchDirectConnectInfo_t2855340396 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MatchDirectConnectInfo_t2855340396 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1921691719_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
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
#ifndef BASICRESPONSE_T1476713923_H
#define BASICRESPONSE_T1476713923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.BasicResponse
struct  BasicResponse_t1476713923  : public Response_t2513603462
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICRESPONSE_T1476713923_H
#ifndef DROPCONNECTIONRESPONSE_T3571632289_H
#define DROPCONNECTIONRESPONSE_T3571632289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DropConnectionResponse
struct  DropConnectionResponse_t3571632289  : public Response_t2513603462
{
public:
	// System.UInt64 UnityEngine.Networking.Match.DropConnectionResponse::networkId
	uint64_t ___networkId_2;

public:
	inline static int32_t get_offset_of_networkId_2() { return static_cast<int32_t>(offsetof(DropConnectionResponse_t3571632289, ___networkId_2)); }
	inline uint64_t get_networkId_2() const { return ___networkId_2; }
	inline uint64_t* get_address_of_networkId_2() { return &___networkId_2; }
	inline void set_networkId_2(uint64_t value)
	{
		___networkId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPCONNECTIONRESPONSE_T3571632289_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255368  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=4 <PrivateImplementationDetails>::$field-95D7E9C7483D5AF10DF20044FCD3E580073E1D4B
	U24ArrayTypeU3D4_t1629360955  ___U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0)); }
	inline U24ArrayTypeU3D4_t1629360955  get_U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0() const { return ___U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0; }
	inline U24ArrayTypeU3D4_t1629360955 * get_address_of_U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0() { return &___U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0; }
	inline void set_U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0(U24ArrayTypeU3D4_t1629360955  value)
	{
		___U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
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
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___1)); }
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
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
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
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef CONNECTIONACKSTYPE_T3955378167_H
#define CONNECTIONACKSTYPE_T3955378167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t3955378167 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t3955378167, ___value___1)); }
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
#endif // CONNECTIONACKSTYPE_T3955378167_H
#ifndef CONNECTIONCONFIGINTERNAL_T1246935692_H
#define CONNECTIONCONFIGINTERNAL_T1246935692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfigInternal
struct  ConnectionConfigInternal_t1246935692  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ConnectionConfigInternal_t1246935692, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCONFIGINTERNAL_T1246935692_H
#ifndef CONNECTIONSIMULATORCONFIG_T1375549810_H
#define CONNECTIONSIMULATORCONFIG_T1375549810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionSimulatorConfig
struct  ConnectionSimulatorConfig_t1375549810  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.ConnectionSimulatorConfig::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ConnectionSimulatorConfig_t1375549810, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSIMULATORCONFIG_T1375549810_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef GLOBALCONFIGINTERNAL_T1872710257_H
#define GLOBALCONFIGINTERNAL_T1872710257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.GlobalConfigInternal
struct  GlobalConfigInternal_t1872710257  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.GlobalConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GlobalConfigInternal_t1872710257, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALCONFIGINTERNAL_T1872710257_H
#ifndef HOSTTOPOLOGYINTERNAL_T761087795_H
#define HOSTTOPOLOGYINTERNAL_T761087795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.HostTopologyInternal
struct  HostTopologyInternal_t761087795  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.HostTopologyInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(HostTopologyInternal_t761087795, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTTOPOLOGYINTERNAL_T761087795_H
#ifndef LISTMATCHRESPONSE_T3200990838_H
#define LISTMATCHRESPONSE_T3200990838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ListMatchResponse
struct  ListMatchResponse_t3200990838  : public BasicResponse_t1476713923
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::matches
	List_1_t1004336143 * ___matches_2;

public:
	inline static int32_t get_offset_of_matches_2() { return static_cast<int32_t>(offsetof(ListMatchResponse_t3200990838, ___matches_2)); }
	inline List_1_t1004336143 * get_matches_2() const { return ___matches_2; }
	inline List_1_t1004336143 ** get_address_of_matches_2() { return &___matches_2; }
	inline void set_matches_2(List_1_t1004336143 * value)
	{
		___matches_2 = value;
		Il2CppCodeGenWriteBarrier((&___matches_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTMATCHRESPONSE_T3200990838_H
#ifndef NETWORKERROR_T2038193525_H
#define NETWORKERROR_T2038193525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkError
struct  NetworkError_t2038193525 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkError_t2038193525, ___value___1)); }
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
#endif // NETWORKERROR_T2038193525_H
#ifndef NETWORKEVENTTYPE_T3383948383_H
#define NETWORKEVENTTYPE_T3383948383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_t3383948383 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkEventType_t3383948383, ___value___1)); }
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
#endif // NETWORKEVENTTYPE_T3383948383_H
#ifndef QOSTYPE_T3566496866_H
#define QOSTYPE_T3566496866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.QosType
struct  QosType_t3566496866 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QosType_t3566496866, ___value___1)); }
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
#endif // QOSTYPE_T3566496866_H
#ifndef REACTORMODEL_T89779108_H
#define REACTORMODEL_T89779108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ReactorModel
struct  ReactorModel_t89779108 
{
public:
	// System.Int32 UnityEngine.Networking.ReactorModel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReactorModel_t89779108, ___value___1)); }
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
#endif // REACTORMODEL_T89779108_H
#ifndef APPID_T663952513_H
#define APPID_T663952513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.AppID
struct  AppID_t663952513 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.AppID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AppID_t663952513, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPID_T663952513_H
#ifndef HOSTPRIORITY_T1616615738_H
#define HOSTPRIORITY_T1616615738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.HostPriority
struct  HostPriority_t1616615738 
{
public:
	// System.Int32 UnityEngine.Networking.Types.HostPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HostPriority_t1616615738, ___value___1)); }
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
#endif // HOSTPRIORITY_T1616615738_H
#ifndef NETWORKID_T4216585621_H
#define NETWORKID_T4216585621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NetworkID
struct  NetworkID_t4216585621 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.NetworkID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkID_t4216585621, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKID_T4216585621_H
#ifndef NODEID_T2347816311_H
#define NODEID_T2347816311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.NodeID
struct  NodeID_t2347816311 
{
public:
	// System.UInt16 UnityEngine.Networking.Types.NodeID::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NodeID_t2347816311, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEID_T2347816311_H
#ifndef SOURCEID_T1070216020_H
#define SOURCEID_T1070216020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Types.SourceID
struct  SourceID_t1070216020 
{
public:
	// System.UInt64 UnityEngine.Networking.Types.SourceID::value__
	uint64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SourceID_t1070216020, ___value___1)); }
	inline uint64_t get_value___1() const { return ___value___1; }
	inline uint64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEID_T1070216020_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
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
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef CHANNELQOS_T1890984120_H
#define CHANNELQOS_T1890984120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ChannelQOS
struct  ChannelQOS_t1890984120  : public RuntimeObject
{
public:
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BelongsSharedOrderChannel_1() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_BelongsSharedOrderChannel_1)); }
	inline bool get_m_BelongsSharedOrderChannel_1() const { return ___m_BelongsSharedOrderChannel_1; }
	inline bool* get_address_of_m_BelongsSharedOrderChannel_1() { return &___m_BelongsSharedOrderChannel_1; }
	inline void set_m_BelongsSharedOrderChannel_1(bool value)
	{
		___m_BelongsSharedOrderChannel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELQOS_T1890984120_H
#ifndef CONNECTIONCONFIG_T4173981269_H
#define CONNECTIONCONFIG_T4173981269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t4173981269  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_1;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_8;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_11;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_13;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_16;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_17;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_18;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_19;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_20;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_21;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_22;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_25;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_26;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t3363058862 * ___m_Channels_27;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t4078445860 * ___m_SharedOrderChannels_28;

public:
	inline static int32_t get_offset_of_m_PacketSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PacketSize_1)); }
	inline uint16_t get_m_PacketSize_1() const { return ___m_PacketSize_1; }
	inline uint16_t* get_address_of_m_PacketSize_1() { return &___m_PacketSize_1; }
	inline void set_m_PacketSize_1(uint16_t value)
	{
		___m_PacketSize_1 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_FragmentSize_2)); }
	inline uint16_t get_m_FragmentSize_2() const { return ___m_FragmentSize_2; }
	inline uint16_t* get_address_of_m_FragmentSize_2() { return &___m_FragmentSize_2; }
	inline void set_m_FragmentSize_2(uint16_t value)
	{
		___m_FragmentSize_2 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ResendTimeout_3)); }
	inline uint32_t get_m_ResendTimeout_3() const { return ___m_ResendTimeout_3; }
	inline uint32_t* get_address_of_m_ResendTimeout_3() { return &___m_ResendTimeout_3; }
	inline void set_m_ResendTimeout_3(uint32_t value)
	{
		___m_ResendTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_DisconnectTimeout_4)); }
	inline uint32_t get_m_DisconnectTimeout_4() const { return ___m_DisconnectTimeout_4; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_4() { return &___m_DisconnectTimeout_4; }
	inline void set_m_DisconnectTimeout_4(uint32_t value)
	{
		___m_DisconnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ConnectTimeout_5)); }
	inline uint32_t get_m_ConnectTimeout_5() const { return ___m_ConnectTimeout_5; }
	inline uint32_t* get_address_of_m_ConnectTimeout_5() { return &___m_ConnectTimeout_5; }
	inline void set_m_ConnectTimeout_5(uint32_t value)
	{
		___m_ConnectTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MinUpdateTimeout_6)); }
	inline uint32_t get_m_MinUpdateTimeout_6() const { return ___m_MinUpdateTimeout_6; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_6() { return &___m_MinUpdateTimeout_6; }
	inline void set_m_MinUpdateTimeout_6(uint32_t value)
	{
		___m_MinUpdateTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PingTimeout_7)); }
	inline uint32_t get_m_PingTimeout_7() const { return ___m_PingTimeout_7; }
	inline uint32_t* get_address_of_m_PingTimeout_7() { return &___m_PingTimeout_7; }
	inline void set_m_PingTimeout_7(uint32_t value)
	{
		___m_PingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ReducedPingTimeout_8)); }
	inline uint32_t get_m_ReducedPingTimeout_8() const { return ___m_ReducedPingTimeout_8; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_8() { return &___m_ReducedPingTimeout_8; }
	inline void set_m_ReducedPingTimeout_8(uint32_t value)
	{
		___m_ReducedPingTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AllCostTimeout_9)); }
	inline uint32_t get_m_AllCostTimeout_9() const { return ___m_AllCostTimeout_9; }
	inline uint32_t* get_address_of_m_AllCostTimeout_9() { return &___m_AllCostTimeout_9; }
	inline void set_m_AllCostTimeout_9(uint32_t value)
	{
		___m_AllCostTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_NetworkDropThreshold_10)); }
	inline uint8_t get_m_NetworkDropThreshold_10() const { return ___m_NetworkDropThreshold_10; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_10() { return &___m_NetworkDropThreshold_10; }
	inline void set_m_NetworkDropThreshold_10(uint8_t value)
	{
		___m_NetworkDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_OverflowDropThreshold_11)); }
	inline uint8_t get_m_OverflowDropThreshold_11() const { return ___m_OverflowDropThreshold_11; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_11() { return &___m_OverflowDropThreshold_11; }
	inline void set_m_OverflowDropThreshold_11(uint8_t value)
	{
		___m_OverflowDropThreshold_11 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxConnectionAttempt_12)); }
	inline uint8_t get_m_MaxConnectionAttempt_12() const { return ___m_MaxConnectionAttempt_12; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_12() { return &___m_MaxConnectionAttempt_12; }
	inline void set_m_MaxConnectionAttempt_12(uint8_t value)
	{
		___m_MaxConnectionAttempt_12 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AckDelay_13)); }
	inline uint32_t get_m_AckDelay_13() const { return ___m_AckDelay_13; }
	inline uint32_t* get_address_of_m_AckDelay_13() { return &___m_AckDelay_13; }
	inline void set_m_AckDelay_13(uint32_t value)
	{
		___m_AckDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SendDelay_14)); }
	inline uint32_t get_m_SendDelay_14() const { return ___m_SendDelay_14; }
	inline uint32_t* get_address_of_m_SendDelay_14() { return &___m_SendDelay_14; }
	inline void set_m_SendDelay_14(uint32_t value)
	{
		___m_SendDelay_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageSize_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_15() const { return ___m_MaxCombinedReliableMessageSize_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_15() { return &___m_MaxCombinedReliableMessageSize_15; }
	inline void set_m_MaxCombinedReliableMessageSize_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageCount_16)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_16() const { return ___m_MaxCombinedReliableMessageCount_16; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_16() { return &___m_MaxCombinedReliableMessageCount_16; }
	inline void set_m_MaxCombinedReliableMessageCount_16(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_16 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxSentMessageQueueSize_17)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_17() const { return ___m_MaxSentMessageQueueSize_17; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_17() { return &___m_MaxSentMessageQueueSize_17; }
	inline void set_m_MaxSentMessageQueueSize_17(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_17 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AcksType_18)); }
	inline int32_t get_m_AcksType_18() const { return ___m_AcksType_18; }
	inline int32_t* get_address_of_m_AcksType_18() { return &___m_AcksType_18; }
	inline void set_m_AcksType_18(int32_t value)
	{
		___m_AcksType_18 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UsePlatformSpecificProtocols_19)); }
	inline bool get_m_UsePlatformSpecificProtocols_19() const { return ___m_UsePlatformSpecificProtocols_19; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_19() { return &___m_UsePlatformSpecificProtocols_19; }
	inline void set_m_UsePlatformSpecificProtocols_19(bool value)
	{
		___m_UsePlatformSpecificProtocols_19 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_InitialBandwidth_20)); }
	inline uint32_t get_m_InitialBandwidth_20() const { return ___m_InitialBandwidth_20; }
	inline uint32_t* get_address_of_m_InitialBandwidth_20() { return &___m_InitialBandwidth_20; }
	inline void set_m_InitialBandwidth_20(uint32_t value)
	{
		___m_InitialBandwidth_20 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_BandwidthPeakFactor_21)); }
	inline float get_m_BandwidthPeakFactor_21() const { return ___m_BandwidthPeakFactor_21; }
	inline float* get_address_of_m_BandwidthPeakFactor_21() { return &___m_BandwidthPeakFactor_21; }
	inline void set_m_BandwidthPeakFactor_21(float value)
	{
		___m_BandwidthPeakFactor_21 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_WebSocketReceiveBufferMaxSize_22)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_22() const { return ___m_WebSocketReceiveBufferMaxSize_22; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_22() { return &___m_WebSocketReceiveBufferMaxSize_22; }
	inline void set_m_WebSocketReceiveBufferMaxSize_22(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UdpSocketReceiveBufferMaxSize_23)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_23() const { return ___m_UdpSocketReceiveBufferMaxSize_23; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_23() { return &___m_UdpSocketReceiveBufferMaxSize_23; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_23(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_23 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCertFilePath_24)); }
	inline String_t* get_m_SSLCertFilePath_24() const { return ___m_SSLCertFilePath_24; }
	inline String_t** get_address_of_m_SSLCertFilePath_24() { return &___m_SSLCertFilePath_24; }
	inline void set_m_SSLCertFilePath_24(String_t* value)
	{
		___m_SSLCertFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCertFilePath_24), value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLPrivateKeyFilePath_25)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_25() const { return ___m_SSLPrivateKeyFilePath_25; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_25() { return &___m_SSLPrivateKeyFilePath_25; }
	inline void set_m_SSLPrivateKeyFilePath_25(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLPrivateKeyFilePath_25), value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCAFilePath_26)); }
	inline String_t* get_m_SSLCAFilePath_26() const { return ___m_SSLCAFilePath_26; }
	inline String_t** get_address_of_m_SSLCAFilePath_26() { return &___m_SSLCAFilePath_26; }
	inline void set_m_SSLCAFilePath_26(String_t* value)
	{
		___m_SSLCAFilePath_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCAFilePath_26), value);
	}

	inline static int32_t get_offset_of_m_Channels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_Channels_27)); }
	inline List_1_t3363058862 * get_m_Channels_27() const { return ___m_Channels_27; }
	inline List_1_t3363058862 ** get_address_of_m_Channels_27() { return &___m_Channels_27; }
	inline void set_m_Channels_27(List_1_t3363058862 * value)
	{
		___m_Channels_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Channels_27), value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_28() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SharedOrderChannels_28)); }
	inline List_1_t4078445860 * get_m_SharedOrderChannels_28() const { return ___m_SharedOrderChannels_28; }
	inline List_1_t4078445860 ** get_address_of_m_SharedOrderChannels_28() { return &___m_SharedOrderChannels_28; }
	inline void set_m_SharedOrderChannels_28(List_1_t4078445860 * value)
	{
		___m_SharedOrderChannels_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedOrderChannels_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCONFIG_T4173981269_H
#ifndef GLOBALCONFIG_T833512557_H
#define GLOBALCONFIG_T833512557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.GlobalConfig
struct  GlobalConfig_t833512557  : public RuntimeObject
{
public:
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_ThreadAwakeTimeout
	uint32_t ___m_ThreadAwakeTimeout_3;
	// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::m_ReactorModel
	int32_t ___m_ReactorModel_4;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumReceivedMessages
	uint16_t ___m_ReactorMaximumReceivedMessages_5;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_ReactorMaximumSentMessages
	uint16_t ___m_ReactorMaximumSentMessages_6;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxPacketSize
	uint16_t ___m_MaxPacketSize_7;
	// System.UInt16 UnityEngine.Networking.GlobalConfig::m_MaxHosts
	uint16_t ___m_MaxHosts_8;
	// System.Byte UnityEngine.Networking.GlobalConfig::m_ThreadPoolSize
	uint8_t ___m_ThreadPoolSize_9;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinTimerTimeout
	uint32_t ___m_MinTimerTimeout_10;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxTimerTimeout
	uint32_t ___m_MaxTimerTimeout_11;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MinNetSimulatorTimeout
	uint32_t ___m_MinNetSimulatorTimeout_12;
	// System.UInt32 UnityEngine.Networking.GlobalConfig::m_MaxNetSimulatorTimeout
	uint32_t ___m_MaxNetSimulatorTimeout_13;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::m_ConnectionReadyForSend
	Action_2_t4177122770 * ___m_ConnectionReadyForSend_14;
	// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::m_NetworkEventAvailable
	Action_1_t3123413348 * ___m_NetworkEventAvailable_15;

public:
	inline static int32_t get_offset_of_m_ThreadAwakeTimeout_3() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ThreadAwakeTimeout_3)); }
	inline uint32_t get_m_ThreadAwakeTimeout_3() const { return ___m_ThreadAwakeTimeout_3; }
	inline uint32_t* get_address_of_m_ThreadAwakeTimeout_3() { return &___m_ThreadAwakeTimeout_3; }
	inline void set_m_ThreadAwakeTimeout_3(uint32_t value)
	{
		___m_ThreadAwakeTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ReactorModel_4() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorModel_4)); }
	inline int32_t get_m_ReactorModel_4() const { return ___m_ReactorModel_4; }
	inline int32_t* get_address_of_m_ReactorModel_4() { return &___m_ReactorModel_4; }
	inline void set_m_ReactorModel_4(int32_t value)
	{
		___m_ReactorModel_4 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumReceivedMessages_5() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorMaximumReceivedMessages_5)); }
	inline uint16_t get_m_ReactorMaximumReceivedMessages_5() const { return ___m_ReactorMaximumReceivedMessages_5; }
	inline uint16_t* get_address_of_m_ReactorMaximumReceivedMessages_5() { return &___m_ReactorMaximumReceivedMessages_5; }
	inline void set_m_ReactorMaximumReceivedMessages_5(uint16_t value)
	{
		___m_ReactorMaximumReceivedMessages_5 = value;
	}

	inline static int32_t get_offset_of_m_ReactorMaximumSentMessages_6() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ReactorMaximumSentMessages_6)); }
	inline uint16_t get_m_ReactorMaximumSentMessages_6() const { return ___m_ReactorMaximumSentMessages_6; }
	inline uint16_t* get_address_of_m_ReactorMaximumSentMessages_6() { return &___m_ReactorMaximumSentMessages_6; }
	inline void set_m_ReactorMaximumSentMessages_6(uint16_t value)
	{
		___m_ReactorMaximumSentMessages_6 = value;
	}

	inline static int32_t get_offset_of_m_MaxPacketSize_7() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxPacketSize_7)); }
	inline uint16_t get_m_MaxPacketSize_7() const { return ___m_MaxPacketSize_7; }
	inline uint16_t* get_address_of_m_MaxPacketSize_7() { return &___m_MaxPacketSize_7; }
	inline void set_m_MaxPacketSize_7(uint16_t value)
	{
		___m_MaxPacketSize_7 = value;
	}

	inline static int32_t get_offset_of_m_MaxHosts_8() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxHosts_8)); }
	inline uint16_t get_m_MaxHosts_8() const { return ___m_MaxHosts_8; }
	inline uint16_t* get_address_of_m_MaxHosts_8() { return &___m_MaxHosts_8; }
	inline void set_m_MaxHosts_8(uint16_t value)
	{
		___m_MaxHosts_8 = value;
	}

	inline static int32_t get_offset_of_m_ThreadPoolSize_9() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ThreadPoolSize_9)); }
	inline uint8_t get_m_ThreadPoolSize_9() const { return ___m_ThreadPoolSize_9; }
	inline uint8_t* get_address_of_m_ThreadPoolSize_9() { return &___m_ThreadPoolSize_9; }
	inline void set_m_ThreadPoolSize_9(uint8_t value)
	{
		___m_ThreadPoolSize_9 = value;
	}

	inline static int32_t get_offset_of_m_MinTimerTimeout_10() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MinTimerTimeout_10)); }
	inline uint32_t get_m_MinTimerTimeout_10() const { return ___m_MinTimerTimeout_10; }
	inline uint32_t* get_address_of_m_MinTimerTimeout_10() { return &___m_MinTimerTimeout_10; }
	inline void set_m_MinTimerTimeout_10(uint32_t value)
	{
		___m_MinTimerTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxTimerTimeout_11() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxTimerTimeout_11)); }
	inline uint32_t get_m_MaxTimerTimeout_11() const { return ___m_MaxTimerTimeout_11; }
	inline uint32_t* get_address_of_m_MaxTimerTimeout_11() { return &___m_MaxTimerTimeout_11; }
	inline void set_m_MaxTimerTimeout_11(uint32_t value)
	{
		___m_MaxTimerTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_MinNetSimulatorTimeout_12() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MinNetSimulatorTimeout_12)); }
	inline uint32_t get_m_MinNetSimulatorTimeout_12() const { return ___m_MinNetSimulatorTimeout_12; }
	inline uint32_t* get_address_of_m_MinNetSimulatorTimeout_12() { return &___m_MinNetSimulatorTimeout_12; }
	inline void set_m_MinNetSimulatorTimeout_12(uint32_t value)
	{
		___m_MinNetSimulatorTimeout_12 = value;
	}

	inline static int32_t get_offset_of_m_MaxNetSimulatorTimeout_13() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_MaxNetSimulatorTimeout_13)); }
	inline uint32_t get_m_MaxNetSimulatorTimeout_13() const { return ___m_MaxNetSimulatorTimeout_13; }
	inline uint32_t* get_address_of_m_MaxNetSimulatorTimeout_13() { return &___m_MaxNetSimulatorTimeout_13; }
	inline void set_m_MaxNetSimulatorTimeout_13(uint32_t value)
	{
		___m_MaxNetSimulatorTimeout_13 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionReadyForSend_14() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_ConnectionReadyForSend_14)); }
	inline Action_2_t4177122770 * get_m_ConnectionReadyForSend_14() const { return ___m_ConnectionReadyForSend_14; }
	inline Action_2_t4177122770 ** get_address_of_m_ConnectionReadyForSend_14() { return &___m_ConnectionReadyForSend_14; }
	inline void set_m_ConnectionReadyForSend_14(Action_2_t4177122770 * value)
	{
		___m_ConnectionReadyForSend_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_ConnectionReadyForSend_14), value);
	}

	inline static int32_t get_offset_of_m_NetworkEventAvailable_15() { return static_cast<int32_t>(offsetof(GlobalConfig_t833512557, ___m_NetworkEventAvailable_15)); }
	inline Action_1_t3123413348 * get_m_NetworkEventAvailable_15() const { return ___m_NetworkEventAvailable_15; }
	inline Action_1_t3123413348 ** get_address_of_m_NetworkEventAvailable_15() { return &___m_NetworkEventAvailable_15; }
	inline void set_m_NetworkEventAvailable_15(Action_1_t3123413348 * value)
	{
		___m_NetworkEventAvailable_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_NetworkEventAvailable_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALCONFIG_T833512557_H
#ifndef CREATEMATCHRESPONSE_T1328247360_H
#define CREATEMATCHRESPONSE_T1328247360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.CreateMatchResponse
struct  CreateMatchResponse_t1328247360  : public BasicResponse_t1476713923
{
public:
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::address
	String_t* ___address_2;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::port
	int32_t ___port_3;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchResponse::domain
	int32_t ___domain_4;
	// System.UInt64 UnityEngine.Networking.Match.CreateMatchResponse::networkId
	uint64_t ___networkId_5;
	// System.String UnityEngine.Networking.Match.CreateMatchResponse::accessTokenString
	String_t* ___accessTokenString_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.CreateMatchResponse::nodeId
	uint16_t ___nodeId_7;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchResponse::usingRelay
	bool ___usingRelay_8;

public:
	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier((&___address_2), value);
	}

	inline static int32_t get_offset_of_port_3() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___port_3)); }
	inline int32_t get_port_3() const { return ___port_3; }
	inline int32_t* get_address_of_port_3() { return &___port_3; }
	inline void set_port_3(int32_t value)
	{
		___port_3 = value;
	}

	inline static int32_t get_offset_of_domain_4() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___domain_4)); }
	inline int32_t get_domain_4() const { return ___domain_4; }
	inline int32_t* get_address_of_domain_4() { return &___domain_4; }
	inline void set_domain_4(int32_t value)
	{
		___domain_4 = value;
	}

	inline static int32_t get_offset_of_networkId_5() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___networkId_5)); }
	inline uint64_t get_networkId_5() const { return ___networkId_5; }
	inline uint64_t* get_address_of_networkId_5() { return &___networkId_5; }
	inline void set_networkId_5(uint64_t value)
	{
		___networkId_5 = value;
	}

	inline static int32_t get_offset_of_accessTokenString_6() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___accessTokenString_6)); }
	inline String_t* get_accessTokenString_6() const { return ___accessTokenString_6; }
	inline String_t** get_address_of_accessTokenString_6() { return &___accessTokenString_6; }
	inline void set_accessTokenString_6(String_t* value)
	{
		___accessTokenString_6 = value;
		Il2CppCodeGenWriteBarrier((&___accessTokenString_6), value);
	}

	inline static int32_t get_offset_of_nodeId_7() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___nodeId_7)); }
	inline uint16_t get_nodeId_7() const { return ___nodeId_7; }
	inline uint16_t* get_address_of_nodeId_7() { return &___nodeId_7; }
	inline void set_nodeId_7(uint16_t value)
	{
		___nodeId_7 = value;
	}

	inline static int32_t get_offset_of_usingRelay_8() { return static_cast<int32_t>(offsetof(CreateMatchResponse_t1328247360, ___usingRelay_8)); }
	inline bool get_usingRelay_8() const { return ___usingRelay_8; }
	inline bool* get_address_of_usingRelay_8() { return &___usingRelay_8; }
	inline void set_usingRelay_8(bool value)
	{
		___usingRelay_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEMATCHRESPONSE_T1328247360_H
#ifndef JOINMATCHRESPONSE_T845270609_H
#define JOINMATCHRESPONSE_T845270609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchResponse
struct  JoinMatchResponse_t845270609  : public BasicResponse_t1476713923
{
public:
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::address
	String_t* ___address_2;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::port
	int32_t ___port_3;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::domain
	int32_t ___domain_4;
	// System.UInt64 UnityEngine.Networking.Match.JoinMatchResponse::networkId
	uint64_t ___networkId_5;
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::accessTokenString
	String_t* ___accessTokenString_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::nodeId
	uint16_t ___nodeId_7;
	// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::usingRelay
	bool ___usingRelay_8;

public:
	inline static int32_t get_offset_of_address_2() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___address_2)); }
	inline String_t* get_address_2() const { return ___address_2; }
	inline String_t** get_address_of_address_2() { return &___address_2; }
	inline void set_address_2(String_t* value)
	{
		___address_2 = value;
		Il2CppCodeGenWriteBarrier((&___address_2), value);
	}

	inline static int32_t get_offset_of_port_3() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___port_3)); }
	inline int32_t get_port_3() const { return ___port_3; }
	inline int32_t* get_address_of_port_3() { return &___port_3; }
	inline void set_port_3(int32_t value)
	{
		___port_3 = value;
	}

	inline static int32_t get_offset_of_domain_4() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___domain_4)); }
	inline int32_t get_domain_4() const { return ___domain_4; }
	inline int32_t* get_address_of_domain_4() { return &___domain_4; }
	inline void set_domain_4(int32_t value)
	{
		___domain_4 = value;
	}

	inline static int32_t get_offset_of_networkId_5() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___networkId_5)); }
	inline uint64_t get_networkId_5() const { return ___networkId_5; }
	inline uint64_t* get_address_of_networkId_5() { return &___networkId_5; }
	inline void set_networkId_5(uint64_t value)
	{
		___networkId_5 = value;
	}

	inline static int32_t get_offset_of_accessTokenString_6() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___accessTokenString_6)); }
	inline String_t* get_accessTokenString_6() const { return ___accessTokenString_6; }
	inline String_t** get_address_of_accessTokenString_6() { return &___accessTokenString_6; }
	inline void set_accessTokenString_6(String_t* value)
	{
		___accessTokenString_6 = value;
		Il2CppCodeGenWriteBarrier((&___accessTokenString_6), value);
	}

	inline static int32_t get_offset_of_nodeId_7() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___nodeId_7)); }
	inline uint16_t get_nodeId_7() const { return ___nodeId_7; }
	inline uint16_t* get_address_of_nodeId_7() { return &___nodeId_7; }
	inline void set_nodeId_7(uint16_t value)
	{
		___nodeId_7 = value;
	}

	inline static int32_t get_offset_of_usingRelay_8() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t845270609, ___usingRelay_8)); }
	inline bool get_usingRelay_8() const { return ___usingRelay_8; }
	inline bool* get_address_of_usingRelay_8() { return &___usingRelay_8; }
	inline void set_usingRelay_8(bool value)
	{
		___usingRelay_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINMATCHRESPONSE_T845270609_H
#ifndef MATCHDESC_T3827228697_H
#define MATCHDESC_T3827228697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchDesc
struct  MatchDesc_t3827228697  : public RuntimeObject
{
public:
	// System.UInt64 UnityEngine.Networking.Match.MatchDesc::networkId
	uint64_t ___networkId_0;
	// System.String UnityEngine.Networking.Match.MatchDesc::name
	String_t* ___name_1;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::averageEloScore
	int32_t ___averageEloScore_2;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::maxSize
	int32_t ___maxSize_3;
	// System.Int32 UnityEngine.Networking.Match.MatchDesc::currentSize
	int32_t ___currentSize_4;
	// System.Boolean UnityEngine.Networking.Match.MatchDesc::isPrivate
	bool ___isPrivate_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::matchAttributes
	Dictionary_2_t3521823603 * ___matchAttributes_6;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::hostNodeId
	uint16_t ___hostNodeId_7;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::directConnectInfos
	List_1_t32447842 * ___directConnectInfos_8;

public:
	inline static int32_t get_offset_of_networkId_0() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___networkId_0)); }
	inline uint64_t get_networkId_0() const { return ___networkId_0; }
	inline uint64_t* get_address_of_networkId_0() { return &___networkId_0; }
	inline void set_networkId_0(uint64_t value)
	{
		___networkId_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_averageEloScore_2() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___averageEloScore_2)); }
	inline int32_t get_averageEloScore_2() const { return ___averageEloScore_2; }
	inline int32_t* get_address_of_averageEloScore_2() { return &___averageEloScore_2; }
	inline void set_averageEloScore_2(int32_t value)
	{
		___averageEloScore_2 = value;
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___maxSize_3)); }
	inline int32_t get_maxSize_3() const { return ___maxSize_3; }
	inline int32_t* get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(int32_t value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_currentSize_4() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___currentSize_4)); }
	inline int32_t get_currentSize_4() const { return ___currentSize_4; }
	inline int32_t* get_address_of_currentSize_4() { return &___currentSize_4; }
	inline void set_currentSize_4(int32_t value)
	{
		___currentSize_4 = value;
	}

	inline static int32_t get_offset_of_isPrivate_5() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___isPrivate_5)); }
	inline bool get_isPrivate_5() const { return ___isPrivate_5; }
	inline bool* get_address_of_isPrivate_5() { return &___isPrivate_5; }
	inline void set_isPrivate_5(bool value)
	{
		___isPrivate_5 = value;
	}

	inline static int32_t get_offset_of_matchAttributes_6() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___matchAttributes_6)); }
	inline Dictionary_2_t3521823603 * get_matchAttributes_6() const { return ___matchAttributes_6; }
	inline Dictionary_2_t3521823603 ** get_address_of_matchAttributes_6() { return &___matchAttributes_6; }
	inline void set_matchAttributes_6(Dictionary_2_t3521823603 * value)
	{
		___matchAttributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___matchAttributes_6), value);
	}

	inline static int32_t get_offset_of_hostNodeId_7() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___hostNodeId_7)); }
	inline uint16_t get_hostNodeId_7() const { return ___hostNodeId_7; }
	inline uint16_t* get_address_of_hostNodeId_7() { return &___hostNodeId_7; }
	inline void set_hostNodeId_7(uint16_t value)
	{
		___hostNodeId_7 = value;
	}

	inline static int32_t get_offset_of_directConnectInfos_8() { return static_cast<int32_t>(offsetof(MatchDesc_t3827228697, ___directConnectInfos_8)); }
	inline List_1_t32447842 * get_directConnectInfos_8() const { return ___directConnectInfos_8; }
	inline List_1_t32447842 ** get_address_of_directConnectInfos_8() { return &___directConnectInfos_8; }
	inline void set_directConnectInfos_8(List_1_t32447842 * value)
	{
		___directConnectInfos_8 = value;
		Il2CppCodeGenWriteBarrier((&___directConnectInfos_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHDESC_T3827228697_H
#ifndef MATCHDIRECTCONNECTINFO_T2855340396_H
#define MATCHDIRECTCONNECTINFO_T2855340396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchDirectConnectInfo
struct  MatchDirectConnectInfo_t2855340396  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDirectConnectInfo::nodeId
	uint16_t ___nodeId_0;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::publicAddress
	String_t* ___publicAddress_1;
	// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::privateAddress
	String_t* ___privateAddress_2;
	// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchDirectConnectInfo::hostPriority
	int32_t ___hostPriority_3;

public:
	inline static int32_t get_offset_of_nodeId_0() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___nodeId_0)); }
	inline uint16_t get_nodeId_0() const { return ___nodeId_0; }
	inline uint16_t* get_address_of_nodeId_0() { return &___nodeId_0; }
	inline void set_nodeId_0(uint16_t value)
	{
		___nodeId_0 = value;
	}

	inline static int32_t get_offset_of_publicAddress_1() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___publicAddress_1)); }
	inline String_t* get_publicAddress_1() const { return ___publicAddress_1; }
	inline String_t** get_address_of_publicAddress_1() { return &___publicAddress_1; }
	inline void set_publicAddress_1(String_t* value)
	{
		___publicAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___publicAddress_1), value);
	}

	inline static int32_t get_offset_of_privateAddress_2() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___privateAddress_2)); }
	inline String_t* get_privateAddress_2() const { return ___privateAddress_2; }
	inline String_t** get_address_of_privateAddress_2() { return &___privateAddress_2; }
	inline void set_privateAddress_2(String_t* value)
	{
		___privateAddress_2 = value;
		Il2CppCodeGenWriteBarrier((&___privateAddress_2), value);
	}

	inline static int32_t get_offset_of_hostPriority_3() { return static_cast<int32_t>(offsetof(MatchDirectConnectInfo_t2855340396, ___hostPriority_3)); }
	inline int32_t get_hostPriority_3() const { return ___hostPriority_3; }
	inline int32_t* get_address_of_hostPriority_3() { return &___hostPriority_3; }
	inline void set_hostPriority_3(int32_t value)
	{
		___hostPriority_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHDIRECTCONNECTINFO_T2855340396_H
#ifndef MATCHINFO_T221301733_H
#define MATCHINFO_T221301733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfo
struct  MatchInfo_t221301733  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.Match.MatchInfo::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_1;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Match.MatchInfo::<accessToken>k__BackingField
	NetworkAccessToken_t320639760 * ___U3CaccessTokenU3Ek__BackingField_4;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.MatchInfo::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CaddressU3Ek__BackingField_0)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_0() const { return ___U3CaddressU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_0() { return &___U3CaddressU3Ek__BackingField_0; }
	inline void set_U3CaddressU3Ek__BackingField_0(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaddressU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CportU3Ek__BackingField_1)); }
	inline int32_t get_U3CportU3Ek__BackingField_1() const { return ___U3CportU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_1() { return &___U3CportU3Ek__BackingField_1; }
	inline void set_U3CportU3Ek__BackingField_1(int32_t value)
	{
		___U3CportU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CdomainU3Ek__BackingField_2)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_2() const { return ___U3CdomainU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_2() { return &___U3CdomainU3Ek__BackingField_2; }
	inline void set_U3CdomainU3Ek__BackingField_2(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CnetworkIdU3Ek__BackingField_3)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_3() const { return ___U3CnetworkIdU3Ek__BackingField_3; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_3() { return &___U3CnetworkIdU3Ek__BackingField_3; }
	inline void set_U3CnetworkIdU3Ek__BackingField_3(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CaccessTokenU3Ek__BackingField_4)); }
	inline NetworkAccessToken_t320639760 * get_U3CaccessTokenU3Ek__BackingField_4() const { return ___U3CaccessTokenU3Ek__BackingField_4; }
	inline NetworkAccessToken_t320639760 ** get_address_of_U3CaccessTokenU3Ek__BackingField_4() { return &___U3CaccessTokenU3Ek__BackingField_4; }
	inline void set_U3CaccessTokenU3Ek__BackingField_4(NetworkAccessToken_t320639760 * value)
	{
		___U3CaccessTokenU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CnodeIdU3Ek__BackingField_5)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_5() const { return ___U3CnodeIdU3Ek__BackingField_5; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_5() { return &___U3CnodeIdU3Ek__BackingField_5; }
	inline void set_U3CnodeIdU3Ek__BackingField_5(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MatchInfo_t221301733, ___U3CusingRelayU3Ek__BackingField_6)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_6() const { return ___U3CusingRelayU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_6() { return &___U3CusingRelayU3Ek__BackingField_6; }
	inline void set_U3CusingRelayU3Ek__BackingField_6(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFO_T221301733_H
#ifndef MATCHINFOSNAPSHOT_T3166422189_H
#define MATCHINFOSNAPSHOT_T3166422189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfoSnapshot
struct  MatchInfoSnapshot_t3166422189  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfoSnapshot::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_0;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfoSnapshot::<hostNodeId>k__BackingField
	uint16_t ___U3ChostNodeIdU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<averageEloScore>k__BackingField
	int32_t ___U3CaverageEloScoreU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<maxSize>k__BackingField
	int32_t ___U3CmaxSizeU3Ek__BackingField_4;
	// System.Int32 UnityEngine.Networking.Match.MatchInfoSnapshot::<currentSize>k__BackingField
	int32_t ___U3CcurrentSizeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.MatchInfoSnapshot::<isPrivate>k__BackingField
	bool ___U3CisPrivateU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchInfoSnapshot::<matchAttributes>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributesU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::<directConnectInfos>k__BackingField
	List_1_t2090095927 * ___U3CdirectConnectInfosU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CnetworkIdU3Ek__BackingField_0)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_0() const { return ___U3CnetworkIdU3Ek__BackingField_0; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_0() { return &___U3CnetworkIdU3Ek__BackingField_0; }
	inline void set_U3CnetworkIdU3Ek__BackingField_0(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3ChostNodeIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3ChostNodeIdU3Ek__BackingField_1)); }
	inline uint16_t get_U3ChostNodeIdU3Ek__BackingField_1() const { return ___U3ChostNodeIdU3Ek__BackingField_1; }
	inline uint16_t* get_address_of_U3ChostNodeIdU3Ek__BackingField_1() { return &___U3ChostNodeIdU3Ek__BackingField_1; }
	inline void set_U3ChostNodeIdU3Ek__BackingField_1(uint16_t value)
	{
		___U3ChostNodeIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CnameU3Ek__BackingField_2)); }
	inline String_t* get_U3CnameU3Ek__BackingField_2() const { return ___U3CnameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_2() { return &___U3CnameU3Ek__BackingField_2; }
	inline void set_U3CnameU3Ek__BackingField_2(String_t* value)
	{
		___U3CnameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CaverageEloScoreU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CaverageEloScoreU3Ek__BackingField_3)); }
	inline int32_t get_U3CaverageEloScoreU3Ek__BackingField_3() const { return ___U3CaverageEloScoreU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CaverageEloScoreU3Ek__BackingField_3() { return &___U3CaverageEloScoreU3Ek__BackingField_3; }
	inline void set_U3CaverageEloScoreU3Ek__BackingField_3(int32_t value)
	{
		___U3CaverageEloScoreU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmaxSizeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CmaxSizeU3Ek__BackingField_4)); }
	inline int32_t get_U3CmaxSizeU3Ek__BackingField_4() const { return ___U3CmaxSizeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmaxSizeU3Ek__BackingField_4() { return &___U3CmaxSizeU3Ek__BackingField_4; }
	inline void set_U3CmaxSizeU3Ek__BackingField_4(int32_t value)
	{
		___U3CmaxSizeU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CcurrentSizeU3Ek__BackingField_5)); }
	inline int32_t get_U3CcurrentSizeU3Ek__BackingField_5() const { return ___U3CcurrentSizeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CcurrentSizeU3Ek__BackingField_5() { return &___U3CcurrentSizeU3Ek__BackingField_5; }
	inline void set_U3CcurrentSizeU3Ek__BackingField_5(int32_t value)
	{
		___U3CcurrentSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisPrivateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CisPrivateU3Ek__BackingField_6)); }
	inline bool get_U3CisPrivateU3Ek__BackingField_6() const { return ___U3CisPrivateU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisPrivateU3Ek__BackingField_6() { return &___U3CisPrivateU3Ek__BackingField_6; }
	inline void set_U3CisPrivateU3Ek__BackingField_6(bool value)
	{
		___U3CisPrivateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CmatchAttributesU3Ek__BackingField_7)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributesU3Ek__BackingField_7() const { return ___U3CmatchAttributesU3Ek__BackingField_7; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_7() { return &___U3CmatchAttributesU3Ek__BackingField_7; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_7(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributesU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MatchInfoSnapshot_t3166422189, ___U3CdirectConnectInfosU3Ek__BackingField_8)); }
	inline List_1_t2090095927 * get_U3CdirectConnectInfosU3Ek__BackingField_8() const { return ___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline List_1_t2090095927 ** get_address_of_U3CdirectConnectInfosU3Ek__BackingField_8() { return &___U3CdirectConnectInfosU3Ek__BackingField_8; }
	inline void set_U3CdirectConnectInfosU3Ek__BackingField_8(List_1_t2090095927 * value)
	{
		___U3CdirectConnectInfosU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdirectConnectInfosU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFOSNAPSHOT_T3166422189_H
#ifndef MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#define MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot
struct  MatchInfoDirectConnectSnapshot_t618021185  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_0;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.HostPriority UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::<hostPriority>k__BackingField
	int32_t ___U3ChostPriorityU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CnodeIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_0() const { return ___U3CnodeIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_0() { return &___U3CnodeIdU3Ek__BackingField_0; }
	inline void set_U3CnodeIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CpublicAddressU3Ek__BackingField_1)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_1() const { return ___U3CpublicAddressU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_1() { return &___U3CpublicAddressU3Ek__BackingField_1; }
	inline void set_U3CpublicAddressU3Ek__BackingField_1(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3CprivateAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_2() const { return ___U3CprivateAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_2() { return &___U3CprivateAddressU3Ek__BackingField_2; }
	inline void set_U3CprivateAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3ChostPriorityU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfoDirectConnectSnapshot_t618021185, ___U3ChostPriorityU3Ek__BackingField_3)); }
	inline int32_t get_U3ChostPriorityU3Ek__BackingField_3() const { return ___U3ChostPriorityU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3ChostPriorityU3Ek__BackingField_3() { return &___U3ChostPriorityU3Ek__BackingField_3; }
	inline void set_U3ChostPriorityU3Ek__BackingField_3(int32_t value)
	{
		___U3ChostPriorityU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHINFODIRECTCONNECTSNAPSHOT_T618021185_H
#ifndef REQUEST_T2696089890_H
#define REQUEST_T2696089890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.Request
struct  Request_t2696089890  : public RuntimeObject
{
public:
	// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::<sourceId>k__BackingField
	uint64_t ___U3CsourceIdU3Ek__BackingField_1;
	// System.String UnityEngine.Networking.Match.Request::<projectId>k__BackingField
	String_t* ___U3CprojectIdU3Ek__BackingField_2;
	// System.String UnityEngine.Networking.Match.Request::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_3;
	// System.Int32 UnityEngine.Networking.Match.Request::<domain>k__BackingField
	int32_t ___U3CdomainU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsourceIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CsourceIdU3Ek__BackingField_1)); }
	inline uint64_t get_U3CsourceIdU3Ek__BackingField_1() const { return ___U3CsourceIdU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CsourceIdU3Ek__BackingField_1() { return &___U3CsourceIdU3Ek__BackingField_1; }
	inline void set_U3CsourceIdU3Ek__BackingField_1(uint64_t value)
	{
		___U3CsourceIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CprojectIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CprojectIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CprojectIdU3Ek__BackingField_2() const { return ___U3CprojectIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CprojectIdU3Ek__BackingField_2() { return &___U3CprojectIdU3Ek__BackingField_2; }
	inline void set_U3CprojectIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CprojectIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprojectIdU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CaccessTokenStringU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CaccessTokenStringU3Ek__BackingField_3)); }
	inline String_t* get_U3CaccessTokenStringU3Ek__BackingField_3() const { return ___U3CaccessTokenStringU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CaccessTokenStringU3Ek__BackingField_3() { return &___U3CaccessTokenStringU3Ek__BackingField_3; }
	inline void set_U3CaccessTokenStringU3Ek__BackingField_3(String_t* value)
	{
		___U3CaccessTokenStringU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaccessTokenStringU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CdomainU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Request_t2696089890, ___U3CdomainU3Ek__BackingField_4)); }
	inline int32_t get_U3CdomainU3Ek__BackingField_4() const { return ___U3CdomainU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CdomainU3Ek__BackingField_4() { return &___U3CdomainU3Ek__BackingField_4; }
	inline void set_U3CdomainU3Ek__BackingField_4(int32_t value)
	{
		___U3CdomainU3Ek__BackingField_4 = value;
	}
};

struct Request_t2696089890_StaticFields
{
public:
	// System.Int32 UnityEngine.Networking.Match.Request::currentVersion
	int32_t ___currentVersion_0;

public:
	inline static int32_t get_offset_of_currentVersion_0() { return static_cast<int32_t>(offsetof(Request_t2696089890_StaticFields, ___currentVersion_0)); }
	inline int32_t get_currentVersion_0() const { return ___currentVersion_0; }
	inline int32_t* get_address_of_currentVersion_0() { return &___currentVersion_0; }
	inline void set_currentVersion_0(int32_t value)
	{
		___currentVersion_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUEST_T2696089890_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef ACTION_1_T3123413348_H
#define ACTION_1_T3123413348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Int32>
struct  Action_1_t3123413348  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3123413348_H
#ifndef ACTION_2_T4177122770_H
#define ACTION_2_T4177122770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Int32,System.Int32>
struct  Action_2_t4177122770  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T4177122770_H
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
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef CREATEMATCHREQUEST_T2600446299_H
#define CREATEMATCHREQUEST_T2600446299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.CreateMatchRequest
struct  CreateMatchRequest_t2600446299  : public Request_t2696089890
{
public:
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_5;
	// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::<size>k__BackingField
	uint32_t ___U3CsizeU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_7;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::<advertise>k__BackingField
	bool ___U3CadvertiseU3Ek__BackingField_10;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::<matchAttributes>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributesU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CnameU3Ek__BackingField_5)); }
	inline String_t* get_U3CnameU3Ek__BackingField_5() const { return ___U3CnameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_5() { return &___U3CnameU3Ek__BackingField_5; }
	inline void set_U3CnameU3Ek__BackingField_5(String_t* value)
	{
		___U3CnameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CsizeU3Ek__BackingField_6)); }
	inline uint32_t get_U3CsizeU3Ek__BackingField_6() const { return ___U3CsizeU3Ek__BackingField_6; }
	inline uint32_t* get_address_of_U3CsizeU3Ek__BackingField_6() { return &___U3CsizeU3Ek__BackingField_6; }
	inline void set_U3CsizeU3Ek__BackingField_6(uint32_t value)
	{
		___U3CsizeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CpublicAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_7() const { return ___U3CpublicAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_7() { return &___U3CpublicAddressU3Ek__BackingField_7; }
	inline void set_U3CpublicAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CprivateAddressU3Ek__BackingField_8)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_8() const { return ___U3CprivateAddressU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_8() { return &___U3CprivateAddressU3Ek__BackingField_8; }
	inline void set_U3CprivateAddressU3Ek__BackingField_8(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CeloScoreU3Ek__BackingField_9)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_9() const { return ___U3CeloScoreU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_9() { return &___U3CeloScoreU3Ek__BackingField_9; }
	inline void set_U3CeloScoreU3Ek__BackingField_9(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CadvertiseU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CadvertiseU3Ek__BackingField_10)); }
	inline bool get_U3CadvertiseU3Ek__BackingField_10() const { return ___U3CadvertiseU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CadvertiseU3Ek__BackingField_10() { return &___U3CadvertiseU3Ek__BackingField_10; }
	inline void set_U3CadvertiseU3Ek__BackingField_10(bool value)
	{
		___U3CadvertiseU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CpasswordU3Ek__BackingField_11)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_11() const { return ___U3CpasswordU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_11() { return &___U3CpasswordU3Ek__BackingField_11; }
	inline void set_U3CpasswordU3Ek__BackingField_11(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpasswordU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t2600446299, ___U3CmatchAttributesU3Ek__BackingField_12)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributesU3Ek__BackingField_12() const { return ___U3CmatchAttributesU3Ek__BackingField_12; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_12() { return &___U3CmatchAttributesU3Ek__BackingField_12; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_12(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributesU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEMATCHREQUEST_T2600446299_H
#ifndef DESTROYMATCHREQUEST_T2124150613_H
#define DESTROYMATCHREQUEST_T2124150613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DestroyMatchRequest
struct  DestroyMatchRequest_t2124150613  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DestroyMatchRequest_t2124150613, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYMATCHREQUEST_T2124150613_H
#ifndef DROPCONNECTIONREQUEST_T2647317937_H
#define DROPCONNECTIONREQUEST_T2647317937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.DropConnectionRequest
struct  DropConnectionRequest_t2647317937  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DropConnectionRequest_t2647317937, ___U3CnodeIdU3Ek__BackingField_6)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_6() const { return ___U3CnodeIdU3Ek__BackingField_6; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_6() { return &___U3CnodeIdU3Ek__BackingField_6; }
	inline void set_U3CnodeIdU3Ek__BackingField_6(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DROPCONNECTIONREQUEST_T2647317937_H
#ifndef JOINMATCHREQUEST_T3991767598_H
#define JOINMATCHREQUEST_T3991767598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchRequest
struct  JoinMatchRequest_t3991767598  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<publicAddress>k__BackingField
	String_t* ___U3CpublicAddressU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<privateAddress>k__BackingField
	String_t* ___U3CprivateAddressU3Ek__BackingField_7;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_8;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpublicAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CpublicAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CpublicAddressU3Ek__BackingField_6() const { return ___U3CpublicAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CpublicAddressU3Ek__BackingField_6() { return &___U3CpublicAddressU3Ek__BackingField_6; }
	inline void set_U3CpublicAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CpublicAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpublicAddressU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CprivateAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CprivateAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CprivateAddressU3Ek__BackingField_7() const { return ___U3CprivateAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CprivateAddressU3Ek__BackingField_7() { return &___U3CprivateAddressU3Ek__BackingField_7; }
	inline void set_U3CprivateAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CprivateAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CprivateAddressU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CeloScoreU3Ek__BackingField_8)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_8() const { return ___U3CeloScoreU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_8() { return &___U3CeloScoreU3Ek__BackingField_8; }
	inline void set_U3CeloScoreU3Ek__BackingField_8(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3991767598, ___U3CpasswordU3Ek__BackingField_9)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_9() const { return ___U3CpasswordU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_9() { return &___U3CpasswordU3Ek__BackingField_9; }
	inline void set_U3CpasswordU3Ek__BackingField_9(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpasswordU3Ek__BackingField_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINMATCHREQUEST_T3991767598_H
#ifndef LISTMATCHREQUEST_T1588429355_H
#define LISTMATCHREQUEST_T1588429355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ListMatchRequest
struct  ListMatchRequest_t1588429355  : public Request_t2696089890
{
public:
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageSize>k__BackingField
	int32_t ___U3CpageSizeU3Ek__BackingField_5;
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<pageNum>k__BackingField
	int32_t ___U3CpageNumU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.ListMatchRequest::<nameFilter>k__BackingField
	String_t* ___U3CnameFilterU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::<filterOutPrivateMatches>k__BackingField
	bool ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8;
	// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::<eloScore>k__BackingField
	int32_t ___U3CeloScoreU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterLessThan>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterEqualTo>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::<matchAttributeFilterGreaterThan>k__BackingField
	Dictionary_2_t3521823603 * ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_U3CpageSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CpageSizeU3Ek__BackingField_5)); }
	inline int32_t get_U3CpageSizeU3Ek__BackingField_5() const { return ___U3CpageSizeU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CpageSizeU3Ek__BackingField_5() { return &___U3CpageSizeU3Ek__BackingField_5; }
	inline void set_U3CpageSizeU3Ek__BackingField_5(int32_t value)
	{
		___U3CpageSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CpageNumU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CpageNumU3Ek__BackingField_6)); }
	inline int32_t get_U3CpageNumU3Ek__BackingField_6() const { return ___U3CpageNumU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CpageNumU3Ek__BackingField_6() { return &___U3CpageNumU3Ek__BackingField_6; }
	inline void set_U3CpageNumU3Ek__BackingField_6(int32_t value)
	{
		___U3CpageNumU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CnameFilterU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CnameFilterU3Ek__BackingField_7)); }
	inline String_t* get_U3CnameFilterU3Ek__BackingField_7() const { return ___U3CnameFilterU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CnameFilterU3Ek__BackingField_7() { return &___U3CnameFilterU3Ek__BackingField_7; }
	inline void set_U3CnameFilterU3Ek__BackingField_7(String_t* value)
	{
		___U3CnameFilterU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnameFilterU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8)); }
	inline bool get_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() const { return ___U3CfilterOutPrivateMatchesU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CfilterOutPrivateMatchesU3Ek__BackingField_8() { return &___U3CfilterOutPrivateMatchesU3Ek__BackingField_8; }
	inline void set_U3CfilterOutPrivateMatchesU3Ek__BackingField_8(bool value)
	{
		___U3CfilterOutPrivateMatchesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CeloScoreU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CeloScoreU3Ek__BackingField_9)); }
	inline int32_t get_U3CeloScoreU3Ek__BackingField_9() const { return ___U3CeloScoreU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CeloScoreU3Ek__BackingField_9() { return &___U3CeloScoreU3Ek__BackingField_9; }
	inline void set_U3CeloScoreU3Ek__BackingField_9(int32_t value)
	{
		___U3CeloScoreU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() const { return ___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10() { return &___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10; }
	inline void set_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterLessThanU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() const { return ___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11() { return &___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11; }
	inline void set_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterEqualToU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ListMatchRequest_t1588429355, ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12)); }
	inline Dictionary_2_t3521823603 * get_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() const { return ___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12; }
	inline Dictionary_2_t3521823603 ** get_address_of_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12() { return &___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12; }
	inline void set_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12(Dictionary_2_t3521823603 * value)
	{
		___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTMATCHREQUEST_T1588429355_H
#ifndef BASICRESPONSEDELEGATE_T2196726690_H
#define BASICRESPONSEDELEGATE_T2196726690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate
struct  BasicResponseDelegate_t2196726690  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICRESPONSEDELEGATE_T2196726690_H
#ifndef DATARESPONSEDELEGATE_1_T309155718_H
#define DATARESPONSEDELEGATE_1_T309155718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>
struct  DataResponseDelegate_1_t309155718  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARESPONSEDELEGATE_1_T309155718_H
#ifndef DATARESPONSEDELEGATE_1_T186927816_H
#define DATARESPONSEDELEGATE_1_T186927816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>
struct  DataResponseDelegate_1_t186927816  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARESPONSEDELEGATE_1_T186927816_H
#ifndef INTERNALRESPONSEDELEGATE_2_T753237801_H
#define INTERNALRESPONSEDELEGATE_2_T753237801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct  InternalResponseDelegate_2_t753237801  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T753237801_H
#ifndef INTERNALRESPONSEDELEGATE_2_T992249662_H
#define INTERNALRESPONSEDELEGATE_2_T992249662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct  InternalResponseDelegate_2_t992249662  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T992249662_H
#ifndef INTERNALRESPONSEDELEGATE_2_T304736019_H
#define INTERNALRESPONSEDELEGATE_2_T304736019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>
struct  InternalResponseDelegate_2_t304736019  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T304736019_H
#ifndef INTERNALRESPONSEDELEGATE_2_T3313634249_H
#define INTERNALRESPONSEDELEGATE_2_T3313634249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>
struct  InternalResponseDelegate_2_t3313634249  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T3313634249_H
#ifndef INTERNALRESPONSEDELEGATE_2_T873951790_H
#define INTERNALRESPONSEDELEGATE_2_T873951790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>
struct  InternalResponseDelegate_2_t873951790  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALRESPONSEDELEGATE_2_T873951790_H
#ifndef SETMATCHATTRIBUTESREQUEST_T2732203151_H
#define SETMATCHATTRIBUTESREQUEST_T2732203151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.SetMatchAttributesRequest
struct  SetMatchAttributesRequest_t2732203151  : public Request_t2696089890
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::<isListed>k__BackingField
	bool ___U3CisListedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SetMatchAttributesRequest_t2732203151, ___U3CnetworkIdU3Ek__BackingField_5)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_5() const { return ___U3CnetworkIdU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_5() { return &___U3CnetworkIdU3Ek__BackingField_5; }
	inline void set_U3CnetworkIdU3Ek__BackingField_5(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CisListedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SetMatchAttributesRequest_t2732203151, ___U3CisListedU3Ek__BackingField_6)); }
	inline bool get_U3CisListedU3Ek__BackingField_6() const { return ___U3CisListedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CisListedU3Ek__BackingField_6() { return &___U3CisListedU3Ek__BackingField_6; }
	inline void set_U3CisListedU3Ek__BackingField_6(bool value)
	{
		___U3CisListedU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETMATCHATTRIBUTESREQUEST_T2732203151_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef NETWORKMATCH_T2930480025_H
#define NETWORKMATCH_T2930480025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch
struct  NetworkMatch_t2930480025  : public MonoBehaviour_t3962482529
{
public:
	// System.Uri UnityEngine.Networking.Match.NetworkMatch::m_BaseUri
	Uri_t100236324 * ___m_BaseUri_4;

public:
	inline static int32_t get_offset_of_m_BaseUri_4() { return static_cast<int32_t>(offsetof(NetworkMatch_t2930480025, ___m_BaseUri_4)); }
	inline Uri_t100236324 * get_m_BaseUri_4() const { return ___m_BaseUri_4; }
	inline Uri_t100236324 ** get_address_of_m_BaseUri_4() { return &___m_BaseUri_4; }
	inline void set_m_BaseUri_4(Uri_t100236324 * value)
	{
		___m_BaseUri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseUri_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKMATCH_T2930480025_H
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2346872663 * List_1_AsReadOnly_m3149855852_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int64>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4178626270_gshared (Dictionary_2_t789006292 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void InternalResponseDelegate_2__ctor_m3201973790_gshared (InternalResponseDelegate_2_t3324166758 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<System.Object,System.Object>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t3324166758 * ___internalCallback1, RuntimeObject * ___userCallback2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>::Invoke(System.Boolean,System.String,T)
extern "C" IL2CPP_METHOD_ATTR void DataResponseDelegate_1_Invoke_m1974839323_gshared (DataResponseDelegate_1_t3045732247 * __this, bool p0, String_t* p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m990283339_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m963104344_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3180043010_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m2634421657_gshared (Dictionary_2_t1966579963 * __this, uint64_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2241802331_gshared (Dictionary_2_t1966579963 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m3076065613 (NullReferenceException_t1023182353 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
inline void List_1__ctor_m4168264895 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
inline void List_1__ctor_m441991155 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
inline Enumerator_t957335443  List_1_GetEnumerator_m4246513235 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t957335443  (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
inline ChannelQOS_t1890984120 * Enumerator_get_Current_m1808369071 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t1890984120 * (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(!0)
inline void List_1_Add_m423166763 (List_1_t3363058862 * __this, ChannelQOS_t1890984120 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3363058862 *, ChannelQOS_t1890984120 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
inline bool Enumerator_MoveNext_m349679386 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
inline void Enumerator_Dispose_m3004041484 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
inline Enumerator_t1672722441  List_1_GetEnumerator_m1327152933 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1672722441  (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
inline List_1_t2606371118 * Enumerator_get_Current_m2439261711 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t2606371118 * (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(!0)
inline void List_1_Add_m1960376679 (List_1_t4078445860 * __this, List_1_t2606371118 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4078445860 *, List_1_t2606371118 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_m491916196 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_m2814761745 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
inline int32_t List_1_get_Count_m3550276212 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m1422624963 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Item(System.Int32)
inline ChannelQOS_t1890984120 * List_1_get_Item_m977601184 (List_1_t3363058862 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t1890984120 * (*) (List_1_t3363058862 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m209007790 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Item(System.Int32)
inline List_1_t2606371118 * List_1_get_Item_m2000198085 (List_1_t4078445860 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  List_1_t2606371118 * (*) (List_1_t4078445860 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
inline ReadOnlyCollection_1_t2346872663 * List_1_AsReadOnly_m3149855852 (List_1_t2606371118 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t2346872663 * (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_AsReadOnly_m3149855852_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWrapper_m4242995060 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPacketSize_m3352433354 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m3690693204 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitFragmentSize_m4083592312 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1229339277 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitResendTimeout_m4785138 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m3211708483 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitDisconnectTimeout_m121854687 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m3841211537 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitConnectTimeout_m3275392522 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m2622211838 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPingTimeout_m2511090311 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m3505647457 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitReducedPingTimeout_m612333836 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m3668505184 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAllCostTimeout_m1149782117 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m2415930717 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m1742682903 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m639248559 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m2859947532 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAckDelay_m507392147 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m1334024800 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitSendDelay_m2800814260 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_m4197376336 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAcksType_m4235038191 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864 (ConnectionConfigInternal_t1246935692 * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m2551929270 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitInitialBandwidth_m3853047278 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
extern "C" IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m3811085112 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278 (ConnectionConfigInternal_t1246935692 * __this, float ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m426270519 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCertFilePath_m8859585 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m1339016177 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCAFilePath_m1966096029 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m2188161631 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m2993044037 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m1630695256 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m1826991094 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124 (ConnectionConfigInternal_t1246935692 * __this, ByteU5BU5D_t4116647657* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m741640762 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionSimulatorConfig::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionSimulatorConfig_Dispose_m2856371415 (ConnectionSimulatorConfig_t1375549810 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitWrapper_m1808118561 (GlobalConfigInternal_t1872710257 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_ThreadAwakeTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_ThreadAwakeTimeout_m2647936312 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitThreadAwakeTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method);
// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::get_ReactorModel()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalConfig_get_ReactorModel_m2253578453 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorModel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorModel_m3035491100 (GlobalConfigInternal_t1872710257 * __this, uint8_t ___model0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumReceivedMessages()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumReceivedMessages_m699484383 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumReceivedMessages(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumSentMessages()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumSentMessages_m2027095935 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumSentMessages(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxPacketSize_m1953127404 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxPacketSize_m2471663804 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxHosts()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxHosts_m2491759023 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxHosts(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxHosts_m3566676652 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.GlobalConfig::get_ThreadPoolSize()
extern "C" IL2CPP_METHOD_ATTR uint8_t GlobalConfig_get_ThreadPoolSize_m2338865308 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitThreadPoolSize(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitThreadPoolSize_m881476369 (GlobalConfigInternal_t1872710257 * __this, uint8_t ___size0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinTimerTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinTimerTimeout_m2541097014 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMinTimerTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMinTimerTimeout_m942145579 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxTimerTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxTimerTimeout_m4065814595 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxTimerTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxTimerTimeout_m3150012622 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinNetSimulatorTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinNetSimulatorTimeout_m757690315 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMinNetSimulatorTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxNetSimulatorTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxNetSimulatorTimeout_m4144130818 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxNetSimulatorTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_Dispose_m447882822 (GlobalConfigInternal_t1872710257 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
inline void List_1__ctor_m607530126 (List_1_t1351088715 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1351088715 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Count()
inline int32_t List_1_get_Count_m1480908111 (List_1_t1351088715 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1351088715 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Item(System.Int32)
inline ConnectionConfig_t4173981269 * List_1_get_Item_m1179646797 (List_1_t1351088715 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ConnectionConfig_t4173981269 * (*) (List_1_t1351088715 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m151495501 (ConnectionConfigInternal_t1246935692 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1800856148 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitWrapper_m1635473231 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_GetSpecialConnectionConfig_m1011380843 (HostTopology_t4059263395 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfig_m211304006 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitOtherParameters(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitOtherParameters_m3587098563 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m1643446820 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitReceivedPoolSize_m2115070075 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m3561946879 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitSentMessagePoolSize_m3801353223 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C" IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449 (HostTopologyInternal_t761087795 * __this, float ___factor0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m1652380424 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Response__ctor_m1005354347 (Response_t2513603462 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Request__ctor_m873075042 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_ToString_m2900465251 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_name_m2145735034 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" IL2CPP_METHOD_ATTR uint32_t CreateMatchRequest_get_size_m3980857567 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_publicAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_publicAddress_m3336041532 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_privateAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_privateAddress_m3613518697 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t CreateMatchRequest_get_eloScore_m1485273462 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" IL2CPP_METHOD_ATTR bool CreateMatchRequest_get_advertise_m865484440 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_password_m3435449282 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * CreateMatchRequest_get_matchAttributes_m3276240993 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Int64>::get_Count()
inline int32_t Dictionary_2_get_Count_m1082800239 (Dictionary_2_t3521823603 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3521823603 *, const RuntimeMethod*))Dictionary_2_get_Count_m4178626270_gshared)(__this, method);
}
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasicResponse__ctor_m3021811122 (BasicResponse_t1476713923 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Response_ToString_m2727218217 (Response_t2513603462 * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Enum::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Enum_ToString_m2477889358 (RuntimeObject * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t DestroyMatchRequest_get_networkId_m1753108237 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t DropConnectionRequest_get_networkId_m2906146404 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" IL2CPP_METHOD_ATTR uint16_t DropConnectionRequest_get_nodeId_m2375409994 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t JoinMatchRequest_get_networkId_m2534671775 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_publicAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_publicAddress_m3644611049 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_privateAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_privateAddress_m664578272 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t JoinMatchRequest_get_eloScore_m1107868278 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_password_m2718232171 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_pageSize_m3055718048 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_pageNum_m3084306515 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" IL2CPP_METHOD_ATTR String_t* ListMatchRequest_get_nameFilter_m1921865349 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_filterOutPrivateMatches()
extern "C" IL2CPP_METHOD_ATTR bool ListMatchRequest_get_filterOutPrivateMatches_m702074324 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_eloScore_m2377257860 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterLessThan_m369421819 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterEqualTo()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::.ctor()
inline void List_1__ctor_m2320846806 (List_1_t1004336143 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::get_Count()
inline int32_t List_1_get_Count_m119633916 (List_1_t1004336143 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.String System.Object::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_ToString_m1740002499 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Count()
inline int32_t List_1_get_Count_m1160238088 (List_1_t32447842 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t32447842 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_address_m3672516569 (MatchInfo_t221301733 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_port_m2729257488 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_domain(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_domain_m2690339534 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_networkId_m3466879976 (MatchInfo_t221301733 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkAccessToken__ctor_m1548906336 (NetworkAccessToken_t320639760 * __this, String_t* ___strArray0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_accessToken_m2153896250 (MatchInfo_t221301733 * __this, NetworkAccessToken_t320639760 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_nodeId_m1751290814 (MatchInfo_t221301733 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_usingRelay_m1568266214 (MatchInfo_t221301733 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t MatchInfo_get_networkId_m1444611712 (MatchInfo_t221301733 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchInfo_get_address_m1232556325 (MatchInfo_t221301733 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C" IL2CPP_METHOD_ATTR int32_t MatchInfo_get_port_m1945994513 (MatchInfo_t221301733 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C" IL2CPP_METHOD_ATTR uint16_t MatchInfo_get_nodeId_m3362352490 (MatchInfo_t221301733 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C" IL2CPP_METHOD_ATTR bool MatchInfo_get_usingRelay_m3308939749 (MatchInfo_t221301733 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_networkId_m1572557663 (MatchInfoSnapshot_t3166422189 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_hostNodeId_m2433065083 (MatchInfoSnapshot_t3166422189 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_name_m382744311 (MatchInfoSnapshot_t3166422189 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_averageEloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_averageEloScore_m1171549014 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_maxSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_maxSize_m2547898986 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_currentSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_currentSize_m3677953324 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_isPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_isPrivate_m1688058755 (MatchInfoSnapshot_t3166422189 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_matchAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_matchAttributes_m1462812445 (MatchInfoSnapshot_t3166422189 * __this, Dictionary_2_t3521823603 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>::.ctor()
inline void List_1__ctor_m818466152 (List_1_t2090095927 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2090095927 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_directConnectInfos_m4174501432 (MatchInfoSnapshot_t3166422189 * __this, List_1_t2090095927 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>::GetEnumerator()
inline Enumerator_t1921691719  List_1_GetEnumerator_m2476053975 (List_1_t32447842 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1921691719  (*) (List_1_t32447842 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::get_Current()
inline MatchDirectConnectInfo_t2855340396 * Enumerator_get_Current_m2463612473 (Enumerator_t1921691719 * __this, const RuntimeMethod* method)
{
	return ((  MatchDirectConnectInfo_t2855340396 * (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::get_directConnectInfos()
extern "C" IL2CPP_METHOD_ATTR List_1_t2090095927 * MatchInfoSnapshot_get_directConnectInfos_m4034722686 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::.ctor(UnityEngine.Networking.Match.MatchDirectConnectInfo)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot__ctor_m375710675 (MatchInfoDirectConnectSnapshot_t618021185 * __this, MatchDirectConnectInfo_t2855340396 * ___matchDirectConnectInfo0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>::Add(!0)
inline void List_1_Add_m548998622 (List_1_t2090095927 * __this, MatchInfoDirectConnectSnapshot_t618021185 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2090095927 *, MatchInfoDirectConnectSnapshot_t618021185 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::MoveNext()
inline bool Enumerator_MoveNext_m957156581 (Enumerator_t1921691719 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDirectConnectInfo>::Dispose()
inline void Enumerator_Dispose_m3020357317 (Enumerator_t1921691719 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1921691719 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_nodeId_m198744523 (MatchInfoDirectConnectSnapshot_t618021185 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824 (MatchInfoDirectConnectSnapshot_t618021185 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest__ctor_m1120211933 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_name_m701411379 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_size_m3316633767 (CreateMatchRequest_t2600446299 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_advertise_m3607720815 (CreateMatchRequest_t2600446299 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_password_m1322775125 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_publicAddress_m1416983088 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_privateAddress_m278898640 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_eloScore_m1972554262 (CreateMatchRequest_t2600446299 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.Request::set_domain(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Request_set_domain_m3630208190 (Request_t2696089890 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3201661599 (NetworkMatch_t2930480025 * __this, CreateMatchRequest_t2600446299 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * NetworkMatch_get_baseUri_m3103825236 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m4293005803 (Uri_t100236324 * __this, Uri_t100236324 * p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m711349004 (WWWForm_t4064702195 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_cloudProjectId()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_cloudProjectId_m3678427659 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddField_m2357902982 (WWWForm_t4064702195 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C" IL2CPP_METHOD_ATTR uint64_t Utility_GetSourceID_m602367204 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" IL2CPP_METHOD_ATTR int32_t Request_get_domain_m2533048369 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m2664721875 (bool* __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * WWWForm_get_headers_m1854290957 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m187286838 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Post_m4193475377 (RuntimeObject * __this /* static, unused */, String_t* p0, WWWForm_t4064702195 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>::.ctor(System.Object,System.IntPtr)
inline void InternalResponseDelegate_2__ctor_m2438927016 (InternalResponseDelegate_2_t992249662 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (InternalResponseDelegate_2_t992249662 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method);
}
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
inline RuntimeObject* NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887 (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t992249662 * ___internalCallback1, DataResponseDelegate_1_t186927816 * ___userCallback2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t992249662 *, DataResponseDelegate_1_t186927816 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C" IL2CPP_METHOD_ATTR void Utility_SetAccessTokenForNetwork_m483792653 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t320639760 * ___accessToken1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo__ctor_m1026163455 (MatchInfo_t221301733 * __this, CreateMatchResponse_t1328247360 * ___matchResponse0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>::Invoke(System.Boolean,System.String,T)
inline void DataResponseDelegate_1_Invoke_m437983603 (DataResponseDelegate_1_t186927816 * __this, bool p0, String_t* p1, MatchInfo_t221301733 * p2, const RuntimeMethod* method)
{
	((  void (*) (DataResponseDelegate_1_t186927816 *, bool, String_t*, MatchInfo_t221301733 *, const RuntimeMethod*))DataResponseDelegate_1_Invoke_m1974839323_gshared)(__this, p0, p1, p2, method);
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest__ctor_m929255344 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_networkId_m1582426564 (JoinMatchRequest_t3991767598 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_password_m3230348675 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_publicAddress_m3396720139 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_privateAddress_m2598128522 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_eloScore_m3728163236 (JoinMatchRequest_t3991767598 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_JoinMatch_m3017753518 (NetworkMatch_t2930480025 * __this, JoinMatchRequest_t3991767598 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>::.ctor(System.Object,System.IntPtr)
inline void InternalResponseDelegate_2__ctor_m1006820792 (InternalResponseDelegate_2_t3313634249 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (InternalResponseDelegate_2_t3313634249 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method);
}
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
inline RuntimeObject* NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490 (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t3313634249 * ___internalCallback1, DataResponseDelegate_1_t186927816 * ___userCallback2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t3313634249 *, DataResponseDelegate_1_t186927816 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method);
}
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo__ctor_m1464312026 (MatchInfo_t221301733 * __this, JoinMatchResponse_t845270609 * ___matchResponse0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DestroyMatchRequest__ctor_m327028137 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void DestroyMatchRequest_set_networkId_m2430913175 (DestroyMatchRequest_t2124150613 * __this, uint64_t ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m851204137 (NetworkMatch_t2930480025 * __this, DestroyMatchRequest_t2124150613 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR NetworkAccessToken_t320639760 * Utility_GetAccessTokenForNetwork_m3460910439 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkAccessToken_GetByteString_m3125030115 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>::.ctor(System.Object,System.IntPtr)
inline void InternalResponseDelegate_2__ctor_m4083378426 (InternalResponseDelegate_2_t753237801 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (InternalResponseDelegate_2_t753237801 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method);
}
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
inline RuntimeObject* NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136 (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t753237801 * ___internalCallback1, BasicResponseDelegate_t2196726690 * ___userCallback2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t753237801 *, BasicResponseDelegate_t2196726690 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::Invoke(System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void BasicResponseDelegate_Invoke_m1399904936 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest__ctor_m2312219607 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest_set_networkId_m399344964 (DropConnectionRequest_t2647317937 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest_set_nodeId_m2959951618 (DropConnectionRequest_t2647317937 * __this, uint16_t ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DropConnection_m3349273159 (NetworkMatch_t2930480025 * __this, DropConnectionRequest_t2647317937 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>::.ctor(System.Object,System.IntPtr)
inline void InternalResponseDelegate_2__ctor_m3308930013 (InternalResponseDelegate_2_t304736019 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (InternalResponseDelegate_2_t304736019 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method);
}
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
inline RuntimeObject* NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150 (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t304736019 * ___internalCallback1, BasicResponseDelegate_t2196726690 * ___userCallback2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t304736019 *, BasicResponseDelegate_t2196726690 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method);
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest__ctor_m189544352 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_pageNum_m714424921 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_pageSize_m2542353962 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_nameFilter_m3455577482 (ListMatchRequest_t1588429355 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_filterOutPrivateMatches(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_filterOutPrivateMatches_m242262970 (ListMatchRequest_t1588429355 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_eloScore_m2096908822 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_ListMatches_m3965275728 (NetworkMatch_t2930480025 * __this, ListMatchRequest_t1588429355 * ___req0, DataResponseDelegate_1_t309155718 * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>::.ctor(System.Object,System.IntPtr)
inline void InternalResponseDelegate_2__ctor_m4032249314 (InternalResponseDelegate_2_t873951790 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (InternalResponseDelegate_2_t873951790 *, RuntimeObject *, intptr_t, const RuntimeMethod*))InternalResponseDelegate_2__ctor_m3201973790_gshared)(__this, p0, p1, method);
}
// System.Collections.IEnumerator UnityEngine.Networking.Match.NetworkMatch::ProcessMatchResponse<UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>>(UnityEngine.Networking.UnityWebRequest,UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>,USERRESPONSEDELEGATETYPE)
inline RuntimeObject* NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787 (NetworkMatch_t2930480025 * __this, UnityWebRequest_t463507806 * ___client0, InternalResponseDelegate_2_t873951790 * ___internalCallback1, DataResponseDelegate_1_t309155718 * ___userCallback2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NetworkMatch_t2930480025 *, UnityWebRequest_t463507806 *, InternalResponseDelegate_2_t873951790 *, DataResponseDelegate_1_t309155718 *, const RuntimeMethod*))NetworkMatch_ProcessMatchResponse_TisRuntimeObject_TisRuntimeObject_m4234265295_gshared)(__this, ___client0, ___internalCallback1, ___userCallback2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>::.ctor()
inline void List_1__ctor_m2649410098 (List_1_t343529635 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t343529635 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>::GetEnumerator()
inline Enumerator_t2893580020  List_1_GetEnumerator_m3706392678 (List_1_t1004336143 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2893580020  (*) (List_1_t1004336143 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::get_Current()
inline MatchDesc_t3827228697 * Enumerator_get_Current_m1671013569 (Enumerator_t2893580020 * __this, const RuntimeMethod* method)
{
	return ((  MatchDesc_t3827228697 * (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::.ctor(UnityEngine.Networking.Match.MatchDesc)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot__ctor_m3116124190 (MatchInfoSnapshot_t3166422189 * __this, MatchDesc_t3827228697 * ___matchDesc0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>::Add(!0)
inline void List_1_Add_m2366351136 (List_1_t343529635 * __this, MatchInfoSnapshot_t3166422189 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t343529635 *, MatchInfoSnapshot_t3166422189 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::MoveNext()
inline bool Enumerator_MoveNext_m332103838 (Enumerator_t2893580020 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.Match.MatchDesc>::Dispose()
inline void Enumerator_Dispose_m2278141307 (Enumerator_t2893580020 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2893580020 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>::Invoke(System.Boolean,System.String,T)
inline void DataResponseDelegate_1_Invoke_m2625328205 (DataResponseDelegate_1_t309155718 * __this, bool p0, String_t* p1, List_1_t343529635 * p2, const RuntimeMethod* method)
{
	((  void (*) (DataResponseDelegate_1_t309155718 *, bool, String_t*, List_1_t343529635 *, const RuntimeMethod*))DataResponseDelegate_1_Invoke_m1974839323_gshared)(__this, p0, p1, p2, method);
}
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest__ctor_m1899046165 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest_set_networkId_m557696958 (SetMatchAttributesRequest_t2732203151 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_isListed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest_set_isListed_m2994314324 (SetMatchAttributesRequest_t2732203151 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Match.SetMatchAttributesRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m3627579880 (NetworkMatch_t2930480025 * __this, SetMatchAttributesRequest_t2732203151 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method);
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t SetMatchAttributesRequest_get_networkId_m2380549462 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::get_isListed()
extern "C" IL2CPP_METHOD_ATTR bool SetMatchAttributesRequest_get_isListed_m3414389613 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Request_get_sourceId_m208323637 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.Request::get_projectId()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_get_projectId_m2576041751 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.Match.Request::get_accessTokenString()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_get_accessTokenString_m4019206711 (Request_t2696089890 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithNoParameters_m1152096323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Int32,System.Single,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ConnectToNetworkPeer_m888142873 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, int32_t ___bytesPerSec8, float ___bucketSizeFactor9, uint8_t* ___error10, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetConnectionInfo_m1779074114 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t* ___port2, uint64_t* ___network3, uint16_t* ___dstNode4, uint8_t* ___error5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m4140356182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
extern "C" IL2CPP_METHOD_ATTR List_1_t1351088715 * HostTopology_get_SpecialConnectionConfigs_m2228393737 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  TimeSpan_FromMilliseconds_m579366253 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TcpClient__ctor_m1992471411 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.String,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_m2835792999 (TcpClient_t822906377 * __this, String_t* p0, int32_t p1, AsyncCallback_t3962456242 * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::EndConnect(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void TcpClient_EndConnect_m1433859801 (TcpClient_t822906377 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::IsPortOpen(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_IsPortOpen_m2487963042 (RuntimeObject * __this /* static, unused */, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_m750760940 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m1686371270 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostWrapperWithoutIp_m565861628 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostWrapper_m394737320 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m236682671 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapperWithoutIp_m987964846 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, int32_t ___minTimeout2, int32_t ___maxTimeout3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapper_m1104996213 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_m2523855845 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m4225720830 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithoutData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, int32_t ___timeout5, uint8_t* ___error6, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscoveryWithData_m899588105 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t4116647657* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const RuntimeMethod* method);
// System.String UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetBroadcastConnectionInfo_m812984813 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___port1, uint8_t* ___error2, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Byte System.Net.SocketAddress::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t SocketAddress_get_Item_m4142520260 (SocketAddress_t3739769427 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C" IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Int32 System.Net.SocketAddress::get_Size()
extern "C" IL2CPP_METHOD_ATTR int32_t SocketAddress_get_Size_m3420662108 (SocketAddress_t3739769427 * __this, const RuntimeMethod* method);
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_m349022421 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void IntPtr__ctor_m987476171 (intptr_t* __this, int64_t p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_Internal_ConnectEndPoint_m1433243872 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, intptr_t ___sockAddrStorage1, int32_t ___sockAddrStorageLen2, int32_t ___exceptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m491131085 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1562111546 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, int32_t p1, intptr_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m1757369653 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::get_NetworkEventAvailable()
extern "C" IL2CPP_METHOD_ATTR Action_1_t3123413348 * GlobalConfig_get_NetworkEventAvailable_m764444237 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_SetNetworkEventAvailableCallback_m3998650185 (RuntimeObject * __this /* static, unused */, Action_1_t3123413348 * ___callback0, const RuntimeMethod* method);
// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::get_ConnectionReadyForSend()
extern "C" IL2CPP_METHOD_ATTR Action_2_t4177122770 * GlobalConfig_get_ConnectionReadyForSend_m1174981153 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_SetConnectionReadyForSendCallback_m306589348 (RuntimeObject * __this /* static, unused */, Action_2_t4177122770 * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.GlobalConfigInternal::.ctor(UnityEngine.Networking.GlobalConfig)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal__ctor_m15594627 (GlobalConfigInternal_t1872710257 * __this, GlobalConfig_t833512557 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::InitWithParameters(UnityEngine.Networking.GlobalConfigInternal)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithParameters_m1136955565 (RuntimeObject * __this /* static, unused */, GlobalConfigInternal_t1872710257 * ___config0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C" IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceUniqueIdentifier_m3439870207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3634856078 (Dictionary_2_t3502080855 * __this, uint64_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m990283339_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Remove(!0)
inline bool Dictionary_2_Remove_m1903597580 (Dictionary_2_t3502080855 * __this, uint64_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, const RuntimeMethod*))Dictionary_2_Remove_m963104344_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::Add(!0,!1)
inline void Dictionary_2_Add_m3785116836 (Dictionary_2_t3502080855 * __this, uint64_t p0, NetworkAccessToken_t320639760 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3502080855 *, uint64_t, NetworkAccessToken_t320639760 *, const RuntimeMethod*))Dictionary_2_Add_m3180043010_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1533749912 (Dictionary_2_t3502080855 * __this, uint64_t p0, NetworkAccessToken_t320639760 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3502080855 *, uint64_t, NetworkAccessToken_t320639760 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m2634421657_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkAccessToken__ctor_m969521192 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>::.ctor()
inline void Dictionary_2__ctor_m2501111586 (Dictionary_2_t3502080855 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3502080855 *, const RuntimeMethod*))Dictionary_2__ctor_m2241802331_gshared)(__this, method);
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
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1615168101 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_Type_0(0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelQOS__ctor_m3213155130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ChannelQOS_t1890984120 * L_0 = ___channel0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral1575624523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ChannelQOS__ctor_m3213155130_RuntimeMethod_var);
	}

IL_0018:
	{
		ChannelQOS_t1890984120 * L_2 = ___channel0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_m_Type_0();
		__this->set_m_Type_0(L_3);
		ChannelQOS_t1890984120 * L_4 = ___channel0;
		NullCheck(L_4);
		bool L_5 = L_4->get_m_BelongsSharedOrderChannel_1();
		__this->set_m_BelongsSharedOrderChannel_1(L_5);
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m209007790 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m3078028383 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m3078028383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_PacketSize_1((uint16_t)((int32_t)1440));
		__this->set_m_FragmentSize_2((uint16_t)((int32_t)500));
		__this->set_m_ResendTimeout_3(((int32_t)1200));
		__this->set_m_DisconnectTimeout_4(((int32_t)2000));
		__this->set_m_ConnectTimeout_5(((int32_t)2000));
		__this->set_m_MinUpdateTimeout_6(((int32_t)10));
		__this->set_m_PingTimeout_7(((int32_t)500));
		__this->set_m_ReducedPingTimeout_8(((int32_t)100));
		__this->set_m_AllCostTimeout_9(((int32_t)20));
		__this->set_m_NetworkDropThreshold_10((uint8_t)5);
		__this->set_m_OverflowDropThreshold_11((uint8_t)5);
		__this->set_m_MaxConnectionAttempt_12((uint8_t)((int32_t)10));
		__this->set_m_AckDelay_13(((int32_t)33));
		__this->set_m_SendDelay_14(((int32_t)10));
		__this->set_m_MaxCombinedReliableMessageSize_15((uint16_t)((int32_t)100));
		__this->set_m_MaxCombinedReliableMessageCount_16((uint16_t)((int32_t)10));
		__this->set_m_MaxSentMessageQueueSize_17((uint16_t)((int32_t)512));
		__this->set_m_AcksType_18(1);
		__this->set_m_UsePlatformSpecificProtocols_19((bool)0);
		__this->set_m_InitialBandwidth_20(0);
		__this->set_m_BandwidthPeakFactor_21((2.0f));
		__this->set_m_WebSocketReceiveBufferMaxSize_22((uint16_t)0);
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(0);
		__this->set_m_SSLCertFilePath_24((String_t*)NULL);
		__this->set_m_SSLPrivateKeyFilePath_25((String_t*)NULL);
		__this->set_m_SSLCAFilePath_26((String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m2640243122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	Enumerator_t957335443  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t2606371118 * V_2 = NULL;
	Enumerator_t1672722441  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_27(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_28(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_2 = ___config0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		NullReferenceException_t1023182353 * L_3 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_3, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig__ctor_m2640243122_RuntimeMethod_var);
	}

IL_002e:
	{
		ConnectionConfig_t4173981269 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = L_4->get_m_PacketSize_1();
		__this->set_m_PacketSize_1(L_5);
		ConnectionConfig_t4173981269 * L_6 = ___config0;
		NullCheck(L_6);
		uint16_t L_7 = L_6->get_m_FragmentSize_2();
		__this->set_m_FragmentSize_2(L_7);
		ConnectionConfig_t4173981269 * L_8 = ___config0;
		NullCheck(L_8);
		uint32_t L_9 = L_8->get_m_ResendTimeout_3();
		__this->set_m_ResendTimeout_3(L_9);
		ConnectionConfig_t4173981269 * L_10 = ___config0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_m_DisconnectTimeout_4();
		__this->set_m_DisconnectTimeout_4(L_11);
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		uint32_t L_13 = L_12->get_m_ConnectTimeout_5();
		__this->set_m_ConnectTimeout_5(L_13);
		ConnectionConfig_t4173981269 * L_14 = ___config0;
		NullCheck(L_14);
		uint32_t L_15 = L_14->get_m_MinUpdateTimeout_6();
		__this->set_m_MinUpdateTimeout_6(L_15);
		ConnectionConfig_t4173981269 * L_16 = ___config0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->get_m_PingTimeout_7();
		__this->set_m_PingTimeout_7(L_17);
		ConnectionConfig_t4173981269 * L_18 = ___config0;
		NullCheck(L_18);
		uint32_t L_19 = L_18->get_m_ReducedPingTimeout_8();
		__this->set_m_ReducedPingTimeout_8(L_19);
		ConnectionConfig_t4173981269 * L_20 = ___config0;
		NullCheck(L_20);
		uint32_t L_21 = L_20->get_m_AllCostTimeout_9();
		__this->set_m_AllCostTimeout_9(L_21);
		ConnectionConfig_t4173981269 * L_22 = ___config0;
		NullCheck(L_22);
		uint8_t L_23 = L_22->get_m_NetworkDropThreshold_10();
		__this->set_m_NetworkDropThreshold_10(L_23);
		ConnectionConfig_t4173981269 * L_24 = ___config0;
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_m_OverflowDropThreshold_11();
		__this->set_m_OverflowDropThreshold_11(L_25);
		ConnectionConfig_t4173981269 * L_26 = ___config0;
		NullCheck(L_26);
		uint8_t L_27 = L_26->get_m_MaxConnectionAttempt_12();
		__this->set_m_MaxConnectionAttempt_12(L_27);
		ConnectionConfig_t4173981269 * L_28 = ___config0;
		NullCheck(L_28);
		uint32_t L_29 = L_28->get_m_AckDelay_13();
		__this->set_m_AckDelay_13(L_29);
		ConnectionConfig_t4173981269 * L_30 = ___config0;
		NullCheck(L_30);
		uint32_t L_31 = L_30->get_m_SendDelay_14();
		__this->set_m_SendDelay_14(L_31);
		ConnectionConfig_t4173981269 * L_32 = ___config0;
		NullCheck(L_32);
		uint16_t L_33 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617(L_32, /*hidden argument*/NULL);
		__this->set_m_MaxCombinedReliableMessageSize_15(L_33);
		ConnectionConfig_t4173981269 * L_34 = ___config0;
		NullCheck(L_34);
		uint16_t L_35 = L_34->get_m_MaxCombinedReliableMessageCount_16();
		__this->set_m_MaxCombinedReliableMessageCount_16(L_35);
		ConnectionConfig_t4173981269 * L_36 = ___config0;
		NullCheck(L_36);
		uint16_t L_37 = L_36->get_m_MaxSentMessageQueueSize_17();
		__this->set_m_MaxSentMessageQueueSize_17(L_37);
		ConnectionConfig_t4173981269 * L_38 = ___config0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_m_AcksType_18();
		__this->set_m_AcksType_18(L_39);
		ConnectionConfig_t4173981269 * L_40 = ___config0;
		NullCheck(L_40);
		bool L_41 = L_40->get_m_UsePlatformSpecificProtocols_19();
		__this->set_m_UsePlatformSpecificProtocols_19(L_41);
		ConnectionConfig_t4173981269 * L_42 = ___config0;
		NullCheck(L_42);
		uint32_t L_43 = L_42->get_m_InitialBandwidth_20();
		__this->set_m_InitialBandwidth_20(L_43);
		uint32_t L_44 = __this->get_m_InitialBandwidth_20();
		if (L_44)
		{
			goto IL_0144;
		}
	}
	{
		uint16_t L_45 = __this->get_m_PacketSize_1();
		uint32_t L_46 = __this->get_m_MinUpdateTimeout_6();
		__this->set_m_InitialBandwidth_20(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_46)));
	}

IL_0144:
	{
		ConnectionConfig_t4173981269 * L_47 = ___config0;
		NullCheck(L_47);
		float L_48 = L_47->get_m_BandwidthPeakFactor_21();
		__this->set_m_BandwidthPeakFactor_21(L_48);
		ConnectionConfig_t4173981269 * L_49 = ___config0;
		NullCheck(L_49);
		uint16_t L_50 = L_49->get_m_WebSocketReceiveBufferMaxSize_22();
		__this->set_m_WebSocketReceiveBufferMaxSize_22(L_50);
		ConnectionConfig_t4173981269 * L_51 = ___config0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->get_m_UdpSocketReceiveBufferMaxSize_23();
		__this->set_m_UdpSocketReceiveBufferMaxSize_23(L_52);
		ConnectionConfig_t4173981269 * L_53 = ___config0;
		NullCheck(L_53);
		String_t* L_54 = L_53->get_m_SSLCertFilePath_24();
		__this->set_m_SSLCertFilePath_24(L_54);
		ConnectionConfig_t4173981269 * L_55 = ___config0;
		NullCheck(L_55);
		String_t* L_56 = L_55->get_m_SSLPrivateKeyFilePath_25();
		__this->set_m_SSLPrivateKeyFilePath_25(L_56);
		ConnectionConfig_t4173981269 * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = L_57->get_m_SSLCAFilePath_26();
		__this->set_m_SSLCAFilePath_26(L_58);
		ConnectionConfig_t4173981269 * L_59 = ___config0;
		NullCheck(L_59);
		List_1_t3363058862 * L_60 = L_59->get_m_Channels_27();
		NullCheck(L_60);
		Enumerator_t957335443  L_61 = List_1_GetEnumerator_m4246513235(L_60, /*hidden argument*/List_1_GetEnumerator_m4246513235_RuntimeMethod_var);
		V_1 = L_61;
	}

IL_0199:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b9;
		}

IL_019e:
		{
			ChannelQOS_t1890984120 * L_62 = Enumerator_get_Current_m1808369071((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1808369071_RuntimeMethod_var);
			V_0 = L_62;
			List_1_t3363058862 * L_63 = __this->get_m_Channels_27();
			ChannelQOS_t1890984120 * L_64 = V_0;
			ChannelQOS_t1890984120 * L_65 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
			ChannelQOS__ctor_m3213155130(L_65, L_64, /*hidden argument*/NULL);
			NullCheck(L_63);
			List_1_Add_m423166763(L_63, L_65, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		}

IL_01b9:
		{
			bool L_66 = Enumerator_MoveNext_m349679386((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m349679386_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_01c5:
		{
			IL2CPP_LEAVE(0x1D8, FINALLY_01ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ca;
	}

FINALLY_01ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3004041484((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3004041484_RuntimeMethod_var);
		IL2CPP_END_FINALLY(458)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(458)
	{
		IL2CPP_JUMP_TBL(0x1D8, IL_01d8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d8:
	{
		ConnectionConfig_t4173981269 * L_67 = ___config0;
		NullCheck(L_67);
		List_1_t4078445860 * L_68 = L_67->get_m_SharedOrderChannels_28();
		NullCheck(L_68);
		Enumerator_t1672722441  L_69 = List_1_GetEnumerator_m1327152933(L_68, /*hidden argument*/List_1_GetEnumerator_m1327152933_RuntimeMethod_var);
		V_3 = L_69;
	}

IL_01e5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0200;
		}

IL_01ea:
		{
			List_1_t2606371118 * L_70 = Enumerator_get_Current_m2439261711((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2439261711_RuntimeMethod_var);
			V_2 = L_70;
			List_1_t4078445860 * L_71 = __this->get_m_SharedOrderChannels_28();
			List_1_t2606371118 * L_72 = V_2;
			NullCheck(L_71);
			List_1_Add_m1960376679(L_71, L_72, /*hidden argument*/List_1_Add_m1960376679_RuntimeMethod_var);
		}

IL_0200:
		{
			bool L_73 = Enumerator_MoveNext_m491916196((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m491916196_RuntimeMethod_var);
			if (L_73)
			{
				goto IL_01ea;
			}
		}

IL_020c:
		{
			IL2CPP_LEAVE(0x21F, FINALLY_0211);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0211;
	}

FINALLY_0211:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2814761745((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2814761745_RuntimeMethod_var);
		IL2CPP_END_FINALLY(529)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(529)
	{
		IL2CPP_JUMP_TBL(0x21F, IL_021f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_021f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_Validate_m2712188470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ConnectionConfig_t4173981269 * L_0 = ___config0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->get_m_PacketSize_1();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((int32_t)128);
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1848928535, L_2, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_0034:
	{
		ConnectionConfig_t4173981269 * L_5 = ___config0;
		NullCheck(L_5);
		uint16_t L_6 = L_5->get_m_FragmentSize_2();
		ConnectionConfig_t4173981269 * L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->get_m_PacketSize_1();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)128))))))
		{
			goto IL_006e;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_9 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1996371512, L_9, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_006e:
	{
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		List_1_t3363058862 * L_13 = L_12->get_m_Channels_27();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3550276212(L_13, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)255))))
		{
			goto IL_008e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_15 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_15, _stringLiteral2828656510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_008e:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_PacketSize_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m3690693204 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_FragmentSize_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1229339277 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ResendTimeout_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m3211708483 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_DisconnectTimeout_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m3841211537 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ConnectTimeout_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m2622211838 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinUpdateTimeout_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_set_MinUpdateTimeout_m3638055834 (ConnectionConfig_t4173981269 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_set_MinUpdateTimeout_m3638055834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral2027780650, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ConnectionConfig_set_MinUpdateTimeout_m3638055834_RuntimeMethod_var);
	}

IL_0012:
	{
		uint32_t L_2 = ___value0;
		__this->set_m_MinUpdateTimeout_6(L_2);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_PingTimeout_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m3505647457 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ReducedPingTimeout_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m3668505184 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AllCostTimeout_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m2415930717 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_NetworkDropThreshold_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m1742682903 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_OverflowDropThreshold_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m639248559 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_MaxConnectionAttempt_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m2859947532 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AckDelay_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m1334024800 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_SendDelay_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageSize_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageCount_16();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxSentMessageQueueSize_17();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_m4197376336 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_AcksType_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UsePlatformSpecificProtocols_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531 (ConnectionConfig_t4173981269 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)25))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)24))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral115901148, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_set_UsePlatformSpecificProtocols_m774564531_RuntimeMethod_var);
	}

IL_002a:
	{
		bool L_4 = ___value0;
		__this->set_m_UsePlatformSpecificProtocols_19(L_4);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m2551929270 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_InitialBandwidth_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
extern "C" IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m3811085112 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_BandwidthPeakFactor_21();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_WebSocketReceiveBufferMaxSize_22();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_UdpSocketReceiveBufferMaxSize_23();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m426270519 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCertFilePath_24();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLPrivateKeyFilePath_25();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m1339016177 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCAFilePath_26();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m1630695256 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_SharedOrderChannelCount_m1090156233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t4078445860 * L_0 = __this->get_m_SharedOrderChannels_28();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1422624963(L_0, /*hidden argument*/List_1_get_Count_m1422624963_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m2791320185 (ConnectionConfig_t4173981269 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_AddChannel_m2791320185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, _stringLiteral584173395, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0021:
	{
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (QosType_t3566496866_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___value0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(QosType_t3566496866_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_8 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = ___value0;
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3080010154, L_11, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_14 = ___value0;
		ChannelQOS_t1890984120 * L_15 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
		ChannelQOS__ctor_m181222305(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		List_1_t3363058862 * L_16 = __this->get_m_Channels_27();
		ChannelQOS_t1890984120 * L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_m423166763(L_16, L_17, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		List_1_t3363058862 * L_18 = __this->get_m_Channels_27();
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m3550276212(L_18, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))));
		goto IL_0079;
	}

IL_0079:
	{
		uint8_t L_20 = V_1;
		return L_20;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m2188161631 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetChannel_m2188161631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___idx0;
		List_1_t3363058862 * L_1 = __this->get_m_Channels_27();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3550276212(L_1, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1276777634, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_GetChannel_m2188161631_RuntimeMethod_var);
	}

IL_001d:
	{
		List_1_t3363058862 * L_4 = __this->get_m_Channels_27();
		uint8_t L_5 = ___idx0;
		NullCheck(L_4);
		ChannelQOS_t1890984120 * L_6 = List_1_get_Item_m977601184(L_4, L_5, /*hidden argument*/List_1_get_Item_m977601184_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = ChannelQOS_get_QOS_m209007790(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m1826991094 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetSharedOrderChannels_m1826991094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		uint8_t L_0 = ___idx0;
		List_1_t4078445860 * L_1 = __this->get_m_SharedOrderChannels_28();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1422624963(L_1, /*hidden argument*/List_1_get_Count_m1422624963_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral2280338569, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_GetSharedOrderChannels_m1826991094_RuntimeMethod_var);
	}

IL_001d:
	{
		List_1_t4078445860 * L_4 = __this->get_m_SharedOrderChannels_28();
		uint8_t L_5 = ___idx0;
		NullCheck(L_4);
		List_1_t2606371118 * L_6 = List_1_get_Item_m2000198085(L_4, L_5, /*hidden argument*/List_1_get_Item_m2000198085_RuntimeMethod_var);
		NullCheck(L_6);
		ReadOnlyCollection_1_t2346872663 * L_7 = List_1_AsReadOnly_m3149855852(L_6, /*hidden argument*/List_1_AsReadOnly_m3149855852_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_7;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C" IL2CPP_METHOD_ATTR List_1_t3363058862 * ConnectionConfig_get_Channels_m1411410508 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	List_1_t3363058862 * V_0 = NULL;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_27();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t3363058862 * L_1 = V_0;
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
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m151495501 (ConnectionConfigInternal_t1246935692 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal__ctor_m151495501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	RuntimeObject* V_5 = NULL;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_0 = ___config0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_0018:
	{
		ConnectionConfigInternal_InitWrapper_m4242995060(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_2 = ___config0;
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_m195714670(L_2, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitPacketSize_m3352433354(__this, L_3, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = ConnectionConfig_get_FragmentSize_m3690693204(L_4, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitFragmentSize_m4083592312(__this, L_5, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_6 = ___config0;
		NullCheck(L_6);
		uint32_t L_7 = ConnectionConfig_get_ResendTimeout_m1229339277(L_6, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitResendTimeout_m4785138(__this, L_7, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_8 = ___config0;
		NullCheck(L_8);
		uint32_t L_9 = ConnectionConfig_get_DisconnectTimeout_m3211708483(L_8, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitDisconnectTimeout_m121854687(__this, L_9, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_10 = ___config0;
		NullCheck(L_10);
		uint32_t L_11 = ConnectionConfig_get_ConnectTimeout_m3841211537(L_10, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitConnectTimeout_m3275392522(__this, L_11, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		uint32_t L_13 = ConnectionConfig_get_MinUpdateTimeout_m2622211838(L_12, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020(__this, L_13, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_14 = ___config0;
		NullCheck(L_14);
		uint32_t L_15 = ConnectionConfig_get_PingTimeout_m2393238105(L_14, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitPingTimeout_m2511090311(__this, L_15, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_16 = ___config0;
		NullCheck(L_16);
		uint32_t L_17 = ConnectionConfig_get_ReducedPingTimeout_m3505647457(L_16, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitReducedPingTimeout_m612333836(__this, L_17, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_18 = ___config0;
		NullCheck(L_18);
		uint32_t L_19 = ConnectionConfig_get_AllCostTimeout_m3668505184(L_18, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAllCostTimeout_m1149782117(__this, L_19, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_20 = ___config0;
		NullCheck(L_20);
		uint8_t L_21 = ConnectionConfig_get_NetworkDropThreshold_m2415930717(L_20, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869(__this, L_21, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_22 = ___config0;
		NullCheck(L_22);
		uint8_t L_23 = ConnectionConfig_get_OverflowDropThreshold_m1742682903(L_22, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010(__this, L_23, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_24 = ___config0;
		NullCheck(L_24);
		uint8_t L_25 = ConnectionConfig_get_MaxConnectionAttempt_m639248559(L_24, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456(__this, L_25, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_26 = ___config0;
		NullCheck(L_26);
		uint32_t L_27 = ConnectionConfig_get_AckDelay_m2859947532(L_26, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAckDelay_m507392147(__this, L_27, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_28 = ___config0;
		NullCheck(L_28);
		uint32_t L_29 = ConnectionConfig_get_SendDelay_m1334024800(L_28, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitSendDelay_m2800814260(__this, L_29, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_30 = ___config0;
		NullCheck(L_30);
		uint16_t L_31 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617(L_30, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930(__this, L_31, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_32 = ___config0;
		NullCheck(L_32);
		uint16_t L_33 = ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213(L_32, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943(__this, L_33, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_34 = ___config0;
		NullCheck(L_34);
		uint16_t L_35 = ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732(L_34, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038(__this, L_35, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_36 = ___config0;
		NullCheck(L_36);
		int32_t L_37 = ConnectionConfig_get_AcksType_m4197376336(L_36, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAcksType_m4235038191(__this, L_37, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_38 = ___config0;
		NullCheck(L_38);
		bool L_39 = ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116(L_38, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864(__this, L_39, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_40 = ___config0;
		NullCheck(L_40);
		uint32_t L_41 = ConnectionConfig_get_InitialBandwidth_m2551929270(L_40, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitInitialBandwidth_m3853047278(__this, L_41, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_42 = ___config0;
		NullCheck(L_42);
		float L_43 = ConnectionConfig_get_BandwidthPeakFactor_m3811085112(L_42, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278(__this, L_43, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_44 = ___config0;
		NullCheck(L_44);
		uint16_t L_45 = ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754(L_44, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671(__this, L_45, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_46 = ___config0;
		NullCheck(L_46);
		uint32_t L_47 = ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292(L_46, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267(__this, L_47, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_48 = ___config0;
		NullCheck(L_48);
		String_t* L_49 = ConnectionConfig_get_SSLCertFilePath_m426270519(L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_016f;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_50 = ___config0;
		NullCheck(L_50);
		String_t* L_51 = ConnectionConfig_get_SSLCertFilePath_m426270519(L_50, /*hidden argument*/NULL);
		int32_t L_52 = ConnectionConfigInternal_InitSSLCertFilePath_m8859585(__this, L_51, /*hidden argument*/NULL);
		V_0 = L_52;
		int32_t L_53 = V_0;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		String_t* L_54 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral727852980, L_54, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_56 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_56, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_016e:
	{
	}

IL_016f:
	{
		ConnectionConfig_t4173981269 * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015(L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01ac;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_59 = ___config0;
		NullCheck(L_59);
		String_t* L_60 = ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015(L_59, /*hidden argument*/NULL);
		int32_t L_61 = ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793(__this, L_60, /*hidden argument*/NULL);
		V_1 = L_61;
		int32_t L_62 = V_1;
		if (!L_62)
		{
			goto IL_01ab;
		}
	}
	{
		String_t* L_63 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_64 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1819605569, L_63, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_65 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_65, L_64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_01ab:
	{
	}

IL_01ac:
	{
		ConnectionConfig_t4173981269 * L_66 = ___config0;
		NullCheck(L_66);
		String_t* L_67 = ConnectionConfig_get_SSLCAFilePath_m1339016177(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e9;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_68 = ___config0;
		NullCheck(L_68);
		String_t* L_69 = ConnectionConfig_get_SSLCAFilePath_m1339016177(L_68, /*hidden argument*/NULL);
		int32_t L_70 = ConnectionConfigInternal_InitSSLCAFilePath_m1966096029(__this, L_69, /*hidden argument*/NULL);
		V_2 = L_70;
		int32_t L_71 = V_2;
		if (!L_71)
		{
			goto IL_01e8;
		}
	}
	{
		String_t* L_72 = Int32_ToString_m141394615((int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2633051098, L_72, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_74 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_01e8:
	{
	}

IL_01e9:
	{
		V_3 = (uint8_t)0;
		goto IL_0205;
	}

IL_01f0:
	{
		ConnectionConfig_t4173981269 * L_75 = ___config0;
		uint8_t L_76 = V_3;
		NullCheck(L_75);
		int32_t L_77 = ConnectionConfig_GetChannel_m2188161631(L_75, L_76, /*hidden argument*/NULL);
		ConnectionConfigInternal_AddChannel_m2993044037(__this, L_77, /*hidden argument*/NULL);
		uint8_t L_78 = V_3;
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1)))));
	}

IL_0205:
	{
		uint8_t L_79 = V_3;
		ConnectionConfig_t4173981269 * L_80 = ___config0;
		NullCheck(L_80);
		int32_t L_81 = ConnectionConfig_get_ChannelCount_m1630695256(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_01f0;
		}
	}
	{
		V_4 = (uint8_t)0;
		goto IL_024d;
	}

IL_0219:
	{
		ConnectionConfig_t4173981269 * L_82 = ___config0;
		uint8_t L_83 = V_4;
		NullCheck(L_82);
		RuntimeObject* L_84 = ConnectionConfig_GetSharedOrderChannels_m1826991094(L_82, L_83, /*hidden argument*/NULL);
		V_5 = L_84;
		RuntimeObject* L_85 = V_5;
		NullCheck(L_85);
		int32_t L_86 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_85);
		ByteU5BU5D_t4116647657* L_87 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_86);
		V_6 = L_87;
		RuntimeObject* L_88 = V_5;
		ByteU5BU5D_t4116647657* L_89 = V_6;
		NullCheck(L_88);
		InterfaceActionInvoker2< ByteU5BU5D_t4116647657*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(!0[],System.Int32) */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_88, L_89, 0);
		ByteU5BU5D_t4116647657* L_90 = V_6;
		ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124(__this, L_90, /*hidden argument*/NULL);
		uint8_t L_91 = V_4;
		V_4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)))));
	}

IL_024d:
	{
		uint8_t L_92 = V_4;
		ConnectionConfig_t4173981269 * L_93 = ___config0;
		NullCheck(L_93);
		int32_t L_94 = ConnectionConfig_get_SharedOrderChannelCount_m1090156233(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_0219;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWrapper_m4242995060 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitWrapper_m4242995060_ftn) (ConnectionConfigInternal_t1246935692 *);
	static ConnectionConfigInternal_InitWrapper_m4242995060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitWrapper_m4242995060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()");
	_il2cpp_icall_func(__this);
}
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m2993044037 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef uint8_t (*ConnectionConfigInternal_AddChannel_m2993044037_ftn) (ConnectionConfigInternal_t1246935692 *, int32_t);
	static ConnectionConfigInternal_AddChannel_m2993044037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_AddChannel_m2993044037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)");
	uint8_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPacketSize_m3352433354 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitPacketSize_m3352433354_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitPacketSize_m3352433354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitPacketSize_m3352433354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitFragmentSize_m4083592312 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitResendTimeout_m4785138 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitResendTimeout_m4785138_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitResendTimeout_m4785138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitResendTimeout_m4785138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitDisconnectTimeout_m121854687 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitConnectTimeout_m3275392522 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPingTimeout_m2511090311 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitReducedPingTimeout_m612333836 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAllCostTimeout_m1149782117 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAckDelay_m507392147 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAckDelay_m507392147_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitAckDelay_m507392147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAckDelay_m507392147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitSendDelay_m2800814260 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitSendDelay_m2800814260_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitSendDelay_m2800814260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSendDelay_m2800814260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAcksType_m4235038191 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAcksType_m4235038191_ftn) (ConnectionConfigInternal_t1246935692 *, int32_t);
	static ConnectionConfigInternal_InitAcksType_m4235038191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAcksType_m4235038191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864 (ConnectionConfigInternal_t1246935692 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn) (ConnectionConfigInternal_t1246935692 *, bool);
	static ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitInitialBandwidth_m3853047278 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278 (ConnectionConfigInternal_t1246935692 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn) (ConnectionConfigInternal_t1246935692 *, float);
	static ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCertFilePath_m8859585 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCAFilePath_m1966096029 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m741640762 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_Dispose_m741640762_ftn) (ConnectionConfigInternal_t1246935692 *);
	static ConnectionConfigInternal_Dispose_m741640762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_Dispose_m741640762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Finalize_m2517401324 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		ConnectionConfigInternal_Dispose_m741640762(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124 (ConnectionConfigInternal_t1246935692 * __this, ByteU5BU5D_t4116647657* ___values0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn) (ConnectionConfigInternal_t1246935692 *, ByteU5BU5D_t4116647657*);
	static ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])");
	bool retVal = _il2cpp_icall_func(__this, ___values0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionSimulatorConfig::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConnectionSimulatorConfig__ctor_m2825245486 (ConnectionSimulatorConfig_t1375549810 * __this, int32_t ___outMinDelay0, int32_t ___outAvgDelay1, int32_t ___inMinDelay2, int32_t ___inAvgDelay3, float ___packetLossPercentage4, const RuntimeMethod* method)
{
	typedef void (*ConnectionSimulatorConfig__ctor_m2825245486_ftn) (ConnectionSimulatorConfig_t1375549810 *, int32_t, int32_t, int32_t, int32_t, float);
	static ConnectionSimulatorConfig__ctor_m2825245486_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionSimulatorConfig__ctor_m2825245486_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionSimulatorConfig::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___outMinDelay0, ___outAvgDelay1, ___inMinDelay2, ___inAvgDelay3, ___packetLossPercentage4);
}
// System.Void UnityEngine.Networking.ConnectionSimulatorConfig::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionSimulatorConfig_Dispose_m2856371415 (ConnectionSimulatorConfig_t1375549810 * __this, const RuntimeMethod* method)
{
	typedef void (*ConnectionSimulatorConfig_Dispose_m2856371415_ftn) (ConnectionSimulatorConfig_t1375549810 *);
	static ConnectionSimulatorConfig_Dispose_m2856371415_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionSimulatorConfig_Dispose_m2856371415_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionSimulatorConfig::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.ConnectionSimulatorConfig::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ConnectionSimulatorConfig_Finalize_m3681825485 (ConnectionSimulatorConfig_t1375549810 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		ConnectionSimulatorConfig_Dispose_m2856371415(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.GlobalConfig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfig__ctor_m3352574105 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_ThreadAwakeTimeout_3(1);
		__this->set_m_ReactorModel_4(0);
		__this->set_m_ReactorMaximumReceivedMessages_5((uint16_t)((int32_t)1024));
		__this->set_m_ReactorMaximumSentMessages_6((uint16_t)((int32_t)1024));
		__this->set_m_MaxPacketSize_7((uint16_t)((int32_t)2000));
		__this->set_m_MaxHosts_8((uint16_t)((int32_t)16));
		__this->set_m_ThreadPoolSize_9((uint8_t)1);
		__this->set_m_MinTimerTimeout_10(1);
		__this->set_m_MaxTimerTimeout_11(((int32_t)12000));
		__this->set_m_MinNetSimulatorTimeout_12(1);
		__this->set_m_MaxNetSimulatorTimeout_13(((int32_t)12000));
		__this->set_m_ConnectionReadyForSend_14((Action_2_t4177122770 *)NULL);
		__this->set_m_NetworkEventAvailable_15((Action_1_t3123413348 *)NULL);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_ThreadAwakeTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_ThreadAwakeTimeout_m2647936312 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ThreadAwakeTimeout_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.GlobalConfig::set_ThreadAwakeTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfig_set_ThreadAwakeTimeout_m4006727376 (GlobalConfig_t833512557 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfig_set_ThreadAwakeTimeout_m4006727376_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral1423808650, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, GlobalConfig_set_ThreadAwakeTimeout_m4006727376_RuntimeMethod_var);
	}

IL_0012:
	{
		uint32_t L_2 = ___value0;
		__this->set_m_ThreadAwakeTimeout_3(L_2);
		return;
	}
}
// UnityEngine.Networking.ReactorModel UnityEngine.Networking.GlobalConfig::get_ReactorModel()
extern "C" IL2CPP_METHOD_ATTR int32_t GlobalConfig_get_ReactorModel_m2253578453 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_ReactorModel_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumReceivedMessages()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumReceivedMessages_m699484383 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReactorMaximumReceivedMessages_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_ReactorMaximumSentMessages()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_ReactorMaximumSentMessages_m2027095935 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReactorMaximumSentMessages_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxPacketSize_m1953127404 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxPacketSize_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.GlobalConfig::get_MaxHosts()
extern "C" IL2CPP_METHOD_ATTR uint16_t GlobalConfig_get_MaxHosts_m2491759023 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxHosts_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.GlobalConfig::get_ThreadPoolSize()
extern "C" IL2CPP_METHOD_ATTR uint8_t GlobalConfig_get_ThreadPoolSize_m2338865308 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_ThreadPoolSize_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinTimerTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinTimerTimeout_m2541097014 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinTimerTimeout_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxTimerTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxTimerTimeout_m4065814595 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MaxTimerTimeout_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MinNetSimulatorTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MinNetSimulatorTimeout_m757690315 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinNetSimulatorTimeout_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.GlobalConfig::get_MaxNetSimulatorTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t GlobalConfig_get_MaxNetSimulatorTimeout_m4144130818 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MaxNetSimulatorTimeout_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Action`1<System.Int32> UnityEngine.Networking.GlobalConfig::get_NetworkEventAvailable()
extern "C" IL2CPP_METHOD_ATTR Action_1_t3123413348 * GlobalConfig_get_NetworkEventAvailable_m764444237 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	Action_1_t3123413348 * V_0 = NULL;
	{
		Action_1_t3123413348 * L_0 = __this->get_m_NetworkEventAvailable_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Action_1_t3123413348 * L_1 = V_0;
		return L_1;
	}
}
// System.Action`2<System.Int32,System.Int32> UnityEngine.Networking.GlobalConfig::get_ConnectionReadyForSend()
extern "C" IL2CPP_METHOD_ATTR Action_2_t4177122770 * GlobalConfig_get_ConnectionReadyForSend_m1174981153 (GlobalConfig_t833512557 * __this, const RuntimeMethod* method)
{
	Action_2_t4177122770 * V_0 = NULL;
	{
		Action_2_t4177122770 * L_0 = __this->get_m_ConnectionReadyForSend_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Action_2_t4177122770 * L_1 = V_0;
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
// System.Void UnityEngine.Networking.GlobalConfigInternal::.ctor(UnityEngine.Networking.GlobalConfig)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal__ctor_m15594627 (GlobalConfigInternal_t1872710257 * __this, GlobalConfig_t833512557 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GlobalConfigInternal__ctor_m15594627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		GlobalConfigInternal_InitWrapper_m1808118561(__this, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_0 = ___config0;
		NullCheck(L_0);
		uint32_t L_1 = GlobalConfig_get_ThreadAwakeTimeout_m2647936312(L_0, /*hidden argument*/NULL);
		GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102(__this, L_1, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_2 = ___config0;
		NullCheck(L_2);
		int32_t L_3 = GlobalConfig_get_ReactorModel_m2253578453(L_2, /*hidden argument*/NULL);
		GlobalConfigInternal_InitReactorModel_m3035491100(__this, (uint8_t)(((int32_t)((uint8_t)L_3))), /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = GlobalConfig_get_ReactorMaximumReceivedMessages_m699484383(L_4, /*hidden argument*/NULL);
		GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028(__this, L_5, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_6 = ___config0;
		NullCheck(L_6);
		uint16_t L_7 = GlobalConfig_get_ReactorMaximumSentMessages_m2027095935(L_6, /*hidden argument*/NULL);
		GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663(__this, L_7, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_8 = ___config0;
		NullCheck(L_8);
		uint16_t L_9 = GlobalConfig_get_MaxPacketSize_m1953127404(L_8, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMaxPacketSize_m2471663804(__this, L_9, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_10 = ___config0;
		NullCheck(L_10);
		uint16_t L_11 = GlobalConfig_get_MaxHosts_m2491759023(L_10, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMaxHosts_m3566676652(__this, L_11, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_12 = ___config0;
		NullCheck(L_12);
		uint8_t L_13 = GlobalConfig_get_ThreadPoolSize_m2338865308(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		GlobalConfig_t833512557 * L_14 = ___config0;
		NullCheck(L_14);
		uint8_t L_15 = GlobalConfig_get_ThreadPoolSize_m2338865308(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)254))))
		{
			goto IL_007c;
		}
	}

IL_0071:
	{
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_16, _stringLiteral1785386256, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, GlobalConfigInternal__ctor_m15594627_RuntimeMethod_var);
	}

IL_007c:
	{
		GlobalConfig_t833512557 * L_17 = ___config0;
		NullCheck(L_17);
		uint8_t L_18 = GlobalConfig_get_ThreadPoolSize_m2338865308(L_17, /*hidden argument*/NULL);
		GlobalConfigInternal_InitThreadPoolSize_m881476369(__this, L_18, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_19 = ___config0;
		NullCheck(L_19);
		uint32_t L_20 = GlobalConfig_get_MinTimerTimeout_m2541097014(L_19, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMinTimerTimeout_m942145579(__this, L_20, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_21 = ___config0;
		NullCheck(L_21);
		uint32_t L_22 = GlobalConfig_get_MaxTimerTimeout_m4065814595(L_21, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMaxTimerTimeout_m3150012622(__this, L_22, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_23 = ___config0;
		NullCheck(L_23);
		uint32_t L_24 = GlobalConfig_get_MinNetSimulatorTimeout_m757690315(L_23, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584(__this, L_24, /*hidden argument*/NULL);
		GlobalConfig_t833512557 * L_25 = ___config0;
		NullCheck(L_25);
		uint32_t L_26 = GlobalConfig_get_MaxNetSimulatorTimeout_m4144130818(L_25, /*hidden argument*/NULL);
		GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791(__this, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitWrapper_m1808118561 (GlobalConfigInternal_t1872710257 * __this, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitWrapper_m1808118561_ftn) (GlobalConfigInternal_t1872710257 *);
	static GlobalConfigInternal_InitWrapper_m1808118561_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitWrapper_m1808118561_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitWrapper()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitThreadAwakeTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102_ftn) (GlobalConfigInternal_t1872710257 *, uint32_t);
	static GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitThreadAwakeTimeout_m1448565102_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitThreadAwakeTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___ms0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorModel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorModel_m3035491100 (GlobalConfigInternal_t1872710257 * __this, uint8_t ___model0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitReactorModel_m3035491100_ftn) (GlobalConfigInternal_t1872710257 *, uint8_t);
	static GlobalConfigInternal_InitReactorModel_m3035491100_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitReactorModel_m3035491100_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitReactorModel(System.Byte)");
	_il2cpp_icall_func(__this, ___model0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumReceivedMessages(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028_ftn) (GlobalConfigInternal_t1872710257 *, uint16_t);
	static GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitReactorMaximumReceivedMessages_m2969199028_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumReceivedMessages(System.UInt16)");
	_il2cpp_icall_func(__this, ___size0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumSentMessages(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663_ftn) (GlobalConfigInternal_t1872710257 *, uint16_t);
	static GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitReactorMaximumSentMessages_m1240052663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitReactorMaximumSentMessages(System.UInt16)");
	_il2cpp_icall_func(__this, ___size0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxPacketSize_m2471663804 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMaxPacketSize_m2471663804_ftn) (GlobalConfigInternal_t1872710257 *, uint16_t);
	static GlobalConfigInternal_InitMaxPacketSize_m2471663804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMaxPacketSize_m2471663804_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMaxPacketSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___size0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxHosts(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxHosts_m3566676652 (GlobalConfigInternal_t1872710257 * __this, uint16_t ___size0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMaxHosts_m3566676652_ftn) (GlobalConfigInternal_t1872710257 *, uint16_t);
	static GlobalConfigInternal_InitMaxHosts_m3566676652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMaxHosts_m3566676652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMaxHosts(System.UInt16)");
	_il2cpp_icall_func(__this, ___size0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitThreadPoolSize(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitThreadPoolSize_m881476369 (GlobalConfigInternal_t1872710257 * __this, uint8_t ___size0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitThreadPoolSize_m881476369_ftn) (GlobalConfigInternal_t1872710257 *, uint8_t);
	static GlobalConfigInternal_InitThreadPoolSize_m881476369_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitThreadPoolSize_m881476369_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitThreadPoolSize(System.Byte)");
	_il2cpp_icall_func(__this, ___size0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMinTimerTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMinTimerTimeout_m942145579 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMinTimerTimeout_m942145579_ftn) (GlobalConfigInternal_t1872710257 *, uint32_t);
	static GlobalConfigInternal_InitMinTimerTimeout_m942145579_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMinTimerTimeout_m942145579_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMinTimerTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___ms0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxTimerTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxTimerTimeout_m3150012622 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMaxTimerTimeout_m3150012622_ftn) (GlobalConfigInternal_t1872710257 *, uint32_t);
	static GlobalConfigInternal_InitMaxTimerTimeout_m3150012622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMaxTimerTimeout_m3150012622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMaxTimerTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___ms0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMinNetSimulatorTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584_ftn) (GlobalConfigInternal_t1872710257 *, uint32_t);
	static GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMinNetSimulatorTimeout_m2153307584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMinNetSimulatorTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___ms0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::InitMaxNetSimulatorTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791 (GlobalConfigInternal_t1872710257 * __this, uint32_t ___ms0, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791_ftn) (GlobalConfigInternal_t1872710257 *, uint32_t);
	static GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_InitMaxNetSimulatorTimeout_m4145319791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::InitMaxNetSimulatorTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___ms0);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_Dispose_m447882822 (GlobalConfigInternal_t1872710257 * __this, const RuntimeMethod* method)
{
	typedef void (*GlobalConfigInternal_Dispose_m447882822_ftn) (GlobalConfigInternal_t1872710257 *);
	static GlobalConfigInternal_Dispose_m447882822_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GlobalConfigInternal_Dispose_m447882822_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.GlobalConfigInternal::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.GlobalConfigInternal::Finalize()
extern "C" IL2CPP_METHOD_ATTR void GlobalConfigInternal_Finalize_m1242247972 (GlobalConfigInternal_t1872710257 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		GlobalConfigInternal_Dispose_m447882822(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopology__ctor_m284550224 (HostTopology_t4059263395 * __this, ConnectionConfig_t4173981269 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m284550224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_1 = ___defaultConfig0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		NullReferenceException_t1023182353 * L_2 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_2, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_3 = ___maxDefaultConnections1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_4, _stringLiteral782611174, _stringLiteral1442255268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0069:
	{
		int32_t L_5 = ___maxDefaultConnections1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)65535))))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral782611174, _stringLiteral3563946363, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0084:
	{
		ConnectionConfig_t4173981269 * L_7 = ___defaultConfig0;
		ConnectionConfig_Validate_m2712188470(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_8 = ___defaultConfig0;
		ConnectionConfig_t4173981269 * L_9 = (ConnectionConfig_t4173981269 *)il2cpp_codegen_object_new(ConnectionConfig_t4173981269_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_m2640243122(L_9, L_8, /*hidden argument*/NULL);
		__this->set_m_DefConfig_0(L_9);
		int32_t L_10 = ___maxDefaultConnections1;
		__this->set_m_MaxDefConnections_1(L_10);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HostTopology__ctor_m1320382600 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m1320382600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	ConnectionConfig_t4173981269 * V_0 = NULL;
	{
		ConnectionConfig_t4173981269 * L_0 = __this->get_m_DefConfig_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ConnectionConfig_t4173981269 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1800856148 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MaxDefConnections_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_get_SpecialConnectionConfigsCount_m2294874456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t1351088715 * L_0 = __this->get_m_SpecialConnections_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1480908111(L_0, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
extern "C" IL2CPP_METHOD_ATTR List_1_t1351088715 * HostTopology_get_SpecialConnectionConfigs_m2228393737 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	List_1_t1351088715 * V_0 = NULL;
	{
		List_1_t1351088715 * L_0 = __this->get_m_SpecialConnections_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t1351088715 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_GetSpecialConnectionConfig_m1011380843 (HostTopology_t4059263395 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_GetSpecialConnectionConfig_m1011380843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t4173981269 * V_0 = NULL;
	{
		int32_t L_0 = ___i0;
		List_1_t1351088715 * L_1 = __this->get_m_SpecialConnections_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1480908111(L_1, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___i0;
		if (L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3288140609, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, HostTopology_GetSpecialConnectionConfig_m1011380843_RuntimeMethod_var);
	}

IL_0023:
	{
		List_1_t1351088715 * L_5 = __this->get_m_SpecialConnections_2();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		ConnectionConfig_t4173981269 * L_7 = List_1_get_Item_m1179646797(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1179646797_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionConfig_t4173981269 * L_8 = V_0;
		return L_8;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m1643446820 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReceivedMessagePoolSize_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m3561946879 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_SentMessagePoolSize_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C" IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MessagePoolSizeGrowthFactor_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
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
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m1686371270 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal__ctor_m1686371270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfigInternal_t1246935692 * V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionConfig_t4173981269 * V_2 = NULL;
	ConnectionConfigInternal_t1246935692 * V_3 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_0 = ___topology0;
		NullCheck(L_0);
		ConnectionConfig_t4173981269 * L_1 = HostTopology_get_DefaultConfig_m230960067(L_0, /*hidden argument*/NULL);
		ConnectionConfigInternal_t1246935692 * L_2 = (ConnectionConfigInternal_t1246935692 *)il2cpp_codegen_object_new(ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m151495501(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConnectionConfigInternal_t1246935692 * L_3 = V_0;
		HostTopology_t4059263395 * L_4 = ___topology0;
		NullCheck(L_4);
		int32_t L_5 = HostTopology_get_MaxDefaultConnections_m1800856148(L_4, /*hidden argument*/NULL);
		HostTopologyInternal_InitWrapper_m1635473231(__this, L_3, L_5, /*hidden argument*/NULL);
		V_1 = 1;
		goto IL_0044;
	}

IL_0027:
	{
		HostTopology_t4059263395 * L_6 = ___topology0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		ConnectionConfig_t4173981269 * L_8 = HostTopology_GetSpecialConnectionConfig_m1011380843(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		ConnectionConfig_t4173981269 * L_9 = V_2;
		ConnectionConfigInternal_t1246935692 * L_10 = (ConnectionConfigInternal_t1246935692 *)il2cpp_codegen_object_new(ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m151495501(L_10, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		ConnectionConfigInternal_t1246935692 * L_11 = V_3;
		HostTopologyInternal_AddSpecialConnectionConfig_m211304006(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		HostTopology_t4059263395 * L_14 = ___topology0;
		NullCheck(L_14);
		int32_t L_15 = HostTopology_get_SpecialConnectionConfigsCount_m2294874456(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0027;
		}
	}
	{
		HostTopology_t4059263395 * L_16 = ___topology0;
		HostTopologyInternal_InitOtherParameters_m3587098563(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitWrapper_m1635473231 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitWrapper_m1635473231_ftn) (HostTopologyInternal_t761087795 *, ConnectionConfigInternal_t1246935692 *, int32_t);
	static HostTopologyInternal_InitWrapper_m1635473231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitWrapper_m1635473231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)");
	_il2cpp_icall_func(__this, ___config0, ___maxDefaultConnections1);
}
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfig_m211304006 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ConnectionConfigInternal_t1246935692 * L_0 = ___config0;
		int32_t L_1 = HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method)
{
	typedef int32_t (*HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn) (HostTopologyInternal_t761087795 *, ConnectionConfigInternal_t1246935692 *);
	static HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)");
	int32_t retVal = _il2cpp_icall_func(__this, ___config0);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitOtherParameters(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitOtherParameters_m3587098563 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		NullCheck(L_0);
		uint16_t L_1 = HostTopology_get_ReceivedMessagePoolSize_m1643446820(L_0, /*hidden argument*/NULL);
		HostTopologyInternal_InitReceivedPoolSize_m2115070075(__this, L_1, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_2 = ___topology0;
		NullCheck(L_2);
		uint16_t L_3 = HostTopology_get_SentMessagePoolSize_m3561946879(L_2, /*hidden argument*/NULL);
		HostTopologyInternal_InitSentMessagePoolSize_m3801353223(__this, L_3, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_4 = ___topology0;
		NullCheck(L_4);
		float L_5 = HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492(L_4, /*hidden argument*/NULL);
		HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitReceivedPoolSize_m2115070075 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn) (HostTopologyInternal_t761087795 *, uint16_t);
	static HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___pool0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitSentMessagePoolSize_m3801353223 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn) (HostTopologyInternal_t761087795 *, uint16_t);
	static HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___pool0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449 (HostTopologyInternal_t761087795 * __this, float ___factor0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn) (HostTopologyInternal_t761087795 *, float);
	static HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)");
	_il2cpp_icall_func(__this, ___factor0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m1652380424 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_Dispose_m1652380424_ftn) (HostTopologyInternal_t761087795 *);
	static HostTopologyInternal_Dispose_m1652380424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_Dispose_m1652380424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Finalize_m3358655436 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		HostTopologyInternal_Dispose_m1652380424(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.BasicResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BasicResponse__ctor_m3021811122 (BasicResponse_t1476713923 * __this, const RuntimeMethod* method)
{
	{
		Response__ctor_m1005354347(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest__ctor_m1120211933 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchRequest__ctor_m1120211933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_name_m2145735034 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_name_m701411379 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::get_size()
extern "C" IL2CPP_METHOD_ATTR uint32_t CreateMatchRequest_get_size_m3980857567 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_U3CsizeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_size(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_size_m3316633767 (CreateMatchRequest_t2600446299 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		__this->set_U3CsizeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_publicAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_publicAddress_m3336041532 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpublicAddressU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_publicAddress_m1416983088 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_privateAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_privateAddress_m3613518697 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprivateAddressU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_privateAddress_m278898640 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.CreateMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t CreateMatchRequest_get_eloScore_m1485273462 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_eloScore_m1972554262 (CreateMatchRequest_t2600446299 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::get_advertise()
extern "C" IL2CPP_METHOD_ATTR bool CreateMatchRequest_get_advertise_m865484440 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CadvertiseU3Ek__BackingField_10();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_advertise(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_advertise_m3607720815 (CreateMatchRequest_t2600446299 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CadvertiseU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::get_password()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_get_password_m3435449282 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpasswordU3Ek__BackingField_11();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.CreateMatchRequest::set_password(System.String)
extern "C" IL2CPP_METHOD_ATTR void CreateMatchRequest_set_password_m1322775125 (CreateMatchRequest_t2600446299 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpasswordU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::get_matchAttributes()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * CreateMatchRequest_get_matchAttributes_m3276240993 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributesU3Ek__BackingField_12();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchRequest_ToString_m24174952 (CreateMatchRequest_t2600446299 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchRequest_ToString_m24174952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		String_t* L_4 = CreateMatchRequest_get_name_m2145735034(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_3;
		uint32_t L_6 = CreateMatchRequest_get_size_m3980857567(__this, /*hidden argument*/NULL);
		uint32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		String_t* L_10 = CreateMatchRequest_get_publicAddress_m3336041532(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		String_t* L_12 = CreateMatchRequest_get_privateAddress_m3613518697(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_11;
		int32_t L_14 = CreateMatchRequest_get_eloScore_m1485273462(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_13;
		bool L_18 = CreateMatchRequest_get_advertise_m865484440(__this, /*hidden argument*/NULL);
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		String_t* L_22 = CreateMatchRequest_get_password_m3435449282(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		G_B1_0 = 7;
		G_B1_1 = L_21;
		G_B1_2 = L_21;
		G_B1_3 = _stringLiteral753200322;
		if (!L_23)
		{
			G_B2_0 = 7;
			G_B2_1 = L_21;
			G_B2_2 = L_21;
			G_B2_3 = _stringLiteral753200322;
			goto IL_0077;
		}
	}
	{
		G_B3_0 = _stringLiteral3456874466;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_007c;
	}

IL_0077:
	{
		G_B3_0 = _stringLiteral2696477506;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_007c:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t2843939325* L_24 = G_B3_3;
		Dictionary_2_t3521823603 * L_25 = CreateMatchRequest_get_matchAttributes_m3276240993(__this, /*hidden argument*/NULL);
		G_B4_0 = 8;
		G_B4_1 = L_24;
		G_B4_2 = L_24;
		G_B4_3 = G_B3_4;
		if (L_25)
		{
			G_B5_0 = 8;
			G_B5_1 = L_24;
			G_B5_2 = L_24;
			G_B5_3 = G_B3_4;
			goto IL_0090;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_009b;
	}

IL_0090:
	{
		Dictionary_2_t3521823603 * L_26 = CreateMatchRequest_get_matchAttributes_m3276240993(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = Dictionary_2_get_Count_m1082800239(L_26, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B6_0 = L_27;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_009b:
	{
		int32_t L_28 = G_B6_0;
		RuntimeObject * L_29 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_28);
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, L_29);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)L_29);
		String_t* L_30 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B6_4, G_B6_3, /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_00ac;
	}

IL_00ac:
	{
		String_t* L_31 = V_0;
		return L_31;
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
// System.Void UnityEngine.Networking.Match.CreateMatchResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CreateMatchResponse__ctor_m3223617620 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	{
		__this->set_domain_4(0);
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.CreateMatchResponse::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* CreateMatchResponse_ToString_m2170760668 (CreateMatchResponse_t1328247360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CreateMatchResponse_ToString_m2170760668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		String_t* L_4 = __this->get_address_2();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_3;
		int32_t L_6 = __this->get_port_3();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		uint64_t* L_10 = __this->get_address_of_networkId_5();
		String_t* L_11 = UInt64_ToString_m2177233542((uint64_t*)L_10, _stringLiteral3452614648, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_9;
		String_t* L_13 = __this->get_accessTokenString_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_12;
		uint16_t* L_18 = __this->get_address_of_nodeId_7();
		RuntimeObject * L_19 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, L_18);
		NullCheck((Enum_t4135868527 *)L_19);
		String_t* L_20 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_19, _stringLiteral3452614648, /*hidden argument*/NULL);
		*L_18 = *(uint16_t*)UnBox(L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		bool L_22 = __this->get_usingRelay_8();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_24);
		String_t* L_25 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3097465497, L_21, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_26 = V_0;
		return L_26;
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
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DestroyMatchRequest__ctor_m327028137 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyMatchRequest__ctor_m327028137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DestroyMatchRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t DestroyMatchRequest_get_networkId_m1753108237 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DestroyMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void DestroyMatchRequest_set_networkId_m2430913175 (DestroyMatchRequest_t2124150613 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DestroyMatchRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DestroyMatchRequest_ToString_m3014217280 (DestroyMatchRequest_t2124150613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyMatchRequest_ToString_m3014217280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t L_4 = DestroyMatchRequest_get_networkId_m1753108237(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		NullCheck((Enum_t4135868527 *)L_5);
		String_t* L_6 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_5, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		String_t* L_7 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2101124098, L_3, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_003c;
	}

IL_003c:
	{
		String_t* L_8 = V_1;
		return L_8;
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
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest__ctor_m2312219607 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionRequest__ctor_m2312219607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.DropConnectionRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t DropConnectionRequest_get_networkId_m2906146404 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest_set_networkId_m399344964 (DropConnectionRequest_t2647317937 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.DropConnectionRequest::get_nodeId()
extern "C" IL2CPP_METHOD_ATTR uint16_t DropConnectionRequest_get_nodeId_m2375409994 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.DropConnectionRequest::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void DropConnectionRequest_set_nodeId_m2959951618 (DropConnectionRequest_t2647317937 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DropConnectionRequest_ToString_m973853606 (DropConnectionRequest_t2647317937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionRequest_ToString_m973853606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t L_4 = DropConnectionRequest_get_networkId_m2906146404(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		NullCheck((Enum_t4135868527 *)L_5);
		String_t* L_6 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_5, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		uint16_t L_8 = DropConnectionRequest_get_nodeId_m2375409994(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		RuntimeObject * L_9 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_1));
		NullCheck((Enum_t4135868527 *)L_9);
		String_t* L_10 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_9, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_1 = *(uint16_t*)UnBox(L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		String_t* L_11 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral4039479833, L_7, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_12 = V_2;
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
// System.Void UnityEngine.Networking.Match.DropConnectionResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DropConnectionResponse__ctor_m921258081 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	{
		Response__ctor_m1005354347(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.DropConnectionResponse::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* DropConnectionResponse_ToString_m463686848 (DropConnectionResponse_t3571632289 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DropConnectionResponse_ToString_m463686848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t* L_4 = __this->get_address_of_networkId_2();
		String_t* L_5 = UInt64_ToString_m2177233542((uint64_t*)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3347455858, L_3, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest__ctor_m929255344 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchRequest__ctor_m929255344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t JoinMatchRequest_get_networkId_m2534671775 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_networkId_m1582426564 (JoinMatchRequest_t3991767598 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_publicAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_publicAddress_m3644611049 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpublicAddressU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_publicAddress_m3396720139 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_privateAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_privateAddress_m664578272 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprivateAddressU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_privateAddress_m2598128522 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.JoinMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t JoinMatchRequest_get_eloScore_m1107868278 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_eloScore_m3728163236 (JoinMatchRequest_t3991767598 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::get_password()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_get_password_m2718232171 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CpasswordU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.JoinMatchRequest::set_password(System.String)
extern "C" IL2CPP_METHOD_ATTR void JoinMatchRequest_set_password_m3230348675 (JoinMatchRequest_t3991767598 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpasswordU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchRequest_ToString_m1421470052 (JoinMatchRequest_t3991767598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchRequest_ToString_m1421470052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t L_4 = JoinMatchRequest_get_networkId_m2534671775(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		NullCheck((Enum_t4135868527 *)L_5);
		String_t* L_6 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_5, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		String_t* L_8 = JoinMatchRequest_get_publicAddress_m3644611049(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = JoinMatchRequest_get_privateAddress_m664578272(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		int32_t L_12 = JoinMatchRequest_get_eloScore_m1107868278(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_11;
		String_t* L_16 = JoinMatchRequest_get_password_m2718232171(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		G_B1_0 = 5;
		G_B1_1 = L_15;
		G_B1_2 = L_15;
		G_B1_3 = _stringLiteral1439649509;
		if (!L_17)
		{
			G_B2_0 = 5;
			G_B2_1 = L_15;
			G_B2_2 = L_15;
			G_B2_3 = _stringLiteral1439649509;
			goto IL_006d;
		}
	}
	{
		G_B3_0 = _stringLiteral3456874466;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0072;
	}

IL_006d:
	{
		G_B3_0 = _stringLiteral2696477506;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0072:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		String_t* L_18 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_007e;
	}

IL_007e:
	{
		String_t* L_19 = V_1;
		return L_19;
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
// System.Void UnityEngine.Networking.Match.JoinMatchResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void JoinMatchResponse__ctor_m29151454 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	{
		__this->set_domain_4(0);
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.JoinMatchResponse::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* JoinMatchResponse_ToString_m3412211677 (JoinMatchResponse_t845270609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JoinMatchResponse_ToString_m3412211677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		String_t* L_4 = __this->get_address_2();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_3;
		int32_t L_6 = __this->get_port_3();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		uint64_t* L_10 = __this->get_address_of_networkId_5();
		String_t* L_11 = UInt64_ToString_m2177233542((uint64_t*)L_10, _stringLiteral3452614648, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_9;
		String_t* L_13 = __this->get_accessTokenString_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_16);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_12;
		uint16_t* L_18 = __this->get_address_of_nodeId_7();
		RuntimeObject * L_19 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, L_18);
		NullCheck((Enum_t4135868527 *)L_19);
		String_t* L_20 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_19, _stringLiteral3452614648, /*hidden argument*/NULL);
		*L_18 = *(uint16_t*)UnBox(L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		bool L_22 = __this->get_usingRelay_8();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_24);
		String_t* L_25 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3097465497, L_21, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_0084;
	}

IL_0084:
	{
		String_t* L_26 = V_0;
		return L_26;
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
// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest__ctor_m189544352 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchRequest__ctor_m189544352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_pageSize_m3055718048 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CpageSizeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_pageSize_m2542353962 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpageSizeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_pageNum_m3084306515 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CpageNumU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_pageNum_m714424921 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpageNumU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C" IL2CPP_METHOD_ATTR String_t* ListMatchRequest_get_nameFilter_m1921865349 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameFilterU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_nameFilter_m3455577482 (ListMatchRequest_t1588429355 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameFilterU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_filterOutPrivateMatches()
extern "C" IL2CPP_METHOD_ATTR bool ListMatchRequest_get_filterOutPrivateMatches_m702074324 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CfilterOutPrivateMatchesU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_filterOutPrivateMatches(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_filterOutPrivateMatches_m242262970 (ListMatchRequest_t1588429355 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CfilterOutPrivateMatchesU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_eloScore()
extern "C" IL2CPP_METHOD_ATTR int32_t ListMatchRequest_get_eloScore_m2377257860 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CeloScoreU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_eloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ListMatchRequest_set_eloScore_m2096908822 (ListMatchRequest_t1588429355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CeloScoreU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterLessThan_m369421819 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterLessThanU3Ek__BackingField_10();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterEqualTo()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterEqualToU3Ek__BackingField_11();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3521823603 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t3521823603 * V_0 = NULL;
	{
		Dictionary_2_t3521823603 * L_0 = __this->get_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField_12();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Dictionary_2_t3521823603 * L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ListMatchRequest_ToString_m1671513149 (ListMatchRequest_t1588429355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchRequest_ToString_m1671513149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t2843939325* G_B5_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t2843939325* G_B4_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t2843939325* G_B6_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B8_0 = 0;
	ObjectU5BU5D_t2843939325* G_B8_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	ObjectU5BU5D_t2843939325* G_B7_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	ObjectU5BU5D_t2843939325* G_B9_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		int32_t L_4 = ListMatchRequest_get_pageSize_m3055718048(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		int32_t L_8 = ListMatchRequest_get_pageNum_m3084306515(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		String_t* L_12 = ListMatchRequest_get_nameFilter_m1921865349(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_11;
		bool L_14 = ListMatchRequest_get_filterOutPrivateMatches_m702074324(__this, /*hidden argument*/NULL);
		bool L_15 = L_14;
		RuntimeObject * L_16 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_13;
		int32_t L_18 = ListMatchRequest_get_eloScore_m2377257860(__this, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_20);
		ObjectU5BU5D_t2843939325* L_21 = L_17;
		Dictionary_2_t3521823603 * L_22 = ListMatchRequest_get_matchAttributeFilterLessThan_m369421819(__this, /*hidden argument*/NULL);
		G_B1_0 = 6;
		G_B1_1 = L_21;
		G_B1_2 = L_21;
		G_B1_3 = _stringLiteral1112616250;
		if (L_22)
		{
			G_B2_0 = 6;
			G_B2_1 = L_21;
			G_B2_2 = L_21;
			G_B2_3 = _stringLiteral1112616250;
			goto IL_006a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0075;
	}

IL_006a:
	{
		Dictionary_2_t3521823603 * L_23 = ListMatchRequest_get_matchAttributeFilterLessThan_m369421819(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		int32_t L_24 = Dictionary_2_get_Count_m1082800239(L_23, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B3_0 = L_24;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0075:
	{
		int32_t L_25 = G_B3_0;
		RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, L_26);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_26);
		ObjectU5BU5D_t2843939325* L_27 = G_B3_3;
		Dictionary_2_t3521823603 * L_28 = ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901(__this, /*hidden argument*/NULL);
		G_B4_0 = 7;
		G_B4_1 = L_27;
		G_B4_2 = L_27;
		G_B4_3 = G_B3_4;
		if (L_28)
		{
			G_B5_0 = 7;
			G_B5_1 = L_27;
			G_B5_2 = L_27;
			G_B5_3 = G_B3_4;
			goto IL_008e;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0099;
	}

IL_008e:
	{
		Dictionary_2_t3521823603 * L_29 = ListMatchRequest_get_matchAttributeFilterEqualTo_m2609736901(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		int32_t L_30 = Dictionary_2_get_Count_m1082800239(L_29, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B6_0 = L_30;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0099:
	{
		int32_t L_31 = G_B6_0;
		RuntimeObject * L_32 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_31);
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, L_32);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)L_32);
		ObjectU5BU5D_t2843939325* L_33 = G_B6_3;
		Dictionary_2_t3521823603 * L_34 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691(__this, /*hidden argument*/NULL);
		G_B7_0 = 8;
		G_B7_1 = L_33;
		G_B7_2 = L_33;
		G_B7_3 = G_B6_4;
		if (L_34)
		{
			G_B8_0 = 8;
			G_B8_1 = L_33;
			G_B8_2 = L_33;
			G_B8_3 = G_B6_4;
			goto IL_00b2;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		goto IL_00bd;
	}

IL_00b2:
	{
		Dictionary_2_t3521823603 * L_35 = ListMatchRequest_get_matchAttributeFilterGreaterThan_m2040637691(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = Dictionary_2_get_Count_m1082800239(L_35, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B9_0 = L_36;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
	}

IL_00bd:
	{
		int32_t L_37 = G_B9_0;
		RuntimeObject * L_38 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_37);
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, L_38);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (RuntimeObject *)L_38);
		String_t* L_39 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B9_4, G_B9_3, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_00ce;
	}

IL_00ce:
	{
		String_t* L_40 = V_0;
		return L_40;
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
// System.Void UnityEngine.Networking.Match.ListMatchResponse::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ListMatchResponse__ctor_m1031598034 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchResponse__ctor_m1031598034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BasicResponse__ctor_m3021811122(__this, /*hidden argument*/NULL);
		List_1_t1004336143 * L_0 = (List_1_t1004336143 *)il2cpp_codegen_object_new(List_1_t1004336143_il2cpp_TypeInfo_var);
		List_1__ctor_m2320846806(L_0, /*hidden argument*/List_1__ctor_m2320846806_RuntimeMethod_var);
		__this->set_matches_2(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.ListMatchResponse::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ListMatchResponse_ToString_m3673418885 (ListMatchResponse_t3200990838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListMatchResponse_ToString_m3673418885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Response_ToString_m2727218217(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		List_1_t1004336143 * L_4 = __this->get_matches_2();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral200980691;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral200980691;
			goto IL_0028;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0033;
	}

IL_0028:
	{
		List_1_t1004336143 * L_5 = __this->get_matches_2();
		NullCheck(L_5);
		int32_t L_6 = List_1_get_Count_m119633916(L_5, /*hidden argument*/List_1_get_Count_m119633916_RuntimeMethod_var);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0033:
	{
		int32_t L_7 = G_B3_0;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, L_8);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, G_B3_3, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0044;
	}

IL_0044:
	{
		String_t* L_10 = V_0;
		return L_10;
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
// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MatchDesc__ctor_m2893606109 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchDesc_ToString_m354754803 (MatchDesc_t3827228697 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDesc_ToString_m354754803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t2843939325* G_B2_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t2843939325* G_B1_1 = NULL;
	ObjectU5BU5D_t2843939325* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t2843939325* G_B3_2 = NULL;
	ObjectU5BU5D_t2843939325* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t* L_4 = __this->get_address_of_networkId_0();
		String_t* L_5 = UInt64_ToString_m2177233542((uint64_t*)L_4, _stringLiteral3452614648, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_3;
		String_t* L_7 = __this->get_name_1();
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		int32_t L_9 = __this->get_averageEloScore_2();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		int32_t L_13 = __this->get_maxSize_3();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		int32_t L_17 = __this->get_currentSize_4();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = L_16;
		bool L_21 = __this->get_isPrivate_5();
		bool L_22 = L_21;
		RuntimeObject * L_23 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_20;
		Dictionary_2_t3521823603 * L_25 = __this->get_matchAttributes_6();
		G_B1_0 = 7;
		G_B1_1 = L_24;
		G_B1_2 = L_24;
		G_B1_3 = _stringLiteral2091236560;
		if (L_25)
		{
			G_B2_0 = 7;
			G_B2_1 = L_24;
			G_B2_2 = L_24;
			G_B2_3 = _stringLiteral2091236560;
			goto IL_007d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0088;
	}

IL_007d:
	{
		Dictionary_2_t3521823603 * L_26 = __this->get_matchAttributes_6();
		NullCheck(L_26);
		int32_t L_27 = Dictionary_2_get_Count_m1082800239(L_26, /*hidden argument*/Dictionary_2_get_Count_m1082800239_RuntimeMethod_var);
		G_B3_0 = L_27;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0088:
	{
		int32_t L_28 = G_B3_0;
		RuntimeObject * L_29 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_28);
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, L_29);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)L_29);
		ObjectU5BU5D_t2843939325* L_30 = G_B3_3;
		uint16_t L_31 = __this->get_hostNodeId_7();
		uint16_t L_32 = L_31;
		RuntimeObject * L_33 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_30;
		List_1_t32447842 * L_35 = __this->get_directConnectInfos_8();
		NullCheck(L_35);
		int32_t L_36 = List_1_get_Count_m1160238088(L_35, /*hidden argument*/List_1_get_Count_m1160238088_RuntimeMethod_var);
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_38);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_38);
		String_t* L_39 = UnityString_Format_m261690510(NULL /*static, unused*/, G_B3_4, L_34, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_00bb;
	}

IL_00bb:
	{
		String_t* L_40 = V_0;
		return L_40;
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
// System.Void UnityEngine.Networking.Match.MatchDirectConnectInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MatchDirectConnectInfo__ctor_m3939448440 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchDirectConnectInfo::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchDirectConnectInfo_ToString_m3550485463 (MatchDirectConnectInfo_t2855340396 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchDirectConnectInfo_ToString_m3550485463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint16_t L_4 = __this->get_nodeId_0();
		uint16_t L_5 = L_4;
		RuntimeObject * L_6 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		String_t* L_8 = __this->get_publicAddress_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = __this->get_privateAddress_2();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_9;
		int32_t L_12 = __this->get_hostPriority_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(HostPriority_t1616615738_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1614969392, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_004e;
	}

IL_004e:
	{
		String_t* L_16 = V_0;
		return L_16;
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
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo__ctor_m1026163455 (MatchInfo_t221301733 * __this, CreateMatchResponse_t1328247360 * ___matchResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo__ctor_m1026163455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_0 = ___matchResponse0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_address_2();
		MatchInfo_set_address_m3672516569(__this, L_1, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_2 = ___matchResponse0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_port_3();
		MatchInfo_set_port_m2729257488(__this, L_3, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_4 = ___matchResponse0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_domain_4();
		MatchInfo_set_domain_m2690339534(__this, L_5, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_6 = ___matchResponse0;
		NullCheck(L_6);
		uint64_t L_7 = L_6->get_networkId_5();
		MatchInfo_set_networkId_m3466879976(__this, L_7, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_8 = ___matchResponse0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_accessTokenString_6();
		NetworkAccessToken_t320639760 * L_10 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_10, L_9, /*hidden argument*/NULL);
		MatchInfo_set_accessToken_m2153896250(__this, L_10, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_11 = ___matchResponse0;
		NullCheck(L_11);
		uint16_t L_12 = L_11->get_nodeId_7();
		MatchInfo_set_nodeId_m1751290814(__this, L_12, /*hidden argument*/NULL);
		CreateMatchResponse_t1328247360 * L_13 = ___matchResponse0;
		NullCheck(L_13);
		bool L_14 = L_13->get_usingRelay_8();
		MatchInfo_set_usingRelay_m1568266214(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo__ctor_m1464312026 (MatchInfo_t221301733 * __this, JoinMatchResponse_t845270609 * ___matchResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo__ctor_m1464312026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_0 = ___matchResponse0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_address_2();
		MatchInfo_set_address_m3672516569(__this, L_1, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_2 = ___matchResponse0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_port_3();
		MatchInfo_set_port_m2729257488(__this, L_3, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_4 = ___matchResponse0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_domain_4();
		MatchInfo_set_domain_m2690339534(__this, L_5, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_6 = ___matchResponse0;
		NullCheck(L_6);
		uint64_t L_7 = L_6->get_networkId_5();
		MatchInfo_set_networkId_m3466879976(__this, L_7, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_8 = ___matchResponse0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_accessTokenString_6();
		NetworkAccessToken_t320639760 * L_10 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_10, L_9, /*hidden argument*/NULL);
		MatchInfo_set_accessToken_m2153896250(__this, L_10, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_11 = ___matchResponse0;
		NullCheck(L_11);
		uint16_t L_12 = L_11->get_nodeId_7();
		MatchInfo_set_nodeId_m1751290814(__this, L_12, /*hidden argument*/NULL);
		JoinMatchResponse_t845270609 * L_13 = ___matchResponse0;
		NullCheck(L_13);
		bool L_14 = L_13->get_usingRelay_8();
		MatchInfo_set_usingRelay_m1568266214(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchInfo_get_address_m1232556325 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaddressU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_address_m3672516569 (MatchInfo_t221301733 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CaddressU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C" IL2CPP_METHOD_ATTR int32_t MatchInfo_get_port_m1945994513 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CportU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_port_m2729257488 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CportU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_domain()
extern "C" IL2CPP_METHOD_ATTR int32_t MatchInfo_get_domain_m3216876147 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_domain(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_domain_m2690339534 (MatchInfo_t221301733 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdomainU3Ek__BackingField_2(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t MatchInfo_get_networkId_m1444611712 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_networkId_m3466879976 (MatchInfo_t221301733 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_accessToken_m2153896250 (MatchInfo_t221301733 * __this, NetworkAccessToken_t320639760 * ___value0, const RuntimeMethod* method)
{
	{
		NetworkAccessToken_t320639760 * L_0 = ___value0;
		__this->set_U3CaccessTokenU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C" IL2CPP_METHOD_ATTR uint16_t MatchInfo_get_nodeId_m3362352490 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_U3CnodeIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_nodeId_m1751290814 (MatchInfo_t221301733 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C" IL2CPP_METHOD_ATTR bool MatchInfo_get_usingRelay_m3308939749 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CusingRelayU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MatchInfo_set_usingRelay_m1568266214 (MatchInfo_t221301733 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CusingRelayU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfo::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchInfo_ToString_m1494942688 (MatchInfo_t221301733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfo_ToString_m1494942688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		uint64_t L_2 = MatchInfo_get_networkId_m1444611712(__this, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		String_t* L_6 = MatchInfo_get_address_m1232556325(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		int32_t L_8 = MatchInfo_get_port_m1945994513(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		uint16_t L_12 = MatchInfo_get_nodeId_m3362352490(__this, /*hidden argument*/NULL);
		uint16_t L_13 = L_12;
		RuntimeObject * L_14 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t2843939325* L_15 = L_11;
		bool L_16 = MatchInfo_get_usingRelay_m3308939749(__this, /*hidden argument*/NULL);
		bool L_17 = L_16;
		RuntimeObject * L_18 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		String_t* L_19 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1693422942, L_15, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_20 = V_0;
		return L_20;
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
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::.ctor(UnityEngine.Networking.Match.MatchDesc)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot__ctor_m3116124190 (MatchInfoSnapshot_t3166422189 * __this, MatchDesc_t3827228697 * ___matchDesc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MatchInfoSnapshot__ctor_m3116124190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MatchDirectConnectInfo_t2855340396 * V_0 = NULL;
	Enumerator_t1921691719  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_0 = ___matchDesc0;
		NullCheck(L_0);
		uint64_t L_1 = L_0->get_networkId_0();
		MatchInfoSnapshot_set_networkId_m1572557663(__this, L_1, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_2 = ___matchDesc0;
		NullCheck(L_2);
		uint16_t L_3 = L_2->get_hostNodeId_7();
		MatchInfoSnapshot_set_hostNodeId_m2433065083(__this, L_3, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_4 = ___matchDesc0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_1();
		MatchInfoSnapshot_set_name_m382744311(__this, L_5, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_6 = ___matchDesc0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_averageEloScore_2();
		MatchInfoSnapshot_set_averageEloScore_m1171549014(__this, L_7, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_8 = ___matchDesc0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_maxSize_3();
		MatchInfoSnapshot_set_maxSize_m2547898986(__this, L_9, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_10 = ___matchDesc0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_currentSize_4();
		MatchInfoSnapshot_set_currentSize_m3677953324(__this, L_11, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_12 = ___matchDesc0;
		NullCheck(L_12);
		bool L_13 = L_12->get_isPrivate_5();
		MatchInfoSnapshot_set_isPrivate_m1688058755(__this, L_13, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_14 = ___matchDesc0;
		NullCheck(L_14);
		Dictionary_2_t3521823603 * L_15 = L_14->get_matchAttributes_6();
		MatchInfoSnapshot_set_matchAttributes_m1462812445(__this, L_15, /*hidden argument*/NULL);
		List_1_t2090095927 * L_16 = (List_1_t2090095927 *)il2cpp_codegen_object_new(List_1_t2090095927_il2cpp_TypeInfo_var);
		List_1__ctor_m818466152(L_16, /*hidden argument*/List_1__ctor_m818466152_RuntimeMethod_var);
		MatchInfoSnapshot_set_directConnectInfos_m4174501432(__this, L_16, /*hidden argument*/NULL);
		MatchDesc_t3827228697 * L_17 = ___matchDesc0;
		NullCheck(L_17);
		List_1_t32447842 * L_18 = L_17->get_directConnectInfos_8();
		NullCheck(L_18);
		Enumerator_t1921691719  L_19 = List_1_GetEnumerator_m2476053975(L_18, /*hidden argument*/List_1_GetEnumerator_m2476053975_RuntimeMethod_var);
		V_1 = L_19;
	}

IL_007f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0084:
		{
			MatchDirectConnectInfo_t2855340396 * L_20 = Enumerator_get_Current_m2463612473((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m2463612473_RuntimeMethod_var);
			V_0 = L_20;
			List_1_t2090095927 * L_21 = MatchInfoSnapshot_get_directConnectInfos_m4034722686(__this, /*hidden argument*/NULL);
			MatchDirectConnectInfo_t2855340396 * L_22 = V_0;
			MatchInfoDirectConnectSnapshot_t618021185 * L_23 = (MatchInfoDirectConnectSnapshot_t618021185 *)il2cpp_codegen_object_new(MatchInfoDirectConnectSnapshot_t618021185_il2cpp_TypeInfo_var);
			MatchInfoDirectConnectSnapshot__ctor_m375710675(L_23, L_22, /*hidden argument*/NULL);
			NullCheck(L_21);
			List_1_Add_m548998622(L_21, L_23, /*hidden argument*/List_1_Add_m548998622_RuntimeMethod_var);
		}

IL_009f:
		{
			bool L_24 = Enumerator_MoveNext_m957156581((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m957156581_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0084;
			}
		}

IL_00ab:
		{
			IL2CPP_LEAVE(0xBE, FINALLY_00b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b0;
	}

FINALLY_00b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3020357317((Enumerator_t1921691719 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3020357317_RuntimeMethod_var);
		IL2CPP_END_FINALLY(176)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(176)
	{
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00be:
	{
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfoSnapshot::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t MatchInfoSnapshot_get_networkId_m4253878400 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_networkId_m1572557663 (MatchInfoSnapshot_t3166422189 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_hostNodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_hostNodeId_m2433065083 (MatchInfoSnapshot_t3166422189 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3ChostNodeIdU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.MatchInfoSnapshot::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* MatchInfoSnapshot_get_name_m2315886851 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_name_m382744311 (MatchInfoSnapshot_t3166422189 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_averageEloScore(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_averageEloScore_m1171549014 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CaverageEloScoreU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_maxSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_maxSize_m2547898986 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CmaxSizeU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_currentSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_currentSize_m3677953324 (MatchInfoSnapshot_t3166422189 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CcurrentSizeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_isPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_isPrivate_m1688058755 (MatchInfoSnapshot_t3166422189 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisPrivateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_matchAttributes(System.Collections.Generic.Dictionary`2<System.String,System.Int64>)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_matchAttributes_m1462812445 (MatchInfoSnapshot_t3166422189 * __this, Dictionary_2_t3521823603 * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t3521823603 * L_0 = ___value0;
		__this->set_U3CmatchAttributesU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot> UnityEngine.Networking.Match.MatchInfoSnapshot::get_directConnectInfos()
extern "C" IL2CPP_METHOD_ATTR List_1_t2090095927 * MatchInfoSnapshot_get_directConnectInfos_m4034722686 (MatchInfoSnapshot_t3166422189 * __this, const RuntimeMethod* method)
{
	List_1_t2090095927 * V_0 = NULL;
	{
		List_1_t2090095927 * L_0 = __this->get_U3CdirectConnectInfosU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		List_1_t2090095927 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot>)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoSnapshot_set_directConnectInfos_m4174501432 (MatchInfoSnapshot_t3166422189 * __this, List_1_t2090095927 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t2090095927 * L_0 = ___value0;
		__this->set_U3CdirectConnectInfosU3Ek__BackingField_8(L_0);
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
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::.ctor(UnityEngine.Networking.Match.MatchDirectConnectInfo)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot__ctor_m375710675 (MatchInfoDirectConnectSnapshot_t618021185 * __this, MatchDirectConnectInfo_t2855340396 * ___matchDirectConnectInfo0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_0 = ___matchDirectConnectInfo0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->get_nodeId_0();
		MatchInfoDirectConnectSnapshot_set_nodeId_m198744523(__this, L_1, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_2 = ___matchDirectConnectInfo0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_publicAddress_1();
		MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076(__this, L_3, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_4 = ___matchDirectConnectInfo0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_privateAddress_2();
		MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284(__this, L_5, /*hidden argument*/NULL);
		MatchDirectConnectInfo_t2855340396 * L_6 = ___matchDirectConnectInfo0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_hostPriority_3();
		MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_nodeId_m198744523 (MatchInfoDirectConnectSnapshot_t618021185 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CnodeIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_publicAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_publicAddress_m3627602076 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CpublicAddressU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_privateAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_privateAddress_m2091056284 (MatchInfoDirectConnectSnapshot_t618021185 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CprivateAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.MatchInfoSnapshot/MatchInfoDirectConnectSnapshot::set_hostPriority(UnityEngine.Networking.Types.HostPriority)
extern "C" IL2CPP_METHOD_ATTR void MatchInfoDirectConnectSnapshot_set_hostPriority_m3615557824 (MatchInfoDirectConnectSnapshot_t618021185 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChostPriorityU3Ek__BackingField_3(L_0);
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
// System.Void UnityEngine.Networking.Match.NetworkMatch::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch__ctor_m3727241709 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch__ctor_m3727241709_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t100236324 * L_0 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_0, _stringLiteral1496010082, /*hidden argument*/NULL);
		__this->set_m_BaseUri_4(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * NetworkMatch_get_baseUri_m3103825236 (NetworkMatch_t2930480025 * __this, const RuntimeMethod* method)
{
	Uri_t100236324 * V_0 = NULL;
	{
		Uri_t100236324 * L_0 = __this->get_m_BaseUri_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Uri_t100236324 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_set_baseUri_m3444896208 (NetworkMatch_t2930480025 * __this, Uri_t100236324 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t100236324 * L_0 = ___value0;
		__this->set_m_BaseUri_4(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::SetProgramAppID(UnityEngine.Networking.Types.AppID)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_SetProgramAppID_m431388278 (NetworkMatch_t2930480025 * __this, uint64_t ___programAppID0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3079176019 (NetworkMatch_t2930480025 * __this, String_t* ___matchName0, uint32_t ___matchSize1, bool ___matchAdvertise2, String_t* ___matchPassword3, String_t* ___publicClientAddress4, String_t* ___privateClientAddress5, int32_t ___eloScoreForMatch6, int32_t ___requestDomain7, DataResponseDelegate_1_t186927816 * ___callback8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_CreateMatch_m3079176019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	CreateMatchRequest_t2600446299 * V_1 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral984512269, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0071;
	}

IL_001f:
	{
		CreateMatchRequest_t2600446299 * L_1 = (CreateMatchRequest_t2600446299 *)il2cpp_codegen_object_new(CreateMatchRequest_t2600446299_il2cpp_TypeInfo_var);
		CreateMatchRequest__ctor_m1120211933(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		CreateMatchRequest_t2600446299 * L_2 = V_1;
		String_t* L_3 = ___matchName0;
		NullCheck(L_2);
		CreateMatchRequest_set_name_m701411379(L_2, L_3, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_4 = V_1;
		uint32_t L_5 = ___matchSize1;
		NullCheck(L_4);
		CreateMatchRequest_set_size_m3316633767(L_4, L_5, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_6 = V_1;
		bool L_7 = ___matchAdvertise2;
		NullCheck(L_6);
		CreateMatchRequest_set_advertise_m3607720815(L_6, L_7, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_8 = V_1;
		String_t* L_9 = ___matchPassword3;
		NullCheck(L_8);
		CreateMatchRequest_set_password_m1322775125(L_8, L_9, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_10 = V_1;
		String_t* L_11 = ___publicClientAddress4;
		NullCheck(L_10);
		CreateMatchRequest_set_publicAddress_m1416983088(L_10, L_11, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_12 = V_1;
		String_t* L_13 = ___privateClientAddress5;
		NullCheck(L_12);
		CreateMatchRequest_set_privateAddress_m278898640(L_12, L_13, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_14 = V_1;
		int32_t L_15 = ___eloScoreForMatch6;
		NullCheck(L_14);
		CreateMatchRequest_set_eloScore_m1972554262(L_14, L_15, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_16 = V_1;
		int32_t L_17 = ___requestDomain7;
		NullCheck(L_16);
		Request_set_domain_m3630208190(L_16, L_17, /*hidden argument*/NULL);
		CreateMatchRequest_t2600446299 * L_18 = V_1;
		DataResponseDelegate_1_t186927816 * L_19 = ___callback8;
		Coroutine_t3829159415 * L_20 = NetworkMatch_CreateMatch_m3201661599(__this, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		goto IL_0071;
	}

IL_0071:
	{
		Coroutine_t3829159415 * L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_CreateMatch_m3201661599 (NetworkMatch_t2930480025 * __this, CreateMatchRequest_t2600446299 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_CreateMatch_m3201661599_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	UnityWebRequest_t463507806 * V_7 = NULL;
	{
		DataResponseDelegate_1_t186927816 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1982503484, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0184;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral3546950769, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3793802062, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_6);
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		NullCheck(L_10);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		NullCheck(L_14);
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		CreateMatchRequest_t2600446299 * L_16 = ___req0;
		NullCheck(L_16);
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		CreateMatchRequest_t2600446299 * L_19 = ___req0;
		NullCheck(L_19);
		String_t* L_20 = CreateMatchRequest_get_name_m2145735034(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		WWWForm_AddField_m2357902982(L_18, _stringLiteral62725243, L_20, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_21 = V_2;
		CreateMatchRequest_t2600446299 * L_22 = ___req0;
		NullCheck(L_22);
		uint32_t L_23 = CreateMatchRequest_get_size_m3980857567(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		String_t* L_24 = UInt32_ToString_m2574561716((uint32_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_21);
		WWWForm_AddField_m2357902982(L_21, _stringLiteral4049040645, L_24, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_25 = V_2;
		CreateMatchRequest_t2600446299 * L_26 = ___req0;
		NullCheck(L_26);
		bool L_27 = CreateMatchRequest_get_advertise_m865484440(L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		String_t* L_28 = Boolean_ToString_m2664721875((bool*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_25);
		WWWForm_AddField_m2357902982(L_25, _stringLiteral2172406980, L_28, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_29 = V_2;
		CreateMatchRequest_t2600446299 * L_30 = ___req0;
		NullCheck(L_30);
		String_t* L_31 = CreateMatchRequest_get_password_m3435449282(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		WWWForm_AddField_m2357902982(L_29, _stringLiteral4063764210, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		CreateMatchRequest_t2600446299 * L_33 = ___req0;
		NullCheck(L_33);
		String_t* L_34 = CreateMatchRequest_get_publicAddress_m3336041532(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		WWWForm_AddField_m2357902982(L_32, _stringLiteral2782796864, L_34, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_35 = V_2;
		CreateMatchRequest_t2600446299 * L_36 = ___req0;
		NullCheck(L_36);
		String_t* L_37 = CreateMatchRequest_get_privateAddress_m3613518697(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		WWWForm_AddField_m2357902982(L_35, _stringLiteral367361492, L_37, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_38 = V_2;
		CreateMatchRequest_t2600446299 * L_39 = ___req0;
		NullCheck(L_39);
		int32_t L_40 = CreateMatchRequest_get_eloScore_m1485273462(L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		String_t* L_41 = Int32_ToString_m141394615((int32_t*)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_38);
		WWWForm_AddField_m2357902982(L_38, _stringLiteral965208087, L_41, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_42 = V_2;
		NullCheck(L_42);
		Dictionary_2_t1632706988 * L_43 = WWWForm_get_headers_m1854290957(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Dictionary_2_set_Item_m187286838(L_43, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		WWWForm_t4064702195 * L_46 = V_2;
		UnityWebRequest_t463507806 * L_47 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		V_7 = L_47;
		UnityWebRequest_t463507806 * L_48 = V_7;
		intptr_t L_49 = (intptr_t)GetVirtualMethodInfo(__this, 4);
		InternalResponseDelegate_2_t992249662 * L_50 = (InternalResponseDelegate_2_t992249662 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t992249662_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m2438927016(L_50, __this, (intptr_t)L_49, /*hidden argument*/InternalResponseDelegate_2__ctor_m2438927016_RuntimeMethod_var);
		DataResponseDelegate_1_t186927816 * L_51 = ___callback1;
		RuntimeObject* L_52 = NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887(__this, L_48, L_50, L_51, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisCreateMatchResponse_t1328247360_TisDataResponseDelegate_1_t186927816_m1028095887_RuntimeMethod_var);
		Coroutine_t3829159415 * L_53 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		goto IL_0184;
	}

IL_0184:
	{
		Coroutine_t3829159415 * L_54 = V_0;
		return L_54;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnMatchCreate_m1430680992 (NetworkMatch_t2930480025 * __this, CreateMatchResponse_t1328247360 * ___response0, DataResponseDelegate_1_t186927816 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchCreate_m1430680992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CreateMatchResponse_t1328247360 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1 = ((Response_t2513603462 *)L_0)->get_success_0();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		CreateMatchResponse_t1328247360 * L_2 = ___response0;
		NullCheck(L_2);
		uint64_t L_3 = L_2->get_networkId_5();
		CreateMatchResponse_t1328247360 * L_4 = ___response0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_accessTokenString_6();
		NetworkAccessToken_t320639760 * L_6 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Utility_SetAccessTokenForNetwork_m483792653(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		DataResponseDelegate_1_t186927816 * L_7 = ___userCallback1;
		CreateMatchResponse_t1328247360 * L_8 = ___response0;
		NullCheck(L_8);
		bool L_9 = ((Response_t2513603462 *)L_8)->get_success_0();
		CreateMatchResponse_t1328247360 * L_10 = ___response0;
		NullCheck(L_10);
		String_t* L_11 = ((Response_t2513603462 *)L_10)->get_extendedInfo_1();
		CreateMatchResponse_t1328247360 * L_12 = ___response0;
		MatchInfo_t221301733 * L_13 = (MatchInfo_t221301733 *)il2cpp_codegen_object_new(MatchInfo_t221301733_il2cpp_TypeInfo_var);
		MatchInfo__ctor_m1026163455(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		DataResponseDelegate_1_Invoke_m437983603(L_7, L_9, L_11, L_13, /*hidden argument*/DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,System.String,System.String,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_JoinMatch_m2200257013 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, String_t* ___matchPassword1, String_t* ___publicClientAddress2, String_t* ___privateClientAddress3, int32_t ___eloScoreForClient4, int32_t ___requestDomain5, DataResponseDelegate_1_t186927816 * ___callback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_JoinMatch_m2200257013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JoinMatchRequest_t3991767598 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		JoinMatchRequest_t3991767598 * L_0 = (JoinMatchRequest_t3991767598 *)il2cpp_codegen_object_new(JoinMatchRequest_t3991767598_il2cpp_TypeInfo_var);
		JoinMatchRequest__ctor_m929255344(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		JoinMatchRequest_t3991767598 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		NullCheck(L_1);
		JoinMatchRequest_set_networkId_m1582426564(L_1, L_2, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_3 = V_0;
		String_t* L_4 = ___matchPassword1;
		NullCheck(L_3);
		JoinMatchRequest_set_password_m3230348675(L_3, L_4, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_5 = V_0;
		String_t* L_6 = ___publicClientAddress2;
		NullCheck(L_5);
		JoinMatchRequest_set_publicAddress_m3396720139(L_5, L_6, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_7 = V_0;
		String_t* L_8 = ___privateClientAddress3;
		NullCheck(L_7);
		JoinMatchRequest_set_privateAddress_m2598128522(L_7, L_8, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_9 = V_0;
		int32_t L_10 = ___eloScoreForClient4;
		NullCheck(L_9);
		JoinMatchRequest_set_eloScore_m3728163236(L_9, L_10, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_11 = V_0;
		int32_t L_12 = ___requestDomain5;
		NullCheck(L_11);
		Request_set_domain_m3630208190(L_11, L_12, /*hidden argument*/NULL);
		JoinMatchRequest_t3991767598 * L_13 = V_0;
		DataResponseDelegate_1_t186927816 * L_14 = ___callback6;
		Coroutine_t3829159415 * L_15 = NetworkMatch_JoinMatch_m3017753518(__this, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_0043;
	}

IL_0043:
	{
		Coroutine_t3829159415 * L_16 = V_1;
		return L_16;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_JoinMatch_m3017753518 (NetworkMatch_t2930480025 * __this, JoinMatchRequest_t3991767598 * ___req0, DataResponseDelegate_1_t186927816 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_JoinMatch_m3017753518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		DataResponseDelegate_1_t186927816 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1901731153, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0152;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral2193882181, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral780008887, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_6);
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		NullCheck(L_10);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		NullCheck(L_14);
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		JoinMatchRequest_t3991767598 * L_16 = ___req0;
		NullCheck(L_16);
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		JoinMatchRequest_t3991767598 * L_19 = ___req0;
		NullCheck(L_19);
		uint64_t L_20 = JoinMatchRequest_get_networkId_m2534671775(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		RuntimeObject * L_21 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		V_4 = *(uint64_t*)UnBox(L_21);
		NullCheck(L_18);
		WWWForm_AddField_m2357902982(L_18, _stringLiteral2471453923, L_22, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_23 = V_2;
		JoinMatchRequest_t3991767598 * L_24 = ___req0;
		NullCheck(L_24);
		String_t* L_25 = JoinMatchRequest_get_password_m2718232171(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		WWWForm_AddField_m2357902982(L_23, _stringLiteral4063764210, L_25, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_26 = V_2;
		JoinMatchRequest_t3991767598 * L_27 = ___req0;
		NullCheck(L_27);
		String_t* L_28 = JoinMatchRequest_get_publicAddress_m3644611049(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		WWWForm_AddField_m2357902982(L_26, _stringLiteral2782796864, L_28, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_29 = V_2;
		JoinMatchRequest_t3991767598 * L_30 = ___req0;
		NullCheck(L_30);
		String_t* L_31 = JoinMatchRequest_get_privateAddress_m664578272(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		WWWForm_AddField_m2357902982(L_29, _stringLiteral367361492, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		JoinMatchRequest_t3991767598 * L_33 = ___req0;
		NullCheck(L_33);
		int32_t L_34 = JoinMatchRequest_get_eloScore_m1107868278(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		String_t* L_35 = Int32_ToString_m141394615((int32_t*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_32);
		WWWForm_AddField_m2357902982(L_32, _stringLiteral965208087, L_35, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_36 = V_2;
		NullCheck(L_36);
		Dictionary_2_t1632706988 * L_37 = WWWForm_get_headers_m1854290957(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Dictionary_2_set_Item_m187286838(L_37, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_38 = V_1;
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		WWWForm_t4064702195 * L_40 = V_2;
		UnityWebRequest_t463507806 * L_41 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		UnityWebRequest_t463507806 * L_42 = V_6;
		intptr_t L_43 = (intptr_t)NetworkMatch_OnMatchJoined_m4206427941_RuntimeMethod_var;
		InternalResponseDelegate_2_t3313634249 * L_44 = (InternalResponseDelegate_2_t3313634249 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t3313634249_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m1006820792(L_44, __this, (intptr_t)L_43, /*hidden argument*/InternalResponseDelegate_2__ctor_m1006820792_RuntimeMethod_var);
		DataResponseDelegate_1_t186927816 * L_45 = ___callback1;
		RuntimeObject* L_46 = NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490(__this, L_42, L_44, L_45, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisJoinMatchResponse_t845270609_TisDataResponseDelegate_1_t186927816_m4139761490_RuntimeMethod_var);
		Coroutine_t3829159415 * L_47 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_0152;
	}

IL_0152:
	{
		Coroutine_t3829159415 * L_48 = V_0;
		return L_48;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<UnityEngine.Networking.Match.MatchInfo>)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnMatchJoined_m4206427941 (NetworkMatch_t2930480025 * __this, JoinMatchResponse_t845270609 * ___response0, DataResponseDelegate_1_t186927816 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchJoined_m4206427941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JoinMatchResponse_t845270609 * L_0 = ___response0;
		NullCheck(L_0);
		bool L_1 = ((Response_t2513603462 *)L_0)->get_success_0();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		JoinMatchResponse_t845270609 * L_2 = ___response0;
		NullCheck(L_2);
		uint64_t L_3 = L_2->get_networkId_5();
		JoinMatchResponse_t845270609 * L_4 = ___response0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_accessTokenString_6();
		NetworkAccessToken_t320639760 * L_6 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m1548906336(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Utility_SetAccessTokenForNetwork_m483792653(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		DataResponseDelegate_1_t186927816 * L_7 = ___userCallback1;
		JoinMatchResponse_t845270609 * L_8 = ___response0;
		NullCheck(L_8);
		bool L_9 = ((Response_t2513603462 *)L_8)->get_success_0();
		JoinMatchResponse_t845270609 * L_10 = ___response0;
		NullCheck(L_10);
		String_t* L_11 = ((Response_t2513603462 *)L_10)->get_extendedInfo_1();
		JoinMatchResponse_t845270609 * L_12 = ___response0;
		MatchInfo_t221301733 * L_13 = (MatchInfo_t221301733 *)il2cpp_codegen_object_new(MatchInfo_t221301733_il2cpp_TypeInfo_var);
		MatchInfo__ctor_m1464312026(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		DataResponseDelegate_1_Invoke_m437983603(L_7, L_9, L_11, L_13, /*hidden argument*/DataResponseDelegate_1_Invoke_m437983603_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Types.NetworkID,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m4220430763 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, int32_t ___requestDomain1, BasicResponseDelegate_t2196726690 * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DestroyMatch_m4220430763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DestroyMatchRequest_t2124150613 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		DestroyMatchRequest_t2124150613 * L_0 = (DestroyMatchRequest_t2124150613 *)il2cpp_codegen_object_new(DestroyMatchRequest_t2124150613_il2cpp_TypeInfo_var);
		DestroyMatchRequest__ctor_m327028137(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DestroyMatchRequest_t2124150613 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		NullCheck(L_1);
		DestroyMatchRequest_set_networkId_m2430913175(L_1, L_2, /*hidden argument*/NULL);
		DestroyMatchRequest_t2124150613 * L_3 = V_0;
		int32_t L_4 = ___requestDomain1;
		NullCheck(L_3);
		Request_set_domain_m3630208190(L_3, L_4, /*hidden argument*/NULL);
		DestroyMatchRequest_t2124150613 * L_5 = V_0;
		BasicResponseDelegate_t2196726690 * L_6 = ___callback2;
		Coroutine_t3829159415 * L_7 = NetworkMatch_DestroyMatch_m851204137(__this, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_0023:
	{
		Coroutine_t3829159415 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DestroyMatch(UnityEngine.Networking.Match.DestroyMatchRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DestroyMatch_m851204137 (NetworkMatch_t2930480025 * __this, DestroyMatchRequest_t2124150613 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DestroyMatch_m851204137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	UnityWebRequest_t463507806 * V_5 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3151169944, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0113;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1165821571, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1509869451, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_6 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		WWWForm_t4064702195 * L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_7);
		WWWForm_AddField_m711349004(L_7, _stringLiteral1902401671, L_8, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_9 = V_2;
		String_t* L_10 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		WWWForm_AddField_m2357902982(L_9, _stringLiteral2910973284, L_10, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_12 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_12;
		RuntimeObject * L_13 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		V_3 = *(uint64_t*)UnBox(L_13);
		NullCheck(L_11);
		WWWForm_AddField_m2357902982(L_11, _stringLiteral1656358094, L_14, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		DestroyMatchRequest_t2124150613 * L_16 = ___req0;
		NullCheck(L_16);
		uint64_t L_17 = DestroyMatchRequest_get_networkId_m1753108237(L_16, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_18 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = NetworkAccessToken_GetByteString_m3125030115(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m2357902982(L_15, _stringLiteral2337841988, L_19, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_20 = V_2;
		DestroyMatchRequest_t2124150613 * L_21 = ___req0;
		NullCheck(L_21);
		int32_t L_22 = Request_get_domain_m2533048369(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		WWWForm_AddField_m711349004(L_20, _stringLiteral3929789730, L_22, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_23 = V_2;
		DestroyMatchRequest_t2124150613 * L_24 = ___req0;
		NullCheck(L_24);
		uint64_t L_25 = DestroyMatchRequest_get_networkId_m1753108237(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		RuntimeObject * L_26 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_4 = *(uint64_t*)UnBox(L_26);
		NullCheck(L_23);
		WWWForm_AddField_m2357902982(L_23, _stringLiteral2471453923, L_27, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_28 = V_2;
		NullCheck(L_28);
		Dictionary_2_t1632706988 * L_29 = WWWForm_get_headers_m1854290957(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Dictionary_2_set_Item_m187286838(L_29, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_30 = V_1;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		WWWForm_t4064702195 * L_32 = V_2;
		UnityWebRequest_t463507806 * L_33 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		UnityWebRequest_t463507806 * L_34 = V_5;
		intptr_t L_35 = (intptr_t)NetworkMatch_OnMatchDestroyed_m221375483_RuntimeMethod_var;
		InternalResponseDelegate_2_t753237801 * L_36 = (InternalResponseDelegate_2_t753237801 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4083378426(L_36, __this, (intptr_t)L_35, /*hidden argument*/InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_37 = ___callback1;
		RuntimeObject* L_38 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136(__this, L_34, L_36, L_37, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var);
		Coroutine_t3829159415 * L_39 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_0113;
	}

IL_0113:
	{
		Coroutine_t3829159415 * L_40 = V_0;
		return L_40;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchDestroyed(UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnMatchDestroyed_m221375483 (NetworkMatch_t2930480025 * __this, BasicResponse_t1476713923 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		BasicResponse_t1476713923 * L_1 = ___response0;
		NullCheck(L_1);
		bool L_2 = ((Response_t2513603462 *)L_1)->get_success_0();
		BasicResponse_t1476713923 * L_3 = ___response0;
		NullCheck(L_3);
		String_t* L_4 = ((Response_t2513603462 *)L_3)->get_extendedInfo_1();
		NullCheck(L_0);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NodeID,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DropConnection_m496130429 (NetworkMatch_t2930480025 * __this, uint64_t ___netId0, uint16_t ___dropNodeId1, int32_t ___requestDomain2, BasicResponseDelegate_t2196726690 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DropConnection_m496130429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DropConnectionRequest_t2647317937 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		DropConnectionRequest_t2647317937 * L_0 = (DropConnectionRequest_t2647317937 *)il2cpp_codegen_object_new(DropConnectionRequest_t2647317937_il2cpp_TypeInfo_var);
		DropConnectionRequest__ctor_m2312219607(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DropConnectionRequest_t2647317937 * L_1 = V_0;
		uint64_t L_2 = ___netId0;
		NullCheck(L_1);
		DropConnectionRequest_set_networkId_m399344964(L_1, L_2, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_3 = V_0;
		uint16_t L_4 = ___dropNodeId1;
		NullCheck(L_3);
		DropConnectionRequest_set_nodeId_m2959951618(L_3, L_4, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_5 = V_0;
		int32_t L_6 = ___requestDomain2;
		NullCheck(L_5);
		Request_set_domain_m3630208190(L_5, L_6, /*hidden argument*/NULL);
		DropConnectionRequest_t2647317937 * L_7 = V_0;
		BasicResponseDelegate_t2196726690 * L_8 = ___callback3;
		Coroutine_t3829159415 * L_9 = NetworkMatch_DropConnection_m3349273159(__this, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		Coroutine_t3829159415 * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::DropConnection(UnityEngine.Networking.Match.DropConnectionRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_DropConnection_m3349273159 (NetworkMatch_t2930480025 * __this, DropConnectionRequest_t2647317937 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_DropConnection_m3349273159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint16_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral875319902, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_012e;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1437324351, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2227996048, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_6);
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		NullCheck(L_10);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		DropConnectionRequest_t2647317937 * L_15 = ___req0;
		NullCheck(L_15);
		uint64_t L_16 = DropConnectionRequest_get_networkId_m2906146404(L_15, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_17 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = NetworkAccessToken_GetByteString_m3125030115(L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		WWWForm_AddField_m2357902982(L_14, _stringLiteral2337841988, L_18, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_19 = V_2;
		DropConnectionRequest_t2647317937 * L_20 = ___req0;
		NullCheck(L_20);
		int32_t L_21 = Request_get_domain_m2533048369(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		WWWForm_AddField_m711349004(L_19, _stringLiteral3929789730, L_21, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_22 = V_2;
		DropConnectionRequest_t2647317937 * L_23 = ___req0;
		NullCheck(L_23);
		uint64_t L_24 = DropConnectionRequest_get_networkId_m2906146404(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		RuntimeObject * L_25 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_4 = *(uint64_t*)UnBox(L_25);
		NullCheck(L_22);
		WWWForm_AddField_m2357902982(L_22, _stringLiteral2471453923, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		DropConnectionRequest_t2647317937 * L_28 = ___req0;
		NullCheck(L_28);
		uint16_t L_29 = DropConnectionRequest_get_nodeId_m2375409994(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		RuntimeObject * L_30 = Box(NodeID_t2347816311_il2cpp_TypeInfo_var, (&V_5));
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		V_5 = *(uint16_t*)UnBox(L_30);
		NullCheck(L_27);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral793118085, L_31, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_32 = V_2;
		NullCheck(L_32);
		Dictionary_2_t1632706988 * L_33 = WWWForm_get_headers_m1854290957(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Dictionary_2_set_Item_m187286838(L_33, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_34 = V_1;
		NullCheck(L_34);
		String_t* L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		WWWForm_t4064702195 * L_36 = V_2;
		UnityWebRequest_t463507806 * L_37 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		UnityWebRequest_t463507806 * L_38 = V_6;
		intptr_t L_39 = (intptr_t)NetworkMatch_OnDropConnection_m1639108205_RuntimeMethod_var;
		InternalResponseDelegate_2_t304736019 * L_40 = (InternalResponseDelegate_2_t304736019 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t304736019_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m3308930013(L_40, __this, (intptr_t)L_39, /*hidden argument*/InternalResponseDelegate_2__ctor_m3308930013_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_41 = ___callback1;
		RuntimeObject* L_42 = NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150(__this, L_38, L_40, L_41, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisDropConnectionResponse_t3571632289_TisBasicResponseDelegate_t2196726690_m986112150_RuntimeMethod_var);
		Coroutine_t3829159415 * L_43 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_012e;
	}

IL_012e:
	{
		Coroutine_t3829159415 * L_44 = V_0;
		return L_44;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnDropConnection(UnityEngine.Networking.Match.DropConnectionResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnDropConnection_m1639108205 (NetworkMatch_t2930480025 * __this, DropConnectionResponse_t3571632289 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		DropConnectionResponse_t3571632289 * L_1 = ___response0;
		NullCheck(L_1);
		bool L_2 = ((Response_t2513603462 *)L_1)->get_success_0();
		DropConnectionResponse_t3571632289 * L_3 = ___response0;
		NullCheck(L_3);
		String_t* L_4 = ((Response_t2513603462 *)L_3)->get_extendedInfo_1();
		NullCheck(L_0);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,System.Boolean,System.Int32,System.Int32,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_ListMatches_m628187040 (NetworkMatch_t2930480025 * __this, int32_t ___startPageNumber0, int32_t ___resultPageSize1, String_t* ___matchNameFilter2, bool ___filterOutPrivateMatchesFromResults3, int32_t ___eloScoreTarget4, int32_t ___requestDomain5, DataResponseDelegate_1_t309155718 * ___callback6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_ListMatches_m628187040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	ListMatchRequest_t1588429355 * V_1 = NULL;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral984512269, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0061;
	}

IL_001f:
	{
		ListMatchRequest_t1588429355 * L_1 = (ListMatchRequest_t1588429355 *)il2cpp_codegen_object_new(ListMatchRequest_t1588429355_il2cpp_TypeInfo_var);
		ListMatchRequest__ctor_m189544352(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		ListMatchRequest_t1588429355 * L_2 = V_1;
		int32_t L_3 = ___startPageNumber0;
		NullCheck(L_2);
		ListMatchRequest_set_pageNum_m714424921(L_2, L_3, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_4 = V_1;
		int32_t L_5 = ___resultPageSize1;
		NullCheck(L_4);
		ListMatchRequest_set_pageSize_m2542353962(L_4, L_5, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_6 = V_1;
		String_t* L_7 = ___matchNameFilter2;
		NullCheck(L_6);
		ListMatchRequest_set_nameFilter_m3455577482(L_6, L_7, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_8 = V_1;
		bool L_9 = ___filterOutPrivateMatchesFromResults3;
		NullCheck(L_8);
		ListMatchRequest_set_filterOutPrivateMatches_m242262970(L_8, L_9, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_10 = V_1;
		int32_t L_11 = ___eloScoreTarget4;
		NullCheck(L_10);
		ListMatchRequest_set_eloScore_m2096908822(L_10, L_11, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_12 = V_1;
		int32_t L_13 = ___requestDomain5;
		NullCheck(L_12);
		Request_set_domain_m3630208190(L_12, L_13, /*hidden argument*/NULL);
		ListMatchRequest_t1588429355 * L_14 = V_1;
		DataResponseDelegate_1_t309155718 * L_15 = ___callback6;
		Coroutine_t3829159415 * L_16 = NetworkMatch_ListMatches_m3965275728(__this, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0061;
	}

IL_0061:
	{
		Coroutine_t3829159415 * L_17 = V_0;
		return L_17;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_ListMatches_m3965275728 (NetworkMatch_t2930480025 * __this, ListMatchRequest_t1588429355 * ___req0, DataResponseDelegate_1_t309155718 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_ListMatches_m3965275728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		DataResponseDelegate_1_t309155718 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4024629234, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_0152;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral2386490997, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2864547800, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_6);
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		NullCheck(L_10);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		NullCheck(L_14);
		WWWForm_AddField_m711349004(L_14, _stringLiteral2337841988, 0, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_15 = V_2;
		ListMatchRequest_t1588429355 * L_16 = ___req0;
		NullCheck(L_16);
		int32_t L_17 = Request_get_domain_m2533048369(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		WWWForm_AddField_m711349004(L_15, _stringLiteral3929789730, L_17, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_18 = V_2;
		ListMatchRequest_t1588429355 * L_19 = ___req0;
		NullCheck(L_19);
		int32_t L_20 = ListMatchRequest_get_pageSize_m3055718048(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		WWWForm_AddField_m711349004(L_18, _stringLiteral1875478138, L_20, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_21 = V_2;
		ListMatchRequest_t1588429355 * L_22 = ___req0;
		NullCheck(L_22);
		int32_t L_23 = ListMatchRequest_get_pageNum_m3084306515(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		WWWForm_AddField_m711349004(L_21, _stringLiteral4292784458, L_23, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_24 = V_2;
		ListMatchRequest_t1588429355 * L_25 = ___req0;
		NullCheck(L_25);
		String_t* L_26 = ListMatchRequest_get_nameFilter_m1921865349(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		WWWForm_AddField_m2357902982(L_24, _stringLiteral3552369471, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		ListMatchRequest_t1588429355 * L_28 = ___req0;
		NullCheck(L_28);
		bool L_29 = ListMatchRequest_get_filterOutPrivateMatches_m702074324(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		String_t* L_30 = Boolean_ToString_m2664721875((bool*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_27);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral332042649, L_30, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_31 = V_2;
		ListMatchRequest_t1588429355 * L_32 = ___req0;
		NullCheck(L_32);
		int32_t L_33 = ListMatchRequest_get_eloScore_m2377257860(L_32, /*hidden argument*/NULL);
		V_5 = L_33;
		String_t* L_34 = Int32_ToString_m141394615((int32_t*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_31);
		WWWForm_AddField_m2357902982(L_31, _stringLiteral965208087, L_34, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_35 = V_2;
		NullCheck(L_35);
		Dictionary_2_t1632706988 * L_36 = WWWForm_get_headers_m1854290957(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Dictionary_2_set_Item_m187286838(L_36, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		WWWForm_t4064702195 * L_39 = V_2;
		UnityWebRequest_t463507806 * L_40 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		V_6 = L_40;
		UnityWebRequest_t463507806 * L_41 = V_6;
		intptr_t L_42 = (intptr_t)NetworkMatch_OnMatchList_m2129293200_RuntimeMethod_var;
		InternalResponseDelegate_2_t873951790 * L_43 = (InternalResponseDelegate_2_t873951790 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t873951790_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4032249314(L_43, __this, (intptr_t)L_42, /*hidden argument*/InternalResponseDelegate_2__ctor_m4032249314_RuntimeMethod_var);
		DataResponseDelegate_1_t309155718 * L_44 = ___callback1;
		RuntimeObject* L_45 = NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787(__this, L_41, L_43, L_44, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisListMatchResponse_t3200990838_TisDataResponseDelegate_1_t309155718_m2895002787_RuntimeMethod_var);
		Coroutine_t3829159415 * L_46 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_45, /*hidden argument*/NULL);
		V_0 = L_46;
		goto IL_0152;
	}

IL_0152:
	{
		Coroutine_t3829159415 * L_47 = V_0;
		return L_47;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse,UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchInfoSnapshot>>)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnMatchList_m2129293200 (NetworkMatch_t2930480025 * __this, ListMatchResponse_t3200990838 * ___response0, DataResponseDelegate_1_t309155718 * ___userCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_OnMatchList_m2129293200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t343529635 * V_0 = NULL;
	MatchDesc_t3827228697 * V_1 = NULL;
	Enumerator_t2893580020  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t343529635 * L_0 = (List_1_t343529635 *)il2cpp_codegen_object_new(List_1_t343529635_il2cpp_TypeInfo_var);
		List_1__ctor_m2649410098(L_0, /*hidden argument*/List_1__ctor_m2649410098_RuntimeMethod_var);
		V_0 = L_0;
		ListMatchResponse_t3200990838 * L_1 = ___response0;
		NullCheck(L_1);
		List_1_t1004336143 * L_2 = L_1->get_matches_2();
		NullCheck(L_2);
		Enumerator_t2893580020  L_3 = List_1_GetEnumerator_m3706392678(L_2, /*hidden argument*/List_1_GetEnumerator_m3706392678_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0019:
		{
			MatchDesc_t3827228697 * L_4 = Enumerator_get_Current_m1671013569((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m1671013569_RuntimeMethod_var);
			V_1 = L_4;
			List_1_t343529635 * L_5 = V_0;
			MatchDesc_t3827228697 * L_6 = V_1;
			MatchInfoSnapshot_t3166422189 * L_7 = (MatchInfoSnapshot_t3166422189 *)il2cpp_codegen_object_new(MatchInfoSnapshot_t3166422189_il2cpp_TypeInfo_var);
			MatchInfoSnapshot__ctor_m3116124190(L_7, L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			List_1_Add_m2366351136(L_5, L_7, /*hidden argument*/List_1_Add_m2366351136_RuntimeMethod_var);
		}

IL_002f:
		{
			bool L_8 = Enumerator_MoveNext_m332103838((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m332103838_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0019;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2278141307((Enumerator_t2893580020 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m2278141307_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004e:
	{
		DataResponseDelegate_1_t309155718 * L_9 = ___userCallback1;
		ListMatchResponse_t3200990838 * L_10 = ___response0;
		NullCheck(L_10);
		bool L_11 = ((Response_t2513603462 *)L_10)->get_success_0();
		ListMatchResponse_t3200990838 * L_12 = ___response0;
		NullCheck(L_12);
		String_t* L_13 = ((Response_t2513603462 *)L_12)->get_extendedInfo_1();
		List_1_t343529635 * L_14 = V_0;
		NullCheck(L_9);
		DataResponseDelegate_1_Invoke_m2625328205(L_9, L_11, L_13, L_14, /*hidden argument*/DataResponseDelegate_1_Invoke_m2625328205_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Types.NetworkID,System.Boolean,System.Int32,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m2296300825 (NetworkMatch_t2930480025 * __this, uint64_t ___networkId0, bool ___isListed1, int32_t ___requestDomain2, BasicResponseDelegate_t2196726690 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_SetMatchAttributes_m2296300825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SetMatchAttributesRequest_t2732203151 * V_0 = NULL;
	Coroutine_t3829159415 * V_1 = NULL;
	{
		SetMatchAttributesRequest_t2732203151 * L_0 = (SetMatchAttributesRequest_t2732203151 *)il2cpp_codegen_object_new(SetMatchAttributesRequest_t2732203151_il2cpp_TypeInfo_var);
		SetMatchAttributesRequest__ctor_m1899046165(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		SetMatchAttributesRequest_t2732203151 * L_1 = V_0;
		uint64_t L_2 = ___networkId0;
		NullCheck(L_1);
		SetMatchAttributesRequest_set_networkId_m557696958(L_1, L_2, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_3 = V_0;
		bool L_4 = ___isListed1;
		NullCheck(L_3);
		SetMatchAttributesRequest_set_isListed_m2994314324(L_3, L_4, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_5 = V_0;
		int32_t L_6 = ___requestDomain2;
		NullCheck(L_5);
		Request_set_domain_m3630208190(L_5, L_6, /*hidden argument*/NULL);
		SetMatchAttributesRequest_t2732203151 * L_7 = V_0;
		BasicResponseDelegate_t2196726690 * L_8 = ___callback3;
		Coroutine_t3829159415 * L_9 = NetworkMatch_SetMatchAttributes_m3627579880(__this, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_002b;
	}

IL_002b:
	{
		Coroutine_t3829159415 * L_10 = V_1;
		return L_10;
	}
}
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::SetMatchAttributes(UnityEngine.Networking.Match.SetMatchAttributesRequest,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * NetworkMatch_SetMatchAttributes_m3627579880 (NetworkMatch_t2930480025 * __this, SetMatchAttributesRequest_t2732203151 * ___req0, BasicResponseDelegate_t2196726690 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkMatch_SetMatchAttributes_m3627579880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Coroutine_t3829159415 * V_0 = NULL;
	Uri_t100236324 * V_1 = NULL;
	WWWForm_t4064702195 * V_2 = NULL;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	bool V_5 = false;
	UnityWebRequest_t463507806 * V_6 = NULL;
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___callback1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral975573261, /*hidden argument*/NULL);
		V_0 = (Coroutine_t3829159415 *)NULL;
		goto IL_012e;
	}

IL_0019:
	{
		Uri_t100236324 * L_1 = NetworkMatch_get_baseUri_m3103825236(__this, /*hidden argument*/NULL);
		Uri_t100236324 * L_2 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m4293005803(L_2, L_1, _stringLiteral1068878819, /*hidden argument*/NULL);
		V_1 = L_2;
		Uri_t100236324 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral597048638, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_5 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
		WWWForm__ctor_m2465700452(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		WWWForm_t4064702195 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		int32_t L_7 = ((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->get_currentVersion_0();
		NullCheck(L_6);
		WWWForm_AddField_m711349004(L_6, _stringLiteral1902401671, L_7, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_8 = V_2;
		String_t* L_9 = Application_get_cloudProjectId_m3678427659(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		WWWForm_AddField_m2357902982(L_8, _stringLiteral2910973284, L_9, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		uint64_t L_11 = Utility_GetSourceID_m602367204(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject * L_12 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_3 = *(uint64_t*)UnBox(L_12);
		NullCheck(L_10);
		WWWForm_AddField_m2357902982(L_10, _stringLiteral1656358094, L_13, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_14 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_15 = ___req0;
		NullCheck(L_15);
		uint64_t L_16 = SetMatchAttributesRequest_get_networkId_m2380549462(L_15, /*hidden argument*/NULL);
		NetworkAccessToken_t320639760 * L_17 = Utility_GetAccessTokenForNetwork_m3460910439(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = NetworkAccessToken_GetByteString_m3125030115(L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		WWWForm_AddField_m2357902982(L_14, _stringLiteral2337841988, L_18, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_19 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_20 = ___req0;
		NullCheck(L_20);
		int32_t L_21 = Request_get_domain_m2533048369(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		WWWForm_AddField_m711349004(L_19, _stringLiteral3929789730, L_21, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_22 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_23 = ___req0;
		NullCheck(L_23);
		uint64_t L_24 = SetMatchAttributesRequest_get_networkId_m2380549462(L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		RuntimeObject * L_25 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		V_4 = *(uint64_t*)UnBox(L_25);
		NullCheck(L_22);
		WWWForm_AddField_m2357902982(L_22, _stringLiteral2471453923, L_26, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_27 = V_2;
		SetMatchAttributesRequest_t2732203151 * L_28 = ___req0;
		NullCheck(L_28);
		bool L_29 = SetMatchAttributesRequest_get_isListed_m3414389613(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		String_t* L_30 = Boolean_ToString_m2664721875((bool*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_27);
		WWWForm_AddField_m2357902982(L_27, _stringLiteral961964331, L_30, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_31 = V_2;
		NullCheck(L_31);
		Dictionary_2_t1632706988 * L_32 = WWWForm_get_headers_m1854290957(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Dictionary_2_set_Item_m187286838(L_32, _stringLiteral2350028096, _stringLiteral1946891126, /*hidden argument*/Dictionary_2_set_Item_m187286838_RuntimeMethod_var);
		Uri_t100236324 * L_33 = V_1;
		NullCheck(L_33);
		String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		WWWForm_t4064702195 * L_35 = V_2;
		UnityWebRequest_t463507806 * L_36 = UnityWebRequest_Post_m4193475377(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		UnityWebRequest_t463507806 * L_37 = V_6;
		intptr_t L_38 = (intptr_t)NetworkMatch_OnSetMatchAttributes_m3218031621_RuntimeMethod_var;
		InternalResponseDelegate_2_t753237801 * L_39 = (InternalResponseDelegate_2_t753237801 *)il2cpp_codegen_object_new(InternalResponseDelegate_2_t753237801_il2cpp_TypeInfo_var);
		InternalResponseDelegate_2__ctor_m4083378426(L_39, __this, (intptr_t)L_38, /*hidden argument*/InternalResponseDelegate_2__ctor_m4083378426_RuntimeMethod_var);
		BasicResponseDelegate_t2196726690 * L_40 = ___callback1;
		RuntimeObject* L_41 = NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136(__this, L_37, L_39, L_40, /*hidden argument*/NetworkMatch_ProcessMatchResponse_TisBasicResponse_t1476713923_TisBasicResponseDelegate_t2196726690_m4171655136_RuntimeMethod_var);
		Coroutine_t3829159415 * L_42 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_41, /*hidden argument*/NULL);
		V_0 = L_42;
		goto IL_012e;
	}

IL_012e:
	{
		Coroutine_t3829159415 * L_43 = V_0;
		return L_43;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch::OnSetMatchAttributes(UnityEngine.Networking.Match.BasicResponse,UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate)
extern "C" IL2CPP_METHOD_ATTR void NetworkMatch_OnSetMatchAttributes_m3218031621 (NetworkMatch_t2930480025 * __this, BasicResponse_t1476713923 * ___response0, BasicResponseDelegate_t2196726690 * ___userCallback1, const RuntimeMethod* method)
{
	{
		BasicResponseDelegate_t2196726690 * L_0 = ___userCallback1;
		BasicResponse_t1476713923 * L_1 = ___response0;
		NullCheck(L_1);
		bool L_2 = ((Response_t2513603462 *)L_1)->get_success_0();
		BasicResponse_t1476713923 * L_3 = ___response0;
		NullCheck(L_3);
		String_t* L_4 = ((Response_t2513603462 *)L_3)->get_extendedInfo_1();
		NullCheck(L_0);
		BasicResponseDelegate_Invoke_m1399904936(L_0, L_2, L_4, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_BasicResponseDelegate_t2196726690 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___extendedInfo1' to native representation
	char* ____extendedInfo1_marshaled = NULL;
	____extendedInfo1_marshaled = il2cpp_codegen_marshal_string(___extendedInfo1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____extendedInfo1_marshaled);

	// Marshaling cleanup of parameter '___extendedInfo1' native representation
	il2cpp_codegen_marshal_free(____extendedInfo1_marshaled);
	____extendedInfo1_marshaled = NULL;

}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void BasicResponseDelegate__ctor_m3474841667 (BasicResponseDelegate_t2196726690 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::Invoke(System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void BasicResponseDelegate_Invoke_m1399904936 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		BasicResponseDelegate_Invoke_m1399904936((BasicResponseDelegate_t2196726690 *)__this->get_prev_9(), ___success0, ___extendedInfo1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___success0, ___extendedInfo1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___success0, ___extendedInfo1, targetMethod);
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
						GenericInterfaceActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1);
					else
						GenericVirtActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___extendedInfo1);
					else
						VirtActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___extendedInfo1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BasicResponseDelegate_BeginInvoke_m1586966129 (BasicResponseDelegate_t2196726690 * __this, bool ___success0, String_t* ___extendedInfo1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BasicResponseDelegate_BeginInvoke_m1586966129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___extendedInfo1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch/BasicResponseDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void BasicResponseDelegate_EndInvoke_m3291947204 (BasicResponseDelegate_t2196726690 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Networking.Match.Request::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Request__ctor_m873075042 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Match.Request::get_sourceId()
extern "C" IL2CPP_METHOD_ATTR uint64_t Request_get_sourceId_m208323637 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CsourceIdU3Ek__BackingField_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.Request::get_projectId()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_get_projectId_m2576041751 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CprojectIdU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.Match.Request::get_accessTokenString()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_get_accessTokenString_m4019206711 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CaccessTokenStringU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.Match.Request::get_domain()
extern "C" IL2CPP_METHOD_ATTR int32_t Request_get_domain_m2533048369 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CdomainU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.Request::set_domain(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Request_set_domain_m3630208190 (Request_t2696089890 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CdomainU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.Request::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Request_ToString_m2900465251 (Request_t2696089890 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request_ToString_m2900465251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t L_4 = Request_get_sourceId_m208323637(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(SourceID_t1070216020_il2cpp_TypeInfo_var, (&V_0));
		NullCheck((Enum_t4135868527 *)L_5);
		String_t* L_6 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_5, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		String_t* L_8 = Request_get_projectId_m2576041751(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = Request_get_accessTokenString_m4019206711(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		bool L_12 = L_11;
		RuntimeObject * L_13 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_9;
		int32_t L_15 = Request_get_domain_m2533048369(__this, /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_17);
		String_t* L_18 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral1686739920, L_14, /*hidden argument*/NULL);
		V_1 = L_18;
		goto IL_0066;
	}

IL_0066:
	{
		String_t* L_19 = V_1;
		return L_19;
	}
}
// System.Void UnityEngine.Networking.Match.Request::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Request__cctor_m3097775336 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Request__cctor_m3097775336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Request_t2696089890_StaticFields*)il2cpp_codegen_static_fields_for(Request_t2696089890_il2cpp_TypeInfo_var))->set_currentVersion_0(3);
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
// System.Void UnityEngine.Networking.Match.Response::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Response__ctor_m1005354347 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.Response::SetFailure(System.String)
extern "C" IL2CPP_METHOD_ATTR void Response_SetFailure_m37322024 (Response_t2513603462 * __this, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Response_SetFailure_m37322024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_success_0((bool)0);
		String_t* L_0 = __this->get_extendedInfo_1();
		String_t* L_1 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->set_extendedInfo_1(L_2);
		return;
	}
}
// System.String UnityEngine.Networking.Match.Response::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Response_ToString_m2727218217 (Response_t2513603462 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Response_ToString_m2727218217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		bool L_4 = __this->get_success_0();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		String_t* L_8 = __this->get_extendedInfo_1();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2968508303, L_7, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0037;
	}

IL_0037:
	{
		String_t* L_10 = V_0;
		return L_10;
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
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest__ctor_m1899046165 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetMatchAttributesRequest__ctor_m1899046165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Request_t2696089890_il2cpp_TypeInfo_var);
		Request__ctor_m873075042(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.SetMatchAttributesRequest::get_networkId()
extern "C" IL2CPP_METHOD_ATTR uint64_t SetMatchAttributesRequest_get_networkId_m2380549462 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_U3CnetworkIdU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest_set_networkId_m557696958 (SetMatchAttributesRequest_t2732203151 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_U3CnetworkIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.SetMatchAttributesRequest::get_isListed()
extern "C" IL2CPP_METHOD_ATTR bool SetMatchAttributesRequest_get_isListed_m3414389613 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CisListedU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.Match.SetMatchAttributesRequest::set_isListed(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SetMatchAttributesRequest_set_isListed_m2994314324 (SetMatchAttributesRequest_t2732203151 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CisListedU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.Networking.Match.SetMatchAttributesRequest::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* SetMatchAttributesRequest_ToString_m3394706279 (SetMatchAttributesRequest_t2732203151 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetMatchAttributesRequest_ToString_m3394706279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Request_ToString_m2900465251(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		uint64_t L_4 = SetMatchAttributesRequest_get_networkId_m2380549462(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(NetworkID_t4216585621_il2cpp_TypeInfo_var, (&V_0));
		NullCheck((Enum_t4135868527 *)L_5);
		String_t* L_6 = Enum_ToString_m2477889358((Enum_t4135868527 *)L_5, _stringLiteral3452614648, /*hidden argument*/NULL);
		V_0 = *(uint64_t*)UnBox(L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_3;
		bool L_8 = SetMatchAttributesRequest_get_isListed_m3414389613(__this, /*hidden argument*/NULL);
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		String_t* L_11 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2373792937, L_7, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_004a;
	}

IL_004a:
	{
		String_t* L_12 = V_1;
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
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_Init_m3007042076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		NetworkTransport_InitWithNoParameters_m1152096323(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithNoParameters_m1152096323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_InitWithNoParameters_m1152096323_ftn) ();
	static NetworkTransport_InitWithNoParameters_m1152096323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitWithNoParameters_m1152096323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitWithNoParameters()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::InitWithParameters(UnityEngine.Networking.GlobalConfigInternal)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithParameters_m1136955565 (RuntimeObject * __this /* static, unused */, GlobalConfigInternal_t1872710257 * ___config0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_InitWithParameters_m1136955565_ftn) (GlobalConfigInternal_t1872710257 *);
	static NetworkTransport_InitWithParameters_m1136955565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitWithParameters_m1136955565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitWithParameters(UnityEngine.Networking.GlobalConfigInternal)");
	_il2cpp_icall_func(___config0);
}
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_ConnectAsNetworkHost_m2353972988 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, uint64_t ___network3, uint64_t ___source4, uint16_t ___node5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_ConnectAsNetworkHost_m2353972988_ftn) (int32_t, String_t*, int32_t, uint64_t, uint64_t, uint16_t, uint8_t*);
	static NetworkTransport_ConnectAsNetworkHost_m2353972988_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_ConnectAsNetworkHost_m2353972988_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)");
	_il2cpp_icall_func(___hostId0, ___address1, ___port2, ___network3, ___source4, ___node5, ___error6);
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ReceiveRelayEventFromHost_m2308363197 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, uint8_t* ___error1, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_ReceiveRelayEventFromHost_m2308363197_ftn) (int32_t, uint8_t*);
	static NetworkTransport_ReceiveRelayEventFromHost_m2308363197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_ReceiveRelayEventFromHost_m2308363197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___error1);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Int32,System.Single,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ConnectToNetworkPeer_m888142873 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, int32_t ___bytesPerSec8, float ___bucketSizeFactor9, uint8_t* ___error10, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_ConnectToNetworkPeer_m888142873_ftn) (int32_t, String_t*, int32_t, int32_t, int32_t, uint64_t, uint64_t, uint16_t, int32_t, float, uint8_t*);
	static NetworkTransport_ConnectToNetworkPeer_m888142873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_ConnectToNetworkPeer_m888142873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Int32,System.Single,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exceptionConnectionId3, ___relaySlotId4, ___network5, ___source6, ___node7, ___bytesPerSec8, ___bucketSizeFactor9, ___error10);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ConnectToNetworkPeer_m461204670 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exceptionConnectionId3, int32_t ___relaySlotId4, uint64_t ___network5, uint64_t ___source6, uint16_t ___node7, uint8_t* ___error8, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___hostId0;
		String_t* L_1 = ___address1;
		int32_t L_2 = ___port2;
		int32_t L_3 = ___exceptionConnectionId3;
		int32_t L_4 = ___relaySlotId4;
		uint64_t L_5 = ___network5;
		uint64_t L_6 = ___source6;
		uint16_t L_7 = ___node7;
		uint8_t* L_8 = ___error8;
		int32_t L_9 = NetworkTransport_ConnectToNetworkPeer_m888142873(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, 0, (0.0f), (uint8_t*)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_GetConnectionInfo_m2259616706 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, String_t** ___address2, int32_t* ___port3, uint64_t* ___network4, uint16_t* ___dstNode5, uint8_t* ___error6, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		String_t** L_0 = ___address2;
		int32_t L_1 = ___hostId0;
		int32_t L_2 = ___connectionId1;
		int32_t* L_3 = ___port3;
		uint8_t* L_4 = ___error6;
		String_t* L_5 = NetworkTransport_GetConnectionInfo_m1779074114(NULL /*static, unused*/, L_1, L_2, (int32_t*)L_3, (uint64_t*)(&V_0), (uint16_t*)(&V_1), (uint8_t*)L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_0, (RuntimeObject *)L_5);
		uint64_t* L_6 = ___network4;
		uint64_t L_7 = V_0;
		*((int64_t*)L_6) = (int64_t)L_7;
		uint16_t* L_8 = ___dstNode5;
		uint16_t L_9 = V_1;
		*((int16_t*)L_8) = (int16_t)L_9;
		return;
	}
}
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetConnectionInfo_m1779074114 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t* ___port2, uint64_t* ___network3, uint16_t* ___dstNode4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef String_t* (*NetworkTransport_GetConnectionInfo_m1779074114_ftn) (int32_t, int32_t, int32_t*, uint64_t*, uint16_t*, uint8_t*);
	static NetworkTransport_GetConnectionInfo_m1779074114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetConnectionInfo_m1779074114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)");
	String_t* retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___port2, ___network3, ___dstNode4, ___error5);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m4140356182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_GetMaxPacketSize_m4140356182_ftn) ();
	static NetworkTransport_GetMaxPacketSize_m4140356182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetMaxPacketSize_m4140356182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_m750760940 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_CheckTopology_m750760940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = NetworkTransport_GetMaxPacketSize_m4140356182(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		HostTopology_t4059263395 * L_1 = ___topology0;
		NullCheck(L_1);
		ConnectionConfig_t4173981269 * L_2 = HostTopology_get_DefaultConfig_m230960067(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_m195714670(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1563464412, L_5, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var);
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_003c:
	{
		HostTopology_t4059263395 * L_8 = ___topology0;
		NullCheck(L_8);
		List_1_t1351088715 * L_9 = HostTopology_get_SpecialConnectionConfigs_m2228393737(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		ConnectionConfig_t4173981269 * L_11 = List_1_get_Item_m1179646797(L_9, L_10, /*hidden argument*/List_1_get_Item_m1179646797_RuntimeMethod_var);
		NullCheck(L_11);
		uint16_t L_12 = ConnectionConfig_get_PacketSize_m195714670(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_14 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_15 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3675259609, L_14, _stringLiteral414500564, L_15, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_17 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var);
	}

IL_0084:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_19 = V_1;
		HostTopology_t4059263395 * L_20 = ___topology0;
		NullCheck(L_20);
		List_1_t1351088715 * L_21 = HostTopology_get_SpecialConnectionConfigs_m2228393737(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m1480908111(L_21, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostWrapper_m394737320 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddWsHostWrapper_m394737320_ftn) (HostTopologyInternal_t761087795 *, String_t*, int32_t);
	static NetworkTransport_AddWsHostWrapper_m394737320_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddWsHostWrapper_m394737320_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddWsHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWsHostWrapperWithoutIp_m565861628 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddWsHostWrapperWithoutIp_m565861628_ftn) (HostTopologyInternal_t761087795 *, int32_t);
	static NetworkTransport_AddWsHostWrapperWithoutIp_m565861628_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddWsHostWrapperWithoutIp_m565861628_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddWsHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___port1);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::IsPortOpen(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_IsPortOpen_m2487963042 (RuntimeObject * __this /* static, unused */, String_t* ___ip0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_IsPortOpen_m2487963042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	String_t* V_1 = NULL;
	TcpClient_t822906377 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B3_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_0 = TimeSpan_FromMilliseconds_m579366253(NULL /*static, unused*/, (500.0), /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ___ip0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		G_B3_0 = _stringLiteral1201550598;
		goto IL_0021;
	}

IL_0020:
	{
		String_t* L_2 = ___ip0;
		G_B3_0 = L_2;
	}

IL_0021:
	{
		V_1 = G_B3_0;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			TcpClient_t822906377 * L_3 = (TcpClient_t822906377 *)il2cpp_codegen_object_new(TcpClient_t822906377_il2cpp_TypeInfo_var);
			TcpClient__ctor_m1992471411(L_3, /*hidden argument*/NULL);
			V_2 = L_3;
		}

IL_0029:
		try
		{ // begin try (depth: 2)
			{
				TcpClient_t822906377 * L_4 = V_2;
				String_t* L_5 = V_1;
				int32_t L_6 = ___port1;
				NullCheck(L_4);
				RuntimeObject* L_7 = TcpClient_BeginConnect_m2835792999(L_4, L_5, L_6, (AsyncCallback_t3962456242 *)NULL, NULL, /*hidden argument*/NULL);
				V_3 = L_7;
				RuntimeObject* L_8 = V_3;
				NullCheck(L_8);
				WaitHandle_t1743403487 * L_9 = InterfaceFuncInvoker0< WaitHandle_t1743403487 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_8);
				TimeSpan_t881159249  L_10 = V_0;
				NullCheck(L_9);
				bool L_11 = VirtFuncInvoker1< bool, TimeSpan_t881159249  >::Invoke(12 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.TimeSpan) */, L_9, L_10);
				V_4 = L_11;
				bool L_12 = V_4;
				if (L_12)
				{
					goto IL_0053;
				}
			}

IL_004a:
			{
				V_5 = (bool)0;
				IL2CPP_LEAVE(0x85, FINALLY_0060);
			}

IL_0053:
			{
				TcpClient_t822906377 * L_13 = V_2;
				RuntimeObject* L_14 = V_3;
				NullCheck(L_13);
				TcpClient_EndConnect_m1433859801(L_13, L_14, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x6D, FINALLY_0060);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0060;
		}

FINALLY_0060:
		{ // begin finally (depth: 2)
			{
				TcpClient_t822906377 * L_15 = V_2;
				if (!L_15)
				{
					goto IL_006c;
				}
			}

IL_0066:
			{
				TcpClient_t822906377 * L_16 = V_2;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
			}

IL_006c:
			{
				IL2CPP_END_FINALLY(96)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(96)
		{
			IL2CPP_JUMP_TBL(0x85, IL_0085)
			IL2CPP_JUMP_TBL(0x6D, IL_006d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_006d:
		{
			goto IL_007d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Object)
		V_5 = (bool)0;
		goto IL_0085;
	} // end catch (depth: 1)

IL_007d:
	{
		V_5 = (bool)1;
		goto IL_0085;
	}

IL_0085:
	{
		bool L_17 = V_5;
		return L_17;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddWebsocketHost_m3508994088 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddWebsocketHost_m3508994088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___port1;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_1 = ___ip2;
		int32_t L_2 = ___port1;
		bool L_3 = NetworkTransport_IsPortOpen_m2487963042(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___port1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2417585805, L_6, _stringLiteral1982104739, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_8 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, NetworkTransport_AddWebsocketHost_m3508994088_RuntimeMethod_var);
	}

IL_002f:
	{
	}

IL_0030:
	{
		HostTopology_t4059263395 * L_9 = ___topology0;
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		NullReferenceException_t1023182353 * L_10 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_10, _stringLiteral335420074, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, NetworkTransport_AddWebsocketHost_m3508994088_RuntimeMethod_var);
	}

IL_0041:
	{
		HostTopology_t4059263395 * L_11 = ___topology0;
		NetworkTransport_CheckTopology_m750760940(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		String_t* L_12 = ___ip2;
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		HostTopology_t4059263395 * L_13 = ___topology0;
		HostTopologyInternal_t761087795 * L_14 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_14, L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___port1;
		int32_t L_16 = NetworkTransport_AddWsHostWrapperWithoutIp_m565861628(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0072;
	}

IL_005f:
	{
		HostTopology_t4059263395 * L_17 = ___topology0;
		HostTopologyInternal_t761087795 * L_18 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_18, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___ip2;
		int32_t L_20 = ___port1;
		int32_t L_21 = NetworkTransport_AddWsHostWrapper_m394737320(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_0072;
	}

IL_0072:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapper_m1104996213 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostWrapper_m1104996213_ftn) (HostTopologyInternal_t761087795 *, String_t*, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostWrapper_m1104996213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostWrapper_m1104996213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2, ___minTimeout3, ___maxTimeout4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapperWithoutIp_m987964846 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, int32_t ___minTimeout2, int32_t ___maxTimeout3, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn) (HostTopologyInternal_t761087795 *, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___port1, ___minTimeout2, ___maxTimeout3);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m1126110129 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (String_t*)NULL;
		HostTopology_t4059263395 * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		String_t* L_2 = V_0;
		int32_t L_3 = NetworkTransport_AddHost_m236682671(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m236682671 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m236682671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral335420074, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetworkTransport_AddHost_m236682671_RuntimeMethod_var);
	}

IL_0012:
	{
		HostTopology_t4059263395 * L_2 = ___topology0;
		NetworkTransport_CheckTopology_m750760940(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___ip2;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		HostTopology_t4059263395 * L_4 = ___topology0;
		HostTopologyInternal_t761087795 * L_5 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___port1;
		int32_t L_7 = NetworkTransport_AddHostWrapperWithoutIp_m987964846(NULL /*static, unused*/, L_5, L_6, 0, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0047;
	}

IL_0032:
	{
		HostTopology_t4059263395 * L_8 = ___topology0;
		HostTopologyInternal_t761087795 * L_9 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_9, L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___ip2;
		int32_t L_11 = ___port1;
		int32_t L_12 = NetworkTransport_AddHostWrapper_m1104996213(NULL /*static, unused*/, L_9, L_10, L_11, 0, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_m764501553 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (String_t*)NULL;
		HostTopology_t4059263395 * L_0 = ___topology0;
		int32_t L_1 = ___minTimeout1;
		int32_t L_2 = ___maxTimeout2;
		int32_t L_3 = ___port3;
		String_t* L_4 = V_0;
		int32_t L_5 = NetworkTransport_AddHostWithSimulator_m2523855845(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWithSimulator_m2523855845 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___minTimeout1, int32_t ___maxTimeout2, int32_t ___port3, String_t* ___ip4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHostWithSimulator_m2523855845_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral335420074, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetworkTransport_AddHostWithSimulator_m2523855845_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___ip4;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		HostTopology_t4059263395 * L_3 = ___topology0;
		HostTopologyInternal_t761087795 * L_4 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_4, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___port3;
		int32_t L_6 = ___minTimeout1;
		int32_t L_7 = ___maxTimeout2;
		int32_t L_8 = NetworkTransport_AddHostWrapperWithoutIp_m987964846(NULL /*static, unused*/, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0043;
	}

IL_002d:
	{
		HostTopology_t4059263395 * L_9 = ___topology0;
		HostTopologyInternal_t761087795 * L_10 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_10, L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___ip4;
		int32_t L_12 = ___port3;
		int32_t L_13 = ___minTimeout1;
		int32_t L_14 = ___maxTimeout2;
		int32_t L_15 = NetworkTransport_AddHostWrapper_m1104996213(NULL /*static, unused*/, L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0043;
	}

IL_0043:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_RemoveHost_m1576069304 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_RemoveHost_m1576069304_ftn) (int32_t);
	static NetworkTransport_RemoveHost_m1576069304_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_RemoveHost_m1576069304_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)");
	bool retVal = _il2cpp_icall_func(___hostId0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_m3614742619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_get_IsStarted_m3614742619_ftn) ();
	static NetworkTransport_get_IsStarted_m3614742619_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_get_IsStarted_m3614742619_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::get_IsStarted()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_m1156091760 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Connect_m1156091760_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Connect_m1156091760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Connect_m1156091760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_Internal_ConnectEndPoint_m1433243872 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, intptr_t ___sockAddrStorage1, int32_t ___sockAddrStorageLen2, int32_t ___exceptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Internal_ConnectEndPoint_m1433243872_ftn) (int32_t, intptr_t, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Internal_ConnectEndPoint_m1433243872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Internal_ConnectEndPoint_m1433243872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___sockAddrStorage1, ___sockAddrStorageLen2, ___exceptionConnectionId3, ___error4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ConnectWithSimulator_m2620266349 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, ConnectionSimulatorConfig_t1375549810 * ___conf5, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_ConnectWithSimulator_m2620266349_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*, ConnectionSimulatorConfig_t1375549810 *);
	static NetworkTransport_ConnectWithSimulator_m2620266349_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_ConnectWithSimulator_m2620266349_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4, ___conf5);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m2330484719 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_Disconnect_m2330484719_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_Disconnect_m2330484719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Disconnect_m2330484719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m1813092975 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Send_m1813092975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral1735740363, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetworkTransport_Send_m1813092975_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___hostId0;
		int32_t L_3 = ___connectionId1;
		int32_t L_4 = ___channelId2;
		ByteU5BU5D_t4116647657* L_5 = ___buffer3;
		int32_t L_6 = ___size4;
		uint8_t* L_7 = ___error5;
		bool L_8 = NetworkTransport_SendWrapper_m4225720830(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, (uint8_t*)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m4225720830 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_SendWrapper_m4225720830_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t, uint8_t*);
	static NetworkTransport_SendWrapper_m4225720830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendWrapper_m4225720830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return retVal;
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ReceiveFromHost_m245759866 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_ReceiveFromHost_m245759866_ftn) (int32_t, int32_t*, int32_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_ReceiveFromHost_m245759866_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_ReceiveFromHost_m245759866_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___bufferSize4, ___receivedSize5, ___error6);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscovery_m3499887629 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t4116647657* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_StartBroadcastDiscovery_m3499887629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer5;
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___buffer5;
		NullCheck(L_1);
		int32_t L_2 = ___size6;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) >= ((int32_t)L_2)))
		{
			goto IL_004b;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2869834625);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2869834625);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		int32_t L_6 = ___size6;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral2098382620);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2098382620);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		ByteU5BU5D_t4116647657* L_11 = ___buffer5;
		NullCheck(L_11);
		int32_t L_12 = (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))));
		RuntimeObject * L_13 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2971454694(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_15 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, NetworkTransport_StartBroadcastDiscovery_m3499887629_RuntimeMethod_var);
	}

IL_004b:
	{
		int32_t L_16 = ___size6;
		if (L_16)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_17 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_17, _stringLiteral3201718495, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, NetworkTransport_StartBroadcastDiscovery_m3499887629_RuntimeMethod_var);
	}

IL_005d:
	{
	}

IL_005e:
	{
		ByteU5BU5D_t4116647657* L_18 = ___buffer5;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = ___hostId0;
		int32_t L_20 = ___broadcastPort1;
		int32_t L_21 = ___key2;
		int32_t L_22 = ___version3;
		int32_t L_23 = ___subversion4;
		int32_t L_24 = ___timeout7;
		uint8_t* L_25 = ___error8;
		bool L_26 = NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858(NULL /*static, unused*/, L_19, L_20, L_21, L_22, L_23, L_24, (uint8_t*)L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_0093;
	}

IL_007a:
	{
		int32_t L_27 = ___hostId0;
		int32_t L_28 = ___broadcastPort1;
		int32_t L_29 = ___key2;
		int32_t L_30 = ___version3;
		int32_t L_31 = ___subversion4;
		ByteU5BU5D_t4116647657* L_32 = ___buffer5;
		int32_t L_33 = ___size6;
		int32_t L_34 = ___timeout7;
		uint8_t* L_35 = ___error8;
		bool L_36 = NetworkTransport_StartBroadcastDiscoveryWithData_m899588105(NULL /*static, unused*/, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34, (uint8_t*)L_35, /*hidden argument*/NULL);
		V_0 = L_36;
		goto IL_0093;
	}

IL_0093:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithoutData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, int32_t ___timeout5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858_ftn) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, uint8_t*);
	static NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_StartBroadcastDiscoveryWithoutData_m1505319858_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithoutData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___broadcastPort1, ___key2, ___version3, ___subversion4, ___timeout5, ___error6);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_StartBroadcastDiscoveryWithData_m899588105 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___broadcastPort1, int32_t ___key2, int32_t ___version3, int32_t ___subversion4, ByteU5BU5D_t4116647657* ___buffer5, int32_t ___size6, int32_t ___timeout7, uint8_t* ___error8, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_StartBroadcastDiscoveryWithData_m899588105_ftn) (int32_t, int32_t, int32_t, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_StartBroadcastDiscoveryWithData_m899588105_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_StartBroadcastDiscoveryWithData_m899588105_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::StartBroadcastDiscoveryWithData(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___broadcastPort1, ___key2, ___version3, ___subversion4, ___buffer5, ___size6, ___timeout7, ___error8);
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_StopBroadcastDiscovery_m3847658116 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_StopBroadcastDiscovery_m3847658116_ftn) ();
	static NetworkTransport_StopBroadcastDiscovery_m3847658116_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_StopBroadcastDiscovery_m3847658116_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_SetBroadcastCredentials_m1961897762 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___key1, int32_t ___version2, int32_t ___subversion3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_SetBroadcastCredentials_m1961897762_ftn) (int32_t, int32_t, int32_t, int32_t, uint8_t*);
	static NetworkTransport_SetBroadcastCredentials_m1961897762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetBroadcastCredentials_m1961897762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)");
	_il2cpp_icall_func(___hostId0, ___key1, ___version2, ___subversion3, ___error4);
}
// System.String UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkTransport_GetBroadcastConnectionInfo_m812984813 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t* ___port1, uint8_t* ___error2, const RuntimeMethod* method)
{
	typedef String_t* (*NetworkTransport_GetBroadcastConnectionInfo_m812984813_ftn) (int32_t, int32_t*, uint8_t*);
	static NetworkTransport_GetBroadcastConnectionInfo_m812984813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetBroadcastConnectionInfo_m812984813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)");
	String_t* retVal = _il2cpp_icall_func(___hostId0, ___port1, ___error2);
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_GetBroadcastConnectionInfo_m4236529341 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t** ___address1, int32_t* ___port2, uint8_t* ___error3, const RuntimeMethod* method)
{
	{
		String_t** L_0 = ___address1;
		int32_t L_1 = ___hostId0;
		int32_t* L_2 = ___port2;
		uint8_t* L_3 = ___error3;
		String_t* L_4 = NetworkTransport_GetBroadcastConnectionInfo_m812984813(NULL /*static, unused*/, L_1, (int32_t*)L_2, (uint8_t*)L_3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_0, (RuntimeObject *)L_4);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_GetBroadcastConnectionMessage_m4291551967 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___bufferSize2, int32_t* ___receivedSize3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_GetBroadcastConnectionMessage_m4291551967_ftn) (int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_GetBroadcastConnectionMessage_m4291551967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetBroadcastConnectionMessage_m4291551967_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	_il2cpp_icall_func(___hostId0, ___buffer1, ___bufferSize2, ___receivedSize3, ___error4);
}
// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_DoesEndPointUsePlatformProtocols_m748072121 (RuntimeObject * __this /* static, unused */, EndPoint_t982345378 * ___endPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_DoesEndPointUsePlatformProtocols_m748072121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketAddress_t3739769427 * V_0 = NULL;
	bool V_1 = false;
	{
		EndPoint_t982345378 * L_0 = ___endPoint0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral4184904804, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		EndPoint_t982345378 * L_4 = ___endPoint0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral1862178633, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005e;
		}
	}

IL_0035:
	{
		EndPoint_t982345378 * L_8 = ___endPoint0;
		NullCheck(L_8);
		SocketAddress_t3739769427 * L_9 = VirtFuncInvoker0< SocketAddress_t3739769427 * >::Invoke(6 /* System.Net.SocketAddress System.Net.EndPoint::Serialize() */, L_8);
		V_0 = L_9;
		SocketAddress_t3739769427 * L_10 = V_0;
		NullCheck(L_10);
		uint8_t L_11 = SocketAddress_get_Item_m4142520260(L_10, 8, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		SocketAddress_t3739769427 * L_12 = V_0;
		NullCheck(L_12);
		uint8_t L_13 = SocketAddress_get_Item_m4142520260(L_12, ((int32_t)9), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005d;
		}
	}

IL_0056:
	{
		V_1 = (bool)1;
		goto IL_0065;
	}

IL_005d:
	{
	}

IL_005e:
	{
		V_1 = (bool)0;
		goto IL_0065;
	}

IL_0065:
	{
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_ConnectEndPoint_m743044074 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, EndPoint_t982345378 * ___endPoint1, int32_t ___exceptionConnectionId2, uint8_t* ___error3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_ConnectEndPoint_m743044074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	EndPoint_t982345378 * V_1 = NULL;
	SocketAddress_t3739769427 * V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	int32_t V_4 = 0;
	intptr_t V_5;
	memset(&V_5, 0, sizeof(V_5));
	ByteU5BU5D_t4116647657* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	SocketAddress_t3739769427 * V_9 = NULL;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	int32_t V_11 = 0;
	intptr_t V_12;
	memset(&V_12, 0, sizeof(V_12));
	int32_t V_13 = 0;
	{
		uint8_t* L_0 = ___error3;
		*((int8_t*)L_0) = (int8_t)0;
		ByteU5BU5D_t4116647657* L_1 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)4);
		ByteU5BU5D_t4116647657* L_2 = L_1;
		RuntimeFieldHandle_t1871169219  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255368____U24fieldU2D95D7E9C7483D5AF10DF20044FCD3E580073E1D4B_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_2;
		EndPoint_t982345378 * L_4 = ___endPoint1;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		NullReferenceException_t1023182353 * L_5 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_5, _stringLiteral3498400675, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_0027:
	{
		EndPoint_t982345378 * L_6 = ___endPoint1;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m88164663(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_8, _stringLiteral3077925917, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0080;
		}
	}
	{
		EndPoint_t982345378 * L_10 = ___endPoint1;
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m88164663(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_12, _stringLiteral4184904804, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		EndPoint_t982345378 * L_14 = ___endPoint1;
		NullCheck(L_14);
		Type_t * L_15 = Object_GetType_m88164663(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_16, _stringLiteral1862178633, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0080;
		}
	}
	{
		ArgumentException_t132251570 * L_18 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_18, _stringLiteral4005163414, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_0080:
	{
		EndPoint_t982345378 * L_19 = ___endPoint1;
		NullCheck(L_19);
		Type_t * L_20 = Object_GetType_m88164663(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m920492651(NULL /*static, unused*/, L_21, _stringLiteral3077925917, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_01e4;
		}
	}
	{
		EndPoint_t982345378 * L_23 = ___endPoint1;
		V_1 = L_23;
		EndPoint_t982345378 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Net.Sockets.AddressFamily System.Net.EndPoint::get_AddressFamily() */, L_24);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)23))))
		{
			goto IL_00b5;
		}
	}
	{
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_26, _stringLiteral1599216296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_00b5:
	{
		EndPoint_t982345378 * L_27 = V_1;
		NullCheck(L_27);
		SocketAddress_t3739769427 * L_28 = VirtFuncInvoker0< SocketAddress_t3739769427 * >::Invoke(6 /* System.Net.SocketAddress System.Net.EndPoint::Serialize() */, L_27);
		V_2 = L_28;
		SocketAddress_t3739769427 * L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30 = SocketAddress_get_Size_m3420662108(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)14))))
		{
			goto IL_00d4;
		}
	}
	{
		ArgumentException_t132251570 * L_31 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_31, _stringLiteral2447759174, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_00d4:
	{
		SocketAddress_t3739769427 * L_32 = V_2;
		NullCheck(L_32);
		uint8_t L_33 = SocketAddress_get_Item_m4142520260(L_32, 0, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00ec;
		}
	}
	{
		SocketAddress_t3739769427 * L_34 = V_2;
		NullCheck(L_34);
		uint8_t L_35 = SocketAddress_get_Item_m4142520260(L_34, 1, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00f7;
		}
	}

IL_00ec:
	{
		ArgumentException_t132251570 * L_36 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_36, _stringLiteral556072317, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_00f7:
	{
		SocketAddress_t3739769427 * L_37 = V_2;
		NullCheck(L_37);
		uint8_t L_38 = SocketAddress_get_Item_m4142520260(L_37, 2, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 0;
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_38) == ((uint32_t)L_41))))
		{
			goto IL_0133;
		}
	}
	{
		SocketAddress_t3739769427 * L_42 = V_2;
		NullCheck(L_42);
		uint8_t L_43 = SocketAddress_get_Item_m4142520260(L_42, 3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = 1;
		uint8_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		if ((!(((uint32_t)L_43) == ((uint32_t)L_46))))
		{
			goto IL_0133;
		}
	}
	{
		SocketAddress_t3739769427 * L_47 = V_2;
		NullCheck(L_47);
		uint8_t L_48 = SocketAddress_get_Item_m4142520260(L_47, 4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 2;
		uint8_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		if ((!(((uint32_t)L_48) == ((uint32_t)L_51))))
		{
			goto IL_0133;
		}
	}
	{
		SocketAddress_t3739769427 * L_52 = V_2;
		NullCheck(L_52);
		uint8_t L_53 = SocketAddress_get_Item_m4142520260(L_52, 5, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = 3;
		uint8_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		if ((((int32_t)L_53) == ((int32_t)L_56)))
		{
			goto IL_013e;
		}
	}

IL_0133:
	{
		ArgumentException_t132251570 * L_57 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_57, _stringLiteral333156630, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_57, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_013e:
	{
		ByteU5BU5D_t4116647657* L_58 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8);
		V_3 = L_58;
		V_4 = 0;
		goto IL_0163;
	}

IL_014d:
	{
		ByteU5BU5D_t4116647657* L_59 = V_3;
		int32_t L_60 = V_4;
		SocketAddress_t3739769427 * L_61 = V_2;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		uint8_t L_63 = SocketAddress_get_Item_m4142520260(L_61, ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_62)), /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (uint8_t)L_63);
		int32_t L_64 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_0163:
	{
		int32_t L_65 = V_4;
		ByteU5BU5D_t4116647657* L_66 = V_3;
		NullCheck(L_66);
		if ((((int32_t)L_65) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_66)->max_length)))))))
		{
			goto IL_014d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_67 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		int64_t L_68 = BitConverter_ToInt64_m349022421(NULL /*static, unused*/, L_67, 0, /*hidden argument*/NULL);
		IntPtr__ctor_m987476171((intptr_t*)(&V_5), L_68, /*hidden argument*/NULL);
		intptr_t L_69 = V_5;
		bool L_70 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_69, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_0197;
		}
	}
	{
		ArgumentException_t132251570 * L_71 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_71, _stringLiteral1118566603, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_0197:
	{
		ByteU5BU5D_t4116647657* L_72 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2);
		V_6 = L_72;
		intptr_t L_73 = V_5;
		ByteU5BU5D_t4116647657* L_74 = V_6;
		ByteU5BU5D_t4116647657* L_75 = V_6;
		NullCheck(L_75);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, (intptr_t)L_73, L_74, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_75)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_76 = V_6;
		NullCheck(L_76);
		int32_t L_77 = 1;
		uint8_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_t4116647657* L_79 = V_6;
		NullCheck(L_79);
		int32_t L_80 = 0;
		uint8_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_78<<(int32_t)8)), (int32_t)L_81));
		int32_t L_82 = V_7;
		if ((((int32_t)L_82) == ((int32_t)((int32_t)23))))
		{
			goto IL_01ce;
		}
	}
	{
		ArgumentException_t132251570 * L_83 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_83, _stringLiteral615785339, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_01ce:
	{
		int32_t L_84 = ___hostId0;
		intptr_t L_85 = V_5;
		int32_t L_86 = ___exceptionConnectionId2;
		uint8_t* L_87 = ___error3;
		int32_t L_88 = NetworkTransport_Internal_ConnectEndPoint_m1433243872(NULL /*static, unused*/, L_84, (intptr_t)L_85, ((int32_t)128), L_86, (uint8_t*)L_87, /*hidden argument*/NULL);
		V_8 = L_88;
		goto IL_02a7;
	}

IL_01e4:
	{
		EndPoint_t982345378 * L_89 = ___endPoint1;
		NullCheck(L_89);
		SocketAddress_t3739769427 * L_90 = VirtFuncInvoker0< SocketAddress_t3739769427 * >::Invoke(6 /* System.Net.SocketAddress System.Net.EndPoint::Serialize() */, L_89);
		V_9 = L_90;
		SocketAddress_t3739769427 * L_91 = V_9;
		NullCheck(L_91);
		int32_t L_92 = SocketAddress_get_Size_m3420662108(L_91, /*hidden argument*/NULL);
		if ((((int32_t)L_92) == ((int32_t)((int32_t)16))))
		{
			goto IL_0206;
		}
	}
	{
		ArgumentException_t132251570 * L_93 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_93, _stringLiteral93058573, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_0206:
	{
		SocketAddress_t3739769427 * L_94 = V_9;
		NullCheck(L_94);
		uint8_t L_95 = SocketAddress_get_Item_m4142520260(L_94, 0, /*hidden argument*/NULL);
		SocketAddress_t3739769427 * L_96 = V_9;
		NullCheck(L_96);
		int32_t L_97 = SocketAddress_get_Size_m3420662108(L_96, /*hidden argument*/NULL);
		if ((((int32_t)L_95) == ((int32_t)L_97)))
		{
			goto IL_0225;
		}
	}
	{
		ArgumentException_t132251570 * L_98 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_98, _stringLiteral1940688276, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_0225:
	{
		SocketAddress_t3739769427 * L_99 = V_9;
		NullCheck(L_99);
		uint8_t L_100 = SocketAddress_get_Item_m4142520260(L_99, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_100) == ((int32_t)2)))
		{
			goto IL_023e;
		}
	}
	{
		ArgumentException_t132251570 * L_101 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_101, _stringLiteral613830633, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, NULL, NetworkTransport_ConnectEndPoint_m743044074_RuntimeMethod_var);
	}

IL_023e:
	{
		ByteU5BU5D_t4116647657* L_102 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_10 = L_102;
		V_11 = 0;
		goto IL_0265;
	}

IL_024f:
	{
		ByteU5BU5D_t4116647657* L_103 = V_10;
		int32_t L_104 = V_11;
		SocketAddress_t3739769427 * L_105 = V_9;
		int32_t L_106 = V_11;
		NullCheck(L_105);
		uint8_t L_107 = SocketAddress_get_Item_m4142520260(L_105, L_106, /*hidden argument*/NULL);
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (uint8_t)L_107);
		int32_t L_108 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0265:
	{
		int32_t L_109 = V_11;
		ByteU5BU5D_t4116647657* L_110 = V_10;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_110)->max_length)))))))
		{
			goto IL_024f;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_111 = V_10;
		NullCheck(L_111);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		intptr_t L_112 = Marshal_AllocHGlobal_m491131085(NULL /*static, unused*/, (((int32_t)((int32_t)(((RuntimeArray *)L_111)->max_length)))), /*hidden argument*/NULL);
		V_12 = (intptr_t)L_112;
		ByteU5BU5D_t4116647657* L_113 = V_10;
		intptr_t L_114 = V_12;
		ByteU5BU5D_t4116647657* L_115 = V_10;
		NullCheck(L_115);
		Marshal_Copy_m1562111546(NULL /*static, unused*/, L_113, 0, (intptr_t)L_114, (((int32_t)((int32_t)(((RuntimeArray *)L_115)->max_length)))), /*hidden argument*/NULL);
		int32_t L_116 = ___hostId0;
		intptr_t L_117 = V_12;
		int32_t L_118 = ___exceptionConnectionId2;
		uint8_t* L_119 = ___error3;
		int32_t L_120 = NetworkTransport_Internal_ConnectEndPoint_m1433243872(NULL /*static, unused*/, L_116, (intptr_t)L_117, ((int32_t)16), L_118, (uint8_t*)L_119, /*hidden argument*/NULL);
		V_13 = L_120;
		intptr_t L_121 = V_12;
		Marshal_FreeHGlobal_m1757369653(NULL /*static, unused*/, (intptr_t)L_121, /*hidden argument*/NULL);
		int32_t L_122 = V_13;
		V_8 = L_122;
		goto IL_02a7;
	}

IL_02a7:
	{
		int32_t L_123 = V_8;
		return L_123;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_Init_m1021203550 (RuntimeObject * __this /* static, unused */, GlobalConfig_t833512557 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Init_m1021203550_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GlobalConfig_t833512557 * L_0 = ___config0;
		NullCheck(L_0);
		Action_1_t3123413348 * L_1 = GlobalConfig_get_NetworkEventAvailable_m764444237(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		GlobalConfig_t833512557 * L_2 = ___config0;
		NullCheck(L_2);
		Action_1_t3123413348 * L_3 = GlobalConfig_get_NetworkEventAvailable_m764444237(L_2, /*hidden argument*/NULL);
		NetworkTransport_SetNetworkEventAvailableCallback_m3998650185(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		GlobalConfig_t833512557 * L_4 = ___config0;
		NullCheck(L_4);
		Action_2_t4177122770 * L_5 = GlobalConfig_get_ConnectionReadyForSend_m1174981153(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		GlobalConfig_t833512557 * L_6 = ___config0;
		NullCheck(L_6);
		Action_2_t4177122770 * L_7 = GlobalConfig_get_ConnectionReadyForSend_m1174981153(L_6, /*hidden argument*/NULL);
		NetworkTransport_SetConnectionReadyForSendCallback_m306589348(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		GlobalConfig_t833512557 * L_8 = ___config0;
		GlobalConfigInternal_t1872710257 * L_9 = (GlobalConfigInternal_t1872710257 *)il2cpp_codegen_object_new(GlobalConfigInternal_t1872710257_il2cpp_TypeInfo_var);
		GlobalConfigInternal__ctor_m15594627(L_9, L_8, /*hidden argument*/NULL);
		NetworkTransport_InitWithParameters_m1136955565(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_SetNetworkEventAvailableCallback_m3998650185 (RuntimeObject * __this /* static, unused */, Action_1_t3123413348 * ___callback0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_SetNetworkEventAvailableCallback_m3998650185_ftn) (Action_1_t3123413348 *);
	static NetworkTransport_SetNetworkEventAvailableCallback_m3998650185_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetNetworkEventAvailableCallback_m3998650185_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetNetworkEventAvailableCallback(System.Action`1<System.Int32>)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_SetConnectionReadyForSendCallback_m306589348 (RuntimeObject * __this /* static, unused */, Action_2_t4177122770 * ___callback0, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_SetConnectionReadyForSendCallback_m306589348_ftn) (Action_2_t4177122770 *);
	static NetworkTransport_SetConnectionReadyForSendCallback_m306589348_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SetConnectionReadyForSendCallback_m306589348_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SetConnectionReadyForSendCallback(System.Action`2<System.Int32,System.Int32>)");
	_il2cpp_icall_func(___callback0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetworkAccessToken__ctor_m969521192 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken__ctor_m969521192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_array_1(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Types.NetworkAccessToken::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NetworkAccessToken__ctor_m1548906336 (NetworkAccessToken_t320639760 * __this, String_t* ___strArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken__ctor_m1548906336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___strArray0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_1 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_array_1(L_1);
		goto IL_002f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001a;
		throw e;
	}

CATCH_001a:
	{ // begin catch(System.Exception)
		ByteU5BU5D_t4116647657* L_2 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->set_array_1(L_2);
		goto IL_002f;
	} // end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// System.String UnityEngine.Networking.Types.NetworkAccessToken::GetByteString()
extern "C" IL2CPP_METHOD_ATTR String_t* NetworkAccessToken_GetByteString_m3125030115 (NetworkAccessToken_t320639760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkAccessToken_GetByteString_m3125030115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_array_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_1 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_2 = V_0;
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
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C" IL2CPP_METHOD_ATTR uint64_t Utility_GetSourceID_m602367204 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = (((int64_t)((int64_t)L_1)));
		goto IL_0012;
	}

IL_0012:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C" IL2CPP_METHOD_ATTR void Utility_SetAccessTokenForNetwork_m483792653 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t320639760 * ___accessToken1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_SetAccessTokenForNetwork_m483792653_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_0 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_1 = ___netId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m3634856078(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m3634856078_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_3 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_4 = ___netId0;
		NullCheck(L_3);
		Dictionary_2_Remove_m1903597580(L_3, L_4, /*hidden argument*/Dictionary_2_Remove_m1903597580_RuntimeMethod_var);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_5 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_6 = ___netId0;
		NetworkAccessToken_t320639760 * L_7 = ___accessToken1;
		NullCheck(L_5);
		Dictionary_2_Add_m3785116836(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m3785116836_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C" IL2CPP_METHOD_ATTR NetworkAccessToken_t320639760 * Utility_GetAccessTokenForNetwork_m3460910439 (RuntimeObject * __this /* static, unused */, uint64_t ___netId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility_GetAccessTokenForNetwork_m3460910439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkAccessToken_t320639760 * V_0 = NULL;
	NetworkAccessToken_t320639760 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Utility_t2761513741_il2cpp_TypeInfo_var);
		Dictionary_2_t3502080855 * L_0 = ((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->get_s_dictTokens_0();
		uint64_t L_1 = ___netId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1533749912(L_0, L_1, (NetworkAccessToken_t320639760 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1533749912_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		NetworkAccessToken_t320639760 * L_3 = (NetworkAccessToken_t320639760 *)il2cpp_codegen_object_new(NetworkAccessToken_t320639760_il2cpp_TypeInfo_var);
		NetworkAccessToken__ctor_m969521192(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001b:
	{
		NetworkAccessToken_t320639760 * L_4 = V_0;
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		NetworkAccessToken_t320639760 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Utility__cctor_m3381620260 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utility__cctor_m3381620260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3502080855 * L_0 = (Dictionary_2_t3502080855 *)il2cpp_codegen_object_new(Dictionary_2_t3502080855_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2501111586(L_0, /*hidden argument*/Dictionary_2__ctor_m2501111586_RuntimeMethod_var);
		((Utility_t2761513741_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t2761513741_il2cpp_TypeInfo_var))->set_s_dictTokens_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
