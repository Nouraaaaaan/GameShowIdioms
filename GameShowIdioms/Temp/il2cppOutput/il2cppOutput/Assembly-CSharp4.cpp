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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Action`1<LTEvent>[]
struct Action_1U5BU5D_t930658157BBD9409C35E85E5A34B23FC4EEF0772;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// HintButton[]
struct HintButtonU5BU5D_t326B9488C75B74AD927B7B34759512F840CC062D;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LTBezier[]
struct LTBezierU5BU5D_t4DDB3352316B2B476AEEE5AB4F760513856FC153;
// LTDescr[]
struct LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F;
// LTSeq[]
struct LTSeqU5BU5D_t5C740B5E327381CE2E6FD41B011EA9A72355FD51;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// LTBezierPath
struct LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48;
// LTDescr
struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F;
// LTDescrOptional
struct LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2;
// LTSeq
struct LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222;
// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// SFXManager
struct SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TestingPunch
struct TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232;
// DentedPixel.LTExamples.TestingUnitTests
struct TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05;
// LTDescr/EaseTypeDelegate
struct EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF;
// Purchaser/<>c
struct U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80;
// SFXManager/<FadeOutExtraMusicCorotinue>d__20
struct U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D;
// SFXManager/<FadeOutMusicCorotinue>d__18
struct U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9;
// TestingPunch/<>c
struct U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB;
// TestingPunch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t038683C2E93B5073D484142AB01DE825CEEDBEBD;
// TestingPunch/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A;
// TestingPunch/<>c__DisplayClass4_2
struct U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05;
// DentedPixel.LTExamples.TestingUnitTests/<>c
struct U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104;
// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F;
// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973;
// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2
struct U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8;
// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F;
// DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25
struct U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523;
// DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26
struct U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB;
// DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24
struct U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65;
// TestingZLegacy/<>c
struct U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC;
// TestingZLegacy/NextFunc
struct NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6;
// TestingZLegacyExt/<>c
struct U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB;
// TestingZLegacyExt/NextFunc
struct NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840;
// UIManager/<RoundEndCanvasFadeoutCorotinue>d__44
struct U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE;
// UIManager/<ScreenFadeoutCorotinue>d__41
struct U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0070427F15A7841B6D3AE5A0D33F978D11D7CE36;
IL2CPP_EXTERN_C String_t* _stringLiteral0076205629A72E069952802FAC88D7B7E04C374E;
IL2CPP_EXTERN_C String_t* _stringLiteral03AE9F9374F47964A1252702DAE45F2F1AFE6594;
IL2CPP_EXTERN_C String_t* _stringLiteral054ECB33E7A72BEF7A12619E9442A896E378C001;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1B41B6302D85AD7E0467C845E6803B91C37E84;
IL2CPP_EXTERN_C String_t* _stringLiteral0C514DBFB1623568AF3AB056CEF5CAEE603EACCC;
IL2CPP_EXTERN_C String_t* _stringLiteral0D9F3BAD2D69E69BE0B30C05910ADBEBB3F0FF1E;
IL2CPP_EXTERN_C String_t* _stringLiteral12B6B7B4F3601CD4296CB8827F52001F5D20F0E8;
IL2CPP_EXTERN_C String_t* _stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D;
IL2CPP_EXTERN_C String_t* _stringLiteral15582F4B8AA080A197E59A552112133088EB00E5;
IL2CPP_EXTERN_C String_t* _stringLiteral15C0F39550671E04B2211B1FB5ED4D04EE3D9956;
IL2CPP_EXTERN_C String_t* _stringLiteral166873FA58C79EECACCC3F634083C3C30C3948B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1762F65938A4012333F49B64AEDFAE67F528977F;
IL2CPP_EXTERN_C String_t* _stringLiteral17C26F0EFE2E81C54BF0CFC5CC5477D550808751;
IL2CPP_EXTERN_C String_t* _stringLiteral18F7E16FE815D1533663FFC7EF9E10A857E5058A;
IL2CPP_EXTERN_C String_t* _stringLiteral193B648638220DE3053E8DA46D557FB0972032D8;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6B8C03370E8657EF552577A1881EC1E02FFD6B;
IL2CPP_EXTERN_C String_t* _stringLiteral1F715F23BD75828F2448CE03DCA7B360394B7A33;
IL2CPP_EXTERN_C String_t* _stringLiteral2477B49ED399DEAB0CDF36A36AC51A15B9FFE5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral25CA44678DB79FF05E2D57A895F5618A234017D8;
IL2CPP_EXTERN_C String_t* _stringLiteral261ACB2106F990D8E8F01CB03AF7BCC11478F162;
IL2CPP_EXTERN_C String_t* _stringLiteral26329FD8F219A432D5CB713950D52C4816FD1D8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2933DEAB5560795F74FE212799E599690DC39920;
IL2CPP_EXTERN_C String_t* _stringLiteral29358036B755C5E42BBDCEDD3094CF416ABD47AF;
IL2CPP_EXTERN_C String_t* _stringLiteral299556C0F8738146558B01FAC5054AB5E5DFDD3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2CBBBABFF090897BA30A171FEE392F7A108D637C;
IL2CPP_EXTERN_C String_t* _stringLiteral2D6F1C34CA7FBAD59A8E0E077842E56427D7EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8A4E6C67BB356F24EC7A0DC4FD2DBB4D40E7AD;
IL2CPP_EXTERN_C String_t* _stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F;
IL2CPP_EXTERN_C String_t* _stringLiteral30C910821A5F194270E5086005673EF9E59D5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral30CA70C2624A7D416142E2F8DC62C74326F4E92C;
IL2CPP_EXTERN_C String_t* _stringLiteral31BDB52E883B39E5065C7D38488BB610500016A7;
IL2CPP_EXTERN_C String_t* _stringLiteral320CC8127D05325B5B8F6C20C56ED895D39B1B45;
IL2CPP_EXTERN_C String_t* _stringLiteral365D36E38E3E47189D9C43AD3D8C24789722C77B;
IL2CPP_EXTERN_C String_t* _stringLiteral383D6B116B6EC7FE3979EFDDC474520C9D37E4A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2CB3E5DBEA6AF61E89A9C95C8B64690A090329;
IL2CPP_EXTERN_C String_t* _stringLiteral3A767C255A8308DD2A5E30E6D3473B0D476A7C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6CEF8A6A2B0354C7E284187BD6AA1C738A03F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3FEF1792B9532DC34F4C8EA4AFFA04438A150AEB;
IL2CPP_EXTERN_C String_t* _stringLiteral40D474CF9A30068217E162C157D7906826217E9C;
IL2CPP_EXTERN_C String_t* _stringLiteral433247743C67C49F69E3661FCF838C918D4CA0D7;
IL2CPP_EXTERN_C String_t* _stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral4E4D87860C2409D6EEA191FE80804151C447DB84;
IL2CPP_EXTERN_C String_t* _stringLiteral5035C316076D600317568041B8D0EE93239A8E85;
IL2CPP_EXTERN_C String_t* _stringLiteral573E191E68B66CB5E69FE2EE1EDFEFAE08B4F656;
IL2CPP_EXTERN_C String_t* _stringLiteral5B77E04340DAC8F383FAF5644A70CCAACA8F3272;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA7243693E644D8D1EF47835EAC484D6577B955;
IL2CPP_EXTERN_C String_t* _stringLiteral5E7BE15CBB4129EB2BCA5BD1C4F3FD342E430BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral605A1853E7B93DF58AFCDA9E142FAB5294BD0F90;
IL2CPP_EXTERN_C String_t* _stringLiteral64B8F9AFB9BA6D501BDBEE9ED04481965043A220;
IL2CPP_EXTERN_C String_t* _stringLiteral64F693191FCAFE821C893B1E0C74992E344BF68F;
IL2CPP_EXTERN_C String_t* _stringLiteral682F51FCFC42802C922A93552316C231D838E07E;
IL2CPP_EXTERN_C String_t* _stringLiteral6AA6E6EE2CDD114F115512EC28E5650B245E46A4;
IL2CPP_EXTERN_C String_t* _stringLiteral6B4D3CAA45BB63CB479EFC84BB2C5858DCDFC931;
IL2CPP_EXTERN_C String_t* _stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51;
IL2CPP_EXTERN_C String_t* _stringLiteral6E85C99F95958ABF389464D91EB45F62FB36BB18;
IL2CPP_EXTERN_C String_t* _stringLiteral6FBC82F2ABDF6A052A98DF1892427C16C41F166C;
IL2CPP_EXTERN_C String_t* _stringLiteral73BEC9BE68F92E60666B28D9030C77A9AC723E9D;
IL2CPP_EXTERN_C String_t* _stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90;
IL2CPP_EXTERN_C String_t* _stringLiteral748E4624D89DD28013A603527AACDDA3AB822F84;
IL2CPP_EXTERN_C String_t* _stringLiteral75AB274405637E850F72A72E7849E000990C343F;
IL2CPP_EXTERN_C String_t* _stringLiteral76AFFA5990663B0AA27EB6C77A7CA99AB25DD2D3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C50F197C0EDAFDDF10DB6A380FDFDA6388DAD2D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EDCC8B6E6096254F6F3E6E216E0153A6E061665;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7CE377110056B91CE0A004D9CF76B4A6F91BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1;
IL2CPP_EXTERN_C String_t* _stringLiteral842B7FA7C05F3F0DFE38170C7F1CC8095629B14E;
IL2CPP_EXTERN_C String_t* _stringLiteral85A581B5266ADD3C3E6A78C80AB2AE41D24AFB62;
IL2CPP_EXTERN_C String_t* _stringLiteral8680BF608BF8E528145E5BEFAB9997621402A9B0;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C253B1BA60B28FF276877A6B8D34443662D85EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8CA011F0274A7D5D7116E65518B011C365912846;
IL2CPP_EXTERN_C String_t* _stringLiteral905F9300A1B5F4CC937ABBA19CD6F08103CC341E;
IL2CPP_EXTERN_C String_t* _stringLiteral912BA61CA2922DDEAF5273D0B40C8EE86C87E30F;
IL2CPP_EXTERN_C String_t* _stringLiteral95B323F78A74BCD68F5E49F4D09087DF0FED1ECA;
IL2CPP_EXTERN_C String_t* _stringLiteral95F92F72CECC4F3BFC0B2E2CDF576AE6A2BBEC4A;
IL2CPP_EXTERN_C String_t* _stringLiteral99CEEF1128192281389799CF8A416030191F59B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA434C5FDB2624BE6A708D41D99D0D83AE633761A;
IL2CPP_EXTERN_C String_t* _stringLiteralAAE246312AC11CFCE0F3BD45109630DC88C6E812;
IL2CPP_EXTERN_C String_t* _stringLiteralABE8A646ADF732BDA5643F4609CB378C929C203E;
IL2CPP_EXTERN_C String_t* _stringLiteralADAB81935C4590B46D06F34818694503A134E549;
IL2CPP_EXTERN_C String_t* _stringLiteralAE31F1B2685BB626B1A73E58DC30879102D901A6;
IL2CPP_EXTERN_C String_t* _stringLiteralAFB8152FD39A60A624A32A2658AA10A448DA4830;
IL2CPP_EXTERN_C String_t* _stringLiteralB1373FA6C475D51DA7086BA8E9AC6F417FBE8E85;
IL2CPP_EXTERN_C String_t* _stringLiteralB193D0EB8CC0E20180692325991A5981A85DB7C7;
IL2CPP_EXTERN_C String_t* _stringLiteralB6109C38A4FFBC81D5C91E19A5C84D95753D14A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB73B20992382CBBAEAA1E3365F70F9CDD3075214;
IL2CPP_EXTERN_C String_t* _stringLiteralBB60AA783571BBF1FED1FED29F2C637208CE8F05;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7E2F155D96E8C5667B65CABA3761D052B93971;
IL2CPP_EXTERN_C String_t* _stringLiteralBF9F2B43CB2AB8F134223C3CEF64A2DC09AB6DF1;
IL2CPP_EXTERN_C String_t* _stringLiteralC35E4C83C96EAC263B8E637517709F326674F621;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2724371272629540F964B3A61D8CA55A5610B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCB71F660819A30904340C16426A4989B66917481;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFCAE7FD17CE1911D98D24E3BFEEE04C8E33B28;
IL2CPP_EXTERN_C String_t* _stringLiteralCD84D90EF77649501697C0B71DD2701CB16B0541;
IL2CPP_EXTERN_C String_t* _stringLiteralD480F1A63BC289A30F2A7349B24AB0C111BE1FEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5C9CE5DF332772EE8351ACDE3FFCA560E24848;
IL2CPP_EXTERN_C String_t* _stringLiteralDDC3CBB800E1696318F7A2D2BFC6DB2D0DCA50A7;
IL2CPP_EXTERN_C String_t* _stringLiteralE83D8CDEF1AD792E6FCEC7085586D3B6C6567E66;
IL2CPP_EXTERN_C String_t* _stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54;
IL2CPP_EXTERN_C String_t* _stringLiteralEB22FDF7BF45D933EDC4EF4D1AD8751DFE24B84F;
IL2CPP_EXTERN_C String_t* _stringLiteralED6E009D99193CEFB7D1ECD7EB017930B305D417;
IL2CPP_EXTERN_C String_t* _stringLiteralEECB605F90ED8F6CDA2E3414A47E05104F1FBF46;
IL2CPP_EXTERN_C String_t* _stringLiteralF070E687D86BC58CB42345E604D3AA8ECE7C65D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF2BA8FA019EFFDC8F943B8DD77CE3A19BD89F994;
IL2CPP_EXTERN_C String_t* _stringLiteralF52065059197814464AD635B7503F7788CBA31A5;
IL2CPP_EXTERN_C String_t* _stringLiteralF670642A8E3D41D38EEDDDB6D1731BA1E544EBD9;
IL2CPP_EXTERN_C String_t* _stringLiteralF848094AB1141176CC1C2356C0381C85A4B63A32;
IL2CPP_EXTERN_C String_t* _stringLiteralF8CD5DADAC6BB74531BAEF6E3883C1F24906F125;
IL2CPP_EXTERN_C String_t* _stringLiteralFB17E60BA61E3F25DF6D13AE910403ACA8682599;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestingUnitTests_U3ClotsOfCancelsU3Eb__25_0_m79612DDE2FFAD2A0986AA0D91A768BA96269D4F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestingUnitTests_U3CpauseTimeNowU3Eb__26_1_mB0C630E660D38F819734F11E2998CDE43590D503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestingUnitTests_rotateRepeatAllFinished_mA343A62B2E6F1D84DAD61BF7DAD6DDC4F24A5077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestingUnitTests_rotateRepeatFinished_m3ED0D0A9DF982711F7D8D670535F1136CB7E3BA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutExtraMusicCorotinueU3Ed__20_System_Collections_IEnumerator_Reset_mFBC5357D7E36FEBB552B0F6C92209532E95A69AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutMusicCorotinueU3Ed__18_System_Collections_IEnumerator_Reset_mF3B922DCE4E5282D69FF032BAA8B54F8B0A1B491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_Collections_IEnumerator_Reset_mE4A2111B743E2E02E95230AEF6E6E188278DF2A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScreenFadeoutCorotinueU3Ed__41_System_Collections_IEnumerator_Reset_m14ACC9BCD2D3171C5FB1EA6079DF9181737EAE62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__22_22_mCFEF8C7D30A25EAB5E114C737BF1D2A30D599CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CpauseTimeNowU3Eb__26_0_mE763C76C7D6AEEAAB8A0C84892C1D42F508144EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__21_mD56FCF9AA4FAE66DF497E1779D9334E757A222E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_1_U3CStartU3Eb__23_m71B69B2DE70762D5765B748E1B062290289D9195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__0_mB82E5FEE09CC712C778F6A007B14D3D455256ECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__10_m91860D812373862DCCD33D1D479A52867ED3CC02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__11_m9D776D70F7B40CB7DB069BE5D095C281D59F2713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__12_mB40AAAC5766C52276E4F9A375DB379DBE62012FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__13_mFFA8F8E7E5F79A608E1C2216AA8D1B734A758093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__14_m0D4E422B37F43F7D3ACECDE81ADD5A18D4C97EE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__15_mE41B0CD588F01B0A76360EBD332CFAF425E20931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__16_mEA9C490B5AEA717E999FFF3DD2CB25B23966277E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__1_m8D5BED91D3EE4A8C0C0DF77D2B62F903C3E20D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__2_mB677486A14C58435757062820302D43BCC02D144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__3_m3987A57ECD0F50AB39FEF707C42D9710AA3CFB2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__4_m87D8E7758DA9C355EE513F9775D9F4B4C387BB56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__5_m2B18F0F9B914A675CEEA356DCFF478B4F5611D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__6_mE7EA3413E1F81C42AAFE03C96A7C6C430EAFAF81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__7_mF6A7BD6551F5A9F146C1B47E86AFF650A2B0005D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__8_m63E7CF9513E4624B5B101B1C46941DC34982AC33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__9_m7B1419838E647715BC8200AD6D56DAF1A8F04F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3ClotsOfCancelsU3Ed__25_System_Collections_IEnumerator_Reset_m440F860762B28408E3B9AB6D72144B5E6A1C6F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CpauseTimeNowU3Ed__26_System_Collections_IEnumerator_Reset_m88957DE3F231D3C4F8E64C6DADA45876FABB7FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CtimeBasedTestingU3Ed__24_System_Collections_IEnumerator_Reset_m96D9D8DFA5B24A08E71FA9EA4595288F06E9837B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
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
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// LTBezierPath
struct LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] LTBezierPath::pts
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___pts_0;
	// System.Single LTBezierPath::length
	float ___length_1;
	// System.Boolean LTBezierPath::orientToPath
	bool ___orientToPath_2;
	// System.Boolean LTBezierPath::orientToPath2d
	bool ___orientToPath2d_3;
	// LTBezier[] LTBezierPath::beziers
	LTBezierU5BU5D_t4DDB3352316B2B476AEEE5AB4F760513856FC153* ___beziers_4;
	// System.Single[] LTBezierPath::lengthRatio
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___lengthRatio_5;
	// System.Int32 LTBezierPath::currentBezier
	int32_t ___currentBezier_6;
	// System.Int32 LTBezierPath::previousBezier
	int32_t ___previousBezier_7;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___pts_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pts_0), (void*)value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___length_1)); }
	inline float get_length_1() const { return ___length_1; }
	inline float* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(float value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_orientToPath_2() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___orientToPath_2)); }
	inline bool get_orientToPath_2() const { return ___orientToPath_2; }
	inline bool* get_address_of_orientToPath_2() { return &___orientToPath_2; }
	inline void set_orientToPath_2(bool value)
	{
		___orientToPath_2 = value;
	}

	inline static int32_t get_offset_of_orientToPath2d_3() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___orientToPath2d_3)); }
	inline bool get_orientToPath2d_3() const { return ___orientToPath2d_3; }
	inline bool* get_address_of_orientToPath2d_3() { return &___orientToPath2d_3; }
	inline void set_orientToPath2d_3(bool value)
	{
		___orientToPath2d_3 = value;
	}

	inline static int32_t get_offset_of_beziers_4() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___beziers_4)); }
	inline LTBezierU5BU5D_t4DDB3352316B2B476AEEE5AB4F760513856FC153* get_beziers_4() const { return ___beziers_4; }
	inline LTBezierU5BU5D_t4DDB3352316B2B476AEEE5AB4F760513856FC153** get_address_of_beziers_4() { return &___beziers_4; }
	inline void set_beziers_4(LTBezierU5BU5D_t4DDB3352316B2B476AEEE5AB4F760513856FC153* value)
	{
		___beziers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___beziers_4), (void*)value);
	}

	inline static int32_t get_offset_of_lengthRatio_5() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___lengthRatio_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_lengthRatio_5() const { return ___lengthRatio_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_lengthRatio_5() { return &___lengthRatio_5; }
	inline void set_lengthRatio_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___lengthRatio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lengthRatio_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentBezier_6() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___currentBezier_6)); }
	inline int32_t get_currentBezier_6() const { return ___currentBezier_6; }
	inline int32_t* get_address_of_currentBezier_6() { return &___currentBezier_6; }
	inline void set_currentBezier_6(int32_t value)
	{
		___currentBezier_6 = value;
	}

	inline static int32_t get_offset_of_previousBezier_7() { return static_cast<int32_t>(offsetof(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48, ___previousBezier_7)); }
	inline int32_t get_previousBezier_7() const { return ___previousBezier_7; }
	inline int32_t* get_address_of_previousBezier_7() { return &___previousBezier_7; }
	inline void set_previousBezier_7(int32_t value)
	{
		___previousBezier_7 = value;
	}
};


// LTSeq
struct LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222  : public RuntimeObject
{
public:
	// LTSeq LTSeq::previous
	LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * ___previous_0;
	// LTSeq LTSeq::current
	LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * ___current_1;
	// LTDescr LTSeq::tween
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___tween_2;
	// System.Single LTSeq::totalDelay
	float ___totalDelay_3;
	// System.Single LTSeq::timeScale
	float ___timeScale_4;
	// System.Int32 LTSeq::debugIter
	int32_t ___debugIter_5;
	// System.UInt32 LTSeq::counter
	uint32_t ___counter_6;
	// System.Boolean LTSeq::toggle
	bool ___toggle_7;
	// System.UInt32 LTSeq::_id
	uint32_t ____id_8;

public:
	inline static int32_t get_offset_of_previous_0() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___previous_0)); }
	inline LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * get_previous_0() const { return ___previous_0; }
	inline LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 ** get_address_of_previous_0() { return &___previous_0; }
	inline void set_previous_0(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * value)
	{
		___previous_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previous_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___current_1)); }
	inline LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * get_current_1() const { return ___current_1; }
	inline LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_tween_2() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___tween_2)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_tween_2() const { return ___tween_2; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_tween_2() { return &___tween_2; }
	inline void set_tween_2(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___tween_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tween_2), (void*)value);
	}

	inline static int32_t get_offset_of_totalDelay_3() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___totalDelay_3)); }
	inline float get_totalDelay_3() const { return ___totalDelay_3; }
	inline float* get_address_of_totalDelay_3() { return &___totalDelay_3; }
	inline void set_totalDelay_3(float value)
	{
		___totalDelay_3 = value;
	}

	inline static int32_t get_offset_of_timeScale_4() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___timeScale_4)); }
	inline float get_timeScale_4() const { return ___timeScale_4; }
	inline float* get_address_of_timeScale_4() { return &___timeScale_4; }
	inline void set_timeScale_4(float value)
	{
		___timeScale_4 = value;
	}

	inline static int32_t get_offset_of_debugIter_5() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___debugIter_5)); }
	inline int32_t get_debugIter_5() const { return ___debugIter_5; }
	inline int32_t* get_address_of_debugIter_5() { return &___debugIter_5; }
	inline void set_debugIter_5(int32_t value)
	{
		___debugIter_5 = value;
	}

	inline static int32_t get_offset_of_counter_6() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___counter_6)); }
	inline uint32_t get_counter_6() const { return ___counter_6; }
	inline uint32_t* get_address_of_counter_6() { return &___counter_6; }
	inline void set_counter_6(uint32_t value)
	{
		___counter_6 = value;
	}

	inline static int32_t get_offset_of_toggle_7() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ___toggle_7)); }
	inline bool get_toggle_7() const { return ___toggle_7; }
	inline bool* get_address_of_toggle_7() { return &___toggle_7; }
	inline void set_toggle_7(bool value)
	{
		___toggle_7 = value;
	}

	inline static int32_t get_offset_of__id_8() { return static_cast<int32_t>(offsetof(LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222, ____id_8)); }
	inline uint32_t get__id_8() const { return ____id_8; }
	inline uint32_t* get_address_of__id_8() { return &____id_8; }
	inline void set__id_8(uint32_t value)
	{
		____id_8 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Purchaser/<>c
struct U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_StaticFields
{
public:
	// Purchaser/<>c Purchaser/<>c::<>9
	U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * ___U3CU3E9_0;
	// System.Action`1<System.Boolean> Purchaser/<>c::<>9__17_0
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_1), (void*)value);
	}
};


// SFXManager/<FadeOutExtraMusicCorotinue>d__20
struct U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D  : public RuntimeObject
{
public:
	// System.Int32 SFXManager/<FadeOutExtraMusicCorotinue>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SFXManager/<FadeOutExtraMusicCorotinue>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SFXManager SFXManager/<FadeOutExtraMusicCorotinue>d__20::<>4__this
	SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * ___U3CU3E4__this_2;
	// System.Single SFXManager/<FadeOutExtraMusicCorotinue>d__20::fadeoutSpeed
	float ___fadeoutSpeed_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D, ___U3CU3E4__this_2)); }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeoutSpeed_3() { return static_cast<int32_t>(offsetof(U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D, ___fadeoutSpeed_3)); }
	inline float get_fadeoutSpeed_3() const { return ___fadeoutSpeed_3; }
	inline float* get_address_of_fadeoutSpeed_3() { return &___fadeoutSpeed_3; }
	inline void set_fadeoutSpeed_3(float value)
	{
		___fadeoutSpeed_3 = value;
	}
};


// SFXManager/<FadeOutMusicCorotinue>d__18
struct U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9  : public RuntimeObject
{
public:
	// System.Int32 SFXManager/<FadeOutMusicCorotinue>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SFXManager/<FadeOutMusicCorotinue>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SFXManager SFXManager/<FadeOutMusicCorotinue>d__18::<>4__this
	SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * ___U3CU3E4__this_2;
	// System.Single SFXManager/<FadeOutMusicCorotinue>d__18::fadeoutSpeed
	float ___fadeoutSpeed_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9, ___U3CU3E4__this_2)); }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_fadeoutSpeed_3() { return static_cast<int32_t>(offsetof(U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9, ___fadeoutSpeed_3)); }
	inline float get_fadeoutSpeed_3() const { return ___fadeoutSpeed_3; }
	inline float* get_address_of_fadeoutSpeed_3() { return &___fadeoutSpeed_3; }
	inline void set_fadeoutSpeed_3(float value)
	{
		___fadeoutSpeed_3 = value;
	}
};


// TestingPunch/<>c
struct U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields
{
public:
	// TestingPunch/<>c TestingPunch/<>c::<>9
	U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * ___U3CU3E9_0;
	// System.Action TestingPunch/<>c::<>9__4_1
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__4_1_1;
	// System.Action`1<System.Single> TestingPunch/<>c::<>9__4_4
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__4_4_2;
	// System.Action TestingPunch/<>c::<>9__4_5
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__4_5_3;
	// System.Action`1<System.Single> TestingPunch/<>c::<>9__5_0
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__5_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields, ___U3CU3E9__4_1_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__4_1_1() const { return ___U3CU3E9__4_1_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__4_1_1() { return &___U3CU3E9__4_1_1; }
	inline void set_U3CU3E9__4_1_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__4_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_4_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields, ___U3CU3E9__4_4_2)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__4_4_2() const { return ___U3CU3E9__4_4_2; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__4_4_2() { return &___U3CU3E9__4_4_2; }
	inline void set_U3CU3E9__4_4_2(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__4_4_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_4_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_5_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields, ___U3CU3E9__4_5_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__4_5_3() const { return ___U3CU3E9__4_5_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__4_5_3() { return &___U3CU3E9__4_5_3; }
	inline void set_U3CU3E9__4_5_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__4_5_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_5_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields, ___U3CU3E9__5_0_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__5_0_4() const { return ___U3CU3E9__5_0_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__5_0_4() { return &___U3CU3E9__5_0_4; }
	inline void set_U3CU3E9__5_0_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__5_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_4), (void*)value);
	}
};


// TestingPunch/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t038683C2E93B5073D484142AB01DE825CEEDBEBD  : public RuntimeObject
{
public:
	// UnityEngine.Light TestingPunch/<>c__DisplayClass4_0::lt
	Light_tA2F349FE839781469A0344CF6039B51512394275 * ___lt_0;

public:
	inline static int32_t get_offset_of_lt_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t038683C2E93B5073D484142AB01DE825CEEDBEBD, ___lt_0)); }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 * get_lt_0() const { return ___lt_0; }
	inline Light_tA2F349FE839781469A0344CF6039B51512394275 ** get_address_of_lt_0() { return &___lt_0; }
	inline void set_lt_0(Light_tA2F349FE839781469A0344CF6039B51512394275 * value)
	{
		___lt_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lt_0), (void*)value);
	}
};


// TestingPunch/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A  : public RuntimeObject
{
public:
	// System.Single TestingPunch/<>c__DisplayClass4_1::start
	float ___start_0;
	// TestingPunch TestingPunch/<>c__DisplayClass4_1::<>4__this
	TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A, ___start_0)); }
	inline float get_start_0() const { return ___start_0; }
	inline float* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(float value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A, ___U3CU3E4__this_1)); }
	inline TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// TestingPunch/<>c__DisplayClass4_2
struct U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05  : public RuntimeObject
{
public:
	// UnityEngine.GameObject TestingPunch/<>c__DisplayClass4_2::l
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l_0;
	// TestingPunch TestingPunch/<>c__DisplayClass4_2::<>4__this
	TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05, ___l_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l_0() const { return ___l_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05, ___U3CU3E4__this_1)); }
	inline TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<>c
