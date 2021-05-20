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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.String>
struct Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3;
// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF;
// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A;
// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs>
struct EventHandler_1_t4CC5585E9CFF03B60861A69EFC3B9C95C8E18923;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_tFF58C06B2D3A83913CDC2C2DB64F03315EE8474B;
// System.Collections.Generic.HashSet`1<System.Int32Enum>
struct HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Api.NativeAdType>
struct IEqualityComparer_1_t43D01AE4B7851D1C5D0473727FB2AE7D64B3DC28;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct KeyCollection_t9D7A88D21CF2B46960214A11141893E61E004978;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct ValueCollection_t2E2E80DEFC38398C5472E3B47BC4F37B0E2B7E0F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>[]
struct EntryU5BU5D_t745C7A625F3EA16060307E05314C399F1C04CAB9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Api.NativeAdType>[]
struct SlotU5BU5D_t32B19EEE204D0BF811D3CC31034DE2123B3EAED2;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// GoogleMobileAds.Api.Mediation.MediationExtras[]
struct MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD;
// GoogleMobileAds.Api.AdLoader
struct AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE;
// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5;
// GoogleMobileAds.Api.CustomNativeTemplateAd
struct CustomNativeTemplateAd_tA311FF926A03D5DEDBFD5815F49BFCA8E27EBF10;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// GoogleMobileAds.Common.IAdLoaderClient
struct IAdLoaderClient_t047E180A81772651ED187ECC91996B84D4FC1688;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// GoogleMobileAds.IClientFactory
struct IClientFactory_t51C5D4492EDA61A380FC3C204FA3428413166D5D;
// GoogleMobileAds.Common.ICustomNativeTemplateClient
struct ICustomNativeTemplateClient_t301C1DBFF2335CC468C68C4094E6B0900C53EC67;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t89509F94B902D18745453A608D4C947C2B314720;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6;
// GoogleMobileAds.Api.Mediation.MediationExtras
struct MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1;
// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843;
// GoogleMobileAds.Api.Reward
struct Reward_tB06AEC6535757FE50F398B42061432D88E45CC93;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// GoogleMobileAds.Common.Utils
struct Utils_t8060527E8EEA8CD856995A8037DE7B12BD8CBEAA;
// GoogleMobileAds.iOS.Utils
struct Utils_t895F40002F0DADCEFC8EB1896DB1767EA51EBE3F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933;
// GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback
struct GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41;
// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B;
// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback
struct GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1;
// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F;
// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick
struct GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback
struct GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B;
// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361;
// GoogleMobileAds.Api.MobileAds/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t96366F8B913DD997D9863FF0480733047608AEBB;
// GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback
struct GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F;
// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t696330B3B8E9380B4FB273313408D1568B479318;
// GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c
struct U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192;
// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback
struct GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback
struct GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback
struct GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback
struct GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0;
// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback
struct GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6;
// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback
struct GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A;
// GoogleMobileAds.Api.ServerSideVerificationOptions/Builder
struct Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2;

IL2CPP_EXTERN_C RuntimeClass* AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t75FD7DAC66CD027DADAA1676A4F41151B633E614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9577DEB8445FE8D053AE3F3872E52153C7012A15;
IL2CPP_EXTERN_C String_t* _stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE13C3604EDFD154E9FF5DA6E5747DE274BC42F1;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralFE4B457907B315DC803DC1665C4DBE73F1BC72D4;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE5D6228F7847FE528A5278874EE82EA242201726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7918494ED49BCD2A8A65E0CDCDE1E4684F837BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m12C0B35807413AD316367D090DB4E3DF03A14E23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEDE199192A16E3FD4F1C23CAD329947861A7BE61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m18C0EC1C57D4FB14A739390338C535FE334D91DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B005AFC48354200D861421DCAE97A38DBA0329D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6ADEF41140EBC6127C9C9A8BC074E6E62ABB909F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m97F9A0E89674F1CD23096543FC1C155B88981F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m815E6D1094B65D419EE7B043C7D0490EE1429246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m38ABEE3DF233FF329FA3AC577DB66561EA6440FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9368F7ED2EB9E312C4EFAA3A3468C45F99FDF2DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m249FFAF55EA92813F9F799C2D0708DF6CF490B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8385745FF3A91272EEB116EEAF25A9595221FBBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD7C8D304C319DA0408548878CA8ECA10F71F8F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBC6E2B478FD83538BE0FC1F0FBF7B0CE8858A9D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1232505807D4AEEA102CED2308EED2BB9C03B1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6431DA65BE64C47494B3714CCE2CD9FF1903A68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GetTexture2DFromByteArray_mAAA794B21930A5DED03A3A23D6A78B4EC02EC3FD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>
struct Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t745C7A625F3EA16060307E05314C399F1C04CAB9* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9D7A88D21CF2B46960214A11141893E61E004978 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2E2E80DEFC38398C5472E3B47BC4F37B0E2B7E0F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___entries_1)); }
	inline EntryU5BU5D_t745C7A625F3EA16060307E05314C399F1C04CAB9* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t745C7A625F3EA16060307E05314C399F1C04CAB9** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t745C7A625F3EA16060307E05314C399F1C04CAB9* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___keys_7)); }
	inline KeyCollection_t9D7A88D21CF2B46960214A11141893E61E004978 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9D7A88D21CF2B46960214A11141893E61E004978 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9D7A88D21CF2B46960214A11141893E61E004978 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ___values_8)); }
	inline ValueCollection_t2E2E80DEFC38398C5472E3B47BC4F37B0E2B7E0F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2E2E80DEFC38398C5472E3B47BC4F37B0E2B7E0F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2E2E80DEFC38398C5472E3B47BC4F37B0E2B7E0F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>
struct HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t32B19EEE204D0BF811D3CC31034DE2123B3EAED2* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____slots_8)); }
	inline SlotU5BU5D_t32B19EEE204D0BF811D3CC31034DE2123B3EAED2* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t32B19EEE204D0BF811D3CC31034DE2123B3EAED2** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t32B19EEE204D0BF811D3CC31034DE2123B3EAED2* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____slots_8)); }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t0AE906AEB021E70A8C465C39ADD28C2B4884604D* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E, ____items_1)); }
	inline MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* get__items_1() const { return ____items_1; }
	inline MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E_StaticFields, ____emptyArray_5)); }
	inline MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MediationExtrasU5BU5D_tDDEE8DEBAA197C93F6FF12B2D2F613DECA7A89CC* value)
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


// GoogleMobileAds.Api.AdLoader
struct AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IAdLoaderClient GoogleMobileAds.Api.AdLoader::adLoaderClient
	RuntimeObject* ___adLoaderClient_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.AdLoader::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_1;
	// System.EventHandler`1<GoogleMobileAds.Api.CustomNativeEventArgs> GoogleMobileAds.Api.AdLoader::OnCustomNativeTemplateAdLoaded
	EventHandler_1_t4CC5585E9CFF03B60861A69EFC3B9C95C8E18923 * ___OnCustomNativeTemplateAdLoaded_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader::<CustomNativeTemplateClickHandlers>k__BackingField
	Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3;
	// System.String GoogleMobileAds.Api.AdLoader::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_4;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader::<AdTypes>k__BackingField
	HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * ___U3CAdTypesU3Ek__BackingField_5;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader::<TemplateIds>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CTemplateIdsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_adLoaderClient_0() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___adLoaderClient_0)); }
	inline RuntimeObject* get_adLoaderClient_0() const { return ___adLoaderClient_0; }
	inline RuntimeObject** get_address_of_adLoaderClient_0() { return &___adLoaderClient_0; }
	inline void set_adLoaderClient_0(RuntimeObject* value)
	{
		___adLoaderClient_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adLoaderClient_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_1() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___OnAdFailedToLoad_1)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_1() const { return ___OnAdFailedToLoad_1; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_1() { return &___OnAdFailedToLoad_1; }
	inline void set_OnAdFailedToLoad_1(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_2() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___OnCustomNativeTemplateAdLoaded_2)); }
	inline EventHandler_1_t4CC5585E9CFF03B60861A69EFC3B9C95C8E18923 * get_OnCustomNativeTemplateAdLoaded_2() const { return ___OnCustomNativeTemplateAdLoaded_2; }
	inline EventHandler_1_t4CC5585E9CFF03B60861A69EFC3B9C95C8E18923 ** get_address_of_OnCustomNativeTemplateAdLoaded_2() { return &___OnCustomNativeTemplateAdLoaded_2; }
	inline void set_OnCustomNativeTemplateAdLoaded_2(EventHandler_1_t4CC5585E9CFF03B60861A69EFC3B9C95C8E18923 * value)
	{
		___OnCustomNativeTemplateAdLoaded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCustomNativeTemplateAdLoaded_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3)); }
	inline Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() const { return ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA ** get_address_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return &___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline void set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * value)
	{
		___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdUnitIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___U3CAdUnitIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CAdUnitIdU3Ek__BackingField_4() const { return ___U3CAdUnitIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CAdUnitIdU3Ek__BackingField_4() { return &___U3CAdUnitIdU3Ek__BackingField_4; }
	inline void set_U3CAdUnitIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CAdUnitIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdUnitIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdTypesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___U3CAdTypesU3Ek__BackingField_5)); }
	inline HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * get_U3CAdTypesU3Ek__BackingField_5() const { return ___U3CAdTypesU3Ek__BackingField_5; }
	inline HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 ** get_address_of_U3CAdTypesU3Ek__BackingField_5() { return &___U3CAdTypesU3Ek__BackingField_5; }
	inline void set_U3CAdTypesU3Ek__BackingField_5(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * value)
	{
		___U3CAdTypesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdTypesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTemplateIdsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE, ___U3CTemplateIdsU3Ek__BackingField_6)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CTemplateIdsU3Ek__BackingField_6() const { return ___U3CTemplateIdsU3Ek__BackingField_6; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CTemplateIdsU3Ek__BackingField_6() { return &___U3CTemplateIdsU3Ek__BackingField_6; }
	inline void set_U3CTemplateIdsU3Ek__BackingField_6(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CTemplateIdsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTemplateIdsU3Ek__BackingField_6), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};


// GoogleMobileAds.Api.MaxAdContentRating
struct MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.MaxAdContentRating::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};


// GoogleMobileAds.Api.Mediation.MediationExtras
struct MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C, ___U3CExtrasU3Ek__BackingField_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_0() const { return ___U3CExtrasU3Ek__BackingField_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_0() { return &___U3CExtrasU3Ek__BackingField_0; }
	inline void set_U3CExtrasU3Ek__BackingField_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_0), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds
struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1  : public RuntimeObject
{
public:
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1, ___client_0)); }
	inline RuntimeObject* get_client_0() const { return ___client_0; }
	inline RuntimeObject** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(RuntimeObject* value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}
};

struct MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields
{
public:
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * ___instance_2;

public:
	inline static int32_t get_offset_of_clientFactory_1() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields, ___clientFactory_1)); }
	inline RuntimeObject* get_clientFactory_1() const { return ___clientFactory_1; }
	inline RuntimeObject** get_address_of_clientFactory_1() { return &___clientFactory_1; }
	inline void set_clientFactory_1(RuntimeObject* value)
	{
		___clientFactory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientFactory_1), (void*)value);
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1_StaticFields, ___instance_2)); }
	inline MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * get_instance_2() const { return ___instance_2; }
	inline MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_2), (void*)value);
	}
};


// GoogleMobileAds.Api.ServerSideVerificationOptions
struct ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255, ___U3CUserIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_0() const { return ___U3CUserIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_0() { return &___U3CUserIdU3Ek__BackingField_0; }
	inline void set_U3CUserIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255, ___U3CCustomDataU3Ek__BackingField_1)); }
	inline String_t* get_U3CCustomDataU3Ek__BackingField_1() const { return ___U3CCustomDataU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCustomDataU3Ek__BackingField_1() { return &___U3CCustomDataU3Ek__BackingField_1; }
	inline void set_U3CCustomDataU3Ek__BackingField_1(String_t* value)
	{
		___U3CCustomDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomDataU3Ek__BackingField_1), (void*)value);
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


// GoogleMobileAds.Common.Utils
struct Utils_t8060527E8EEA8CD856995A8037DE7B12BD8CBEAA  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.iOS.Utils
struct Utils_t895F40002F0DADCEFC8EB1896DB1767EA51EBE3F  : public RuntimeObject
{
public:

public:
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

// GoogleMobileAds.Api.AdLoader/Builder
struct Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.AdLoader/Builder::<AdUnitId>k__BackingField
	String_t* ___U3CAdUnitIdU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::<AdTypes>k__BackingField
	HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * ___U3CAdTypesU3Ek__BackingField_1;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::<TemplateIds>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CTemplateIdsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::<CustomNativeTemplateClickHandlers>k__BackingField
	Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAdUnitIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933, ___U3CAdUnitIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CAdUnitIdU3Ek__BackingField_0() const { return ___U3CAdUnitIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAdUnitIdU3Ek__BackingField_0() { return &___U3CAdUnitIdU3Ek__BackingField_0; }
	inline void set_U3CAdUnitIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CAdUnitIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdUnitIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAdTypesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933, ___U3CAdTypesU3Ek__BackingField_1)); }
	inline HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * get_U3CAdTypesU3Ek__BackingField_1() const { return ___U3CAdTypesU3Ek__BackingField_1; }
	inline HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 ** get_address_of_U3CAdTypesU3Ek__BackingField_1() { return &___U3CAdTypesU3Ek__BackingField_1; }
	inline void set_U3CAdTypesU3Ek__BackingField_1(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * value)
	{
		___U3CAdTypesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAdTypesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTemplateIdsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933, ___U3CTemplateIdsU3Ek__BackingField_2)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CTemplateIdsU3Ek__BackingField_2() const { return ___U3CTemplateIdsU3Ek__BackingField_2; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CTemplateIdsU3Ek__BackingField_2() { return &___U3CTemplateIdsU3Ek__BackingField_2; }
	inline void set_U3CTemplateIdsU3Ek__BackingField_2(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CTemplateIdsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTemplateIdsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933, ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3)); }
	inline Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() const { return ___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA ** get_address_of_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3() { return &___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3; }
	inline void set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * value)
	{
		___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3), (void*)value);
	}
};


// GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC  : public RuntimeObject
{
public:
	// GoogleMobileAds.iOS.AdLoaderClient GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0::client
	AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 * ___client_0;
	// System.WeakReference GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0::weakClient
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakClient_1;

public:
	inline static int32_t get_offset_of_client_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC, ___client_0)); }
	inline AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 * get_client_0() const { return ___client_0; }
	inline AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 ** get_address_of_client_0() { return &___client_0; }
	inline void set_client_0(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 * value)
	{
		___client_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_0), (void*)value);
	}

	inline static int32_t get_offset_of_weakClient_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC, ___weakClient_1)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_weakClient_1() const { return ___weakClient_1; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_weakClient_1() { return &___weakClient_1; }
	inline void set_weakClient_1(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___weakClient_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weakClient_1), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t96366F8B913DD997D9863FF0480733047608AEBB  : public RuntimeObject
{
public:
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<>c__DisplayClass7_0::initCompleteAction
	Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * ___initCompleteAction_0;

public:
	inline static int32_t get_offset_of_initCompleteAction_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass7_0_t96366F8B913DD997D9863FF0480733047608AEBB, ___initCompleteAction_0)); }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * get_initCompleteAction_0() const { return ___initCompleteAction_0; }
	inline Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 ** get_address_of_initCompleteAction_0() { return &___initCompleteAction_0; }
	inline void set_initCompleteAction_0(Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * value)
	{
		___initCompleteAction_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initCompleteAction_0), (void*)value);
	}
};


// GoogleMobileAds.Api.MobileAds/Utils
struct Utils_t7B9118A94C9E388027224E0B75BFCF04F9C5AE01  : public RuntimeObject
{
public:

public:
};


// GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c
struct U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields
{
public:
	// GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9
	U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * ___U3CU3E9_0;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_0
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_0_1;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_1
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___U3CU3E9__25_1_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_2
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_2_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_3
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_3_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_4
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_4_5;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_5
	EventHandler_1_tFF58C06B2D3A83913CDC2C2DB64F03315EE8474B * ___U3CU3E9__25_5_6;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_6
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_6_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<>9__25_7
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___U3CU3E9__25_7_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_0_1)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_0_1() const { return ___U3CU3E9__25_0_1; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_0_1() { return &___U3CU3E9__25_0_1; }
	inline void set_U3CU3E9__25_0_1(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_1_2)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_U3CU3E9__25_1_2() const { return ___U3CU3E9__25_1_2; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_U3CU3E9__25_1_2() { return &___U3CU3E9__25_1_2; }
	inline void set_U3CU3E9__25_1_2(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___U3CU3E9__25_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_2_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_2_3() const { return ___U3CU3E9__25_2_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_2_3() { return &___U3CU3E9__25_2_3; }
	inline void set_U3CU3E9__25_2_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_3_4)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_3_4() const { return ___U3CU3E9__25_3_4; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_3_4() { return &___U3CU3E9__25_3_4; }
	inline void set_U3CU3E9__25_3_4(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_4_5)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_4_5() const { return ___U3CU3E9__25_4_5; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_4_5() { return &___U3CU3E9__25_4_5; }
	inline void set_U3CU3E9__25_4_5(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_5_6)); }
	inline EventHandler_1_tFF58C06B2D3A83913CDC2C2DB64F03315EE8474B * get_U3CU3E9__25_5_6() const { return ___U3CU3E9__25_5_6; }
	inline EventHandler_1_tFF58C06B2D3A83913CDC2C2DB64F03315EE8474B ** get_address_of_U3CU3E9__25_5_6() { return &___U3CU3E9__25_5_6; }
	inline void set_U3CU3E9__25_5_6(EventHandler_1_tFF58C06B2D3A83913CDC2C2DB64F03315EE8474B * value)
	{
		___U3CU3E9__25_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_6_7)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_6_7() const { return ___U3CU3E9__25_6_7; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_6_7() { return &___U3CU3E9__25_6_7; }
	inline void set_U3CU3E9__25_6_7(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields, ___U3CU3E9__25_7_8)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_U3CU3E9__25_7_8() const { return ___U3CU3E9__25_7_8; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_U3CU3E9__25_7_8() { return &___U3CU3E9__25_7_8; }
	inline void set_U3CU3E9__25_7_8(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___U3CU3E9__25_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_7_8), (void*)value);
	}
};


// GoogleMobileAds.Api.ServerSideVerificationOptions/Builder
struct Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2  : public RuntimeObject
{
public:
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::<CustomData>k__BackingField
	String_t* ___U3CCustomDataU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2, ___U3CUserIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_0() const { return ___U3CUserIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_0() { return &___U3CUserIdU3Ek__BackingField_0; }
	inline void set_U3CUserIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCustomDataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2, ___U3CCustomDataU3Ek__BackingField_1)); }
	inline String_t* get_U3CCustomDataU3Ek__BackingField_1() const { return ___U3CCustomDataU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCustomDataU3Ek__BackingField_1() { return &___U3CCustomDataU3Ek__BackingField_1; }
	inline void set_U3CCustomDataU3Ek__BackingField_1(String_t* value)
	{
		___U3CCustomDataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomDataU3Ek__BackingField_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>
struct Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011, ___list_0)); }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * get_list_0() const { return ___list_0; }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011, ___current_3)); }
	inline MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * get_current_3() const { return ___current_3; }
	inline MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
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


// System.Collections.Generic.HashSet`1/Enumerator<System.String>
struct Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	String_t* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9, ____set_0)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9, ____current_3)); }
	inline String_t* get__current_3() const { return ____current_3; }
	inline String_t** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(String_t* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD, ___U3CMessageU3Ek__BackingField_1)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// GoogleMobileAds.Common.CustomNativeClientEventArgs
struct CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// GoogleMobileAds.Common.ICustomNativeTemplateClient GoogleMobileAds.Common.CustomNativeClientEventArgs::<nativeAdClient>k__BackingField
	RuntimeObject* ___U3CnativeAdClientU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Common.CustomNativeClientEventArgs::<assetName>k__BackingField
	String_t* ___U3CassetNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CnativeAdClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5, ___U3CnativeAdClientU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CnativeAdClientU3Ek__BackingField_1() const { return ___U3CnativeAdClientU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CnativeAdClientU3Ek__BackingField_1() { return &___U3CnativeAdClientU3Ek__BackingField_1; }
	inline void set_U3CnativeAdClientU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CnativeAdClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnativeAdClientU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CassetNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5, ___U3CassetNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CassetNameU3Ek__BackingField_2() const { return ___U3CassetNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CassetNameU3Ek__BackingField_2() { return &___U3CassetNameU3Ek__BackingField_2; }
	inline void set_U3CassetNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CassetNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetNameU3Ek__BackingField_2), (void*)value);
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// GoogleMobileAds.iOS.NativeAdTypes
struct NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6 
{
public:
	// System.Int32 GoogleMobileAds.iOS.NativeAdTypes::CustomTemplateAd
	int32_t ___CustomTemplateAd_0;

public:
	inline static int32_t get_offset_of_CustomTemplateAd_0() { return static_cast<int32_t>(offsetof(NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6, ___CustomTemplateAd_0)); }
	inline int32_t get_CustomTemplateAd_0() const { return ___CustomTemplateAd_0; }
	inline int32_t* get_address_of_CustomTemplateAd_0() { return &___CustomTemplateAd_0; }
	inline void set_CustomTemplateAd_0(int32_t value)
	{
		___CustomTemplateAd_0 = value;
	}
};


// GoogleMobileAds.Api.Reward
struct Reward_tB06AEC6535757FE50F398B42061432D88E45CC93  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Reward_tB06AEC6535757FE50F398B42061432D88E45CC93, ___U3CTypeU3Ek__BackingField_1)); }
	inline String_t* get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(String_t* value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAmountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Reward_tB06AEC6535757FE50F398B42061432D88E45CC93, ___U3CAmountU3Ek__BackingField_2)); }
	inline double get_U3CAmountU3Ek__BackingField_2() const { return ___U3CAmountU3Ek__BackingField_2; }
	inline double* get_address_of_U3CAmountU3Ek__BackingField_2() { return &___U3CAmountU3Ek__BackingField_2; }
	inline void set_U3CAmountU3Ek__BackingField_2(double value)
	{
		___U3CAmountU3Ek__BackingField_2 = value;
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___dictionary_0)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___current_3)); }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<System.DateTime>
struct Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// GoogleMobileAds.iOS.AdLoaderClient
struct AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271  : public RuntimeObject
{
public:
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderPtr
	intptr_t ___adLoaderPtr_0;
	// System.IntPtr GoogleMobileAds.iOS.AdLoaderClient::adLoaderClientPtr
	intptr_t ___adLoaderClientPtr_1;
	// GoogleMobileAds.iOS.NativeAdTypes GoogleMobileAds.iOS.AdLoaderClient::adTypes
	NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6  ___adTypes_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GoogleMobileAds.iOS.AdLoaderClient::TemplateIds
	Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * ___TemplateIds_3;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnCustomNativeTemplateAdLoaded
	EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * ___OnCustomNativeTemplateAdLoaded_4;
	// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnCustomNativeTemplateAdClicked
	EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * ___OnCustomNativeTemplateAdClicked_5;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.iOS.AdLoaderClient::OnAdFailedToLoad
	EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * ___OnAdFailedToLoad_6;

public:
	inline static int32_t get_offset_of_adLoaderPtr_0() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___adLoaderPtr_0)); }
	inline intptr_t get_adLoaderPtr_0() const { return ___adLoaderPtr_0; }
	inline intptr_t* get_address_of_adLoaderPtr_0() { return &___adLoaderPtr_0; }
	inline void set_adLoaderPtr_0(intptr_t value)
	{
		___adLoaderPtr_0 = value;
	}

	inline static int32_t get_offset_of_adLoaderClientPtr_1() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___adLoaderClientPtr_1)); }
	inline intptr_t get_adLoaderClientPtr_1() const { return ___adLoaderClientPtr_1; }
	inline intptr_t* get_address_of_adLoaderClientPtr_1() { return &___adLoaderClientPtr_1; }
	inline void set_adLoaderClientPtr_1(intptr_t value)
	{
		___adLoaderClientPtr_1 = value;
	}

	inline static int32_t get_offset_of_adTypes_2() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___adTypes_2)); }
	inline NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6  get_adTypes_2() const { return ___adTypes_2; }
	inline NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6 * get_address_of_adTypes_2() { return &___adTypes_2; }
	inline void set_adTypes_2(NativeAdTypes_t346322FEB7E6F07F4E97BF11C9AF1B75F20222A6  value)
	{
		___adTypes_2 = value;
	}

	inline static int32_t get_offset_of_TemplateIds_3() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___TemplateIds_3)); }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * get_TemplateIds_3() const { return ___TemplateIds_3; }
	inline Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C ** get_address_of_TemplateIds_3() { return &___TemplateIds_3; }
	inline void set_TemplateIds_3(Dictionary_2_t99F1CF0D8EAD35142580D7CF6EC736C063B6190C * value)
	{
		___TemplateIds_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TemplateIds_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdLoaded_4() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___OnCustomNativeTemplateAdLoaded_4)); }
	inline EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * get_OnCustomNativeTemplateAdLoaded_4() const { return ___OnCustomNativeTemplateAdLoaded_4; }
	inline EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A ** get_address_of_OnCustomNativeTemplateAdLoaded_4() { return &___OnCustomNativeTemplateAdLoaded_4; }
	inline void set_OnCustomNativeTemplateAdLoaded_4(EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * value)
	{
		___OnCustomNativeTemplateAdLoaded_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCustomNativeTemplateAdLoaded_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnCustomNativeTemplateAdClicked_5() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___OnCustomNativeTemplateAdClicked_5)); }
	inline EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * get_OnCustomNativeTemplateAdClicked_5() const { return ___OnCustomNativeTemplateAdClicked_5; }
	inline EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A ** get_address_of_OnCustomNativeTemplateAdClicked_5() { return &___OnCustomNativeTemplateAdClicked_5; }
	inline void set_OnCustomNativeTemplateAdClicked_5(EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * value)
	{
		___OnCustomNativeTemplateAdClicked_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCustomNativeTemplateAdClicked_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnAdFailedToLoad_6() { return static_cast<int32_t>(offsetof(AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271, ___OnAdFailedToLoad_6)); }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * get_OnAdFailedToLoad_6() const { return ___OnAdFailedToLoad_6; }
	inline EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF ** get_address_of_OnAdFailedToLoad_6() { return &___OnAdFailedToLoad_6; }
	inline void set_OnAdFailedToLoad_6(EventHandler_1_tCF3DEF2FE2FAEA15F20E235F1DE1EFFF670CAFCF * value)
	{
		___OnAdFailedToLoad_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAdFailedToLoad_6), (void*)value);
	}
};


// GoogleMobileAds.iOS.CustomNativeTemplateClient
struct CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19  : public RuntimeObject
{
public:
	// System.Action`1<System.String> GoogleMobileAds.iOS.CustomNativeTemplateClient::clickHandler
	Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * ___clickHandler_0;
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeAdPtr
	intptr_t ___customNativeAdPtr_1;
	// System.IntPtr GoogleMobileAds.iOS.CustomNativeTemplateClient::customNativeTemplateAdClientPtr
	intptr_t ___customNativeTemplateAdClientPtr_2;

public:
	inline static int32_t get_offset_of_clickHandler_0() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19, ___clickHandler_0)); }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * get_clickHandler_0() const { return ___clickHandler_0; }
	inline Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 ** get_address_of_clickHandler_0() { return &___clickHandler_0; }
	inline void set_clickHandler_0(Action_1_tC0D73E03177C82525D78670CDC2165F7CBF0A9C3 * value)
	{
		___clickHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clickHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_customNativeAdPtr_1() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19, ___customNativeAdPtr_1)); }
	inline intptr_t get_customNativeAdPtr_1() const { return ___customNativeAdPtr_1; }
	inline intptr_t* get_address_of_customNativeAdPtr_1() { return &___customNativeAdPtr_1; }
	inline void set_customNativeAdPtr_1(intptr_t value)
	{
		___customNativeAdPtr_1 = value;
	}

	inline static int32_t get_offset_of_customNativeTemplateAdClientPtr_2() { return static_cast<int32_t>(offsetof(CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19, ___customNativeTemplateAdClientPtr_2)); }
	inline intptr_t get_customNativeTemplateAdClientPtr_2() const { return ___customNativeTemplateAdClientPtr_2; }
	inline intptr_t* get_address_of_customNativeTemplateAdClientPtr_2() { return &___customNativeTemplateAdClientPtr_2; }
	inline void set_customNativeTemplateAdClientPtr_2(intptr_t value)
	{
		___customNativeTemplateAdClientPtr_2 = value;
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

// GoogleMobileAds.Api.Gender
struct Gender_tA04F65E8F88399153EFE8092D7F4184DAD0CB48A 
{
public:
	// System.Int32 GoogleMobileAds.Api.Gender::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Gender_tA04F65E8F88399153EFE8092D7F4184DAD0CB48A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.NativeAdType
struct NativeAdType_t596538BD006769E2E68A9027FC57911732EC2CCA 
{
public:
	// System.Int32 GoogleMobileAds.Api.NativeAdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeAdType_t596538BD006769E2E68A9027FC57911732EC2CCA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
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

// GoogleMobileAds.Api.TagForChildDirectedTreatment
struct TagForChildDirectedTreatment_t8F4CBED0EB00CA872FA7CEECD0F3F723323429FD 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForChildDirectedTreatment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TagForChildDirectedTreatment_t8F4CBED0EB00CA872FA7CEECD0F3F723323429FD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.TagForUnderAgeOfConsent
struct TagForUnderAgeOfConsent_tF8BAC9A93B7F3B0D76B527849B35014767F8C60F 
{
public:
	// System.Int32 GoogleMobileAds.Api.TagForUnderAgeOfConsent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TagForUnderAgeOfConsent_tF8BAC9A93B7F3B0D76B527849B35014767F8C60F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// GoogleMobileAds.Api.AdSize/Type
struct Type_t5FB55F9A3F501719BE9E9AA10F0394ECEC0B5092 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdSize/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t5FB55F9A3F501719BE9E9AA10F0394ECEC0B5092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GoogleMobileAds.Api.AdValue/PrecisionType
struct PrecisionType_tF821367E8B538DBD77453C405BBB9C01F5A2F867 
{
public:
	// System.Int32 GoogleMobileAds.Api.AdValue/PrecisionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrecisionType_tF821367E8B538DBD77453C405BBB9C01F5A2F867, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.Gender>
struct Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>
struct Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>
struct Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t73B690804B71062EA366B9EF731317DA6FE13907  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>
struct Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>
struct EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest
struct AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_2;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_3;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_4;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::<Gender>k__BackingField
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___U3CGenderU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___U3CMediationExtrasU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CTestDevicesU3Ek__BackingField_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_2() const { return ___U3CTestDevicesU3Ek__BackingField_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_2() { return &___U3CTestDevicesU3Ek__BackingField_2; }
	inline void set_U3CTestDevicesU3Ek__BackingField_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CKeywordsU3Ek__BackingField_3)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_3() const { return ___U3CKeywordsU3Ek__BackingField_3; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_3() { return &___U3CKeywordsU3Ek__BackingField_3; }
	inline void set_U3CKeywordsU3Ek__BackingField_3(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CBirthdayU3Ek__BackingField_4)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_4() const { return ___U3CBirthdayU3Ek__BackingField_4; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_4() { return &___U3CBirthdayU3Ek__BackingField_4; }
	inline void set_U3CBirthdayU3Ek__BackingField_4(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CGenderU3Ek__BackingField_5)); }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  get_U3CGenderU3Ek__BackingField_5() const { return ___U3CGenderU3Ek__BackingField_5; }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * get_address_of_U3CGenderU3Ek__BackingField_5() { return &___U3CGenderU3Ek__BackingField_5; }
	inline void set_U3CGenderU3Ek__BackingField_5(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  value)
	{
		___U3CGenderU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CExtrasU3Ek__BackingField_7)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_7() const { return ___U3CExtrasU3Ek__BackingField_7; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_7() { return &___U3CExtrasU3Ek__BackingField_7; }
	inline void set_U3CExtrasU3Ek__BackingField_7(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7, ___U3CMediationExtrasU3Ek__BackingField_8)); }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * get_U3CMediationExtrasU3Ek__BackingField_8() const { return ___U3CMediationExtrasU3Ek__BackingField_8; }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E ** get_address_of_U3CMediationExtrasU3Ek__BackingField_8() { return &___U3CMediationExtrasU3Ek__BackingField_8; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_8(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_8), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// GoogleMobileAds.Api.RequestConfiguration
struct RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::<TestDeviceIds>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDeviceIdsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxAdContentRatingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDeviceIdsU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback
struct GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback
struct GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.AdRequest/Builder
struct Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<TestDevices>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDevicesU3Ek__BackingField_0;
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::<Keywords>k__BackingField
	HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___U3CKeywordsU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::<Birthday>k__BackingField
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___U3CBirthdayU3Ek__BackingField_2;
	// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::<Gender>k__BackingField
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___U3CGenderU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::<ChildDirectedTreatmentTag>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::<Extras>k__BackingField
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___U3CExtrasU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::<MediationExtras>k__BackingField
	List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___U3CMediationExtrasU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CTestDevicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CTestDevicesU3Ek__BackingField_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDevicesU3Ek__BackingField_0() const { return ___U3CTestDevicesU3Ek__BackingField_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDevicesU3Ek__BackingField_0() { return &___U3CTestDevicesU3Ek__BackingField_0; }
	inline void set_U3CTestDevicesU3Ek__BackingField_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDevicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDevicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CKeywordsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CKeywordsU3Ek__BackingField_1)); }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * get_U3CKeywordsU3Ek__BackingField_1() const { return ___U3CKeywordsU3Ek__BackingField_1; }
	inline HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 ** get_address_of_U3CKeywordsU3Ek__BackingField_1() { return &___U3CKeywordsU3Ek__BackingField_1; }
	inline void set_U3CKeywordsU3Ek__BackingField_1(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * value)
	{
		___U3CKeywordsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CKeywordsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBirthdayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CBirthdayU3Ek__BackingField_2)); }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  get_U3CBirthdayU3Ek__BackingField_2() const { return ___U3CBirthdayU3Ek__BackingField_2; }
	inline Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * get_address_of_U3CBirthdayU3Ek__BackingField_2() { return &___U3CBirthdayU3Ek__BackingField_2; }
	inline void set_U3CBirthdayU3Ek__BackingField_2(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  value)
	{
		___U3CBirthdayU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CGenderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CGenderU3Ek__BackingField_3)); }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  get_U3CGenderU3Ek__BackingField_3() const { return ___U3CGenderU3Ek__BackingField_3; }
	inline Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * get_address_of_U3CGenderU3Ek__BackingField_3() { return &___U3CGenderU3Ek__BackingField_3; }
	inline void set_U3CGenderU3Ek__BackingField_3(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  value)
	{
		___U3CGenderU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() const { return ___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CChildDirectedTreatmentTagU3Ek__BackingField_4() { return &___U3CChildDirectedTreatmentTagU3Ek__BackingField_4; }
	inline void set_U3CChildDirectedTreatmentTagU3Ek__BackingField_4(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CChildDirectedTreatmentTagU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CExtrasU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CExtrasU3Ek__BackingField_5)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_U3CExtrasU3Ek__BackingField_5() const { return ___U3CExtrasU3Ek__BackingField_5; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_U3CExtrasU3Ek__BackingField_5() { return &___U3CExtrasU3Ek__BackingField_5; }
	inline void set_U3CExtrasU3Ek__BackingField_5(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___U3CExtrasU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtrasU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMediationExtrasU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3, ___U3CMediationExtrasU3Ek__BackingField_6)); }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * get_U3CMediationExtrasU3Ek__BackingField_6() const { return ___U3CMediationExtrasU3Ek__BackingField_6; }
	inline List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E ** get_address_of_U3CMediationExtrasU3Ek__BackingField_6() { return &___U3CMediationExtrasU3Ek__BackingField_6; }
	inline void set_U3CMediationExtrasU3Ek__BackingField_6(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * value)
	{
		___U3CMediationExtrasU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMediationExtrasU3Ek__BackingField_6), (void*)value);
	}
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback
struct GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback
struct GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback
struct GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback
struct GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback
struct GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback
struct GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick
struct GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback
struct GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback
struct GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback
struct GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback
struct GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback
struct GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback
struct GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback
struct GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.Api.RequestConfiguration/Builder
struct Builder_t696330B3B8E9380B4FB273313408D1568B479318  : public RuntimeObject
{
public:
	// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::<MaxAdContentRating>k__BackingField
	MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___U3CMaxAdContentRatingU3Ek__BackingField_0;
	// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForChildDirectedTreatment>k__BackingField
	Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1;
	// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::<TagForUnderAgeOfConsent>k__BackingField
	Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::<TestDeviceIds>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTestDeviceIdsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t696330B3B8E9380B4FB273313408D1568B479318, ___U3CMaxAdContentRatingU3Ek__BackingField_0)); }
	inline MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * get_U3CMaxAdContentRatingU3Ek__BackingField_0() const { return ___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 ** get_address_of_U3CMaxAdContentRatingU3Ek__BackingField_0() { return &___U3CMaxAdContentRatingU3Ek__BackingField_0; }
	inline void set_U3CMaxAdContentRatingU3Ek__BackingField_0(MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * value)
	{
		___U3CMaxAdContentRatingU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMaxAdContentRatingU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t696330B3B8E9380B4FB273313408D1568B479318, ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1)); }
	inline Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() const { return ___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1 * get_address_of_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1() { return &___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1; }
	inline void set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  value)
	{
		___U3CTagForChildDirectedTreatmentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t696330B3B8E9380B4FB273313408D1568B479318, ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2)); }
	inline Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() const { return ___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C * get_address_of_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2() { return &___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2; }
	inline void set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  value)
	{
		___U3CTagForUnderAgeOfConsentU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t696330B3B8E9380B4FB273313408D1568B479318, ___U3CTestDeviceIdsU3Ek__BackingField_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTestDeviceIdsU3Ek__BackingField_3() const { return ___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTestDeviceIdsU3Ek__BackingField_3() { return &___U3CTestDeviceIdsU3Ek__BackingField_3; }
	inline void set_U3CTestDeviceIdsU3Ek__BackingField_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTestDeviceIdsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTestDeviceIdsU3Ek__BackingField_3), (void*)value);
	}
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback
struct GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback
struct GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback
struct GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback
struct GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback
struct GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback
struct GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback
struct GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback
struct GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback
struct GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback
struct GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback
struct GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback
struct GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback
struct GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback
struct GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6  : public MulticastDelegate_t
{
public:

public:
};


// GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback
struct GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared (HashSet_1_tC7075903B74F058503994CAB008D196EF7AFB4AC * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Boolean GoogleMobileAds.Common.MobileAdsEventExecutor::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MobileAdsEventExecutor_IsActive_m50C87765445FC4C10CEFE6EA6735B2753B17688E (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mF4259D6E3EB90FA8C065C75EF9260610F4B6C74E (const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequest_m6957F0EF3E20A032C2058988E21E4E5A2991F9A3 (const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * AdRequest_get_Keywords_m857EB55B3FB34393F3857086B82CFD79389850D3_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.String>::GetEnumerator()
inline Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9  HashSet_1_GetEnumerator_m38ABEE3DF233FF329FA3AC577DB66561EA6440FF (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9  (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m97F9A0E89674F1CD23096543FC1C155B88981F45_inline (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUAddKeyword(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUAddKeyword_mE4DA5CE959E9002D0D144374934123E56EF68CAF (intptr_t ___request0, String_t* ___keyword1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_m18C0EC1C57D4FB14A739390338C535FE334D91DB (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m12C0B35807413AD316367D090DB4E3DF03A14E23 (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest::get_TestDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * AdRequest_get_TestDevices_mB88FA4D7F9A79732EF3BC5C26B13B9C5B2B7EFC0_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUAddTestDevice(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUAddTestDevice_mEAA712264827C774484215CFC9AC73E29969922A (intptr_t ___request0, String_t* ___deviceId1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest::get_Birthday()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  AdRequest_get_Birthday_m354D900829756465272645A8C40159D4A6278DA1_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.DateTime>::GetValueOrDefault()
inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	return ((  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline)(__this, method);
}
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetBirthday(System.IntPtr,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetBirthday_mF996525C45FB6D0850C1679C7243007E897C5E2E (intptr_t ___request0, int32_t ___year1, int32_t ___month2, int32_t ___day3, const RuntimeMethod* method);
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest::get_Gender()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  AdRequest_get_Gender_m14A6C9727DAFD930C89014B5D4A935A6A1C64F70_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<GoogleMobileAds.Api.Gender>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6431DA65BE64C47494B3714CCE2CD9FF1903A68E_inline (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E *, const RuntimeMethod*))Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<GoogleMobileAds.Api.Gender>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mBC6E2B478FD83538BE0FC1F0FBF7B0CE8858A9D6_inline (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetGender(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetGender_mC4F348C3E775A949A5388405F2FEC36AB141837A (intptr_t ___request0, int32_t ___genderCode1, const RuntimeMethod* method);
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest::get_TagForChildDirectedTreatment()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  AdRequest_get_TagForChildDirectedTreatment_m75AF7FF1555CB2C99114B7A4A81763D8258A227B_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUTagForChildDirectedTreatment(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUTagForChildDirectedTreatment_mC22D708D6965D8FB69649000EE6CDF274EE419E8 (intptr_t ___request0, bool ___childDirectedTreatment1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AdRequest_get_Extras_mE689EDF02245812BA4197F03D7E2CA7651E6E729_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetExtra(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetExtra_m847C69A15FE03FAB31631FA4EF65E32AAE604B8F (intptr_t ___request0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22 (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::get_MediationExtras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * AdRequest_get_MediationExtras_mE5D597F78603E95DF37D2ED12184EE90BBC9017C_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>::GetEnumerator()
inline Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011  List_1_GetEnumerator_m8385745FF3A91272EEB116EEAF25A9595221FBBA (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011  (*) (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::get_Current()
inline MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * Enumerator_get_Current_m6ADEF41140EBC6127C9C9A8BC074E6E62ABB909F_inline (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 * __this, const RuntimeMethod* method)
{
	return ((  MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * (*) (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateMutableDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateMutableDictionary_mD216148CA954C71C6A1BD8B8FB6456AD982AB82C (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::get_Extras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MediationExtras_get_Extras_m50F7541FDC0F206FA2A8BBE408878DD40EF25B35_inline (MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUMutableDictionarySetValue(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUMutableDictionarySetValue_mEF847DF058630D68DA1767E5366D8A9C3290669B (intptr_t ___mutableDictionaryPtr0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUSetMediationExtras(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetMediationExtras_m7EA3C1094770886B4DC07A6BAA5391CD2464CD32 (intptr_t ___request0, intptr_t ___mutableDictionaryPtr1, String_t* ___adNetworkExtrasClassName2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::MoveNext()
inline bool Enumerator_MoveNext_m3B005AFC48354200D861421DCAE97A38DBA0329D (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GoogleMobileAds.Api.Mediation.MediationExtras>::Dispose()
inline void Enumerator_Dispose_mEDE199192A16E3FD4F1C23CAD329947861A7BE61 (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void GoogleMobileAds.iOS.Externs::GADUSetRequestAgent(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestAgent_m85B88A715866B7A86504C4340E4F27794B3F4520 (intptr_t ___request0, String_t* ___requestAgent1, const RuntimeMethod* method);
// System.IntPtr GoogleMobileAds.iOS.Externs::GADUCreateServerSideVerificationOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateServerSideVerificationOptions_mB750CE6FD102F16C20D12D903A7BE8D00873204D (const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_UserId_mFE1250CA5EE04F52731F26E42A357111D4CE30DA_inline (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUServerSideVerificationOptionsSetUserId(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUServerSideVerificationOptionsSetUserId_mCDFCD9DC82E3E88106A6F9362D7FCB6B0F1E9BE1 (intptr_t ___options0, String_t* ___userId1, const RuntimeMethod* method);
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_CustomData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_CustomData_m48CB58190783BCA213EB55E2B91D6AEA2C3E14A4_inline (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.iOS.Externs::GADUServerSideVerificationOptionsSetCustomRewardString(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUServerSideVerificationOptionsSetCustomRewardString_mC8836537DF4182C84025BE752C495E05FE581123 (intptr_t ___options0, String_t* ___customRewardString1, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.IntPtr[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m4F64DB93BEBA642B4962F5839DEB1701316D7552 (intptr_t ___source0, IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdUnitId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_AdUnitId_mA5613929DF7B814D631F4CAEF9CE1B4EA8AEAEF5_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>::.ctor()
inline void HashSet_1__ctor_m9368F7ED2EB9E312C4EFAA3A3468C45F99FDF2DF (HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 *, const RuntimeMethod*))HashSet_1__ctor_mA1FA65D2BDDB74D6F5325CA4930F68574451ABDB_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_AdTypes_m91202D8AFEC785654DF77477288544785279536E_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TemplateIds_mECD82304F58122FC22D1407CC86A420E5231793D_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>::.ctor()
inline void Dictionary_2__ctor_mE5D6228F7847FE528A5278874EE82EA242201726 (Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_CustomNativeTemplateClickHandlers_mE4D71CC2EFD1EC2E345BEEF9B5A680433E976FEA_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::get_TemplateIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_TemplateIds_m663461872CADDC138741481A6BE46FBF9269EB0C_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370 (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *, String_t*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::get_AdTypes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * Builder_get_AdTypes_mC3CA313D65691DF99FFC4F2B604F543FC5DDE286_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>::Add(!0)
inline bool HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4 (HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 *, int32_t, const RuntimeMethod*))HashSet_1_Add_mF0E415613429EC5A13A04C9CBDD519C91B56C235_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::get_CustomNativeTemplateClickHandlers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * Builder_get_CustomNativeTemplateClickHandlers_m7775BBF7B98CE09BB8AA79941FB4D815630E1AE5_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m7918494ED49BCD2A8A65E0CDCDE1E4684F837BAC (Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * __this, String_t* ___key0, Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA *, String_t*, Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GoogleMobileAds.Api.AdLoader::.ctor(GoogleMobileAds.Api.AdLoader/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdLoader__ctor_mE0F55BAECBC8FF8783F215F86A156F0C36828437 (AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE * __this, Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * ___builder0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs__ctor_m345715EE7463D012D5E0F11145A626FD92B12803 (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_nativeAdClient(GoogleMobileAds.Common.ICustomNativeTemplateClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_mDE3A6682F838E4F359F2B1A9217573666CFC3E56_inline (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Common.CustomNativeClientEventArgs::set_assetName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m8845B29944EFA780865666EFDDAB72C01780EDDF_inline (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<GoogleMobileAds.Common.CustomNativeClientEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m815E6D1094B65D419EE7B043C7D0490EE1429246 (EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * __this, RuntimeObject * ___sender0, CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A *, RuntimeObject *, CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_TestDevices(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TestDevices_m13AA189C7ECDCBAE58D9A4350BF7022586CBF4E8_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Keywords(System.Collections.Generic.HashSet`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Keywords_m676FD44638601339034EF7B988A603CCDBF71102_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Birthday(System.Nullable`1<System.DateTime>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Birthday_m644CD2F226903137F0714949BBA9F1E15FCEBA2D_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Gender(System.Nullable`1<GoogleMobileAds.Api.Gender>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Gender_mF5F4E5945F30E1CA72DCE367C232CFE925B64E95_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_ChildDirectedTreatmentTag(System.Nullable`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_ChildDirectedTreatmentTag_m3904002F608FEA5DD9DC867C9CBD01A1F9B6C461_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Extras_m6056DD88D537CDFC447FA8E547A6A36319E858D0_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>::.ctor()
inline void List_1__ctor_mAD7C8D304C319DA0408548878CA8ECA10F71F8F2 (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_MediationExtras_m761FD70D751F9D14977B3F1F5FBD489BF61D7C9F_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_Keywords_m5B362EBCE1941C2625A0F678F938DD8658ED1EB7_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Builder_get_TestDevices_mE49BB0AEA7FAC224CD90370EA935ACA281154976_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GoogleMobileAds.Api.AdRequest::.ctor(GoogleMobileAds.Api.AdRequest/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdRequest__ctor_m450FC3130A162F34BBF8B8175EE3F82369A76308 (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * ___builder0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.DateTime>::.ctor(!0)
inline void Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 , const RuntimeMethod*))Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_gshared)(__this, ___value0, method);
}
// System.Void System.Nullable`1<GoogleMobileAds.Api.Gender>::.ctor(!0)
inline void Nullable_1__ctor_m1232505807D4AEEA102CED2308EED2BB9C03B1DB (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::get_MediationExtras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * Builder_get_MediationExtras_m2A4E33C779FAEE89660C26FFFFC86D182D8CFF3E_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>::Add(!0)
inline void List_1_Add_m249FFAF55EA92813F9F799C2D0708DF6CF490B26 (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * __this, MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E *, MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *, bool, const RuntimeMethod*))Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * Builder_get_Extras_m1DC434AE2967AA755FED534DF11243285AEDF9E8_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m08F0B8ABFF0FB8B26299257C14E1912C86049DB4 (InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * __this, RuntimeObject* ___client0, const RuntimeMethod* method);
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(!0)
inline void Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * __this, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 *, InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061 (const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_MaxAdContentRating_mC28DC77055ECCDC65F0D6367DE8DF8F234AA851A_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TagForChildDirectedTreatment_m44F80B801DC750CC95F9A6EA3C1E23B9BDA3B360_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TagForUnderAgeOfConsent_m073C0EE5E458C45FC52E51C8294AE96E40FE7A0D_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TestDeviceIds_m852D03D37A156A54A7018F230A4F18E9A4870655_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.RequestConfiguration::.ctor(GoogleMobileAds.Api.RequestConfiguration/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestConfiguration__ctor_m9FB2BCFDA5FB22433C030D17020B7606705249EC (RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843 * __this, Builder_t696330B3B8E9380B4FB273313408D1568B479318 * ___builder0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED5B910D964B6A7AB3E191A889CA94EDEAFB96D1 (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_UserId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_UserId_mD43C1D074AF95AE6CDCA932CD11AD9FBFC3EF873_inline (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_CustomData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_CustomData_mB332D6412A3F40FC4683CF6FF926DEF7B16CEAE3_inline (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::.ctor(GoogleMobileAds.Api.ServerSideVerificationOptions/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSideVerificationOptions__ctor_m79F006362323B46E434947E9D9ADC031EE88DF00 (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * __this, Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * ___builder0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Common.Utils::CheckInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CheckInitialization_mEA1FB7EA231712B3BC0D969A5F03C08A8E13B3AF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t75FD7DAC66CD027DADAA1676A4F41151B633E614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!MobileAdsEventExecutor.IsActive())
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_t75FD7DAC66CD027DADAA1676A4F41151B633E614_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = MobileAdsEventExecutor_IsActive_m50C87765445FC4C10CEFE6EA6735B2753B17688E(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// Debug.Log("You intitialized an ad object but have not yet called MobileAds.Initialize(). We " +
		//     "highly recommend you call MobileAds.Initialize() before interacting with the Google " +
		//     "Mobile Ads SDK.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB977C8ABD5DC51A9CAB375AB6B9292A8DE3E94BB, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// MobileAdsEventExecutor.Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(MobileAdsEventExecutor_t75FD7DAC66CD027DADAA1676A4F41151B633E614_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mF4259D6E3EB90FA8C065C75EF9260610F4B6C74E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Texture2D GoogleMobileAds.Common.Utils::GetTexture2DFromByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Utils_GetTexture2DFromByteArray_mAAA794B21930A5DED03A3A23D6A78B4EC02EC3FD (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___img0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B2_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B1_0 = NULL;
	{
		// Texture2D nativeAdTexture = new Texture2D(1, 1);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_0, 1, 1, /*hidden argument*/NULL);
		// if (!nativeAdTexture.LoadImage(img))
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = L_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___img0;
		bool L_3;
		L_3 = ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477(L_1, L_2, /*hidden argument*/NULL);
		G_B1_0 = L_1;
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_001b;
		}
	}
	{
		// throw new InvalidOperationException(@"Could not load custom native template
		//         image asset as texture");
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE4B457907B315DC803DC1665C4DBE73F1BC72D4)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utils_GetTexture2DFromByteArray_mAAA794B21930A5DED03A3A23D6A78B4EC02EC3FD_RuntimeMethod_var)));
	}

IL_001b:
	{
		// return nativeAdTexture;
		return G_B2_0;
	}
}
// System.Void GoogleMobileAds.Common.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m52E5C937C1C50B5E0CE8F2A6F53C369706A1B6B6 (Utils_t8060527E8EEA8CD856995A8037DE7B12BD8CBEAA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildAdRequest(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_BuildAdRequest_m469094EF1859F84E9AAF62DB47904A1396FA59E0 (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * ___request0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m12C0B35807413AD316367D090DB4E3DF03A14E23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEDE199192A16E3FD4F1C23CAD329947861A7BE61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m18C0EC1C57D4FB14A739390338C535FE334D91DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B005AFC48354200D861421DCAE97A38DBA0329D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6ADEF41140EBC6127C9C9A8BC074E6E62ABB909F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m97F9A0E89674F1CD23096543FC1C155B88981F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m38ABEE3DF233FF329FA3AC577DB66561EA6440FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m8385745FF3A91272EEB116EEAF25A9595221FBBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBC6E2B478FD83538BE0FC1F0FBF7B0CE8858A9D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6431DA65BE64C47494B3714CCE2CD9FF1903A68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9577DEB8445FE8D053AE3F3872E52153C7012A15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE13C3604EDFD154E9FF5DA6E5747DE274BC42F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  V_9;
	memset((&V_9), 0, sizeof(V_9));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011  V_11;
	memset((&V_11), 0, sizeof(V_11));
	MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * V_12 = NULL;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// IntPtr requestPtr = Externs.GADUCreateRequest();
		intptr_t L_0;
		L_0 = Externs_GADUCreateRequest_m6957F0EF3E20A032C2058988E21E4E5A2991F9A3(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// foreach (string keyword in request.Keywords)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_1 = ___request0;
		NullCheck(L_1);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2;
		L_2 = AdRequest_get_Keywords_m857EB55B3FB34393F3857086B82CFD79389850D3_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9  L_3;
		L_3 = HashSet_1_GetEnumerator_m38ABEE3DF233FF329FA3AC577DB66561EA6440FF(L_2, /*hidden argument*/HashSet_1_GetEnumerator_m38ABEE3DF233FF329FA3AC577DB66561EA6440FF_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_0014:
		{
			// foreach (string keyword in request.Keywords)
			String_t* L_4;
			L_4 = Enumerator_get_Current_m97F9A0E89674F1CD23096543FC1C155B88981F45_inline((Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m97F9A0E89674F1CD23096543FC1C155B88981F45_RuntimeMethod_var);
			V_2 = L_4;
			// Externs.GADUAddKeyword(requestPtr, keyword);
			intptr_t L_5 = V_0;
			String_t* L_6 = V_2;
			Externs_GADUAddKeyword_mE4DA5CE959E9002D0D144374934123E56EF68CAF((intptr_t)L_5, L_6, /*hidden argument*/NULL);
		}

IL_0023:
		{
			// foreach (string keyword in request.Keywords)
			bool L_7;
			L_7 = Enumerator_MoveNext_m18C0EC1C57D4FB14A739390338C535FE334D91DB((Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m18C0EC1C57D4FB14A739390338C535FE334D91DB_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0014;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m12C0B35807413AD316367D090DB4E3DF03A14E23((Enumerator_t06E200F1C75B09C9CF29C6E71ED179BE702A5FF9 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m12C0B35807413AD316367D090DB4E3DF03A14E23_RuntimeMethod_var);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// foreach (string deviceId in request.TestDevices)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_8 = ___request0;
		NullCheck(L_8);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9;
		L_9 = AdRequest_get_TestDevices_mB88FA4D7F9A79732EF3BC5C26B13B9C5B2B7EFC0_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_10;
		L_10 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_9, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_004a:
		{
			// foreach (string deviceId in request.TestDevices)
			String_t* L_11;
			L_11 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_4 = L_11;
			// Externs.GADUAddTestDevice(requestPtr, deviceId);
			intptr_t L_12 = V_0;
			String_t* L_13 = V_4;
			Externs_GADUAddTestDevice_mEAA712264827C774484215CFC9AC73E29969922A((intptr_t)L_12, L_13, /*hidden argument*/NULL);
		}

IL_005b:
		{
			// foreach (string deviceId in request.TestDevices)
			bool L_14;
			L_14 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_004a;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_3), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		// if (request.Birthday.HasValue)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_15 = ___request0;
		NullCheck(L_15);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_16;
		L_16 = AdRequest_get_Birthday_m354D900829756465272645A8C40159D4A6278DA1_inline(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		bool L_17;
		L_17 = Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_5), /*hidden argument*/Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_00b1;
		}
	}
	{
		// DateTime birthday = request.Birthday.GetValueOrDefault();
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_18 = ___request0;
		NullCheck(L_18);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_19;
		L_19 = AdRequest_get_Birthday_m354D900829756465272645A8C40159D4A6278DA1_inline(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_20;
		L_20 = Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_inline((Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D *)(&V_5), /*hidden argument*/Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_RuntimeMethod_var);
		V_6 = L_20;
		// Externs.GADUSetBirthday(requestPtr, birthday.Year, birthday.Month, birthday.Day);
		intptr_t L_21 = V_0;
		int32_t L_22;
		L_22 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_6), /*hidden argument*/NULL);
		int32_t L_23;
		L_23 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_6), /*hidden argument*/NULL);
		int32_t L_24;
		L_24 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_6), /*hidden argument*/NULL);
		Externs_GADUSetBirthday_mF996525C45FB6D0850C1679C7243007E897C5E2E((intptr_t)L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// if (request.Gender.HasValue)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_25 = ___request0;
		NullCheck(L_25);
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_26;
		L_26 = AdRequest_get_Gender_m14A6C9727DAFD930C89014B5D4A935A6A1C64F70_inline(L_25, /*hidden argument*/NULL);
		V_7 = L_26;
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m6431DA65BE64C47494B3714CCE2CD9FF1903A68E_inline((Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E *)(&V_7), /*hidden argument*/Nullable_1_get_HasValue_m6431DA65BE64C47494B3714CCE2CD9FF1903A68E_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_00d7;
		}
	}
	{
		// Externs.GADUSetGender(requestPtr, (int)request.Gender.GetValueOrDefault());
		intptr_t L_28 = V_0;
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_29 = ___request0;
		NullCheck(L_29);
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_30;
		L_30 = AdRequest_get_Gender_m14A6C9727DAFD930C89014B5D4A935A6A1C64F70_inline(L_29, /*hidden argument*/NULL);
		V_7 = L_30;
		int32_t L_31;
		L_31 = Nullable_1_GetValueOrDefault_mBC6E2B478FD83538BE0FC1F0FBF7B0CE8858A9D6_inline((Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E *)(&V_7), /*hidden argument*/Nullable_1_GetValueOrDefault_mBC6E2B478FD83538BE0FC1F0FBF7B0CE8858A9D6_RuntimeMethod_var);
		Externs_GADUSetGender_mC4F348C3E775A949A5388405F2FEC36AB141837A((intptr_t)L_28, L_31, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// if (request.TagForChildDirectedTreatment.HasValue)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_32 = ___request0;
		NullCheck(L_32);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_33;
		L_33 = AdRequest_get_TagForChildDirectedTreatment_m75AF7FF1555CB2C99114B7A4A81763D8258A227B_inline(L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		bool L_34;
		L_34 = Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_8), /*hidden argument*/Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_00fd;
		}
	}
	{
		// Externs.GADUTagForChildDirectedTreatment(
		//         requestPtr,
		//         request.TagForChildDirectedTreatment.GetValueOrDefault());
		intptr_t L_35 = V_0;
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_36 = ___request0;
		NullCheck(L_36);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_37;
		L_37 = AdRequest_get_TagForChildDirectedTreatment_m75AF7FF1555CB2C99114B7A4A81763D8258A227B_inline(L_36, /*hidden argument*/NULL);
		V_8 = L_37;
		bool L_38;
		L_38 = Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_inline((Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 *)(&V_8), /*hidden argument*/Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_RuntimeMethod_var);
		Externs_GADUTagForChildDirectedTreatment_mC22D708D6965D8FB69649000EE6CDF274EE419E8((intptr_t)L_35, L_38, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		// foreach (KeyValuePair<string, string> entry in request.Extras)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_39 = ___request0;
		NullCheck(L_39);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_40;
		L_40 = AdRequest_get_Extras_mE689EDF02245812BA4197F03D7E2CA7651E6E729_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_41;
		L_41 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_40, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
		V_9 = L_41;
	}

IL_010a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0129;
		}

IL_010c:
		{
			// foreach (KeyValuePair<string, string> entry in request.Extras)
			KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_42;
			L_42 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
			V_10 = L_42;
			// Externs.GADUSetExtra(requestPtr, entry.Key, entry.Value);
			intptr_t L_43 = V_0;
			String_t* L_44;
			L_44 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
			String_t* L_45;
			L_45 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_10), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
			Externs_GADUSetExtra_m847C69A15FE03FAB31631FA4EF65E32AAE604B8F((intptr_t)L_43, L_44, L_45, /*hidden argument*/NULL);
		}

IL_0129:
		{
			// foreach (KeyValuePair<string, string> entry in request.Extras)
			bool L_46;
			L_46 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_010c;
			}
		}

IL_0132:
		{
			IL2CPP_LEAVE(0x142, FINALLY_0134);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0134;
	}

FINALLY_0134:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
		IL2CPP_END_FINALLY(308)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(308)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x142, IL_0142)
	}

IL_0142:
	{
		// Externs.GADUSetExtra(requestPtr, "is_unity", "1");
		intptr_t L_47 = V_0;
		Externs_GADUSetExtra_m847C69A15FE03FAB31631FA4EF65E32AAE604B8F((intptr_t)L_47, _stringLiteralCE13C3604EDFD154E9FF5DA6E5747DE274BC42F1, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, /*hidden argument*/NULL);
		// foreach (MediationExtras mediationExtra in request.MediationExtras)
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_48 = ___request0;
		NullCheck(L_48);
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_49;
		L_49 = AdRequest_get_MediationExtras_mE5D597F78603E95DF37D2ED12184EE90BBC9017C_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011  L_50;
		L_50 = List_1_GetEnumerator_m8385745FF3A91272EEB116EEAF25A9595221FBBA(L_49, /*hidden argument*/List_1_GetEnumerator_m8385745FF3A91272EEB116EEAF25A9595221FBBA_RuntimeMethod_var);
		V_11 = L_50;
	}

IL_015f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d5;
		}

IL_0161:
		{
			// foreach (MediationExtras mediationExtra in request.MediationExtras)
			MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * L_51;
			L_51 = Enumerator_get_Current_m6ADEF41140EBC6127C9C9A8BC074E6E62ABB909F_inline((Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *)(&V_11), /*hidden argument*/Enumerator_get_Current_m6ADEF41140EBC6127C9C9A8BC074E6E62ABB909F_RuntimeMethod_var);
			V_12 = L_51;
			// IntPtr mutableDictionaryPtr = Externs.GADUCreateMutableDictionary();
			intptr_t L_52;
			L_52 = Externs_GADUCreateMutableDictionary_mD216148CA954C71C6A1BD8B8FB6456AD982AB82C(/*hidden argument*/NULL);
			V_13 = (intptr_t)L_52;
			// if (mutableDictionaryPtr != IntPtr.Zero)
			intptr_t L_53 = V_13;
			bool L_54;
			L_54 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_53, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_54)
			{
				goto IL_01d5;
			}
		}

IL_017f:
		{
			// foreach (KeyValuePair<string, string> entry in mediationExtra.Extras)
			MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * L_55 = V_12;
			NullCheck(L_55);
			Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_56;
			L_56 = MediationExtras_get_Extras_m50F7541FDC0F206FA2A8BBE408878DD40EF25B35_inline(L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB  L_57;
			L_57 = Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5(L_56, /*hidden argument*/Dictionary_2_GetEnumerator_m8C0A038B5FA7E62DEF4DB9EF1F5FCC4348D785C5_RuntimeMethod_var);
			V_9 = L_57;
		}

IL_018d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01ad;
			}

IL_018f:
			{
				// foreach (KeyValuePair<string, string> entry in mediationExtra.Extras)
				KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC  L_58;
				L_58 = Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_inline((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_get_Current_m45394A0B01FA26CB32851562F9CBF27DB35FF4DD_RuntimeMethod_var);
				V_14 = L_58;
				// Externs.GADUMutableDictionarySetValue(
				//         mutableDictionaryPtr,
				//         entry.Key,
				//         entry.Value);
				intptr_t L_59 = V_13;
				String_t* L_60;
				L_60 = KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Key_m42802FFFC275E928911F87B16DFE504319DF58F1_RuntimeMethod_var);
				String_t* L_61;
				L_61 = KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_inline((KeyValuePair_2_tE863694F1DB1F441CAE5A282829BDB941B2DEEBC *)(&V_14), /*hidden argument*/KeyValuePair_2_get_Value_mB6B24D3920A4744624F8ED9AE493783D0E5F81DD_RuntimeMethod_var);
				Externs_GADUMutableDictionarySetValue_mEF847DF058630D68DA1767E5366D8A9C3290669B((intptr_t)L_59, L_60, L_61, /*hidden argument*/NULL);
			}

IL_01ad:
			{
				// foreach (KeyValuePair<string, string> entry in mediationExtra.Extras)
				bool L_62;
				L_62 = Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mA57D4325DBD9D10EB3E43C99CC18DB6C3CE85FC8_RuntimeMethod_var);
				if (L_62)
				{
					goto IL_018f;
				}
			}

IL_01b6:
			{
				IL2CPP_LEAVE(0x1C6, FINALLY_01b8);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01b8;
		}

FINALLY_01b8:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22((Enumerator_tEDF5E503528903FB9B9A1D645C82789D7B8006CB *)(&V_9), /*hidden argument*/Enumerator_Dispose_m76E867298698AA2B89F9D57E21CEFCD16B372D22_RuntimeMethod_var);
			IL2CPP_END_FINALLY(440)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(440)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x1C6, IL_01c6)
		}

IL_01c6:
		{
			// Externs.GADUSetMediationExtras(
			//         requestPtr,
			//         mutableDictionaryPtr,
			//         mediationExtra.IOSMediationExtraBuilderClassName);
			intptr_t L_63 = V_0;
			intptr_t L_64 = V_13;
			MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * L_65 = V_12;
			NullCheck(L_65);
			String_t* L_66;
			L_66 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_IOSMediationExtraBuilderClassName() */, L_65);
			Externs_GADUSetMediationExtras_m7EA3C1094770886B4DC07A6BAA5391CD2464CD32((intptr_t)L_63, (intptr_t)L_64, L_66, /*hidden argument*/NULL);
		}

IL_01d5:
		{
			// foreach (MediationExtras mediationExtra in request.MediationExtras)
			bool L_67;
			L_67 = Enumerator_MoveNext_m3B005AFC48354200D861421DCAE97A38DBA0329D((Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *)(&V_11), /*hidden argument*/Enumerator_MoveNext_m3B005AFC48354200D861421DCAE97A38DBA0329D_RuntimeMethod_var);
			if (L_67)
			{
				goto IL_0161;
			}
		}

IL_01de:
		{
			IL2CPP_LEAVE(0x1EE, FINALLY_01e0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e0;
	}

FINALLY_01e0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEDE199192A16E3FD4F1C23CAD329947861A7BE61((Enumerator_t674DD96835B2053F2B4D6E9E2B96A07743673011 *)(&V_11), /*hidden argument*/Enumerator_Dispose_mEDE199192A16E3FD4F1C23CAD329947861A7BE61_RuntimeMethod_var);
		IL2CPP_END_FINALLY(480)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(480)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
	}

IL_01ee:
	{
		// Externs.GADUSetRequestAgent(requestPtr, "unity-" + AdRequest.Version);
		intptr_t L_68 = V_0;
		Externs_GADUSetRequestAgent_m85B88A715866B7A86504C4340E4F27794B3F4520((intptr_t)L_68, _stringLiteral9577DEB8445FE8D053AE3F3872E52153C7012A15, /*hidden argument*/NULL);
		// return requestPtr;
		intptr_t L_69 = V_0;
		return (intptr_t)L_69;
	}
}
// System.IntPtr GoogleMobileAds.iOS.Utils::BuildServerSideVerificationOptions(GoogleMobileAds.Api.ServerSideVerificationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_BuildServerSideVerificationOptions_mA3699DEE1F2E97826011E5D448C48B7378147FA0 (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * ___options0, const RuntimeMethod* method)
{
	{
		// IntPtr optionsPtr = Externs.GADUCreateServerSideVerificationOptions();
		intptr_t L_0;
		L_0 = Externs_GADUCreateServerSideVerificationOptions_mB750CE6FD102F16C20D12D903A7BE8D00873204D(/*hidden argument*/NULL);
		// Externs.GADUServerSideVerificationOptionsSetUserId(optionsPtr, options.UserId);
		intptr_t L_1 = (intptr_t)L_0;
		ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * L_2 = ___options0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ServerSideVerificationOptions_get_UserId_mFE1250CA5EE04F52731F26E42A357111D4CE30DA_inline(L_2, /*hidden argument*/NULL);
		Externs_GADUServerSideVerificationOptionsSetUserId_mCDFCD9DC82E3E88106A6F9362D7FCB6B0F1E9BE1((intptr_t)L_1, L_3, /*hidden argument*/NULL);
		// Externs.GADUServerSideVerificationOptionsSetCustomRewardString(optionsPtr, options.CustomData);
		intptr_t L_4 = (intptr_t)L_1;
		ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * L_5 = ___options0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ServerSideVerificationOptions_get_CustomData_m48CB58190783BCA213EB55E2B91D6AEA2C3E14A4_inline(L_5, /*hidden argument*/NULL);
		Externs_GADUServerSideVerificationOptionsSetCustomRewardString_mC8836537DF4182C84025BE752C495E05FE581123((intptr_t)L_4, L_6, /*hidden argument*/NULL);
		// return optionsPtr;
		return (intptr_t)L_4;
	}
}
// System.String GoogleMobileAds.iOS.Utils::PtrToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utils_PtrToString_m2E65A5A0A51A5391D8593304F4F6DBB6AD18CF16 (intptr_t ___stringPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string managedString = Marshal.PtrToStringAnsi(stringPtr);
		intptr_t L_0 = ___stringPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_0, /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(stringPtr);
		intptr_t L_2 = ___stringPtr0;
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_2, /*hidden argument*/NULL);
		// return managedString;
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.iOS.Utils::PtrArrayToManagedList(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Utils_PtrArrayToManagedList_m0C7BEB0E6C144C52388A74DDAE3E49A949DFB9CC (intptr_t ___arrayPtr0, int32_t ___numOfAssets1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// IntPtr[] intPtrArray = new IntPtr[numOfAssets];
		int32_t L_0 = ___numOfAssets1;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_1 = (IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6*)SZArrayNew(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// string[] managedAssetArray = new string[numOfAssets];
		int32_t L_2 = ___numOfAssets1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// Marshal.Copy(arrayPtr, intPtrArray, 0, numOfAssets);
		intptr_t L_4 = ___arrayPtr0;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_5 = V_0;
		int32_t L_6 = ___numOfAssets1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m4F64DB93BEBA642B4962F5839DEB1701316D7552((intptr_t)L_4, L_5, 0, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < numOfAssets; i++)
		V_2 = 0;
		goto IL_0032;
	}

IL_001b:
	{
		// managedAssetArray[i] = Marshal.PtrToStringAuto(intPtrArray[i]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_1;
		int32_t L_8 = V_2;
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		intptr_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2((intptr_t)L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_13);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (String_t*)L_13);
		// Marshal.FreeHGlobal(intPtrArray[i]);
		IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		intptr_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < numOfAssets; i++)
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < numOfAssets; i++)
		int32_t L_19 = V_2;
		int32_t L_20 = ___numOfAssets1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_001b;
		}
	}
	{
		// Marshal.FreeHGlobal(arrayPtr);
		intptr_t L_21 = ___arrayPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_21, /*hidden argument*/NULL);
		// return new List<string>(managedAssetArray);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = V_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_23 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_23, (RuntimeObject*)(RuntimeObject*)L_22, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		return L_23;
	}
}
// System.Void GoogleMobileAds.iOS.Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_mC9CF7C962343FF8012D7BFDC2FABA36E893D2FE4 (Utils_t895F40002F0DADCEFC8EB1896DB1767EA51EBE3F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GoogleMobileAds.Api.AdLoader/Builder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m277E156E526F4AA4F1BECC3193CD10120777A734 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___adUnitId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE5D6228F7847FE528A5278874EE82EA242201726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9368F7ED2EB9E312C4EFAA3A3468C45F99FDF2DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder(string adUnitId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.AdUnitId = adUnitId;
		String_t* L_0 = ___adUnitId0;
		Builder_set_AdUnitId_mA5613929DF7B814D631F4CAEF9CE1B4EA8AEAEF5_inline(__this, L_0, /*hidden argument*/NULL);
		// this.AdTypes = new HashSet<NativeAdType>();
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_1 = (HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 *)il2cpp_codegen_object_new(HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9368F7ED2EB9E312C4EFAA3A3468C45F99FDF2DF(L_1, /*hidden argument*/HashSet_1__ctor_m9368F7ED2EB9E312C4EFAA3A3468C45F99FDF2DF_RuntimeMethod_var);
		Builder_set_AdTypes_m91202D8AFEC785654DF77477288544785279536E_inline(__this, L_1, /*hidden argument*/NULL);
		// this.TemplateIds = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_2 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_2, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		Builder_set_TemplateIds_mECD82304F58122FC22D1407CC86A420E5231793D_inline(__this, L_2, /*hidden argument*/NULL);
		// this.CustomNativeTemplateClickHandlers =
		//         new Dictionary<string, Action<CustomNativeTemplateAd, string>>();
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_3 = (Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA *)il2cpp_codegen_object_new(Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE5D6228F7847FE528A5278874EE82EA242201726(L_3, /*hidden argument*/Dictionary_2__ctor_mE5D6228F7847FE528A5278874EE82EA242201726_RuntimeMethod_var);
		Builder_set_CustomNativeTemplateClickHandlers_mE4D71CC2EFD1EC2E345BEEF9B5A680433E976FEA_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String GoogleMobileAds.Api.AdLoader/Builder::get_AdUnitId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_get_AdUnitId_mDBE91F86CC660E9A7541697899BF94F83B94D1D4 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// internal string AdUnitId { get; private set; }
		String_t* L_0 = __this->get_U3CAdUnitIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdUnitId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_AdUnitId_mA5613929DF7B814D631F4CAEF9CE1B4EA8AEAEF5 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string AdUnitId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAdUnitIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType> GoogleMobileAds.Api.AdLoader/Builder::get_AdTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * Builder_get_AdTypes_mC3CA313D65691DF99FFC4F2B604F543FC5DDE286 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<NativeAdType> AdTypes { get; private set; }
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_0 = __this->get_U3CAdTypesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_AdTypes(System.Collections.Generic.HashSet`1<GoogleMobileAds.Api.NativeAdType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_AdTypes_m91202D8AFEC785654DF77477288544785279536E (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<NativeAdType> AdTypes { get; private set; }
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_0 = ___value0;
		__this->set_U3CAdTypesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdLoader/Builder::get_TemplateIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_TemplateIds_m663461872CADDC138741481A6BE46FBF9269EB0C (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> TemplateIds { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_U3CTemplateIdsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_TemplateIds(System.Collections.Generic.HashSet`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_TemplateIds_mECD82304F58122FC22D1407CC86A420E5231793D (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> TemplateIds { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = ___value0;
		__this->set_U3CTemplateIdsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>> GoogleMobileAds.Api.AdLoader/Builder::get_CustomNativeTemplateClickHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * Builder_get_CustomNativeTemplateClickHandlers_m7775BBF7B98CE09BB8AA79941FB4D815630E1AE5 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// get; private set;
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_0 = __this->get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdLoader/Builder::set_CustomNativeTemplateClickHandlers(System.Collections.Generic.Dictionary`2<System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_CustomNativeTemplateClickHandlers_mE4D71CC2EFD1EC2E345BEEF9B5A680433E976FEA (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * ___value0, const RuntimeMethod* method)
{
	{
		// get; private set;
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_0 = ___value0;
		__this->set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(L_0);
		return;
	}
}
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * Builder_ForCustomNativeAd_m5842B46D06881A8F2B85ED2B088BB5C90E2AD851 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___templateId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.TemplateIds.Add(templateId);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0;
		L_0 = Builder_get_TemplateIds_m663461872CADDC138741481A6BE46FBF9269EB0C_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___templateId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_0, L_1, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// this.AdTypes.Add(NativeAdType.CustomTemplate);
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_3;
		L_3 = Builder_get_AdTypes_mC3CA313D65691DF99FFC4F2B604F543FC5DDE286_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4(L_3, 0, /*hidden argument*/HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdLoader/Builder GoogleMobileAds.Api.AdLoader/Builder::ForCustomNativeAd(System.String,System.Action`2<GoogleMobileAds.Api.CustomNativeTemplateAd,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * Builder_ForCustomNativeAd_mC0DD84D3BE4DC5FCF98C6E245D7F09D159DEEE0B (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___templateId0, Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7918494ED49BCD2A8A65E0CDCDE1E4684F837BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.TemplateIds.Add(templateId);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0;
		L_0 = Builder_get_TemplateIds_m663461872CADDC138741481A6BE46FBF9269EB0C_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___templateId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_0, L_1, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// this.CustomNativeTemplateClickHandlers[templateId] = callback;
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_3;
		L_3 = Builder_get_CustomNativeTemplateClickHandlers_m7775BBF7B98CE09BB8AA79941FB4D815630E1AE5_inline(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___templateId0;
		Action_2_t06ECFDEB3E97F74A3794681DDA66AED94E41B118 * L_5 = ___callback1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m7918494ED49BCD2A8A65E0CDCDE1E4684F837BAC(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_set_Item_m7918494ED49BCD2A8A65E0CDCDE1E4684F837BAC_RuntimeMethod_var);
		// this.AdTypes.Add(NativeAdType.CustomTemplate);
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_6;
		L_6 = Builder_get_AdTypes_mC3CA313D65691DF99FFC4F2B604F543FC5DDE286_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4(L_6, 0, /*hidden argument*/HashSet_1_Add_m8AEDCA8E7B58A74107A74B9D43C72CBF3A3B49F4_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdLoader GoogleMobileAds.Api.AdLoader/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE * Builder_Build_mC0DBD9A321ACF88DC5DD196AC0E786E1C3D5EBF7 (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AdLoader(this);
		AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE * L_0 = (AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE *)il2cpp_codegen_object_new(AdLoader_tB1EF7EE61F59104F06B5F0FECF09949AB3040EFE_il2cpp_TypeInfo_var);
		AdLoader__ctor_mE0F55BAECBC8FF8783F215F86A156F0C36828437(L_0, __this, /*hidden argument*/NULL);
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
// System.Void GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m75C557F82B41C7A655DBFD59421BE943BC6CE6F4 (U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/<>c__DisplayClass23_0::<AdLoaderDidReceiveNativeCustomTemplateAdCallback>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CAdLoaderDidReceiveNativeCustomTemplateAdCallbackU3Eb__0_m2F536F1A10BA6A9F0F573A4594EE0A7211021D1D (U3CU3Ec__DisplayClass23_0_tA1ED6433732AEBA265F3A0C5DD34E88375B975AC * __this, String_t* ___assetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m815E6D1094B65D419EE7B043C7D0490EE1429246_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19 * V_0 = NULL;
	CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * V_1 = NULL;
	{
		// if (weakClient.IsAlive)
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_0 = __this->get_weakClient_1();
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// CustomNativeTemplateClient strongClient = weakClient.Target as CustomNativeTemplateClient;
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_2 = __this->get_weakClient_1();
		NullCheck(L_2);
		RuntimeObject * L_3;
		L_3 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_2);
		V_0 = ((CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19 *)IsInstClass((RuntimeObject*)L_3, CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19_il2cpp_TypeInfo_var));
		// CustomNativeClientEventArgs args = new CustomNativeClientEventArgs()
		// {
		//     nativeAdClient = strongClient,
		//     assetName = assetName
		// };
		CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * L_4 = (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 *)il2cpp_codegen_object_new(CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5_il2cpp_TypeInfo_var);
		CustomNativeClientEventArgs__ctor_m345715EE7463D012D5E0F11145A626FD92B12803(L_4, /*hidden argument*/NULL);
		CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * L_5 = L_4;
		CustomNativeTemplateClient_t5030896166BE0E1BB1694427F7A64F26C8180E19 * L_6 = V_0;
		NullCheck(L_5);
		CustomNativeClientEventArgs_set_nativeAdClient_mDE3A6682F838E4F359F2B1A9217573666CFC3E56_inline(L_5, L_6, /*hidden argument*/NULL);
		CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * L_7 = L_5;
		String_t* L_8 = ___assetName0;
		NullCheck(L_7);
		CustomNativeClientEventArgs_set_assetName_m8845B29944EFA780865666EFDDAB72C01780EDDF_inline(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_7;
		// client.OnCustomNativeTemplateAdClicked(client, args);
		AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 * L_9 = __this->get_client_0();
		NullCheck(L_9);
		EventHandler_1_tE644C273EDA92513BF6856818B3D10E72BEBDC0A * L_10 = L_9->get_OnCustomNativeTemplateAdClicked_5();
		AdLoaderClient_t283A7D2C6E3E82CE4F63C8D81AF2C92C0DE52271 * L_11 = __this->get_client_0();
		CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * L_12 = V_1;
		NullCheck(L_10);
		EventHandler_1_Invoke_m815E6D1094B65D419EE7B043C7D0490EE1429246(L_10, L_11, L_12, /*hidden argument*/EventHandler_1_Invoke_m815E6D1094B65D419EE7B043C7D0490EE1429246_RuntimeMethod_var);
	}

IL_0049:
	{
		// };
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 * __this, intptr_t ___AdLoader0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___AdLoader0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidFailToReceiveAdWithErrorCallback__ctor_m41F3A1CDD4BB471F9F445132CBEC781E6E33FA0C (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidFailToReceiveAdWithErrorCallback_Invoke_mBBBD0B3CC97885996F6E3AD04D548258BEAC32CB (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 * __this, intptr_t ___AdLoader0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___AdLoader0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___AdLoader0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___AdLoader0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___AdLoader0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___AdLoader0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___AdLoader0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___AdLoader0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdLoaderDidFailToReceiveAdWithErrorCallback_BeginInvoke_mE394FC0D3657256D12F6BE394AEF2DD35652715C (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 * __this, intptr_t ___AdLoader0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___AdLoader0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidFailToReceiveAdWithErrorCallback_EndInvoke_m4F603EC23338C7AE94E49E387F1CD8715C478AB6 (GADUAdLoaderDidFailToReceiveAdWithErrorCallback_t28968D2A3FF382CE94620518B2BCD66C7614DF41 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B * __this, intptr_t ___adLoader0, intptr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___templateID2' to native representation
	char* ____templateID2_marshaled = NULL;
	____templateID2_marshaled = il2cpp_codegen_marshal_string(___templateID2);

	// Native function invocation
	il2cppPInvokeFunc(___adLoader0, ___nativeCustomTemplateAd1, ____templateID2_marshaled);

	// Marshaling cleanup of parameter '___templateID2' native representation
	il2cpp_codegen_marshal_free(____templateID2_marshaled);
	____templateID2_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback__ctor_m421B590A04D69D3922833C750F0641452AF75A89 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::Invoke(System.IntPtr,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_Invoke_mFA0A4EF562551B4A284E830D2A0CE37214072549 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B * __this, intptr_t ___adLoader0, intptr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___adLoader0, ___nativeCustomTemplateAd1, ___templateID2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___adLoader0, ___nativeCustomTemplateAd1, ___templateID2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_BeginInvoke_mA946DDF5C1A34425E5DC472987BFFE5FF532CAD1 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B * __this, intptr_t ___adLoader0, intptr_t ___nativeCustomTemplateAd1, String_t* ___templateID2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___adLoader0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___nativeCustomTemplateAd1);
	__d_args[2] = ___templateID2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GoogleMobileAds.iOS.AdLoaderClient/GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_EndInvoke_mDD40750061F3A888946C3A06C73C778A8D421826 (GADUAdLoaderDidReceiveNativeCustomTemplateAdCallback_t057FBC84731660D1E249F2B8BEF848E712A8777B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m5975110ACBE5D35AE0D2F6D9AEA1FFD0DA5654B6 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAD7C8D304C319DA0408548878CA8ECA10F71F8F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// public Builder()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.TestDevices = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_0, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		Builder_set_TestDevices_m13AA189C7ECDCBAE58D9A4350BF7022586CBF4E8_inline(__this, L_0, /*hidden argument*/NULL);
		// this.Keywords = new HashSet<string>();
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_1 = (HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 *)il2cpp_codegen_object_new(HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818(L_1, /*hidden argument*/HashSet_1__ctor_mCC4A4964EEA7915C5CABFACB64E6A9AD82700818_RuntimeMethod_var);
		Builder_set_Keywords_m676FD44638601339034EF7B988A603CCDBF71102_inline(__this, L_1, /*hidden argument*/NULL);
		// this.Birthday = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D ));
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_2 = V_0;
		Builder_set_Birthday_m644CD2F226903137F0714949BBA9F1E15FCEBA2D_inline(__this, L_2, /*hidden argument*/NULL);
		// this.Gender = null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E ));
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_3 = V_1;
		Builder_set_Gender_mF5F4E5945F30E1CA72DCE367C232CFE925B64E95_inline(__this, L_3, /*hidden argument*/NULL);
		// this.ChildDirectedTreatmentTag = null;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 ));
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_4 = V_2;
		Builder_set_ChildDirectedTreatmentTag_m3904002F608FEA5DD9DC867C9CBD01A1F9B6C461_inline(__this, L_4, /*hidden argument*/NULL);
		// this.Extras = new Dictionary<string, string>();
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_5 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666(L_5, /*hidden argument*/Dictionary_2__ctor_mA6747E78BD4DF1D09D9091C1B3EBAE0FDB200666_RuntimeMethod_var);
		Builder_set_Extras_m6056DD88D537CDFC447FA8E547A6A36319E858D0_inline(__this, L_5, /*hidden argument*/NULL);
		// this.MediationExtras = new List<MediationExtras>();
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_6 = (List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E *)il2cpp_codegen_object_new(List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E_il2cpp_TypeInfo_var);
		List_1__ctor_mAD7C8D304C319DA0408548878CA8ECA10F71F8F2(L_6, /*hidden argument*/List_1__ctor_mAD7C8D304C319DA0408548878CA8ECA10F71F8F2_RuntimeMethod_var);
		Builder_set_MediationExtras_m761FD70D751F9D14977B3F1F5FBD489BF61D7C9F_inline(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_TestDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Builder_get_TestDevices_mE49BB0AEA7FAC224CD90370EA935ACA281154976 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDevices { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTestDevicesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_TestDevices(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_TestDevices_m13AA189C7ECDCBAE58D9A4350BF7022586CBF4E8 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDevices { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTestDevicesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_Keywords_m5B362EBCE1941C2625A0F678F938DD8658ED1EB7 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> Keywords { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_U3CKeywordsU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Keywords(System.Collections.Generic.HashSet`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Keywords_m676FD44638601339034EF7B988A603CCDBF71102 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> Keywords { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Nullable`1<System.DateTime> GoogleMobileAds.Api.AdRequest/Builder::get_Birthday()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  Builder_get_Birthday_m4976C86545D033C080B1264C1B0BF2440F2C7111 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal DateTime? Birthday { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CBirthdayU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Birthday(System.Nullable`1<System.DateTime>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Birthday_m644CD2F226903137F0714949BBA9F1E15FCEBA2D (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// internal DateTime? Birthday { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CBirthdayU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Nullable`1<GoogleMobileAds.Api.Gender> GoogleMobileAds.Api.AdRequest/Builder::get_Gender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  Builder_get_Gender_mAE73CCCB74B818688451FB2DDA21F99B35834042 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal Gender? Gender { get; private set; }
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_0 = __this->get_U3CGenderU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Gender(System.Nullable`1<GoogleMobileAds.Api.Gender>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Gender_mF5F4E5945F30E1CA72DCE367C232CFE925B64E95 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Gender? Gender { get; private set; }
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_0 = ___value0;
		__this->set_U3CGenderU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Nullable`1<System.Boolean> GoogleMobileAds.Api.AdRequest/Builder::get_ChildDirectedTreatmentTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  Builder_get_ChildDirectedTreatmentTag_m79843D37E55721D28F391035207DF2AA0E554D3C (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal bool? ChildDirectedTreatmentTag { get; private set; }
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = __this->get_U3CChildDirectedTreatmentTagU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_ChildDirectedTreatmentTag(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_ChildDirectedTreatmentTag_m3904002F608FEA5DD9DC867C9CBD01A1F9B6C461 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___value0, const RuntimeMethod* method)
{
	{
		// internal bool? ChildDirectedTreatmentTag { get; private set; }
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = ___value0;
		__this->set_U3CChildDirectedTreatmentTagU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * Builder_get_Extras_m1DC434AE2967AA755FED534DF11243285AEDF9E8 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal Dictionary<string, string> Extras { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CExtrasU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_Extras_m6056DD88D537CDFC447FA8E547A6A36319E858D0 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Dictionary<string, string> Extras { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CExtrasU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::get_MediationExtras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * Builder_get_MediationExtras_m2A4E33C779FAEE89660C26FFFFC86D182D8CFF3E (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal List<MediationExtras> MediationExtras { get; private set; }
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0 = __this->get_U3CMediationExtrasU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdRequest/Builder::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_MediationExtras_m761FD70D751F9D14977B3F1F5FBD489BF61D7C9F (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<MediationExtras> MediationExtras { get; private set; }
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0 = ___value0;
		__this->set_U3CMediationExtrasU3Ek__BackingField_6(L_0);
		return;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_AddKeyword_m174C6B0A83EBA287D1ED0183E5C5DE06E288D678 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, String_t* ___keyword0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Keywords.Add(keyword);
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0;
		L_0 = Builder_get_Keywords_m5B362EBCE1941C2625A0F678F938DD8658ED1EB7_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___keyword0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370(L_0, L_1, /*hidden argument*/HashSet_1_Add_m990F3F2EEC5E767A82AF639CD2307F4E7575B370_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddTestDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_AddTestDevice_m931479AE4E757BDB5536AFDD9C40099A66B6739C (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, String_t* ___deviceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.TestDevices.Add(deviceId);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0;
		L_0 = Builder_get_TestDevices_mE49BB0AEA7FAC224CD90370EA935ACA281154976_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___deviceId0;
		NullCheck(L_0);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_0, L_1, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * Builder_Build_m1E92AAF861E1D08CF5CF23B5E9D4A5D25DCB3D71 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AdRequest(this);
		AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * L_0 = (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 *)il2cpp_codegen_object_new(AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7_il2cpp_TypeInfo_var);
		AdRequest__ctor_m450FC3130A162F34BBF8B8175EE3F82369A76308(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetBirthday(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_SetBirthday_mF7E60B1CA9D048DAF01EBAF1AADA196DA0E6F9CC (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___birthday0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Birthday = birthday;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___birthday0;
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m084B809D8DDB34ECAD4A52744CA81FCEB46E0ADB_RuntimeMethod_var);
		Builder_set_Birthday_m644CD2F226903137F0714949BBA9F1E15FCEBA2D_inline(__this, L_1, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::SetGender(GoogleMobileAds.Api.Gender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_SetGender_m108E96FA25901A714DC28823AE26F3F3971534B4 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, int32_t ___gender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1232505807D4AEEA102CED2308EED2BB9C03B1DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Gender = gender;
		int32_t L_0 = ___gender0;
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m1232505807D4AEEA102CED2308EED2BB9C03B1DB((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m1232505807D4AEEA102CED2308EED2BB9C03B1DB_RuntimeMethod_var);
		Builder_set_Gender_mF5F4E5945F30E1CA72DCE367C232CFE925B64E95_inline(__this, L_1, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddMediationExtras(GoogleMobileAds.Api.Mediation.MediationExtras)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_AddMediationExtras_mF895C92B6A1BD5D43660F1E2850AC5513808DE5F (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * ___extras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m249FFAF55EA92813F9F799C2D0708DF6CF490B26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.MediationExtras.Add(extras);
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0;
		L_0 = Builder_get_MediationExtras_m2A4E33C779FAEE89660C26FFFFC86D182D8CFF3E_inline(__this, /*hidden argument*/NULL);
		MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * L_1 = ___extras0;
		NullCheck(L_0);
		List_1_Add_m249FFAF55EA92813F9F799C2D0708DF6CF490B26(L_0, L_1, /*hidden argument*/List_1_Add_m249FFAF55EA92813F9F799C2D0708DF6CF490B26_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::TagForChildDirectedTreatment(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_TagForChildDirectedTreatment_mC07103472E8DC60B97EDCBB40A7A14CE2552BCF3 (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, bool ___tagForChildDirectedTreatment0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.ChildDirectedTreatmentTag = tagForChildDirectedTreatment;
		bool L_0 = ___tagForChildDirectedTreatment0;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m402A94AC9070B345C95919DCFFFF627252B3E67A_RuntimeMethod_var);
		Builder_set_ChildDirectedTreatmentTag_m3904002F608FEA5DD9DC867C9CBD01A1F9B6C461_inline(__this, L_1, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * Builder_AddExtra_m1B3757F4F623D794F321EF6C19FF9FD7B5A2A1FF (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Extras.Add(key, value);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0;
		L_0 = Builder_get_Extras_m1DC434AE2967AA755FED534DF11243285AEDF9E8_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		// return this;
		return __this;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 (GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0);

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidDismissScreenCallback__ctor_mF7A9B4276D41D42AD996BFEEA191CD78B7DF83FF (GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidDismissScreenCallback_Invoke_m279CC25C2068EC20D486727F178EDAF0D52021CE (GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewDidDismissScreenCallback_BeginInvoke_mB43031ADF434D57075F68670AF84A91E68B58B1C (GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 * __this, intptr_t ___bannerClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidDismissScreenCallback_EndInvoke_m51E64F1921B4961AEFF9947C4E7CEDDB8ECF26FD (GADUAdViewDidDismissScreenCallback_tA544FCE8C31A5991329988C7ACB583C5997AFCB8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 * __this, intptr_t ___bannerClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidFailToReceiveAdWithErrorCallback__ctor_m2EC77663FD24CBFF3F89C4148EBB57DB5ABC0918 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidFailToReceiveAdWithErrorCallback_Invoke_m828E950FCB5BB5AFA7D01FF5A5A3272CCA954398 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 * __this, intptr_t ___bannerClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___bannerClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___bannerClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewDidFailToReceiveAdWithErrorCallback_BeginInvoke_mE0A31BCAFB3BAECAA9CB7A79FC169C50679184F4 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 * __this, intptr_t ___bannerClient0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidFailToReceiveAdWithErrorCallback_EndInvoke_mE2C875F6196C22CEEC09399C98FA1B86F6F305B3 (GADUAdViewDidFailToReceiveAdWithErrorCallback_t48A382C2CA2C26F978A678020DA168ABEC03B0F5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F (GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0);

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidReceiveAdCallback__ctor_m7D38E130DC8E8FA1CE15D5F14B83E7F82D1F7C6A (GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidReceiveAdCallback_Invoke_mA4666C2846A772CE741195B8236DA84A9952EF4C (GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewDidReceiveAdCallback_BeginInvoke_m77793C9F7D4B05AFEC7D5113E4B8B7DB4F32D470 (GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F * __this, intptr_t ___bannerClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewDidReceiveAdCallback_EndInvoke_m994B3AE0E05F5B24D8AC46CA54AFD8B6A5C12A36 (GADUAdViewDidReceiveAdCallback_tBA9AA22E3E720B303AC7D36439295FB4DB96337F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 (GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 * __this, intptr_t ___bannerClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewPaidEventCallback__ctor_m224FC30EF0BE31D8809E912CB64EE0984A143A7E (GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewPaidEventCallback_Invoke_m29BC281F5DB4ED35672BEC522E6C23B509F968EE (GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 * __this, intptr_t ___bannerClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3);
					else
						VirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewPaidEventCallback_BeginInvoke_mD7C830DCD55CA0F9670104FEC55D57C8A0176ADD (GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 * __this, intptr_t ___bannerClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewPaidEventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewPaidEventCallback_EndInvoke_m2D477E92A824FB5070C54A726D02B4918BA379F5 (GADUAdViewPaidEventCallback_t262ADF6B84C36D3E21416A4CD61F8FDEF6FFF990 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 (GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0);

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillLeaveApplicationCallback__ctor_m928E55D880EF511E39314C58C3E3E12C4F06BE73 (GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillLeaveApplicationCallback_Invoke_m373F19C3BA688A394BC718E1F801400D105D231D (GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewWillLeaveApplicationCallback_BeginInvoke_m17F2141C8134B9D284B633CF87C26834FF159A8C (GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 * __this, intptr_t ___bannerClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillLeaveApplicationCallback_EndInvoke_m14AC61769BAFAFAE446402C6F606DB9789BA3B09 (GADUAdViewWillLeaveApplicationCallback_tB2FA865B9273DF150E0106DE992C02FC53614AF1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F (GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___bannerClient0);

}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillPresentScreenCallback__ctor_mE22EDC8C932D2A8CDF216172B0A42DACC1CE1940 (GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillPresentScreenCallback_Invoke_m138495C20C372323E40BAEB6EE39CE3A52C828A4 (GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F * __this, intptr_t ___bannerClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bannerClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___bannerClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bannerClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bannerClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bannerClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUAdViewWillPresentScreenCallback_BeginInvoke_m24C1BBC377B4AB05954B03ADDE6E227016ADCB4B (GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F * __this, intptr_t ___bannerClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___bannerClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.BannerClient/GADUAdViewWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUAdViewWillPresentScreenCallback_EndInvoke_m416CDE0A91E5B53EDFD646D770BDC51022C4244F (GADUAdViewWillPresentScreenCallback_tA955F92470FF5E3DAC16CD5B225935CF2452549F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 (GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 * __this, intptr_t ___nativeCustomTemplateAd0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___nativeCustomTemplateAd0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUNativeCustomTemplateDidReceiveClick__ctor_m11F1A2E05CD07B875283021F18651606D31B2627 (GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUNativeCustomTemplateDidReceiveClick_Invoke_m0B7890FA649A20524C738A306E9B0BE562C0C5B9 (GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 * __this, intptr_t ___nativeCustomTemplateAd0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___nativeCustomTemplateAd0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___nativeCustomTemplateAd0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___nativeCustomTemplateAd0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___nativeCustomTemplateAd0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___nativeCustomTemplateAd0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___nativeCustomTemplateAd0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___nativeCustomTemplateAd0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUNativeCustomTemplateDidReceiveClick_BeginInvoke_m33C8D4EF271583BBA872E49773967E2DC45E1E50 (GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 * __this, intptr_t ___nativeCustomTemplateAd0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___nativeCustomTemplateAd0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.CustomNativeTemplateClient/GADUNativeCustomTemplateDidReceiveClick::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUNativeCustomTemplateDidReceiveClick_EndInvoke_m5CF25F6B05EA1C538CD078A384A028CF3AE269B3 (GADUNativeCustomTemplateDidReceiveClick_t47C6B60055B5C22DA2DFE95D0F07CBD87E929204 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 (GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback__ctor_m70A4F9AC3FA73E8DDB106204641B4A5AC4C55826 (GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback_Invoke_m5DD242709AD90865FFF046D9301FA62FC355B9E6 (GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidDismissScreenCallback_BeginInvoke_m0EE42BC5DCD4429DA1DACCED046D6D1853C9AE02 (GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 * __this, intptr_t ___interstitialClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidDismissScreenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidDismissScreenCallback_EndInvoke_m314012FB491AF815598DF6666A022EB4C61B21D5 (GADUInterstitialDidDismissScreenCallback_tF16247FF772085DC2B6619B5C5BCB40C796D2292 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF * __this, intptr_t ___interstitialClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback__ctor_m7D788454ED8DE5136F0C0D9CCC230E23044A50A0 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback_Invoke_m3427826064422FCD057E2DE04C28C1BA9F5BF434 (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF * __this, intptr_t ___interstitialClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidFailToReceiveAdWithErrorCallback_BeginInvoke_mAA5B4203C3148A96D674B01E1EB21AC59C9BC2FF (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF * __this, intptr_t ___interstitialClient0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidFailToReceiveAdWithErrorCallback_EndInvoke_m48657D59FE21744FA1C91BC3F5F7BD0E752A3EAA (GADUInterstitialDidFailToReceiveAdWithErrorCallback_t616BD125FADB8E40A7B3BC0307B3E111464B7AFF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E (GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback__ctor_mA52A84E6B139FEB18D4E3800C02828EF24D4CAC7 (GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback_Invoke_mC740915990E6E6BEFAF10152AD89E7A6598CA8EB (GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialDidReceiveAdCallback_BeginInvoke_m81A8B3A15A3A859CCEA68BDE0A8954C69F4B264B (GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E * __this, intptr_t ___interstitialClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialDidReceiveAdCallback_EndInvoke_m9AFE3C715D4A47169A7107B8FA2274821DCDDF04 (GADUInterstitialDidReceiveAdCallback_tD152AD8FE4C6D7B4D6D5E5A5A8ED38918C70976E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 (GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback__ctor_m7E02ED1A34486863B47A4BB14AEA768F34438B89 (GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback_Invoke_m0651F53BE2485FE9A9960F587BE5E0D54ABBF7A5 (GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
					else
						VirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialPaidEventCallback_BeginInvoke_m348106E9E9F1F6B262AA69E434E3185A2ADEDFC3 (GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 * __this, intptr_t ___interstitialClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialPaidEventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialPaidEventCallback_EndInvoke_m562CB60B2171701E9C64B81A490A5A851D146895 (GADUInterstitialPaidEventCallback_tD08D5AE555A045C3351374D9CE845E0859D34D83 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B (GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback__ctor_m6E662B38F79D963101E8A9A400270007CDCC7ABA (GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback_Invoke_m2C628DBF71B83CD3125CF3A6239A30C1AC4D20BE (GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialWillLeaveApplicationCallback_BeginInvoke_m6D7909DAB2F1B37089DCEB68A9EB6DCA0F643AD6 (GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B * __this, intptr_t ___interstitialClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillLeaveApplicationCallback_EndInvoke_m6BD090C09ACD41F51D65E7077A468F898576D2E2 (GADUInterstitialWillLeaveApplicationCallback_tA043E17ED3C177C684E3DF09958F31C6B42DE85B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 (GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___interstitialClient0);

}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback__ctor_m86BE014C2353C46A31731D4958E230A22C2A1D09 (GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback_Invoke_m9F3C828E79DA5135CA8C424B31520667D503B952 (GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 * __this, intptr_t ___interstitialClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___interstitialClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___interstitialClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___interstitialClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___interstitialClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___interstitialClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInterstitialWillPresentScreenCallback_BeginInvoke_m32FFCAA5AF2FFAB72B22703605E6A21EB29A02C4 (GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 * __this, intptr_t ___interstitialClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___interstitialClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.InterstitialClient/GADUInterstitialWillPresentScreenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInterstitialWillPresentScreenCallback_EndInvoke_mCAB264F0915CAB0221E3AF4BAE1F3260C97FBA86 (GADUInterstitialWillPresentScreenCallback_t9A5BA128FB73A5A04764F945730C5C0138DFC361 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void GoogleMobileAds.Api.MobileAds/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE8FA626602376ADE1A56EA539B177A16D995D17B (U3CU3Ec__DisplayClass7_0_t96366F8B913DD997D9863FF0480733047608AEBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<>c__DisplayClass7_0::<Initialize>b__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CInitializeU3Eb__0_mBC03D10744134CCC8A7B83C907D3354D0580E785 (U3CU3Ec__DisplayClass7_0_t96366F8B913DD997D9863FF0480733047608AEBB * __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (initCompleteAction != null)
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_0 = __this->get_initCompleteAction_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// initCompleteAction.Invoke(new InitializationStatus(initStatusClient));
		Action_1_t73B690804B71062EA366B9EF731317DA6FE13907 * L_1 = __this->get_initCompleteAction_0();
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 * L_3 = (InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89 *)il2cpp_codegen_object_new(InitializationStatus_t25099F37FD201500FCFEDBA176E3CE410E21DB89_il2cpp_TypeInfo_var);
		InitializationStatus__ctor_m08F0B8ABFF0FB8B26299257C14E1912C86049DB4(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A(L_1, L_3, /*hidden argument*/Action_1_Invoke_m9B3FA8E97F65A53E45AC8F6ADE0629BFFFD1226A_RuntimeMethod_var);
	}

IL_0019:
	{
		// });
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
// System.Single GoogleMobileAds.Api.MobileAds/Utils::GetDeviceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_GetDeviceScale_m84EE4F598AE8AE3ED769E847A5B4C4BF2597249A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.client.GetDeviceScale();
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_0;
		L_0 = MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_client_0();
		NullCheck(L_1);
		float L_2;
		L_2 = InterfaceFuncInvoker0< float >::Invoke(6 /* System.Single GoogleMobileAds.Common.IMobileAdsClient::GetDeviceScale() */, IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Int32 GoogleMobileAds.Api.MobileAds/Utils::GetDeviceSafeWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utils_GetDeviceSafeWidth_m79911C9DA9303DBE1AB555B20B0FF4BA13B6F7AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.client.GetDeviceSafeWidth();
		MobileAds_t0BC0844A698A1225CDED22B7DF618683849B4DB1 * L_0;
		L_0 = MobileAds_get_Instance_m313FC4B600BA83ECE2A2075C1D2DCBD8F1916061(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->get_client_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 GoogleMobileAds.Common.IMobileAdsClient::GetDeviceSafeWidth() */, IMobileAdsClient_tD6112920E0F33634DE020925E8B34164D38FDE91_il2cpp_TypeInfo_var, L_1);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F (GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___mobileAdsClient0, ___initStatusClient1);

}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback__ctor_m82EBC2B85431DFF655D6EB644506457ECFA8E090 (GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback_Invoke_mACDACCB27F7AE9E44C8E0032F38B784C61A3E346 (GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___mobileAdsClient0, ___initStatusClient1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___mobileAdsClient0, ___initStatusClient1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___mobileAdsClient0, ___initStatusClient1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___mobileAdsClient0, ___initStatusClient1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___mobileAdsClient0, ___initStatusClient1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUInitializationCompleteCallback_BeginInvoke_m380A49DF12B772B7B79A89747F671D9158ABE2BE (GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F * __this, intptr_t ___mobileAdsClient0, intptr_t ___initStatusClient1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___mobileAdsClient0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___initStatusClient1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.MobileAdsClient/GADUInitializationCompleteCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUInitializationCompleteCallback_EndInvoke_mE10DBEF9D0E1F9D67664DDDFFDB6804720E619EF (GADUInitializationCompleteCallback_tE58A90D90044364D3974DE9EA4CDB369D849385F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::get_MaxAdContentRating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * Builder_get_MaxAdContentRating_m7B1D565BBBA6F57454DD7BA37EC953976268FFA9 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	{
		// internal MaxAdContentRating MaxAdContentRating { get; private set; }
		MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * L_0 = __this->get_U3CMaxAdContentRatingU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_MaxAdContentRating_mC28DC77055ECCDC65F0D6367DE8DF8F234AA851A (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___value0, const RuntimeMethod* method)
{
	{
		// internal MaxAdContentRating MaxAdContentRating { get; private set; }
		MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * L_0 = ___value0;
		__this->set_U3CMaxAdContentRatingU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForChildDirectedTreatment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  Builder_get_TagForChildDirectedTreatment_m0776916BCED7B4A22B77AC993C9ECD08A4F076F8 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	{
		// internal TagForChildDirectedTreatment? TagForChildDirectedTreatment { get; private set; }
		Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  L_0 = __this->get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_TagForChildDirectedTreatment_m44F80B801DC750CC95F9A6EA3C1E23B9BDA3B360 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___value0, const RuntimeMethod* method)
{
	{
		// internal TagForChildDirectedTreatment? TagForChildDirectedTreatment { get; private set; }
		Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  L_0 = ___value0;
		__this->set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForUnderAgeOfConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  Builder_get_TagForUnderAgeOfConsent_mC0372D344E3F8075A759AF25C92CD7EBB3514642 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	{
		// internal TagForUnderAgeOfConsent? TagForUnderAgeOfConsent { get; private set; }
		Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  L_0 = __this->get_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_TagForUnderAgeOfConsent_m073C0EE5E458C45FC52E51C8294AE96E40FE7A0D (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___value0, const RuntimeMethod* method)
{
	{
		// internal TagForUnderAgeOfConsent? TagForUnderAgeOfConsent { get; private set; }
		Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  L_0 = ___value0;
		__this->set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TestDeviceIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Builder_get_TestDeviceIds_m3DD0723BA82247FC7E23DAED86F76D234010F4B1 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDeviceIds { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTestDeviceIdsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_TestDeviceIds_m852D03D37A156A54A7018F230A4F18E9A4870655 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDeviceIds { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTestDeviceIdsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m23B578A116D26B66377F8F3298978B23CDEB714D (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public Builder()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.MaxAdContentRating = null;
		Builder_set_MaxAdContentRating_mC28DC77055ECCDC65F0D6367DE8DF8F234AA851A_inline(__this, (MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 *)NULL, /*hidden argument*/NULL);
		// this.TagForChildDirectedTreatment = null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1 ));
		Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  L_0 = V_0;
		Builder_set_TagForChildDirectedTreatment_m44F80B801DC750CC95F9A6EA3C1E23B9BDA3B360_inline(__this, L_0, /*hidden argument*/NULL);
		// this.TagForUnderAgeOfConsent = null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C ));
		Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  L_1 = V_1;
		Builder_set_TagForUnderAgeOfConsent_m073C0EE5E458C45FC52E51C8294AE96E40FE7A0D_inline(__this, L_1, /*hidden argument*/NULL);
		// this.TestDeviceIds = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_2 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_2, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		Builder_set_TestDeviceIds_m852D03D37A156A54A7018F230A4F18E9A4870655_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetMaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t696330B3B8E9380B4FB273313408D1568B479318 * Builder_SetMaxAdContentRating_m9713AF59DB21D702E7C8CB2130FE52FCCA501349 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___maxAdContentRating0, const RuntimeMethod* method)
{
	{
		// this.MaxAdContentRating = maxAdContentRating;
		MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * L_0 = ___maxAdContentRating0;
		Builder_set_MaxAdContentRating_mC28DC77055ECCDC65F0D6367DE8DF8F234AA851A_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t696330B3B8E9380B4FB273313408D1568B479318 * Builder_SetTagForChildDirectedTreatment_mE7EFAF275C23EDF125CB3F3602D5E3A6AF03345F (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___tagForChildDirectedTreatment0, const RuntimeMethod* method)
{
	{
		// this.TagForChildDirectedTreatment = tagForChildDirectedTreatment;
		Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  L_0 = ___tagForChildDirectedTreatment0;
		Builder_set_TagForChildDirectedTreatment_m44F80B801DC750CC95F9A6EA3C1E23B9BDA3B360_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t696330B3B8E9380B4FB273313408D1568B479318 * Builder_SetTagForUnderAgeOfConsent_m5F8E0350C3668D5491D0B4AC46C73E017D1DAFD5 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___tagForUnderAgeOfConsent0, const RuntimeMethod* method)
{
	{
		// this.TagForUnderAgeOfConsent = tagForUnderAgeOfConsent;
		Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  L_0 = ___tagForUnderAgeOfConsent0;
		Builder_set_TagForUnderAgeOfConsent_m073C0EE5E458C45FC52E51C8294AE96E40FE7A0D_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTestDeviceIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t696330B3B8E9380B4FB273313408D1568B479318 * Builder_SetTestDeviceIds_m596991C49E8154A8D50146135F509EAD53437EC0 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___testDeviceIds0, const RuntimeMethod* method)
{
	{
		// this.TestDeviceIds = testDeviceIds;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___testDeviceIds0;
		Builder_set_TestDeviceIds_m852D03D37A156A54A7018F230A4F18E9A4870655_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843 * Builder_build_m927C65FD65619C6C749D1B864450385CD8366A45 (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new RequestConfiguration(this);
		RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843 * L_0 = (RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843 *)il2cpp_codegen_object_new(RequestConfiguration_tE5DC58152374805EED6CD82D0854F11E1F7EF843_il2cpp_TypeInfo_var);
		RequestConfiguration__ctor_m9FB2BCFDA5FB22433C030D17020B7606705249EC(L_0, __this, /*hidden argument*/NULL);
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
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07381440F8E91CA225671D213E28EF04A368C47F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * L_0 = (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 *)il2cpp_codegen_object_new(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mED5B910D964B6A7AB3E191A889CA94EDEAFB96D1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mED5B910D964B6A7AB3E191A889CA94EDEAFB96D1 (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_0_mD870597BBDD193861A4CED02BFFA6C235F057E8A (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdLoaded = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_1_m9F7F18999AF488DD55D1E244668F421F1CD8E578 (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, AdFailedToLoadEventArgs_tF60D9645F2EA33A81C04873C54FF119BBE983FCD * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<AdFailedToLoadEventArgs> OnAdFailedToLoad = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_2_mFED25489A28FC7BAC4CD14393DEF2A6C7C5CA95B (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdOpening = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_3_m597B6C5E2CB446C990B2164FEF9DFF9F4250B9DE (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdStarted = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_4_m7B45080CE741BFF150976FBB4384AECCF9D572AF (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdClosed = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_5(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_5_m3AC6248DA6374ABA1739F7AAF826AD5694A82C89 (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, Reward_tB06AEC6535757FE50F398B42061432D88E45CC93 * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<Reward> OnAdRewarded = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_6_mF2FD3EA340DACBF49CABCF673B8579BF5EB18CB1 (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdLeavingApplication = delegate { };
		return;
	}
}
// System.Void GoogleMobileAds.Android.RewardBasedVideoAdClient/<>c::<.ctor>b__25_7(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__25_7_mFD40D1AD52D361BB609F2A7B4F95A1F01F2AF18A (U3CU3Ec_t61570FC12385252160E0FABC915C712842FA8D46 * __this, RuntimeObject * ___U3Cp0U3E0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___U3Cp1U3E1, const RuntimeMethod* method)
{
	{
		// public event EventHandler<EventArgs> OnAdCompleted = delegate { };
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 (GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback__ctor_mFEACC8A97CAD18BC472C11B194BD554D36285903 (GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback_Invoke_m474F1A3B65B96F598EAE51C758616654067168E6 (GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidCloseCallback_BeginInvoke_m9FEDA2CDAB1C0CF381902844434C69EA338F5E17 (GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCloseCallback_EndInvoke_m0E06A82DB6F3983CBB3F69FB20F02586C6FE3BEF (GADURewardBasedVideoAdDidCloseCallback_tC86AC6D08C7095AB224A29C7EF323F99851339F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E (GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback__ctor_mD928727C24510B60E66A17BCF253221AD7533337 (GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback_Invoke_mACB8B259E5D26C65D3A14DD3A2B446C0269AF751 (GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidCompleteCallback_BeginInvoke_m4675AF259038E647ACAA33BF8795FEA11C78906B (GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidCompleteCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidCompleteCallback_EndInvoke_m052C756AE0DE956F865A580079D8F2DAA01C4404 (GADURewardBasedVideoAdDidCompleteCallback_t97894F951E2F84374EDA90ED317BE2D7F8BEE03E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback__ctor_m72B1E1D67EFDD2F85D66DE9D33D8EC21B4F31F69 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_Invoke_m84A848F19B2BBA3DD875B49297DA4BF101E2193F (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardBasedVideoClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardBasedVideoClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m6927F78195163837A1374F3FC69940FFB494B393 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C * __this, intptr_t ___rewardBasedVideoClient0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_EndInvoke_mFAE399DD2D99A8826F461CDB803D0192F0E24716 (GADURewardBasedVideoAdDidFailToReceiveAdWithErrorCallback_t7E980560A1F8A4A60A47B369AF99CA3381C4F57C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 (GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback__ctor_m461FEE2415F487D61BE855FF603D21C3ABC5C2FF (GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback_Invoke_m610A1E582935E83009996AA27072EDB2F24D1000 (GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidOpenCallback_BeginInvoke_m762A071842129214663161EB30B72811B8D8162C (GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidOpenCallback_EndInvoke_m2F6461601FB920E4C8D751F93D7EE6F1A5A86755 (GADURewardBasedVideoAdDidOpenCallback_t911EFF66FDB76370B250A415BA1AFABEFCAA8606 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 (GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback__ctor_m573D3B2EED271C446CA54E0D2E78DB8D293B92B1 (GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback_Invoke_mBD28900E017381738C94345D37E1E066D80AACB8 (GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidReceiveAdCallback_BeginInvoke_m3462EC12C42DE98F344A7984B4723DDE5B245E0E (GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidReceiveAdCallback_EndInvoke_mD31C4BD478BBB8318A488B12E5CE9D18B968EFB8 (GADURewardBasedVideoAdDidReceiveAdCallback_t5235C38943EADB05EE63DA55CE25AF1CF9F334B6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 (GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rewardType1' to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter '___rewardType1' native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback__ctor_m7D0CDE67887A650CC69ADAE24DD7EED5159976A1 (GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback_Invoke_m76981DF6AAF7EE77148FB6A6A27E4C39759A5F87 (GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidRewardCallback_BeginInvoke_m865B71F3638C2950BC54DA624C5985215BCBE9A1 (GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 * __this, intptr_t ___rewardBasedVideoAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidRewardCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidRewardCallback_EndInvoke_mE3E08B2065BC0FEE21D71E5390008749AD79ACEA (GADURewardBasedVideoAdDidRewardCallback_t0051932D77B9213F702ACF7B785683CB44E13FA5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 (GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback__ctor_mD8DFDCAE2A101F6D6F00DB09F372C74962674FCC (GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback_Invoke_mE67907308AAF9EAAD99FABD23A1A60D59EE00B69 (GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdDidStartCallback_BeginInvoke_m4ED0B9BE67CFB75BFD1EB059E9E0F64FF8ACB1F0 (GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdDidStartCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdDidStartCallback_EndInvoke_m04E1875794BFC90CF51FA10715C8B1F975BB5DB3 (GADURewardBasedVideoAdDidStartCallback_t580B689D7FD24C5CA7696F5432ABBB8F1222F192 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 (GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardBasedVideoAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback__ctor_mBA9BC5F2F004FE18D492B0B0E968D1048EFA22ED (GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback_Invoke_mC3EC454DD70BC00329C804F279D3516615706444 (GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 * __this, intptr_t ___rewardBasedVideoAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardBasedVideoAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardBasedVideoAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardBasedVideoAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardBasedVideoAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardBasedVideoAdWillLeaveApplicationCallback_BeginInvoke_mF3FD9DF359C890E9C70604FE4F000A992B0C673E (GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 * __this, intptr_t ___rewardBasedVideoAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardBasedVideoAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardBasedVideoAdClient/GADURewardBasedVideoAdWillLeaveApplicationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardBasedVideoAdWillLeaveApplicationCallback_EndInvoke_mD31E581F05E5667A80EB0E412AE95D6C4F3BAACE (GADURewardBasedVideoAdWillLeaveApplicationCallback_tC9F301E8491BA15A823E9E829F8FAA4254B541D5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 (GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback__ctor_m731DBD3CDD141F799B915EF74EA6767BB3E49C93 (GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_Invoke_m0085BC6F40BE6569E12D82F46937D2F641ABB3CC (GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidCloseCallback_BeginInvoke_mC875F29FD1B480EAA554DDD50032F92BAF44039C (GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 * __this, intptr_t ___rewardedAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidCloseCallback_EndInvoke_m2DE7B2157C3BDCFC693783D336E7AD98EDBD739C (GADURewardedAdDidCloseCallback_tB4F8E607D79BCA4CBCA60CCE04F62620922A1425 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback__ctor_m4E690310497045A39B5DB87C321A68A2A1DF42E9 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_Invoke_mB14D4DE3153C263C9E440417351D6F90A29E431F (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToReceiveAdWithErrorCallback_BeginInvoke_m7FDF3359584EA056705D6E289AB9535AD544978F (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToReceiveAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToReceiveAdWithErrorCallback_EndInvoke_m0FA5A5CCC84C5ECC6DC6A3A5BF74D2F9E404CBA4 (GADURewardedAdDidFailToReceiveAdWithErrorCallback_t5FEC726DFBFA6DEA0B7E75375F1EFB5C06636EF9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 (GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error1' to native representation
	char* ____error1_marshaled = NULL;
	____error1_marshaled = il2cpp_codegen_marshal_string(___error1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____error1_marshaled);

	// Marshaling cleanup of parameter '___error1' native representation
	il2cpp_codegen_marshal_free(____error1_marshaled);
	____error1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback__ctor_m75F0D4E70B5F1F2C32E452B5BAAE90AC59983379 (GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::Invoke(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_Invoke_m80F1E931702450DD7FF49594EA68E0F0FB8C6B04 (GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___error1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
					else
						GenericVirtActionInvoker2< intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___error1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
					else
						VirtActionInvoker2< intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___error1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___error1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::BeginInvoke(System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidFailToShowAdWithErrorCallback_BeginInvoke_mC1A6376E649B5F1639D05103F90847E4596FDA5B (GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 * __this, intptr_t ___rewardedAdClient0, String_t* ___error1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___error1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidFailToShowAdWithErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidFailToShowAdWithErrorCallback_EndInvoke_m54AA571EE0296AD613C6C41DC7A7D9B2DC8794A1 (GADURewardedAdDidFailToShowAdWithErrorCallback_tF8CA7733E4EF5A864BE194237D1B950AD3B21DB5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B (GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback__ctor_mA1FD72953F79F1BF2C6D918EEE5312ECCDF4131F (GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_Invoke_mDE9312C6A8B080AE2907C04CECDE91DBCC3ED007 (GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidOpenCallback_BeginInvoke_mE5A6E399AF72B741FBDA752FADAC525AB130C148 (GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B * __this, intptr_t ___rewardedAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidOpenCallback_EndInvoke_m696E772BCAFDD91FE557B5F90DCAC3FF2460A7F2 (GADURewardedAdDidOpenCallback_t845F14334207D13FE21E3E65F572B9E84281691B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 (GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0);

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback__ctor_mF2999D8E4678829B738AC97AD2E1A52E1E534C06 (GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_Invoke_mE42243D4A4471E65B9274308F2CC8B0D0DE2C64B (GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 * __this, intptr_t ___rewardedAdClient0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___rewardedAdClient0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdDidReceiveAdCallback_BeginInvoke_m11F38A2688113FFBA44EAC384B0C630DC7CCC0D6 (GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 * __this, intptr_t ___rewardedAdClient0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdDidReceiveAdCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdDidReceiveAdCallback_EndInvoke_m11C80B734AAAC6A45A3FA5294BFC72ABE1720171 (GADURewardedAdDidReceiveAdCallback_t9A290F1D88C1F441576CCFD512C93C3F09A00EA0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 (GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int64_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___currencyCode3' to native representation
	char* ____currencyCode3_marshaled = NULL;
	____currencyCode3_marshaled = il2cpp_codegen_marshal_string(___currencyCode3);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ___precision1, ___value2, ____currencyCode3_marshaled);

	// Marshaling cleanup of parameter '___currencyCode3' native representation
	il2cpp_codegen_marshal_free(____currencyCode3_marshaled);
	____currencyCode3_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback__ctor_m29163C741B890EDA30F036F1D38E4BC88B0203F6 (GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::Invoke(System.IntPtr,System.Int32,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback_Invoke_m0A9382B11C258796482CA43A0A4092A15BE8FD15 (GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
					else
						GenericVirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
					else
						VirtActionInvoker4< intptr_t, int32_t, int64_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int64_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___precision1, ___value2, ___currencyCode3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int64,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADURewardedAdPaidEventCallback_BeginInvoke_m178C7150F4AA189EB826A588B16241A34A0C7E84 (GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 * __this, intptr_t ___rewardedAdClient0, int32_t ___precision1, int64_t ___value2, String_t* ___currencyCode3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___precision1);
	__d_args[2] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___value2);
	__d_args[3] = ___currencyCode3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADURewardedAdPaidEventCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADURewardedAdPaidEventCallback_EndInvoke_m0F54D6A8938FD4041BE7FDB25725F69B6685F89B (GADURewardedAdPaidEventCallback_t8C687EBA107468D6CCC66CBDE4A56BBDE07919A6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A (GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, char*, double);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___rewardType1' to native representation
	char* ____rewardType1_marshaled = NULL;
	____rewardType1_marshaled = il2cpp_codegen_marshal_string(___rewardType1);

	// Native function invocation
	il2cppPInvokeFunc(___rewardedAdClient0, ____rewardType1_marshaled, ___rewardAmount2);

	// Marshaling cleanup of parameter '___rewardType1' native representation
	il2cpp_codegen_marshal_free(____rewardType1_marshaled);
	____rewardType1_marshaled = NULL;

}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback__ctor_m463817C468DA96CC4710152F3BA9BC404214FD10 (GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::Invoke(System.IntPtr,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_Invoke_m20548E4DC16B47B52487DC7080DAD39B3DB98F34 (GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, double >::Invoke(targetMethod, targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
					else
						VirtActionInvoker3< intptr_t, String_t*, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rewardedAdClient0, ___rewardType1, ___rewardAmount2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::BeginInvoke(System.IntPtr,System.String,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUUserEarnedRewardCallback_BeginInvoke_m803D6304969A744368B5526447A824E80C198A10 (GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A * __this, intptr_t ___rewardedAdClient0, String_t* ___rewardType1, double ___rewardAmount2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rewardedAdClient0);
	__d_args[1] = ___rewardType1;
	__d_args[2] = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &___rewardAmount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void GoogleMobileAds.iOS.RewardedAdClient/GADUUserEarnedRewardCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUUserEarnedRewardCallback_EndInvoke_mFCCDC3A034B9E82AC677FAB8AEC2C73C8296FE1C (GADUUserEarnedRewardCallback_t6CB68FAD3383386CAE189E6F20E9AF650609B34A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_get_UserId_mADCD2323EAC2C34D3463B4BB5F65CDB8B74DE638 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, const RuntimeMethod* method)
{
	{
		// internal string UserId { get; private set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_UserId_mD43C1D074AF95AE6CDCA932CD11AD9FBFC3EF873 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string UserId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_CustomData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Builder_get_CustomData_m2AA40874DCF95AEAFED4A7B3EFB90FA742C39A14 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, const RuntimeMethod* method)
{
	{
		// internal string CustomData { get; private set; }
		String_t* L_0 = __this->get_U3CCustomDataU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_CustomData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_set_CustomData_mB332D6412A3F40FC4683CF6FF926DEF7B16CEAE3 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string CustomData { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCustomDataU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_mF06F104F15D1546D7BCB841A45B1D0C9B3516D42 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, const RuntimeMethod* method)
{
	{
		// public Builder()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * Builder_SetUserId_m2FD987AF03A50B0AAE4F4B8877C802A601E91FCC (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		// UserId = userId;
		String_t* L_0 = ___userId0;
		Builder_set_UserId_mD43C1D074AF95AE6CDCA932CD11AD9FBFC3EF873_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetCustomData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * Builder_SetCustomData_m7E6B167A8AB729E87BCF00139B80C84B3EDFF302 (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___customData0, const RuntimeMethod* method)
{
	{
		// CustomData = customData;
		String_t* L_0 = ___customData0;
		Builder_set_CustomData_mB332D6412A3F40FC4683CF6FF926DEF7B16CEAE3_inline(__this, L_0, /*hidden argument*/NULL);
		// return this;
		return __this;
	}
}
// GoogleMobileAds.Api.ServerSideVerificationOptions GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * Builder_Build_m77AD2BFEEA4DF6F5169D948AB6656A24E1D3911E (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ServerSideVerificationOptions(this);
		ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * L_0 = (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 *)il2cpp_codegen_object_new(ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255_il2cpp_TypeInfo_var);
		ServerSideVerificationOptions__ctor_m79F006362323B46E434947E9D9ADC031EE88DF00(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * AdRequest_get_Keywords_m857EB55B3FB34393F3857086B82CFD79389850D3_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public HashSet<string> Keywords { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_U3CKeywordsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * AdRequest_get_TestDevices_mB88FA4D7F9A79732EF3BC5C26B13B9C5B2B7EFC0_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public List<string> TestDevices { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTestDevicesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  AdRequest_get_Birthday_m354D900829756465272645A8C40159D4A6278DA1_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public DateTime? Birthday { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = __this->get_U3CBirthdayU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  AdRequest_get_Gender_m14A6C9727DAFD930C89014B5D4A935A6A1C64F70_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public Gender? Gender { get; private set; }
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_0 = __this->get_U3CGenderU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  AdRequest_get_TagForChildDirectedTreatment_m75AF7FF1555CB2C99114B7A4A81763D8258A227B_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public bool? TagForChildDirectedTreatment { get; private set; }
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = __this->get_U3CTagForChildDirectedTreatmentU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * AdRequest_get_Extras_mE689EDF02245812BA4197F03D7E2CA7651E6E729_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Extras { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CExtrasU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * AdRequest_get_MediationExtras_mE5D597F78603E95DF37D2ED12184EE90BBC9017C_inline (AdRequest_tA8E89BB13F960A31B86D8F49ED056E16C071A8A7 * __this, const RuntimeMethod* method)
{
	{
		// public List<MediationExtras> MediationExtras { get; private set; }
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0 = __this->get_U3CMediationExtrasU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * MediationExtras_get_Extras_m50F7541FDC0F206FA2A8BBE408878DD40EF25B35_inline (MediationExtras_t4415F473D58DDE5EE8A2A167D3B33D5A938B3E2C * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, string> Extras { get; protected set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CExtrasU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_UserId_mFE1250CA5EE04F52731F26E42A357111D4CE30DA_inline (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * __this, const RuntimeMethod* method)
{
	{
		// public string UserId { get; private set; }
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServerSideVerificationOptions_get_CustomData_m48CB58190783BCA213EB55E2B91D6AEA2C3E14A4_inline (ServerSideVerificationOptions_t444FE708AB205DB831A5941622038A5BABAA0255 * __this, const RuntimeMethod* method)
{
	{
		// public string CustomData { get; private set; }
		String_t* L_0 = __this->get_U3CCustomDataU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_AdUnitId_mA5613929DF7B814D631F4CAEF9CE1B4EA8AEAEF5_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string AdUnitId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CAdUnitIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_AdTypes_m91202D8AFEC785654DF77477288544785279536E_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<NativeAdType> AdTypes { get; private set; }
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_0 = ___value0;
		__this->set_U3CAdTypesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TemplateIds_mECD82304F58122FC22D1407CC86A420E5231793D_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> TemplateIds { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = ___value0;
		__this->set_U3CTemplateIdsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_CustomNativeTemplateClickHandlers_mE4D71CC2EFD1EC2E345BEEF9B5A680433E976FEA_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * ___value0, const RuntimeMethod* method)
{
	{
		// get; private set;
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_0 = ___value0;
		__this->set_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_TemplateIds_m663461872CADDC138741481A6BE46FBF9269EB0C_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> TemplateIds { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_U3CTemplateIdsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * Builder_get_AdTypes_mC3CA313D65691DF99FFC4F2B604F543FC5DDE286_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<NativeAdType> AdTypes { get; private set; }
		HashSet_1_t117C1649CAD14CF0035E68017BFEC8779518D0E2 * L_0 = __this->get_U3CAdTypesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * Builder_get_CustomNativeTemplateClickHandlers_m7775BBF7B98CE09BB8AA79941FB4D815630E1AE5_inline (Builder_t570DDFE8747913C1E401D8B473F97BFE434E7933 * __this, const RuntimeMethod* method)
{
	{
		// get; private set;
		Dictionary_2_t2428F041EA6298323997A235DE7DB47108457EAA * L_0 = __this->get_U3CCustomNativeTemplateClickHandlersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_nativeAdClient_mDE3A6682F838E4F359F2B1A9217573666CFC3E56_inline (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// internal ICustomNativeTemplateClient nativeAdClient { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CnativeAdClientU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CustomNativeClientEventArgs_set_assetName_m8845B29944EFA780865666EFDDAB72C01780EDDF_inline (CustomNativeClientEventArgs_tB6D9BF3597E45E9ED0E51146832C55965AA3A5F5 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string assetName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CassetNameU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TestDevices_m13AA189C7ECDCBAE58D9A4350BF7022586CBF4E8_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDevices { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTestDevicesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Keywords_m676FD44638601339034EF7B988A603CCDBF71102_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * ___value0, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> Keywords { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = ___value0;
		__this->set_U3CKeywordsU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Birthday_m644CD2F226903137F0714949BBA9F1E15FCEBA2D_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  ___value0, const RuntimeMethod* method)
{
	{
		// internal DateTime? Birthday { get; private set; }
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_0 = ___value0;
		__this->set_U3CBirthdayU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Gender_mF5F4E5945F30E1CA72DCE367C232CFE925B64E95_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  ___value0, const RuntimeMethod* method)
{
	{
		// internal Gender? Gender { get; private set; }
		Nullable_1_t430BE877A01DD1457A1431CF481073ECEE70FF0E  L_0 = ___value0;
		__this->set_U3CGenderU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_ChildDirectedTreatmentTag_m3904002F608FEA5DD9DC867C9CBD01A1F9B6C461_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___value0, const RuntimeMethod* method)
{
	{
		// internal bool? ChildDirectedTreatmentTag { get; private set; }
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_0 = ___value0;
		__this->set_U3CChildDirectedTreatmentTagU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_Extras_m6056DD88D537CDFC447FA8E547A6A36319E858D0_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___value0, const RuntimeMethod* method)
{
	{
		// internal Dictionary<string, string> Extras { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = ___value0;
		__this->set_U3CExtrasU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_MediationExtras_m761FD70D751F9D14977B3F1F5FBD489BF61D7C9F_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<MediationExtras> MediationExtras { get; private set; }
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0 = ___value0;
		__this->set_U3CMediationExtrasU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * Builder_get_Keywords_m5B362EBCE1941C2625A0F678F938DD8658ED1EB7_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal HashSet<string> Keywords { get; private set; }
		HashSet_1_t45F75268054D01D9E70EB33D7F6D2FA609DB9229 * L_0 = __this->get_U3CKeywordsU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Builder_get_TestDevices_mE49BB0AEA7FAC224CD90370EA935ACA281154976_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDevices { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTestDevicesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * Builder_get_MediationExtras_m2A4E33C779FAEE89660C26FFFFC86D182D8CFF3E_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal List<MediationExtras> MediationExtras { get; private set; }
		List_1_tC8496B7BE5B23F09C18A35866D6634D824FD694E * L_0 = __this->get_U3CMediationExtrasU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * Builder_get_Extras_m1DC434AE2967AA755FED534DF11243285AEDF9E8_inline (Builder_t5FB78639500AE3F0ECA378CB9739728D8CE41FC3 * __this, const RuntimeMethod* method)
{
	{
		// internal Dictionary<string, string> Extras { get; private set; }
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_0 = __this->get_U3CExtrasU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_MaxAdContentRating_mC28DC77055ECCDC65F0D6367DE8DF8F234AA851A_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * ___value0, const RuntimeMethod* method)
{
	{
		// internal MaxAdContentRating MaxAdContentRating { get; private set; }
		MaxAdContentRating_tF1710AA16BEE16817790743FC514BE510E0F00A6 * L_0 = ___value0;
		__this->set_U3CMaxAdContentRatingU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TagForChildDirectedTreatment_m44F80B801DC750CC95F9A6EA3C1E23B9BDA3B360_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  ___value0, const RuntimeMethod* method)
{
	{
		// internal TagForChildDirectedTreatment? TagForChildDirectedTreatment { get; private set; }
		Nullable_1_tE4DC385B7CD1F8044AB1FA159FBCC326BA2632A1  L_0 = ___value0;
		__this->set_U3CTagForChildDirectedTreatmentU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TagForUnderAgeOfConsent_m073C0EE5E458C45FC52E51C8294AE96E40FE7A0D_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  ___value0, const RuntimeMethod* method)
{
	{
		// internal TagForUnderAgeOfConsent? TagForUnderAgeOfConsent { get; private set; }
		Nullable_1_t9F742211EC163744534223F6C2A07BB043815F3C  L_0 = ___value0;
		__this->set_U3CTagForUnderAgeOfConsentU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_TestDeviceIds_m852D03D37A156A54A7018F230A4F18E9A4870655_inline (Builder_t696330B3B8E9380B4FB273313408D1568B479318 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		// internal List<string> TestDeviceIds { get; private set; }
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTestDeviceIdsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_UserId_mD43C1D074AF95AE6CDCA932CD11AD9FBFC3EF873_inline (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string UserId { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_CustomData_mB332D6412A3F40FC4683CF6FF926DEF7B16CEAE3_inline (Builder_t00551A5F38113C39FB87B996122ACE7AEC8BC5C2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// internal string CustomData { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CCustomDataU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD66F13A0E84DB109506E6969846A76CF62CCBB9F_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Nullable_1_GetValueOrDefault_mC63D1129C133CFFD462EEE344A2AE34B29C1E881_gshared_inline (Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )__this->get_value_0();
		return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m52F33C6963C9A76A14F54B4B2C30CEF580DB1EB7_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mBECC58FEFD1088EC070D9F9A892ECD1D8BBF2A0F_gshared_inline (Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
