#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.IList`1<OVRBone>
struct IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC;
// System.Collections.Generic.IList`1<OVRBoneCapsule>
struct IList_1_tFFC33E12DD64329607D75CE292E627E8EE4B5870;
// System.Collections.Generic.List`1<OVRBone>
struct List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71;
// System.Collections.Generic.List`1<OVRBoneCapsule>
struct List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA;
// System.Collections.Generic.Queue`1<BoardData>
struct Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6;
// UnityEngine.Events.UnityAction`1<BoardData>
struct UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585;
// UnityEngine.Events.UnityEvent`1<BoardData>
struct UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D;
// BoardData[]
struct BoardDataU5BU5D_tBF83F10D5A59D5B3F39D0C8A62035B081D2B74DD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// OVRPlugin/Bone[]
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
// OVRPlugin/BoneCapsule[]
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
// OVRPlugin/Quatf[]
struct QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF;
// OVRPlugin/TrackingConfidence[]
struct TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37;
// BoardChangeEvent
struct BoardChangeEvent_t9373C8ED583695E148CB5CFA25AE32016AF40FD8;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ConnectControl
struct ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B;
// ConnectReceive
struct ConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4;
// ConnectReceiveHandle
struct ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685;
// ConnectSend
struct ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A;
// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509;
// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.RenderStreaming.OnStartedChannelHandler
struct OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296;
// Unity.RenderStreaming.OnStoppedChannelHandler
struct OnStoppedChannelHandler_t18F205BD3FF9CCF8DE16376FDD165B44FA19D8CC;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Unity.WebRTC.RTCDataChannel
struct RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77;
// Unity.RenderStreaming.Samples.RenderStreamingSettings
struct RenderStreamingSettings_t7D97CFB1369014FCA01F251DB78FBD2BFE73DF4C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Unity.RenderStreaming.SignalingManager
struct SignalingManager_t4DA53443F3FB704E5CC6D4E10B2FE735EB21D24B;
// Unity.RenderStreaming.SingleConnection
struct SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Whiteboard
struct Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1;
// WhiteboardPen
struct WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D;
// OVRSkeleton/IOVRSkeletonDataProvider
struct IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m9CC060875120CC11A6356947C8A24DA823AEBD0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectReceiveHandle_ReceiveData_m302C92BF90715E0411A0BBE5704015E9007C9970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B_m00CD5637620C0B8C3BE8F9B5351622235CE2DA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4_m98CC1B567504A23B5D2214FE0A162CDF9E417612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B_m6F287C03E97CAF9CBC16464DAEE8DE9F07829EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D_mB1F2B88E40B3579F5AA508998D3551E24C27CC88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45_RuntimeMethod_var;
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74;
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD7FB94F0FC7EF8D84C88DD08F23A4CF20864CAE0 
{
};

// System.Collections.Generic.Queue`1<BoardData>
struct Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	BoardDataU5BU5D_tBF83F10D5A59D5B3F39D0C8A62035B081D2B74DD* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// GetCurrentTime
struct GetCurrentTime_tBA66B2E9627B6F62FF2B66E3EF0F81D9ED906BF4  : public RuntimeObject
{
};

// OVRBone
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A  : public RuntimeObject
{
	// OVRSkeleton/BoneId OVRBone::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// System.Int16 OVRBone::<ParentBoneIndex>k__BackingField
	int16_t ___U3CParentBoneIndexU3Ek__BackingField_1;
	// UnityEngine.Transform OVRBone::<Transform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField_2;
};

// Texture2DExtension
struct Texture2DExtension_tA6C74833760B2D47B0A6A84079325C94E384F9EA  : public RuntimeObject
{
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

// UnityEngine.Events.UnityEvent`1<BoardData>
struct UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// BoardData
struct BoardData_tD7A32E83E2390379148868B8C745E481E83D575C 
{
	// System.Int32 BoardData::type
	int32_t ___type_0;
	// System.Int32 BoardData::x
	int32_t ___x_1;
	// System.Int32 BoardData::y
	int32_t ___y_2;
	// System.Int32 BoardData::color
	int32_t ___color_3;
	// System.Int32 BoardData::drawSize
	int32_t ___drawSize_4;
	// System.Int64 BoardData::time
	int64_t ___time_5;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// OVRPlugin/Quatf
struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A 
{
	// System.Single OVRPlugin/Quatf::x
	float ___x_0;
	// System.Single OVRPlugin/Quatf::y
	float ___y_1;
	// System.Single OVRPlugin/Quatf::z
	float ___z_2;
	// System.Single OVRPlugin/Quatf::w
	float ___w_3;
};

struct Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A_StaticFields
{
	// OVRPlugin/Quatf OVRPlugin/Quatf::identity
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___identity_4;
};

// OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F 
{
	// OVRPlugin/SkeletonType OVRPlugin/Skeleton2::Type
	int32_t ___Type_0;
	// System.UInt32 OVRPlugin/Skeleton2::NumBones
	uint32_t ___NumBones_1;
	// System.UInt32 OVRPlugin/Skeleton2::NumBoneCapsules
	uint32_t ___NumBoneCapsules_2;
	// OVRPlugin/Bone[] OVRPlugin/Skeleton2::Bones
	BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* ___Bones_3;
	// OVRPlugin/BoneCapsule[] OVRPlugin/Skeleton2::BoneCapsules
	BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___BoneCapsules_4;
};
// Native definition for P/Invoke marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_pinvoke
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};
// Native definition for COM marshalling of OVRPlugin/Skeleton2
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_com
{
	int32_t ___Type_0;
	uint32_t ___NumBones_1;
	uint32_t ___NumBoneCapsules_2;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones_3;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules_4;
};

// OVRPlugin/Vector3f
struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 
{
	// System.Single OVRPlugin/Vector3f::x
	float ___x_0;
	// System.Single OVRPlugin/Vector3f::y
	float ___y_1;
	// System.Single OVRPlugin/Vector3f::z
	float ___z_2;
};

struct Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562_StaticFields
{
	// OVRPlugin/Vector3f OVRPlugin/Vector3f::zero
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___zero_3;
};

// BoardChangeEvent
struct BoardChangeEvent_t9373C8ED583695E148CB5CFA25AE32016AF40FD8  : public UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D
{
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// OVRPlugin/Posef
struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 
{
	// OVRPlugin/Quatf OVRPlugin/Posef::Orientation
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A ___Orientation_0;
	// OVRPlugin/Vector3f OVRPlugin/Posef::Position
	Vector3f_t232AF83B4642C67BE8EFF85D8E1599D3B06BD562 ___Position_1;
};

struct Posef_t51A2C10B4094B44A8D3C1913292B839172887B61_StaticFields
{
	// OVRPlugin/Posef OVRPlugin/Posef::identity
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___identity_2;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 
{
	// OVRPlugin/HandStatus OVRPlugin/HandState::Status
	int32_t ___Status_0;
	// OVRPlugin/Posef OVRPlugin/HandState::RootPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	// OVRPlugin/Quatf[] OVRPlugin/HandState::BoneRotations
	QuatfU5BU5D_t866C516DA0FC85581934D10E587D323B1B89E3BF* ___BoneRotations_2;
	// OVRPlugin/HandFingerPinch OVRPlugin/HandState::Pinches
	int32_t ___Pinches_3;
	// System.Single[] OVRPlugin/HandState::PinchStrength
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___PinchStrength_4;
	// OVRPlugin/Posef OVRPlugin/HandState::PointerPose
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	// System.Single OVRPlugin/HandState::HandScale
	float ___HandScale_6;
	// OVRPlugin/TrackingConfidence OVRPlugin/HandState::HandConfidence
	int32_t ___HandConfidence_7;
	// OVRPlugin/TrackingConfidence[] OVRPlugin/HandState::FingerConfidences
	TrackingConfidenceU5BU5D_t6B1A6ADEF3656B62D4BE66AE16338E2001714B37* ___FingerConfidences_8;
	// System.Double OVRPlugin/HandState::RequestedTimeStamp
	double ___RequestedTimeStamp_9;
	// System.Double OVRPlugin/HandState::SampleTimeStamp
	double ___SampleTimeStamp_10;
};
// Native definition for P/Invoke marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_pinvoke
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};
// Native definition for COM marshalling of OVRPlugin/HandState
struct HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552_marshaled_com
{
	int32_t ___Status_0;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___RootPose_1;
	Quatf_t5347392804DF5326AF790F82E4EDE1578FED682A* ___BoneRotations_2;
	int32_t ___Pinches_3;
	Il2CppSafeArray/*NONE*/* ___PinchStrength_4;
	Posef_t51A2C10B4094B44A8D3C1913292B839172887B61 ___PointerPose_5;
	float ___HandScale_6;
	int32_t ___HandConfidence_7;
	int32_t* ___FingerConfidences_8;
	double ___RequestedTimeStamp_9;
	double ___SampleTimeStamp_10;
};

// UnityEngine.Events.UnityAction`1<BoardData>
struct UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ConnectControl
struct ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ConnectControl::connectID
	String_t* ___connectID_4;
	// System.Boolean ConnectControl::connectFlag
	bool ___connectFlag_5;
	// Unity.RenderStreaming.SignalingManager ConnectControl::objectSignalingManager
	SignalingManager_t4DA53443F3FB704E5CC6D4E10B2FE735EB21D24B* ___objectSignalingManager_6;
	// Unity.RenderStreaming.SingleConnection ConnectControl::objectSingleConnection
	SingleConnection_t0B024812B6A9F9EBFF02940D965FA1D9219FD9DE* ___objectSingleConnection_7;
	// Unity.RenderStreaming.Samples.RenderStreamingSettings ConnectControl::settings
	RenderStreamingSettings_t7D97CFB1369014FCA01F251DB78FBD2BFE73DF4C* ___settings_8;
};

// ConnectReceiveHandle
struct ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ConnectReceiveHandle::objectRenderStreaming
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectRenderStreaming_4;
	// UnityEngine.GameObject ConnectReceiveHandle::objectWhiteboard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectWhiteboard_5;
	// Whiteboard ConnectReceiveHandle::whiteboard
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* ___whiteboard_6;
	// System.Collections.Generic.Queue`1<BoardData> ConnectReceiveHandle::boardDataBuffer
	Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* ___boardDataBuffer_7;
	// System.Int64 ConnectReceiveHandle::bufferOutTime
	int64_t ___bufferOutTime_8;
	// System.Int64 ConnectReceiveHandle::localDelayTime
	int64_t ___localDelayTime_10;
	// System.Int32 ConnectReceiveHandle::lagStartFrame
	int32_t ___lagStartFrame_11;
	// System.Int32 ConnectReceiveHandle::lagFrame
	int32_t ___lagFrame_12;
	// System.Int32 ConnectReceiveHandle::lagStartCount
	int32_t ___lagStartCount_13;
	// System.Int32 ConnectReceiveHandle::lagCount
	int32_t ___lagCount_14;
};