struct U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields
{
public:
	// DentedPixel.LTExamples.TestingUnitTests/<>c DentedPixel.LTExamples.TestingUnitTests/<>c::<>9
	U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * ___U3CU3E9_0;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__22_3
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__22_3_1;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__22_22
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__22_22_2;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__22_7
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__22_7_3;
	// System.Action`1<System.Single> DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__22_12
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__22_12_4;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__22_18
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__22_18_5;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c::<>9__26_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__26_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_3_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__22_3_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__22_3_1() const { return ___U3CU3E9__22_3_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__22_3_1() { return &___U3CU3E9__22_3_1; }
	inline void set_U3CU3E9__22_3_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__22_3_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_3_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_22_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__22_22_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__22_22_2() const { return ___U3CU3E9__22_22_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__22_22_2() { return &___U3CU3E9__22_22_2; }
	inline void set_U3CU3E9__22_22_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__22_22_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_22_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_7_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__22_7_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__22_7_3() const { return ___U3CU3E9__22_7_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__22_7_3() { return &___U3CU3E9__22_7_3; }
	inline void set_U3CU3E9__22_7_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__22_7_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_7_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_12_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__22_12_4)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__22_12_4() const { return ___U3CU3E9__22_12_4; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__22_12_4() { return &___U3CU3E9__22_12_4; }
	inline void set_U3CU3E9__22_12_4(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__22_12_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_12_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_18_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__22_18_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__22_18_5() const { return ___U3CU3E9__22_18_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__22_18_5() { return &___U3CU3E9__22_18_5; }
	inline void set_U3CU3E9__22_18_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__22_18_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_18_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields, ___U3CU3E9__26_0_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__26_0_6() const { return ___U3CU3E9__26_0_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__26_0_6() { return &___U3CU3E9__26_0_6; }
	inline void set_U3CU3E9__26_0_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__26_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_6), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973  : public RuntimeObject
{
public:
	// System.Single DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1::beforeX
	float ___beforeX_0;
	// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_beforeX_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973, ___beforeX_0)); }
	inline float get_beforeX_0() const { return ___beforeX_0; }
	inline float* get_address_of_beforeX_0() { return &___beforeX_0; }
	inline void set_beforeX_0(float value)
	{
		___beforeX_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2
struct U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8  : public RuntimeObject
{
public:
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2::totalTweenTypeLength
	int32_t ___totalTweenTypeLength_0;
	// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * ___CSU24U3CU3E8__locals2_1;
	// System.Action`1<System.Object> DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2::<>9__24
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__24_2;

public:
	inline static int32_t get_offset_of_totalTweenTypeLength_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8, ___totalTweenTypeLength_0)); }
	inline int32_t get_totalTweenTypeLength_0() const { return ___totalTweenTypeLength_0; }
	inline int32_t* get_address_of_totalTweenTypeLength_0() { return &___totalTweenTypeLength_0; }
	inline void set_totalTweenTypeLength_0(int32_t value)
	{
		___totalTweenTypeLength_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8, ___U3CU3E9__24_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__24_2() const { return ___U3CU3E9__24_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__24_2() { return &___U3CU3E9__24_2; }
	inline void set_U3CU3E9__24_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__24_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25
struct U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523  : public RuntimeObject
{
public:
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DentedPixel.LTExamples.TestingUnitTests DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<>4__this
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * ___U3CU3E4__this_2;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<cubeCount>5__2
	int32_t ___U3CcubeCountU3E5__2_3;
	// System.Int32[] DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<tweensA>5__3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CtweensAU3E5__3_4;
	// UnityEngine.GameObject[] DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<aGOs>5__4
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CaGOsU3E5__4_5;
	// System.Int32[] DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<tweensB>5__5
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___U3CtweensBU3E5__5_6;
	// UnityEngine.GameObject[] DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::<bGOs>5__6
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CbGOsU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CU3E4__this_2)); }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcubeCountU3E5__2_3() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CcubeCountU3E5__2_3)); }
	inline int32_t get_U3CcubeCountU3E5__2_3() const { return ___U3CcubeCountU3E5__2_3; }
	inline int32_t* get_address_of_U3CcubeCountU3E5__2_3() { return &___U3CcubeCountU3E5__2_3; }
	inline void set_U3CcubeCountU3E5__2_3(int32_t value)
	{
		___U3CcubeCountU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtweensAU3E5__3_4() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CtweensAU3E5__3_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CtweensAU3E5__3_4() const { return ___U3CtweensAU3E5__3_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CtweensAU3E5__3_4() { return &___U3CtweensAU3E5__3_4; }
	inline void set_U3CtweensAU3E5__3_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CtweensAU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtweensAU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaGOsU3E5__4_5() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CaGOsU3E5__4_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CaGOsU3E5__4_5() const { return ___U3CaGOsU3E5__4_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CaGOsU3E5__4_5() { return &___U3CaGOsU3E5__4_5; }
	inline void set_U3CaGOsU3E5__4_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CaGOsU3E5__4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaGOsU3E5__4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtweensBU3E5__5_6() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CtweensBU3E5__5_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_U3CtweensBU3E5__5_6() const { return ___U3CtweensBU3E5__5_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_U3CtweensBU3E5__5_6() { return &___U3CtweensBU3E5__5_6; }
	inline void set_U3CtweensBU3E5__5_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___U3CtweensBU3E5__5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtweensBU3E5__5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbGOsU3E5__6_7() { return static_cast<int32_t>(offsetof(U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523, ___U3CbGOsU3E5__6_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CbGOsU3E5__6_7() const { return ___U3CbGOsU3E5__6_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CbGOsU3E5__6_7() { return &___U3CbGOsU3E5__6_7; }
	inline void set_U3CbGOsU3E5__6_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CbGOsU3E5__6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbGOsU3E5__6_7), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26
struct U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB  : public RuntimeObject
{
public:
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DentedPixel.LTExamples.TestingUnitTests DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::<>4__this
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB, ___U3CU3E4__this_2)); }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24
struct U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65  : public RuntimeObject
{
public:
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DentedPixel.LTExamples.TestingUnitTests DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::<>4__this
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * ___U3CU3E4__this_2;
	// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0 DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::<>8__1
	U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * ___U3CU3E8__1_3;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::<descriptionMatchCount>5__2
	int32_t ___U3CdescriptionMatchCountU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65, ___U3CU3E4__this_2)); }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E8__1_3() { return static_cast<int32_t>(offsetof(U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65, ___U3CU3E8__1_3)); }
	inline U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * get_U3CU3E8__1_3() const { return ___U3CU3E8__1_3; }
	inline U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F ** get_address_of_U3CU3E8__1_3() { return &___U3CU3E8__1_3; }
	inline void set_U3CU3E8__1_3(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * value)
	{
		___U3CU3E8__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E8__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdescriptionMatchCountU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65, ___U3CdescriptionMatchCountU3E5__2_4)); }
	inline int32_t get_U3CdescriptionMatchCountU3E5__2_4() const { return ___U3CdescriptionMatchCountU3E5__2_4; }
	inline int32_t* get_address_of_U3CdescriptionMatchCountU3E5__2_4() { return &___U3CdescriptionMatchCountU3E5__2_4; }
	inline void set_U3CdescriptionMatchCountU3E5__2_4(int32_t value)
	{
		___U3CdescriptionMatchCountU3E5__2_4 = value;
	}
};


// TestingZLegacy/<>c
struct U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_StaticFields
{
public:
	// TestingZLegacy/<>c TestingZLegacy/<>c::<>9
	U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * ___U3CU3E9_0;
	// System.Action`1<System.Single> TestingZLegacy/<>c::<>9__20_0
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// TestingZLegacyExt/<>c
struct U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_StaticFields
{
public:
	// TestingZLegacyExt/<>c TestingZLegacyExt/<>c::<>9
	U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * ___U3CU3E9_0;
	// System.Action`1<System.Single> TestingZLegacyExt/<>c::<>9__20_0
	Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// UIManager/<RoundEndCanvasFadeoutCorotinue>d__44
struct U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE  : public RuntimeObject
{
public:
	// System.Int32 UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UIManager UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_2;
	// System.Single UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE, ___U3CU3E4__this_2)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}
};


// UIManager/<ScreenFadeoutCorotinue>d__41
struct U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98  : public RuntimeObject
{
public:
	// System.Int32 UIManager/<ScreenFadeoutCorotinue>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIManager/<ScreenFadeoutCorotinue>d__41::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UIManager UIManager/<ScreenFadeoutCorotinue>d__41::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_2;
	// System.Single UIManager/<ScreenFadeoutCorotinue>d__41::speed
	float ___speed_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98, ___U3CU3E4__this_2)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// LeanTweenType
struct LeanTweenType_tAE51C34373F1326AC0BB9DB0F7EF1883603D55A9 
{
public:
	// System.Int32 LeanTweenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LeanTweenType_tAE51C34373F1326AC0BB9DB0F7EF1883603D55A9, ___value___2)); }
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TweenAction
struct TweenAction_tB7B9473B02F7CC04ED4083C3934285274119AE0B 
{
public:
	// System.Int32 TweenAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TweenAction_tB7B9473B02F7CC04ED4083C3934285274119AE0B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/HelpTypes
struct HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/HelpTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/InspectorStates
struct InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/InspectorStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings/MessageTypes
struct MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings/MessageTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F  : public RuntimeObject
{
public:
	// DentedPixel.LTExamples.TestingUnitTests DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<>4__this
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * ___U3CU3E4__this_0;
	// UnityEngine.GameObject[] DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubes
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___cubes_1;
	// System.Int32[] DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::tweenIds
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tweenIds_2;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::onCompleteCount
	int32_t ___onCompleteCount_3;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeToTrans
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeToTrans_4;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeDestEnd
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cubeDestEnd_5;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeSpline
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeSpline_6;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::jumpTimeId
	int32_t ___jumpTimeId_7;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::jumpCube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___jumpCube_8;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::zeroCube
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___zeroCube_9;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeScale
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeScale_10;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeRotate
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeRotate_11;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeRotateA
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeRotateA_12;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::cubeRotateB
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeRotateB_13;
	// System.Single DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::onStartTime
	float ___onStartTime_14;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::beforePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___beforePos_15;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::beforePos2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___beforePos2_16;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::totalEasingCheck
	int32_t ___totalEasingCheck_17;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::totalEasingCheckSuccess
	int32_t ___totalEasingCheckSuccess_18;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::value2UpdateCalled
	bool ___value2UpdateCalled_19;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<>9__21
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__21_20;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___U3CU3E4__this_0)); }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_cubes_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubes_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_cubes_1() const { return ___cubes_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_cubes_1() { return &___cubes_1; }
	inline void set_cubes_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___cubes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubes_1), (void*)value);
	}

	inline static int32_t get_offset_of_tweenIds_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___tweenIds_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tweenIds_2() const { return ___tweenIds_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tweenIds_2() { return &___tweenIds_2; }
	inline void set_tweenIds_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tweenIds_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweenIds_2), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCount_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___onCompleteCount_3)); }
	inline int32_t get_onCompleteCount_3() const { return ___onCompleteCount_3; }
	inline int32_t* get_address_of_onCompleteCount_3() { return &___onCompleteCount_3; }
	inline void set_onCompleteCount_3(int32_t value)
	{
		___onCompleteCount_3 = value;
	}

	inline static int32_t get_offset_of_cubeToTrans_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeToTrans_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeToTrans_4() const { return ___cubeToTrans_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeToTrans_4() { return &___cubeToTrans_4; }
	inline void set_cubeToTrans_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeToTrans_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeToTrans_4), (void*)value);
	}

	inline static int32_t get_offset_of_cubeDestEnd_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeDestEnd_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cubeDestEnd_5() const { return ___cubeDestEnd_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cubeDestEnd_5() { return &___cubeDestEnd_5; }
	inline void set_cubeDestEnd_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cubeDestEnd_5 = value;
	}

	inline static int32_t get_offset_of_cubeSpline_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeSpline_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeSpline_6() const { return ___cubeSpline_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeSpline_6() { return &___cubeSpline_6; }
	inline void set_cubeSpline_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeSpline_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeSpline_6), (void*)value);
	}

	inline static int32_t get_offset_of_jumpTimeId_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___jumpTimeId_7)); }
	inline int32_t get_jumpTimeId_7() const { return ___jumpTimeId_7; }
	inline int32_t* get_address_of_jumpTimeId_7() { return &___jumpTimeId_7; }
	inline void set_jumpTimeId_7(int32_t value)
	{
		___jumpTimeId_7 = value;
	}

	inline static int32_t get_offset_of_jumpCube_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___jumpCube_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_jumpCube_8() const { return ___jumpCube_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_jumpCube_8() { return &___jumpCube_8; }
	inline void set_jumpCube_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___jumpCube_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpCube_8), (void*)value);
	}

	inline static int32_t get_offset_of_zeroCube_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___zeroCube_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_zeroCube_9() const { return ___zeroCube_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_zeroCube_9() { return &___zeroCube_9; }
	inline void set_zeroCube_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___zeroCube_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zeroCube_9), (void*)value);
	}

	inline static int32_t get_offset_of_cubeScale_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeScale_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeScale_10() const { return ___cubeScale_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeScale_10() { return &___cubeScale_10; }
	inline void set_cubeScale_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeScale_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeScale_10), (void*)value);
	}

	inline static int32_t get_offset_of_cubeRotate_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeRotate_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeRotate_11() const { return ___cubeRotate_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeRotate_11() { return &___cubeRotate_11; }
	inline void set_cubeRotate_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeRotate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeRotate_11), (void*)value);
	}

	inline static int32_t get_offset_of_cubeRotateA_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeRotateA_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeRotateA_12() const { return ___cubeRotateA_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeRotateA_12() { return &___cubeRotateA_12; }
	inline void set_cubeRotateA_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeRotateA_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeRotateA_12), (void*)value);
	}

	inline static int32_t get_offset_of_cubeRotateB_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___cubeRotateB_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeRotateB_13() const { return ___cubeRotateB_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeRotateB_13() { return &___cubeRotateB_13; }
	inline void set_cubeRotateB_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeRotateB_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeRotateB_13), (void*)value);
	}

	inline static int32_t get_offset_of_onStartTime_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___onStartTime_14)); }
	inline float get_onStartTime_14() const { return ___onStartTime_14; }
	inline float* get_address_of_onStartTime_14() { return &___onStartTime_14; }
	inline void set_onStartTime_14(float value)
	{
		___onStartTime_14 = value;
	}

	inline static int32_t get_offset_of_beforePos_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___beforePos_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_beforePos_15() const { return ___beforePos_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_beforePos_15() { return &___beforePos_15; }
	inline void set_beforePos_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___beforePos_15 = value;
	}

	inline static int32_t get_offset_of_beforePos2_16() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___beforePos2_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_beforePos2_16() const { return ___beforePos2_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_beforePos2_16() { return &___beforePos2_16; }
	inline void set_beforePos2_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___beforePos2_16 = value;
	}

	inline static int32_t get_offset_of_totalEasingCheck_17() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___totalEasingCheck_17)); }
	inline int32_t get_totalEasingCheck_17() const { return ___totalEasingCheck_17; }
	inline int32_t* get_address_of_totalEasingCheck_17() { return &___totalEasingCheck_17; }
	inline void set_totalEasingCheck_17(int32_t value)
	{
		___totalEasingCheck_17 = value;
	}

	inline static int32_t get_offset_of_totalEasingCheckSuccess_18() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___totalEasingCheckSuccess_18)); }
	inline int32_t get_totalEasingCheckSuccess_18() const { return ___totalEasingCheckSuccess_18; }
	inline int32_t* get_address_of_totalEasingCheckSuccess_18() { return &___totalEasingCheckSuccess_18; }
	inline void set_totalEasingCheckSuccess_18(int32_t value)
	{
		___totalEasingCheckSuccess_18 = value;
	}

	inline static int32_t get_offset_of_value2UpdateCalled_19() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___value2UpdateCalled_19)); }
	inline bool get_value2UpdateCalled_19() const { return ___value2UpdateCalled_19; }
	inline bool* get_address_of_value2UpdateCalled_19() { return &___value2UpdateCalled_19; }
	inline void set_value2UpdateCalled_19(bool value)
	{
		___value2UpdateCalled_19 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__21_20() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F, ___U3CU3E9__21_20)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__21_20() const { return ___U3CU3E9__21_20; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__21_20() { return &___U3CU3E9__21_20; }
	inline void set_U3CU3E9__21_20(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__21_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__21_20), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F  : public RuntimeObject
{
public:
	// DentedPixel.LTExamples.TestingUnitTests DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<>4__this
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * ___U3CU3E4__this_0;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::pauseCount
	int32_t ___pauseCount_1;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::cubeRound
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeRound_2;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::onStartPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onStartPos_3;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::onStartPosSpline
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___onStartPosSpline_4;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::cubeSpline
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeSpline_5;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::cubeSeq
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeSeq_6;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::cubeBounds
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeBounds_7;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::didPassBounds
	bool ___didPassBounds_8;
	// UnityEngine.Vector3 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::failPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___failPoint_9;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::setOnStartNum
	int32_t ___setOnStartNum_10;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::setPosOnUpdate
	bool ___setPosOnUpdate_11;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::setPosNum
	int32_t ___setPosNum_12;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::hasGroupTweensCheckStarted
	bool ___hasGroupTweensCheckStarted_13;
	// System.Single DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::previousXlt4
	float ___previousXlt4_14;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::onUpdateWasCalled
	bool ___onUpdateWasCalled_15;
	// System.Single DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::start
	float ___start_16;
	// System.Single DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::expectedTime
	float ___expectedTime_17;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::didGetCorrectOnUpdate
	bool ___didGetCorrectOnUpdate_18;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<>9__13
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__13_19;
	// System.Action`1<UnityEngine.Vector3> DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<>9__14
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * ___U3CU3E9__14_20;
	// System.Action DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<>9__16
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__16_21;
	// System.Action`1<System.Object> DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<>9__15
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___U3CU3E9__15_22;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___U3CU3E4__this_0)); }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_pauseCount_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___pauseCount_1)); }
	inline int32_t get_pauseCount_1() const { return ___pauseCount_1; }
	inline int32_t* get_address_of_pauseCount_1() { return &___pauseCount_1; }
	inline void set_pauseCount_1(int32_t value)
	{
		___pauseCount_1 = value;
	}

	inline static int32_t get_offset_of_cubeRound_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___cubeRound_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeRound_2() const { return ___cubeRound_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeRound_2() { return &___cubeRound_2; }
	inline void set_cubeRound_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeRound_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeRound_2), (void*)value);
	}

	inline static int32_t get_offset_of_onStartPos_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___onStartPos_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_onStartPos_3() const { return ___onStartPos_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_onStartPos_3() { return &___onStartPos_3; }
	inline void set_onStartPos_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___onStartPos_3 = value;
	}

	inline static int32_t get_offset_of_onStartPosSpline_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___onStartPosSpline_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_onStartPosSpline_4() const { return ___onStartPosSpline_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_onStartPosSpline_4() { return &___onStartPosSpline_4; }
	inline void set_onStartPosSpline_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___onStartPosSpline_4 = value;
	}

	inline static int32_t get_offset_of_cubeSpline_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___cubeSpline_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeSpline_5() const { return ___cubeSpline_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeSpline_5() { return &___cubeSpline_5; }
	inline void set_cubeSpline_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeSpline_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeSpline_5), (void*)value);
	}

	inline static int32_t get_offset_of_cubeSeq_6() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___cubeSeq_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeSeq_6() const { return ___cubeSeq_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeSeq_6() { return &___cubeSeq_6; }
	inline void set_cubeSeq_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeSeq_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeSeq_6), (void*)value);
	}

	inline static int32_t get_offset_of_cubeBounds_7() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___cubeBounds_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeBounds_7() const { return ___cubeBounds_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeBounds_7() { return &___cubeBounds_7; }
	inline void set_cubeBounds_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeBounds_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeBounds_7), (void*)value);
	}

	inline static int32_t get_offset_of_didPassBounds_8() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___didPassBounds_8)); }
	inline bool get_didPassBounds_8() const { return ___didPassBounds_8; }
	inline bool* get_address_of_didPassBounds_8() { return &___didPassBounds_8; }
	inline void set_didPassBounds_8(bool value)
	{
		___didPassBounds_8 = value;
	}

	inline static int32_t get_offset_of_failPoint_9() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___failPoint_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_failPoint_9() const { return ___failPoint_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_failPoint_9() { return &___failPoint_9; }
	inline void set_failPoint_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___failPoint_9 = value;
	}

	inline static int32_t get_offset_of_setOnStartNum_10() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___setOnStartNum_10)); }
	inline int32_t get_setOnStartNum_10() const { return ___setOnStartNum_10; }
	inline int32_t* get_address_of_setOnStartNum_10() { return &___setOnStartNum_10; }
	inline void set_setOnStartNum_10(int32_t value)
	{
		___setOnStartNum_10 = value;
	}

	inline static int32_t get_offset_of_setPosOnUpdate_11() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___setPosOnUpdate_11)); }
	inline bool get_setPosOnUpdate_11() const { return ___setPosOnUpdate_11; }
	inline bool* get_address_of_setPosOnUpdate_11() { return &___setPosOnUpdate_11; }
	inline void set_setPosOnUpdate_11(bool value)
	{
		___setPosOnUpdate_11 = value;
	}

	inline static int32_t get_offset_of_setPosNum_12() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___setPosNum_12)); }
	inline int32_t get_setPosNum_12() const { return ___setPosNum_12; }
	inline int32_t* get_address_of_setPosNum_12() { return &___setPosNum_12; }
	inline void set_setPosNum_12(int32_t value)
	{
		___setPosNum_12 = value;
	}

	inline static int32_t get_offset_of_hasGroupTweensCheckStarted_13() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___hasGroupTweensCheckStarted_13)); }
	inline bool get_hasGroupTweensCheckStarted_13() const { return ___hasGroupTweensCheckStarted_13; }
	inline bool* get_address_of_hasGroupTweensCheckStarted_13() { return &___hasGroupTweensCheckStarted_13; }
	inline void set_hasGroupTweensCheckStarted_13(bool value)
	{
		___hasGroupTweensCheckStarted_13 = value;
	}

	inline static int32_t get_offset_of_previousXlt4_14() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___previousXlt4_14)); }
	inline float get_previousXlt4_14() const { return ___previousXlt4_14; }
	inline float* get_address_of_previousXlt4_14() { return &___previousXlt4_14; }
	inline void set_previousXlt4_14(float value)
	{
		___previousXlt4_14 = value;
	}

	inline static int32_t get_offset_of_onUpdateWasCalled_15() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___onUpdateWasCalled_15)); }
	inline bool get_onUpdateWasCalled_15() const { return ___onUpdateWasCalled_15; }
	inline bool* get_address_of_onUpdateWasCalled_15() { return &___onUpdateWasCalled_15; }
	inline void set_onUpdateWasCalled_15(bool value)
	{
		___onUpdateWasCalled_15 = value;
	}

	inline static int32_t get_offset_of_start_16() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___start_16)); }
	inline float get_start_16() const { return ___start_16; }
	inline float* get_address_of_start_16() { return &___start_16; }
	inline void set_start_16(float value)
	{
		___start_16 = value;
	}

	inline static int32_t get_offset_of_expectedTime_17() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___expectedTime_17)); }
	inline float get_expectedTime_17() const { return ___expectedTime_17; }
	inline float* get_address_of_expectedTime_17() { return &___expectedTime_17; }
	inline void set_expectedTime_17(float value)
	{
		___expectedTime_17 = value;
	}

	inline static int32_t get_offset_of_didGetCorrectOnUpdate_18() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___didGetCorrectOnUpdate_18)); }
	inline bool get_didGetCorrectOnUpdate_18() const { return ___didGetCorrectOnUpdate_18; }
	inline bool* get_address_of_didGetCorrectOnUpdate_18() { return &___didGetCorrectOnUpdate_18; }
	inline void set_didGetCorrectOnUpdate_18(bool value)
	{
		___didGetCorrectOnUpdate_18 = value;
	}

	inline static int32_t get_offset_of_U3CU3E9__13_19() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___U3CU3E9__13_19)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__13_19() const { return ___U3CU3E9__13_19; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__13_19() { return &___U3CU3E9__13_19; }
	inline void set_U3CU3E9__13_19(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__13_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_20() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___U3CU3E9__14_20)); }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * get_U3CU3E9__14_20() const { return ___U3CU3E9__14_20; }
	inline Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B ** get_address_of_U3CU3E9__14_20() { return &___U3CU3E9__14_20; }
	inline void set_U3CU3E9__14_20(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * value)
	{
		___U3CU3E9__14_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_21() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___U3CU3E9__16_21)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__16_21() const { return ___U3CU3E9__16_21; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__16_21() { return &___U3CU3E9__16_21; }
	inline void set_U3CU3E9__16_21(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__16_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_22() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F, ___U3CU3E9__15_22)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_U3CU3E9__15_22() const { return ___U3CU3E9__15_22; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_U3CU3E9__15_22() { return &___U3CU3E9__15_22; }
	inline void set_U3CU3E9__15_22(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___U3CU3E9__15_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_22), (void*)value);
	}
};


// TestingZLegacy/TimingType
struct TimingType_t45F13DECEBFB1E67A20F76FF233F367BB999C27F 
{
public:
	// System.Int32 TestingZLegacy/TimingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimingType_t45F13DECEBFB1E67A20F76FF233F367BB999C27F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TestingZLegacyExt/TimingType
struct TimingType_t578CF99DA23D1F87B1A67A57C8C872C3E24F55E6 
{
public:
	// System.Int32 TestingZLegacyExt/TimingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimingType_t578CF99DA23D1F87B1A67A57C8C872C3E24F55E6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN
struct TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E 
{
public:
	// System.Int32 GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// LTDescr
struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F  : public RuntimeObject
{
public:
	// System.Boolean LTDescr::toggle
	bool ___toggle_0;
	// System.Boolean LTDescr::useEstimatedTime
	bool ___useEstimatedTime_1;
	// System.Boolean LTDescr::useFrames
	bool ___useFrames_2;
	// System.Boolean LTDescr::useManualTime
	bool ___useManualTime_3;
	// System.Boolean LTDescr::usesNormalDt
	bool ___usesNormalDt_4;
	// System.Boolean LTDescr::hasInitiliazed
	bool ___hasInitiliazed_5;
	// System.Boolean LTDescr::hasExtraOnCompletes
	bool ___hasExtraOnCompletes_6;
	// System.Boolean LTDescr::hasPhysics
	bool ___hasPhysics_7;
	// System.Boolean LTDescr::onCompleteOnRepeat
	bool ___onCompleteOnRepeat_8;
	// System.Boolean LTDescr::onCompleteOnStart
	bool ___onCompleteOnStart_9;
	// System.Boolean LTDescr::useRecursion
	bool ___useRecursion_10;
	// System.Single LTDescr::ratioPassed
	float ___ratioPassed_11;
	// System.Single LTDescr::passed
	float ___passed_12;
	// System.Single LTDescr::delay
	float ___delay_13;
	// System.Single LTDescr::time
	float ___time_14;
	// System.Single LTDescr::speed
	float ___speed_15;
	// System.Single LTDescr::lastVal
	float ___lastVal_16;
	// System.UInt32 LTDescr::_id
	uint32_t ____id_17;
	// System.Int32 LTDescr::loopCount
	int32_t ___loopCount_18;
	// System.UInt32 LTDescr::counter
	uint32_t ___counter_19;
	// System.Single LTDescr::direction
	float ___direction_20;
	// System.Single LTDescr::directionLast
	float ___directionLast_21;
	// System.Single LTDescr::overshoot
	float ___overshoot_22;
	// System.Single LTDescr::period
	float ___period_23;
	// System.Single LTDescr::scale
	float ___scale_24;
	// System.Boolean LTDescr::destroyOnComplete
	bool ___destroyOnComplete_25;
	// UnityEngine.Transform LTDescr::trans
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trans_26;
	// UnityEngine.Vector3 LTDescr::fromInternal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromInternal_27;
	// UnityEngine.Vector3 LTDescr::toInternal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toInternal_28;
	// UnityEngine.Vector3 LTDescr::diff
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diff_29;
	// UnityEngine.Vector3 LTDescr::diffDiv2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___diffDiv2_30;
	// TweenAction LTDescr::type
	int32_t ___type_31;
	// LeanTweenType LTDescr::easeType
	int32_t ___easeType_32;
	// LeanTweenType LTDescr::loopType
	int32_t ___loopType_33;
	// System.Boolean LTDescr::hasUpdateCallback
	bool ___hasUpdateCallback_34;
	// LTDescr/EaseTypeDelegate LTDescr::easeMethod
	EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * ___easeMethod_35;
	// LTDescr/ActionMethodDelegate LTDescr::<easeInternal>k__BackingField
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CeaseInternalU3Ek__BackingField_36;
	// LTDescr/ActionMethodDelegate LTDescr::<initInternal>k__BackingField
	ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * ___U3CinitInternalU3Ek__BackingField_37;
	// UnityEngine.SpriteRenderer LTDescr::spriteRen
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spriteRen_38;
	// UnityEngine.RectTransform LTDescr::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_39;
	// UnityEngine.UI.Text LTDescr::uiText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___uiText_40;
	// UnityEngine.UI.Image LTDescr::uiImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___uiImage_41;
	// UnityEngine.UI.RawImage LTDescr::rawImage
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___rawImage_42;
	// UnityEngine.Sprite[] LTDescr::sprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___sprites_43;
	// LTDescrOptional LTDescr::_optional
	LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * ____optional_44;

public:
	inline static int32_t get_offset_of_toggle_0() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___toggle_0)); }
	inline bool get_toggle_0() const { return ___toggle_0; }
	inline bool* get_address_of_toggle_0() { return &___toggle_0; }
	inline void set_toggle_0(bool value)
	{
		___toggle_0 = value;
	}

	inline static int32_t get_offset_of_useEstimatedTime_1() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useEstimatedTime_1)); }
	inline bool get_useEstimatedTime_1() const { return ___useEstimatedTime_1; }
	inline bool* get_address_of_useEstimatedTime_1() { return &___useEstimatedTime_1; }
	inline void set_useEstimatedTime_1(bool value)
	{
		___useEstimatedTime_1 = value;
	}

	inline static int32_t get_offset_of_useFrames_2() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useFrames_2)); }
	inline bool get_useFrames_2() const { return ___useFrames_2; }
	inline bool* get_address_of_useFrames_2() { return &___useFrames_2; }
	inline void set_useFrames_2(bool value)
	{
		___useFrames_2 = value;
	}

	inline static int32_t get_offset_of_useManualTime_3() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useManualTime_3)); }
	inline bool get_useManualTime_3() const { return ___useManualTime_3; }
	inline bool* get_address_of_useManualTime_3() { return &___useManualTime_3; }
	inline void set_useManualTime_3(bool value)
	{
		___useManualTime_3 = value;
	}

	inline static int32_t get_offset_of_usesNormalDt_4() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___usesNormalDt_4)); }
	inline bool get_usesNormalDt_4() const { return ___usesNormalDt_4; }
	inline bool* get_address_of_usesNormalDt_4() { return &___usesNormalDt_4; }
	inline void set_usesNormalDt_4(bool value)
	{
		___usesNormalDt_4 = value;
	}

	inline static int32_t get_offset_of_hasInitiliazed_5() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasInitiliazed_5)); }
	inline bool get_hasInitiliazed_5() const { return ___hasInitiliazed_5; }
	inline bool* get_address_of_hasInitiliazed_5() { return &___hasInitiliazed_5; }
	inline void set_hasInitiliazed_5(bool value)
	{
		___hasInitiliazed_5 = value;
	}

	inline static int32_t get_offset_of_hasExtraOnCompletes_6() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasExtraOnCompletes_6)); }
	inline bool get_hasExtraOnCompletes_6() const { return ___hasExtraOnCompletes_6; }
	inline bool* get_address_of_hasExtraOnCompletes_6() { return &___hasExtraOnCompletes_6; }
	inline void set_hasExtraOnCompletes_6(bool value)
	{
		___hasExtraOnCompletes_6 = value;
	}

	inline static int32_t get_offset_of_hasPhysics_7() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasPhysics_7)); }
	inline bool get_hasPhysics_7() const { return ___hasPhysics_7; }
	inline bool* get_address_of_hasPhysics_7() { return &___hasPhysics_7; }
	inline void set_hasPhysics_7(bool value)
	{
		___hasPhysics_7 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnRepeat_8() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___onCompleteOnRepeat_8)); }
	inline bool get_onCompleteOnRepeat_8() const { return ___onCompleteOnRepeat_8; }
	inline bool* get_address_of_onCompleteOnRepeat_8() { return &___onCompleteOnRepeat_8; }
	inline void set_onCompleteOnRepeat_8(bool value)
	{
		___onCompleteOnRepeat_8 = value;
	}

	inline static int32_t get_offset_of_onCompleteOnStart_9() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___onCompleteOnStart_9)); }
	inline bool get_onCompleteOnStart_9() const { return ___onCompleteOnStart_9; }
	inline bool* get_address_of_onCompleteOnStart_9() { return &___onCompleteOnStart_9; }
	inline void set_onCompleteOnStart_9(bool value)
	{
		___onCompleteOnStart_9 = value;
	}

	inline static int32_t get_offset_of_useRecursion_10() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___useRecursion_10)); }
	inline bool get_useRecursion_10() const { return ___useRecursion_10; }
	inline bool* get_address_of_useRecursion_10() { return &___useRecursion_10; }
	inline void set_useRecursion_10(bool value)
	{
		___useRecursion_10 = value;
	}

	inline static int32_t get_offset_of_ratioPassed_11() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___ratioPassed_11)); }
	inline float get_ratioPassed_11() const { return ___ratioPassed_11; }
	inline float* get_address_of_ratioPassed_11() { return &___ratioPassed_11; }
	inline void set_ratioPassed_11(float value)
	{
		___ratioPassed_11 = value;
	}

	inline static int32_t get_offset_of_passed_12() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___passed_12)); }
	inline float get_passed_12() const { return ___passed_12; }
	inline float* get_address_of_passed_12() { return &___passed_12; }
	inline void set_passed_12(float value)
	{
		___passed_12 = value;
	}

	inline static int32_t get_offset_of_delay_13() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___delay_13)); }
	inline float get_delay_13() const { return ___delay_13; }
	inline float* get_address_of_delay_13() { return &___delay_13; }
	inline void set_delay_13(float value)
	{
		___delay_13 = value;
	}

	inline static int32_t get_offset_of_time_14() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___time_14)); }
	inline float get_time_14() const { return ___time_14; }
	inline float* get_address_of_time_14() { return &___time_14; }
	inline void set_time_14(float value)
	{
		___time_14 = value;
	}

	inline static int32_t get_offset_of_speed_15() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___speed_15)); }
	inline float get_speed_15() const { return ___speed_15; }
	inline float* get_address_of_speed_15() { return &___speed_15; }
	inline void set_speed_15(float value)
	{
		___speed_15 = value;
	}

	inline static int32_t get_offset_of_lastVal_16() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___lastVal_16)); }
	inline float get_lastVal_16() const { return ___lastVal_16; }
	inline float* get_address_of_lastVal_16() { return &___lastVal_16; }
	inline void set_lastVal_16(float value)
	{
		___lastVal_16 = value;
	}

	inline static int32_t get_offset_of__id_17() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ____id_17)); }
	inline uint32_t get__id_17() const { return ____id_17; }
	inline uint32_t* get_address_of__id_17() { return &____id_17; }
	inline void set__id_17(uint32_t value)
	{
		____id_17 = value;
	}

	inline static int32_t get_offset_of_loopCount_18() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___loopCount_18)); }
	inline int32_t get_loopCount_18() const { return ___loopCount_18; }
	inline int32_t* get_address_of_loopCount_18() { return &___loopCount_18; }
	inline void set_loopCount_18(int32_t value)
	{
		___loopCount_18 = value;
	}

	inline static int32_t get_offset_of_counter_19() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___counter_19)); }
	inline uint32_t get_counter_19() const { return ___counter_19; }
	inline uint32_t* get_address_of_counter_19() { return &___counter_19; }
	inline void set_counter_19(uint32_t value)
	{
		___counter_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_directionLast_21() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___directionLast_21)); }
	inline float get_directionLast_21() const { return ___directionLast_21; }
	inline float* get_address_of_directionLast_21() { return &___directionLast_21; }
	inline void set_directionLast_21(float value)
	{
		___directionLast_21 = value;
	}

	inline static int32_t get_offset_of_overshoot_22() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___overshoot_22)); }
	inline float get_overshoot_22() const { return ___overshoot_22; }
	inline float* get_address_of_overshoot_22() { return &___overshoot_22; }
	inline void set_overshoot_22(float value)
	{
		___overshoot_22 = value;
	}

	inline static int32_t get_offset_of_period_23() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___period_23)); }
	inline float get_period_23() const { return ___period_23; }
	inline float* get_address_of_period_23() { return &___period_23; }
	inline void set_period_23(float value)
	{
		___period_23 = value;
	}

	inline static int32_t get_offset_of_scale_24() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___scale_24)); }
	inline float get_scale_24() const { return ___scale_24; }
	inline float* get_address_of_scale_24() { return &___scale_24; }
	inline void set_scale_24(float value)
	{
		___scale_24 = value;
	}

	inline static int32_t get_offset_of_destroyOnComplete_25() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___destroyOnComplete_25)); }
	inline bool get_destroyOnComplete_25() const { return ___destroyOnComplete_25; }
	inline bool* get_address_of_destroyOnComplete_25() { return &___destroyOnComplete_25; }
	inline void set_destroyOnComplete_25(bool value)
	{
		___destroyOnComplete_25 = value;
	}

	inline static int32_t get_offset_of_trans_26() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___trans_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trans_26() const { return ___trans_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trans_26() { return &___trans_26; }
	inline void set_trans_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trans_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trans_26), (void*)value);
	}

	inline static int32_t get_offset_of_fromInternal_27() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___fromInternal_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_fromInternal_27() const { return ___fromInternal_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_fromInternal_27() { return &___fromInternal_27; }
	inline void set_fromInternal_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___fromInternal_27 = value;
	}

	inline static int32_t get_offset_of_toInternal_28() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___toInternal_28)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_toInternal_28() const { return ___toInternal_28; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_toInternal_28() { return &___toInternal_28; }
	inline void set_toInternal_28(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___toInternal_28 = value;
	}

	inline static int32_t get_offset_of_diff_29() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___diff_29)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diff_29() const { return ___diff_29; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diff_29() { return &___diff_29; }
	inline void set_diff_29(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diff_29 = value;
	}

	inline static int32_t get_offset_of_diffDiv2_30() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___diffDiv2_30)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_diffDiv2_30() const { return ___diffDiv2_30; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_diffDiv2_30() { return &___diffDiv2_30; }
	inline void set_diffDiv2_30(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___diffDiv2_30 = value;
	}

	inline static int32_t get_offset_of_type_31() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___type_31)); }
	inline int32_t get_type_31() const { return ___type_31; }
	inline int32_t* get_address_of_type_31() { return &___type_31; }
	inline void set_type_31(int32_t value)
	{
		___type_31 = value;
	}

	inline static int32_t get_offset_of_easeType_32() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___easeType_32)); }
	inline int32_t get_easeType_32() const { return ___easeType_32; }
	inline int32_t* get_address_of_easeType_32() { return &___easeType_32; }
	inline void set_easeType_32(int32_t value)
	{
		___easeType_32 = value;
	}

	inline static int32_t get_offset_of_loopType_33() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___loopType_33)); }
	inline int32_t get_loopType_33() const { return ___loopType_33; }
	inline int32_t* get_address_of_loopType_33() { return &___loopType_33; }
	inline void set_loopType_33(int32_t value)
	{
		___loopType_33 = value;
	}

	inline static int32_t get_offset_of_hasUpdateCallback_34() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___hasUpdateCallback_34)); }
	inline bool get_hasUpdateCallback_34() const { return ___hasUpdateCallback_34; }
	inline bool* get_address_of_hasUpdateCallback_34() { return &___hasUpdateCallback_34; }
	inline void set_hasUpdateCallback_34(bool value)
	{
		___hasUpdateCallback_34 = value;
	}

	inline static int32_t get_offset_of_easeMethod_35() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___easeMethod_35)); }
	inline EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * get_easeMethod_35() const { return ___easeMethod_35; }
	inline EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF ** get_address_of_easeMethod_35() { return &___easeMethod_35; }
	inline void set_easeMethod_35(EaseTypeDelegate_t0285AB55B28F5B5A6688E966B51FBA837B2E84AF * value)
	{
		___easeMethod_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___easeMethod_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeaseInternalU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___U3CeaseInternalU3Ek__BackingField_36)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CeaseInternalU3Ek__BackingField_36() const { return ___U3CeaseInternalU3Ek__BackingField_36; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CeaseInternalU3Ek__BackingField_36() { return &___U3CeaseInternalU3Ek__BackingField_36; }
	inline void set_U3CeaseInternalU3Ek__BackingField_36(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CeaseInternalU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeaseInternalU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinitInternalU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___U3CinitInternalU3Ek__BackingField_37)); }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * get_U3CinitInternalU3Ek__BackingField_37() const { return ___U3CinitInternalU3Ek__BackingField_37; }
	inline ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 ** get_address_of_U3CinitInternalU3Ek__BackingField_37() { return &___U3CinitInternalU3Ek__BackingField_37; }
	inline void set_U3CinitInternalU3Ek__BackingField_37(ActionMethodDelegate_t35A1DC5D365ACE4EFD8348E5E4DF89A1E9129C05 * value)
	{
		___U3CinitInternalU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinitInternalU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_spriteRen_38() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___spriteRen_38)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_spriteRen_38() const { return ___spriteRen_38; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_spriteRen_38() { return &___spriteRen_38; }
	inline void set_spriteRen_38(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___spriteRen_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteRen_38), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_39() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___rectTransform_39)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_39() const { return ___rectTransform_39; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_39() { return &___rectTransform_39; }
	inline void set_rectTransform_39(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_39), (void*)value);
	}

	inline static int32_t get_offset_of_uiText_40() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___uiText_40)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_uiText_40() const { return ___uiText_40; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_uiText_40() { return &___uiText_40; }
	inline void set_uiText_40(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___uiText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiText_40), (void*)value);
	}

	inline static int32_t get_offset_of_uiImage_41() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___uiImage_41)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_uiImage_41() const { return ___uiImage_41; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_uiImage_41() { return &___uiImage_41; }
	inline void set_uiImage_41(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___uiImage_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiImage_41), (void*)value);
	}

	inline static int32_t get_offset_of_rawImage_42() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___rawImage_42)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_rawImage_42() const { return ___rawImage_42; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_rawImage_42() { return &___rawImage_42; }
	inline void set_rawImage_42(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___rawImage_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawImage_42), (void*)value);
	}

	inline static int32_t get_offset_of_sprites_43() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ___sprites_43)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_sprites_43() const { return ___sprites_43; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_sprites_43() { return &___sprites_43; }
	inline void set_sprites_43(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___sprites_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_43), (void*)value);
	}

	inline static int32_t get_offset_of__optional_44() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F, ____optional_44)); }
	inline LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * get__optional_44() const { return ____optional_44; }
	inline LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 ** get_address_of__optional_44() { return &____optional_44; }
	inline void set__optional_44(LTDescrOptional_t588EC8F737F42C3A4113E515F4A80CE334ED5DA2 * value)
	{
		____optional_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_44), (void*)value);
	}
};

