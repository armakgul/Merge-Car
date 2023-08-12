#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// ObsFactory/ObstacleType[]
struct ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// C_Collisions
struct C_Collisions_tEC132A03C3B395074286292B91DC8F222CAA681A;
// C_Health
struct C_Health_t33D71259939B4022BF1C671073037BA15011775A;
// C_Movement
struct C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99;
// C_Singleto
struct C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EconomyManager
struct EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82;
// FactoryManager
struct FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0;
// FreefallDeadTrigger
struct FreefallDeadTrigger_tA6B00AD5D126975F940D96D42B0FB318CE686648;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HealthGiver
struct HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// ICurable
struct ICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050;
// IDamagable
struct IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// IShieldable
struct IShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2;
// ISpeedable
struct ISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// IWeightable
struct IWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MoneyGiver
struct MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// O_Canvas
struct O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB;
// O_Health
struct O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObsFactory
struct ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6;
// ObsSpawner
struct ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44;
// ObsSpawner2
struct ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SectionTwoTrigger
struct SectionTwoTrigger_tF5A68667649130A58B6BBD4CC858F8A32C41FEB7;
// ShieldGiver
struct ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1;
// SpeedGiver
struct SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartTapAnim
struct StartTapAnim_t8A8B5C9D18D35FB2404DC72A0E4970A2F7825EB2;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UI_RewardScreen
struct UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6;
// UI_SpeedandWeight
struct UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WeightReducer
struct WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// EconomyManager/OnMoneyChanged
struct OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23;
IL2CPP_EXTERN_C String_t* _stringLiteral0BEE3BE87CB3CCC1EE6E490023CDE17792A24113;
IL2CPP_EXTERN_C String_t* _stringLiteral19B47F4E2D5DC6B492D830E76820B4516F50D343;
IL2CPP_EXTERN_C String_t* _stringLiteral2B8B88B4D3148DBC7C9A3C32D9C8FB65B26ADD28;
IL2CPP_EXTERN_C String_t* _stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral48800E395DD3336E1DC87C6433D594104052B806;
IL2CPP_EXTERN_C String_t* _stringLiteral51452628837BAB7C283227D4421383559F8F9A27;
IL2CPP_EXTERN_C String_t* _stringLiteral5736D0CB639C10A6C44E0FC0876C74BE5EF44608;
IL2CPP_EXTERN_C String_t* _stringLiteral6516EC583F4C80506E4C2B69D4D6E421DA137DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral6C79CAD992BBC1A90BAB7A896BF9B9F971714110;
IL2CPP_EXTERN_C String_t* _stringLiteral7A96F0B7281E227CE68083888A313E9A96527AC5;
IL2CPP_EXTERN_C String_t* _stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1;
IL2CPP_EXTERN_C String_t* _stringLiteral87D4267E11795A3ECE466598F673C7B0933C29D9;
IL2CPP_EXTERN_C String_t* _stringLiteral961E49B2137E99566340D33EDF261B243F3B80A4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C44BFB93C2B43DDB8DF932C7B73379AEBD7FCD4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3FDABD75502DD960F0CEF8A7466DEE39DF69412;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C_m2B5128EA28E525806D86ADCFFB33223A9EB7C6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_m71974B29E260DED5C9E82E6734616B2FA40EC874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_m65D81534C9A7902E04EFB3CFE0F08CCD1EFC24B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_m1A44B773803C61CEFFAE9301A4E232FD980D00D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_m8BFAB0D34221CD98BF36AD9E655DDBEA9B6579BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5_m4FB00855FCC9C178E5D31A2B83BEC2C2765B4FEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1_mEEAA012B729936C9A5E49912A94C66D3B32DCAE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9_m09B4D19A5DC0C6EA3755EC820CEBCF2330C06961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836_m53EB6DF67ED2EAB7DF3999AD1CC4E04045FD3348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UI_RewardScreen_ActivateUI_m4AF568EFA65E0610152E9188C75D7B60A63F8A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// ObsFactory/ObstacleType
struct ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C 
{
	// System.Int32 ObsFactory/ObstacleType::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// EconomyManager/OnMoneyChanged
struct OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// C_Collisions
struct C_Collisions_tEC132A03C3B395074286292B91DC8F222CAA681A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single C_Collisions::damage
	float ___damage_4;
};

// C_Health
struct C_Health_t33D71259939B4022BF1C671073037BA15011775A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single C_Health::health
	float ___health_4;
	// System.Single C_Health::shield
	float ___shield_5;
	// TMPro.TMP_Text C_Health::healthText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___healthText_6;
	// TMPro.TMP_Text C_Health::shieldText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___shieldText_7;
	// LevelManager C_Health::levelManager
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___levelManager_8;
};

// C_Movement
struct C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera C_Movement::orthoCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___orthoCamera_4;
	// System.Single C_Movement::cameraCorrectionMultiplier
	float ___cameraCorrectionMultiplier_5;
	// UnityEngine.GameObject C_Movement::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_6;
	// UnityEngine.Vector3 C_Movement::p_position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p_position_7;
	// System.Single C_Movement::p_ForwardSpeed
	float ___p_ForwardSpeed_8;
	// UnityEngine.Vector3 C_Movement::mouseDistance
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mouseDistance_9;
	// UnityEngine.Vector3 C_Movement::lastPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastPosition_10;
	// System.Boolean C_Movement::trackMouse
	bool ___trackMouse_11;
	// UnityEngine.Rigidbody C_Movement::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_12;
	// System.Single C_Movement::speed
	float ___speed_13;
	// System.Single C_Movement::weight
	float ___weight_14;
};

// C_Singleto
struct C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CameraMovement
struct CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera CameraMovement::FollowUpCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___FollowUpCamera_4;
	// UnityEngine.GameObject CameraMovement::objectToFollow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToFollow_5;
	// UnityEngine.Vector3 CameraMovement::cameraOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cameraOffset_6;
};

// EconomyManager
struct EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 EconomyManager::money
	int32_t ___money_4;
};

// FactoryManager
struct FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FreefallDeadTrigger
struct FreefallDeadTrigger_tA6B00AD5D126975F940D96D42B0FB318CE686648  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// HealthGiver
struct HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HealthGiver::cureAmountTange
	float ___cureAmountTange_4;
	// System.Single HealthGiver::cureAmount
	float ___cureAmount_5;
	// System.Single HealthGiver::cureAmountCorrected
	float ___cureAmountCorrected_6;
	// UnityEngine.Material HealthGiver::healthMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___healthMaterial_7;
	// UnityEngine.Color HealthGiver::colorForPos
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorForPos_8;
	// UnityEngine.Color HealthGiver::colorForNeg
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorForNeg_9;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LevelManager/GameStates LevelManager::currentState
	int32_t ___currentState_4;
	// System.Action LevelManager::OnSectionTwoStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSectionTwoStarted_5;
	// System.Action LevelManager::OnSectionThreeStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSectionThreeStarted_6;
	// System.Action LevelManager::OnFreefallDead
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnFreefallDead_7;
	// UnityEngine.GameObject LevelManager::ramp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ramp_9;
};

// MoneyGiver
struct MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MoneyGiver::moneyAmount
	int32_t ___moneyAmount_4;
	// System.Single MoneyGiver::damageAmount
	float ___damageAmount_5;
	// UnityEngine.GameObject MoneyGiver::gameManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameManager_6;
};

// O_Canvas
struct O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text O_Canvas::valueText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___valueText_4;
	// TMPro.TMP_Text O_Canvas::description
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___description_5;
	// UnityEngine.Sprite O_Canvas::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_6;
	// O_Canvas/ShieldOrHealth O_Canvas::shieldorhealth
	int32_t ___shieldorhealth_7;
	// System.Single O_Canvas::value
	float ___value_8;
};

// O_Health
struct O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single O_Health::health
	float ___health_4;
};

// ObsFactory
struct ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ObsFactory/ObstacleType[] ObsFactory::obstacleTypes
	ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD* ___obstacleTypes_4;
	// UnityEngine.GameObject ObsFactory::healthGiverPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___healthGiverPrefab_5;
	// UnityEngine.GameObject ObsFactory::shieldGiverPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shieldGiverPrefab_6;
	// UnityEngine.GameObject ObsFactory::moneyGiverPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moneyGiverPrefab_7;
	// UnityEngine.GameObject ObsFactory::weightReducerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weightReducerPrefab_8;
	// UnityEngine.GameObject ObsFactory::speedGiverPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speedGiverPrefab_9;
};

// ObsSpawner
struct ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ObsFactory ObsSpawner::obstacleFactory
	ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* ___obstacleFactory_4;
	// System.Single ObsSpawner::distanceBetweenObstacles
	float ___distanceBetweenObstacles_5;
	// System.Int32 ObsSpawner::obstacles
	int32_t ___obstacles_6;
	// System.Single ObsSpawner::laneWidth
	float ___laneWidth_7;
	// System.Single ObsSpawner::spawnDistance
	float ___spawnDistance_8;
};

// ObsSpawner2
struct ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ObsFactory ObsSpawner2::obstacleFactory
	ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* ___obstacleFactory_4;
	// System.Single ObsSpawner2::distanceBetweenObstacles
	float ___distanceBetweenObstacles_5;
	// System.Int32 ObsSpawner2::laneCount
	int32_t ___laneCount_6;
	// System.Single ObsSpawner2::laneWidth
	float ___laneWidth_7;
	// System.Single ObsSpawner2::spawnDistance
	float ___spawnDistance_8;
	// System.Single ObsSpawner2::height
	float ___height_9;
	// System.Single ObsSpawner2::spawnOffset
	float ___spawnOffset_10;
	// LevelManager ObsSpawner2::levelManager
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___levelManager_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObsSpawner2::spawnedObstacles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___spawnedObstacles_12;
};

// SectionTwoTrigger
struct SectionTwoTrigger_tF5A68667649130A58B6BBD4CC858F8A32C41FEB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ShieldGiver
struct ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ShieldGiver::shieldAmountRange
	float ___shieldAmountRange_4;
	// System.Single ShieldGiver::shieldAmount
	float ___shieldAmount_5;
	// System.Single ShieldGiver::shieldAmountCorrected
	float ___shieldAmountCorrected_6;
	// UnityEngine.Material ShieldGiver::shieldMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___shieldMaterial_7;
	// UnityEngine.Color ShieldGiver::colorForPos
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorForPos_8;
	// UnityEngine.Color ShieldGiver::colorForNeg
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorForNeg_9;
};