// Unity.RenderStreaming.DataChannelBase
struct DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Unity.RenderStreaming.DataChannelBase::local
	bool ___local_4;
	// System.String Unity.RenderStreaming.DataChannelBase::label
	String_t* ___label_5;
	// Unity.WebRTC.RTCDataChannel Unity.RenderStreaming.DataChannelBase::<Channel>k__BackingField
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ___U3CChannelU3Ek__BackingField_6;
	// Unity.RenderStreaming.OnStartedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStartedChannel>k__BackingField
	OnStartedChannelHandler_tE4A1F5D50F9CBC66D7A5E460810825D1F6476296* ___U3COnStartedChannelU3Ek__BackingField_7;
	// Unity.RenderStreaming.OnStoppedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStoppedChannel>k__BackingField
	OnStoppedChannelHandler_t18F205BD3FF9CCF8DE16376FDD165B44FA19D8CC* ___U3COnStoppedChannelU3Ek__BackingField_8;
};

// OVRHand
struct OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRHand/Hand OVRHand::HandType
	int32_t ___HandType_4;
	// UnityEngine.Transform OVRHand::_pointerPoseRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____pointerPoseRoot_5;
	// OVRInput/InputDeviceShowState OVRHand::m_showState
	int32_t ___m_showState_6;
	// UnityEngine.GameObject OVRHand::_pointerPoseGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____pointerPoseGO_7;
	// OVRPlugin/HandState OVRHand::_handState
	HandState_tBF8DBB131D6A5677B70CACE42D72161A261AA552 ____handState_8;
	// System.Boolean OVRHand::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_9;
	// System.Boolean OVRHand::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_10;
	// System.Boolean OVRHand::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_11;
	// System.Boolean OVRHand::<IsSystemGestureInProgress>k__BackingField
	bool ___U3CIsSystemGestureInProgressU3Ek__BackingField_12;
	// System.Boolean OVRHand::<IsPointerPoseValid>k__BackingField
	bool ___U3CIsPointerPoseValidU3Ek__BackingField_13;
	// UnityEngine.Transform OVRHand::<PointerPose>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CPointerPoseU3Ek__BackingField_14;
	// System.Single OVRHand::<HandScale>k__BackingField
	float ___U3CHandScaleU3Ek__BackingField_15;
	// OVRHand/TrackingConfidence OVRHand::<HandConfidence>k__BackingField
	int32_t ___U3CHandConfidenceU3Ek__BackingField_16;
	// System.Boolean OVRHand::<IsDominantHand>k__BackingField
	bool ___U3CIsDominantHandU3Ek__BackingField_17;
};

// OVRSkeleton
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// OVRSkeleton/SkeletonType OVRSkeleton::_skeletonType
	int32_t ____skeletonType_4;
	// OVRSkeleton/IOVRSkeletonDataProvider OVRSkeleton::_dataProvider
	RuntimeObject* ____dataProvider_5;
	// System.Boolean OVRSkeleton::_updateRootPose
	bool ____updateRootPose_6;
	// System.Boolean OVRSkeleton::_updateRootScale
	bool ____updateRootScale_7;
	// System.Boolean OVRSkeleton::_enablePhysicsCapsules
	bool ____enablePhysicsCapsules_8;
	// System.Boolean OVRSkeleton::_applyBoneTranslations
	bool ____applyBoneTranslations_9;
	// UnityEngine.GameObject OVRSkeleton::_bonesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bonesGO_10;
	// UnityEngine.GameObject OVRSkeleton::_bindPosesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bindPosesGO_11;
	// UnityEngine.GameObject OVRSkeleton::_capsulesGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____capsulesGO_12;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bones
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bones_13;
	// System.Collections.Generic.List`1<OVRBone> OVRSkeleton::_bindPoses
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bindPoses_14;
	// System.Collections.Generic.List`1<OVRBoneCapsule> OVRSkeleton::_capsules
	List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA* ____capsules_15;
	// OVRPlugin/Skeleton2 OVRSkeleton::_skeleton
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ____skeleton_16;
	// UnityEngine.Quaternion OVRSkeleton::wristFixupRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___wristFixupRotation_17;
	// System.Boolean OVRSkeleton::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_18;
	// System.Boolean OVRSkeleton::<IsDataValid>k__BackingField
	bool ___U3CIsDataValidU3Ek__BackingField_19;
	// System.Boolean OVRSkeleton::<IsDataHighConfidence>k__BackingField
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField_20;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_21;
	// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::<BindPoses>k__BackingField
	RuntimeObject* ___U3CBindPosesU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<OVRBoneCapsule> OVRSkeleton::<Capsules>k__BackingField
	RuntimeObject* ___U3CCapsulesU3Ek__BackingField_23;
	// System.Int32 OVRSkeleton::<SkeletonChangedCount>k__BackingField
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField_24;
};