struct LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields
{
public:
	// System.Single LTDescr::val
	float ___val_45;
	// System.Single LTDescr::dt
	float ___dt_46;
	// UnityEngine.Vector3 LTDescr::newVect
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newVect_47;

public:
	inline static int32_t get_offset_of_val_45() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___val_45)); }
	inline float get_val_45() const { return ___val_45; }
	inline float* get_address_of_val_45() { return &___val_45; }
	inline void set_val_45(float value)
	{
		___val_45 = value;
	}

	inline static int32_t get_offset_of_dt_46() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___dt_46)); }
	inline float get_dt_46() const { return ___dt_46; }
	inline float* get_address_of_dt_46() { return &___dt_46; }
	inline void set_dt_46(float value)
	{
		___dt_46 = value;
	}

	inline static int32_t get_offset_of_newVect_47() { return static_cast<int32_t>(offsetof(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F_StaticFields, ___newVect_47)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newVect_47() const { return ___newVect_47; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newVect_47() { return &___newVect_47; }
	inline void set_newVect_47(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newVect_47 = value;
	}
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B 
{
public:
	// System.String GameAnalyticsSDK.Setup.Settings/HelpInfo::Message
	String_t* ___Message_0;
	// GameAnalyticsSDK.Setup.Settings/MessageTypes GameAnalyticsSDK.Setup.Settings/HelpInfo::MsgType
	int32_t ___MsgType_1;
	// GameAnalyticsSDK.Setup.Settings/HelpTypes GameAnalyticsSDK.Setup.Settings/HelpInfo::HelpType
	int32_t ___HelpType_2;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}

	inline static int32_t get_offset_of_MsgType_1() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___MsgType_1)); }
	inline int32_t get_MsgType_1() const { return ___MsgType_1; }
	inline int32_t* get_address_of_MsgType_1() { return &___MsgType_1; }
	inline void set_MsgType_1(int32_t value)
	{
		___MsgType_1 = value;
	}

	inline static int32_t get_offset_of_HelpType_2() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___HelpType_2)); }
	inline int32_t get_HelpType_2() const { return ___HelpType_2; }
	inline int32_t* get_address_of_HelpType_2() { return &___HelpType_2; }
	inline void set_HelpType_2(int32_t value)
	{
		___HelpType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke
{
	char* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};
// Native definition for COM marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com
{
	Il2CppChar* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Single>
struct Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.Vector3>
struct Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// TestingZLegacy/NextFunc
struct NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6  : public MulticastDelegate_t
{
public:

public:
};


// TestingZLegacyExt/NextFunc
struct NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Light
struct Light_tA2F349FE839781469A0344CF6039B51512394275  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tA2F349FE839781469A0344CF6039B51512394275, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// LeanTween
struct LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields
{
public:
	// System.Boolean LeanTween::throwErrors
	bool ___throwErrors_4;
	// System.Single LeanTween::tau
	float ___tau_5;
	// System.Single LeanTween::PI_DIV2
	float ___PI_DIV2_6;
	// LTSeq[] LeanTween::sequences
	LTSeqU5BU5D_t5C740B5E327381CE2E6FD41B011EA9A72355FD51* ___sequences_7;
	// LTDescr[] LeanTween::tweens
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* ___tweens_8;
	// System.Int32[] LeanTween::tweensFinished
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tweensFinished_9;
	// System.Int32[] LeanTween::tweensFinishedIds
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___tweensFinishedIds_10;
	// LTDescr LeanTween::tween
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___tween_11;
	// System.Int32 LeanTween::tweenMaxSearch
	int32_t ___tweenMaxSearch_12;
	// System.Int32 LeanTween::maxTweens
	int32_t ___maxTweens_13;
	// System.Int32 LeanTween::maxSequences
	int32_t ___maxSequences_14;
	// System.Int32 LeanTween::frameRendered
	int32_t ___frameRendered_15;
	// UnityEngine.GameObject LeanTween::_tweenEmpty
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____tweenEmpty_16;
	// System.Single LeanTween::dtEstimated
	float ___dtEstimated_17;
	// System.Single LeanTween::dtManual
	float ___dtManual_18;
	// System.Single LeanTween::dtActual
	float ___dtActual_19;
	// System.UInt32 LeanTween::global_counter
	uint32_t ___global_counter_20;
	// System.Int32 LeanTween::i
	int32_t ___i_21;
	// System.Int32 LeanTween::j
	int32_t ___j_22;
	// System.Int32 LeanTween::finishedCnt
	int32_t ___finishedCnt_23;
	// UnityEngine.AnimationCurve LeanTween::punch
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___punch_24;
	// UnityEngine.AnimationCurve LeanTween::shake
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___shake_25;
	// System.Int32 LeanTween::maxTweenReached
	int32_t ___maxTweenReached_26;
	// System.Int32 LeanTween::startSearch
	int32_t ___startSearch_27;
	// LTDescr LeanTween::d
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___d_28;
	// System.Action`1<LTEvent>[] LeanTween::eventListeners
	Action_1U5BU5D_t930658157BBD9409C35E85E5A34B23FC4EEF0772* ___eventListeners_29;
	// UnityEngine.GameObject[] LeanTween::goListeners
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___goListeners_30;
	// System.Int32 LeanTween::eventsMaxSearch
	int32_t ___eventsMaxSearch_31;
	// System.Int32 LeanTween::EVENTS_MAX
	int32_t ___EVENTS_MAX_32;
	// System.Int32 LeanTween::LISTENERS_MAX
	int32_t ___LISTENERS_MAX_33;
	// System.Int32 LeanTween::INIT_LISTENERS_MAX
	int32_t ___INIT_LISTENERS_MAX_34;

public:
	inline static int32_t get_offset_of_throwErrors_4() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___throwErrors_4)); }
	inline bool get_throwErrors_4() const { return ___throwErrors_4; }
	inline bool* get_address_of_throwErrors_4() { return &___throwErrors_4; }
	inline void set_throwErrors_4(bool value)
	{
		___throwErrors_4 = value;
	}

	inline static int32_t get_offset_of_tau_5() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tau_5)); }
	inline float get_tau_5() const { return ___tau_5; }
	inline float* get_address_of_tau_5() { return &___tau_5; }
	inline void set_tau_5(float value)
	{
		___tau_5 = value;
	}

	inline static int32_t get_offset_of_PI_DIV2_6() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___PI_DIV2_6)); }
	inline float get_PI_DIV2_6() const { return ___PI_DIV2_6; }
	inline float* get_address_of_PI_DIV2_6() { return &___PI_DIV2_6; }
	inline void set_PI_DIV2_6(float value)
	{
		___PI_DIV2_6 = value;
	}

	inline static int32_t get_offset_of_sequences_7() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___sequences_7)); }
	inline LTSeqU5BU5D_t5C740B5E327381CE2E6FD41B011EA9A72355FD51* get_sequences_7() const { return ___sequences_7; }
	inline LTSeqU5BU5D_t5C740B5E327381CE2E6FD41B011EA9A72355FD51** get_address_of_sequences_7() { return &___sequences_7; }
	inline void set_sequences_7(LTSeqU5BU5D_t5C740B5E327381CE2E6FD41B011EA9A72355FD51* value)
	{
		___sequences_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sequences_7), (void*)value);
	}

	inline static int32_t get_offset_of_tweens_8() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tweens_8)); }
	inline LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* get_tweens_8() const { return ___tweens_8; }
	inline LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F** get_address_of_tweens_8() { return &___tweens_8; }
	inline void set_tweens_8(LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* value)
	{
		___tweens_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweens_8), (void*)value);
	}

	inline static int32_t get_offset_of_tweensFinished_9() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tweensFinished_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tweensFinished_9() const { return ___tweensFinished_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tweensFinished_9() { return &___tweensFinished_9; }
	inline void set_tweensFinished_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tweensFinished_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweensFinished_9), (void*)value);
	}

	inline static int32_t get_offset_of_tweensFinishedIds_10() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tweensFinishedIds_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_tweensFinishedIds_10() const { return ___tweensFinishedIds_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_tweensFinishedIds_10() { return &___tweensFinishedIds_10; }
	inline void set_tweensFinishedIds_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___tweensFinishedIds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tweensFinishedIds_10), (void*)value);
	}

	inline static int32_t get_offset_of_tween_11() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tween_11)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_tween_11() const { return ___tween_11; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_tween_11() { return &___tween_11; }
	inline void set_tween_11(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___tween_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tween_11), (void*)value);
	}

	inline static int32_t get_offset_of_tweenMaxSearch_12() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___tweenMaxSearch_12)); }
	inline int32_t get_tweenMaxSearch_12() const { return ___tweenMaxSearch_12; }
	inline int32_t* get_address_of_tweenMaxSearch_12() { return &___tweenMaxSearch_12; }
	inline void set_tweenMaxSearch_12(int32_t value)
	{
		___tweenMaxSearch_12 = value;
	}

	inline static int32_t get_offset_of_maxTweens_13() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___maxTweens_13)); }
	inline int32_t get_maxTweens_13() const { return ___maxTweens_13; }
	inline int32_t* get_address_of_maxTweens_13() { return &___maxTweens_13; }
	inline void set_maxTweens_13(int32_t value)
	{
		___maxTweens_13 = value;
	}

	inline static int32_t get_offset_of_maxSequences_14() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___maxSequences_14)); }
	inline int32_t get_maxSequences_14() const { return ___maxSequences_14; }
	inline int32_t* get_address_of_maxSequences_14() { return &___maxSequences_14; }
	inline void set_maxSequences_14(int32_t value)
	{
		___maxSequences_14 = value;
	}

	inline static int32_t get_offset_of_frameRendered_15() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___frameRendered_15)); }
	inline int32_t get_frameRendered_15() const { return ___frameRendered_15; }
	inline int32_t* get_address_of_frameRendered_15() { return &___frameRendered_15; }
	inline void set_frameRendered_15(int32_t value)
	{
		___frameRendered_15 = value;
	}

	inline static int32_t get_offset_of__tweenEmpty_16() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ____tweenEmpty_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__tweenEmpty_16() const { return ____tweenEmpty_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__tweenEmpty_16() { return &____tweenEmpty_16; }
	inline void set__tweenEmpty_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____tweenEmpty_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tweenEmpty_16), (void*)value);
	}

	inline static int32_t get_offset_of_dtEstimated_17() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___dtEstimated_17)); }
	inline float get_dtEstimated_17() const { return ___dtEstimated_17; }
	inline float* get_address_of_dtEstimated_17() { return &___dtEstimated_17; }
	inline void set_dtEstimated_17(float value)
	{
		___dtEstimated_17 = value;
	}

	inline static int32_t get_offset_of_dtManual_18() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___dtManual_18)); }
	inline float get_dtManual_18() const { return ___dtManual_18; }
	inline float* get_address_of_dtManual_18() { return &___dtManual_18; }
	inline void set_dtManual_18(float value)
	{
		___dtManual_18 = value;
	}

	inline static int32_t get_offset_of_dtActual_19() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___dtActual_19)); }
	inline float get_dtActual_19() const { return ___dtActual_19; }
	inline float* get_address_of_dtActual_19() { return &___dtActual_19; }
	inline void set_dtActual_19(float value)
	{
		___dtActual_19 = value;
	}

	inline static int32_t get_offset_of_global_counter_20() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___global_counter_20)); }
	inline uint32_t get_global_counter_20() const { return ___global_counter_20; }
	inline uint32_t* get_address_of_global_counter_20() { return &___global_counter_20; }
	inline void set_global_counter_20(uint32_t value)
	{
		___global_counter_20 = value;
	}

	inline static int32_t get_offset_of_i_21() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___i_21)); }
	inline int32_t get_i_21() const { return ___i_21; }
	inline int32_t* get_address_of_i_21() { return &___i_21; }
	inline void set_i_21(int32_t value)
	{
		___i_21 = value;
	}

	inline static int32_t get_offset_of_j_22() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___j_22)); }
	inline int32_t get_j_22() const { return ___j_22; }
	inline int32_t* get_address_of_j_22() { return &___j_22; }
	inline void set_j_22(int32_t value)
	{
		___j_22 = value;
	}

	inline static int32_t get_offset_of_finishedCnt_23() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___finishedCnt_23)); }
	inline int32_t get_finishedCnt_23() const { return ___finishedCnt_23; }
	inline int32_t* get_address_of_finishedCnt_23() { return &___finishedCnt_23; }
	inline void set_finishedCnt_23(int32_t value)
	{
		___finishedCnt_23 = value;
	}

	inline static int32_t get_offset_of_punch_24() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___punch_24)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_punch_24() const { return ___punch_24; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_punch_24() { return &___punch_24; }
	inline void set_punch_24(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___punch_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___punch_24), (void*)value);
	}

	inline static int32_t get_offset_of_shake_25() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___shake_25)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_shake_25() const { return ___shake_25; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_shake_25() { return &___shake_25; }
	inline void set_shake_25(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___shake_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shake_25), (void*)value);
	}

	inline static int32_t get_offset_of_maxTweenReached_26() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___maxTweenReached_26)); }
	inline int32_t get_maxTweenReached_26() const { return ___maxTweenReached_26; }
	inline int32_t* get_address_of_maxTweenReached_26() { return &___maxTweenReached_26; }
	inline void set_maxTweenReached_26(int32_t value)
	{
		___maxTweenReached_26 = value;
	}

	inline static int32_t get_offset_of_startSearch_27() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___startSearch_27)); }
	inline int32_t get_startSearch_27() const { return ___startSearch_27; }
	inline int32_t* get_address_of_startSearch_27() { return &___startSearch_27; }
	inline void set_startSearch_27(int32_t value)
	{
		___startSearch_27 = value;
	}

	inline static int32_t get_offset_of_d_28() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___d_28)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_d_28() const { return ___d_28; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_d_28() { return &___d_28; }
	inline void set_d_28(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___d_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___d_28), (void*)value);
	}

	inline static int32_t get_offset_of_eventListeners_29() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___eventListeners_29)); }
	inline Action_1U5BU5D_t930658157BBD9409C35E85E5A34B23FC4EEF0772* get_eventListeners_29() const { return ___eventListeners_29; }
	inline Action_1U5BU5D_t930658157BBD9409C35E85E5A34B23FC4EEF0772** get_address_of_eventListeners_29() { return &___eventListeners_29; }
	inline void set_eventListeners_29(Action_1U5BU5D_t930658157BBD9409C35E85E5A34B23FC4EEF0772* value)
	{
		___eventListeners_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventListeners_29), (void*)value);
	}

	inline static int32_t get_offset_of_goListeners_30() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___goListeners_30)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_goListeners_30() const { return ___goListeners_30; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_goListeners_30() { return &___goListeners_30; }
	inline void set_goListeners_30(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___goListeners_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goListeners_30), (void*)value);
	}

	inline static int32_t get_offset_of_eventsMaxSearch_31() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___eventsMaxSearch_31)); }
	inline int32_t get_eventsMaxSearch_31() const { return ___eventsMaxSearch_31; }
	inline int32_t* get_address_of_eventsMaxSearch_31() { return &___eventsMaxSearch_31; }
	inline void set_eventsMaxSearch_31(int32_t value)
	{
		___eventsMaxSearch_31 = value;
	}

	inline static int32_t get_offset_of_EVENTS_MAX_32() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___EVENTS_MAX_32)); }
	inline int32_t get_EVENTS_MAX_32() const { return ___EVENTS_MAX_32; }
	inline int32_t* get_address_of_EVENTS_MAX_32() { return &___EVENTS_MAX_32; }
	inline void set_EVENTS_MAX_32(int32_t value)
	{
		___EVENTS_MAX_32 = value;
	}

	inline static int32_t get_offset_of_LISTENERS_MAX_33() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___LISTENERS_MAX_33)); }
	inline int32_t get_LISTENERS_MAX_33() const { return ___LISTENERS_MAX_33; }
	inline int32_t* get_address_of_LISTENERS_MAX_33() { return &___LISTENERS_MAX_33; }
	inline void set_LISTENERS_MAX_33(int32_t value)
	{
		___LISTENERS_MAX_33 = value;
	}

	inline static int32_t get_offset_of_INIT_LISTENERS_MAX_34() { return static_cast<int32_t>(offsetof(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields, ___INIT_LISTENERS_MAX_34)); }
	inline int32_t get_INIT_LISTENERS_MAX_34() const { return ___INIT_LISTENERS_MAX_34; }
	inline int32_t* get_address_of_INIT_LISTENERS_MAX_34() { return &___INIT_LISTENERS_MAX_34; }
	inline void set_INIT_LISTENERS_MAX_34(int32_t value)
	{
		___INIT_LISTENERS_MAX_34 = value;
	}
};


// SFXManager
struct SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource SFXManager::AudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AudioSource_5;
	// UnityEngine.AudioSource SFXManager::MusicAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___MusicAudioSource_6;
	// UnityEngine.AudioSource SFXManager::ExtraMusicAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___ExtraMusicAudioSource_7;
	// UnityEngine.AudioClip[] SFXManager::AudioClips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___AudioClips_8;
	// UnityEngine.GameObject SFXManager::MusicOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MusicOnButton_9;
	// UnityEngine.GameObject SFXManager::MusicOffButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MusicOffButton_10;
	// UnityEngine.GameObject SFXManager::SFXOnButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SFXOnButton_11;
	// UnityEngine.GameObject SFXManager::SFXOffButton
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SFXOffButton_12;
	// System.Boolean SFXManager::CanPlaySFX
	bool ___CanPlaySFX_13;
	// System.Boolean SFXManager::CanPlayMusic
	bool ___CanPlayMusic_14;

public:
	inline static int32_t get_offset_of_AudioSource_5() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___AudioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AudioSource_5() const { return ___AudioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AudioSource_5() { return &___AudioSource_5; }
	inline void set_AudioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AudioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_MusicAudioSource_6() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___MusicAudioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_MusicAudioSource_6() const { return ___MusicAudioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_MusicAudioSource_6() { return &___MusicAudioSource_6; }
	inline void set_MusicAudioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___MusicAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicAudioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_ExtraMusicAudioSource_7() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___ExtraMusicAudioSource_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_ExtraMusicAudioSource_7() const { return ___ExtraMusicAudioSource_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_ExtraMusicAudioSource_7() { return &___ExtraMusicAudioSource_7; }
	inline void set_ExtraMusicAudioSource_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___ExtraMusicAudioSource_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExtraMusicAudioSource_7), (void*)value);
	}

	inline static int32_t get_offset_of_AudioClips_8() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___AudioClips_8)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_AudioClips_8() const { return ___AudioClips_8; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_AudioClips_8() { return &___AudioClips_8; }
	inline void set_AudioClips_8(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___AudioClips_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioClips_8), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOnButton_9() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___MusicOnButton_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MusicOnButton_9() const { return ___MusicOnButton_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MusicOnButton_9() { return &___MusicOnButton_9; }
	inline void set_MusicOnButton_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MusicOnButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOnButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_MusicOffButton_10() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___MusicOffButton_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MusicOffButton_10() const { return ___MusicOffButton_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MusicOffButton_10() { return &___MusicOffButton_10; }
	inline void set_MusicOffButton_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MusicOffButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicOffButton_10), (void*)value);
	}

	inline static int32_t get_offset_of_SFXOnButton_11() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___SFXOnButton_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SFXOnButton_11() const { return ___SFXOnButton_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SFXOnButton_11() { return &___SFXOnButton_11; }
	inline void set_SFXOnButton_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SFXOnButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SFXOnButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_SFXOffButton_12() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___SFXOffButton_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SFXOffButton_12() const { return ___SFXOffButton_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SFXOffButton_12() { return &___SFXOffButton_12; }
	inline void set_SFXOffButton_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SFXOffButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SFXOffButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_CanPlaySFX_13() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___CanPlaySFX_13)); }
	inline bool get_CanPlaySFX_13() const { return ___CanPlaySFX_13; }
	inline bool* get_address_of_CanPlaySFX_13() { return &___CanPlaySFX_13; }
	inline void set_CanPlaySFX_13(bool value)
	{
		___CanPlaySFX_13 = value;
	}

	inline static int32_t get_offset_of_CanPlayMusic_14() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5, ___CanPlayMusic_14)); }
	inline bool get_CanPlayMusic_14() const { return ___CanPlayMusic_14; }
	inline bool* get_address_of_CanPlayMusic_14() { return &___CanPlayMusic_14; }
	inline void set_CanPlayMusic_14(bool value)
	{
		___CanPlayMusic_14 = value;
	}
};

struct SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5_StaticFields
{
public:
	// SFXManager SFXManager::Instance
	SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * ___Instance_4;

public:
	inline static int32_t get_offset_of_Instance_4() { return static_cast<int32_t>(offsetof(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5_StaticFields, ___Instance_4)); }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * get_Instance_4() const { return ___Instance_4; }
	inline SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 ** get_address_of_Instance_4() { return &___Instance_4; }
	inline void set_Instance_4(SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * value)
	{
		___Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_4), (void*)value);
	}
};


// TestingPunch
struct TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AnimationCurve TestingPunch::exportCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___exportCurve_4;
	// System.Single TestingPunch::overShootValue
	float ___overShootValue_5;
	// LTDescr TestingPunch::descr
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___descr_6;

public:
	inline static int32_t get_offset_of_exportCurve_4() { return static_cast<int32_t>(offsetof(TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232, ___exportCurve_4)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_exportCurve_4() const { return ___exportCurve_4; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_exportCurve_4() { return &___exportCurve_4; }
	inline void set_exportCurve_4(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___exportCurve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exportCurve_4), (void*)value);
	}

	inline static int32_t get_offset_of_overShootValue_5() { return static_cast<int32_t>(offsetof(TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232, ___overShootValue_5)); }
	inline float get_overShootValue_5() const { return ___overShootValue_5; }
	inline float* get_address_of_overShootValue_5() { return &___overShootValue_5; }
	inline void set_overShootValue_5(float value)
	{
		___overShootValue_5 = value;
	}

	inline static int32_t get_offset_of_descr_6() { return static_cast<int32_t>(offsetof(TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232, ___descr_6)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_descr_6() const { return ___descr_6; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_descr_6() { return &___descr_6; }
	inline void set_descr_6(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___descr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descr_6), (void*)value);
	}
};


// DentedPixel.LTExamples.TestingUnitTests
struct TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cube1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cube1_4;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cube2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cube2_5;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cube3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cube3_6;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cube4
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cube4_7;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cubeAlpha1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeAlpha1_8;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cubeAlpha2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cubeAlpha2_9;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests::eventGameObjectWasCalled
	bool ___eventGameObjectWasCalled_10;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests::eventGeneralWasCalled
	bool ___eventGeneralWasCalled_11;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests::lt1Id
	int32_t ___lt1Id_12;
	// LTDescr DentedPixel.LTExamples.TestingUnitTests::lt2
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___lt2_13;
	// LTDescr DentedPixel.LTExamples.TestingUnitTests::lt3
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___lt3_14;
	// LTDescr DentedPixel.LTExamples.TestingUnitTests::lt4
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___lt4_15;
	// LTDescr[] DentedPixel.LTExamples.TestingUnitTests::groupTweens
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* ___groupTweens_16;
	// UnityEngine.GameObject[] DentedPixel.LTExamples.TestingUnitTests::groupGOs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___groupGOs_17;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests::groupTweensCnt
	int32_t ___groupTweensCnt_18;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests::rotateRepeat
	int32_t ___rotateRepeat_19;
	// System.Int32 DentedPixel.LTExamples.TestingUnitTests::rotateRepeatAngle
	int32_t ___rotateRepeatAngle_20;
	// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::boxNoCollider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boxNoCollider_21;
	// System.Single DentedPixel.LTExamples.TestingUnitTests::timeElapsedNormalTimeScale
	float ___timeElapsedNormalTimeScale_22;
	// System.Single DentedPixel.LTExamples.TestingUnitTests::timeElapsedIgnoreTimeScale
	float ___timeElapsedIgnoreTimeScale_23;
	// System.Boolean DentedPixel.LTExamples.TestingUnitTests::pauseTweenDidFinish
	bool ___pauseTweenDidFinish_24;

public:
	inline static int32_t get_offset_of_cube1_4() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cube1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cube1_4() const { return ___cube1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cube1_4() { return &___cube1_4; }
	inline void set_cube1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cube1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube1_4), (void*)value);
	}

	inline static int32_t get_offset_of_cube2_5() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cube2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cube2_5() const { return ___cube2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cube2_5() { return &___cube2_5; }
	inline void set_cube2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cube2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube2_5), (void*)value);
	}

	inline static int32_t get_offset_of_cube3_6() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cube3_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cube3_6() const { return ___cube3_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cube3_6() { return &___cube3_6; }
	inline void set_cube3_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cube3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube3_6), (void*)value);
	}

	inline static int32_t get_offset_of_cube4_7() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cube4_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cube4_7() const { return ___cube4_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cube4_7() { return &___cube4_7; }
	inline void set_cube4_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cube4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cube4_7), (void*)value);
	}

	inline static int32_t get_offset_of_cubeAlpha1_8() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cubeAlpha1_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeAlpha1_8() const { return ___cubeAlpha1_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeAlpha1_8() { return &___cubeAlpha1_8; }
	inline void set_cubeAlpha1_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeAlpha1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeAlpha1_8), (void*)value);
	}

	inline static int32_t get_offset_of_cubeAlpha2_9() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___cubeAlpha2_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cubeAlpha2_9() const { return ___cubeAlpha2_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cubeAlpha2_9() { return &___cubeAlpha2_9; }
	inline void set_cubeAlpha2_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cubeAlpha2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cubeAlpha2_9), (void*)value);
	}

	inline static int32_t get_offset_of_eventGameObjectWasCalled_10() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___eventGameObjectWasCalled_10)); }
	inline bool get_eventGameObjectWasCalled_10() const { return ___eventGameObjectWasCalled_10; }
	inline bool* get_address_of_eventGameObjectWasCalled_10() { return &___eventGameObjectWasCalled_10; }
	inline void set_eventGameObjectWasCalled_10(bool value)
	{
		___eventGameObjectWasCalled_10 = value;
	}

	inline static int32_t get_offset_of_eventGeneralWasCalled_11() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___eventGeneralWasCalled_11)); }
	inline bool get_eventGeneralWasCalled_11() const { return ___eventGeneralWasCalled_11; }
	inline bool* get_address_of_eventGeneralWasCalled_11() { return &___eventGeneralWasCalled_11; }
	inline void set_eventGeneralWasCalled_11(bool value)
	{
		___eventGeneralWasCalled_11 = value;
	}

	inline static int32_t get_offset_of_lt1Id_12() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___lt1Id_12)); }
	inline int32_t get_lt1Id_12() const { return ___lt1Id_12; }
	inline int32_t* get_address_of_lt1Id_12() { return &___lt1Id_12; }
	inline void set_lt1Id_12(int32_t value)
	{
		___lt1Id_12 = value;
	}

	inline static int32_t get_offset_of_lt2_13() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___lt2_13)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_lt2_13() const { return ___lt2_13; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_lt2_13() { return &___lt2_13; }
	inline void set_lt2_13(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___lt2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lt2_13), (void*)value);
	}

	inline static int32_t get_offset_of_lt3_14() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___lt3_14)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_lt3_14() const { return ___lt3_14; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_lt3_14() { return &___lt3_14; }
	inline void set_lt3_14(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___lt3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lt3_14), (void*)value);
	}

	inline static int32_t get_offset_of_lt4_15() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___lt4_15)); }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * get_lt4_15() const { return ___lt4_15; }
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** get_address_of_lt4_15() { return &___lt4_15; }
	inline void set_lt4_15(LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		___lt4_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lt4_15), (void*)value);
	}

	inline static int32_t get_offset_of_groupTweens_16() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___groupTweens_16)); }
	inline LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* get_groupTweens_16() const { return ___groupTweens_16; }
	inline LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F** get_address_of_groupTweens_16() { return &___groupTweens_16; }
	inline void set_groupTweens_16(LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* value)
	{
		___groupTweens_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupTweens_16), (void*)value);
	}

	inline static int32_t get_offset_of_groupGOs_17() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___groupGOs_17)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_groupGOs_17() const { return ___groupGOs_17; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_groupGOs_17() { return &___groupGOs_17; }
	inline void set_groupGOs_17(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___groupGOs_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groupGOs_17), (void*)value);
	}

	inline static int32_t get_offset_of_groupTweensCnt_18() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___groupTweensCnt_18)); }
	inline int32_t get_groupTweensCnt_18() const { return ___groupTweensCnt_18; }
	inline int32_t* get_address_of_groupTweensCnt_18() { return &___groupTweensCnt_18; }
	inline void set_groupTweensCnt_18(int32_t value)
	{
		___groupTweensCnt_18 = value;
	}

	inline static int32_t get_offset_of_rotateRepeat_19() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___rotateRepeat_19)); }
	inline int32_t get_rotateRepeat_19() const { return ___rotateRepeat_19; }
	inline int32_t* get_address_of_rotateRepeat_19() { return &___rotateRepeat_19; }
	inline void set_rotateRepeat_19(int32_t value)
	{
		___rotateRepeat_19 = value;
	}

	inline static int32_t get_offset_of_rotateRepeatAngle_20() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___rotateRepeatAngle_20)); }
	inline int32_t get_rotateRepeatAngle_20() const { return ___rotateRepeatAngle_20; }
	inline int32_t* get_address_of_rotateRepeatAngle_20() { return &___rotateRepeatAngle_20; }
	inline void set_rotateRepeatAngle_20(int32_t value)
	{
		___rotateRepeatAngle_20 = value;
	}

	inline static int32_t get_offset_of_boxNoCollider_21() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___boxNoCollider_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boxNoCollider_21() const { return ___boxNoCollider_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boxNoCollider_21() { return &___boxNoCollider_21; }
	inline void set_boxNoCollider_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boxNoCollider_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxNoCollider_21), (void*)value);
	}

	inline static int32_t get_offset_of_timeElapsedNormalTimeScale_22() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___timeElapsedNormalTimeScale_22)); }
	inline float get_timeElapsedNormalTimeScale_22() const { return ___timeElapsedNormalTimeScale_22; }
	inline float* get_address_of_timeElapsedNormalTimeScale_22() { return &___timeElapsedNormalTimeScale_22; }
	inline void set_timeElapsedNormalTimeScale_22(float value)
	{
		___timeElapsedNormalTimeScale_22 = value;
	}

	inline static int32_t get_offset_of_timeElapsedIgnoreTimeScale_23() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___timeElapsedIgnoreTimeScale_23)); }
	inline float get_timeElapsedIgnoreTimeScale_23() const { return ___timeElapsedIgnoreTimeScale_23; }
	inline float* get_address_of_timeElapsedIgnoreTimeScale_23() { return &___timeElapsedIgnoreTimeScale_23; }
	inline void set_timeElapsedIgnoreTimeScale_23(float value)
	{
		___timeElapsedIgnoreTimeScale_23 = value;
	}

	inline static int32_t get_offset_of_pauseTweenDidFinish_24() { return static_cast<int32_t>(offsetof(TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757, ___pauseTweenDidFinish_24)); }
	inline bool get_pauseTweenDidFinish_24() const { return ___pauseTweenDidFinish_24; }
	inline bool* get_address_of_pauseTweenDidFinish_24() { return &___pauseTweenDidFinish_24; }
	inline void set_pauseTweenDidFinish_24(bool value)
	{
		___pauseTweenDidFinish_24 = value;
	}
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIManager::CustomKeyBoardCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CustomKeyBoardCanvas_4;
	// UnityEngine.GameObject UIManager::StartButtonCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___StartButtonCanvas_5;
	// UnityEngine.UI.InputField UIManager::NameInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___NameInputField_6;
	// UnityEngine.GameObject UIManager::InputFieldCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___InputFieldCanvas_7;
	// UnityEngine.GameObject UIManager::NoAdsCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NoAdsCanvas_8;
	// UnityEngine.GameObject UIManager::AvatarImageCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AvatarImageCanvas_9;
	// UnityEngine.GameObject UIManager::CoinsCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CoinsCanvas_10;
	// UnityEngine.GameObject UIManager::SettingsCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SettingsCanvas_11;
	// UnityEngine.UI.Text UIManager::RoundNumber
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___RoundNumber_12;
	// UnityEngine.UI.Image UIManager::PresenterSpeechBubble
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___PresenterSpeechBubble_13;
	// UnityEngine.UI.Text UIManager::PresenterSpeechBubbleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PresenterSpeechBubbleText_14;
	// UnityEngine.GameObject UIManager::SubmitButtonCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SubmitButtonCanvas_15;
	// UnityEngine.GameObject UIManager::HintButtonCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___HintButtonCanvas_16;
	// UnityEngine.CanvasGroup UIManager::FadeoutCanvas
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___FadeoutCanvas_17;
	// UnityEngine.GameObject UIManager::PrizeImagesCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PrizeImagesCanvas_18;
	// UnityEngine.GameObject UIManager::ChooseCharactersCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ChooseCharactersCanvas_19;
	// UnityEngine.CanvasGroup UIManager::RoundEndCanvas
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___RoundEndCanvas_20;
	// UnityEngine.GameObject UIManager::GiftCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GiftCanvas_21;
	// UnityEngine.GameObject UIManager::ClaimGiftCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ClaimGiftCanvas_22;
	// HintButton[] UIManager::HintButtons
	HintButtonU5BU5D_t326B9488C75B74AD927B7B34759512F840CC062D* ___HintButtons_23;
	// UnityEngine.GameObject UIManager::IdiomImageCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___IdiomImageCanvas_24;
	// UnityEngine.UI.Slider UIManager::RoundProgressBar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___RoundProgressBar_25;
	// UnityEngine.Sprite UIManager::FadeOutStarImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___FadeOutStarImage_26;
	// UnityEngine.UI.Image[] UIManager::StarImages
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___StarImages_27;
	// System.Int32 UIManager::starIndex
	int32_t ___starIndex_28;
	// UnityEngine.GameObject UIManager::ScreenCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ScreenCanvas_29;
	// UnityEngine.UI.Text UIManager::ScreenRoundNumberText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ScreenRoundNumberText_30;
	// UnityEngine.UI.Text[] UIManager::LeaderBoardNames
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___LeaderBoardNames_31;
	// UnityEngine.UI.Image[] UIManager::AvatarsImages
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___AvatarsImages_32;
	// UnityEngine.UI.Text[] UIManager::AvatarsScoreText
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___AvatarsScoreText_33;

