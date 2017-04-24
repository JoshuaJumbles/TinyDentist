#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Transform
struct Transform_t3275118058;
// VectorLerper
struct VectorLerper_t3820925235;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerSpriteBehaviour
struct  PlayerSpriteBehaviour_t3013935373  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::airTimeSprites
	List_1_t3973682211 * ___airTimeSprites_2;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::airTimeDescentSprites
	List_1_t3973682211 * ___airTimeDescentSprites_3;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::rollSprites
	List_1_t3973682211 * ___rollSprites_4;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::idleStates
	List_1_t3973682211 * ___idleStates_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::walkSprites
	List_1_t3973682211 * ___walkSprites_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::grabOnSprites
	List_1_t3973682211 * ___grabOnSprites_7;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::carrySprites
	List_1_t3973682211 * ___carrySprites_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::carryJumpSprites
	List_1_t3973682211 * ___carryJumpSprites_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> PlayerSpriteBehaviour::yankingSprites
	List_1_t3973682211 * ___yankingSprites_10;
	// UnityEngine.Rigidbody2D PlayerSpriteBehaviour::rigidBody
	Rigidbody2D_t502193897 * ___rigidBody_11;
	// PlayerController PlayerSpriteBehaviour::playerController
	PlayerController_t4148409433 * ___playerController_12;
	// UnityEngine.SpriteRenderer PlayerSpriteBehaviour::bodyRenderer
	SpriteRenderer_t1209076198 * ___bodyRenderer_13;
	// UnityEngine.Transform PlayerSpriteBehaviour::graphicsRoot
	Transform_t3275118058 * ___graphicsRoot_14;
	// System.Single PlayerSpriteBehaviour::lastAirTimeTheta
	float ___lastAirTimeTheta_15;
	// System.Single PlayerSpriteBehaviour::airTurnSpeed
	float ___airTurnSpeed_16;
	// System.Single PlayerSpriteBehaviour::turnSpeedThreshold
	float ___turnSpeedThreshold_17;
	// System.Single PlayerSpriteBehaviour::hangingKickTimeTotal
	float ___hangingKickTimeTotal_18;
	// System.Single PlayerSpriteBehaviour::hangingKickTime
	float ___hangingKickTime_19;
	// System.Single PlayerSpriteBehaviour::deathRotationSpeedMin
	float ___deathRotationSpeedMin_20;
	// System.Single PlayerSpriteBehaviour::deathRotationSpeedMax
	float ___deathRotationSpeedMax_21;
	// System.Single PlayerSpriteBehaviour::deathRotationSpeed
	float ___deathRotationSpeed_22;
	// System.Single PlayerSpriteBehaviour::deathRotation
	float ___deathRotation_23;
	// System.Single PlayerSpriteBehaviour::targetDeathScale
	float ___targetDeathScale_24;
	// System.Single PlayerSpriteBehaviour::deathScaleLerpTime
	float ___deathScaleLerpTime_25;
	// VectorLerper PlayerSpriteBehaviour::deathScaleLerper
	VectorLerper_t3820925235 * ___deathScaleLerper_26;