// Whiteboard
struct Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Whiteboard::objectRenderSreaming
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectRenderSreaming_4;
	// UnityEngine.GameObject Whiteboard::objectHandPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectHandPrefab_5;
	// WhiteboardPen Whiteboard::whiteboardPen
	WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* ___whiteboardPen_6;
	// ConnectControl Whiteboard::connectControl
	ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* ___connectControl_7;
	// ConnectSend Whiteboard::connectSend
	ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* ___connectSend_8;
	// System.Int32 Whiteboard::texturesSizeHorizontal
	int32_t ___texturesSizeHorizontal_9;
	// System.Int32 Whiteboard::texturesSizeVertical
	int32_t ___texturesSizeVertical_10;
	// UnityEngine.Texture2D Whiteboard::texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture_11;
	// System.Boolean Whiteboard::touching
	bool ___touching_12;
	// System.Boolean Whiteboard::touchingLast
	bool ___touchingLast_13;
	// System.Boolean Whiteboard::remoteTouching
	bool ___remoteTouching_14;
	// System.Boolean Whiteboard::remoteTouchingLast
	bool ___remoteTouchingLast_15;
	// System.Single Whiteboard::posX
	float ___posX_16;
	// System.Single Whiteboard::posY
	float ___posY_17;
	// System.Int32 Whiteboard::lastX
	int32_t ___lastX_18;
	// System.Int32 Whiteboard::lastY
	int32_t ___lastY_19;
	// System.Int32 Whiteboard::remoteLastX
	int32_t ___remoteLastX_20;
	// System.Int32 Whiteboard::remoteLastY
	int32_t ___remoteLastY_21;
};

// WhiteboardPen
struct WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject WhiteboardPen::objectWhiteboard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectWhiteboard_4;
	// Whiteboard WhiteboardPen::whiteboard
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* ___whiteboard_5;
	// UnityEngine.RaycastHit WhiteboardPen::touch
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___touch_6;
	// OVRHand WhiteboardPen::m_hand
	OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* ___m_hand_7;
	// OVRSkeleton WhiteboardPen::m_skeleton
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___m_skeleton_8;
	// UnityEngine.Transform WhiteboardPen::indexTip
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indexTip_9;
	// UnityEngine.Transform WhiteboardPen::thumbTip
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thumbTip_10;
	// UnityEngine.Transform WhiteboardPen::indexDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indexDistal_11;
	// UnityEngine.Transform WhiteboardPen::thumbDistal
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___thumbDistal_12;
	// UnityEngine.Vector3 WhiteboardPen::indexoriginPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___indexoriginPoint_13;
	// UnityEngine.Vector3 WhiteboardPen::indextargetPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___indextargetPoint_14;
	// UnityEngine.Vector3 WhiteboardPen::thumboriginPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___thumboriginPoint_15;
	// UnityEngine.Vector3 WhiteboardPen::thumbtargetPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___thumbtargetPoint_16;
	// UnityEngine.Color WhiteboardPen::penColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___penColor_17;
	// UnityEngine.Color WhiteboardPen::drawColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___drawColor_18;
	// System.Int32 WhiteboardPen::penSize
	int32_t ___penSize_19;
	// System.Int32 WhiteboardPen::drawSize
	int32_t ___drawSize_20;
};

// ConnectReceive
struct ConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4  : public DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4
{
	// BoardChangeEvent ConnectReceive::boardChangeEvent
	BoardChangeEvent_t9373C8ED583695E148CB5CFA25AE32016AF40FD8* ___boardChangeEvent_9;
};