public:
	inline static int32_t get_offset_of_CustomKeyBoardCanvas_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___CustomKeyBoardCanvas_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CustomKeyBoardCanvas_4() const { return ___CustomKeyBoardCanvas_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CustomKeyBoardCanvas_4() { return &___CustomKeyBoardCanvas_4; }
	inline void set_CustomKeyBoardCanvas_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CustomKeyBoardCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomKeyBoardCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartButtonCanvas_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___StartButtonCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_StartButtonCanvas_5() const { return ___StartButtonCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_StartButtonCanvas_5() { return &___StartButtonCanvas_5; }
	inline void set_StartButtonCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___StartButtonCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartButtonCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_NameInputField_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___NameInputField_6)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_NameInputField_6() const { return ___NameInputField_6; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_NameInputField_6() { return &___NameInputField_6; }
	inline void set_NameInputField_6(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___NameInputField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameInputField_6), (void*)value);
	}

	inline static int32_t get_offset_of_InputFieldCanvas_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___InputFieldCanvas_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_InputFieldCanvas_7() const { return ___InputFieldCanvas_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_InputFieldCanvas_7() { return &___InputFieldCanvas_7; }
	inline void set_InputFieldCanvas_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___InputFieldCanvas_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InputFieldCanvas_7), (void*)value);
	}

	inline static int32_t get_offset_of_NoAdsCanvas_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___NoAdsCanvas_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NoAdsCanvas_8() const { return ___NoAdsCanvas_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NoAdsCanvas_8() { return &___NoAdsCanvas_8; }
	inline void set_NoAdsCanvas_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NoAdsCanvas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoAdsCanvas_8), (void*)value);
	}

	inline static int32_t get_offset_of_AvatarImageCanvas_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___AvatarImageCanvas_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AvatarImageCanvas_9() const { return ___AvatarImageCanvas_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AvatarImageCanvas_9() { return &___AvatarImageCanvas_9; }
	inline void set_AvatarImageCanvas_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AvatarImageCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AvatarImageCanvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_CoinsCanvas_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___CoinsCanvas_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CoinsCanvas_10() const { return ___CoinsCanvas_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CoinsCanvas_10() { return &___CoinsCanvas_10; }
	inline void set_CoinsCanvas_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CoinsCanvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoinsCanvas_10), (void*)value);
	}

	inline static int32_t get_offset_of_SettingsCanvas_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___SettingsCanvas_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SettingsCanvas_11() const { return ___SettingsCanvas_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SettingsCanvas_11() { return &___SettingsCanvas_11; }
	inline void set_SettingsCanvas_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SettingsCanvas_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SettingsCanvas_11), (void*)value);
	}

	inline static int32_t get_offset_of_RoundNumber_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___RoundNumber_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_RoundNumber_12() const { return ___RoundNumber_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_RoundNumber_12() { return &___RoundNumber_12; }
	inline void set_RoundNumber_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___RoundNumber_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoundNumber_12), (void*)value);
	}

	inline static int32_t get_offset_of_PresenterSpeechBubble_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PresenterSpeechBubble_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_PresenterSpeechBubble_13() const { return ___PresenterSpeechBubble_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_PresenterSpeechBubble_13() { return &___PresenterSpeechBubble_13; }
	inline void set_PresenterSpeechBubble_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___PresenterSpeechBubble_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenterSpeechBubble_13), (void*)value);
	}

	inline static int32_t get_offset_of_PresenterSpeechBubbleText_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PresenterSpeechBubbleText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PresenterSpeechBubbleText_14() const { return ___PresenterSpeechBubbleText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PresenterSpeechBubbleText_14() { return &___PresenterSpeechBubbleText_14; }
	inline void set_PresenterSpeechBubbleText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PresenterSpeechBubbleText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PresenterSpeechBubbleText_14), (void*)value);
	}

	inline static int32_t get_offset_of_SubmitButtonCanvas_15() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___SubmitButtonCanvas_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SubmitButtonCanvas_15() const { return ___SubmitButtonCanvas_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SubmitButtonCanvas_15() { return &___SubmitButtonCanvas_15; }
	inline void set_SubmitButtonCanvas_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SubmitButtonCanvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubmitButtonCanvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_HintButtonCanvas_16() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___HintButtonCanvas_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_HintButtonCanvas_16() const { return ___HintButtonCanvas_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_HintButtonCanvas_16() { return &___HintButtonCanvas_16; }
	inline void set_HintButtonCanvas_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___HintButtonCanvas_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HintButtonCanvas_16), (void*)value);
	}

	inline static int32_t get_offset_of_FadeoutCanvas_17() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___FadeoutCanvas_17)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_FadeoutCanvas_17() const { return ___FadeoutCanvas_17; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_FadeoutCanvas_17() { return &___FadeoutCanvas_17; }
	inline void set_FadeoutCanvas_17(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___FadeoutCanvas_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeoutCanvas_17), (void*)value);
	}

	inline static int32_t get_offset_of_PrizeImagesCanvas_18() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___PrizeImagesCanvas_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PrizeImagesCanvas_18() const { return ___PrizeImagesCanvas_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PrizeImagesCanvas_18() { return &___PrizeImagesCanvas_18; }
	inline void set_PrizeImagesCanvas_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PrizeImagesCanvas_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrizeImagesCanvas_18), (void*)value);
	}

	inline static int32_t get_offset_of_ChooseCharactersCanvas_19() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ChooseCharactersCanvas_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ChooseCharactersCanvas_19() const { return ___ChooseCharactersCanvas_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ChooseCharactersCanvas_19() { return &___ChooseCharactersCanvas_19; }
	inline void set_ChooseCharactersCanvas_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ChooseCharactersCanvas_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChooseCharactersCanvas_19), (void*)value);
	}

	inline static int32_t get_offset_of_RoundEndCanvas_20() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___RoundEndCanvas_20)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_RoundEndCanvas_20() const { return ___RoundEndCanvas_20; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_RoundEndCanvas_20() { return &___RoundEndCanvas_20; }
	inline void set_RoundEndCanvas_20(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___RoundEndCanvas_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoundEndCanvas_20), (void*)value);
	}

	inline static int32_t get_offset_of_GiftCanvas_21() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___GiftCanvas_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GiftCanvas_21() const { return ___GiftCanvas_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GiftCanvas_21() { return &___GiftCanvas_21; }
	inline void set_GiftCanvas_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GiftCanvas_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GiftCanvas_21), (void*)value);
	}

	inline static int32_t get_offset_of_ClaimGiftCanvas_22() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ClaimGiftCanvas_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ClaimGiftCanvas_22() const { return ___ClaimGiftCanvas_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ClaimGiftCanvas_22() { return &___ClaimGiftCanvas_22; }
	inline void set_ClaimGiftCanvas_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ClaimGiftCanvas_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClaimGiftCanvas_22), (void*)value);
	}

	inline static int32_t get_offset_of_HintButtons_23() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___HintButtons_23)); }
	inline HintButtonU5BU5D_t326B9488C75B74AD927B7B34759512F840CC062D* get_HintButtons_23() const { return ___HintButtons_23; }
	inline HintButtonU5BU5D_t326B9488C75B74AD927B7B34759512F840CC062D** get_address_of_HintButtons_23() { return &___HintButtons_23; }
	inline void set_HintButtons_23(HintButtonU5BU5D_t326B9488C75B74AD927B7B34759512F840CC062D* value)
	{
		___HintButtons_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HintButtons_23), (void*)value);
	}

	inline static int32_t get_offset_of_IdiomImageCanvas_24() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___IdiomImageCanvas_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_IdiomImageCanvas_24() const { return ___IdiomImageCanvas_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_IdiomImageCanvas_24() { return &___IdiomImageCanvas_24; }
	inline void set_IdiomImageCanvas_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___IdiomImageCanvas_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IdiomImageCanvas_24), (void*)value);
	}

	inline static int32_t get_offset_of_RoundProgressBar_25() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___RoundProgressBar_25)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_RoundProgressBar_25() const { return ___RoundProgressBar_25; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_RoundProgressBar_25() { return &___RoundProgressBar_25; }
	inline void set_RoundProgressBar_25(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___RoundProgressBar_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoundProgressBar_25), (void*)value);
	}

	inline static int32_t get_offset_of_FadeOutStarImage_26() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___FadeOutStarImage_26)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_FadeOutStarImage_26() const { return ___FadeOutStarImage_26; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_FadeOutStarImage_26() { return &___FadeOutStarImage_26; }
	inline void set_FadeOutStarImage_26(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___FadeOutStarImage_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FadeOutStarImage_26), (void*)value);
	}

	inline static int32_t get_offset_of_StarImages_27() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___StarImages_27)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_StarImages_27() const { return ___StarImages_27; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_StarImages_27() { return &___StarImages_27; }
	inline void set_StarImages_27(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___StarImages_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StarImages_27), (void*)value);
	}

	inline static int32_t get_offset_of_starIndex_28() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___starIndex_28)); }
	inline int32_t get_starIndex_28() const { return ___starIndex_28; }
	inline int32_t* get_address_of_starIndex_28() { return &___starIndex_28; }
	inline void set_starIndex_28(int32_t value)
	{
		___starIndex_28 = value;
	}

	inline static int32_t get_offset_of_ScreenCanvas_29() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ScreenCanvas_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ScreenCanvas_29() const { return ___ScreenCanvas_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ScreenCanvas_29() { return &___ScreenCanvas_29; }
	inline void set_ScreenCanvas_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ScreenCanvas_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScreenCanvas_29), (void*)value);
	}

	inline static int32_t get_offset_of_ScreenRoundNumberText_30() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ScreenRoundNumberText_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ScreenRoundNumberText_30() const { return ___ScreenRoundNumberText_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ScreenRoundNumberText_30() { return &___ScreenRoundNumberText_30; }
	inline void set_ScreenRoundNumberText_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ScreenRoundNumberText_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScreenRoundNumberText_30), (void*)value);
	}

	inline static int32_t get_offset_of_LeaderBoardNames_31() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___LeaderBoardNames_31)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_LeaderBoardNames_31() const { return ___LeaderBoardNames_31; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_LeaderBoardNames_31() { return &___LeaderBoardNames_31; }
	inline void set_LeaderBoardNames_31(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___LeaderBoardNames_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeaderBoardNames_31), (void*)value);
	}

	inline static int32_t get_offset_of_AvatarsImages_32() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___AvatarsImages_32)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_AvatarsImages_32() const { return ___AvatarsImages_32; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_AvatarsImages_32() { return &___AvatarsImages_32; }
	inline void set_AvatarsImages_32(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___AvatarsImages_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AvatarsImages_32), (void*)value);
	}

	inline static int32_t get_offset_of_AvatarsScoreText_33() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___AvatarsScoreText_33)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_AvatarsScoreText_33() const { return ___AvatarsScoreText_33; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_AvatarsScoreText_33() { return &___AvatarsScoreText_33; }
	inline void set_AvatarsScoreText_33(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___AvatarsScoreText_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AvatarsScoreText_33), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// LTDescr[]
struct LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * m_Items[1];

public:
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_gshared (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_gshared (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void Purchaser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2871483023CD51DFCE69C7BE765AC8D98D4CC3A0 (U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void TestingPunch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF00B82FD7B30077FBDE19AD680A208A4C3BA70F9 (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC (Light_tA2F349FE839781469A0344CF6039B51512394275 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4403EE165173DC522103616E6645018625DE513 (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method);
// System.Void LeanTest::expect(System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B (bool ___didPass0, String_t* ___definition1, String_t* ___failExplaination2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void LeanTween::cancel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Void LeanTween::cancel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_cancel_m8F235169322AEA85E23C774745EED07BD83D344E (int32_t ___uniqueId0, const RuntimeMethod* method);
// LTDescr LeanTween::descr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_descr_m0686304AC8834008456087DDB221577D87246C90 (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LTDescr LTDescr::setOnComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onComplete0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_m42740028F7DBAC0910C2B0D8FE48AE424104B01F (U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * __this, const RuntimeMethod* method);
// LTDescr LTDescr::setTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setTime_m0DE4EDC9DA5F9D6B5255BCA73A198E18F0A320A4 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, float ___time0, const RuntimeMethod* method);
// LTDescr LeanTween::delayedCall(System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_delayedCall_mF74ECC6AC349466F55E56C4625DB67892553A59A (float ___delayTime0, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback1, const RuntimeMethod* method);
// LTDescr LTDescr::setOnStart(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnStart_m37383DCD917312D49E2291F3A47F8F9361155A1A (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onStart0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// LTDescr LeanTween::delayedCall(UnityEngine.GameObject,System.Single,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_delayedCall_m537234980306375FFF55F428FE0F5AF5F35AD1CB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___delayTime1, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// LTDescr LeanTween::move(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, float ___time2, const RuntimeMethod* method);
// System.Int32 LTDescr::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// LTDescr LeanTween::color(UnityEngine.GameObject,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_color_mB591490EB11BF6AAB3D9C823844CD51A54CB54AF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___to1, float ___time2, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.GameObject DentedPixel.LTExamples.TestingUnitTests::cubeNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6 (TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * __this, String_t* ___name0, const RuntimeMethod* method);
// LTDescr LeanTweenExt::LeanMoveX(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTweenExt_LeanMoveX_m95E776B4AFF3B3472159C21ACCA7A074FD6250E1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___to1, float ___time2, const RuntimeMethod* method);
// System.Collections.IEnumerator DentedPixel.LTExamples.TestingUnitTests::pauseTimeNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestingUnitTests_pauseTimeNow_m3293FFC3DDEC01D507093F2D2B8E34B40FC0DD7F (TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// LTDescr LTDescr::setUseEstimatedTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setUseEstimatedTime_m1882A739CA3F9CE2F6215C61E92D4D5108F352EE (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, bool ___useEstimatedTime0, const RuntimeMethod* method);
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m8818C4F306B80B7FEE062793CBEBEAB352E53F22 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method);
// LTDescr LeanTween::moveX(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___to1, float ___time2, const RuntimeMethod* method);
// LTDescr LTDescr::setIgnoreTimeScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setIgnoreTimeScale_mDD2DF875144DFBA017697139ECD83164182DD6C9 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, bool ___useUnScaledTime0, const RuntimeMethod* method);
// LTDescr[] LeanTween::descriptions(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* LeanTween_descriptions_m2ADDBCE0DFC78640128B7224DD86FE6C3938D76C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// UnityEngine.Vector3 LTDescr::get_to()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LTDescr_get_to_m3887E20BF193FF607A48502338A46C90948F5FA5_inline (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// LTDescr LeanTween::value(UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_value_m16722DEDC681F28C188D0F4557F0BF9B6A1488AF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___from1, float ___to2, float ___time3, const RuntimeMethod* method);
// System.Void System.Action`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3 (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_gshared)(__this, ___object0, ___method1, method);
}
// LTDescr LTDescr::setOnUpdate(System.Action`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnUpdate_m55FBE2275AB200DCFB3793FA745A238491E7072B (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * ___onUpdate0, const RuntimeMethod* method);
// LTDescr LTDescr::pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_pause_m831C5988C87832DF30D6566086DD174849A8712A (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// LTDescr LeanTween::moveLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_moveLocal_m5EFEFD16EBF5E4EFC333418953F72DA504E191A0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___to1, float ___time2, const RuntimeMethod* method);
// System.Void LTBezierPath::.ctor(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LTBezierPath__ctor_m761CE6701D4AF322CDF34898E4A75EE3996EEF32 (LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___pts_0, const RuntimeMethod* method);
// System.Single LTBezierPath::ratioAtPoint(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LTBezierPath_ratioAtPoint_m143BC2A593074BDC7858B6861351A0D044EC38C3 (LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pt0, float ___precision1, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// LTDescr LeanTween::moveSplineLocal(UnityEngine.GameObject,UnityEngine.Vector3[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_moveSplineLocal_m280D26BA7DE193E5F3EBB523ACEE6E44FF0978B7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___to1, float ___time2, const RuntimeMethod* method);
// LTSeq LeanTween::sequence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * LeanTween_sequence_m8FE5B82BEF69D9AF66D54E849587B4CF933E34A5 (bool ___initSequence0, const RuntimeMethod* method);
// LTSeq LTSeq::append(LTDescr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * LTSeq_append_m16B953CD94139BC1C75791A5D461C744EA4ECA64 (LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * __this, LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * ___tween0, const RuntimeMethod* method);
// LTSeq LTSeq::append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * LTSeq_append_m9CCA2E2A2FEC8BB783E6973C5259009DE1F2CA93 (LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * __this, float ___delay0, const RuntimeMethod* method);
// LTDescr LeanTween::scaleX(UnityEngine.GameObject,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_scaleX_m4DCF8A388D1FE2AF9C40F67DDB77B958DE1F0220 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, float ___to1, float ___time2, const RuntimeMethod* method);
// LTSeq LTSeq::append(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * LTSeq_append_m918D5B42DF7E78F1D632BDFB559566153BC03151 (LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// LTSeq LTSeq::setScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * LTSeq_setScale_m01A80A5EF1549289CCFE8F7E7176A5B669781699 (LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * __this, float ___timeScale0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// LTDescr LTDescr::setLoopPingPong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setLoopPingPong_mB14D4AD3878CB744ADBB3F0B933E1C50CACEDC18 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// LTDescr LTDescr::setRepeat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setRepeat_m7D66B000EF60DCC943D848C1BF53BD7C7BEF8313 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, int32_t ___repeat0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743 (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_gshared)(__this, ___object0, ___method1, method);
}
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector3>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnUpdate_m5356685ADFD38D45881211740E990617C0F2A80D (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * ___onUpdate0, RuntimeObject * ___onUpdateParam1, const RuntimeMethod* method);
// LTDescr LTDescr::setOnCompleteParam(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnCompleteParam_m0DF2C3997947B6F72DFD4AA1BAEC841B8B84DD63 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, RuntimeObject * ___onCompleteParam0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnComplete_m61B62A9BB1DE6DC69EB97F111139AB379A2AB33C (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___onComplete0, const RuntimeMethod* method);
// LTDescr LeanTween::description(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_description_mCF024DD0005701DAC6CFDDFCAC0FCBF66C613B38 (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 LeanTween::get_tweensRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeanTween_get_tweensRunning_mDD39747E471B1CCDF83F6F79B5CFA224E47D3842 (const RuntimeMethod* method);
// System.Int32 LeanTween::get_maxSearch()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LeanTween_get_maxSearch_m76F5A3551B333FEAD6918DC0795238CEA51E8764_inline (const RuntimeMethod* method);
// System.Boolean LeanTween::isTweening(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// LTDescr LTDescr::setDestroyOnComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setDestroyOnComplete_m697253D565C9D2CDA484A82E1005660595CEDA06 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, bool ___doesDestroy0, const RuntimeMethod* method);
// LTDescr LTDescr::resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_resume_mBE4F94BDD8338970F8DA5167345E87C4B58B30F8 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// LTDescr LeanTween::rotateAround(UnityEngine.GameObject,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_rotateAround_m588F9185E90CC14CAB0B0EB6C3D575CF7E7C285E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___add2, float ___time3, const RuntimeMethod* method);
// LTDescr LTDescr::setOnCompleteOnRepeat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LTDescr_setOnCompleteOnRepeat_m28F4EE66B0CA50AC6FA5A9391EEAD0B62E85A3C1 (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, bool ___isOn0, const RuntimeMethod* method);
// System.Void LeanTween::pause(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_pause_m28FA361A74060F3CF6CFF07EA470DEB5871ABFFF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Void LeanTween::pause(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_pause_mEE3D7E0190BB1879C5E4E40A34E22146B867B2B0 (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Void LeanTween::resume(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_resume_mB910424A52CA71E88F376EBC8BD7DAC8BA638F3A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, const RuntimeMethod* method);
// System.Void LeanTween::resume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTween_resume_mB671FD12433254652D7A6F1F2E8B5A924EE8665C (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Boolean LeanTween::isTweening(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeanTween_isTweening_m8A9E15F4297CE4D50C54540646F91DEE0767071C (int32_t ___uniqueId0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// LTDescr LeanTween::value(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * LeanTween_value_m45BC8CC34DB8AE45C89048BAAAA016A4C6F0D526 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to2, float ___time3, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02 (Type_t * ___type0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DentedPixel.LTExamples.TestingUnitTests::lotsOfCancels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TestingUnitTests_lotsOfCancels_mD21D0D0D0B8BE316E58C412A19ADE6658DAA5134 (TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * __this, const RuntimeMethod* method);
// System.Void TestingZLegacy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD7A097986D81133EA1341850CD4003072DC490BB (U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * __this, const RuntimeMethod* method);
// System.Void TestingZLegacyExt/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC490B74A87268C68E2428BE981C75A67BE4460A7 (U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasGroup::get_alpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Purchaser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2A9D0F7BCFAD3F6A3E200D80675C518A15DA2925 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * L_0 = (U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 *)il2cpp_codegen_object_new(U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2871483023CD51DFCE69C7BE765AC8D98D4CC3A0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Purchaser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2871483023CD51DFCE69C7BE765AC8D98D4CC3A0 (U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Purchaser/<>c::<RestorePurchases>b__17_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRestorePurchasesU3Eb__17_0_m4635747CBACF69749FB7D42F9C432A19327DE23E (U3CU3Ec_tC15AA8FD64E79A796B4C19BDE8439FE1F7812A80 * __this, bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E4D87860C2409D6EEA191FE80804151C447DB84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral842B7FA7C05F3F0DFE38170C7F1CC8095629B14E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("RestorePurchases continuing: " + result + ". If no further messages, no purchases available to restore.");
		String_t* L_0;
		L_0 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&___result0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral4E4D87860C2409D6EEA191FE80804151C447DB84, L_0, _stringLiteral842B7FA7C05F3F0DFE38170C7F1CC8095629B14E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
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
// System.Void SFXManager/<FadeOutExtraMusicCorotinue>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutExtraMusicCorotinueU3Ed__20__ctor_mF3BE0DDDFE75840F2E2FAF326E6BE678257FEA00 (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SFXManager/<FadeOutExtraMusicCorotinue>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutExtraMusicCorotinueU3Ed__20_System_IDisposable_Dispose_mC6A085FFF388E53CE43B2A64D3CB1205C6649A8E (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SFXManager/<FadeOutExtraMusicCorotinue>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutExtraMusicCorotinueU3Ed__20_MoveNext_mBECF5B2543659CBF1D2207256790410C23B65892 (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004f;
	}

IL_0020:
	{
		// ExtraMusicAudioSource.volume -= fadeoutSpeed;
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_4 = V_1;
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4->get_ExtraMusicAudioSource_7();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_fadeoutSpeed_3();
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004f:
	{
		// while (ExtraMusicAudioSource.volume != 0)
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_9 = V_1;
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_ExtraMusicAudioSource_7();
		NullCheck(L_10);
		float L_11;
		L_11 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_10, /*hidden argument*/NULL);
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SFXManager/<FadeOutExtraMusicCorotinue>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutExtraMusicCorotinueU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3CD98C127BC1774C406D8B7FEEDFECEA94ABE881 (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SFXManager/<FadeOutExtraMusicCorotinue>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutExtraMusicCorotinueU3Ed__20_System_Collections_IEnumerator_Reset_mFBC5357D7E36FEBB552B0F6C92209532E95A69AC (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutExtraMusicCorotinueU3Ed__20_System_Collections_IEnumerator_Reset_mFBC5357D7E36FEBB552B0F6C92209532E95A69AC_RuntimeMethod_var)));
	}
}
// System.Object SFXManager/<FadeOutExtraMusicCorotinue>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutExtraMusicCorotinueU3Ed__20_System_Collections_IEnumerator_get_Current_m6C9715170B5FE388F527645EF76F872655E73393 (U3CFadeOutExtraMusicCorotinueU3Ed__20_t1F4B7051356106EC65F858317D62F2D8F26C8D2D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SFXManager/<FadeOutMusicCorotinue>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutMusicCorotinueU3Ed__18__ctor_m752DDA415DF903D417F238A7F85B4DF77A6ADCAB (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SFXManager/<FadeOutMusicCorotinue>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutMusicCorotinueU3Ed__18_System_IDisposable_Dispose_m49F6770496FE3F79231604F6FB03C1A768B37626 (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SFXManager/<FadeOutMusicCorotinue>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutMusicCorotinueU3Ed__18_MoveNext_mE92DC0550D1E444F007500D5AF36AE87A6950147 (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004f;
	}