// SpeedGiver
struct SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SpeedGiver::speedAmount
	float ___speedAmount_4;
	// System.Single SpeedGiver::damageAmount
	float ___damageAmount_5;
};

// StartTapAnim
struct StartTapAnim_t8A8B5C9D18D35FB2404DC72A0E4970A2F7825EB2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator StartTapAnim::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// C_Movement StartTapAnim::movementScript
	C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* ___movementScript_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UI_RewardScreen
struct UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UI_SpeedandWeight
struct UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text UI_SpeedandWeight::speedText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___speedText_4;
	// TMPro.TMP_Text UI_SpeedandWeight::weightText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___weightText_5;
	// TMPro.TMP_Text UI_SpeedandWeight::moneyText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___moneyText_6;
	// UnityEngine.GameObject UI_SpeedandWeight::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_7;
	// UnityEngine.GameObject UI_SpeedandWeight::economyManager
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___economyManager_8;
};

// WeightReducer
struct WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WeightReducer::weightAmount
	float ___weightAmount_4;
	// System.Single WeightReducer::damageAmount
	float ___damageAmount_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

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

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ObsFactory/ObstacleType

// ObsFactory/ObstacleType

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

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

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// EconomyManager/OnMoneyChanged

// EconomyManager/OnMoneyChanged

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// C_Collisions

// C_Collisions

// C_Health

// C_Health

// C_Movement

// C_Movement

// C_Singleto
struct C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields
{
	// C_Singleto C_Singleto::<Instance>k__BackingField
	C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* ___U3CInstanceU3Ek__BackingField_4;
};

// C_Singleto

// CameraMovement

// CameraMovement

// EconomyManager
struct EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields
{
	// EconomyManager/OnMoneyChanged EconomyManager::onMoneyChanged
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* ___onMoneyChanged_5;
};

// EconomyManager

// FactoryManager
struct FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields
{
	// FactoryManager FactoryManager::<Instance>k__BackingField
	FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* ___U3CInstanceU3Ek__BackingField_4;
};

// FactoryManager

// FreefallDeadTrigger

// FreefallDeadTrigger

// HealthGiver

// HealthGiver

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields
{
	// LevelManager LevelManager::Instance
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___Instance_8;
};

// LevelManager

// MoneyGiver

// MoneyGiver

// O_Canvas

// O_Canvas

// O_Health

// O_Health

// ObsFactory

// ObsFactory

// ObsSpawner

// ObsSpawner

// ObsSpawner2

// ObsSpawner2

// SectionTwoTrigger

// SectionTwoTrigger

// ShieldGiver

// ShieldGiver

// SpeedGiver

// SpeedGiver

// StartTapAnim

// StartTapAnim

// UI_RewardScreen

// UI_RewardScreen

// UI_SpeedandWeight

// UI_SpeedandWeight

// WeightReducer

// WeightReducer

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ObsFactory/ObstacleType[]
struct ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Single HealthGiver::GetCureAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthGiver_GetCureAmount_m69B7D2107E30B64DCDCF41713957E83D9C324825 (HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ICurable>()
inline RuntimeObject* Component_GetComponent_TisICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_m71974B29E260DED5C9E82E6734616B2FA40EC874 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EconomyManager>()
inline EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EconomyManager::SetMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager_SetMoney_m2F50A91FAE30AC6A86BB85CAC8AC5C37FA7DAE3C (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<IDamagable>()
inline RuntimeObject* Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void O_Canvas::SwitchBetweenObs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Canvas_SwitchBetweenObs_m6F53BF14DF241A67EB2BB5D067D38336923BAD2D (O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ShieldGiver>()
inline ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* Component_GetComponent_TisShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1_mEEAA012B729936C9A5E49912A94C66D3B32DCAE3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single ShieldGiver::GetShieldAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShieldGiver_GetShieldAmount_m48517AE65E1F1D09D9935A99DA1BD82266DFC348 (ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HealthGiver>()
inline HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* Component_GetComponent_TisHealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C_m2B5128EA28E525806D86ADCFFB33223A9EB7C6DF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<SpeedGiver>()
inline SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9* Component_GetComponent_TisSpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9_m09B4D19A5DC0C6EA3755EC820CEBCF2330C06961 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<WeightReducer>()
inline WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836* Component_GetComponent_TisWeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836_m53EB6DF67ED2EAB7DF3999AD1CC4E04045FD3348 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MoneyGiver>()
inline MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* Component_GetComponent_TisMoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5_m4FB00855FCC9C178E5D31A2B83BEC2C2765B4FEF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void O_Health::Hit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Health_Hit_m7BC038CCB16826F7AD8AF23C3A2A2149DDF40FAB (O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A* __this, float ___0_damageAmount, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<IShieldable>()
inline RuntimeObject* Component_GetComponent_TisIShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_m65D81534C9A7902E04EFB3CFE0F08CCD1EFC24B2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<ISpeedable>()
inline RuntimeObject* Component_GetComponent_TisISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_m1A44B773803C61CEFFAE9301A4E232FD980D00D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<IWeightable>()
inline RuntimeObject* Component_GetComponent_TisIWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_m8BFAB0D34221CD98BF36AD9E655DDBEA9B6579BA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CameraMovement::MoveCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_MoveCamera_mA2F535D21DB4D3655FC2008279D20314C8B1C30A (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void C_Health::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52 (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::SetState(LevelManager/GameStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___0_state, const RuntimeMethod* method) ;
// System.Void C_Health::GetCured(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_GetCured_m1E5F9671BF9C520591E673CBDDDCC385590F748B (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_healthAmount, const RuntimeMethod* method) ;
// System.Void C_Health::Hit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Hit_m23D4EE4D1ACBA90D02144DB3564A50AD6CE7BD3E (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_damageAmount, const RuntimeMethod* method) ;
// System.Void C_Health::GetShield(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_GetShield_mB56BDF14D58A02790052697B4EAC2EDE65BE44EB (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_shieldAmount, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void C_Movement::CheckStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_CheckStates_m1B1F55FE43AEB2F95837F0CCFFC33BB3B1A9CB6F (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::GetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_GetSpeed_m7E19DC1D98EF534BE298AFB3ED10208CFDC16327 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_speedAmount, const RuntimeMethod* method) ;
// System.Void C_Movement::GetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_GetWeight_m83F93C34C8611314D593E046FFF73C3627E27C00 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_weightAmount, const RuntimeMethod* method) ;
// LevelManager/GameStates LevelManager::GetState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::Movement1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement1_m82406911724889CFCA75598DFEA344DF2330642B (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::Movement2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement2_m0CB35C7E8A60E0DF4AFEBD9374A1DDC222A9C47F (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::Movement3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement3_mA6D96888DB9AEAF078E70318859E6BDCA8C21C30 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::Movement4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement4_m5E687A67878EFBE8FE38C7941255A157544A88EB (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_MousePosition_m5C590C01F7C51F4B23687989D625DCCBCCB29494 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) ;
// System.Void C_Movement::MoveCharacter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_MoveCharacter_mACE2E13FA0A78ED0C9D60092F65F69C5A56D9746 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_xPos, float ___1_speed, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// C_Singleto C_Singleto::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* C_Singleto_get_Instance_mFAF6340144BA009F37DB6C27438BC525629749FA_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void C_Singleto::set_Instance(C_Singleto)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void C_Singleto_set_Instance_m78EC8A2FE01FB9E17BCBD4101EB90154A64CC3D5_inline (C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// FactoryManager FactoryManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* FactoryManager_get_Instance_mD5594938E722EAD9DACCC5B65756FC67F139D824_inline (const RuntimeMethod* method) ;
// System.Void FactoryManager::set_Instance(FactoryManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryManager_set_Instance_mC5B5CC52DA54D9E8241A19C184E0CB433F742FD6_inline (FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Void ObsSpawner::SpawnObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner_SpawnObstacle_mCCE0BE52C42508D5CB6035E0FC85769D8FD7D225 (ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.GameObject ObsFactory::CreateObstacle(ObsFactory/ObstacleType,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D (ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* __this, int32_t ___0_type, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void LevelManager::add_OnSectionTwoStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnSectionTwoStarted_m0C59971399890E7D0A8D0152A049E2FFB69A9228 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LevelManager::add_OnSectionThreeStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnSectionThreeStarted_mE5E5F4D45D86F526638D0E390EA02089FF4A443B (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LevelManager::remove_OnSectionTwoStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnSectionTwoStarted_mD5631F4B1176D2432BD8A9452AF77A69B32EAF45 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void LevelManager::remove_OnSectionThreeStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnSectionThreeStarted_mDAEDAA368C487D73BDAD62C5DD6A6E9EB0ECFB39 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D (String_t* ___0_key, int32_t ___1_defaultValue, const RuntimeMethod* method) ;
// System.Void EconomyManager/OnMoneyChanged::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_inline (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void LevelManager::CheckInitialTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_CheckInitialTap_m7308CB397C99FAE3AAB7EC01095F0006AD02532A (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UI_RewardScreen::DisableUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen_DisableUI_mB231284949836DB8228CD9680224BE4DF2E72C70 (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::add_OnFreefallDead(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnFreefallDead_mA8FB7B402057BDD2D9D45C7C468B438530F8C85A (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UI_SpeedandWeight::SetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SpeedandWeight_SetValues_mF9D634EBEA7B68C504A0C8BA73AAF66D83176893 (UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<C_Movement>()
inline C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single EconomyManager::GetMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EconomyManager_GetMoney_m7D7FBDC2B9CF1817F97B18FAE86D3EB38731F941 (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void HealthGiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthGiver_Start_mB31AC8FBD12A9FB4384BC0A85F7C5EDE9D311AB3 (HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* __this, const RuntimeMethod* method) 
{
	{
		// GetCureAmount();
		float L_0;
		L_0 = HealthGiver_GetCureAmount_m69B7D2107E30B64DCDCF41713957E83D9C324825(__this, NULL);
		// }
		return;
	}
}
// System.Void HealthGiver::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthGiver_OnTriggerEnter_m6515F8F98C87B8CFECF47E014C72018A7E6E7963 (HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_m71974B29E260DED5C9E82E6734616B2FA40EC874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// ICurable curable = other.GetComponent<ICurable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Component_GetComponent_TisICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_m71974B29E260DED5C9E82E6734616B2FA40EC874(L_2, Component_GetComponent_TisICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_m71974B29E260DED5C9E82E6734616B2FA40EC874_RuntimeMethod_var);
		V_0 = L_3;
		// if (curable != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// curable.Cure(cureAmountCorrected);
		RuntimeObject* L_5 = V_0;
		float L_6 = __this->___cureAmountCorrected_6;
		NullCheck(L_5);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void ICurable::Cure(System.Single) */, ICurable_tDB673650C6E3FC76506EDB186AC6E722CDD71050_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Single HealthGiver::GetCureAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HealthGiver_GetCureAmount_m69B7D2107E30B64DCDCF41713957E83D9C324825 (HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthMaterial = gameObject.GetComponent<Renderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___healthMaterial_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthMaterial_7), (void*)L_2);
		// cureAmount = Random.Range(-cureAmountTange, cureAmountTange);
		float L_3 = __this->___cureAmountTange_4;
		float L_4 = __this->___cureAmountTange_4;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_3)), L_4, NULL);
		__this->___cureAmount_5 = L_5;
		// cureAmountCorrected = Mathf.Ceil(cureAmount);
		float L_6 = __this->___cureAmount_5;
		float L_7;
		L_7 = ceilf(L_6);
		__this->___cureAmountCorrected_6 = L_7;
		// if (cureAmountCorrected == 0)
		float L_8 = __this->___cureAmountCorrected_6;
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// cureAmountCorrected = 1;
		__this->___cureAmountCorrected_6 = (1.0f);
	}

IL_0057:
	{
		// if (cureAmountCorrected < 0)
		float L_9 = __this->___cureAmountCorrected_6;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		// healthMaterial.color = colorForNeg;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___healthMaterial_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___colorForNeg_9;
		NullCheck(L_10);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
		goto IL_0088;
	}

IL_0077:
	{
		// else healthMaterial.color = colorForPos;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___healthMaterial_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___colorForPos_8;
		NullCheck(L_12);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_12, L_13, NULL);
	}

IL_0088:
	{
		// return cureAmountCorrected;
		float L_14 = __this->___cureAmountCorrected_6;
		return L_14;
	}
}
// System.Void HealthGiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthGiver__ctor_m56C7DF4AF4321F6A891B8780B7D9A895A0FCABB9 (HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoneyGiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyGiver_Start_mE44DC088FF28B4BF73E5800963469EDB3B401601 (MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C79CAD992BBC1A90BAB7A896BF9B9F971714110);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.FindGameObjectWithTag("EconomyManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral6C79CAD992BBC1A90BAB7A896BF9B9F971714110, NULL);
		__this->___gameManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameManager_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void MoneyGiver::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyGiver_OnTriggerEnter_mC4D19E8B44E2F68F9DF81BBA9E3C43B66FE4BF65 (MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// if (gameManager != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameManager_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// gameManager.GetComponent<EconomyManager>().SetMoney(moneyAmount);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameManager_6;
		NullCheck(L_4);
		EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* L_5;
		L_5 = GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C(L_4, GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C_RuntimeMethod_var);
		int32_t L_6 = __this->___moneyAmount_4;
		NullCheck(L_5);
		EconomyManager_SetMoney_m2F50A91FAE30AC6A86BB85CAC8AC5C37FA7DAE3C(L_5, L_6, NULL);
	}

IL_0031:
	{
		// IDamagable damagable = other.GetComponent<IDamagable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06(L_7, Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		V_0 = L_8;
		// if (damagable != null)
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// damagable.Damage(damageAmount);
		RuntimeObject* L_10 = V_0;
		float L_11 = __this->___damageAmount_5;
		NullCheck(L_10);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IDamagable::Damage(System.Single) */, IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var, L_10, L_11);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void MoneyGiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoneyGiver__ctor_m39EA0471CC7E1F841F8E1522DBCAAEE6A4DE95DF (MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void O_Canvas::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Canvas_Start_m291AEEBFF4B625B7E4DBCB64B1AEDF7F60368E89 (O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BEE3BE87CB3CCC1EE6E490023CDE17792A24113);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961E49B2137E99566340D33EDF261B243F3B80A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// valueText = transform.Find("Canvas/ValueText").GetComponent<TMP_Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral0BEE3BE87CB3CCC1EE6E490023CDE17792A24113, NULL);
		NullCheck(L_1);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_1, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___valueText_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueText_4), (void*)L_2);
		// description = transform.Find("Canvas/Description").GetComponent<TMP_Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral961E49B2137E99566340D33EDF261B243F3B80A4, NULL);
		NullCheck(L_4);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5;
		L_5 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_4, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___description_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___description_5), (void*)L_5);
		// SwitchBetweenObs();
		O_Canvas_SwitchBetweenObs_m6F53BF14DF241A67EB2BB5D067D38336923BAD2D(__this, NULL);
		// }
		return;
	}
}
// System.Void O_Canvas::SwitchBetweenObs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Canvas_SwitchBetweenObs_m6F53BF14DF241A67EB2BB5D067D38336923BAD2D (O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C_m2B5128EA28E525806D86ADCFFB33223A9EB7C6DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5_m4FB00855FCC9C178E5D31A2B83BEC2C2765B4FEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1_mEEAA012B729936C9A5E49912A94C66D3B32DCAE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9_m09B4D19A5DC0C6EA3755EC820CEBCF2330C06961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836_m53EB6DF67ED2EAB7DF3999AD1CC4E04045FD3348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87D4267E11795A3ECE466598F673C7B0933C29D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (shieldorhealth)
		int32_t L_0 = __this->___shieldorhealth_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_00a0;
	}