// ConnectSend
struct ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B  : public DataChannelBase_t68CBB78FBA410434BFDA5AF5A2C5DECA626415A4
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<BoardData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m16ADF1ACDD6ADEF58D28703D7071357CFC787A24_gshared (UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<BoardData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45_gshared (UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D* __this, UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<BoardData>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_gshared_inline (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<BoardData>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoardData_tD7A32E83E2390379148868B8C745E481E83D575C Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B_gshared (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<BoardData>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoardData_tD7A32E83E2390379148868B8C745E481E83D575C Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2_gshared (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<BoardData>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5_gshared (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, BoardData_tD7A32E83E2390379148868B8C745E481E83D575C ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<BoardData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7_gshared (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// T UnityEngine.GameObject::GetComponent<ConnectReceive>()
inline ConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4* GameObject_GetComponent_TisConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4_m98CC1B567504A23B5D2214FE0A162CDF9E417612 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<BoardData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m16ADF1ACDD6ADEF58D28703D7071357CFC787A24 (UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m16ADF1ACDD6ADEF58D28703D7071357CFC787A24_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<BoardData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45 (UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D* __this, UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tCF1E9D6E1A6D425EA9D79F35159CC65D9D368D5D*, UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585*, const RuntimeMethod*))UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45_gshared)(__this, ___call0, method);
}
// T UnityEngine.GameObject::GetComponent<Whiteboard>()
inline Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int64 GetCurrentTime::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GetCurrentTime_Get_mAE60CE373D6BDBD367062BC27D76994EBF11A304 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<BoardData>::get_Count()
inline int32_t Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_inline (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*, const RuntimeMethod*))Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<BoardData>::Peek()
inline BoardData_tD7A32E83E2390379148868B8C745E481E83D575C Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method)
{
	return ((  BoardData_tD7A32E83E2390379148868B8C745E481E83D575C (*) (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*, const RuntimeMethod*))Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B_gshared)(__this, method);
}
// System.Void Whiteboard::ReceiveDraw(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_ReceiveDraw_mC10836698D07B314C0A682F952A1A2DB2E60CBED (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___type0, int32_t ___x1, int32_t ___y2, int32_t ___color3, int32_t ___drawSize4, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<BoardData>::Dequeue()
inline BoardData_tD7A32E83E2390379148868B8C745E481E83D575C Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2 (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method)
{
	return ((  BoardData_tD7A32E83E2390379148868B8C745E481E83D575C (*) (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*, const RuntimeMethod*))Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2_gshared)(__this, method);
}
// System.Void Whiteboard::BoardClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_BoardClear_m515A7D8B4276CE5AB43E1B89CBCAFB1D7CE4CCD0 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<BoardData>::Enqueue(T)
inline void Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5 (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, BoardData_tD7A32E83E2390379148868B8C745E481E83D575C ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*, BoardData_tD7A32E83E2390379148868B8C745E481E83D575C, const RuntimeMethod*))Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<BoardData>::.ctor()
inline void Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7 (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*, const RuntimeMethod*))Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void BoardData::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardData__ctor_m99F3A0294396B8E818D95DDD2AAFCF4344026ED8 (BoardData_tD7A32E83E2390379148868B8C745E481E83D575C* __this, int32_t ___type0, int32_t ___x1, int32_t ___y2, int32_t ___color3, int32_t ___drawSize4, int64_t ___time5, const RuntimeMethod* method) ;
// System.Void ConnectSend::SendData(BoardData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectSend_SendData_mA8D5C7D039F3B33548EF9097C682AEFC980E54B3 (ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* __this, BoardData_tD7A32E83E2390379148868B8C745E481E83D575C ___boardData0, const RuntimeMethod* method) ;
// UnityEngine.Color Whiteboard::NumToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Whiteboard_NumToColor_m97E7ED4D767A37C785F8E8B619AB4A6B694C9735 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___color0, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Texture2DExtension::DrawCircle(UnityEngine.Texture2D,UnityEngine.Color,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___x2, int32_t ___y3, int32_t ___radius4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ConnectControl>()
inline ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* GameObject_GetComponent_TisConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B_m00CD5637620C0B8C3BE8F9B5351622235CE2DA73 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ConnectSend>()
inline ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* GameObject_GetComponent_TisConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B_m6F287C03E97CAF9CBC16464DAEE8DE9F07829EB9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<WhiteboardPen>()
inline WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* GameObject_GetComponent_TisWhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D_mB1F2B88E40B3579F5AA508998D3551E24C27CC88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 Whiteboard::ColorToNum(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Whiteboard_ColorToNum_mC3A5E4C4F7D5C012887738B8632C8B6E71DE5D7B (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void Whiteboard::RemoteDraw(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_RemoteDraw_m8AA6EF09D8B52ECB5CB2CE1A6BF94D9149F6ABB8 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___type0, int32_t ___x1, int32_t ___y2, int32_t ___color3, int32_t ___drawSize4, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<OVRHand>()
inline OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<OVRSkeleton>()
inline OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* Component_GetComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m9CC060875120CC11A6356947C8A24DA823AEBD0D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean OVRSkeleton::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<OVRBone> OVRSkeleton::get_Bones()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform OVRBone::get_Transform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void Whiteboard::SetTouchPosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_SetTouchPosition_mCB3C49FD413C191417B3BF7ABA9D272DFEF784BC (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, float ___posX0, float ___posY1, const RuntimeMethod* method) ;
// System.Void Whiteboard::ToggleTouch(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A_inline (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, bool ___touching0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void ConnectReceiveHandle::LoaclDelayTimeSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_LoaclDelayTimeSet_mB3329D3803923EDD599A4AA07A58FFD5340F4BE3 (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, int32_t ___localDelayTime0, const RuntimeMethod* method) 
{
	{
		// this.localDelayTime = localDelayTime;
		int32_t L_0 = ___localDelayTime0;
		__this->___localDelayTime_10 = ((int64_t)L_0);
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::LocalLagStartFrameSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_LocalLagStartFrameSet_m9DE186A0E442B138725E696BE0058308D5397DFF (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, int32_t ___lagStartFrame0, const RuntimeMethod* method) 
{
	{
		// this.lagStartFrame = lagStartFrame;
		int32_t L_0 = ___lagStartFrame0;
		__this->___lagStartFrame_11 = L_0;
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::LocalLagFrameSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_LocalLagFrameSet_m2CE60A36481826A5C6B6738870B1F563AA7499D4 (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, int32_t ___lagFrame0, const RuntimeMethod* method) 
{
	{
		// this.lagFrame = lagFrame;
		int32_t L_0 = ___lagFrame0;
		__this->___lagFrame_12 = L_0;
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_Start_mCE6A6EA55012941187F28EBDB9DEAAF6A3B7C8DE (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectReceiveHandle_ReceiveData_m302C92BF90715E0411A0BBE5704015E9007C9970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4_m98CC1B567504A23B5D2214FE0A162CDF9E417612_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// var connectReceive = objectRenderStreaming.GetComponent<ConnectReceive>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectRenderStreaming_4;
		NullCheck(L_0);
		ConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4* L_1;
		L_1 = GameObject_GetComponent_TisConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4_m98CC1B567504A23B5D2214FE0A162CDF9E417612(L_0, GameObject_GetComponent_TisConnectReceive_t386B1303D0ABAAC10BCD1914093E8295A1503EB4_m98CC1B567504A23B5D2214FE0A162CDF9E417612_RuntimeMethod_var);
		// connectReceive.boardChangeEvent.AddListener(ReceiveData);
		NullCheck(L_1);
		BoardChangeEvent_t9373C8ED583695E148CB5CFA25AE32016AF40FD8* L_2 = L_1->___boardChangeEvent_9;
		UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585* L_3 = (UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585*)il2cpp_codegen_object_new(UnityAction_1_tC89170007EAAF4DCB9EA07B8B6DE30FE0CE9A585_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m16ADF1ACDD6ADEF58D28703D7071357CFC787A24(L_3, __this, (intptr_t)((void*)ConnectReceiveHandle_ReceiveData_m302C92BF90715E0411A0BBE5704015E9007C9970_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45(L_2, L_3, UnityEvent_1_AddListener_mBAB0A2A8C3FE54F200A4D4C7A0F749B73A97CC45_RuntimeMethod_var);
		// whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___objectWhiteboard_5;
		NullCheck(L_4);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_5;
		L_5 = GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6(L_4, GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6_RuntimeMethod_var);
		__this->___whiteboard_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___whiteboard_6), (void*)L_5);
		// long timeNow = GetCurrentTime.Get();
		int64_t L_6;
		L_6 = GetCurrentTime_Get_mAE60CE373D6BDBD367062BC27D76994EBF11A304(NULL);
		V_0 = L_6;
		// bufferOutTime = timeNow;
		int64_t L_7 = V_0;
		__this->___bufferOutTime_8 = L_7;
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_Update_mA1F6CF6D4F6EE95FAA630B7706FA7A5DB28AB426 (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	BoardData_tD7A32E83E2390379148868B8C745E481E83D575C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// long timeNow = GetCurrentTime.Get();
		int64_t L_0;
		L_0 = GetCurrentTime_Get_mAE60CE373D6BDBD367062BC27D76994EBF11A304(NULL);
		V_0 = L_0;
		// if (timeNow - bufferOutTime < bufferDeltaTime)
		int64_t L_1 = V_0;
		int64_t L_2 = __this->___bufferOutTime_8;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int64_t)((int64_t)((int32_t)16)))))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// bufferOutTime = timeNow;
		int64_t L_3 = V_0;
		__this->___bufferOutTime_8 = L_3;
		// if (boardDataBuffer.Count > 0)
		Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* L_4 = __this->___boardDataBuffer_7;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_inline(L_4, Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_00d8;
		}
	}
	{
		// var boardData = boardDataBuffer.Peek();
		Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* L_6 = __this->___boardDataBuffer_7;
		NullCheck(L_6);
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_7;
		L_7 = Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B(L_6, Queue_1_Peek_m7AC1EB78ED2CF170AC9F0BFC4075F9DB4463860B_RuntimeMethod_var);
		V_1 = L_7;
		// if (timeNow - boardData.time >= localDelayTime)
		int64_t L_8 = V_0;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_9 = V_1;
		int64_t L_10 = L_9.___time_5;
		int64_t L_11 = __this->___localDelayTime_10;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_8, L_10))) < ((int64_t)L_11)))
		{
			goto IL_00d8;
		}
	}
	{
		// if (lagStartFrame == 0|| lagFrame ==0 || lagStartCount < lagStartFrame)
		int32_t L_12 = __this->___lagStartFrame_11;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_13 = __this->___lagFrame_12;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_14 = __this->___lagStartCount_13;
		int32_t L_15 = __this->___lagStartFrame_11;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_00ad;
		}
	}

IL_0069:
	{
		// whiteboard.ReceiveDraw(boardData.type, boardData.x, boardData.y, boardData.color, boardData.drawSize);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_16 = __this->___whiteboard_6;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_17 = V_1;
		int32_t L_18 = L_17.___type_0;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_19 = V_1;
		int32_t L_20 = L_19.___x_1;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_21 = V_1;
		int32_t L_22 = L_21.___y_2;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_23 = V_1;
		int32_t L_24 = L_23.___color_3;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_25 = V_1;
		int32_t L_26 = L_25.___drawSize_4;
		NullCheck(L_16);
		Whiteboard_ReceiveDraw_mC10836698D07B314C0A682F952A1A2DB2E60CBED(L_16, L_18, L_20, L_22, L_24, L_26, NULL);
		// boardDataBuffer.Dequeue();
		Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* L_27 = __this->___boardDataBuffer_7;
		NullCheck(L_27);
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_28;
		L_28 = Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2(L_27, Queue_1_Dequeue_mF0D117EDF13DBA9041CB72F07FEF6E0F648D25C2_RuntimeMethod_var);
		// lagStartCount++;
		int32_t L_29 = __this->___lagStartCount_13;
		__this->___lagStartCount_13 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		return;
	}

IL_00ad:
	{
		// else if(lagCount<lagFrame)
		int32_t L_30 = __this->___lagCount_14;
		int32_t L_31 = __this->___lagFrame_12;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_00ca;
		}
	}
	{
		// lagCount++;
		int32_t L_32 = __this->___lagCount_14;
		__this->___lagCount_14 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		return;
	}

IL_00ca:
	{
		// lagStartCount = 0;
		__this->___lagStartCount_13 = 0;
		// lagCount = 0;
		__this->___lagCount_14 = 0;
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::ReceiveData(BoardData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle_ReceiveData_m302C92BF90715E0411A0BBE5704015E9007C9970 (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, BoardData_tD7A32E83E2390379148868B8C745E481E83D575C ___boardData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		// long timeNow = GetCurrentTime.Get();
		int64_t L_0;
		L_0 = GetCurrentTime_Get_mAE60CE373D6BDBD367062BC27D76994EBF11A304(NULL);
		V_0 = L_0;
		// if (boardData.type == -1)
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_1 = ___boardData0;
		int32_t L_2 = L_1.___type_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_001b;
		}
	}
	{
		// whiteboard.BoardClear();
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_3 = __this->___whiteboard_6;
		NullCheck(L_3);
		Whiteboard_BoardClear_m515A7D8B4276CE5AB43E1B89CBCAFB1D7CE4CCD0(L_3, NULL);
		return;
	}

IL_001b:
	{
		// boardData.time = timeNow;
		int64_t L_4 = V_0;
		(&___boardData0)->___time_5 = L_4;
		// boardDataBuffer.Enqueue(boardData);
		Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* L_5 = __this->___boardDataBuffer_7;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_6 = ___boardData0;
		NullCheck(L_5);
		Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5(L_5, L_6, Queue_1_Enqueue_mEAF7C9D28E0E95E8C0205C97C83FF66CC84217F5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ConnectReceiveHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectReceiveHandle__ctor_mFAEAE0BBBB23926E0C65F488BA006E39EFC661CD (ConnectReceiveHandle_tCDF050151C7A39FC0D8600857E796E65D9EE7685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<BoardData> boardDataBuffer = new Queue<BoardData>();
		Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* L_0 = (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6*)il2cpp_codegen_object_new(Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7(L_0, Queue_1__ctor_m18DEA1574995E5890B60BF1A063510D6C50EDED7_RuntimeMethod_var);
		__this->___boardDataBuffer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boardDataBuffer_7), (void*)L_0);
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
// UnityEngine.Texture2D Texture2DExtension::DrawCircle(UnityEngine.Texture2D,UnityEngine.Color,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___tex0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, int32_t ___x2, int32_t ___y3, int32_t ___radius4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// float rSquared = radius * radius;
		int32_t L_0 = ___radius4;
		int32_t L_1 = ___radius4;
		V_0 = ((float)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		// for (int u = x - radius; u < x + radius + 1; u++)
		int32_t L_2 = ___x2;
		int32_t L_3 = ___radius4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		goto IL_0042;
	}

IL_000e:
	{
		// for (int v = y - radius; v < y + radius + 1; v++)
		int32_t L_4 = ___y3;
		int32_t L_5 = ___radius4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		goto IL_0035;
	}

IL_0015:
	{
		// if ((x - u) * (x - u) + (y - v) * (y - v) < rSquared)
		int32_t L_6 = ___x2;
		int32_t L_7 = V_1;
		int32_t L_8 = ___x2;
		int32_t L_9 = V_1;
		int32_t L_10 = ___y3;
		int32_t L_11 = V_2;
		int32_t L_12 = ___y3;
		int32_t L_13 = V_2;
		float L_14 = V_0;
		if ((!(((float)((float)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_6, L_7)), ((int32_t)il2cpp_codegen_subtract(L_8, L_9)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)))))))) < ((float)L_14))))
		{
			goto IL_0031;
		}
	}
	{
		// tex.SetPixel(u, v, color);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___tex0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___color1;
		NullCheck(L_15);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_15, L_16, L_17, L_18, NULL);
	}