IL_0020:
	{
		// MusicAudioSource.volume -= fadeoutSpeed;
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_4 = V_1;
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4->get_MusicAudioSource_6();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_fadeoutSpeed_3();
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, ((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004f:
	{
		// while (MusicAudioSource.volume != 0)
		SFXManager_tDF4C3E3019CC785FD61200C206F962F5DA8695E5 * L_9 = V_1;
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_MusicAudioSource_6();
		NullCheck(L_10);
		float L_11;
		L_11 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_10, /*hidden argument*/NULL);
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SFXManager/<FadeOutMusicCorotinue>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutMusicCorotinueU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC9FA0F41FEE469DB9C92EFABCADF42DFE2F36E00 (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SFXManager/<FadeOutMusicCorotinue>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutMusicCorotinueU3Ed__18_System_Collections_IEnumerator_Reset_mF3B922DCE4E5282D69FF032BAA8B54F8B0A1B491 (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutMusicCorotinueU3Ed__18_System_Collections_IEnumerator_Reset_mF3B922DCE4E5282D69FF032BAA8B54F8B0A1B491_RuntimeMethod_var)));
	}
}
// System.Object SFXManager/<FadeOutMusicCorotinue>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeOutMusicCorotinueU3Ed__18_System_Collections_IEnumerator_get_Current_mB73919B59E83BA627B6CB36A970E73363EA602BC (U3CFadeOutMusicCorotinueU3Ed__18_tB753BCD26E1699EF47BAF3F20E7E0FC6C120A6D9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_string_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
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
// System.Void TestingPunch/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m66A08467936DA18B932008F1E6DC72EEB39F16A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * L_0 = (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB *)il2cpp_codegen_object_new(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF00B82FD7B30077FBDE19AD680A208A4C3BA70F9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TestingPunch/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF00B82FD7B30077FBDE19AD680A208A4C3BA70F9 (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingPunch/<>c::<Update>b__4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__4_1_mC4766FA978E4EE87A4519997A0A18B9FF21F128A (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17C26F0EFE2E81C54BF0CFC5CC5477D550808751);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("on complete move local X");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral17C26F0EFE2E81C54BF0CFC5CC5477D550808751, /*hidden argument*/NULL);
		// }).setOnCompleteOnStart(true);
		return;
	}
}
// System.Void TestingPunch/<>c::<Update>b__4_4(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__4_4_mB29A35054C7AD0CC10D5E31667EDF5249A05D507 (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, float ___v0, const RuntimeMethod* method)
{
	{
		// }, 0, 1, 0.3f).setDelay(1);
		return;
	}
}
// System.Void TestingPunch/<>c::<Update>b__4_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__4_5_mDC2E23D6DCE6159A01A4E5965CA5654E521A6203 (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral193B648638220DE3053E8DA46D557FB0972032D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move path finished");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral193B648638220DE3053E8DA46D557FB0972032D8, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void TestingPunch/<>c::<tweenStatically>b__5_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CtweenStaticallyU3Eb__5_0_m412A7565AC15AED058D5BD67A3BFF97E6450F355 (U3CU3Ec_tB1B120168A6E7BA6AD56D21520A093EEE79C30FB * __this, float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB17E60BA61E3F25DF6D13AE910403ACA8682599);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("tweening val:"+val);
		String_t* L_0;
		L_0 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&___val0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFB17E60BA61E3F25DF6D13AE910403ACA8682599, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// }, 0f, 1f, 1f);
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
// System.Void TestingPunch/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m6EF45FEFD275B14E2DFC1358F9AF89B57EF810AC (U3CU3Ec__DisplayClass4_0_t038683C2E93B5073D484142AB01DE825CEEDBEBD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingPunch/<>c__DisplayClass4_0::<Update>b__2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CUpdateU3Eb__2_m59E4E1443D5262BE2A23D2C28AB670EA4071ABF4 (U3CU3Ec__DisplayClass4_0_t038683C2E93B5073D484142AB01DE825CEEDBEBD * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// lt.intensity = val;
		Light_tA2F349FE839781469A0344CF6039B51512394275 * L_0 = __this->get_lt_0();
		float L_1 = ___val0;
		NullCheck(L_0);
		Light_set_intensity_m372D5B9494809AFAD717B2707957DD1478C52DFC(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void TestingPunch/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_mB4665A6E7864E352E8943BE5EFEDF0E53D1685AC (U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingPunch/<>c__DisplayClass4_1::<Update>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CUpdateU3Eb__6_m954F24C94FA12A5815D1FED30C2506F75E8628F2 (U3CU3Ec__DisplayClass4_1_t60F636DD05421DE520F34389F79491ABBEC7296A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AA6E6EE2CDD114F115512EC28E5650B245E46A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABE8A646ADF732BDA5643F4609CB378C929C203E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF670642A8E3D41D38EEDDDB6D1731BA1E544EBD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF848094AB1141176CC1C2356C0381C85A4B63A32);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float end = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		V_0 = L_0;
		// float diff = end - start;
		float L_1 = V_0;
		float L_2 = __this->get_start_0();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_2));
		// Debug.Log("start:"+start+" end:"+end+" diff:"+diff+" x:"+this.gameObject.transform.position.x);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralABE8A646ADF732BDA5643F4609CB378C929C203E);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralABE8A646ADF732BDA5643F4609CB378C929C203E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		float* L_6 = __this->get_address_of_start_0();
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF848094AB1141176CC1C2356C0381C85A4B63A32);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF848094AB1141176CC1C2356C0381C85A4B63A32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF670642A8E3D41D38EEDDDB6D1731BA1E544EBD9);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF670642A8E3D41D38EEDDDB6D1731BA1E544EBD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		String_t* L_13;
		L_13 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral6AA6E6EE2CDD114F115512EC28E5650B245E46A4);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6AA6E6EE2CDD114F115512EC28E5650B245E46A4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * L_16 = __this->get_U3CU3E4__this_1();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		float* L_20 = (&V_2)->get_address_of_x_2();
		String_t* L_21;
		L_21 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_20, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_21);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_21);
		String_t* L_22;
		L_22 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// }).setEase(LeanTweenType.easeInBack).setOvershoot( overShootValue ).setPeriod(0.3f);
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
// System.Void TestingPunch/<>c__DisplayClass4_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_2__ctor_m1584CFD1510446CA5FCCF444CC4C3A8416419C58 (U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingPunch/<>c__DisplayClass4_2::<Update>b__8(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_2_U3CUpdateU3Eb__8_m06A77409E2EEAED1E858D86BDDD2CC58DE2CE83A (U3CU3Ec__DisplayClass4_2_t657E0C1A8D3477F99ABEE7DD54418FC518C44D05 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADAB81935C4590B46D06F34818694503A134E549);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("tweening vec2 val:"+val);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___val0;
		V_0 = L_0;
		String_t* L_1;
		L_1 = Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralADAB81935C4590B46D06F34818694503A134E549, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// l.transform.position = new Vector3(val.x, val.y, transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_l_0();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___val0;
		float L_6 = L_5.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___val0;
		float L_8 = L_7.get_y_1();
		TestingPunch_tD3C862FA45AA792897C92A24D8EB232568FB4232 * L_9 = __this->get_U3CU3E4__this_1();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), L_6, L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_13, /*hidden argument*/NULL);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6F153F2D37E38349116C0879DD2F597DEC855ADD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * L_0 = (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 *)il2cpp_codegen_object_new(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF4403EE165173DC522103616E6645018625DE513(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4403EE165173DC522103616E6645018625DE513 (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<Start>b__22_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_3_mB3B2B3F460A87856365CD811630D58EA7A704357 (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC7E2F155D96E8C5667B65CABA3761D052B93971);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(true, "TWO DESTROY ON COMPLETE'S SUCCEED");
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)1, _stringLiteralBC7E2F155D96E8C5667B65CABA3761D052B93971, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<Start>b__22_22()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_22_mCFEF8C7D30A25EAB5E114C737BF1D2A30D599CA9 (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	{
		// LeanTween.delayedCall(0.0f, () => { }).setOnStart(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<Start>b__22_7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_7_mAC888F5211B48BEDE3B76735AF1835BC125992CE (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C514DBFB1623568AF3AB056CEF5CAEE603EACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(true, "ON START WAS CALLED");
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)1, _stringLiteral0C514DBFB1623568AF3AB056CEF5CAEE603EACCC, (String_t*)NULL, /*hidden argument*/NULL);
		// }).setOnComplete(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<Start>b__22_12(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_12_m56B9B268A61C3FB036CCE2D844B45C27C0B201AD (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, float ___val0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2724371272629540F964B3A61D8CA55A5610B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(val != 0f, "ON UPDATE VAL");
		float L_0 = ___val0;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)((((float)L_0) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteralCA2724371272629540F964B3A61D8CA55A5610B6, (String_t*)NULL, /*hidden argument*/NULL);
		// }).setOnCompleteParam("Hi!").setOnComplete((object completeObj) => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<Start>b__22_18()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__22_18_m210C935C0307C41651403480E5EF0856246C8C3D (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B77E04340DAC8F383FAF5644A70CCAACA8F3272);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(Time.time > 0, "DELAYED SOUND");
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_0) > ((float)(0.0f)))? 1 : 0), _stringLiteral5B77E04340DAC8F383FAF5644A70CCAACA8F3272, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c::<pauseTimeNow>b__26_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CpauseTimeNowU3Eb__26_0_mE763C76C7D6AEEAAB8A0C84892C1D42F508144EB (U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }).setUseEstimatedTime(true);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m85E81FE7FB95A8484DB589E78AB8F1B684592DDF (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__0_m0E29967BE8C8986E397C440673E2793E2569089B (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C0F39550671E04B2211B1FB5ED4D04EE3D9956);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(cube4.transform.localScale.x == 2f, "TWEENED WITH ZERO TIME");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_cube4_7();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_4) == ((float)(2.0f)))? 1 : 0), _stringLiteral15C0F39550671E04B2211B1FB5ED4D04EE3D9956, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__1_m887D60815BE91C503B1B557775A0633F1B60E86E (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__21_mD56FCF9AA4FAE66DF497E1779D9334E757A222E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B8_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B8_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B7_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B7_1 = NULL;
	{
		// for (int i = 0; i < cubes.Length; i++)
		V_0 = 0;
		goto IL_0069;
	}

IL_0004:
	{
		// if (i % 3 == 0)
		int32_t L_0 = V_0;
		if (((int32_t)((int32_t)L_0%(int32_t)3)))
		{
			goto IL_0018;
		}
	}
	{
		// LeanTween.cancel(cubes[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_cubes_1();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0065;
	}

IL_0018:
	{
		// else if (i % 3 == 1)
		int32_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_5%(int32_t)3))) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		// LeanTween.cancel(tweenIds[i]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_tweenIds_2();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_cancel_m8F235169322AEA85E23C774745EED07BD83D344E(L_9, /*hidden argument*/NULL);
		// }
		goto IL_0065;
	}

IL_002d:
	{
		// else if (i % 3 == 2)
		int32_t L_10 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_10%(int32_t)3))) == ((uint32_t)2))))
		{
			goto IL_0065;
		}
	}
	{
		// LTDescr descr = LeanTween.descr(tweenIds[i]);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_tweenIds_2();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_15;
		L_15 = LeanTween_descr_m0686304AC8834008456087DDB221577D87246C90(L_14, /*hidden argument*/NULL);
		// descr.setOnComplete(() => {
		//     onCompleteCount++;
		//     //                          Debug.Log("onCompleteCount:"+onCompleteCount);
		//     if (onCompleteCount >= 33)
		//     {
		//         LeanTest.expect(true, "CANCELS DO NOT EFFECT FINISHING");
		//     }
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = __this->get_U3CU3E9__21_20();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = L_16;
		G_B7_0 = L_17;
		G_B7_1 = L_15;
		if (L_17)
		{
			G_B8_0 = L_17;
			G_B8_1 = L_15;
			goto IL_005f;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_18, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__21_mD56FCF9AA4FAE66DF497E1779D9334E757A222E5_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = L_18;
		V_1 = L_19;
		__this->set_U3CU3E9__21_20(L_19);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_20 = V_1;
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
	}

IL_005f:
	{
		NullCheck(G_B8_1);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_21;
		L_21 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(G_B8_1, G_B8_0, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// for (int i = 0; i < cubes.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0069:
	{
		// for (int i = 0; i < cubes.Length; i++)
		int32_t L_23 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = __this->get_cubes_1();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__21()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__21_mD56FCF9AA4FAE66DF497E1779D9334E757A222E5 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEECB605F90ED8F6CDA2E3414A47E05104F1FBF46);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// onCompleteCount++;
		int32_t L_0 = __this->get_onCompleteCount_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_onCompleteCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// if (onCompleteCount >= 33)
		int32_t L_2 = __this->get_onCompleteCount_3();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)33))))
		{
			goto IL_0026;
		}
	}
	{
		// LeanTest.expect(true, "CANCELS DO NOT EFFECT FINISHING");
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)1, _stringLiteralEECB605F90ED8F6CDA2E3414A47E05104F1FBF46, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__2_m25A626FC5B5176333408538B200230F7A012FCF1 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73BEC9BE68F92E60666B28D9030C77A9AC723E9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(cubeToTrans.transform.position == cubeDestEnd, "MOVE TO TRANSFORM WORKS");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeToTrans_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_cubeDestEnd_5();
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_4, _stringLiteral73BEC9BE68F92E60666B28D9030C77A9AC723E9D, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__4_mC5E35367A4E3D78731DCB8D56BC172E263F40648 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64B8F9AFB9BA6D501BDBEE9ED04481965043A220);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(Vector3.Distance(new Vector3(1f, 0f, 1f), cubeSpline.transform.position) < 0.01f, "SPLINE WITH TWO POINTS SUCCEEDS");
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cubeSpline_6();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_4) < ((float)(0.00999999978f)))? 1 : 0), _stringLiteral64B8F9AFB9BA6D501BDBEE9ED04481965043A220, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__5_m31888B2277D8EEE835811D9FF81FA68312AA086B (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__22_22_mCFEF8C7D30A25EAB5E114C737BF1D2A30D599CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_U3CStartU3Eb__23_m71B69B2DE70762D5765B748E1B062290289D9195_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	float G_B2_1 = 0.0f;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	float G_B1_1 = 0.0f;
	{
		U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * L_0 = (U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass22_1__ctor_m42740028F7DBAC0910C2B0D8FE48AE424104B01F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_CSU24U3CU3E8__locals1_1(__this);
		// LTDescr d = LeanTween.descr(jumpTimeId);
		int32_t L_2 = __this->get_jumpTimeId_7();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_3;
		L_3 = LeanTween_descr_m0686304AC8834008456087DDB221577D87246C90(L_2, /*hidden argument*/NULL);
		// float beforeX = jumpCube.transform.position.x;
		U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * L_4 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_jumpCube_8();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		NullCheck(L_4);
		L_4->set_beforeX_0(L_8);
		// d.setTime(0.5f);
		NullCheck(L_3);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_9;
		L_9 = LTDescr_setTime_m0DE4EDC9DA5F9D6B5255BCA73A198E18F0A320A4(L_3, (0.5f), /*hidden argument*/NULL);
		// LeanTween.delayedCall(0.0f, () => { }).setOnStart(() => {
		//     float diffAmt = 1f;// This variable is dependent on a good frame-rate because it evalutes at the next Update
		//     beforeX += Time.deltaTime * 100f * 2f;
		//     LeanTest.expect(Mathf.Abs(jumpCube.transform.position.x - beforeX) < diffAmt, "CHANGING TIME DOESN'T JUMP AHEAD", "Difference:" + Mathf.Abs(jumpCube.transform.position.x - beforeX) + " beforeX:" + beforeX + " now:" + jumpCube.transform.position.x + " dt:" + Time.deltaTime);
		// });
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = ((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->get_U3CU3E9__22_22_2();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = (0.0f);
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = (0.0f);
			goto IL_0062;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * L_12 = ((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__22_22_mCFEF8C7D30A25EAB5E114C737BF1D2A30D599CA9_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = L_13;
		((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->set_U3CU3E9__22_22_2(L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
	}

IL_0062:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_15;
		L_15 = LeanTween_delayedCall_mF74ECC6AC349466F55E56C4625DB67892553A59A(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * L_16 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_17, L_16, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_1_U3CStartU3Eb__23_m71B69B2DE70762D5765B748E1B062290289D9195_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_18;
		L_18 = LTDescr_setOnStart_m37383DCD917312D49E2291F3A47F8F9361155A1A(L_15, L_17, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__6_mE7251F18767B392C7011C9893101E7498D8B0C29 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054ECB33E7A72BEF7A12619E9442A896E378C001);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8CD5DADAC6BB74531BAEF6E3883C1F24906F125);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LeanTest.expect(zeroCube.transform.position.x == 10f, "ZERO TIME FINSHES CORRECTLY", "final x:" + zeroCube.transform.position.x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_zeroCube_9();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_zeroCube_9();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float* L_7 = (&V_0)->get_address_of_x_2();
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF8CD5DADAC6BB74531BAEF6E3883C1F24906F125, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_3) == ((float)(10.0f)))? 1 : 0), _stringLiteral054ECB33E7A72BEF7A12619E9442A896E378C001, L_9, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__8_mCAE5BA94A4F65FFE4C9F531C9AA0249D6F7B9218 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76AFFA5990663B0AA27EB6C77A7CA99AB25DD2D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F92F72CECC4F3BFC0B2E2CDF576AE6A2BBEC4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// LeanTest.expect(cubeScale.transform.localScale.z == 5f, "SCALE", "expected scale z:" + 5f + " returned:" + cubeScale.transform.localScale.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeScale_10();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		V_0 = (5.0f);
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cubeScale_10();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float* L_8 = (&V_1)->get_address_of_z_4();
		String_t* L_9;
		L_9 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral95F92F72CECC4F3BFC0B2E2CDF576AE6A2BBEC4A, L_4, _stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_3) == ((float)(5.0f)))? 1 : 0), _stringLiteral76AFFA5990663B0AA27EB6C77A7CA99AB25DD2D3, L_10, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__9()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__9_m4AA88BFFB46D1E0E6212B98A76E7A0F6AA5C0039 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2933DEAB5560795F74FE212799E599690DC39920);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD84D90EF77649501697C0B71DD2701CB16B0541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// LeanTest.expect(cubeRotate.transform.eulerAngles.y == 180f, "ROTATE", "expected rotate y:" + 180f + " returned:" + cubeRotate.transform.eulerAngles.y);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeRotate_11();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		V_0 = (180.0f);
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cubeRotate_11();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float* L_8 = (&V_1)->get_address_of_y_3();
		String_t* L_9;
		L_9 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral2933DEAB5560795F74FE212799E599690DC39920, L_4, _stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_3) == ((float)(180.0f)))? 1 : 0), _stringLiteralCD84D90EF77649501697C0B71DD2701CB16B0541, L_10, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__10_m561C045E5C1DC104420555CF0BA62F1DF6B671E8 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26329FD8F219A432D5CB713950D52C4816FD1D8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D6F1C34CA7FBAD59A8E0E077842E56427D7EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// LeanTest.expect(cubeRotateA.transform.eulerAngles.z == 90f, "ROTATE AROUND", "expected rotate z:" + 90f + " returned:" + cubeRotateA.transform.eulerAngles.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeRotateA_12();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		V_0 = (90.0f);
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cubeRotateA_12();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float* L_8 = (&V_1)->get_address_of_z_4();
		String_t* L_9;
		L_9 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral2D6F1C34CA7FBAD59A8E0E077842E56427D7EDBA, L_4, _stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_3) == ((float)(90.0f)))? 1 : 0), _stringLiteral26329FD8F219A432D5CB713950D52C4816FD1D8C, L_10, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__11()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__11_m81593E9FC9183EC0E37356C733A02C3266B87796 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8680BF608BF8E528145E5BEFAB9997621402A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDC3CBB800E1696318F7A2D2BFC6DB2D0DCA50A7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LeanTest.expect(cubeRotateB.transform.position.ToString() == (new Vector3(200f, 10f, 8f)).ToString(), "ROTATE AROUND 360", "expected rotate pos:" + (new Vector3(200f, 10f, 8f)) + " returned:" + cubeRotateB.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeRotateB_13();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (200.0f), (10.0f), (8.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (200.0f), (10.0f), (8.0f), /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_cubeRotateB_13();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral8680BF608BF8E528145E5BEFAB9997621402A9B0, L_8, _stringLiteralD5CB612052FB5F109E7500BCE1C6C2250165F756, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_6, _stringLiteralDDC3CBB800E1696318F7A2D2BFC6DB2D0DCA50A7, L_13, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__13_mF54BD21F02ED31763F697C67DB121D4646CC7522 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, RuntimeObject * ___completeObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral748E4624D89DD28013A603527AACDDA3AB822F84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAE246312AC11CFCE0F3BD45109630DC88C6E812);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1373FA6C475D51DA7086BA8E9AC6F417FBE8E85);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(((string)completeObj) == "Hi!", "ONCOMPLETE OBJECT");
		RuntimeObject * L_0 = ___completeObj0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), _stringLiteral748E4624D89DD28013A603527AACDDA3AB822F84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_1, _stringLiteralAAE246312AC11CFCE0F3BD45109630DC88C6E812, (String_t*)NULL, /*hidden argument*/NULL);
		// LeanTest.expect(cubeAlpha1.GetComponent<Renderer>().material.color.a == 0.5f, "ALPHA");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_2 = __this->get_U3CU3E4__this_0();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_cubeAlpha1_8();
		NullCheck(L_3);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4;
		L_4 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_4);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5;
		L_5 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_a_3();
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_7) == ((float)(0.5f)))? 1 : 0), _stringLiteralB1373FA6C475D51DA7086BA8E9AC6F417FBE8E85, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__14()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__14_m5A91E5886E31BA74327DDC19A47BB2E14DB7E810 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18F7E16FE815D1533663FFC7EF9E10A857E5058A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365D36E38E3E47189D9C43AD3D8C24789722C77B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral605A1853E7B93DF58AFCDA9E142FAB5294BD0F90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B4D3CAA45BB63CB479EFC84BB2C5858DCDFC931);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		// LeanTest.expect(cubeAlpha2.GetComponent<Renderer>().material.color == Color.cyan, "COLOR");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_cubeAlpha2_9();
		NullCheck(L_1);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_2;
		L_2 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_1, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Material_get_color_m7926F7BE68B4D000306738C1EAABEB7ADFB97821(L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_cyan_m0C608BC083FD98C45C1F4F15AE803D288C647686(/*hidden argument*/NULL);
		bool L_6;
		L_6 = Color_op_Equality_m4975788CDFEF5571E3C51AE8363E6DF65C28A996(L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_6, _stringLiteral365D36E38E3E47189D9C43AD3D8C24789722C77B, (String_t*)NULL, /*hidden argument*/NULL);
		// LeanTest.expect(onStartTime >= 0f && onStartTime < Time.time, "ON START", "onStartTime:" + onStartTime + " time:" + Time.time);
		float L_7 = __this->get_onStartTime_14();
		if ((!(((float)L_7) >= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		float L_8 = __this->get_onStartTime_14();
		float L_9;
		L_9 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		G_B3_0 = ((((float)L_8) < ((float)L_9))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B3_0 = 0;
	}

IL_004c:
	{
		float* L_10 = __this->get_address_of_onStartTime_14();
		String_t* L_11;
		L_11 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral18F7E16FE815D1533663FFC7EF9E10A857E5058A, L_11, _stringLiteral6B4D3CAA45BB63CB479EFC84BB2C5858DCDFC931, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)G_B3_0, _stringLiteral605A1853E7B93DF58AFCDA9E142FAB5294BD0F90, L_14, /*hidden argument*/NULL);
		// }).setOnStart(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__15()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__15_mF1644C8D1D721BD4651678F2F71ACCA470CA60D9 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	{
		// onStartTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_onStartTime_14(L_0);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__16_m347E0C3ED3E8390844A251CE7CDAE009166D0358 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75AB274405637E850F72A72E7849E000990C343F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// LeanTest.expect(cubeAlpha1.transform.position.x == beforePos.x && cubeAlpha1.transform.position.z == beforePos.z, "MOVE Y");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_cubeAlpha1_8();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_beforePos_15();
		float L_6 = L_5->get_x_2();
		if ((!(((float)L_4) == ((float)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_7 = __this->get_U3CU3E4__this_0();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_cubeAlpha1_8();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_beforePos_15();
		float L_13 = L_12->get_z_4();
		G_B3_0 = ((((float)L_11) == ((float)L_13))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B3_0 = 0;
	}

IL_0051:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)G_B3_0, _stringLiteral75AB274405637E850F72A72E7849E000990C343F, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__17()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__17_m5404D4E64F471E4BB3E95B2DBF8C78AEDCD6C4FC (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral166873FA58C79EECACCC3F634083C3C30C3948B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral299556C0F8738146558B01FAC5054AB5E5DFDD3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912BA61CA2922DDEAF5273D0B40C8EE86C87E30F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5C9CE5DF332772EE8351ACDE3FFCA560E24848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE83D8CDEF1AD792E6FCEC7085586D3B6C6567E66);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		// LeanTest.expect(cubeAlpha2.transform.localPosition.x == beforePos2.x && cubeAlpha2.transform.localPosition.y == beforePos2.y, "MOVE LOCAL Z", "ax:" + cubeAlpha2.transform.localPosition.x + " bx:" + beforePos.x + " ay:" + cubeAlpha2.transform.localPosition.y + " by:" + beforePos2.y);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_cubeAlpha2_9();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_beforePos2_16();
		float L_6 = L_5->get_x_2();
		if ((!(((float)L_4) == ((float)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_7 = __this->get_U3CU3E4__this_0();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_cubeAlpha2_9();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_beforePos2_16();
		float L_13 = L_12->get_y_3();
		G_B3_0 = ((((float)L_11) == ((float)L_13))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B3_0 = 0;
	}

IL_0051:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralE83D8CDEF1AD792E6FCEC7085586D3B6C6567E66);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE83D8CDEF1AD792E6FCEC7085586D3B6C6567E66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_17 = __this->get_U3CU3E4__this_0();
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_cubeAlpha2_9();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		float* L_21 = (&V_0)->get_address_of_x_2();
		String_t* L_22;
		L_22 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_22);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_16;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralDD5C9CE5DF332772EE8351ACDE3FFCA560E24848);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDD5C9CE5DF332772EE8351ACDE3FFCA560E24848);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_beforePos_15();
		float* L_26 = L_25->get_address_of_x_2();
		String_t* L_27;
		L_27 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_24;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral912BA61CA2922DDEAF5273D0B40C8EE86C87E30F);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral912BA61CA2922DDEAF5273D0B40C8EE86C87E30F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_30 = __this->get_U3CU3E4__this_0();
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_cubeAlpha2_9();
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		float* L_34 = (&V_0)->get_address_of_y_3();
		String_t* L_35;
		L_35 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_34, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_35);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_35);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_29;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral299556C0F8738146558B01FAC5054AB5E5DFDD3E);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral299556C0F8738146558B01FAC5054AB5E5DFDD3E);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_38 = __this->get_address_of_beforePos2_16();
		float* L_39 = L_38->get_address_of_y_3();
		String_t* L_40;
		L_40 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_40);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_40);
		String_t* L_41;
		L_41 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)G_B3_0, _stringLiteral166873FA58C79EECACCC3F634083C3C30C3948B7, L_41, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__19(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__19_mFCD1C9E7E22F2F6710CB151C14E7C6094B6F0EF2 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// value2UpdateCalled = true;
		__this->set_value2UpdateCalled_19((bool)1);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_0::<Start>b__20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CStartU3Eb__20_m07D0BA90D12217971B1F53FF20AA9B02391A4877 (U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral383D6B116B6EC7FE3979EFDDC474520C9D37E4A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(value2UpdateCalled, "VALUE2 UPDATE");
		bool L_0 = __this->get_value2UpdateCalled_19();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_0, _stringLiteral383D6B116B6EC7FE3979EFDDC474520C9D37E4A7, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_m42740028F7DBAC0910C2B0D8FE48AE424104B01F (U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_1::<Start>b__23()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1_U3CStartU3Eb__23_m71B69B2DE70762D5765B748E1B062290289D9195 (U3CU3Ec__DisplayClass22_1_t041360FB309BAE73F44DAC9B4689082AC2FF5973 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1B41B6302D85AD7E0467C845E6803B91C37E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6CEF8A6A2B0354C7E284187BD6AA1C738A03F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E85C99F95958ABF389464D91EB45F62FB36BB18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB73B20992382CBBAEAA1E3365F70F9CDD3075214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF070E687D86BC58CB42345E604D3AA8ECE7C65D2);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float diffAmt = 1f;// This variable is dependent on a good frame-rate because it evalutes at the next Update
		V_0 = (1.0f);
		// beforeX += Time.deltaTime * 100f * 2f;
		float L_0 = __this->get_beforeX_0();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_beforeX_0(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)(100.0f))), (float)(2.0f))))));
		// LeanTest.expect(Mathf.Abs(jumpCube.transform.position.x - beforeX) < diffAmt, "CHANGING TIME DOESN'T JUMP AHEAD", "Difference:" + Mathf.Abs(jumpCube.transform.position.x - beforeX) + " beforeX:" + beforeX + " now:" + jumpCube.transform.position.x + " dt:" + Time.deltaTime);
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_jumpCube_8();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		float L_7 = __this->get_beforeX_0();
		float L_8;
		L_8 = fabsf(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		float L_9 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral0B1B41B6302D85AD7E0467C845E6803B91C37E84);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0B1B41B6302D85AD7E0467C845E6803B91C37E84);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_13 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_jumpCube_8();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = __this->get_beforeX_0();
		float L_19;
		L_19 = fabsf(((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)));
		V_1 = L_19;
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_20);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_12;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralF070E687D86BC58CB42345E604D3AA8ECE7C65D2);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF070E687D86BC58CB42345E604D3AA8ECE7C65D2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		float* L_23 = __this->get_address_of_beforeX_0();
		String_t* L_24;
		L_24 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_22;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral6E85C99F95958ABF389464D91EB45F62FB36BB18);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6E85C99F95958ABF389464D91EB45F62FB36BB18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_27 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_27);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_jumpCube_8();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		float* L_31 = (&V_2)->get_address_of_x_2();
		String_t* L_32;
		L_32 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_32);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_26;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralB73B20992382CBBAEAA1E3365F70F9CDD3075214);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB73B20992382CBBAEAA1E3365F70F9CDD3075214);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		float L_35;
		L_35 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = L_35;
		String_t* L_36;
		L_36 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_36);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_8) < ((float)L_9))? 1 : 0), _stringLiteral3E6CEF8A6A2B0354C7E284187BD6AA1C738A03F0, L_37, /*hidden argument*/NULL);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_2__ctor_m92BFBC8093B249E40CB64FABE4D548B594B0A5A0 (U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass22_2::<Start>b__24(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_2_U3CStartU3Eb__24_mF27E3CE748DB0EEE7037C4DD812DD75BAE86B46A (U3CU3Ec__DisplayClass22_2_tF5B9A247AE90B21641EE6BA256550BF6E5CBC1E8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFCAE7FD17CE1911D98D24E3BFEEE04C8E33B28);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GameObject cubeIn = obj as GameObject;
		RuntimeObject * L_0 = ___obj0;
		// totalEasingCheck++;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_1 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_totalEasingCheck_17();
		V_0 = L_2;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_3 = __this->get_CSU24U3CU3E8__locals2_1();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		L_3->set_totalEasingCheck_17(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// if (cubeIn.transform.position.x == 5f)
		NullCheck(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((!(((float)L_7) == ((float)(5.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// totalEasingCheckSuccess++;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_8 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_totalEasingCheckSuccess_18();
		V_0 = L_9;
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_10 = __this->get_CSU24U3CU3E8__locals2_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		L_10->set_totalEasingCheckSuccess_18(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0050:
	{
		// if (totalEasingCheck == (2 * totalTweenTypeLength))
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_12 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_totalEasingCheck_17();
		int32_t L_14 = __this->get_totalTweenTypeLength_0();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)L_14))))))
		{
			goto IL_0088;
		}
	}
	{
		// LeanTest.expect(totalEasingCheck == totalEasingCheckSuccess, "EASING TYPES");
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_15 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_totalEasingCheck_17();
		U3CU3Ec__DisplayClass22_0_t7E995104B373A95406291202970922855BD6536F * L_17 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_totalEasingCheckSuccess_18();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_16) == ((int32_t)L_18))? 1 : 0), _stringLiteralCCFCAE7FD17CE1911D98D24E3BFEEE04C8E33B28, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }).setOnCompleteParam(cube);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m8818C4F306B80B7FEE062793CBEBEAB352E53F22 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__0_mB82E5FEE09CC712C778F6A007B14D3D455256ECB (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	{
		// timeElapsedNormalTimeScale = Time.time;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_timeElapsedNormalTimeScale_22(L_1);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__1_m8D5BED91D3EE4A8C0C0DF77D2B62F903C3E20D0C (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	{
		// timeElapsedIgnoreTimeScale = Time.time;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_timeElapsedIgnoreTimeScale_23(L_1);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__2_mB677486A14C58435757062820302D43BCC02D144 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, float ___val0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// pauseCount++;
		int32_t L_0 = __this->get_pauseCount_1();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_pauseCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// }).pause();
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__3_m3987A57ECD0F50AB39FEF707C42D9710AA3CFB2D (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F715F23BD75828F2448CE03DCA7B360394B7A33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LeanTest.expect(cubeRound.transform.position == onStartPos, "BEZIER CLOSED LOOP SHOULD END AT START", "onStartPos:" + onStartPos + " onEnd:" + cubeRound.transform.position);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeRound_2();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_onStartPos_3();
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_onStartPos_3();
		V_0 = L_5;
		String_t* L_6;
		L_6 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_cubeRound_2();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B, L_6, _stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_4, _stringLiteral1F715F23BD75828F2448CE03DCA7B360394B7A33, L_11, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__4_m87D8E7758DA9C355EE513F9775D9F4B4C387BB56 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral573E191E68B66CB5E69FE2EE1EDFEFAE08B4F656);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// LeanTest.expect(Vector3.Distance(onStartPosSpline, cubeSpline.transform.position) <= 0.01f, "SPLINE CLOSED LOOP SHOULD END AT START", "onStartPos:" + onStartPosSpline + " onEnd:" + cubeSpline.transform.position + " dist:" + Vector3.Distance(onStartPosSpline, cubeSpline.transform.position));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_onStartPosSpline_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_cubeSpline_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_0, L_3, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral454E1D4E30FA41CA4E48692C6C177679927CD60B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_onStartPosSpline_4();
		V_0 = L_8;
		String_t* L_9;
		L_9 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral745351A2BF47A2F22CFF299E9022F71CC6627A90);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_cubeSpline_5();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_onStartPosSpline_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_cubeSpline_5();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22;
		L_22 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_18, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		String_t* L_23;
		L_23 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_23);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_23);
		String_t* L_24;
		L_24 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)((!(((float)L_4) <= ((float)(0.00999999978f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral573E191E68B66CB5E69FE2EE1EDFEFAE08B4F656, L_24, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__5_m2B18F0F9B914A675CEEA356DCFF478B4F5611D8F (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8A4E6C67BB356F24EC7A0DC4FD2DBB4D40E7AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30CA70C2624A7D416142E2F8DC62C74326F4E92C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA7243693E644D8D1EF47835EAC484D6577B955);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682F51FCFC42802C922A93552316C231D838E07E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// LeanTest.expect(cubeSeq.transform.position.x == 100f, "SEQ MOVE X FINISHED", "move x:" + cubeSeq.transform.position.x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeSeq_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_cubeSeq_6();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float* L_7 = (&V_0)->get_address_of_x_2();
		String_t* L_8;
		L_8 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2E8A4E6C67BB356F24EC7A0DC4FD2DBB4D40E7AD, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_3) == ((float)(100.0f)))? 1 : 0), _stringLiteral30CA70C2624A7D416142E2F8DC62C74326F4E92C, L_9, /*hidden argument*/NULL);
		// LeanTest.expect(cubeSeq.transform.localScale.x == 2f, "SEQ SCALE X FINISHED", "scale x:" + cubeSeq.transform.localScale.x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_cubeSeq_6();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_cubeSeq_6();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		float* L_17 = (&V_0)->get_address_of_x_2();
		String_t* L_18;
		L_18 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral682F51FCFC42802C922A93552316C231D838E07E, L_18, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_13) == ((float)(2.0f)))? 1 : 0), _stringLiteral5CA7243693E644D8D1EF47835EAC484D6577B955, L_19, /*hidden argument*/NULL);
		// }).setScale(0.2f);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__6(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__6_mE7EA3413E1F81C42AAFE03C96A7C6C430EAFAF81 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// if (cubeBounds.transform.position.x < 0f || cubeBounds.transform.position.x > 10f || cubeBounds.transform.position.y < 0f || cubeBounds.transform.position.y > 10f || cubeBounds.transform.position.z < 0f || cubeBounds.transform.position.z > 10f)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cubeBounds_7();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((((float)L_3) < ((float)(0.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_cubeBounds_7();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((((float)L_7) > ((float)(10.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_cubeBounds_7();
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		if ((((float)L_11) < ((float)(0.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_cubeBounds_7();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		if ((((float)L_15) > ((float)(10.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_cubeBounds_7();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		if ((((float)L_19) < ((float)(0.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_cubeBounds_7();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_z_4();
		if ((!(((float)L_23) > ((float)(10.0f)))))
		{
			goto IL_00c8;
		}
	}

IL_00ab:
	{
		// didPassBounds = false;
		__this->set_didPassBounds_8((bool)0);
		// failPoint = cubeBounds.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_cubeBounds_7();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		__this->set_failPoint_9(L_26);
	}

IL_00c8:
	{
		// }).setLoopPingPong().setRepeat(8).setOnComplete(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__7()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__7_mF6A7BD6551F5A9F146C1B47E86AFF650A2B0005D (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31BDB52E883B39E5065C7D38488BB610500016A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFB8152FD39A60A624A32A2658AA10A448DA4830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED6E009D99193CEFB7D1ECD7EB017930B305D417);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(didPassBounds, "OUT OF BOUNDS", "pos x:" + failPoint.x + " y:" + failPoint.y + " z:" + failPoint.z);
		bool L_0 = __this->get_didPassBounds_8();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral31BDB52E883B39E5065C7D38488BB610500016A7);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31BDB52E883B39E5065C7D38488BB610500016A7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_failPoint_9();
		float* L_5 = L_4->get_address_of_x_2();
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral13C4D0FDE5864F3F954208D62C74E8670551828D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_failPoint_9();
		float* L_10 = L_9->get_address_of_y_3();
		String_t* L_11;
		L_11 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralAFB8152FD39A60A624A32A2658AA10A448DA4830);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAFB8152FD39A60A624A32A2658AA10A448DA4830);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_failPoint_9();
		float* L_15 = L_14->get_address_of_z_4();
		String_t* L_16;
		L_16 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_0, _stringLiteralED6E009D99193CEFB7D1ECD7EB017930B305D417, L_17, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__13()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__13_mFFA8F8E7E5F79A608E1C2216AA8D1B734A758093 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// setOnStartNum++;
		int32_t L_0 = __this->get_setOnStartNum_10();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_setOnStartNum_10(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// }).setOnUpdate((Vector3 newPosition) => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__14(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__14_m0D4E422B37F43F7D3ACECDE81ADD5A18D4C97EE8 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPosition0, const RuntimeMethod* method)
{
	{
		// if (transform.position.z > newPosition.z)
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___newPosition0;
		float L_5 = L_4.get_z_4();
		if ((!(((float)L_3) > ((float)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		// setPosOnUpdate = false;
		__this->set_setPosOnUpdate_11((bool)0);
	}

IL_0024:
	{
		// }).
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__15(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__15_mE41B0CD588F01B0A76360EBD332CFAF425E20931 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__16_mEA9C490B5AEA717E999FFF3DD2CB25B23966277E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_4 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	float G_B5_1 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_2 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B4_0 = NULL;
	float G_B4_1 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_2 = NULL;
	{
		// Dictionary<string, object> finalDictRetr = param as Dictionary<string, object>;
		RuntimeObject * L_0 = ___param0;
		// Vector3 neededPos = (Vector3)finalDictRetr["final"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_1, _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_0 = ((*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)UnBox(L_2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var))));
		// GameObject tweenedGo = finalDictRetr["go"] as GameObject;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_1, _stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_1 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_3, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		// if (neededPos.ToString() == tweenedGo.transform.position.ToString())
		String_t* L_4;
		L_4 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// setPosNum++;
		int32_t L_10 = __this->get_setPosNum_12();
		V_3 = L_10;
		int32_t L_11 = V_3;
		__this->set_setPosNum_12(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0064:
	{
		// if (hasGroupTweensCheckStarted == false)
		bool L_12 = __this->get_hasGroupTweensCheckStarted_13();
		if (L_12)
		{
			goto IL_00aa;
		}
	}
	{
		// hasGroupTweensCheckStarted = true;
		__this->set_hasGroupTweensCheckStarted_13((bool)1);
		// LeanTween.delayedCall(gameObject, 0.1f, () => {
		//     LeanTest.expect(setOnStartNum == groupTweens.Length, "SETONSTART CALLS", "expected:" + groupTweens.Length + " was:" + setOnStartNum);
		//     LeanTest.expect(groupTweensCnt == groupTweens.Length, "GROUP FINISH", "expected " + groupTweens.Length + " tweens but got " + groupTweensCnt);
		//     LeanTest.expect(setPosNum == groupTweens.Length, "GROUP POSITION FINISH", "expected " + groupTweens.Length + " tweens but got " + setPosNum);
		//     LeanTest.expect(setPosOnUpdate, "GROUP POSITION ON UPDATE");
		// });
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_15 = __this->get_U3CU3E9__16_21();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = L_15;
		G_B4_0 = L_16;
		G_B4_1 = (0.100000001f);
		G_B4_2 = L_14;
		if (L_16)
		{
			G_B5_0 = L_16;
			G_B5_1 = (0.100000001f);
			G_B5_2 = L_14;
			goto IL_00a4;
		}
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_17 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_17, __this, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__16_mEA9C490B5AEA717E999FFF3DD2CB25B23966277E_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_18 = L_17;
		V_4 = L_18;
		__this->set_U3CU3E9__16_21(L_18);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_19 = V_4;
		G_B5_0 = L_19;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_00a4:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_20;
		L_20 = LeanTween_delayedCall_m537234980306375FFF55F428FE0F5AF5F35AD1CB(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// groupTweensCnt++;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_21 = __this->get_U3CU3E4__this_0();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_22 = __this->get_U3CU3E4__this_0();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_groupTweensCnt_18();
		NullCheck(L_21);
		L_21->set_groupTweensCnt_18(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__16_mEA9C490B5AEA717E999FFF3DD2CB25B23966277E (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1762F65938A4012333F49B64AEDFAE67F528977F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CBBBABFF090897BA30A171FEE392F7A108D637C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral320CC8127D05325B5B8F6C20C56ED895D39B1B45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A2CB3E5DBEA6AF61E89A9C95C8B64690A090329);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FEF1792B9532DC34F4C8EA4AFFA04438A150AEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64F693191FCAFE821C893B1E0C74992E344BF68F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// LeanTest.expect(setOnStartNum == groupTweens.Length, "SETONSTART CALLS", "expected:" + groupTweens.Length + " was:" + setOnStartNum);
		int32_t L_0 = __this->get_setOnStartNum_10();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_1 = __this->get_U3CU3E4__this_0();
		NullCheck(L_1);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_2 = L_1->get_groupTweens_16();
		NullCheck(L_2);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_3 = __this->get_U3CU3E4__this_0();
		NullCheck(L_3);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_4 = L_3->get_groupTweens_16();
		NullCheck(L_4);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_6 = __this->get_address_of_setOnStartNum_10();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral2CBBBABFF090897BA30A171FEE392F7A108D637C, L_5, _stringLiteral320CC8127D05325B5B8F6C20C56ED895D39B1B45, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_0) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0), _stringLiteral1762F65938A4012333F49B64AEDFAE67F528977F, L_8, /*hidden argument*/NULL);
		// LeanTest.expect(groupTweensCnt == groupTweens.Length, "GROUP FINISH", "expected " + groupTweens.Length + " tweens but got " + groupTweensCnt);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_groupTweensCnt_18();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_11 = __this->get_U3CU3E4__this_0();
		NullCheck(L_11);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_12 = L_11->get_groupTweens_16();
		NullCheck(L_12);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_13 = __this->get_U3CU3E4__this_0();
		NullCheck(L_13);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_14 = L_13->get_groupTweens_16();
		NullCheck(L_14);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)));
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_16 = __this->get_U3CU3E4__this_0();
		NullCheck(L_16);
		int32_t* L_17 = L_16->get_address_of_groupTweensCnt_18();
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_17, /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51, L_15, _stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F, L_18, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_10) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0), _stringLiteral64F693191FCAFE821C893B1E0C74992E344BF68F, L_19, /*hidden argument*/NULL);
		// LeanTest.expect(setPosNum == groupTweens.Length, "GROUP POSITION FINISH", "expected " + groupTweens.Length + " tweens but got " + setPosNum);
		int32_t L_20 = __this->get_setPosNum_12();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_21 = __this->get_U3CU3E4__this_0();
		NullCheck(L_21);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_22 = L_21->get_groupTweens_16();
		NullCheck(L_22);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_23 = __this->get_U3CU3E4__this_0();
		NullCheck(L_23);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_24 = L_23->get_groupTweens_16();
		NullCheck(L_24);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)));
		String_t* L_25;
		L_25 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_26 = __this->get_address_of_setPosNum_12();
		String_t* L_27;
		L_27 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51, L_25, _stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F, L_27, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_20) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))? 1 : 0), _stringLiteral3FEF1792B9532DC34F4C8EA4AFFA04438A150AEB, L_28, /*hidden argument*/NULL);
		// LeanTest.expect(setPosOnUpdate, "GROUP POSITION ON UPDATE");
		bool L_29 = __this->get_setPosOnUpdate_11();
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_29, _stringLiteral3A2CB3E5DBEA6AF61E89A9C95C8B64690A090329, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__8_m63E7CF9513E4624B5B101B1C46941DC34982AC33 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25CA44678DB79FF05E2D57A895F5618A234017D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40D474CF9A30068217E162C157D7906826217E9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FBC82F2ABDF6A052A98DF1892427C16C41F166C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA434C5FDB2624BE6A708D41D99D0D83AE633761A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t G_B3_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	int32_t G_B5_5 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	int32_t G_B4_5 = 0;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	int32_t G_B6_5 = 0;
	int32_t G_B8_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	String_t* G_B8_3 = NULL;
	int32_t G_B8_4 = 0;
	int32_t G_B7_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	int32_t G_B7_4 = 0;
	float G_B9_0 = 0.0f;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	String_t* G_B9_4 = NULL;
	int32_t G_B9_5 = 0;
	{
		// LeanTest.expect(cube4 != null && previousXlt4 != cube4.transform.position.x, "RESUME OUT OF ORDER", "cube4:" + cube4 + " previousXlt4:" + previousXlt4 + " cube4.transform.position.x:" + (cube4 != null ? cube4.transform.position.x : 0));
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_cube4_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		float L_3 = __this->get_previousXlt4_14();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_cube4_7();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		G_B3_0 = ((((int32_t)((((float)L_3) == ((float)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 0;
	}

IL_003b:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA434C5FDB2624BE6A708D41D99D0D83AE633761A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA434C5FDB2624BE6A708D41D99D0D83AE633761A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_12 = __this->get_U3CU3E4__this_0();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_cube4_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13;
		G_B4_0 = L_14;
		G_B4_1 = 1;
		G_B4_2 = L_11;
		G_B4_3 = L_11;
		G_B4_4 = _stringLiteral25CA44678DB79FF05E2D57A895F5618A234017D8;
		G_B4_5 = G_B3_0;
		if (L_14)
		{
			G_B5_0 = L_14;
			G_B5_1 = 1;
			G_B5_2 = L_11;
			G_B5_3 = L_11;
			G_B5_4 = _stringLiteral25CA44678DB79FF05E2D57A895F5618A234017D8;
			G_B5_5 = G_B3_0;
			goto IL_0062;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		G_B6_4 = G_B4_4;
		G_B6_5 = G_B4_5;
		goto IL_0067;
	}

IL_0062:
	{
		NullCheck(G_B5_0);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
	}

IL_0067:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = G_B6_3;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral40D474CF9A30068217E162C157D7906826217E9C);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral40D474CF9A30068217E162C157D7906826217E9C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		float* L_18 = __this->get_address_of_previousXlt4_14();
		String_t* L_19;
		L_19 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral6FBC82F2ABDF6A052A98DF1892427C16C41F166C);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6FBC82F2ABDF6A052A98DF1892427C16C41F166C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_22 = __this->get_U3CU3E4__this_0();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get_cube4_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B7_0 = 5;
		G_B7_1 = L_21;
		G_B7_2 = L_21;
		G_B7_3 = G_B6_4;
		G_B7_4 = G_B6_5;
		if (L_24)
		{
			G_B8_0 = 5;
			G_B8_1 = L_21;
			G_B8_2 = L_21;
			G_B8_3 = G_B6_4;
			G_B8_4 = G_B6_5;
			goto IL_00a2;
		}
	}
	{
		G_B9_0 = (0.0f);
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		G_B9_4 = G_B7_3;
		G_B9_5 = G_B7_4;
		goto IL_00bc;
	}

IL_00a2:
	{
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_25 = __this->get_U3CU3E4__this_0();
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_cube4_7();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		G_B9_0 = L_29;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
		G_B9_4 = G_B8_3;
		G_B9_5 = G_B8_4;
	}

IL_00bc:
	{
		V_0 = G_B9_0;
		String_t* L_30;
		L_30 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, L_30);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(G_B9_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)G_B9_5, G_B9_4, L_31, /*hidden argument*/NULL);
		// }).setDestroyOnComplete(true);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__9(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__9_m7B1419838E647715BC8200AD6D56DAF1A8F04F81 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// onUpdateWasCalled = true;
		__this->set_onUpdateWasCalled_15((bool)1);
		// }).setOnComplete(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__10()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__10_m91860D812373862DCCD33D1D479A52867ED3CC02 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0070427F15A7841B6D3AE5A0D33F978D11D7CE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AE9F9374F47964A1252702DAE45F2F1AFE6594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CA011F0274A7D5D7116E65518B011C365912846);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905F9300A1B5F4CC937ABBA19CD6F08103CC341E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6109C38A4FFBC81D5C91E19A5C84D95753D14A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD480F1A63BC289A30F2A7349B24AB0C111BE1FEA);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float end = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		// float diff = end - start;
		float L_1 = __this->get_start_16();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// LeanTest.expect(Mathf.Abs(expectedTime - diff) < 0.06f, "SCALED TIMING DIFFERENCE", "expected to complete in roughly " + expectedTime + " but completed in " + diff);
		float L_2 = __this->get_expectedTime_17();
		float L_3 = V_0;
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)));
		float* L_5 = __this->get_address_of_expectedTime_17();
		String_t* L_6;
		L_6 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral0070427F15A7841B6D3AE5A0D33F978D11D7CE36, L_6, _stringLiteralB6109C38A4FFBC81D5C91E19A5C84D95753D14A0, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_4) < ((float)(0.0599999987f)))? 1 : 0), _stringLiteral905F9300A1B5F4CC937ABBA19CD6F08103CC341E, L_8, /*hidden argument*/NULL);
		// LeanTest.expect(Mathf.Approximately(cube1.transform.position.x, -5f), "SCALED ENDING POSITION", "expected to end at -5f, but it ended at " + cube1.transform.position.x);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_9 = __this->get_U3CU3E4__this_0();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_cube1_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		bool L_14;
		L_14 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_13, (-5.0f), /*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_15 = __this->get_U3CU3E4__this_0();
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_cube1_4();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float* L_19 = (&V_1)->get_address_of_x_2();
		String_t* L_20;
		L_20 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8CA011F0274A7D5D7116E65518B011C365912846, L_20, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_14, _stringLiteralD480F1A63BC289A30F2A7349B24AB0C111BE1FEA, L_21, /*hidden argument*/NULL);
		// LeanTest.expect(onUpdateWasCalled, "ON UPDATE FIRED");
		bool L_22 = __this->get_onUpdateWasCalled_15();
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_22, _stringLiteral03AE9F9374F47964A1252702DAE45F2F1AFE6594, (String_t*)NULL, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__11(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__11_m9D776D70F7B40CB7DB069BE5D095C281D59F2713 (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___val0, const RuntimeMethod* method)
{
	U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * G_B3_0 = NULL;
	U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * G_B1_0 = NULL;
	U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * G_B4_1 = NULL;
	{
		// didGetCorrectOnUpdate = val.x >= 1f && val.y >= 1f && val.z >= 1f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___val0;
		float L_1 = L_0.get_x_2();
		G_B1_0 = __this;
		if ((!(((float)L_1) >= ((float)(1.0f)))))
		{
			G_B3_0 = __this;
			goto IL_002d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___val0;
		float L_3 = L_2.get_y_3();
		G_B2_0 = G_B1_0;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			G_B3_0 = G_B1_0;
			goto IL_002d;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___val0;
		float L_5 = L_4.get_z_4();
		G_B4_0 = ((((int32_t)((!(((float)L_5) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B4_1 = G_B2_0;
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_002e:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_didGetCorrectOnUpdate_18((bool)G_B4_0);
		// }).setOnComplete(() => {
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<>c__DisplayClass24_0::<timeBasedTesting>b__12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__12_mB40AAAC5766C52276E4F9A375DB379DBE62012FA (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30C910821A5F194270E5086005673EF9E59D5DE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeanTest.expect(didGetCorrectOnUpdate, "VECTOR3 CALLBACK CALLED");
		bool L_0 = __this->get_didGetCorrectOnUpdate_18();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_0, _stringLiteral30C910821A5F194270E5086005673EF9E59D5DE2, (String_t*)NULL, /*hidden argument*/NULL);
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClotsOfCancelsU3Ed__25__ctor_m9B88818966D8A321B3F23FB53C461C28A354F1C0 (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClotsOfCancelsU3Ed__25_System_IDisposable_Dispose_m40E5F2D2626AB1E624CA39E3740CDFBE5B4F1B30 (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3ClotsOfCancelsU3Ed__25_MoveNext_m9AA75163A6CE98F58622048E0971E438D1E2AFEE (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestingUnitTests_U3ClotsOfCancelsU3Eb__25_0_m79612DDE2FFAD2A0986AA0D91A768BA96269D4F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2477B49ED399DEAB0CDF36A36AC51A15B9FFE5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF52065059197814464AD635B7503F7788CBA31A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	int32_t V_7 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	int32_t V_9 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_10 = NULL;
	int32_t V_11 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_016a;
			}
			case 3:
			{
				goto IL_02be;
			}
			case 4:
			{
				goto IL_03bb;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_3 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0045:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 4f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((4.0f), /*hidden argument*/NULL);
		// int cubeCount = 10;
		__this->set_U3CcubeCountU3E5__2_3(((int32_t)10));
		// int[] tweensA = new int[cubeCount];
		int32_t L_4 = __this->get_U3CcubeCountU3E5__2_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_U3CtweensAU3E5__3_4(L_5);
		// GameObject[] aGOs = new GameObject[cubeCount];
		int32_t L_6 = __this->get_U3CcubeCountU3E5__2_3();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_U3CaGOsU3E5__4_5(L_7);
		// for (int i = 0; i < aGOs.Length; i++)
		V_3 = 0;
		goto IL_0143;
	}

IL_0087:
	{
		// GameObject cube = Instantiate(boxNoCollider) as GameObject;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_boxNoCollider_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_4 = L_10;
		// cube.transform.position = new Vector3(0, 0, i * 2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_4;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// cube.name = "a" + i;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_4;
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_15, L_17, /*hidden argument*/NULL);
		// aGOs[i] = cube;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_19 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_4;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_20);
		// tweensA[i] = LeanTween.move(cube, cube.transform.position + new Vector3(10f, 0, 0), 0.5f + 1f * (1.0f / (float)aGOs.Length)).id;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_U3CtweensAU3E5__3_4();
		int32_t L_22 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_4;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_26, L_27, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = __this->get_U3CaGOsU3E5__4_5();
		NullCheck(L_29);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_30;
		L_30 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_23, L_28, ((float)il2cpp_codegen_add((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))))))), /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_30, /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (int32_t)L_31);
		// LeanTween.color(cube, Color.red, 0.01f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_34;
		L_34 = LeanTween_color_mB591490EB11BF6AAB3D9C823844CD51A54CB54AF(L_32, L_33, (0.00999999978f), /*hidden argument*/NULL);
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0143:
	{
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_36 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_37 = __this->get_U3CaGOsU3E5__4_5();
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0087;
		}
	}
	{
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_38 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_38, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_016a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int[] tweensB = new int[cubeCount];
		int32_t L_39 = __this->get_U3CcubeCountU3E5__2_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_39);
		__this->set_U3CtweensBU3E5__5_6(L_40);
		// GameObject[] bGOs = new GameObject[cubeCount];
		int32_t L_41 = __this->get_U3CcubeCountU3E5__2_3();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_42 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_41);
		__this->set_U3CbGOsU3E5__6_7(L_42);
		// for (int i = 0; i < bGOs.Length; i++)
		V_5 = 0;
		goto IL_0234;
	}

IL_019b:
	{
		// GameObject cube = Instantiate(boxNoCollider) as GameObject;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_43 = V_1;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = L_43->get_boxNoCollider_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_44, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_6 = L_45;
		// cube.transform.position = new Vector3(0, 0, i * 2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = V_6;
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		int32_t L_48 = V_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_48)), (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_47, L_49, /*hidden argument*/NULL);
		// cube.name = "b" + i;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_6;
		String_t* L_51;
		L_51 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_50, L_52, /*hidden argument*/NULL);
		// bGOs[i] = cube;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_53 = __this->get_U3CbGOsU3E5__6_7();
		int32_t L_54 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = V_6;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_55);
		// tweensB[i] = LeanTween.move(cube, cube.transform.position + new Vector3(10f, 0, 0), 2f).id;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = __this->get_U3CtweensBU3E5__5_6();
		int32_t L_57 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = V_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_6;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_64;
		L_64 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_58, L_63, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_64, /*hidden argument*/NULL);
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (int32_t)L_65);
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_66 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0234:
	{
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_67 = V_5;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_68 = __this->get_U3CbGOsU3E5__6_7();
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length))))))
		{
			goto IL_019b;
		}
	}
	{
		// for (int i = 0; i < aGOs.Length; i++)
		V_7 = 0;
		goto IL_0299;
	}