public:
	inline static int32_t get_offset_of_airTimeSprites_2() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___airTimeSprites_2)); }
	inline List_1_t3973682211 * get_airTimeSprites_2() const { return ___airTimeSprites_2; }
	inline List_1_t3973682211 ** get_address_of_airTimeSprites_2() { return &___airTimeSprites_2; }
	inline void set_airTimeSprites_2(List_1_t3973682211 * value)
	{
		___airTimeSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___airTimeSprites_2, value);
	}

	inline static int32_t get_offset_of_airTimeDescentSprites_3() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___airTimeDescentSprites_3)); }
	inline List_1_t3973682211 * get_airTimeDescentSprites_3() const { return ___airTimeDescentSprites_3; }
	inline List_1_t3973682211 ** get_address_of_airTimeDescentSprites_3() { return &___airTimeDescentSprites_3; }
	inline void set_airTimeDescentSprites_3(List_1_t3973682211 * value)
	{
		___airTimeDescentSprites_3 = value;
		Il2CppCodeGenWriteBarrier(&___airTimeDescentSprites_3, value);
	}

	inline static int32_t get_offset_of_rollSprites_4() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___rollSprites_4)); }
	inline List_1_t3973682211 * get_rollSprites_4() const { return ___rollSprites_4; }
	inline List_1_t3973682211 ** get_address_of_rollSprites_4() { return &___rollSprites_4; }
	inline void set_rollSprites_4(List_1_t3973682211 * value)
	{
		___rollSprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___rollSprites_4, value);
	}

	inline static int32_t get_offset_of_idleStates_5() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___idleStates_5)); }
	inline List_1_t3973682211 * get_idleStates_5() const { return ___idleStates_5; }
	inline List_1_t3973682211 ** get_address_of_idleStates_5() { return &___idleStates_5; }
	inline void set_idleStates_5(List_1_t3973682211 * value)
	{
		___idleStates_5 = value;
		Il2CppCodeGenWriteBarrier(&___idleStates_5, value);
	}

	inline static int32_t get_offset_of_walkSprites_6() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___walkSprites_6)); }
	inline List_1_t3973682211 * get_walkSprites_6() const { return ___walkSprites_6; }
	inline List_1_t3973682211 ** get_address_of_walkSprites_6() { return &___walkSprites_6; }
	inline void set_walkSprites_6(List_1_t3973682211 * value)
	{
		___walkSprites_6 = value;
		Il2CppCodeGenWriteBarrier(&___walkSprites_6, value);
	}

	inline static int32_t get_offset_of_grabOnSprites_7() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___grabOnSprites_7)); }
	inline List_1_t3973682211 * get_grabOnSprites_7() const { return ___grabOnSprites_7; }
	inline List_1_t3973682211 ** get_address_of_grabOnSprites_7() { return &___grabOnSprites_7; }
	inline void set_grabOnSprites_7(List_1_t3973682211 * value)
	{
		___grabOnSprites_7 = value;
		Il2CppCodeGenWriteBarrier(&___grabOnSprites_7, value);
	}

	inline static int32_t get_offset_of_carrySprites_8() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___carrySprites_8)); }
	inline List_1_t3973682211 * get_carrySprites_8() const { return ___carrySprites_8; }
	inline List_1_t3973682211 ** get_address_of_carrySprites_8() { return &___carrySprites_8; }
	inline void set_carrySprites_8(List_1_t3973682211 * value)
	{
		___carrySprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___carrySprites_8, value);
	}

	inline static int32_t get_offset_of_carryJumpSprites_9() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___carryJumpSprites_9)); }
	inline List_1_t3973682211 * get_carryJumpSprites_9() const { return ___carryJumpSprites_9; }
	inline List_1_t3973682211 ** get_address_of_carryJumpSprites_9() { return &___carryJumpSprites_9; }
	inline void set_carryJumpSprites_9(List_1_t3973682211 * value)
	{
		___carryJumpSprites_9 = value;
		Il2CppCodeGenWriteBarrier(&___carryJumpSprites_9, value);
	}

	inline static int32_t get_offset_of_yankingSprites_10() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___yankingSprites_10)); }
	inline List_1_t3973682211 * get_yankingSprites_10() const { return ___yankingSprites_10; }
	inline List_1_t3973682211 ** get_address_of_yankingSprites_10() { return &___yankingSprites_10; }
	inline void set_yankingSprites_10(List_1_t3973682211 * value)
	{
		___yankingSprites_10 = value;
		Il2CppCodeGenWriteBarrier(&___yankingSprites_10, value);
	}

	inline static int32_t get_offset_of_rigidBody_11() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___rigidBody_11)); }
	inline Rigidbody2D_t502193897 * get_rigidBody_11() const { return ___rigidBody_11; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody_11() { return &___rigidBody_11; }
	inline void set_rigidBody_11(Rigidbody2D_t502193897 * value)
	{
		___rigidBody_11 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_11, value);
	}

	inline static int32_t get_offset_of_playerController_12() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___playerController_12)); }
	inline PlayerController_t4148409433 * get_playerController_12() const { return ___playerController_12; }
	inline PlayerController_t4148409433 ** get_address_of_playerController_12() { return &___playerController_12; }
	inline void set_playerController_12(PlayerController_t4148409433 * value)
	{
		___playerController_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_12, value);
	}

	inline static int32_t get_offset_of_bodyRenderer_13() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___bodyRenderer_13)); }
	inline SpriteRenderer_t1209076198 * get_bodyRenderer_13() const { return ___bodyRenderer_13; }
	inline SpriteRenderer_t1209076198 ** get_address_of_bodyRenderer_13() { return &___bodyRenderer_13; }
	inline void set_bodyRenderer_13(SpriteRenderer_t1209076198 * value)
	{
		___bodyRenderer_13 = value;
		Il2CppCodeGenWriteBarrier(&___bodyRenderer_13, value);
	}

	inline static int32_t get_offset_of_graphicsRoot_14() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___graphicsRoot_14)); }
	inline Transform_t3275118058 * get_graphicsRoot_14() const { return ___graphicsRoot_14; }
	inline Transform_t3275118058 ** get_address_of_graphicsRoot_14() { return &___graphicsRoot_14; }
	inline void set_graphicsRoot_14(Transform_t3275118058 * value)
	{
		___graphicsRoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___graphicsRoot_14, value);
	}

	inline static int32_t get_offset_of_lastAirTimeTheta_15() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___lastAirTimeTheta_15)); }
	inline float get_lastAirTimeTheta_15() const { return ___lastAirTimeTheta_15; }
	inline float* get_address_of_lastAirTimeTheta_15() { return &___lastAirTimeTheta_15; }
	inline void set_lastAirTimeTheta_15(float value)
	{
		___lastAirTimeTheta_15 = value;
	}

	inline static int32_t get_offset_of_airTurnSpeed_16() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___airTurnSpeed_16)); }
	inline float get_airTurnSpeed_16() const { return ___airTurnSpeed_16; }
	inline float* get_address_of_airTurnSpeed_16() { return &___airTurnSpeed_16; }
	inline void set_airTurnSpeed_16(float value)
	{
		___airTurnSpeed_16 = value;
	}

	inline static int32_t get_offset_of_turnSpeedThreshold_17() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___turnSpeedThreshold_17)); }
	inline float get_turnSpeedThreshold_17() const { return ___turnSpeedThreshold_17; }
	inline float* get_address_of_turnSpeedThreshold_17() { return &___turnSpeedThreshold_17; }
	inline void set_turnSpeedThreshold_17(float value)
	{
		___turnSpeedThreshold_17 = value;
	}

	inline static int32_t get_offset_of_hangingKickTimeTotal_18() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___hangingKickTimeTotal_18)); }
	inline float get_hangingKickTimeTotal_18() const { return ___hangingKickTimeTotal_18; }
	inline float* get_address_of_hangingKickTimeTotal_18() { return &___hangingKickTimeTotal_18; }
	inline void set_hangingKickTimeTotal_18(float value)
	{
		___hangingKickTimeTotal_18 = value;
	}

	inline static int32_t get_offset_of_hangingKickTime_19() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___hangingKickTime_19)); }
	inline float get_hangingKickTime_19() const { return ___hangingKickTime_19; }
	inline float* get_address_of_hangingKickTime_19() { return &___hangingKickTime_19; }
	inline void set_hangingKickTime_19(float value)
	{
		___hangingKickTime_19 = value;
	}

	inline static int32_t get_offset_of_deathRotationSpeedMin_20() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathRotationSpeedMin_20)); }
	inline float get_deathRotationSpeedMin_20() const { return ___deathRotationSpeedMin_20; }
	inline float* get_address_of_deathRotationSpeedMin_20() { return &___deathRotationSpeedMin_20; }
	inline void set_deathRotationSpeedMin_20(float value)
	{
		___deathRotationSpeedMin_20 = value;
	}

	inline static int32_t get_offset_of_deathRotationSpeedMax_21() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathRotationSpeedMax_21)); }
	inline float get_deathRotationSpeedMax_21() const { return ___deathRotationSpeedMax_21; }
	inline float* get_address_of_deathRotationSpeedMax_21() { return &___deathRotationSpeedMax_21; }
	inline void set_deathRotationSpeedMax_21(float value)
	{
		___deathRotationSpeedMax_21 = value;
	}

	inline static int32_t get_offset_of_deathRotationSpeed_22() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathRotationSpeed_22)); }
	inline float get_deathRotationSpeed_22() const { return ___deathRotationSpeed_22; }
	inline float* get_address_of_deathRotationSpeed_22() { return &___deathRotationSpeed_22; }
	inline void set_deathRotationSpeed_22(float value)
	{
		___deathRotationSpeed_22 = value;
	}

	inline static int32_t get_offset_of_deathRotation_23() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathRotation_23)); }
	inline float get_deathRotation_23() const { return ___deathRotation_23; }
	inline float* get_address_of_deathRotation_23() { return &___deathRotation_23; }
	inline void set_deathRotation_23(float value)
	{
		___deathRotation_23 = value;
	}

	inline static int32_t get_offset_of_targetDeathScale_24() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___targetDeathScale_24)); }
	inline float get_targetDeathScale_24() const { return ___targetDeathScale_24; }
	inline float* get_address_of_targetDeathScale_24() { return &___targetDeathScale_24; }
	inline void set_targetDeathScale_24(float value)
	{
		___targetDeathScale_24 = value;
	}

	inline static int32_t get_offset_of_deathScaleLerpTime_25() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathScaleLerpTime_25)); }
	inline float get_deathScaleLerpTime_25() const { return ___deathScaleLerpTime_25; }
	inline float* get_address_of_deathScaleLerpTime_25() { return &___deathScaleLerpTime_25; }
	inline void set_deathScaleLerpTime_25(float value)
	{
		___deathScaleLerpTime_25 = value;
	}

	inline static int32_t get_offset_of_deathScaleLerper_26() { return static_cast<int32_t>(offsetof(PlayerSpriteBehaviour_t3013935373, ___deathScaleLerper_26)); }
	inline VectorLerper_t3820925235 * get_deathScaleLerper_26() const { return ___deathScaleLerper_26; }
	inline VectorLerper_t3820925235 ** get_address_of_deathScaleLerper_26() { return &___deathScaleLerper_26; }
	inline void set_deathScaleLerper_26(VectorLerper_t3820925235 * value)
	{
		___deathScaleLerper_26 = value;
		Il2CppCodeGenWriteBarrier(&___deathScaleLerper_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