IL_0031:
	{
		// for (int v = y - radius; v < y + radius + 1; v++)
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0035:
	{
		// for (int v = y - radius; v < y + radius + 1; v++)
		int32_t L_20 = V_2;
		int32_t L_21 = ___y3;
		int32_t L_22 = ___radius4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_21, L_22)), 1)))))
		{
			goto IL_0015;
		}
	}
	{
		// for (int u = x - radius; u < x + radius + 1; u++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0042:
	{
		// for (int u = x - radius; u < x + radius + 1; u++)
		int32_t L_24 = V_1;
		int32_t L_25 = ___x2;
		int32_t L_26 = ___radius4;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_25, L_26)), 1)))))
		{
			goto IL_000e;
		}
	}
	{
		// return tex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = ___tex0;
		return L_27;
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
// System.Int64 GetCurrentTime::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GetCurrentTime_Get_mAE60CE373D6BDBD367062BC27D76994EBF11A304 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((DateTime.Now.ToUniversalTime().Ticks - 621355968000000000) / 10000) + 2208988800000;//ms
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_0), NULL);
		V_0 = L_1;
		int64_t L_2;
		L_2 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		return ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)621355968000000000LL)))/((int64_t)((int32_t)10000)))), ((int64_t)2208988800000LL)));
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
// System.Void Whiteboard::BoardClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_BoardClear_m515A7D8B4276CE5AB43E1B89CBCAFB1D7CE4CCD0 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i <= texturesSizeHorizontal; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// for (int j = 0; j <= texturesSizeVertical; j++)
		V_1 = 0;
		goto IL_001e;
	}

IL_0008:
	{
		// texture.SetPixel(i, j, Color.white);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___texture_11;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_0);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_0, L_1, L_2, L_3, NULL);
		// for (int j = 0; j <= texturesSizeVertical; j++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001e:
	{
		// for (int j = 0; j <= texturesSizeVertical; j++)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->___texturesSizeVertical_10;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0008;
		}
	}
	{
		// for (int i = 0; i <= texturesSizeHorizontal; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002b:
	{
		// for (int i = 0; i <= texturesSizeHorizontal; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___texturesSizeHorizontal_9;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___texture_11;
		NullCheck(L_10);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_10, NULL);
		// }
		return;
	}
}
// UnityEngine.Color Whiteboard::NumToColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Whiteboard_NumToColor_m97E7ED4D767A37C785F8E8B619AB4A6B694C9735 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___color0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___color0;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, 1)))
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_0030;
			}
			case 4:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_001e:
	{
		// return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_1;
	}

IL_0024:
	{
		// return Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		return L_2;
	}

IL_002a:
	{
		// return Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		return L_3;
	}

IL_0030:
	{
		// return Color.blue;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		return L_4;
	}

IL_0036:
	{
		// return Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		return L_5;
	}

IL_003c:
	{
		// return Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		return L_6;
	}
}
// System.Int32 Whiteboard::ColorToNum(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Whiteboard_ColorToNum_mC3A5E4C4F7D5C012887738B8632C8B6E71DE5D7B (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	{
		// if (color == Color.black)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_000f:
	{
		// else if (color == Color.red)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		bool L_5;
		L_5 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return 2;
		return 2;
	}

IL_001e:
	{
		// else if (color == Color.green)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		bool L_8;
		L_8 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		// return 3;
		return 3;
	}