IL_0248:
	{
		// LeanTween.cancel(aGOs[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_69 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_70 = V_7;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823(L_72, /*hidden argument*/NULL);
		// GameObject cube = aGOs[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_73 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_74 = V_7;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_8 = L_76;
		// tweensA[i] = LeanTween.move(cube, new Vector3(0, 0, i * 2f), 2f).id;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_77 = __this->get_U3CtweensAU3E5__3_4();
		int32_t L_78 = V_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_8;
		int32_t L_80 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_81), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_80)), (float)(2.0f))), /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_82;
		L_82 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_79, L_81, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83;
		L_83 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_82, /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_78), (int32_t)L_83);
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_84 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_84, (int32_t)1));
	}

IL_0299:
	{
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_85 = V_7;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_86 = __this->get_U3CaGOsU3E5__4_5();
		NullCheck(L_86);
		if ((((int32_t)L_85) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_86)->max_length))))))
		{
			goto IL_0248;
		}
	}
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_87 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_87, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_87);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02be:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < aGOs.Length; i++)
		V_9 = 0;
		goto IL_0334;
	}

IL_02ca:
	{
		// LeanTween.cancel(aGOs[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_88 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_89 = V_9;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823(L_91, /*hidden argument*/NULL);
		// GameObject cube = aGOs[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_93 = V_9;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_10 = L_95;
		// tweensA[i] = LeanTween.move(cube, new Vector3(0, 0, i * 2f) + new Vector3(10f, 0, 0), 2f).id;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = __this->get_U3CtweensAU3E5__3_4();
		int32_t L_97 = V_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98 = V_10;
		int32_t L_99 = V_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_100), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_99)), (float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
		memset((&L_101), 0, sizeof(L_101));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_101), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_100, L_101, /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_103;
		L_103 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_98, L_102, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_103);
		int32_t L_104;
		L_104 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_103, /*hidden argument*/NULL);
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (int32_t)L_104);
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_0334:
	{
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_106 = V_9;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_107 = __this->get_U3CaGOsU3E5__4_5();
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_107)->max_length))))))
		{
			goto IL_02ca;
		}
	}
	{
		// for (int i = 0; i < bGOs.Length; i++)
		V_11 = 0;
		goto IL_0396;
	}

IL_0345:
	{
		// LeanTween.cancel(bGOs[i]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_108 = __this->get_U3CbGOsU3E5__6_7();
		int32_t L_109 = V_11;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823(L_111, /*hidden argument*/NULL);
		// GameObject cube = bGOs[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_112 = __this->get_U3CbGOsU3E5__6_7();
		int32_t L_113 = V_11;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_12 = L_115;
		// tweensB[i] = LeanTween.move(cube, new Vector3(0, 0, i * 2f), 2f).id;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_116 = __this->get_U3CtweensBU3E5__5_6();
		int32_t L_117 = V_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = V_12;
		int32_t L_119 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_120), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_119)), (float)(2.0f))), /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_121;
		L_121 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_118, L_120, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_121);
		int32_t L_122;
		L_122 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_121, /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (int32_t)L_122);
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_123 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
	}

IL_0396:
	{
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_124 = V_11;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_125 = __this->get_U3CbGOsU3E5__6_7();
		NullCheck(L_125);
		if ((((int32_t)L_124) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length))))))
		{
			goto IL_0345;
		}
	}
	{
		// yield return new WaitForSeconds(2.1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_126 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_126, (2.0999999f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_126);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_03bb:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool inFinalPlace = true;
		V_2 = (bool)1;
		// for (int i = 0; i < aGOs.Length; i++)
		V_13 = 0;
		goto IL_0421;
	}

IL_03c9:
	{
		// if (Vector3.Distance(aGOs[i].transform.position, new Vector3(0, 0, i * 2f) + new Vector3(10f, 0, 0)) > 0.1f)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_127 = __this->get_U3CaGOsU3E5__4_5();
		int32_t L_128 = V_13;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_130);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_130, /*hidden argument*/NULL);
		NullCheck(L_131);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		L_132 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_131, /*hidden argument*/NULL);
		int32_t L_133 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_134), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_133)), (float)(2.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_135;
		memset((&L_135), 0, sizeof(L_135));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_135), (10.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_136;
		L_136 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_134, L_135, /*hidden argument*/NULL);
		float L_137;
		L_137 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_132, L_136, /*hidden argument*/NULL);
		if ((!(((float)L_137) > ((float)(0.100000001f)))))
		{
			goto IL_041b;
		}
	}
	{
		// inFinalPlace = false;
		V_2 = (bool)0;
	}

IL_041b:
	{
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_138 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
	}

IL_0421:
	{
		// for (int i = 0; i < aGOs.Length; i++)
		int32_t L_139 = V_13;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_140 = __this->get_U3CaGOsU3E5__4_5();
		NullCheck(L_140);
		if ((((int32_t)L_139) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length))))))
		{
			goto IL_03c9;
		}
	}
	{
		// for (int i = 0; i < bGOs.Length; i++)
		V_14 = 0;
		goto IL_0471;
	}

IL_0432:
	{
		// if (Vector3.Distance(bGOs[i].transform.position, new Vector3(0, 0, i * 2f)) > 0.1f)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_141 = __this->get_U3CbGOsU3E5__6_7();
		int32_t L_142 = V_14;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_145;
		L_145 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_144, /*hidden argument*/NULL);
		NullCheck(L_145);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_146;
		L_146 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_145, /*hidden argument*/NULL);
		int32_t L_147 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148;
		memset((&L_148), 0, sizeof(L_148));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_148), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)((float)L_147)), (float)(2.0f))), /*hidden argument*/NULL);
		float L_149;
		L_149 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_146, L_148, /*hidden argument*/NULL);
		if ((!(((float)L_149) > ((float)(0.100000001f)))))
		{
			goto IL_046b;
		}
	}
	{
		// inFinalPlace = false;
		V_2 = (bool)0;
	}

IL_046b:
	{
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_150 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
	}