IL_0023:
	{
		// description.text = "SHIELD";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___description_5;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteral87D4267E11795A3ECE466598F673C7B0933C29D9);
		// value = GetComponent<ShieldGiver>().GetShieldAmount();
		ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* L_3;
		L_3 = Component_GetComponent_TisShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1_mEEAA012B729936C9A5E49912A94C66D3B32DCAE3(__this, Component_GetComponent_TisShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1_mEEAA012B729936C9A5E49912A94C66D3B32DCAE3_RuntimeMethod_var);
		NullCheck(L_3);
		float L_4;
		L_4 = ShieldGiver_GetShieldAmount_m48517AE65E1F1D09D9935A99DA1BD82266DFC348(L_3, NULL);
		__this->___value_8 = L_4;
		// break;
		goto IL_00a0;
	}

IL_0046:
	{
		// description.text = "HEALTH";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___description_5;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, _stringLiteral06FD5B512FDE4E53BBA58BCDC22FC1910EE20F23);
		// value = GetComponent<HealthGiver>().GetCureAmount();
		HealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C* L_6;
		L_6 = Component_GetComponent_TisHealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C_m2B5128EA28E525806D86ADCFFB33223A9EB7C6DF(__this, Component_GetComponent_TisHealthGiver_t3EA17CD6E09FD0B61263500678929F98169EE69C_m2B5128EA28E525806D86ADCFFB33223A9EB7C6DF_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7;
		L_7 = HealthGiver_GetCureAmount_m69B7D2107E30B64DCDCF41713957E83D9C324825(L_6, NULL);
		__this->___value_8 = L_7;
		// break;
		goto IL_00a0;
	}

IL_0069:
	{
		// value = GetComponent<SpeedGiver>().damageAmount;
		SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9* L_8;
		L_8 = Component_GetComponent_TisSpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9_m09B4D19A5DC0C6EA3755EC820CEBCF2330C06961(__this, Component_GetComponent_TisSpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9_m09B4D19A5DC0C6EA3755EC820CEBCF2330C06961_RuntimeMethod_var);
		NullCheck(L_8);
		float L_9 = L_8->___damageAmount_5;
		__this->___value_8 = L_9;
		// break;
		goto IL_00a0;
	}

IL_007c:
	{
		// value = GetComponent<WeightReducer>().damageAmount;
		WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836* L_10;
		L_10 = Component_GetComponent_TisWeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836_m53EB6DF67ED2EAB7DF3999AD1CC4E04045FD3348(__this, Component_GetComponent_TisWeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836_m53EB6DF67ED2EAB7DF3999AD1CC4E04045FD3348_RuntimeMethod_var);
		NullCheck(L_10);
		float L_11 = L_10->___damageAmount_5;
		__this->___value_8 = L_11;
		// break;
		goto IL_00a0;
	}

IL_008f:
	{
		// value = GetComponent<MoneyGiver>().damageAmount;
		MoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5* L_12;
		L_12 = Component_GetComponent_TisMoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5_m4FB00855FCC9C178E5D31A2B83BEC2C2765B4FEF(__this, Component_GetComponent_TisMoneyGiver_tBA1F3D254DEA336D3283F535D9638F798FF280C5_m4FB00855FCC9C178E5D31A2B83BEC2C2765B4FEF_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13 = L_12->___damageAmount_5;
		__this->___value_8 = L_13;
	}

IL_00a0:
	{
		// valueText.text = value.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14 = __this->___valueText_4;
		float* L_15 = (&__this->___value_8);
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_14, L_16);
		// }
		return;
	}
}
// System.Void O_Canvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Canvas__ctor_mE3914F2F9D814E8B0EE2DE7895B6F43278914684 (O_Canvas_tBD3A63CD6287EED38A57132AD3E53159DFC686FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void O_Health::Hit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Health_Hit_m7BC038CCB16826F7AD8AF23C3A2A2149DDF40FAB (O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A* __this, float ___0_damageAmount, const RuntimeMethod* method) 
{
	{
		// health -= damageAmount;
		float L_0 = __this->___health_4;
		float L_1 = ___0_damageAmount;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (health<=0)
		float L_2 = __this->___health_4;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void O_Health::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Health_Damage_m7ED10CCC80F1973EB0B0821319A40D2597FB89BF (O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A* __this, float ___0_damageAmount, const RuntimeMethod* method) 
{
	{
		// Hit(damageAmount);
		float L_0 = ___0_damageAmount;
		O_Health_Hit_m7BC038CCB16826F7AD8AF23C3A2A2149DDF40FAB(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void O_Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O_Health__ctor_m0F39928A73DE5890E031AB7C58961D174E1024BD (O_Health_tE4F737AA882CD70F9DB9BF6B70AA229E5D8C920A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ShieldGiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldGiver_Start_m1F9EEBF61F27F759CE034635C355CE7543247CD7 (ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* __this, const RuntimeMethod* method) 
{
	{
		// GetShieldAmount();
		float L_0;
		L_0 = ShieldGiver_GetShieldAmount_m48517AE65E1F1D09D9935A99DA1BD82266DFC348(__this, NULL);
		// }
		return;
	}
}
// System.Void ShieldGiver::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldGiver_OnTriggerEnter_m690C6C5C1B5A554E1D11ADAAA57B31A903F301EC (ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_m65D81534C9A7902E04EFB3CFE0F08CCD1EFC24B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// IShieldable shieldable = other.GetComponent<IShieldable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Component_GetComponent_TisIShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_m65D81534C9A7902E04EFB3CFE0F08CCD1EFC24B2(L_2, Component_GetComponent_TisIShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_m65D81534C9A7902E04EFB3CFE0F08CCD1EFC24B2_RuntimeMethod_var);
		V_0 = L_3;
		// if (shieldable != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// shieldable.Shield(shieldAmountCorrected);
		RuntimeObject* L_5 = V_0;
		float L_6 = __this->___shieldAmountCorrected_6;
		NullCheck(L_5);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IShieldable::Shield(System.Single) */, IShieldable_t441DCB9E59815BCE4DB0198E52F1685FF971B7D2_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Single ShieldGiver::GetShieldAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ShieldGiver_GetShieldAmount_m48517AE65E1F1D09D9935A99DA1BD82266DFC348 (ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shieldMaterial = gameObject.GetComponent<Renderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_0, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___shieldMaterial_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shieldMaterial_7), (void*)L_2);
		// shieldAmount = Random.Range(-shieldAmountRange, shieldAmountRange);
		float L_3 = __this->___shieldAmountRange_4;
		float L_4 = __this->___shieldAmountRange_4;
		float L_5;
		L_5 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_3)), L_4, NULL);
		__this->___shieldAmount_5 = L_5;
		// shieldAmountCorrected = Mathf.Ceil(shieldAmount);
		float L_6 = __this->___shieldAmount_5;
		float L_7;
		L_7 = ceilf(L_6);
		__this->___shieldAmountCorrected_6 = L_7;
		// if (shieldAmountCorrected == 0)
		float L_8 = __this->___shieldAmountCorrected_6;
		if ((!(((float)L_8) == ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// shieldAmountCorrected = 1;
		__this->___shieldAmountCorrected_6 = (1.0f);
	}

IL_0057:
	{
		// if (shieldAmountCorrected < 0)
		float L_9 = __this->___shieldAmountCorrected_6;
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_0077;
		}
	}
	{
		// shieldMaterial.color = colorForNeg;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___shieldMaterial_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___colorForNeg_9;
		NullCheck(L_10);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
		goto IL_0088;
	}

IL_0077:
	{
		// else shieldMaterial.color = colorForPos;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___shieldMaterial_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___colorForPos_8;
		NullCheck(L_12);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_12, L_13, NULL);
	}

IL_0088:
	{
		// return shieldAmountCorrected;
		float L_14 = __this->___shieldAmountCorrected_6;
		return L_14;
	}
}
// System.Void ShieldGiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShieldGiver__ctor_m033CE5F6F7DC1A5406A75FB701F44C4CAE6A19E9 (ShieldGiver_t30A147908BFDF21A574EDAA580D8A560B7071DA1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SpeedGiver::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedGiver_OnTriggerEnter_mE5DC0CC9B0A92D9E1168FE8DB43624525E35FE85 (SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_m1A44B773803C61CEFFAE9301A4E232FD980D00D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C44BFB93C2B43DDB8DF932C7B73379AEBD7FCD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// ISpeedable speedable = other.GetComponent<ISpeedable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Component_GetComponent_TisISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_m1A44B773803C61CEFFAE9301A4E232FD980D00D4(L_2, Component_GetComponent_TisISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_m1A44B773803C61CEFFAE9301A4E232FD980D00D4_RuntimeMethod_var);
		V_0 = L_3;
		// if (speedable != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// speedable.Speed(speedAmount);
		RuntimeObject* L_5 = V_0;
		float L_6 = __this->___speedAmount_4;
		NullCheck(L_5);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void ISpeedable::Speed(System.Single) */, ISpeedable_t8D1D782111326A09AEDCB4ECEE6C4E2ECE0DDC39_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0023:
	{
		// IDamagable damagable = other.GetComponent<IDamagable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06(L_7, Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		V_1 = L_8;
		// if (damagable != null)
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// damagable.Damage(damageAmount);
		RuntimeObject* L_10 = V_1;
		float L_11 = __this->___damageAmount_5;
		NullCheck(L_10);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IDamagable::Damage(System.Single) */, IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var, L_10, L_11);
		// Debug.Log("ASDFASDFA");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C44BFB93C2B43DDB8DF932C7B73379AEBD7FCD4, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void SpeedGiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeedGiver__ctor_mFCF8052CABFDB803F22FD577FEB9906C95A1D123 (SpeedGiver_t4A9A2AFDBB6D1E640A23E8E3A38783B3FEA2F5E9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void WeightReducer::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightReducer_OnTriggerEnter_m2EA77E219CC8F15553ACA0DE3C3FE53E8B4500DE (WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_m8BFAB0D34221CD98BF36AD9E655DDBEA9B6579BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C44BFB93C2B43DDB8DF932C7B73379AEBD7FCD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// IWeightable weightable = other.GetComponent<IWeightable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Component_GetComponent_TisIWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_m8BFAB0D34221CD98BF36AD9E655DDBEA9B6579BA(L_2, Component_GetComponent_TisIWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_m8BFAB0D34221CD98BF36AD9E655DDBEA9B6579BA_RuntimeMethod_var);
		V_0 = L_3;
		// if (weightable != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// weightable.Weight(weightAmount);
		RuntimeObject* L_5 = V_0;
		float L_6 = __this->___weightAmount_4;
		NullCheck(L_5);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IWeightable::Weight(System.Single) */, IWeightable_t60CFBFC89ACE15C29F2FCC2B70A96A82D88B1A9D_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0023:
	{
		// IDamagable damagable = other.GetComponent<IDamagable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06(L_7, Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		V_1 = L_8;
		// if (damagable != null)
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// damagable.Damage(damageAmount);
		RuntimeObject* L_10 = V_1;
		float L_11 = __this->___damageAmount_5;
		NullCheck(L_10);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IDamagable::Damage(System.Single) */, IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var, L_10, L_11);
		// Debug.Log("ASDFASDFA");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9C44BFB93C2B43DDB8DF932C7B73379AEBD7FCD4, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void WeightReducer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightReducer__ctor_m61EC403FE382D25735C22CD644FAF66F742ECE42 (WeightReducer_tD632663D00FBDDA7B1B65A15A07BEC0263F70836* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Start_mBBF1258D871D26851766FE3CA23546A9F7BF2629 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectToFollow = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___objectToFollow_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectToFollow_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void CameraMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_Update_m42273F0005E91309F6A375EB990391D92F6727FE (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		// MoveCamera(cameraOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___cameraOffset_6;
		CameraMovement_MoveCamera_mA2F535D21DB4D3655FC2008279D20314C8B1C30A(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::MoveCamera(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement_MoveCamera_mA2F535D21DB4D3655FC2008279D20314C8B1C30A (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, const RuntimeMethod* method) 
{
	{
		// FollowUpCamera.transform.position =  objectToFollow.transform.position + offset;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___FollowUpCamera_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objectToFollow_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraMovement__ctor_m89EBDC0905F17D37C7604387BED054FDCCADAFD3 (CameraMovement_tF96219C0A51576E5F631C99326572CE14C492022* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void C_Collisions::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Collisions_OnTriggerEnter_mD2144BE76614BD8BB5B48E59DDE009D3E264FDF5 (C_Collisions_tEC132A03C3B395074286292B91DC8F222CAA681A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5736D0CB639C10A6C44E0FC0876C74BE5EF44608);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (other.CompareTag("Obs"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral5736D0CB639C10A6C44E0FC0876C74BE5EF44608, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// IDamagable damagable = other.GetComponent<IDamagable>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06(L_2, Component_GetComponent_TisIDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_m0161547EAB5BF132215E8940034330A12B9D0B06_RuntimeMethod_var);
		V_0 = L_3;
		// if (damagable != null)
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// damagable.Damage(damage);
		RuntimeObject* L_5 = V_0;
		float L_6 = __this->___damage_4;
		NullCheck(L_5);
		InterfaceActionInvoker1< float >::Invoke(0 /* System.Void IDamagable::Damage(System.Single) */, IDamagable_t4EC18A1F9DBD9B57844F1F653F912FE72278FDEC_il2cpp_TypeInfo_var, L_5, L_6);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void C_Collisions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Collisions__ctor_m15970CD971FBA923243974E6A5C9C8B220C0C360 (C_Collisions_tEC132A03C3B395074286292B91DC8F222CAA681A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void C_Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Start_m2673ED4498D6FF343E72EE2D494D09A72533A0A3 (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51452628837BAB7C283227D4421383559F8F9A27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthText = GameObject.Find("Health").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7DEE7A97B72DC734B683A7EA0483A1414C3261B1, NULL);
		NullCheck(L_0);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1;
		L_1 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_0, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___healthText_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthText_6), (void*)L_1);
		// healthText.text = health.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___healthText_6;
		float* L_3 = (&__this->___health_4);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// shieldText = GameObject.Find("Shield").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral51452628837BAB7C283227D4421383559F8F9A27, NULL);
		NullCheck(L_5);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6;
		L_6 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_5, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___shieldText_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shieldText_7), (void*)L_6);
		// shieldText.text = shield.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___shieldText_7;
		float* L_8 = (&__this->___shield_5);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, L_9);
		// }
		return;
	}
}
// System.Void C_Health::Hit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Hit_m23D4EE4D1ACBA90D02144DB3564A50AD6CE7BD3E (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_damageAmount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if ((shield - damageAmount) > 0)
		float L_0 = __this->___shield_5;
		float L_1 = ___0_damageAmount;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// shield -= damageAmount;
		float L_2 = __this->___shield_5;
		float L_3 = ___0_damageAmount;
		__this->___shield_5 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
		goto IL_0052;
	}