IL_002d:
	{
		// else if (color == Color.blue)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		bool L_11;
		L_11 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return 4;
		return 4;
	}

IL_003c:
	{
		// else if (color == Color.white)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		bool L_14;
		L_14 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		// return 5;
		return 5;
	}

IL_004b:
	{
		// else return 1;
		return 1;
	}
}
// System.Void Whiteboard::RemoteBoardClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_RemoteBoardClear_mBFC26DE8F8CEBC8FB81ED5B7E522F2105D516BDF (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) 
{
	{
		// if (connectControl.connectFlag)
		ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* L_0 = __this->___connectControl_7;
		NullCheck(L_0);
		bool L_1 = L_0->___connectFlag_5;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// connectSend.SendData(new BoardData(-1, 0, 0, 0, 0, 0));
		ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* L_2 = __this->___connectSend_8;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_3;
		memset((&L_3), 0, sizeof(L_3));
		BoardData__ctor_m99F3A0294396B8E818D95DDD2AAFCF4344026ED8((&L_3), (-1), 0, 0, 0, 0, ((int64_t)0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ConnectSend_SendData_mA8D5C7D039F3B33548EF9097C682AEFC980E54B3(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Whiteboard::RemoteDraw(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_RemoteDraw_m8AA6EF09D8B52ECB5CB2CE1A6BF94D9149F6ABB8 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___type0, int32_t ___x1, int32_t ___y2, int32_t ___color3, int32_t ___drawSize4, const RuntimeMethod* method) 
{
	{
		// if (connectControl.connectFlag)
		ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* L_0 = __this->___connectControl_7;
		NullCheck(L_0);
		bool L_1 = L_0->___connectFlag_5;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// connectSend.SendData(new BoardData(type, x, y, color, drawSize, 0));
		ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* L_2 = __this->___connectSend_8;
		int32_t L_3 = ___type0;
		int32_t L_4 = ___x1;
		int32_t L_5 = ___y2;
		int32_t L_6 = ___color3;
		int32_t L_7 = ___drawSize4;
		BoardData_tD7A32E83E2390379148868B8C745E481E83D575C L_8;
		memset((&L_8), 0, sizeof(L_8));
		BoardData__ctor_m99F3A0294396B8E818D95DDD2AAFCF4344026ED8((&L_8), L_3, L_4, L_5, L_6, L_7, ((int64_t)0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ConnectSend_SendData_mA8D5C7D039F3B33548EF9097C682AEFC980E54B3(L_2, L_8, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Whiteboard::ReceiveDraw(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_ReceiveDraw_mC10836698D07B314C0A682F952A1A2DB2E60CBED (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, int32_t ___type0, int32_t ___x1, int32_t ___y2, int32_t ___color3, int32_t ___drawSize4, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B2_0 = NULL;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B3_1 = NULL;
	{
		// Color drawColor = NumToColor(color);
		int32_t L_0 = ___color3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Whiteboard_NumToColor_m97E7ED4D767A37C785F8E8B619AB4A6B694C9735(__this, L_0, NULL);
		V_0 = L_1;
		// remoteTouching = type == 1 ? true : false;
		int32_t L_2 = ___type0;
		G_B1_0 = __this;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		NullCheck(G_B3_1);
		G_B3_1->___remoteTouching_14 = (bool)G_B3_0;
		// if (remoteTouchingLast)
		bool L_3 = __this->___remoteTouchingLast_15;
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		// texture.DrawCircle(drawColor, x, y, drawSize);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___texture_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		int32_t L_6 = ___x1;
		int32_t L_7 = ___y2;
		int32_t L_8 = ___drawSize4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7(L_4, L_5, L_6, L_7, L_8, NULL);
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		V_1 = (0.00999999978f);
		goto IL_0073;
	}

IL_0038:
	{
		// int lerpX = (int)Mathf.Lerp(remoteLastX, x, t);
		int32_t L_10 = __this->___remoteLastX_20;
		int32_t L_11 = ___x1;
		float L_12 = V_1;
		float L_13;
		L_13 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_10), ((float)L_11), L_12, NULL);
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(L_13);
		// int lerpY = (int)Mathf.Lerp(remoteLastY, y, t);
		int32_t L_14 = __this->___remoteLastY_21;
		int32_t L_15 = ___y2;
		float L_16 = V_1;
		float L_17;
		L_17 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_14), ((float)L_15), L_16, NULL);
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_17);
		// texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___texture_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = V_0;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		int32_t L_22 = ___drawSize4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_23;
		L_23 = Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7(L_18, L_19, L_20, L_21, L_22, NULL);
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		float L_24 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_24, (0.00999999978f)));
	}

IL_0073:
	{
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		float L_25 = V_1;
		if ((((float)L_25) < ((float)(1.0f))))
		{
			goto IL_0038;
		}
	}
	{
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = __this->___texture_11;
		NullCheck(L_26);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_26, NULL);
	}

IL_0086:
	{
		// remoteLastX = x;
		int32_t L_27 = ___x1;
		__this->___remoteLastX_20 = L_27;
		// remoteLastY = y;
		int32_t L_28 = ___y2;
		__this->___remoteLastY_21 = L_28;
		// remoteTouchingLast = remoteTouching;
		bool L_29 = __this->___remoteTouching_14;
		__this->___remoteTouchingLast_15 = L_29;
		// }
		return;
	}
}
// System.Void Whiteboard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_Start_m76F46C2A6B2D52FA9590833FC57EFBD6C2E023C7 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B_m00CD5637620C0B8C3BE8F9B5351622235CE2DA73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B_m6F287C03E97CAF9CBC16464DAEE8DE9F07829EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D_mB1F2B88E40B3579F5AA508998D3551E24C27CC88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// texturesSizeHorizontal = (int)(transform.localScale.x * WHITEBOARD_SCALE * TEXTURE_SCALE);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___texturesSizeHorizontal_9 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, (10.0f))), (1024.0f))));
		// texturesSizeVertical = (int)(transform.localScale.z * WHITEBOARD_SCALE * TEXTURE_SCALE);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___z_4;
		__this->___texturesSizeVertical_10 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, (10.0f))), (1024.0f))));
		// Renderer renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// texture = new Texture2D(texturesSizeHorizontal, texturesSizeVertical);
		int32_t L_7 = __this->___texturesSizeHorizontal_9;
		int32_t L_8 = __this->___texturesSizeVertical_10;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_9, L_7, L_8, NULL);
		__this->___texture_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texture_11), (void*)L_9);
		// renderer.material.mainTexture = texture;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___texture_11;
		NullCheck(L_10);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_10, L_11, NULL);
		// BoardClear();
		Whiteboard_BoardClear_m515A7D8B4276CE5AB43E1B89CBCAFB1D7CE4CCD0(__this, NULL);
		// connectControl = objectRenderSreaming.GetComponent<ConnectControl>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___objectRenderSreaming_4;
		NullCheck(L_12);
		ConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B* L_13;
		L_13 = GameObject_GetComponent_TisConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B_m00CD5637620C0B8C3BE8F9B5351622235CE2DA73(L_12, GameObject_GetComponent_TisConnectControl_t4C7B0C56C69FEC573002538345580B2FF6E94C7B_m00CD5637620C0B8C3BE8F9B5351622235CE2DA73_RuntimeMethod_var);
		__this->___connectControl_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectControl_7), (void*)L_13);
		// connectSend = objectRenderSreaming.GetComponent<ConnectSend>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___objectRenderSreaming_4;
		NullCheck(L_14);
		ConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B* L_15;
		L_15 = GameObject_GetComponent_TisConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B_m6F287C03E97CAF9CBC16464DAEE8DE9F07829EB9(L_14, GameObject_GetComponent_TisConnectSend_tFBF238E7756900C09D82D991A1DD6EC3C1E2DC6B_m6F287C03E97CAF9CBC16464DAEE8DE9F07829EB9_RuntimeMethod_var);
		__this->___connectSend_8 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectSend_8), (void*)L_15);
		// whiteboardPen = objectHandPrefab.GetComponent<WhiteboardPen>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___objectHandPrefab_5;
		NullCheck(L_16);
		WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* L_17;
		L_17 = GameObject_GetComponent_TisWhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D_mB1F2B88E40B3579F5AA508998D3551E24C27CC88(L_16, GameObject_GetComponent_TisWhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D_mB1F2B88E40B3579F5AA508998D3551E24C27CC88_RuntimeMethod_var);
		__this->___whiteboardPen_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___whiteboardPen_6), (void*)L_17);
		// }
		return;
	}
}
// System.Void Whiteboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_Update_mAA731AFC779A54CF9A0D84B9D4B3634948D0E604 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B6_0 = NULL;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B7_1 = NULL;
	{
		// int drawSize = whiteboardPen.drawSize;
		WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* L_0 = __this->___whiteboardPen_6;
		NullCheck(L_0);
		int32_t L_1 = L_0->___drawSize_20;
		V_0 = L_1;
		// Color drawColor = whiteboardPen.drawColor;
		WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* L_2 = __this->___whiteboardPen_6;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = L_2->___drawColor_18;
		V_1 = L_3;
		// int x = (int)(posX * texturesSizeHorizontal - (drawSize / 2));
		float L_4 = __this->___posX_16;
		int32_t L_5 = __this->___texturesSizeHorizontal_9;
		int32_t L_6 = V_0;
		V_2 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, ((float)L_5))), ((float)((int32_t)(L_6/2))))));
		// int y = (int)(posY * texturesSizeVertical - (drawSize / 2));
		float L_7 = __this->___posY_17;
		int32_t L_8 = __this->___texturesSizeVertical_10;
		int32_t L_9 = V_0;
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), ((float)((int32_t)(L_9/2))))));
		// if (touchingLast)
		bool L_10 = __this->___touchingLast_13;
		if (!L_10)
		{
			goto IL_00d8;
		}
	}
	{
		// texture.DrawCircle(drawColor, x, y, drawSize);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = __this->___texture_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		int32_t L_15 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16;
		L_16 = Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7(L_11, L_12, L_13, L_14, L_15, NULL);
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		V_4 = (0.00999999978f);
		goto IL_00a8;
	}