IL_0471:
	{
		// for (int i = 0; i < bGOs.Length; i++)
		int32_t L_151 = V_14;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_152 = __this->get_U3CbGOsU3E5__6_7();
		NullCheck(L_152);
		if ((((int32_t)L_151) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_152)->max_length))))))
		{
			goto IL_0432;
		}
	}
	{
		// LeanTest.expect(inFinalPlace, "AFTER LOTS OF CANCELS");
		bool L_153 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_153, _stringLiteral2477B49ED399DEAB0CDF36A36AC51A15B9FFE5B8, (String_t*)NULL, /*hidden argument*/NULL);
		// GameObject cubePaused = cubeNamed("cPaused");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_154 = V_1;
		NullCheck(L_154);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155;
		L_155 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_154, _stringLiteralF52065059197814464AD635B7503F7788CBA31A5, /*hidden argument*/NULL);
		// cubePaused.LeanMoveX(10f, 1f).setOnComplete(() => {
		//     pauseTweenDidFinish = true;
		// });
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_156;
		L_156 = LeanTweenExt_LeanMoveX_m95E776B4AFF3B3472159C21ACCA7A074FD6250E1(L_155, (10.0f), (1.0f), /*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_157 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_158 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_158, L_157, (intptr_t)((intptr_t)TestingUnitTests_U3ClotsOfCancelsU3Eb__25_0_m79612DDE2FFAD2A0986AA0D91A768BA96269D4F6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_156);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_159;
		L_159 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_156, L_158, /*hidden argument*/NULL);
		// StartCoroutine(pauseTimeNow());
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_160 = V_1;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_161 = V_1;
		NullCheck(L_161);
		RuntimeObject* L_162;
		L_162 = TestingUnitTests_pauseTimeNow_m3293FFC3DDEC01D507093F2D2B8E34B40FC0DD7F(L_161, /*hidden argument*/NULL);
		NullCheck(L_160);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_163;
		L_163 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_160, L_162, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClotsOfCancelsU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2F111DF2BFDD6B3974DFA490B271DC9FCCBFC1DB (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3ClotsOfCancelsU3Ed__25_System_Collections_IEnumerator_Reset_m440F860762B28408E3B9AB6D72144B5E6A1C6F8C (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3ClotsOfCancelsU3Ed__25_System_Collections_IEnumerator_Reset_m440F860762B28408E3B9AB6D72144B5E6A1C6F8C_RuntimeMethod_var)));
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<lotsOfCancels>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3ClotsOfCancelsU3Ed__25_System_Collections_IEnumerator_get_Current_mA7D1CE85A7D50D60D73C5914F5EC60B5E33A344E (U3ClotsOfCancelsU3Ed__25_t388FFEC29BBCBE0385E38111223FE92F60D0E523 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseTimeNowU3Ed__26__ctor_mD1AE96EC04B7EB3C54830BBCA910ACEC6A857D84 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseTimeNowU3Ed__26_System_IDisposable_Dispose_mE8F0437ED1B062C967A1FFCA460708BD42BC5142 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CpauseTimeNowU3Ed__26_MoveNext_m0750DC2D5E587C420188232EDCAD54FEE7ABF659 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestingUnitTests_U3CpauseTimeNowU3Eb__26_1_mB0C630E660D38F819734F11E2998CDE43590D503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CpauseTimeNowU3Eb__26_0_mE763C76C7D6AEEAAB8A0C84892C1D42F508144EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B6_0 = NULL;
	float G_B6_1 = 0.0f;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B5_0 = NULL;
	float G_B5_1 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// LeanTween.delayedCall(0.5f, () => {
		//     Time.timeScale = 1f;
		// }).setUseEstimatedTime(true);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->get_U3CU3E9__26_0_6();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = (0.5f);
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = (0.5f);
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var);
		U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104 * L_7 = ((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CpauseTimeNowU3Eb__26_0_mE763C76C7D6AEEAAB8A0C84892C1D42F508144EB_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = L_8;
		((U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t6493133AD6E3C4496AEFFEA344663F7644D44104_il2cpp_TypeInfo_var))->set_U3CU3E9__26_0_6(L_9);
		G_B6_0 = L_9;
		G_B6_1 = G_B5_1;
	}

IL_006c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10;
		L_10 = LeanTween_delayedCall_mF74ECC6AC349466F55E56C4625DB67892553A59A(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_11;
		L_11 = LTDescr_setUseEstimatedTime_m1882A739CA3F9CE2F6215C61E92D4D5108F352EE(L_10, (bool)1, /*hidden argument*/NULL);
		// LeanTween.delayedCall(1.5f, () => {
		//     LeanTest.expect(pauseTweenDidFinish, "PAUSE BY TIMESCALE FINISHES");
		// }).setUseEstimatedTime(true);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_12 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)TestingUnitTests_U3CpauseTimeNowU3Eb__26_1_mB0C630E660D38F819734F11E2998CDE43590D503_RuntimeMethod_var), /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14;
		L_14 = LeanTween_delayedCall_mF74ECC6AC349466F55E56C4625DB67892553A59A((1.5f), L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_15;
		L_15 = LTDescr_setUseEstimatedTime_m1882A739CA3F9CE2F6215C61E92D4D5108F352EE(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpauseTimeNowU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD12A76EAE3CD0B1B9C938030B3E4D2FAA6456011 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CpauseTimeNowU3Ed__26_System_Collections_IEnumerator_Reset_m88957DE3F231D3C4F8E64C6DADA45876FABB7FD0 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CpauseTimeNowU3Ed__26_System_Collections_IEnumerator_Reset_m88957DE3F231D3C4F8E64C6DADA45876FABB7FD0_RuntimeMethod_var)));
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<pauseTimeNow>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CpauseTimeNowU3Ed__26_System_Collections_IEnumerator_get_Current_m04EA51DB175A4043B51D9B3CFDD410D924B422A0 (U3CpauseTimeNowU3Ed__26_t010969A53700F11A0FBF373FD2C72B275E72E8DB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeBasedTestingU3Ed__24__ctor_mBB473D0F9FCF74C17EE67A02377DBAC113B0ECE6 (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeBasedTestingU3Ed__24_System_IDisposable_Dispose_m2240ABE280E91D3110F4956F4DDAE8A6F211340A (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CtimeBasedTestingU3Ed__24_MoveNext_mF87066714174A943FE18B6A562B291DFA766B72E (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestingUnitTests_rotateRepeatAllFinished_mA343A62B2E6F1D84DAD61BF7DAD6DDC4F24A5077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestingUnitTests_rotateRepeatFinished_m3ED0D0A9DF982711F7D8D670535F1136CB7E3BA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__0_mB82E5FEE09CC712C778F6A007B14D3D455256ECB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__10_m91860D812373862DCCD33D1D479A52867ED3CC02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__11_m9D776D70F7B40CB7DB069BE5D095C281D59F2713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__12_mB40AAAC5766C52276E4F9A375DB379DBE62012FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__13_mFFA8F8E7E5F79A608E1C2216AA8D1B734A758093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__14_m0D4E422B37F43F7D3ACECDE81ADD5A18D4C97EE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__15_mE41B0CD588F01B0A76360EBD332CFAF425E20931_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__1_m8D5BED91D3EE4A8C0C0DF77D2B62F903C3E20D0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__2_mB677486A14C58435757062820302D43BCC02D144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__3_m3987A57ECD0F50AB39FEF707C42D9710AA3CFB2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__4_m87D8E7758DA9C355EE513F9775D9F4B4C387BB56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__5_m2B18F0F9B914A675CEEA356DCFF478B4F5611D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__6_mE7EA3413E1F81C42AAFE03C96A7C6C430EAFAF81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__7_mF6A7BD6551F5A9F146C1B47E86AFF650A2B0005D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__8_m63E7CF9513E4624B5B101B1C46941DC34982AC33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__9_m7B1419838E647715BC8200AD6D56DAF1A8F04F81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0076205629A72E069952802FAC88D7B7E04C374E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D9F3BAD2D69E69BE0B30C05910ADBEBB3F0FF1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12B6B7B4F3601CD4296CB8827F52001F5D20F0E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15582F4B8AA080A197E59A552112133088EB00E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6B8C03370E8657EF552577A1881EC1E02FFD6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261ACB2106F990D8E8F01CB03AF7BCC11478F162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29358036B755C5E42BBDCEDD3094CF416ABD47AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A767C255A8308DD2A5E30E6D3473B0D476A7C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral433247743C67C49F69E3661FCF838C918D4CA0D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5035C316076D600317568041B8D0EE93239A8E85);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E7BE15CBB4129EB2BCA5BD1C4F3FD342E430BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C50F197C0EDAFDDF10DB6A380FDFDA6388DAD2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EDCC8B6E6096254F6F3E6E216E0153A6E061665);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7CE377110056B91CE0A004D9CF76B4A6F91BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85A581B5266ADD3C3E6A78C80AB2AE41D24AFB62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C253B1BA60B28FF276877A6B8D34443662D85EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95B323F78A74BCD68F5E49F4D09087DF0FED1ECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99CEEF1128192281389799CF8A416030191F59B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE31F1B2685BB626B1A73E58DC30879102D901A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB193D0EB8CC0E20180692325991A5981A85DB7C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB60AA783571BBF1FED1FED29F2C637208CE8F05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF9F2B43CB2AB8F134223C3CEF64A2DC09AB6DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC35E4C83C96EAC263B8E637517709F326674F621);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB71F660819A30904340C16426A4989B66917481);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB22FDF7BF45D933EDC4EF4D1AD8751DFE24B84F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2BA8FA019EFFDC8F943B8DD77CE3A19BD89F994);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * V_1 = NULL;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_11 = NULL;
	int32_t V_12 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_14 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_15 = NULL;
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * V_16 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_21 = NULL;
	int32_t G_B6_0 = 0;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B14_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B14_1 = NULL;
	int32_t G_B14_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B14_3 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B13_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B13_1 = NULL;
	int32_t G_B13_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B13_3 = NULL;
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * G_B16_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B16_1 = NULL;
	int32_t G_B16_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B16_3 = NULL;
	Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * G_B15_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B15_1 = NULL;
	int32_t G_B15_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B15_3 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B18_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B18_1 = NULL;
	int32_t G_B18_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B18_3 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B17_0 = NULL;
	LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * G_B17_1 = NULL;
	int32_t G_B17_2 = 0;
	LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* G_B17_3 = NULL;
	bool G_B47_0 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_012e;
			}
			case 3:
			{
				goto IL_06f6;
			}
			case 4:
			{
				goto IL_08ae;
			}
			case 5:
			{
				goto IL_09fd;
			}
			case 6:
			{
				goto IL_0b31;
			}
			case 7:
			{
				goto IL_0c56;
			}
			case 8:
			{
				goto IL_0d73;
			}
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_3 = (U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass24_0__ctor_m8818C4F306B80B7FEE062793CBEBEAB352E53F22(L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E8__1_3(L_3);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_4 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_0(L_5);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_6 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0071:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject cubeNormal = cubeNamed("normalTimeScale");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_7, _stringLiteral5035C316076D600317568041B8D0EE93239A8E85, /*hidden argument*/NULL);
		// LeanTween.moveX(cubeNormal, 12f, 1.5f).setIgnoreTimeScale(false).setOnComplete(() => {
		//     timeElapsedNormalTimeScale = Time.time;
		// });
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_10;
		L_10 = LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3(L_9, (12.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_10);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_11;
		L_11 = LTDescr_setIgnoreTimeScale_mDD2DF875144DFBA017697139ECD83164182DD6C9(L_10, (bool)0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_12 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_13 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__0_mB82E5FEE09CC712C778F6A007B14D3D455256ECB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_14;
		L_14 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_11, L_13, /*hidden argument*/NULL);
		// LTDescr[] descr = LeanTween.descriptions(cubeNormal);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_15;
		L_15 = LeanTween_descriptions_m2ADDBCE0DFC78640128B7224DD86FE6C3938D76C(L_9, /*hidden argument*/NULL);
		V_2 = L_15;
		// LeanTest.expect(descr.Length >= 0 && descr[0].to.x == 12f, "WE CAN RETRIEVE A DESCRIPTION");
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))) < ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = LTDescr_get_to_m3887E20BF193FF607A48502338A46C90948F5FA5_inline(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		G_B6_0 = ((((float)L_21) == ((float)(12.0f)))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B6_0 = 0;
	}

IL_00d3:
	{
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)G_B6_0, _stringLiteral7EDCC8B6E6096254F6F3E6E216E0153A6E061665, (String_t*)NULL, /*hidden argument*/NULL);
		// GameObject cubeIgnore = cubeNamed("ignoreTimeScale");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_22, _stringLiteralBF9F2B43CB2AB8F134223C3CEF64A2DC09AB6DF1, /*hidden argument*/NULL);
		// LeanTween.moveX(cubeIgnore, 5f, 1.5f).setIgnoreTimeScale(true).setOnComplete(() => {
		//     timeElapsedIgnoreTimeScale = Time.time;
		// });
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_24;
		L_24 = LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3(L_23, (5.0f), (1.5f), /*hidden argument*/NULL);
		NullCheck(L_24);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_25;
		L_25 = LTDescr_setIgnoreTimeScale_mDD2DF875144DFBA017697139ECD83164182DD6C9(L_24, (bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_26 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_27 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_27, L_26, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__1_m8D5BED91D3EE4A8C0C0DF77D2B62F903C3E20D0C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_28;
		L_28 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_25, L_27, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_29 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_29, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_29);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_012e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LeanTest.expect(Mathf.Abs(timeElapsedNormalTimeScale - timeElapsedIgnoreTimeScale) < 0.7f, "START IGNORE TIMING", "timeElapsedIgnoreTimeScale:" + timeElapsedIgnoreTimeScale + " timeElapsedNormalTimeScale:" + timeElapsedNormalTimeScale);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_30 = V_1;
		NullCheck(L_30);
		float L_31 = L_30->get_timeElapsedNormalTimeScale_22();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->get_timeElapsedIgnoreTimeScale_23();
		float L_34;
		L_34 = fabsf(((float)il2cpp_codegen_subtract((float)L_31, (float)L_33)));
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_35 = V_1;
		NullCheck(L_35);
		float* L_36 = L_35->get_address_of_timeElapsedIgnoreTimeScale_23();
		String_t* L_37;
		L_37 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_36, /*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_38 = V_1;
		NullCheck(L_38);
		float* L_39 = L_38->get_address_of_timeElapsedNormalTimeScale_22();
		String_t* L_40;
		L_40 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_39, /*hidden argument*/NULL);
		String_t* L_41;
		L_41 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral3A767C255A8308DD2A5E30E6D3473B0D476A7C8C, L_37, _stringLiteralAE31F1B2685BB626B1A73E58DC30879102D901A6, L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((float)L_34) < ((float)(0.699999988f)))? 1 : 0), _stringLiteralEB22FDF7BF45D933EDC4EF4D1AD8751DFE24B84F, L_41, /*hidden argument*/NULL);
		// Time.timeScale = 4f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((4.0f), /*hidden argument*/NULL);
		// int pauseCount = 0;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_42 = __this->get_U3CU3E8__1_3();
		NullCheck(L_42);
		L_42->set_pauseCount_1(0);
		// LeanTween.value(gameObject, 0f, 1f, 1f).setOnUpdate((float val) => {
		//     pauseCount++;
		// }).pause();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_43 = V_1;
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_45;
		L_45 = LeanTween_value_m16722DEDC681F28C188D0F4557F0BF9B6A1488AF(L_44, (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_46 = __this->get_U3CU3E8__1_3();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_47 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)il2cpp_codegen_object_new(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__2_mB677486A14C58435757062820302D43BCC02D144_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		NullCheck(L_45);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_48;
		L_48 = LTDescr_setOnUpdate_m55FBE2275AB200DCFB3793FA745A238491E7072B(L_45, L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_49;
		L_49 = LTDescr_pause_m831C5988C87832DF30D6566086DD174849A8712A(L_48, /*hidden argument*/NULL);
		// Vector3[] roundCirc = new Vector3[] { new Vector3(0f, 0f, 0f), new Vector3(-9.1f, 25.1f, 0f), new Vector3(-1.2f, 15.9f, 0f), new Vector3(-25f, 25f, 0f), new Vector3(-25f, 25f, 0f), new Vector3(-50.1f, 15.9f, 0f), new Vector3(-40.9f, 25.1f, 0f), new Vector3(-50f, 0f, 0f), new Vector3(-50f, 0f, 0f), new Vector3(-40.9f, -25.1f, 0f), new Vector3(-50.1f, -15.9f, 0f), new Vector3(-25f, -25f, 0f), new Vector3(-25f, -25f, 0f), new Vector3(0f, -15.9f, 0f), new Vector3(-9.1f, -25.1f, 0f), new Vector3(0f, 0f, 0f) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_50 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = L_50;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_52);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_53 = L_51;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), (-9.10000038f), (25.1000004f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_54);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_55 = L_53;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_56), (-1.20000005f), (15.8999996f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_56);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_57 = L_55;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), (-25.0f), (25.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_58);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_59 = L_57;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_60), (-25.0f), (25.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_60);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_61 = L_59;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_62), (-50.0999985f), (15.8999996f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_62);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_63 = L_61;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_64), (-40.9000015f), (25.1000004f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_64);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_65 = L_63;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_66), (-50.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_66);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_67 = L_65;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_68), (-50.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_68);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = L_67;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_70), (-40.9000015f), (-25.1000004f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_70);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = L_69;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_72), (-50.0999985f), (-15.8999996f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_72);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_73 = L_71;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_74), (-25.0f), (-25.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_74);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_75 = L_73;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_76), (-25.0f), (-25.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_76);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_77 = L_75;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_78), (0.0f), (-15.8999996f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_78);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_79 = L_77;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
		memset((&L_80), 0, sizeof(L_80));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_80), (-9.10000038f), (-25.1000004f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_80);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_81 = L_79;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		memset((&L_82), 0, sizeof(L_82));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_82), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_82);
		V_3 = L_81;
		// GameObject cubeRound = cubeNamed("bRound");
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_83 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_84 = V_1;
		NullCheck(L_84);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85;
		L_85 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_84, _stringLiteral8C253B1BA60B28FF276877A6B8D34443662D85EB, /*hidden argument*/NULL);
		NullCheck(L_83);
		L_83->set_cubeRound_2(L_85);
		// Vector3 onStartPos = cubeRound.transform.position;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_86 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_87 = __this->get_U3CU3E8__1_3();
		NullCheck(L_87);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = L_87->get_cubeRound_2();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		NullCheck(L_86);
		L_86->set_onStartPos_3(L_90);
		// LeanTween.moveLocal(cubeRound, roundCirc, 0.5f).setOnComplete(() => {
		//     LeanTest.expect(cubeRound.transform.position == onStartPos, "BEZIER CLOSED LOOP SHOULD END AT START", "onStartPos:" + onStartPos + " onEnd:" + cubeRound.transform.position);
		// });
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_91 = __this->get_U3CU3E8__1_3();
		NullCheck(L_91);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_92 = L_91->get_cubeRound_2();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_93 = V_3;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_94;
		L_94 = LeanTween_moveLocal_m5EFEFD16EBF5E4EFC333418953F72DA504E191A0(L_92, L_93, (0.5f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_95 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_96 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_96, L_95, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__3_m3987A57ECD0F50AB39FEF707C42D9710AA3CFB2D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_94);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_97;
		L_97 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_94, L_96, /*hidden argument*/NULL);
		// LTBezierPath roundCircPath = new LTBezierPath(roundCirc);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_98 = V_3;
		LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 * L_99 = (LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48 *)il2cpp_codegen_object_new(LTBezierPath_tEB367BB294F41F1D4B9B728E83788A4A2EB8FD48_il2cpp_TypeInfo_var);
		LTBezierPath__ctor_m761CE6701D4AF322CDF34898E4A75EE3996EEF32(L_99, L_98, /*hidden argument*/NULL);
		// float ratioPoint = roundCircPath.ratioAtPoint(new Vector3(-25f, 25f, 0f));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_100), (-25.0f), (25.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_99);
		float L_101;
		L_101 = LTBezierPath_ratioAtPoint_m143BC2A593074BDC7858B6861351A0D044EC38C3(L_99, L_100, (0.00999999978f), /*hidden argument*/NULL);
		// LeanTest.expect(Mathf.Equals(ratioPoint, 0.25f), "BEZIER RATIO POINT");
		float L_102 = L_101;
		RuntimeObject * L_103 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_102);
		float L_104 = (0.25f);
		RuntimeObject * L_105 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_104);
		bool L_106;
		L_106 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_103, L_105, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_106, _stringLiteral99CEEF1128192281389799CF8A416030191F59B5, (String_t*)NULL, /*hidden argument*/NULL);
		// Vector3[] roundSpline = new Vector3[] { new Vector3(0f, 0f, 0f), new Vector3(0f, 0f, 0f), new Vector3(2f, 0f, 0f), new Vector3(0.9f, 2f, 0f), new Vector3(0f, 0f, 0f), new Vector3(0f, 0f, 0f) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_107 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)6);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_108 = L_107;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_109), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_109);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_110 = L_108;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_111), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_111);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_112 = L_110;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_113), (2.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_113);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_114 = L_112;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_115;
		memset((&L_115), 0, sizeof(L_115));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_115), (0.899999976f), (2.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_115);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_116 = L_114;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_117;
		memset((&L_117), 0, sizeof(L_117));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_117), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_117);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_118 = L_116;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_119), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_119);
		V_4 = L_118;
		// GameObject cubeSpline = cubeNamed("bSpline");
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_120 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_121 = V_1;
		NullCheck(L_121);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122;
		L_122 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_121, _stringLiteralCB71F660819A30904340C16426A4989B66917481, /*hidden argument*/NULL);
		NullCheck(L_120);
		L_120->set_cubeSpline_5(L_122);
		// Vector3 onStartPosSpline = cubeSpline.transform.position;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_123 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_124 = __this->get_U3CU3E8__1_3();
		NullCheck(L_124);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = L_124->get_cubeSpline_5();
		NullCheck(L_125);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_126;
		L_126 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_125, /*hidden argument*/NULL);
		NullCheck(L_126);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_126, /*hidden argument*/NULL);
		NullCheck(L_123);
		L_123->set_onStartPosSpline_4(L_127);
		// LeanTween.moveSplineLocal(cubeSpline, roundSpline, 0.5f).setOnComplete(() => {
		//     LeanTest.expect(Vector3.Distance(onStartPosSpline, cubeSpline.transform.position) <= 0.01f, "SPLINE CLOSED LOOP SHOULD END AT START", "onStartPos:" + onStartPosSpline + " onEnd:" + cubeSpline.transform.position + " dist:" + Vector3.Distance(onStartPosSpline, cubeSpline.transform.position));
		// });
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_128 = __this->get_U3CU3E8__1_3();
		NullCheck(L_128);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129 = L_128->get_cubeSpline_5();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_130 = V_4;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_131;
		L_131 = LeanTween_moveSplineLocal_m280D26BA7DE193E5F3EBB523ACEE6E44FF0978B7(L_129, L_130, (0.5f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_132 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_133 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_133, L_132, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__4_m87D8E7758DA9C355EE513F9775D9F4B4C387BB56_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_131);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_134;
		L_134 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_131, L_133, /*hidden argument*/NULL);
		// GameObject cubeSeq = cubeNamed("cSeq");
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_135 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_136 = V_1;
		NullCheck(L_136);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137;
		L_137 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_136, _stringLiteralBB60AA783571BBF1FED1FED29F2C637208CE8F05, /*hidden argument*/NULL);
		NullCheck(L_135);
		L_135->set_cubeSeq_6(L_137);
		// var seq = LeanTween.sequence().append(LeanTween.moveX(cubeSeq, 100f, 0.2f));
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_138;
		L_138 = LeanTween_sequence_m8FE5B82BEF69D9AF66D54E849587B4CF933E34A5((bool)1, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_139 = __this->get_U3CU3E8__1_3();
		NullCheck(L_139);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140 = L_139->get_cubeSeq_6();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_141;
		L_141 = LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3(L_140, (100.0f), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_138);
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_142;
		L_142 = LTSeq_append_m16B953CD94139BC1C75791A5D461C744EA4ECA64(L_138, L_141, /*hidden argument*/NULL);
		// seq.append(0.1f).append(LeanTween.scaleX(cubeSeq, 2f, 0.1f));
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_143 = L_142;
		NullCheck(L_143);
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_144;
		L_144 = LTSeq_append_m9CCA2E2A2FEC8BB783E6973C5259009DE1F2CA93(L_143, (0.100000001f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_145 = __this->get_U3CU3E8__1_3();
		NullCheck(L_145);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146 = L_145->get_cubeSeq_6();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_147;
		L_147 = LeanTween_scaleX_m4DCF8A388D1FE2AF9C40F67DDB77B958DE1F0220(L_146, (2.0f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_144);
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_148;
		L_148 = LTSeq_append_m16B953CD94139BC1C75791A5D461C744EA4ECA64(L_144, L_147, /*hidden argument*/NULL);
		// seq.append(() => {
		//     LeanTest.expect(cubeSeq.transform.position.x == 100f, "SEQ MOVE X FINISHED", "move x:" + cubeSeq.transform.position.x);
		//     LeanTest.expect(cubeSeq.transform.localScale.x == 2f, "SEQ SCALE X FINISHED", "scale x:" + cubeSeq.transform.localScale.x);
		// }).setScale(0.2f);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_149 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_150 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_150, L_149, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__5_m2B18F0F9B914A675CEEA356DCFF478B4F5611D8F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_143);
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_151;
		L_151 = LTSeq_append_m918D5B42DF7E78F1D632BDFB559566153BC03151(L_143, L_150, /*hidden argument*/NULL);
		NullCheck(L_151);
		LTSeq_tB84973C47F9384BFC34A4F8D1D74A3B622FDF222 * L_152;
		L_152 = LTSeq_setScale_m01A80A5EF1549289CCFE8F7E7176A5B669781699(L_151, (0.200000003f), /*hidden argument*/NULL);
		// GameObject cubeBounds = cubeNamed("cBounds");
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_153 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_154 = V_1;
		NullCheck(L_154);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155;
		L_155 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_154, _stringLiteralF2BA8FA019EFFDC8F943B8DD77CE3A19BD89F994, /*hidden argument*/NULL);
		NullCheck(L_153);
		L_153->set_cubeBounds_7(L_155);
		// bool didPassBounds = true;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_156 = __this->get_U3CU3E8__1_3();
		NullCheck(L_156);
		L_156->set_didPassBounds_8((bool)1);
		// Vector3 failPoint = Vector3.zero;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_157 = __this->get_U3CU3E8__1_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158;
		L_158 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_157);
		L_157->set_failPoint_9(L_158);
		// LeanTween.move(cubeBounds, new Vector3(10, 10, 10), 0.1f).setOnUpdate((float val) => {
		//     //              Debug.LogWarning("cubeBounds x:"+cubeBounds.transform.position.x + " y:"+ cubeBounds.transform.position.y+" z:"+cubeBounds.transform.position.z);
		//     if (cubeBounds.transform.position.x < 0f || cubeBounds.transform.position.x > 10f || cubeBounds.transform.position.y < 0f || cubeBounds.transform.position.y > 10f || cubeBounds.transform.position.z < 0f || cubeBounds.transform.position.z > 10f)
		//     {
		//         didPassBounds = false;
		//         failPoint = cubeBounds.transform.position;
		//         //                  Debug.LogError("OUT OF BOUNDS");
		//     }
		// }).setLoopPingPong().setRepeat(8).setOnComplete(() => {
		//     LeanTest.expect(didPassBounds, "OUT OF BOUNDS", "pos x:" + failPoint.x + " y:" + failPoint.y + " z:" + failPoint.z);
		// });
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_159 = __this->get_U3CU3E8__1_3();
		NullCheck(L_159);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_160 = L_159->get_cubeBounds_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161;
		memset((&L_161), 0, sizeof(L_161));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_161), (10.0f), (10.0f), (10.0f), /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_162;
		L_162 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_160, L_161, (0.100000001f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_163 = __this->get_U3CU3E8__1_3();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_164 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)il2cpp_codegen_object_new(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3(L_164, L_163, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__6_mE7EA3413E1F81C42AAFE03C96A7C6C430EAFAF81_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		NullCheck(L_162);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_165;
		L_165 = LTDescr_setOnUpdate_m55FBE2275AB200DCFB3793FA745A238491E7072B(L_162, L_164, /*hidden argument*/NULL);
		NullCheck(L_165);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_166;
		L_166 = LTDescr_setLoopPingPong_mB14D4AD3878CB744ADBB3F0B933E1C50CACEDC18(L_165, /*hidden argument*/NULL);
		NullCheck(L_166);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_167;
		L_167 = LTDescr_setRepeat_m7D66B000EF60DCC943D848C1BF53BD7C7BEF8313(L_166, 8, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_168 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_169 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_169, L_168, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__7_mF6A7BD6551F5A9F146C1B47E86AFF650A2B0005D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_167);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_170;
		L_170 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_167, L_169, /*hidden argument*/NULL);
		// groupTweens = new LTDescr[1200];
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_171 = V_1;
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_172 = (LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F*)(LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F*)SZArrayNew(LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1200));
		NullCheck(L_171);
		L_171->set_groupTweens_16(L_172);
		// groupGOs = new GameObject[groupTweens.Length];
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_173 = V_1;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_174 = V_1;
		NullCheck(L_174);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_175 = L_174->get_groupTweens_16();
		NullCheck(L_175);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_176 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_175)->max_length))));
		NullCheck(L_173);
		L_173->set_groupGOs_17(L_176);
		// groupTweensCnt = 0;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_177 = V_1;
		NullCheck(L_177);
		L_177->set_groupTweensCnt_18(0);
		// int descriptionMatchCount = 0;
		__this->set_U3CdescriptionMatchCountU3E5__2_4(0);
		// for (int i = 0; i < groupTweens.Length; i++)
		V_10 = 0;
		goto IL_06d6;
	}

IL_068c:
	{
		// GameObject cube = cubeNamed("c" + i);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_178 = V_1;
		String_t* L_179;
		L_179 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_10), /*hidden argument*/NULL);
		String_t* L_180;
		L_180 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, L_179, /*hidden argument*/NULL);
		NullCheck(L_178);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_181;
		L_181 = TestingUnitTests_cubeNamed_m3948700DD2B6420F25DFC461AB2A2A5357E792D6(L_178, L_180, /*hidden argument*/NULL);
		V_11 = L_181;
		// cube.transform.position = new Vector3(0, 0, i * 3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_182 = V_11;
		NullCheck(L_182);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_183;
		L_183 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_182, /*hidden argument*/NULL);
		int32_t L_184 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_185), (0.0f), (0.0f), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_184, (int32_t)3)))), /*hidden argument*/NULL);
		NullCheck(L_183);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_183, L_185, /*hidden argument*/NULL);
		// groupGOs[i] = cube;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_186 = V_1;
		NullCheck(L_186);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_187 = L_186->get_groupGOs_17();
		int32_t L_188 = V_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_189 = V_11;
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, L_189);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_189);
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_190 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)1));
	}

IL_06d6:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_191 = V_10;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_192 = V_1;
		NullCheck(L_192);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_193 = L_192->get_groupTweens_16();
		NullCheck(L_193);
		if ((((int32_t)L_191) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_193)->max_length))))))
		{
			goto IL_068c;
		}
	}
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_194 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_194, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_194);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_06f6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bool hasGroupTweensCheckStarted = false;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_195 = __this->get_U3CU3E8__1_3();
		NullCheck(L_195);
		L_195->set_hasGroupTweensCheckStarted_13((bool)0);
		// int setOnStartNum = 0;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_196 = __this->get_U3CU3E8__1_3();
		NullCheck(L_196);
		L_196->set_setOnStartNum_10(0);
		// int setPosNum = 0;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_197 = __this->get_U3CU3E8__1_3();
		NullCheck(L_197);
		L_197->set_setPosNum_12(0);
		// bool setPosOnUpdate = true;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_198 = __this->get_U3CU3E8__1_3();
		NullCheck(L_198);
		L_198->set_setPosOnUpdate_11((bool)1);
		// for (int i = 0; i < groupTweens.Length; i++)
		V_12 = 0;
		goto IL_088d;
	}

IL_0735:
	{
		// Vector3 finalPos = transform.position + Vector3.one * 3f;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_199 = V_1;
		NullCheck(L_199);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_200;
		L_200 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_199, /*hidden argument*/NULL);
		NullCheck(L_200);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_200, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_202;
		L_202 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203;
		L_203 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_202, (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204;
		L_204 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_201, L_203, /*hidden argument*/NULL);
		V_13 = L_204;
		// Dictionary<string, object> finalDict = new Dictionary<string, object> { { "final", finalPos }, { "go", groupGOs[i] } };
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_205 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_205, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_206 = L_205;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207 = V_13;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_208 = L_207;
		RuntimeObject * L_209 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_208);
		NullCheck(L_206);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_206, _stringLiteral829A632019B79F9E3E4862CB519E27236E6769D1, L_209, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_210 = L_206;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_211 = V_1;
		NullCheck(L_211);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_212 = L_211->get_groupGOs_17();
		int32_t L_213 = V_12;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_210);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_210, _stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54, L_215, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		V_14 = L_210;
		// groupTweens[i] = LeanTween.move(groupGOs[i], finalPos, 3f).setOnStart(() => {
		//     setOnStartNum++;
		// }).setOnUpdate((Vector3 newPosition) => {
		//     if (transform.position.z > newPosition.z)
		//     {
		//         setPosOnUpdate = false;
		//     }
		//     //                  Debug.LogWarning("New Position: " + newPosition.ToString());
		// }).
		// setOnCompleteParam(finalDict).
		// setOnComplete((object param) => {
		//     Dictionary<string, object> finalDictRetr = param as Dictionary<string, object>;
		//     Vector3 neededPos = (Vector3)finalDictRetr["final"];
		//     GameObject tweenedGo = finalDictRetr["go"] as GameObject;
		//     if (neededPos.ToString() == tweenedGo.transform.position.ToString())
		//         setPosNum++;
		//     else
		//     {
		//         //                      Debug.Log("neededPos:"+neededPos+" tweenedGo.transform.position:"+tweenedGo.transform.position);
		//     }
		//     if (hasGroupTweensCheckStarted == false)
		//     {
		//         hasGroupTweensCheckStarted = true;
		//         LeanTween.delayedCall(gameObject, 0.1f, () => {
		//             LeanTest.expect(setOnStartNum == groupTweens.Length, "SETONSTART CALLS", "expected:" + groupTweens.Length + " was:" + setOnStartNum);
		//             LeanTest.expect(groupTweensCnt == groupTweens.Length, "GROUP FINISH", "expected " + groupTweens.Length + " tweens but got " + groupTweensCnt);
		//             LeanTest.expect(setPosNum == groupTweens.Length, "GROUP POSITION FINISH", "expected " + groupTweens.Length + " tweens but got " + setPosNum);
		//             LeanTest.expect(setPosOnUpdate, "GROUP POSITION ON UPDATE");
		//         });
		//     }
		//     groupTweensCnt++;
		// });
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_216 = V_1;
		NullCheck(L_216);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_217 = L_216->get_groupTweens_16();
		int32_t L_218 = V_12;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_219 = V_1;
		NullCheck(L_219);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_220 = L_219->get_groupGOs_17();
		int32_t L_221 = V_12;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_224 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_225;
		L_225 = LeanTween_move_m78D08B26807623C822B81CFA60DAC960DDBAC377(L_223, L_224, (3.0f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_226 = __this->get_U3CU3E8__1_3();
		NullCheck(L_226);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_227 = L_226->get_U3CU3E9__13_19();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_228 = L_227;
		G_B13_0 = L_228;
		G_B13_1 = L_225;
		G_B13_2 = L_218;
		G_B13_3 = L_217;
		if (L_228)
		{
			G_B14_0 = L_228;
			G_B14_1 = L_225;
			G_B14_2 = L_218;
			G_B14_3 = L_217;
			goto IL_07d0;
		}
	}
	{
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_229 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_230 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_231 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_231, L_230, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__13_mFFA8F8E7E5F79A608E1C2216AA8D1B734A758093_RuntimeMethod_var), /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_232 = L_231;
		V_15 = L_232;
		NullCheck(L_229);
		L_229->set_U3CU3E9__13_19(L_232);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_233 = V_15;
		G_B14_0 = L_233;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}

IL_07d0:
	{
		NullCheck(G_B14_1);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_234;
		L_234 = LTDescr_setOnStart_m37383DCD917312D49E2291F3A47F8F9361155A1A(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_235 = __this->get_U3CU3E8__1_3();
		NullCheck(L_235);
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_236 = L_235->get_U3CU3E9__14_20();
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_237 = L_236;
		G_B15_0 = L_237;
		G_B15_1 = L_234;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		if (L_237)
		{
			G_B16_0 = L_237;
			G_B16_1 = L_234;
			G_B16_2 = G_B14_2;
			G_B16_3 = G_B14_3;
			goto IL_0805;
		}
	}
	{
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_238 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_239 = __this->get_U3CU3E8__1_3();
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_240 = (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B *)il2cpp_codegen_object_new(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B_il2cpp_TypeInfo_var);
		Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743(L_240, L_239, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__14_m0D4E422B37F43F7D3ACECDE81ADD5A18D4C97EE8_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_RuntimeMethod_var);
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_241 = L_240;
		V_16 = L_241;
		NullCheck(L_238);
		L_238->set_U3CU3E9__14_20(L_241);
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_242 = V_16;
		G_B16_0 = L_242;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0805:
	{
		NullCheck(G_B16_1);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_243;
		L_243 = LTDescr_setOnUpdate_m5356685ADFD38D45881211740E990617C0F2A80D(G_B16_1, G_B16_0, NULL, /*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_244 = V_14;
		NullCheck(L_243);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_245;
		L_245 = LTDescr_setOnCompleteParam_m0DF2C3997947B6F72DFD4AA1BAEC841B8B84DD63(L_243, L_244, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_246 = __this->get_U3CU3E8__1_3();
		NullCheck(L_246);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_247 = L_246->get_U3CU3E9__15_22();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_248 = L_247;
		G_B17_0 = L_248;
		G_B17_1 = L_245;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
		if (L_248)
		{
			G_B18_0 = L_248;
			G_B18_1 = L_245;
			G_B18_2 = G_B16_2;
			G_B18_3 = G_B16_3;
			goto IL_0842;
		}
	}
	{
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_249 = __this->get_U3CU3E8__1_3();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_250 = __this->get_U3CU3E8__1_3();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_251 = (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *)il2cpp_codegen_object_new(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC_il2cpp_TypeInfo_var);
		Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158(L_251, L_250, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__15_mE41B0CD588F01B0A76360EBD332CFAF425E20931_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_RuntimeMethod_var);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_252 = L_251;
		V_17 = L_252;
		NullCheck(L_249);
		L_249->set_U3CU3E9__15_22(L_252);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_253 = V_17;
		G_B18_0 = L_253;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}

IL_0842:
	{
		NullCheck(G_B18_1);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_254;
		L_254 = LTDescr_setOnComplete_m61B62A9BB1DE6DC69EB97F111139AB379A2AB33C(G_B18_1, G_B18_0, /*hidden argument*/NULL);
		NullCheck(G_B18_3);
		ArrayElementTypeCheck (G_B18_3, L_254);
		(G_B18_3)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_2), (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F *)L_254);
		// if (LeanTween.description(groupTweens[i].id).trans == groupTweens[i].trans)
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_255 = V_1;
		NullCheck(L_255);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_256 = L_255->get_groupTweens_16();
		int32_t L_257 = V_12;
		NullCheck(L_256);
		int32_t L_258 = L_257;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_259 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		NullCheck(L_259);
		int32_t L_260;
		L_260 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_259, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_261;
		L_261 = LeanTween_description_mCF024DD0005701DAC6CFDDFCAC0FCBF66C613B38(L_260, /*hidden argument*/NULL);
		NullCheck(L_261);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_262 = L_261->get_trans_26();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_263 = V_1;
		NullCheck(L_263);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_264 = L_263->get_groupTweens_16();
		int32_t L_265 = V_12;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		NullCheck(L_267);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_268 = L_267->get_trans_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_269;
		L_269 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_262, L_268, /*hidden argument*/NULL);
		if (!L_269)
		{
			goto IL_0887;
		}
	}
	{
		// descriptionMatchCount++;
		int32_t L_270 = __this->get_U3CdescriptionMatchCountU3E5__2_4();
		V_18 = L_270;
		int32_t L_271 = V_18;
		__this->set_U3CdescriptionMatchCountU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_271, (int32_t)1)));
	}

IL_0887:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_272 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)1));
	}

IL_088d:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_273 = V_12;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_274 = V_1;
		NullCheck(L_274);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_275 = L_274->get_groupTweens_16();
		NullCheck(L_275);
		if ((((int32_t)L_273) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_275)->max_length))))))
		{
			goto IL_0735;
		}
	}
	{
		goto IL_08b5;
	}