IL_0025:
	{
		// float restDamage = MathF.Abs(shield - damageAmount);
		float L_4 = __this->___shield_5;
		float L_5 = ___0_damageAmount;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_4, L_5)));
		V_0 = L_6;
		// shield = 0;
		__this->___shield_5 = (0.0f);
		// health -= restDamage;
		float L_7 = __this->___health_4;
		float L_8 = V_0;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
	}

IL_0052:
	{
		// if (health<=0)
		float L_9 = __this->___health_4;
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// levelManager.SetState(LevelManager.GameStates.section3);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_10 = __this->___levelManager_8;
		NullCheck(L_10);
		LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0(L_10, 3, NULL);
		// health = 0;
		__this->___health_4 = (0.0f);
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void C_Health::GetCured(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_GetCured_m1E5F9671BF9C520591E673CBDDDCC385590F748B (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_healthAmount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if ((shield + healthAmount) > 0)
		float L_0 = __this->___shield_5;
		float L_1 = ___0_healthAmount;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_1))) > ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// shield += healthAmount;
		float L_2 = __this->___shield_5;
		float L_3 = ___0_healthAmount;
		__this->___shield_5 = ((float)il2cpp_codegen_add(L_2, L_3));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
		return;
	}

IL_0024:
	{
		// float restDamage = MathF.Abs(shield + healthAmount);
		float L_4 = __this->___shield_5;
		float L_5 = ___0_healthAmount;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_add(L_4, L_5)));
		V_0 = L_6;
		// shield = 0;
		__this->___shield_5 = (0.0f);
		// health -= restDamage;
		float L_7 = __this->___health_4;
		float L_8 = V_0;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
		// }
		return;
	}
}
// System.Void C_Health::GetShield(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_GetShield_mB56BDF14D58A02790052697B4EAC2EDE65BE44EB (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_shieldAmount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if ((shield + shieldAmount) > 0)
		float L_0 = __this->___shield_5;
		float L_1 = ___0_shieldAmount;
		if ((!(((float)((float)il2cpp_codegen_add(L_0, L_1))) > ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// shield += shieldAmount;
		float L_2 = __this->___shield_5;
		float L_3 = ___0_shieldAmount;
		__this->___shield_5 = ((float)il2cpp_codegen_add(L_2, L_3));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
		return;
	}

IL_0024:
	{
		// float restDamage = MathF.Abs(shield + shieldAmount);
		float L_4 = __this->___shield_5;
		float L_5 = ___0_shieldAmount;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_add(L_4, L_5)));
		V_0 = L_6;
		// shield = 0;
		__this->___shield_5 = (0.0f);
		// health -= restDamage;
		float L_7 = __this->___health_4;
		float L_8 = V_0;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// UpdateUI();
		C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52(__this, NULL);
		// }
		return;
	}
}
// System.Void C_Health::Cure(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Cure_mC74D41E23B81D43E5F63BB7A31AFD7895EAD32EF (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_healthAmountfromCurer, const RuntimeMethod* method) 
{
	{
		// GetCured(healthAmountfromCurer);
		float L_0 = ___0_healthAmountfromCurer;
		C_Health_GetCured_m1E5F9671BF9C520591E673CBDDDCC385590F748B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void C_Health::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Damage_m6F8DAAAA85ED3DDAEA6EF3A8430B14F99A006DF7 (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_damageAmount, const RuntimeMethod* method) 
{
	{
		// Hit(damageAmount);
		float L_0 = ___0_damageAmount;
		C_Health_Hit_m23D4EE4D1ACBA90D02144DB3564A50AD6CE7BD3E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void C_Health::Shield(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_Shield_mB164A0AB0D8265B16E1F0F1BE3E0947EB67FBFAE (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, float ___0_shield, const RuntimeMethod* method) 
{
	{
		// GetShield(shield);
		float L_0 = ___0_shield;
		C_Health_GetShield_mB56BDF14D58A02790052697B4EAC2EDE65BE44EB(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void C_Health::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health_UpdateUI_m6BA98D86ABACF28CA551089D79AF9A90E40E6B52 (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, const RuntimeMethod* method) 
{
	{
		// healthText.text = health.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___healthText_6;
		float* L_1 = (&__this->___health_4);
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// shieldText.text = shield.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___shieldText_7;
		float* L_4 = (&__this->___shield_5);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void C_Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Health__ctor_m10294A04CE62305287362A9BE82F1AAA14D15093 (C_Health_t33D71259939B4022BF1C671073037BA15011775A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void C_Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Start_mFF1F6D905C1E85FAE13166803BCD87DA974902A3 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_6), (void*)L_0);
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_12), (void*)L_1);
		// }
		return;
	}
}
// System.Void C_Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Update_mF6942114916C1BD59D2B8BC928E14A8B4FF47933 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// CheckStates();
		C_Movement_CheckStates_m1B1F55FE43AEB2F95837F0CCFFC33BB3B1A9CB6F(__this, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::GetSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_GetSpeed_m7E19DC1D98EF534BE298AFB3ED10208CFDC16327 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_speedAmount, const RuntimeMethod* method) 
{
	{
		// speed += speedAmount;
		float L_0 = __this->___speed_13;
		float L_1 = ___0_speedAmount;
		__this->___speed_13 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void C_Movement::GetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_GetWeight_m83F93C34C8611314D593E046FFF73C3627E27C00 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_weightAmount, const RuntimeMethod* method) 
{
	{
		// weight -= weightAmount;
		float L_0 = __this->___weight_14;
		float L_1 = ___0_weightAmount;
		__this->___weight_14 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// }
		return;
	}
}
// System.Void C_Movement::Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Speed_m3F67FCECC237EFB64F41F3E5D58C3DFD909F7DC2 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_speedAmount, const RuntimeMethod* method) 
{
	{
		// GetSpeed(speedAmount);
		float L_0 = ___0_speedAmount;
		C_Movement_GetSpeed_m7E19DC1D98EF534BE298AFB3ED10208CFDC16327(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::Weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Weight_m3BBC0C4127FF666FC92920AB993B8FF4BD918129 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_weightAmount, const RuntimeMethod* method) 
{
	{
		// GetWeight(weightAmount);
		float L_0 = ___0_weightAmount;
		C_Movement_GetWeight_m83F93C34C8611314D593E046FFF73C3627E27C00(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::CheckStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_CheckStates_m1B1F55FE43AEB2F95837F0CCFFC33BB3B1A9CB6F (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (LevelManager.Instance.GetState() == LevelManager.GameStates.start)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// Movement1();
		C_Movement_Movement1_m82406911724889CFCA75598DFEA344DF2330642B(__this, NULL);
	}

IL_0012:
	{
		// if (LevelManager.Instance.GetState() == LevelManager.GameStates.section1 || LevelManager.Instance.GetState() == LevelManager.GameStates.section2)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_4 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0032;
		}
	}

IL_002c:
	{
		// Movement2();
		C_Movement_Movement2_m0CB35C7E8A60E0DF4AFEBD9374A1DDC222A9C47F(__this, NULL);
	}

IL_0032:
	{
		// if (LevelManager.Instance.GetState() == LevelManager.GameStates.section3)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_6 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0045;
		}
	}
	{
		// Movement3();
		C_Movement_Movement3_mA6D96888DB9AEAF078E70318859E6BDCA8C21C30(__this, NULL);
	}

IL_0045:
	{
		// if (LevelManager.Instance.GetState() == LevelManager.GameStates.UI)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_8 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)5))))
		{
			goto IL_0058;
		}
	}
	{
		// Movement4();
		C_Movement_Movement4_m5E687A67878EFBE8FE38C7941255A157544A88EB(__this, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void C_Movement::Movement1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement1_m82406911724889CFCA75598DFEA344DF2330642B (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// return;
		return;
	}
}
// System.Void C_Movement::Movement2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement2_m0CB35C7E8A60E0DF4AFEBD9374A1DDC222A9C47F (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// MousePosition();
		C_Movement_MousePosition_m5C590C01F7C51F4B23687989D625DCCBCCB29494(__this, NULL);
		// MoveCharacter(mouseDistance.x, p_ForwardSpeed);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___mouseDistance_9);
		float L_1 = L_0->___x_2;
		float L_2 = __this->___p_ForwardSpeed_8;
		C_Movement_MoveCharacter_mACE2E13FA0A78ED0C9D60092F65F69C5A56D9746(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::Movement3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement3_mA6D96888DB9AEAF078E70318859E6BDCA8C21C30 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// rb.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_12;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)0, NULL);
		// rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_12;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)1, NULL);
		// rb.velocity = new Vector3(rb.velocity.x,  rb.velocity.y,  speed*weight / 75);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_12;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_12;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		float L_5 = L_4.___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_12;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___y_3;
		float L_9 = __this->___speed_13;
		float L_10 = __this->___weight_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_5, L_8, ((float)(((float)il2cpp_codegen_multiply(L_9, L_10))/(75.0f))), /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_11, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::Movement4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_Movement4_m5E687A67878EFBE8FE38C7941255A157544A88EB (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// rb.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_12;
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_0, (bool)1, NULL);
		// rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rb_12;
		NullCheck(L_1);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___rb_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_2);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_2, L_3, NULL);
		// return;
		return;
	}
}
// System.Void C_Movement::MousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_MousePosition_m5C590C01F7C51F4B23687989D625DCCBCCB29494 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// trackMouse = true;
		__this->___trackMouse_11 = (bool)1;
		// lastPosition = orthoCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , orthoCamera.nearClipPlane+1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___orthoCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_5 = L_4.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___orthoCamera_4;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_3, L_5, ((float)il2cpp_codegen_add(L_7, (1.0f))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_1, L_8, NULL);
		__this->___lastPosition_10 = L_9;
		goto IL_005b;
	}

IL_004c:
	{
		// else if (Input.GetMouseButtonUp(0))
		bool L_10;
		L_10 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		// trackMouse = false;
		__this->___trackMouse_11 = (bool)0;
	}

IL_005b:
	{
		// if (trackMouse)
		bool L_11 = __this->___trackMouse_11;
		if (!L_11)
		{
			goto IL_00bd;
		}
	}
	{
		// Vector3 newPosition = orthoCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , orthoCamera.nearClipPlane+1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___orthoCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_16 = L_15.___y_3;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___orthoCamera_4;
		NullCheck(L_17);
		float L_18;
		L_18 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_14, L_16, ((float)il2cpp_codegen_add(L_18, (1.0f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_12, L_19, NULL);
		V_0 = L_20;
		// mouseDistance = mouseDistance + (newPosition - lastPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___mouseDistance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->___lastPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_24, NULL);
		__this->___mouseDistance_9 = L_25;
		// lastPosition = newPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		__this->___lastPosition_10 = L_26;
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void C_Movement::MoveCharacter(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement_MoveCharacter_mACE2E13FA0A78ED0C9D60092F65F69C5A56D9746 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, float ___0_xPos, float ___1_speed, const RuntimeMethod* method) 
{
	{
		// player.transform.position = new Vector3(Mathf.Clamp(xPos/cameraCorrectionMultiplier, -4.5f, + 4.5f), 0.51f , player.transform.position.z + Time.deltaTime * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		float L_2 = ___0_xPos;
		float L_3 = __this->___cameraCorrectionMultiplier_5;
		float L_4;
		L_4 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_2/L_3)), (-4.5f), (4.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___player_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___z_4;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_10 = ___1_speed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, (0.50999999f), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_11, NULL);
		// }
		return;
	}
}
// System.Void C_Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Movement__ctor_m5F596FF8E9D9096E627F532D7E866EEFF85B27F2 (C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* __this, const RuntimeMethod* method) 
{
	{
		// public float p_ForwardSpeed = 1;
		__this->___p_ForwardSpeed_8 = (1.0f);
		// Vector3 mouseDistance = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___mouseDistance_9 = L_0;
		// public float speed = 25;
		__this->___speed_13 = (25.0f);
		// public float weight = 50;
		__this->___weight_14 = (50.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// C_Singleto C_Singleto::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* C_Singleto_get_Instance_mFAF6340144BA009F37DB6C27438BC525629749FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static C_Singleto Instance { get; private set; }
		C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* L_0 = ((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void C_Singleto::set_Instance(C_Singleto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Singleto_set_Instance_m78EC8A2FE01FB9E17BCBD4101EB90154A64CC3D5 (C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static C_Singleto Instance { get; private set; }
		C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* L_0 = ___0_value;
		((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void C_Singleto::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Singleto_Awake_m3DD7D673A099A1CB3CB1289EE9E96954543E0728 (C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* L_0;
		L_0 = C_Singleto_get_Instance_mFAF6340144BA009F37DB6C27438BC525629749FA_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		C_Singleto_set_Instance_m78EC8A2FE01FB9E17BCBD4101EB90154A64CC3D5_inline(__this, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void C_Singleto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C_Singleto__ctor_m80AFE1D425C3413A11191D690BC606C10B1C1886 (C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// FactoryManager FactoryManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* FactoryManager_get_Instance_mD5594938E722EAD9DACCC5B65756FC67F139D824 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FactoryManager Instance { get; private set; }
		FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* L_0 = ((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void FactoryManager::set_Instance(FactoryManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryManager_set_Instance_mC5B5CC52DA54D9E8241A19C184E0CB433F742FD6 (FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FactoryManager Instance { get; private set; }
		FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* L_0 = ___0_value;
		((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void FactoryManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryManager_Awake_m5B93164B435852368E16D1ECD845AAC4AFBB601E (FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* L_0;
		L_0 = FactoryManager_get_Instance_mD5594938E722EAD9DACCC5B65756FC67F139D824_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		FactoryManager_set_Instance_mC5B5CC52DA54D9E8241A19C184E0CB433F742FD6_inline(__this, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void FactoryManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FactoryManager__ctor_mB0C9A0108B73F3AF3C6CD0F52406405358310A06 (FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.GameObject ObsFactory::CreateObstacle(ObsFactory/ObstacleType,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D (ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* __this, int32_t ___0_type, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		int32_t L_0 = ___0_type;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0045;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_008b;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_001f:
	{
		// obstacleToSpawn = Instantiate(healthGiverPrefab, position, Quaternion.Euler(270, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___healthGiverPrefab_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((270.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_4;
		// break;
		goto IL_00dc;
	}

IL_0045:
	{
		// obstacleToSpawn = Instantiate(shieldGiverPrefab, position, Quaternion.Euler(270, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___shieldGiverPrefab_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((270.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_8;
		// break;
		goto IL_00dc;
	}

IL_0068:
	{
		// obstacleToSpawn = Instantiate(speedGiverPrefab, position, Quaternion.Euler(270, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___speedGiverPrefab_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((270.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_9, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_12;
		// break;
		goto IL_00dc;
	}

IL_008b:
	{
		// obstacleToSpawn = Instantiate(weightReducerPrefab, position, Quaternion.Euler(270, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___weightReducerPrefab_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((270.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_13, L_14, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_16;
		// break;
		goto IL_00dc;
	}

IL_00ae:
	{
		// obstacleToSpawn = Instantiate(moneyGiverPrefab, position, Quaternion.Euler(270, 0, 0));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___moneyGiverPrefab_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((270.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_17, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_20;
		// break;
		goto IL_00dc;
	}

IL_00d1:
	{
		// throw new System.ArgumentException("Invalid obstacle type");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B8B88B4D3148DBC7C9A3C32D9C8FB65B26ADD28)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D_RuntimeMethod_var)));
	}

IL_00dc:
	{
		// return obstacleToSpawn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_0;
		return L_22;
	}
}
// System.Void ObsFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsFactory__ctor_mC1515E37309C7FBBE1764E989B91D6CCE0203E54 (ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObstacleType[] obstacleTypes = (ObstacleType[]) System.Enum.GetValues(typeof(ObstacleType));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		__this->___obstacleTypes_4 = ((ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD*)Castclass((RuntimeObject*)L_2, ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obstacleTypes_4), (void*)((ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD*)Castclass((RuntimeObject*)L_2, ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var)));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObsSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner_Start_m091D6F8622C6B8DA36AD3085EB0AB2589CD2732D (ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44* __this, const RuntimeMethod* method) 
{
	{
		// SpawnObstacle();
		ObsSpawner_SpawnObstacle_mCCE0BE52C42508D5CB6035E0FC85769D8FD7D225(__this, NULL);
		// }
		return;
	}
}
// System.Void ObsSpawner::SpawnObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner_SpawnObstacle_mCCE0BE52C42508D5CB6035E0FC85769D8FD7D225 (ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float G_B4_0 = 0.0f;
	{
		// for (int i = 0; i < obstacles; i++)
		V_0 = 0;
		goto IL_006b;
	}

IL_0004:
	{
		// ObsFactory.ObstacleType type = (ObsFactory.ObstacleType)Random.Range(0, 2);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_1 = L_0;
		// spawnDistance = Random.Range(1,2)*distanceBetweenObstacles;
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 2, NULL);
		float L_2 = __this->___distanceBetweenObstacles_5;
		__this->___spawnDistance_8 = ((float)il2cpp_codegen_multiply(((float)L_1), L_2));
		// float lanePosition = Random.value > 0.5f ? laneWidth : -laneWidth;
		float L_3;
		L_3 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((((float)L_3) > ((float)(0.5f))))
		{
			goto IL_0036;
		}
	}
	{
		float L_4 = __this->___laneWidth_7;
		G_B4_0 = ((-L_4));
		goto IL_003c;
	}

IL_0036:
	{
		float L_5 = __this->___laneWidth_7;
		G_B4_0 = L_5;
	}

IL_003c:
	{
		V_2 = G_B4_0;
		// Vector3 position = new Vector3(lanePosition, 2.5f, i * spawnDistance - 50);  // Adjust to set obstacle positions as needed
		float L_6 = V_2;
		int32_t L_7 = V_0;
		float L_8 = __this->___spawnDistance_8;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_6, (2.5f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_7), L_8)), (50.0f))), NULL);
		// obstacleFactory.CreateObstacle(type, position);
		ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* L_9 = __this->___obstacleFactory_4;
		int32_t L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D(L_9, L_10, L_11, NULL);
		// for (int i = 0; i < obstacles; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < obstacles; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___obstacles_6;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObsSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner__ctor_mD41C85D8FED662CCE6CB0B01751A1891351A456D (ObsSpawner_t50CF801EEFA201C492717989CB60530B38A93F44* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float distanceBetweenObstacles = 10f;  // Set to desired distance
		__this->___distanceBetweenObstacles_5 = (10.0f);
		// [SerializeField] private int obstacles = 10;
		__this->___obstacles_6 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObsSpawner2::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner2_OnEnable_mA89365EAF980CA02A8726E9315646ABE98B20240 (ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelManager.OnSectionTwoStarted += SpawnObstacleSets;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = __this->___levelManager_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LevelManager_add_OnSectionTwoStarted_m0C59971399890E7D0A8D0152A049E2FFB69A9228(L_0, L_1, NULL);
		// levelManager.OnSectionThreeStarted += DeactivateObstacles;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2 = __this->___levelManager_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		LevelManager_add_OnSectionThreeStarted_mE5E5F4D45D86F526638D0E390EA02089FF4A443B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ObsSpawner2::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner2_OnDisable_mE5FD7194764619C266BE387F82F85CFBEFD1AF6E (ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelManager.OnSectionTwoStarted -= SpawnObstacleSets;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = __this->___levelManager_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LevelManager_remove_OnSectionTwoStarted_mD5631F4B1176D2432BD8A9452AF77A69B32EAF45(L_0, L_1, NULL);
		// levelManager.OnSectionThreeStarted -= DeactivateObstacles;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2 = __this->___levelManager_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		LevelManager_remove_OnSectionThreeStarted_mDAEDAA368C487D73BDAD62C5DD6A6E9EB0ECFB39(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ObsSpawner2::SpawnObstacleSets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner2_SpawnObstacleSets_m0DFBF79EF7941E721FD50048FCA389043E621EE2 (ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	{
		// ObsFactory.ObstacleType[] obstacleTypes = (ObsFactory.ObstacleType[])System.Enum.GetValues(typeof(ObsFactory.ObstacleType));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ObstacleType_tB66766D75C48E59316A39DB327A06BCD25D3299C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_2;
		L_2 = Enum_GetValues_m803B9D68C367FAABC5AFB6B5B52775C8A573CEF9(L_1, NULL);
		// ObsFactory.ObstacleType thirdType = obstacleTypes[2]; // 3rd enum
		ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD* L_3 = ((ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD*)Castclass((RuntimeObject*)L_2, ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD_il2cpp_TypeInfo_var));
		NullCheck(L_3);
		int32_t L_4 = 2;
		int32_t L_5 = (int32_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// ObsFactory.ObstacleType fourthType = obstacleTypes[3]; // 4th enum
		ObstacleTypeU5BU5D_tA989A0E7FCA7AB6136182E5EB527DC7F151359FD* L_6 = L_3;
		NullCheck(L_6);
		int32_t L_7 = 3;
		int32_t L_8 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		// ObsFactory.ObstacleType fifthType = obstacleTypes[4]; // 5th enum
		NullCheck(L_6);
		int32_t L_9 = 4;
		int32_t L_10 = (int32_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// for (int i = 0; i < laneCount; i++)
		V_3 = 0;
		goto IL_00d2;
	}

IL_0026:
	{
		// float zPos = i * distanceBetweenObstacles + spawnOffset;
		int32_t L_11 = V_3;
		float L_12 = __this->___distanceBetweenObstacles_5;
		float L_13 = __this->___spawnOffset_10;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_11), L_12)), L_13));
		// Vector3 position = new Vector3(-laneWidth, height, zPos);
		float L_14 = __this->___laneWidth_7;
		float L_15 = __this->___height_9;
		float L_16 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((-L_14)), L_15, L_16, NULL);
		// GameObject obstacle = obstacleFactory.CreateObstacle(thirdType, position);
		ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* L_17 = __this->___obstacleFactory_4;
		int32_t L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_5;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D(L_17, L_18, L_19, NULL);
		V_6 = L_20;
		// spawnedObstacles.Add(obstacle);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_21 = __this->___spawnedObstacles_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_6;
		NullCheck(L_21);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_21, L_22, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// position = new Vector3(0, height, zPos);
		float L_23 = __this->___height_9;
		float L_24 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), (0.0f), L_23, L_24, NULL);
		// obstacle = obstacleFactory.CreateObstacle(fourthType, position);
		ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* L_25 = __this->___obstacleFactory_4;
		int32_t L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_5;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D(L_25, L_26, L_27, NULL);
		V_6 = L_28;
		// spawnedObstacles.Add(obstacle);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___spawnedObstacles_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_6;
		NullCheck(L_29);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_29, L_30, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// position = new Vector3(laneWidth, height, zPos);
		float L_31 = __this->___laneWidth_7;
		float L_32 = __this->___height_9;
		float L_33 = V_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), L_31, L_32, L_33, NULL);
		// obstacle = obstacleFactory.CreateObstacle(fifthType, position);
		ObsFactory_t823BD623803FDB5713C97A8AD7A14E07307C8FE6* L_34 = __this->___obstacleFactory_4;
		int32_t L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_5;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = ObsFactory_CreateObstacle_m85B8C25B4305CD4B3F01292DC7042B9A077B554D(L_34, L_35, L_36, NULL);
		V_6 = L_37;
		// spawnedObstacles.Add(obstacle);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_38 = __this->___spawnedObstacles_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_6;
		NullCheck(L_38);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_38, L_39, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < laneCount; i++)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00d2:
	{
		// for (int i = 0; i < laneCount; i++)
		int32_t L_41 = V_3;
		int32_t L_42 = __this->___laneCount_6;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObsSpawner2::DeactivateObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner2_DeactivateObstacles_mF0F5E3D47C6FB06C5903AE37FFCA8D43EB19BE45 (ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var obstacle in spawnedObstacles)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___spawnedObstacles_12;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001b_1;
			}

IL_000e_1:
			{
				// foreach (var obstacle in spawnedObstacles)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// obstacle.SetActive(false);
				NullCheck(L_2);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
			}

IL_001b_1:
			{
				// foreach (var obstacle in spawnedObstacles)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0034;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ObsSpawner2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsSpawner2__ctor_m37FB40E3E1E51C949AFC24FBE43A1E9E41DCF418 (ObsSpawner2_tEB149ACF81D1007C16607882A1325678C16B85E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] float distanceBetweenObstacles = 10f;  // Set to desired distance
		__this->___distanceBetweenObstacles_5 = (10.0f);
		// [SerializeField] private int laneCount = 10;
		__this->___laneCount_6 = ((int32_t)10);
		// public float height = 1.5f;
		__this->___height_9 = (1.5f);
		// public List<GameObject> spawnedObstacles = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___spawnedObstacles_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObstacles_12), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EconomyManager::add_onMoneyChanged(EconomyManager/OnMoneyChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager_add_onMoneyChanged_m7EB6B9AC514CFF0FDD6EAD680C7F9E9840C10D1F (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_0 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_1 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_2 = NULL;
	{
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_0 = ((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_1 = V_0;
		V_1 = L_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_2 = V_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)CastclassSealed((RuntimeObject*)L_4, OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3_il2cpp_TypeInfo_var));
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_5 = V_2;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_6 = V_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*>((&((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5), L_5, L_6);
		V_0 = L_7;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_8 = V_0;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)L_8) == ((RuntimeObject*)(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EconomyManager::remove_onMoneyChanged(EconomyManager/OnMoneyChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager_remove_onMoneyChanged_m066D974956349B687D80C972A3BADAED86EE36E3 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_0 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_1 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* V_2 = NULL;
	{
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_0 = ((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_1 = V_0;
		V_1 = L_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_2 = V_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)CastclassSealed((RuntimeObject*)L_4, OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3_il2cpp_TypeInfo_var));
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_5 = V_2;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_6 = V_1;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*>((&((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5), L_5, L_6);
		V_0 = L_7;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_8 = V_0;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)L_8) == ((RuntimeObject*)(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void EconomyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager_Start_mAEB616A4B037F48DA4897EF50B307B36FA1CC703 (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		s_Il2CppMethodInitialized = true;
	}
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* G_B2_0 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* G_B1_0 = NULL;
	{
		// money = PlayerPrefs.GetInt("Money", 100);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m8AD1FA8BA54CC6CE2B2AEEE36B6D75587BB1692D(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, ((int32_t)100), NULL);
		__this->___money_4 = L_0;
		// onMoneyChanged?.Invoke(money);
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_1 = ((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_3 = __this->___money_4;
		NullCheck(G_B2_0);
		OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Single EconomyManager::GetMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EconomyManager_GetMoney_m7D7FBDC2B9CF1817F97B18FAE86D3EB38731F941 (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, const RuntimeMethod* method) 
{
	{
		// return money;
		int32_t L_0 = __this->___money_4;
		return ((float)L_0);
	}
}
// System.Void EconomyManager::SetMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager_SetMoney_m2F50A91FAE30AC6A86BB85CAC8AC5C37FA7DAE3C (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3);
		s_Il2CppMethodInitialized = true;
	}
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* G_B2_0 = NULL;
	OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* G_B1_0 = NULL;
	{
		// money += amount;
		int32_t L_0 = __this->___money_4;
		int32_t L_1 = ___0_amount;
		__this->___money_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// PlayerPrefs.SetInt("Money", money);
		int32_t L_2 = __this->___money_4;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral4783348997FD98C18DE1576BBDFDC07F874F5EE3, L_2, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// onMoneyChanged?.Invoke(money);
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_3 = ((EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_StaticFields*)il2cpp_codegen_static_fields_for(EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_il2cpp_TypeInfo_var))->___onMoneyChanged_5;
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_002d;
		}
	}
	{
		return;
	}

IL_002d:
	{
		int32_t L_5 = __this->___money_4;
		NullCheck(G_B2_0);
		OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_inline(G_B2_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void EconomyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EconomyManager__ctor_mD2D2399D7379BFDB4A316CE2FCC20F3D253C7992 (EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* __this, const RuntimeMethod* method) 
{
	{
		// private int money = 100;
		__this->___money_4 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_Multicast(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* currentDelegate = reinterpret_cast<OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_money, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_OpenInst(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_money, method);
}
void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_OpenStatic(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_money, method);
}
void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_OpenStaticInvoker(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_money);
}
void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_ClosedStaticInvoker(OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_money);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_money);

}
// System.Void EconomyManager/OnMoneyChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMoneyChanged__ctor_mA026E96FD82BC8C083949E60360601A767CDBB63 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_Multicast;
}
// System.Void EconomyManager/OnMoneyChanged::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_money, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult EconomyManager/OnMoneyChanged::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMoneyChanged_BeginInvoke_m5C6C8D196EA93438102695D0C79EE0C8D185CAB4 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_money);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void EconomyManager/OnMoneyChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMoneyChanged_EndInvoke_m7D1B6B20DE2BED55C6DCE15303EC7A25FDEFC5C3 (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelManager::add_OnSectionTwoStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnSectionTwoStarted_m0C59971399890E7D0A8D0152A049E2FFB69A9228 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSectionTwoStarted_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSectionTwoStarted_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::remove_OnSectionTwoStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnSectionTwoStarted_mD5631F4B1176D2432BD8A9452AF77A69B32EAF45 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSectionTwoStarted_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSectionTwoStarted_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::add_OnSectionThreeStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnSectionThreeStarted_mE5E5F4D45D86F526638D0E390EA02089FF4A443B (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSectionThreeStarted_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSectionThreeStarted_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::remove_OnSectionThreeStarted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnSectionThreeStarted_mDAEDAA368C487D73BDAD62C5DD6A6E9EB0ECFB39 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnSectionThreeStarted_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnSectionThreeStarted_6);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::add_OnFreefallDead(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_add_OnFreefallDead_mA8FB7B402057BDD2D9D45C7C468B438530F8C85A (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnFreefallDead_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnFreefallDead_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::remove_OnFreefallDead(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_remove_OnFreefallDead_mFFB78F26CA1279589E27A151172A7416229EFF28 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___OnFreefallDead_7;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___OnFreefallDead_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_m5DEB1CF05B334C6E29A91D604623C1B8401AE09C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Instance = this;
		((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_mA7A45D9D0CBA8784B87F70B204C19A2AAC234D42 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// SetState(GameStates.start);
		LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0(__this, 0, NULL);
		// ramp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ramp_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_mD2004B9E4119DF7C3EE3D3F147754CCBC7FFD61D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// CheckInitialTap();
		LevelManager_CheckInitialTap_m7308CB397C99FAE3AAB7EC01095F0006AD02532A(__this, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::SetState(LevelManager/GameStates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		// currentState = state;
		int32_t L_0 = ___0_state;
		__this->___currentState_4 = L_0;
		int32_t L_1 = ___0_state;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_005c;
			}
			case 5:
			{
				goto IL_0064;
			}
		}
	}
	{
		return;
	}

IL_0026:
	{
		// currentState = GameStates.start;
		__this->___currentState_4 = 0;
		// break;
		return;
	}

IL_002e:
	{
		// currentState = GameStates.section1;
		__this->___currentState_4 = 1;
		// break;
		return;
	}

IL_0036:
	{
		// currentState = GameStates.section2;
		__this->___currentState_4 = 2;
		// OnSectionTwoStarted();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___OnSectionTwoStarted_5;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		// break;
		return;
	}

IL_0049:
	{
		// currentState = GameStates.section3;
		__this->___currentState_4 = 3;
		// OnSectionThreeStarted();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___OnSectionThreeStarted_6;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		// break;
		return;
	}

IL_005c:
	{
		// currentState = GameStates.freefall;
		__this->___currentState_4 = 4;
		// break;
		return;
	}

IL_0064:
	{
		// currentState = GameStates.UI;
		__this->___currentState_4 = 5;
		// OnFreefallDead();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___OnFreefallDead_7;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		// }
		return;
	}
}
// LevelManager/GameStates LevelManager::GetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// return currentState;
		int32_t L_0 = __this->___currentState_4;
		return L_0;
	}
}
// System.Void LevelManager::CheckInitialTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_CheckInitialTap_m7308CB397C99FAE3AAB7EC01095F0006AD02532A (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A96F0B7281E227CE68083888A313E9A96527AC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetState() == GameStates.start)
		int32_t L_0;
		L_0 = LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))  // 0 for left click (or a single touch)
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// SetState(GameStates.section1);
		LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0(__this, 1, NULL);
		// Debug.Log("section 1 started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7A96F0B7281E227CE68083888A313E9A96527AC5, NULL);
		return;
	}

IL_0022:
	{
		// } else return;
		return;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void LevelManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnEnable_m2822B28E1CACDD507598DA89171E862B85C3E9CB (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnSectionThreeStarted += SetRampActive;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F_RuntimeMethod_var), NULL);
		LevelManager_add_OnSectionThreeStarted_mE5E5F4D45D86F526638D0E390EA02089FF4A443B(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_OnDisable_m91E921A2C26A738EE99B3F3DE525590136EBB55C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnSectionThreeStarted -= SetRampActive;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F_RuntimeMethod_var), NULL);
		LevelManager_remove_OnSectionThreeStarted_mDAEDAA368C487D73BDAD62C5DD6A6E9EB0ECFB39(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::SetRampActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetRampActive_mCFBFF9B0C60FBE8BDFA7DF1078F63720652DD63F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// ramp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ramp_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FreefallDeadTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreefallDeadTrigger_OnTriggerEnter_mFCFA479941B17393935373D3DFD8E9768EB0BDE5 (FreefallDeadTrigger_tA6B00AD5D126975F940D96D42B0FB318CE686648* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19B47F4E2D5DC6B492D830E76820B4516F50D343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// LevelManager.Instance.SetState(LevelManager.GameStates.UI);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_2);
		LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0(L_2, 5, NULL);
		// Debug.Log("deaddd");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral19B47F4E2D5DC6B492D830E76820B4516F50D343, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void FreefallDeadTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FreefallDeadTrigger__ctor_m41BC9FF2F8EF0E08C0CF0A416F31BFC3E794B810 (FreefallDeadTrigger_tA6B00AD5D126975F940D96D42B0FB318CE686648* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SectionTwoTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SectionTwoTrigger_OnTriggerEnter_m695ABD67B529BE40065D5F55AA8124879695C54C (SectionTwoTrigger_tF5A68667649130A58B6BBD4CC858F8A32C41FEB7* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// LevelManager.Instance.SetState(LevelManager.GameStates.section2);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_2 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		NullCheck(L_2);
		LevelManager_SetState_m36906A19B850F3D80D66E4798C5135362C7514B0(L_2, 2, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void SectionTwoTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SectionTwoTrigger__ctor_mD1018028F3D5380540480A7FD8DC8C1F317072BB (SectionTwoTrigger_tF5A68667649130A58B6BBD4CC858F8A32C41FEB7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StartTapAnim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTapAnim_Start_m4C9DA482E06F676A525FF4FA55BA59CBCF308B43 (StartTapAnim_t8A8B5C9D18D35FB2404DC72A0E4970A2F7825EB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void StartTapAnim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTapAnim__ctor_mF04B0F4728C770521EA3C95492B104933A9BBDE3 (StartTapAnim_t8A8B5C9D18D35FB2404DC72A0E4970A2F7825EB2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UI_RewardScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen_Start_mB002F4F5413C70EE5A5A76BB11902E7E409C08D7 (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UI_RewardScreen_ActivateUI_m4AF568EFA65E0610152E9188C75D7B60A63F8A11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableUI();
		UI_RewardScreen_DisableUI_mB231284949836DB8228CD9680224BE4DF2E72C70(__this, NULL);
		// LevelManager.Instance.OnFreefallDead += ActivateUI;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___Instance_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)UI_RewardScreen_ActivateUI_m4AF568EFA65E0610152E9188C75D7B60A63F8A11_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LevelManager_add_OnFreefallDead_mA8FB7B402057BDD2D9D45C7C468B438530F8C85A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UI_RewardScreen::ActivateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen_ActivateUI_m4AF568EFA65E0610152E9188C75D7B60A63F8A11 (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UI_RewardScreen::DisableUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen_DisableUI_mB231284949836DB8228CD9680224BE4DF2E72C70 (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UI_RewardScreen::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen_RestartGame_m307389642F9E0C35DC41141A4563EB81F023392C (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void UI_RewardScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_RewardScreen__ctor_mC5BF29795BAC02B3A8F0F5539C38EC97662E8A7E (UI_RewardScreen_t17285EDCCAD1B6CE39664B3539276AE677D235B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UI_SpeedandWeight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SpeedandWeight_Start_mAB8FB0495C00D752F9DEA34989DAC7D4BA28D9C2 (UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48800E395DD3336E1DC87C6433D594104052B806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6516EC583F4C80506E4C2B69D4D6E421DA137DA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C79CAD992BBC1A90BAB7A896BF9B9F971714110);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3FDABD75502DD960F0CEF8A7466DEE39DF69412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_7), (void*)L_0);
		// economyManager = GameObject.FindGameObjectWithTag("EconomyManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral6C79CAD992BBC1A90BAB7A896BF9B9F971714110, NULL);
		__this->___economyManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___economyManager_8), (void*)L_1);
		// speedText = transform.Find("SpeedandWeight/Speedvalue").GetComponent<TMP_Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral48800E395DD3336E1DC87C6433D594104052B806, NULL);
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_3, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___speedText_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___speedText_4), (void*)L_4);
		// weightText = transform.Find("SpeedandWeight/Weightvalue").GetComponent<TMP_Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteralB3FDABD75502DD960F0CEF8A7466DEE39DF69412, NULL);
		NullCheck(L_6);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7;
		L_7 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_6, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___weightText_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weightText_5), (void*)L_7);
		// moneyText = transform.Find("SpeedandWeight/Moneyvalue").GetComponent<TMP_Text>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral6516EC583F4C80506E4C2B69D4D6E421DA137DA5, NULL);
		NullCheck(L_9);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10;
		L_10 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_9, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___moneyText_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moneyText_6), (void*)L_10);
		// SetValues();
		UI_SpeedandWeight_SetValues_mF9D634EBEA7B68C504A0C8BA73AAF66D83176893(__this, NULL);
		// }
		return;
	}
}
// System.Void UI_SpeedandWeight::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SpeedandWeight_LateUpdate_mC8DB05DD7B130EC38012BC579A8BB581234D2778 (UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE* __this, const RuntimeMethod* method) 
{
	{
		// SetValues();
		UI_SpeedandWeight_SetValues_mF9D634EBEA7B68C504A0C8BA73AAF66D83176893(__this, NULL);
		// }
		return;
	}
}
// System.Void UI_SpeedandWeight::SetValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SpeedandWeight_SetValues_mF9D634EBEA7B68C504A0C8BA73AAF66D83176893 (UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// speedText.text = player.GetComponent<C_Movement>().speed.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___speedText_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___player_7;
		NullCheck(L_1);
		C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* L_2;
		L_2 = GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B(L_1, GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B_RuntimeMethod_var);
		NullCheck(L_2);
		float* L_3 = (&L_2->___speed_13);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// weightText.text = player.GetComponent<C_Movement>().weight.ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___weightText_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___player_7;
		NullCheck(L_6);
		C_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99* L_7;
		L_7 = GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B(L_6, GameObject_GetComponent_TisC_Movement_t28B104DF91D6D96E93134656D2C511946CCA4D99_m7375F06190E3CA9C7502446A05CA815D2462FF3B_RuntimeMethod_var);
		NullCheck(L_7);
		float* L_8 = (&L_7->___weight_14);
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_9);
		// moneyText.text = economyManager.GetComponent<EconomyManager>().GetMoney().ToString();
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___moneyText_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___economyManager_8;
		NullCheck(L_11);
		EconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82* L_12;
		L_12 = GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C(L_11, GameObject_GetComponent_TisEconomyManager_tA9AAED47C31557E5D6409AAAAAF6736BE8F4EF82_m9AFD39CE933600C3EAB510B281DE6CE67637C78C_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13;
		L_13 = EconomyManager_GetMoney_m7D7FBDC2B9CF1817F97B18FAE86D3EB38731F941(L_12, NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// }
		return;
	}
}
// System.Void UI_SpeedandWeight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SpeedandWeight__ctor_mF0754B1835F72E2928746C7303F4DE7BCD0204C8 (UI_SpeedandWeight_tC52AB38DE9082F31098C358DB2B0D616F4690ABE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LevelManager_GetState_m83F5A9CF6D7AF87FB11C5DD2CFB07EBBAF17A00E_inline (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// return currentState;
		int32_t L_0 = __this->___currentState_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* C_Singleto_get_Instance_mFAF6340144BA009F37DB6C27438BC525629749FA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static C_Singleto Instance { get; private set; }
		C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* L_0 = ((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void C_Singleto_set_Instance_m78EC8A2FE01FB9E17BCBD4101EB90154A64CC3D5_inline (C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static C_Singleto Instance { get; private set; }
		C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE* L_0 = ___0_value;
		((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_StaticFields*)il2cpp_codegen_static_fields_for(C_Singleto_tCF0F679BA8568392A40955DFCC95D861D410AAFE_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* FactoryManager_get_Instance_mD5594938E722EAD9DACCC5B65756FC67F139D824_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FactoryManager Instance { get; private set; }
		FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* L_0 = ((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FactoryManager_set_Instance_mC5B5CC52DA54D9E8241A19C184E0CB433F742FD6_inline (FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static FactoryManager Instance { get; private set; }
		FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0* L_0 = ___0_value;
		((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_StaticFields*)il2cpp_codegen_static_fields_for(FactoryManager_tE09C70B90260F83B1B197C8AB74A739852829EF0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnMoneyChanged_Invoke_mE00EF465958B3ECE94DFA9374B1414A32D24C360_inline (OnMoneyChanged_t478BEE889FFB86FC12B9D97C94FD2501C60007D3* __this, int32_t ___0_money, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_money, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