IL_0066:
	{
		// int lerpX = (int)Mathf.Lerp(lastX, x, t);
		int32_t L_17 = __this->___lastX_18;
		int32_t L_18 = V_2;
		float L_19 = V_4;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_17), ((float)L_18), L_19, NULL);
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(L_20);
		// int lerpY = (int)Mathf.Lerp(lastY, y, t);
		int32_t L_21 = __this->___lastY_19;
		int32_t L_22 = V_3;
		float L_23 = V_4;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(((float)L_21), ((float)L_22), L_23, NULL);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_24);
		// texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = __this->___texture_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_1;
		int32_t L_27 = V_5;
		int32_t L_28 = V_6;
		int32_t L_29 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_30;
		L_30 = Texture2DExtension_DrawCircle_mD26650BEA434BBB9BFB94B2F87C97FD34A9E5CD7(L_25, L_26, L_27, L_28, L_29, NULL);
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		float L_31 = V_4;
		V_4 = ((float)il2cpp_codegen_add(L_31, (0.00999999978f)));
	}

IL_00a8:
	{
		// for (float t = 0.01f; t < 1.00f; t += 0.01f)
		float L_32 = V_4;
		if ((((float)L_32) < ((float)(1.0f))))
		{
			goto IL_0066;
		}
	}
	{
		// texture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->___texture_11;
		NullCheck(L_33);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_33, NULL);
		// RemoteDraw(touching ? 1 : 0, x, y, ColorToNum(drawColor), drawSize);
		bool L_34 = __this->___touching_12;
		G_B5_0 = __this;
		if (L_34)
		{
			G_B6_0 = __this;
			goto IL_00c8;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_00c9:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = V_1;
		int32_t L_38;
		L_38 = Whiteboard_ColorToNum_mC3A5E4C4F7D5C012887738B8632C8B6E71DE5D7B(__this, L_37, NULL);
		int32_t L_39 = V_0;
		NullCheck(G_B7_1);
		Whiteboard_RemoteDraw_m8AA6EF09D8B52ECB5CB2CE1A6BF94D9149F6ABB8(G_B7_1, G_B7_0, L_35, L_36, L_38, L_39, NULL);
	}

IL_00d8:
	{
		// lastX = x;
		int32_t L_40 = V_2;
		__this->___lastX_18 = L_40;
		// lastY = y;
		int32_t L_41 = V_3;
		__this->___lastY_19 = L_41;
		// touchingLast = touching;
		bool L_42 = __this->___touching_12;
		__this->___touchingLast_13 = L_42;
		// }
		return;
	}
}
// System.Void Whiteboard::ToggleTouch(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, bool ___touching0, const RuntimeMethod* method) 
{
	{
		// this.touching = touching;
		bool L_0 = ___touching0;
		__this->___touching_12 = L_0;
		// }
		return;
	}
}
// System.Void Whiteboard::SetTouchPosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard_SetTouchPosition_mCB3C49FD413C191417B3BF7ABA9D272DFEF784BC (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, float ___posX0, float ___posY1, const RuntimeMethod* method) 
{
	{
		// this.posX = posX;
		float L_0 = ___posX0;
		__this->___posX_16 = L_0;
		// this.posY = posY;
		float L_1 = ___posY1;
		__this->___posY_17 = L_1;
		// }
		return;
	}
}
// System.Void Whiteboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Whiteboard__ctor_m88BF44232AF4317B5A2A2FF655C52B38F427ADB2 (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, const RuntimeMethod* method) 
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
// System.Void WhiteboardPen::PenColorSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteboardPen_PenColorSet_m38F2A53AB935E49997A6B01AC0A8EA22036C4D1E (WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* __this, int32_t ___color0, const RuntimeMethod* method) 
{
	{
		// penColor = whiteboard.NumToColor(color);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_0 = __this->___whiteboard_5;
		int32_t L_1 = ___color0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Whiteboard_NumToColor_m97E7ED4D767A37C785F8E8B619AB4A6B694C9735(L_0, L_1, NULL);
		__this->___penColor_17 = L_2;
		// }
		return;
	}
}
// System.Void WhiteboardPen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteboardPen_Awake_m6A38AAADE3794DBD26EB17A7A54CAD4FE4F93EAF (WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m9CC060875120CC11A6356947C8A24DA823AEBD0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_hand = GetComponent<OVRHand>();
		OVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509* L_0;
		L_0 = Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E(__this, Component_GetComponent_TisOVRHand_t2AB8992EC24012BFAB01C897FA6CF80B0A3AC509_m7244D9962AB4B1B68C93F7CB537957C01B59309E_RuntimeMethod_var);
		__this->___m_hand_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_hand_7), (void*)L_0);
		// m_skeleton = GetComponent<OVRSkeleton>();
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_1;
		L_1 = Component_GetComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m9CC060875120CC11A6356947C8A24DA823AEBD0D(__this, Component_GetComponent_TisOVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374_m9CC060875120CC11A6356947C8A24DA823AEBD0D_RuntimeMethod_var);
		__this->___m_skeleton_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_skeleton_8), (void*)L_1);
		// whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___objectWhiteboard_4;
		NullCheck(L_2);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_3;
		L_3 = GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6(L_2, GameObject_GetComponent_TisWhiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1_mF9BE55ACD046EF30DDD69BDADC956803BAD965A6_RuntimeMethod_var);
		__this->___whiteboard_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___whiteboard_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void WhiteboardPen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteboardPen_Update_mDED135FE4CBD8F4715E5B49D9F58FD54B41A1FF5 (WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B12_0 = NULL;
	Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* G_B11_0 = NULL;
	{
		// if (indexTip == null && m_skeleton.IsInitialized)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___indexTip_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_2 = __this->___m_skeleton_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_008d;
		}
	}
	{
		// indexTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_IndexTip].Transform;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_4 = __this->___m_skeleton_8;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_4, NULL);
		NullCheck(L_5);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_6;
		L_6 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_5, ((int32_t)20));
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_6, NULL);
		__this->___indexTip_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexTip_9), (void*)L_7);
		// indexDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Index2].Transform;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_8 = __this->___m_skeleton_8;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_8, NULL);
		NullCheck(L_9);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_10;
		L_10 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_9, 7);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_10, NULL);
		__this->___indexDistal_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexDistal_11), (void*)L_11);
		// thumbTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_ThumbTip].Transform;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_12 = __this->___m_skeleton_8;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_12, NULL);
		NullCheck(L_13);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_14;
		L_14 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_13, ((int32_t)19));
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_14, NULL);
		__this->___thumbTip_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbTip_10), (void*)L_15);
		// thumbDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Thumb2].Transform;
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_16 = __this->___m_skeleton_8;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_16, NULL);
		NullCheck(L_17);
		OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_18;
		L_18 = InterfaceFuncInvoker1< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<OVRBone>::get_Item(System.Int32) */, IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC_il2cpp_TypeInfo_var, L_17, 4);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_18, NULL);
		__this->___thumbDistal_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thumbDistal_12), (void*)L_19);
	}