IL_089e:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_08ae:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_08b5:
	{
		// while (LeanTween.tweensRunning < groupTweens.Length)
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		int32_t L_276;
		L_276 = LeanTween_get_tweensRunning_mDD39747E471B1CCDF83F6F79B5CFA224E47D3842(/*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_277 = V_1;
		NullCheck(L_277);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_278 = L_277->get_groupTweens_16();
		NullCheck(L_278);
		if ((((int32_t)L_276) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_278)->max_length))))))
		{
			goto IL_089e;
		}
	}
	{
		// LeanTest.expect(descriptionMatchCount == groupTweens.Length, "GROUP IDS MATCH");
		int32_t L_279 = __this->get_U3CdescriptionMatchCountU3E5__2_4();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_280 = V_1;
		NullCheck(L_280);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_281 = L_280->get_groupTweens_16();
		NullCheck(L_281);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_279) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_281)->max_length)))))? 1 : 0), _stringLiteral261ACB2106F990D8E8F01CB03AF7BCC11478F162, (String_t*)NULL, /*hidden argument*/NULL);
		// int expectedSearch = groupTweens.Length + 7;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_282 = V_1;
		NullCheck(L_282);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_283 = L_282->get_groupTweens_16();
		NullCheck(L_283);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_283)->max_length))), (int32_t)7));
		// LeanTest.expect(LeanTween.maxSearch <= expectedSearch, "MAX SEARCH OPTIMIZED", "maxSearch:" + LeanTween.maxSearch + " should be:" + expectedSearch);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		int32_t L_284;
		L_284 = LeanTween_get_maxSearch_m76F5A3551B333FEAD6918DC0795238CEA51E8764_inline(/*hidden argument*/NULL);
		int32_t L_285 = V_5;
		int32_t L_286;
		L_286 = LeanTween_get_maxSearch_m76F5A3551B333FEAD6918DC0795238CEA51E8764_inline(/*hidden argument*/NULL);
		V_18 = L_286;
		String_t* L_287;
		L_287 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_18), /*hidden argument*/NULL);
		String_t* L_288;
		L_288 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		String_t* L_289;
		L_289 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral5E7BE15CBB4129EB2BCA5BD1C4F3FD342E430BEE, L_287, _stringLiteral0076205629A72E069952802FAC88D7B7E04C374E, L_288, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)((((int32_t)L_284) > ((int32_t)L_285))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral7F7CE377110056B91CE0A004D9CF76B4A6F91BFC, L_289, /*hidden argument*/NULL);
		// LeanTest.expect(LeanTween.isTweening() == true, "SOMETHING IS TWEENING");
		bool L_290;
		L_290 = LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B(L_290, _stringLiteral7C50F197C0EDAFDDF10DB6A380FDFDA6388DAD2D, (String_t*)NULL, /*hidden argument*/NULL);
		// float previousXlt4 = cube4.transform.position.x;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_291 = __this->get_U3CU3E8__1_3();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_292 = V_1;
		NullCheck(L_292);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_293 = L_292->get_cube4_7();
		NullCheck(L_293);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_294;
		L_294 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_293, /*hidden argument*/NULL);
		NullCheck(L_294);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_295;
		L_295 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_294, /*hidden argument*/NULL);
		float L_296 = L_295.get_x_2();
		NullCheck(L_291);
		L_291->set_previousXlt4_14(L_296);
		// lt4 = LeanTween.moveX(cube4, 5.0f, 1.1f).setOnComplete(() => {
		//     LeanTest.expect(cube4 != null && previousXlt4 != cube4.transform.position.x, "RESUME OUT OF ORDER", "cube4:" + cube4 + " previousXlt4:" + previousXlt4 + " cube4.transform.position.x:" + (cube4 != null ? cube4.transform.position.x : 0));
		// }).setDestroyOnComplete(true);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_297 = V_1;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_298 = V_1;
		NullCheck(L_298);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_299 = L_298->get_cube4_7();
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_300;
		L_300 = LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3(L_299, (5.0f), (1.10000002f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_301 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_302 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_302, L_301, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__8_m63E7CF9513E4624B5B101B1C46941DC34982AC33_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_300);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_303;
		L_303 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_300, L_302, /*hidden argument*/NULL);
		NullCheck(L_303);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_304;
		L_304 = LTDescr_setDestroyOnComplete_m697253D565C9D2CDA484A82E1005660595CEDA06(L_303, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_297);
		L_297->set_lt4_15(L_304);
		// lt4.resume();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_305 = V_1;
		NullCheck(L_305);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_306 = L_305->get_lt4_15();
		NullCheck(L_306);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_307;
		L_307 = LTDescr_resume_mBE4F94BDD8338970F8DA5167345E87C4B58B30F8(L_306, /*hidden argument*/NULL);
		// rotateRepeat = rotateRepeatAngle = 0;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_308 = V_1;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_309 = V_1;
		int32_t L_310 = 0;
		V_18 = L_310;
		NullCheck(L_309);
		L_309->set_rotateRepeatAngle_20(L_310);
		int32_t L_311 = V_18;
		NullCheck(L_308);
		L_308->set_rotateRepeat_19(L_311);
		// LeanTween.rotateAround(cube3, Vector3.forward, 360f, 0.1f).setRepeat(3).setOnComplete(rotateRepeatFinished).setOnCompleteOnRepeat(true).setDestroyOnComplete(true);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_312 = V_1;
		NullCheck(L_312);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_313 = L_312->get_cube3_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_314;
		L_314 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_315;
		L_315 = LeanTween_rotateAround_m588F9185E90CC14CAB0B0EB6C3D575CF7E7C285E(L_313, L_314, (360.0f), (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_315);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_316;
		L_316 = LTDescr_setRepeat_m7D66B000EF60DCC943D848C1BF53BD7C7BEF8313(L_315, 3, /*hidden argument*/NULL);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_317 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_318 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_318, L_317, (intptr_t)((intptr_t)TestingUnitTests_rotateRepeatFinished_m3ED0D0A9DF982711F7D8D670535F1136CB7E3BA0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_316);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_319;
		L_319 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_316, L_318, /*hidden argument*/NULL);
		NullCheck(L_319);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_320;
		L_320 = LTDescr_setOnCompleteOnRepeat_m28F4EE66B0CA50AC6FA5A9391EEAD0B62E85A3C1(L_319, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_320);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_321;
		L_321 = LTDescr_setDestroyOnComplete_m697253D565C9D2CDA484A82E1005660595CEDA06(L_320, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_322 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_322, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_322);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_09fd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// LeanTween.delayedCall(0.1f * 8f + 1f, rotateRepeatAllFinished);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_323 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_324 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_324, L_323, (intptr_t)((intptr_t)TestingUnitTests_rotateRepeatAllFinished_mA343A62B2E6F1D84DAD61BF7DAD6DDC4F24A5077_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_325;
		L_325 = LeanTween_delayedCall_mF74ECC6AC349466F55E56C4625DB67892553A59A((1.79999995f), L_324, /*hidden argument*/NULL);
		// int countBeforeCancel = LeanTween.tweensRunning;
		int32_t L_326;
		L_326 = LeanTween_get_tweensRunning_mDD39747E471B1CCDF83F6F79B5CFA224E47D3842(/*hidden argument*/NULL);
		V_6 = L_326;
		// LeanTween.cancel(lt1Id);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_327 = V_1;
		NullCheck(L_327);
		int32_t L_328 = L_327->get_lt1Id_12();
		LeanTween_cancel_m8F235169322AEA85E23C774745EED07BD83D344E(L_328, /*hidden argument*/NULL);
		// LeanTest.expect(countBeforeCancel == LeanTween.tweensRunning, "CANCEL AFTER RESET SHOULD FAIL", "expected " + countBeforeCancel + " but got " + LeanTween.tweensRunning);
		int32_t L_329 = V_6;
		int32_t L_330;
		L_330 = LeanTween_get_tweensRunning_mDD39747E471B1CCDF83F6F79B5CFA224E47D3842(/*hidden argument*/NULL);
		String_t* L_331;
		L_331 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		int32_t L_332;
		L_332 = LeanTween_get_tweensRunning_mDD39747E471B1CCDF83F6F79B5CFA224E47D3842(/*hidden argument*/NULL);
		V_18 = L_332;
		String_t* L_333;
		L_333 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_18), /*hidden argument*/NULL);
		String_t* L_334;
		L_334 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51, L_331, _stringLiteral0D9F3BAD2D69E69BE0B30C05910ADBEBB3F0FF1E, L_333, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_329) == ((int32_t)L_330))? 1 : 0), _stringLiteralC35E4C83C96EAC263B8E637517709F326674F621, L_334, /*hidden argument*/NULL);
		// LeanTween.cancel(cube2);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_335 = V_1;
		NullCheck(L_335);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_336 = L_335->get_cube2_5();
		LeanTween_cancel_m8F49EAB6908B4BE0715C0D4160C51516DCDD2823(L_336, /*hidden argument*/NULL);
		// int tweenCount = 0;
		V_7 = 0;
		// for (int i = 0; i < groupTweens.Length; i++)
		V_19 = 0;
		goto IL_0ad4;
	}

IL_0a77:
	{
		// if (LeanTween.isTweening(groupGOs[i]))
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_337 = V_1;
		NullCheck(L_337);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_338 = L_337->get_groupGOs_17();
		int32_t L_339 = V_19;
		NullCheck(L_338);
		int32_t L_340 = L_339;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_341 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_340));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		bool L_342;
		L_342 = LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E(L_341, /*hidden argument*/NULL);
		if (!L_342)
		{
			goto IL_0a8d;
		}
	}
	{
		// tweenCount++;
		int32_t L_343 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)1));
	}

IL_0a8d:
	{
		// if (i % 3 == 0)
		int32_t L_344 = V_19;
		if (((int32_t)((int32_t)L_344%(int32_t)3)))
		{
			goto IL_0aa3;
		}
	}
	{
		// LeanTween.pause(groupGOs[i]);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_345 = V_1;
		NullCheck(L_345);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_346 = L_345->get_groupGOs_17();
		int32_t L_347 = V_19;
		NullCheck(L_346);
		int32_t L_348 = L_347;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_pause_m28FA361A74060F3CF6CFF07EA470DEB5871ABFFF(L_349, /*hidden argument*/NULL);
		goto IL_0ace;
	}

IL_0aa3:
	{
		// else if (i % 3 == 1)
		int32_t L_350 = V_19;
		if ((!(((uint32_t)((int32_t)((int32_t)L_350%(int32_t)3))) == ((uint32_t)1))))
		{
			goto IL_0abb;
		}
	}
	{
		// groupTweens[i].pause();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_351 = V_1;
		NullCheck(L_351);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_352 = L_351->get_groupTweens_16();
		int32_t L_353 = V_19;
		NullCheck(L_352);
		int32_t L_354 = L_353;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_355 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		NullCheck(L_355);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_356;
		L_356 = LTDescr_pause_m831C5988C87832DF30D6566086DD174849A8712A(L_355, /*hidden argument*/NULL);
		goto IL_0ace;
	}

IL_0abb:
	{
		// LeanTween.pause(groupTweens[i].id);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_357 = V_1;
		NullCheck(L_357);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_358 = L_357->get_groupTweens_16();
		int32_t L_359 = V_19;
		NullCheck(L_358);
		int32_t L_360 = L_359;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_361 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		NullCheck(L_361);
		int32_t L_362;
		L_362 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_361, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_pause_mEE3D7E0190BB1879C5E4E40A34E22146B867B2B0(L_362, /*hidden argument*/NULL);
	}

IL_0ace:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_363 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_363, (int32_t)1));
	}

IL_0ad4:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_364 = V_19;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_365 = V_1;
		NullCheck(L_365);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_366 = L_365->get_groupTweens_16();
		NullCheck(L_366);
		if ((((int32_t)L_364) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_366)->max_length))))))
		{
			goto IL_0a77;
		}
	}
	{
		// LeanTest.expect(tweenCount == groupTweens.Length, "GROUP ISTWEENING", "expected " + groupTweens.Length + " tweens but got " + tweenCount);
		int32_t L_367 = V_7;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_368 = V_1;
		NullCheck(L_368);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_369 = L_368->get_groupTweens_16();
		NullCheck(L_369);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_370 = V_1;
		NullCheck(L_370);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_371 = L_370->get_groupTweens_16();
		NullCheck(L_371);
		V_18 = ((int32_t)((int32_t)(((RuntimeArray*)L_371)->max_length)));
		String_t* L_372;
		L_372 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_18), /*hidden argument*/NULL);
		String_t* L_373;
		L_373 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
		String_t* L_374;
		L_374 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral6C73951CB80FC8C9795C39B11AF3A788EA791B51, L_372, _stringLiteral2FFCE4F82D042A2A507ED292174412AC4AF91D0F, L_373, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_367) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_369)->max_length)))))? 1 : 0), _stringLiteral433247743C67C49F69E3661FCF838C918D4CA0D7, L_374, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_375 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_375, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_375);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_0b31:
	{
		__this->set_U3CU3E1__state_0((-1));
		// tweenCount = 0;
		V_7 = 0;
		// for (int i = 0; i < groupTweens.Length; i++)
		V_20 = 0;
		goto IL_0bb8;
	}

IL_0b40:
	{
		// if (i % 3 == 0)
		int32_t L_376 = V_20;
		if (((int32_t)((int32_t)L_376%(int32_t)3)))
		{
			goto IL_0b56;
		}
	}
	{
		// LeanTween.resume(groupGOs[i]);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_377 = V_1;
		NullCheck(L_377);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_378 = L_377->get_groupGOs_17();
		int32_t L_379 = V_20;
		NullCheck(L_378);
		int32_t L_380 = L_379;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_381 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_resume_mB910424A52CA71E88F376EBC8BD7DAC8BA638F3A(L_381, /*hidden argument*/NULL);
		goto IL_0b81;
	}

IL_0b56:
	{
		// else if (i % 3 == 1)
		int32_t L_382 = V_20;
		if ((!(((uint32_t)((int32_t)((int32_t)L_382%(int32_t)3))) == ((uint32_t)1))))
		{
			goto IL_0b6e;
		}
	}
	{
		// groupTweens[i].resume();
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_383 = V_1;
		NullCheck(L_383);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_384 = L_383->get_groupTweens_16();
		int32_t L_385 = V_20;
		NullCheck(L_384);
		int32_t L_386 = L_385;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		NullCheck(L_387);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_388;
		L_388 = LTDescr_resume_mBE4F94BDD8338970F8DA5167345E87C4B58B30F8(L_387, /*hidden argument*/NULL);
		goto IL_0b81;
	}

IL_0b6e:
	{
		// LeanTween.resume(groupTweens[i].id);
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_389 = V_1;
		NullCheck(L_389);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_390 = L_389->get_groupTweens_16();
		int32_t L_391 = V_20;
		NullCheck(L_390);
		int32_t L_392 = L_391;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_393 = (L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_392));
		NullCheck(L_393);
		int32_t L_394;
		L_394 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_393, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LeanTween_resume_mB671FD12433254652D7A6F1F2E8B5A924EE8665C(L_394, /*hidden argument*/NULL);
	}

IL_0b81:
	{
		// if (i % 2 == 0 ? LeanTween.isTweening(groupTweens[i].id) : LeanTween.isTweening(groupGOs[i]))
		int32_t L_395 = V_20;
		if (!((int32_t)((int32_t)L_395%(int32_t)2)))
		{
			goto IL_0b97;
		}
	}
	{
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_396 = V_1;
		NullCheck(L_396);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_397 = L_396->get_groupGOs_17();
		int32_t L_398 = V_20;
		NullCheck(L_397);
		int32_t L_399 = L_398;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_400 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		bool L_401;
		L_401 = LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E(L_400, /*hidden argument*/NULL);
		G_B47_0 = L_401;
		goto IL_0baa;
	}

IL_0b97:
	{
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_402 = V_1;
		NullCheck(L_402);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_403 = L_402->get_groupTweens_16();
		int32_t L_404 = V_20;
		NullCheck(L_403);
		int32_t L_405 = L_404;
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_406 = (L_403)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		NullCheck(L_406);
		int32_t L_407;
		L_407 = LTDescr_get_id_m71271377DB5ECF8CF10782531395CCB0B5478E09(L_406, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		bool L_408;
		L_408 = LeanTween_isTweening_m8A9E15F4297CE4D50C54540646F91DEE0767071C(L_407, /*hidden argument*/NULL);
		G_B47_0 = L_408;
	}

IL_0baa:
	{
		if (!G_B47_0)
		{
			goto IL_0bb2;
		}
	}
	{
		// tweenCount++;
		int32_t L_409 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_409, (int32_t)1));
	}

IL_0bb2:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_410 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_410, (int32_t)1));
	}

IL_0bb8:
	{
		// for (int i = 0; i < groupTweens.Length; i++)
		int32_t L_411 = V_20;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_412 = V_1;
		NullCheck(L_412);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_413 = L_412->get_groupTweens_16();
		NullCheck(L_413);
		if ((((int32_t)L_411) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_413)->max_length))))))
		{
			goto IL_0b40;
		}
	}
	{
		// LeanTest.expect(tweenCount == groupTweens.Length, "GROUP RESUME");
		int32_t L_414 = V_7;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_415 = V_1;
		NullCheck(L_415);
		LTDescrU5BU5D_t731554F94C09A2A31CB19EA8663E934537DF797F* L_416 = L_415->get_groupTweens_16();
		NullCheck(L_416);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_414) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_416)->max_length)))))? 1 : 0), _stringLiteral1C6B8C03370E8657EF552577A1881EC1E02FFD6B, (String_t*)NULL, /*hidden argument*/NULL);
		// LeanTest.expect(LeanTween.isTweening(cube1) == false, "CANCEL TWEEN LTDESCR");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_417 = V_1;
		NullCheck(L_417);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_418 = L_417->get_cube1_4();
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		bool L_419;
		L_419 = LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E(L_418, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_419) == ((int32_t)0))? 1 : 0), _stringLiteral15582F4B8AA080A197E59A552112133088EB00E5, (String_t*)NULL, /*hidden argument*/NULL);
		// LeanTest.expect(LeanTween.isTweening(cube2) == false, "CANCEL TWEEN LEANTWEEN");
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_420 = V_1;
		NullCheck(L_420);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_421 = L_420->get_cube2_5();
		bool L_422;
		L_422 = LeanTween_isTweening_m7D2702558144653FEF2A2994BFFDB95BB547D76E(L_421, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_422) == ((int32_t)0))? 1 : 0), _stringLiteral29358036B755C5E42BBDCEDD3094CF416ABD47AF, (String_t*)NULL, /*hidden argument*/NULL);
		// LeanTest.expect(pauseCount == 0, "ON UPDATE NOT CALLED DURING PAUSE", "expect pause count of 0, but got " + pauseCount);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_423 = __this->get_U3CU3E8__1_3();
		NullCheck(L_423);
		int32_t L_424 = L_423->get_pauseCount_1();
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_425 = __this->get_U3CU3E8__1_3();
		NullCheck(L_425);
		int32_t* L_426 = L_425->get_address_of_pauseCount_1();
		String_t* L_427;
		L_427 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_426, /*hidden argument*/NULL);
		String_t* L_428;
		L_428 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB193D0EB8CC0E20180692325991A5981A85DB7C7, L_427, /*hidden argument*/NULL);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_424) == ((int32_t)0))? 1 : 0), _stringLiteral85A581B5266ADD3C3E6A78C80AB2AE41D24AFB62, L_428, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_429 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_429, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_429);
		__this->set_U3CU3E1__state_0(7);
		return (bool)1;
	}

IL_0c56:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 0.25f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.25f), /*hidden argument*/NULL);
		// float tweenTime = 0.2f;
		V_8 = (0.200000003f);
		// float expectedTime = tweenTime * (1f / Time.timeScale);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_430 = __this->get_U3CU3E8__1_3();
		float L_431 = V_8;
		float L_432;
		L_432 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		NullCheck(L_430);
		L_430->set_expectedTime_17(((float)il2cpp_codegen_multiply((float)L_431, (float)((float)((float)(1.0f)/(float)L_432)))));
		// float start = Time.realtimeSinceStartup;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_433 = __this->get_U3CU3E8__1_3();
		float L_434;
		L_434 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		NullCheck(L_433);
		L_433->set_start_16(L_434);
		// bool onUpdateWasCalled = false;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_435 = __this->get_U3CU3E8__1_3();
		NullCheck(L_435);
		L_435->set_onUpdateWasCalled_15((bool)0);
		// LeanTween.moveX(cube1, -5f, tweenTime).setOnUpdate((float val) => {
		//     onUpdateWasCalled = true;
		// }).setOnComplete(() => {
		//     float end = Time.realtimeSinceStartup;
		//     float diff = end - start;
		// 
		//     LeanTest.expect(Mathf.Abs(expectedTime - diff) < 0.06f, "SCALED TIMING DIFFERENCE", "expected to complete in roughly " + expectedTime + " but completed in " + diff);
		//     LeanTest.expect(Mathf.Approximately(cube1.transform.position.x, -5f), "SCALED ENDING POSITION", "expected to end at -5f, but it ended at " + cube1.transform.position.x);
		//     LeanTest.expect(onUpdateWasCalled, "ON UPDATE FIRED");
		// });
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_436 = V_1;
		NullCheck(L_436);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_437 = L_436->get_cube1_4();
		float L_438 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_439;
		L_439 = LeanTween_moveX_m3345DDA9D080FF581C38E0B92B7B2A0389A61DB3(L_437, (-5.0f), L_438, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_440 = __this->get_U3CU3E8__1_3();
		Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 * L_441 = (Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9 *)il2cpp_codegen_object_new(Action_1_t14225BCEFEF7A87B9836BA1CC40C611E313112D9_il2cpp_TypeInfo_var);
		Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3(L_441, L_440, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__9_m7B1419838E647715BC8200AD6D56DAF1A8F04F81_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m7514CC492FC5E63D7FA62E0FB54CF5E5956D8EC3_RuntimeMethod_var);
		NullCheck(L_439);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_442;
		L_442 = LTDescr_setOnUpdate_m55FBE2275AB200DCFB3793FA745A238491E7072B(L_439, L_441, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_443 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_444 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_444, L_443, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__10_m91860D812373862DCCD33D1D479A52867ED3CC02_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_442);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_445;
		L_445 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_442, L_444, /*hidden argument*/NULL);
		// bool didGetCorrectOnUpdate = false;
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_446 = __this->get_U3CU3E8__1_3();
		NullCheck(L_446);
		L_446->set_didGetCorrectOnUpdate_18((bool)0);
		// LeanTween.value(gameObject, new Vector3(1f, 1f, 1f), new Vector3(10f, 10f, 10f), 1f).setOnUpdate((Vector3 val) => {
		//     didGetCorrectOnUpdate = val.x >= 1f && val.y >= 1f && val.z >= 1f;
		// }).setOnComplete(() => {
		//     LeanTest.expect(didGetCorrectOnUpdate, "VECTOR3 CALLBACK CALLED");
		// });
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_447 = V_1;
		NullCheck(L_447);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_448;
		L_448 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_447, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_449;
		memset((&L_449), 0, sizeof(L_449));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_449), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_450;
		memset((&L_450), 0, sizeof(L_450));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_450), (10.0f), (10.0f), (10.0f), /*hidden argument*/NULL);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_451;
		L_451 = LeanTween_value_m45BC8CC34DB8AE45C89048BAAAA016A4C6F0D526(L_448, L_449, L_450, (1.0f), /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_452 = __this->get_U3CU3E8__1_3();
		Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B * L_453 = (Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B *)il2cpp_codegen_object_new(Action_1_tC2B4AB26EC30C6FC4AD8C9172FE509B3B4E1C26B_il2cpp_TypeInfo_var);
		Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743(L_453, L_452, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__11_m9D776D70F7B40CB7DB069BE5D095C281D59F2713_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD29F69656A96CF462948CCE4D36A112A0914A743_RuntimeMethod_var);
		NullCheck(L_451);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_454;
		L_454 = LTDescr_setOnUpdate_m5356685ADFD38D45881211740E990617C0F2A80D(L_451, L_453, NULL, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_455 = __this->get_U3CU3E8__1_3();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_456 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_456, L_455, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CtimeBasedTestingU3Eb__12_mB40AAAC5766C52276E4F9A375DB379DBE62012FA_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_454);
		LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * L_457;
		L_457 = LTDescr_setOnComplete_mBD0B6BAC2B05C7AE12E93F478BC6F0F41A33C44F(L_454, L_456, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(expectedTime);
		U3CU3Ec__DisplayClass24_0_tC43013AD0D8C712305416629D866B5A735CABB1F * L_458 = __this->get_U3CU3E8__1_3();
		NullCheck(L_458);
		float L_459 = L_458->get_expectedTime_17();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_460 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_460, L_459, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_460);
		__this->set_U3CU3E1__state_0(8);
		return (bool)1;
	}

IL_0d73:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// int ltCount = 0;
		V_9 = 0;
		// GameObject[] allGos = FindObjectsOfType(typeof(GameObject)) as GameObject[];
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_461 = { reinterpret_cast<intptr_t> (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_462;
		L_462 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_461, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_463;
		L_463 = Object_FindObjectsOfType_m6E4A383F89274D0F316FDDA39745C59025A11B02(L_462, /*hidden argument*/NULL);
		// foreach (GameObject go in allGos)
		V_21 = ((GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)IsInst((RuntimeObject*)L_463, GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var));
		V_18 = 0;
		goto IL_0dc4;
	}

IL_0da2:
	{
		// foreach (GameObject go in allGos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_464 = V_21;
		int32_t L_465 = V_18;
		NullCheck(L_464);
		int32_t L_466 = L_465;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_467 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_466));
		// if (go.name == "~LeanTween")
		NullCheck(L_467);
		String_t* L_468;
		L_468 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_467, /*hidden argument*/NULL);
		bool L_469;
		L_469 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_468, _stringLiteral12B6B7B4F3601CD4296CB8827F52001F5D20F0E8, /*hidden argument*/NULL);
		if (!L_469)
		{
			goto IL_0dbe;
		}
	}
	{
		// ltCount++;
		int32_t L_470 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_470, (int32_t)1));
	}

IL_0dbe:
	{
		int32_t L_471 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_471, (int32_t)1));
	}

IL_0dc4:
	{
		// foreach (GameObject go in allGos)
		int32_t L_472 = V_18;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_473 = V_21;
		NullCheck(L_473);
		if ((((int32_t)L_472) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_473)->max_length))))))
		{
			goto IL_0da2;
		}
	}
	{
		// LeanTest.expect(ltCount == 1, "RESET CORRECTLY CLEANS UP");
		int32_t L_474 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTest_tD21F4A4ADCD2017FEFC0BA0FDAB5D291DA643F7F_il2cpp_TypeInfo_var);
		LeanTest_expect_m697408A02255410088277BB6C41F73FFB789458B((bool)((((int32_t)L_474) == ((int32_t)1))? 1 : 0), _stringLiteral95B323F78A74BCD68F5E49F4D09087DF0FED1ECA, (String_t*)NULL, /*hidden argument*/NULL);
		// StartCoroutine(lotsOfCancels());
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_475 = V_1;
		TestingUnitTests_t0F733B62958AE33D1F86657DFEA59A729C338757 * L_476 = V_1;
		NullCheck(L_476);
		RuntimeObject* L_477;
		L_477 = TestingUnitTests_lotsOfCancels_mD21D0D0D0B8BE316E58C412A19ADE6658DAA5134(L_476, /*hidden argument*/NULL);
		NullCheck(L_475);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_478;
		L_478 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_475, L_477, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeBasedTestingU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mACB1A3175D122506B71BCDB9EBF4AA9F0383E74B (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CtimeBasedTestingU3Ed__24_System_Collections_IEnumerator_Reset_m96D9D8DFA5B24A08E71FA9EA4595288F06E9837B (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CtimeBasedTestingU3Ed__24_System_Collections_IEnumerator_Reset_m96D9D8DFA5B24A08E71FA9EA4595288F06E9837B_RuntimeMethod_var)));
	}
}
// System.Object DentedPixel.LTExamples.TestingUnitTests/<timeBasedTesting>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CtimeBasedTestingU3Ed__24_System_Collections_IEnumerator_get_Current_mA059C8602E0A9BCCC1849108A55B19E09E4818CA (U3CtimeBasedTestingU3Ed__24_tC48CA45DEF560DE9941A550792E59DE0D9DCDC65 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TestingZLegacy/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBD80E302F3A69C0C61FDB9987E223DF4A13097D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * L_0 = (U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC *)il2cpp_codegen_object_new(U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD7A097986D81133EA1341850CD4003072DC490BB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TestingZLegacy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD7A097986D81133EA1341850CD4003072DC490BB (U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacy/<>c::<cycleThroughExamples>b__20_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_m99E554155125675C01E3E61098DA676F0B69E649 (U3CU3Ec_t8ABF57D71EAC0C260D48F0C6C5CCC9C3D247FBEC * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// Time.timeScale = val;
		float L_0 = ___val0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_0, /*hidden argument*/NULL);
		// }).setEase(LeanTweenType.easeInQuad).setUseEstimatedTime(true).setRepeat(-1).id;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 (NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TestingZLegacy/NextFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc__ctor_mD13871807D65A0BB2C5E0F567E5FB021AF248AED (NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TestingZLegacy/NextFunc::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc_Invoke_m8D7A63BD3F35D7D22BC9DAF5241C637889044719 (NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
// System.IAsyncResult TestingZLegacy/NextFunc::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NextFunc_BeginInvoke_mB38D1030FE53CEF432C2E6D1569F0EBAD0F1B5F0 (NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void TestingZLegacy/NextFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc_EndInvoke_mFE2435A3542567B6D23B6E63B50BF9EC6D55609B (NextFunc_t26C44005D4488D17C5FD4DD6348013E239E566D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TestingZLegacyExt/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD11D91D44BCDECB51A3CF966B686782B4F5330A7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * L_0 = (U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB *)il2cpp_codegen_object_new(U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mC490B74A87268C68E2428BE981C75A67BE4460A7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TestingZLegacyExt/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC490B74A87268C68E2428BE981C75A67BE4460A7 (U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestingZLegacyExt/<>c::<cycleThroughExamples>b__20_0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CcycleThroughExamplesU3Eb__20_0_m232F589CF9029278662FD1D5BB31DB7E6A2973F5 (U3CU3Ec_tD7C586F26F27190F29F8B90744BCE69E24E2B0BB * __this, float ___val0, const RuntimeMethod* method)
{
	{
		// Time.timeScale = val;
		float L_0 = ___val0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_0, /*hidden argument*/NULL);
		// }).setEase(LeanTweenType.easeInQuad).setUseEstimatedTime(true).setRepeat(-1).id;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 (NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TestingZLegacyExt/NextFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc__ctor_m0008349A4886ECE27F576CFE82C9A888798F60BA (NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TestingZLegacyExt/NextFunc::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc_Invoke_mFB6931473FA9F6AD02BE8B752A4D051ECB660ECF (NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
// System.IAsyncResult TestingZLegacyExt/NextFunc::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NextFunc_BeginInvoke_mD91FEF6AFFC5695F493E6950FAAA8A6B72DB37CD (NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void TestingZLegacyExt/NextFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NextFunc_EndInvoke_m96DB2010CA80A82BDCD35903E0CE02CE8AC78296 (NextFunc_t9DC9B58570D8EB8797E476A50F92F650E8194840 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndCanvasFadeoutCorotinueU3Ed__44__ctor_m69A4C6B4EE9813F11185261D9D18826AFDEB2689 (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_IDisposable_Dispose_mACED14ADBD39CD7184FE52786574A66031264115 (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_MoveNext_m14E51B4FBC43F220E2BBA258E6D89914AF54363D (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_007e;
	}

IL_004b:
	{
		// RoundEndCanvas.alpha += speed;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = L_4->get_RoundEndCanvas_20();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_3();
		NullCheck(L_6);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_6, ((float)il2cpp_codegen_add((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_9 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007e:
	{
		// while (RoundEndCanvas.alpha != 1)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10 = V_1;
		NullCheck(L_10);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_11 = L_10->get_RoundEndCanvas_20();
		NullCheck(L_11);
		float L_12;
		L_12 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(1.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m50C7C40670E500888407E869E43DFA67462F8704 (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_Collections_IEnumerator_Reset_mE4A2111B743E2E02E95230AEF6E6E188278DF2A3 (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_Collections_IEnumerator_Reset_mE4A2111B743E2E02E95230AEF6E6E188278DF2A3_RuntimeMethod_var)));
	}
}
// System.Object UIManager/<RoundEndCanvasFadeoutCorotinue>d__44::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_System_Collections_IEnumerator_get_Current_m7148DBC02DDAD8ECE539D599F911647126119CE3 (U3CRoundEndCanvasFadeoutCorotinueU3Ed__44_t8FB9B915D38E7CA9C9EBE07F860D4567D7050DEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UIManager/<ScreenFadeoutCorotinue>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenFadeoutCorotinueU3Ed__41__ctor_mFEC6FAC1632E3EEE0AF3A5B0933A4A328A14DBE0 (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UIManager/<ScreenFadeoutCorotinue>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenFadeoutCorotinueU3Ed__41_System_IDisposable_Dispose_m83BD5CC71D4F42BD1E581432EBAA0D661B264A74 (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UIManager/<ScreenFadeoutCorotinue>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScreenFadeoutCorotinueU3Ed__41_MoveNext_mB4D541E5583D4CDDC493CB15A28B5155A3938E37 (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_007e;
	}

IL_004b:
	{
		// FadeoutCanvas.alpha += speed;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_4 = V_1;
		NullCheck(L_4);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_5 = L_4->get_FadeoutCanvas_17();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_3();
		NullCheck(L_6);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_6, ((float)il2cpp_codegen_add((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_9 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0077:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_007e:
	{
		// while (FadeoutCanvas.alpha != 1)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10 = V_1;
		NullCheck(L_10);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_11 = L_10->get_FadeoutCanvas_17();
		NullCheck(L_11);
		float L_12;
		L_12 = CanvasGroup_get_alpha_m38E292E68116A55A99F222F4E1F31CBE189690D9(L_11, /*hidden argument*/NULL);
		if ((!(((float)L_12) == ((float)(1.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object UIManager/<ScreenFadeoutCorotinue>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenFadeoutCorotinueU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6106D6889972A28035B509101DF4EE3A9C98C369 (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UIManager/<ScreenFadeoutCorotinue>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScreenFadeoutCorotinueU3Ed__41_System_Collections_IEnumerator_Reset_m14ACC9BCD2D3171C5FB1EA6079DF9181737EAE62 (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScreenFadeoutCorotinueU3Ed__41_System_Collections_IEnumerator_Reset_m14ACC9BCD2D3171C5FB1EA6079DF9181737EAE62_RuntimeMethod_var)));
	}
}
// System.Object UIManager/<ScreenFadeoutCorotinue>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CScreenFadeoutCorotinueU3Ed__41_System_Collections_IEnumerator_get_Current_mE49CF65AF8BD0D17C78E0DA862EFFA89639B9FBA (U3CScreenFadeoutCorotinueU3Ed__41_tFE9CA6F9DB33B03CD33548FAF40893D573D3BB98 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  LTDescr_get_to_m3887E20BF193FF607A48502338A46C90948F5FA5_inline (LTDescr_t9A3CDAF54A7C42CE3B0D73AAE3087D8C910F602F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 to { get { return this.toInternal; } set { this.toInternal = value; } }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_toInternal_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LeanTween_get_maxSearch_m76F5A3551B333FEAD6918DC0795238CEA51E8764_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return tweenMaxSearch;
		IL2CPP_RUNTIME_CLASS_INIT(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_StaticFields*)il2cpp_codegen_static_fields_for(LeanTween_t24A1AC58CDA8E051E941E4BA7709AA48344ABFA2_il2cpp_TypeInfo_var))->get_tweenMaxSearch_12();
		return L_0;
	}
}