IL_008d:
	{
		// if (!indexTip || !thumbTip) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___indexTip_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_20, NULL);
		if (!L_21)
		{
			goto IL_00a7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___thumbTip_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_22, NULL);
		if (L_23)
		{
			goto IL_00a8;
		}
	}

IL_00a7:
	{
		// if (!indexTip || !thumbTip) return;
		return;
	}

IL_00a8:
	{
		// indexoriginPoint = indexDistal.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___indexDistal_11;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		__this->___indexoriginPoint_13 = L_25;
		// indextargetPoint = indexTip.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___indexTip_9;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		__this->___indextargetPoint_14 = L_27;
		// thumboriginPoint = thumbDistal.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___thumbDistal_12;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		__this->___thumboriginPoint_15 = L_29;
		// thumbtargetPoint = thumbTip.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = __this->___thumbTip_10;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		__this->___thumbtargetPoint_16 = L_31;
		// Vector3 indexdirection = Vector3.Normalize(indextargetPoint - indexoriginPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___indextargetPoint_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___indexoriginPoint_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_34, NULL);
		V_0 = L_35;
		// Vector3 thumbdirection = Vector3.Normalize(thumbtargetPoint - thumboriginPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___thumbtargetPoint_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___thumboriginPoint_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_38, NULL);
		V_1 = L_39;
		// float indexdistance = Vector3.Distance(indexoriginPoint, indextargetPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___indexoriginPoint_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___indextargetPoint_14;
		float L_42;
		L_42 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_40, L_41, NULL);
		V_2 = L_42;
		// float thumbdistance = Vector3.Distance(thumboriginPoint, thumbtargetPoint);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = __this->___thumboriginPoint_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->___thumbtargetPoint_16;
		float L_45;
		L_45 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_43, L_44, NULL);
		V_3 = L_45;
		// if (Physics.Raycast(indexoriginPoint, indexdirection, out touch, indexdistance, 1 << WHITEBOARD_LAYER))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___indexoriginPoint_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_48 = (&__this->___touch_6);
		float L_49 = V_2;
		bool L_50;
		L_50 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_46, L_47, L_48, L_49, ((int32_t)1024), NULL);
		if (!L_50)
		{
			goto IL_01a8;
		}
	}
	{
		// drawColor = penColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = __this->___penColor_17;
		__this->___drawColor_18 = L_51;
		// drawSize = penSize;
		int32_t L_52 = __this->___penSize_19;
		__this->___drawSize_20 = L_52;
		// whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_53 = __this->___whiteboard_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_54 = (&__this->___touch_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D(L_54, NULL);
		float L_56 = L_55.___x_0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_57 = (&__this->___touch_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D(L_57, NULL);
		float L_59 = L_58.___y_1;
		NullCheck(L_53);
		Whiteboard_SetTouchPosition_mCB3C49FD413C191417B3BF7ABA9D272DFEF784BC(L_53, L_56, L_59, NULL);
		// whiteboard.ToggleTouch(true);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_60 = __this->___whiteboard_5;
		NullCheck(L_60);
		Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A_inline(L_60, (bool)1, NULL);
		return;
	}

IL_01a8:
	{
		// else if (Physics.Raycast(thumboriginPoint, thumbdirection, out touch, thumbdistance, 1 << WHITEBOARD_LAYER))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = __this->___thumboriginPoint_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_63 = (&__this->___touch_6);
		float L_64 = V_3;
		bool L_65;
		L_65 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_61, L_62, L_63, L_64, ((int32_t)1024), NULL);
		if (!L_65)
		{
			goto IL_020d;
		}
	}
	{
		// drawColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___drawColor_18 = L_66;
		// drawSize = 16;
		__this->___drawSize_20 = ((int32_t)16);
		// whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_67 = __this->___whiteboard_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_68 = (&__this->___touch_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D(L_68, NULL);
		float L_70 = L_69.___x_0;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_71 = (&__this->___touch_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D(L_71, NULL);
		float L_73 = L_72.___y_1;
		NullCheck(L_67);
		Whiteboard_SetTouchPosition_mCB3C49FD413C191417B3BF7ABA9D272DFEF784BC(L_67, L_70, L_73, NULL);
		// whiteboard.ToggleTouch(true);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_74 = __this->___whiteboard_5;
		NullCheck(L_74);
		Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A_inline(L_74, (bool)1, NULL);
		return;
	}

IL_020d:
	{
		// whiteboard?.ToggleTouch(false);
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_75 = __this->___whiteboard_5;
		Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* L_76 = L_75;
		G_B11_0 = L_76;
		if (L_76)
		{
			G_B12_0 = L_76;
			goto IL_0218;
		}
	}
	{
		return;
	}

IL_0218:
	{
		NullCheck(G_B12_0);
		Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A_inline(G_B12_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void WhiteboardPen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhiteboardPen__ctor_mA1CF0D32CCA088F3AAD39D443DB018530106434E (WhiteboardPen_tA6AB99C2E75B8C3AA95ECF77FD725FF64A07E30D* __this, const RuntimeMethod* method) 
{
	{
		// public Color penColor = Color.black, drawColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___penColor_17 = L_0;
		// public Color penColor = Color.black, drawColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___drawColor_18 = L_1;
		// public int penSize = 2, drawSize = 2;
		__this->___penSize_19 = 2;
		// public int penSize = 2, drawSize = 2;
		__this->___drawSize_20 = 2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		// public IList<OVRBone> Bones { get; protected set; }
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) 
{
	{
		// public Transform Transform { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTransformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Whiteboard_ToggleTouch_m88C26E9CEFFF12D806DA11988BA783BA58C2CF5A_inline (Whiteboard_tE50E8490C643D4271045F30D31F3976BB2B5AFD1* __this, bool ___touching0, const RuntimeMethod* method) 
{
	{
		// this.touching = touching;
		bool L_0 = ___touching0;
		__this->___touching_12 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m98201EDF7803BEA289DECD79BB98962CF9F7B83F_gshared_inline (Queue_1_t7E2756A7BB60D6D5298AC362AD5C50196A9D1DB6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
