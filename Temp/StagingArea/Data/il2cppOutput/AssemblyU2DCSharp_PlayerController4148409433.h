#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// PlayerSpriteBehaviour
struct PlayerSpriteBehaviour_t3013935373;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.SpringJoint2D
struct SpringJoint2D_t523222249;
// UnityEngine.DistanceJoint2D
struct DistanceJoint2D_t1720565623;
// ToothBehaviour
struct ToothBehaviour_t3603608083;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t15182870;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PlayerState2629781050.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// PlayerState PlayerController::playerState
	int32_t ___playerState_2;
	// PlayerState PlayerController::lastFramePlayerState
	int32_t ___lastFramePlayerState_3;
	// System.Single PlayerController::rollSpeed
	float ___rollSpeed_4;
	// System.Single PlayerController::walkSpeed
	float ___walkSpeed_5;
	// System.Single PlayerController::carryWalkSpeedFactor
	float ___carryWalkSpeedFactor_6;
	// System.Single PlayerController::carryJumpSpeedFactor
	float ___carryJumpSpeedFactor_7;
	// System.Single PlayerController::airLateralSpeed
	float ___airLateralSpeed_8;
	// System.Single PlayerController::initialJumpVelocity
	float ___initialJumpVelocity_9;
	// System.Single PlayerController::contactTestLengthRoof
	float ___contactTestLengthRoof_10;
	// System.Single PlayerController::contactTestLengthSides
	float ___contactTestLengthSides_11;
	// System.Single PlayerController::contactTestLengthBot
	float ___contactTestLengthBot_12;
	// System.Int32 PlayerController::contactTestPointsBot
	int32_t ___contactTestPointsBot_13;
	// System.Int32 PlayerController::contactTestPointsSide
	int32_t ___contactTestPointsSide_14;
	// System.Int32 PlayerController::contactTestPointsTop
	int32_t ___contactTestPointsTop_15;
	// System.Collections.Generic.List`1<System.Single> PlayerController::contactTestAngles
	List_1_t1445631064 * ___contactTestAngles_16;
	// System.Single PlayerController::grabRadius
	float ___grabRadius_17;
	// System.Single PlayerController::toothGrabDownRadius
	float ___toothGrabDownRadius_18;
	// System.Single PlayerController::carryToothRadius
	float ___carryToothRadius_19;
	// PlayerSpriteBehaviour PlayerController::spriteBehaviour
	PlayerSpriteBehaviour_t3013935373 * ___spriteBehaviour_20;
	// UnityEngine.Rigidbody2D PlayerController::rigidBody
	Rigidbody2D_t502193897 * ___rigidBody_21;
	// UnityEngine.LayerMask PlayerController::groundMask
	LayerMask_t3188175821  ___groundMask_22;
	// UnityEngine.LayerMask PlayerController::botTeethMask
	LayerMask_t3188175821  ___botTeethMask_23;
	// UnityEngine.LayerMask PlayerController::topTeethMask
	LayerMask_t3188175821  ___topTeethMask_24;
	// UnityEngine.LayerMask PlayerController::hairMask
	LayerMask_t3188175821  ___hairMask_25;
	// UnityEngine.Collider2D PlayerController::rollCollider
	Collider2D_t646061738 * ___rollCollider_26;
	// UnityEngine.Collider2D PlayerController::standCollider
	Collider2D_t646061738 * ___standCollider_27;
	// System.Single PlayerController::idleThreshold
	float ___idleThreshold_28;
	// UnityEngine.SpringJoint2D PlayerController::grabJoint
	SpringJoint2D_t523222249 * ___grabJoint_29;
	// UnityEngine.DistanceJoint2D PlayerController::toothJoint
	DistanceJoint2D_t1720565623 * ___toothJoint_30;
	// ToothBehaviour PlayerController::targetYankTooth
	ToothBehaviour_t3603608083 * ___targetYankTooth_31;
	// UnityEngine.GameObject PlayerController::carryObject
	GameObject_t1756533147 * ___carryObject_32;
	// System.Single PlayerController::throwToothMinForce
	float ___throwToothMinForce_33;
	// System.Single PlayerController::throwToothSpeedFactor
	float ___throwToothSpeedFactor_34;
	// System.Single PlayerController::hairGrabSpringFrequency
	float ___hairGrabSpringFrequency_35;
	// System.Single PlayerController::botToothGrabSpringFrequency
	float ___botToothGrabSpringFrequency_36;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::ignoredColliderList
	List_1_t15182870 * ___ignoredColliderList_37;
	// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::debugAllContactedList
	List_1_t15182870 * ___debugAllContactedList_38;
	// System.Single PlayerController::dropThroughTimeTotal
	float ___dropThroughTimeTotal_39;
	// System.Single PlayerController::dropThroughTime
	float ___dropThroughTime_40;
	// System.Single PlayerController::throwToothXDeadZone
	float ___throwToothXDeadZone_41;
	// System.Single PlayerController::deathLaunchXMin
	float ___deathLaunchXMin_42;
	// System.Single PlayerController::deathLaunchXMax
	float ___deathLaunchXMax_43;
	// System.Single PlayerController::deathLaunchYMin
	float ___deathLaunchYMin_44;
	// System.Single PlayerController::deathLaunchYMax
	float ___deathLaunchYMax_45;
	// UnityEngine.Vector2 PlayerController::screenBoundsSize
	Vector2_t2243707579  ___screenBoundsSize_46;
	// System.Boolean PlayerController::isInBounds
	bool ___isInBounds_47;
	// UnityEngine.GameObject PlayerController::respawnArmPrefab
	GameObject_t1756533147 * ___respawnArmPrefab_48;
	// System.Single PlayerController::hairJumpBoost
	float ___hairJumpBoost_49;
	// System.Boolean PlayerController::isGrabQueued
	bool ___isGrabQueued_50;
	// System.Single PlayerController::downGravityFactor
	float ___downGravityFactor_51;

public:
	inline static int32_t get_offset_of_playerState_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerState_2)); }
	inline int32_t get_playerState_2() const { return ___playerState_2; }
	inline int32_t* get_address_of_playerState_2() { return &___playerState_2; }
	inline void set_playerState_2(int32_t value)
	{
		___playerState_2 = value;
	}

	inline static int32_t get_offset_of_lastFramePlayerState_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___lastFramePlayerState_3)); }
	inline int32_t get_lastFramePlayerState_3() const { return ___lastFramePlayerState_3; }
	inline int32_t* get_address_of_lastFramePlayerState_3() { return &___lastFramePlayerState_3; }
	inline void set_lastFramePlayerState_3(int32_t value)
	{
		___lastFramePlayerState_3 = value;
	}

	inline static int32_t get_offset_of_rollSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rollSpeed_4)); }
	inline float get_rollSpeed_4() const { return ___rollSpeed_4; }
	inline float* get_address_of_rollSpeed_4() { return &___rollSpeed_4; }
	inline void set_rollSpeed_4(float value)
	{
		___rollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___walkSpeed_5)); }
	inline float get_walkSpeed_5() const { return ___walkSpeed_5; }
	inline float* get_address_of_walkSpeed_5() { return &___walkSpeed_5; }
	inline void set_walkSpeed_5(float value)
	{
		___walkSpeed_5 = value;
	}

	inline static int32_t get_offset_of_carryWalkSpeedFactor_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___carryWalkSpeedFactor_6)); }
	inline float get_carryWalkSpeedFactor_6() const { return ___carryWalkSpeedFactor_6; }
	inline float* get_address_of_carryWalkSpeedFactor_6() { return &___carryWalkSpeedFactor_6; }
	inline void set_carryWalkSpeedFactor_6(float value)
	{
		___carryWalkSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_carryJumpSpeedFactor_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___carryJumpSpeedFactor_7)); }
	inline float get_carryJumpSpeedFactor_7() const { return ___carryJumpSpeedFactor_7; }
	inline float* get_address_of_carryJumpSpeedFactor_7() { return &___carryJumpSpeedFactor_7; }
	inline void set_carryJumpSpeedFactor_7(float value)
	{
		___carryJumpSpeedFactor_7 = value;
	}

	inline static int32_t get_offset_of_airLateralSpeed_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___airLateralSpeed_8)); }
	inline float get_airLateralSpeed_8() const { return ___airLateralSpeed_8; }
	inline float* get_address_of_airLateralSpeed_8() { return &___airLateralSpeed_8; }
	inline void set_airLateralSpeed_8(float value)
	{
		___airLateralSpeed_8 = value;
	}

	inline static int32_t get_offset_of_initialJumpVelocity_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___initialJumpVelocity_9)); }
	inline float get_initialJumpVelocity_9() const { return ___initialJumpVelocity_9; }
	inline float* get_address_of_initialJumpVelocity_9() { return &___initialJumpVelocity_9; }
	inline void set_initialJumpVelocity_9(float value)
	{
		___initialJumpVelocity_9 = value;
	}

	inline static int32_t get_offset_of_contactTestLengthRoof_10() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestLengthRoof_10)); }
	inline float get_contactTestLengthRoof_10() const { return ___contactTestLengthRoof_10; }
	inline float* get_address_of_contactTestLengthRoof_10() { return &___contactTestLengthRoof_10; }
	inline void set_contactTestLengthRoof_10(float value)
	{
		___contactTestLengthRoof_10 = value;
	}

	inline static int32_t get_offset_of_contactTestLengthSides_11() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestLengthSides_11)); }
	inline float get_contactTestLengthSides_11() const { return ___contactTestLengthSides_11; }
	inline float* get_address_of_contactTestLengthSides_11() { return &___contactTestLengthSides_11; }
	inline void set_contactTestLengthSides_11(float value)
	{
		___contactTestLengthSides_11 = value;
	}

	inline static int32_t get_offset_of_contactTestLengthBot_12() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestLengthBot_12)); }
	inline float get_contactTestLengthBot_12() const { return ___contactTestLengthBot_12; }
	inline float* get_address_of_contactTestLengthBot_12() { return &___contactTestLengthBot_12; }
	inline void set_contactTestLengthBot_12(float value)
	{
		___contactTestLengthBot_12 = value;
	}

	inline static int32_t get_offset_of_contactTestPointsBot_13() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestPointsBot_13)); }
	inline int32_t get_contactTestPointsBot_13() const { return ___contactTestPointsBot_13; }
	inline int32_t* get_address_of_contactTestPointsBot_13() { return &___contactTestPointsBot_13; }
	inline void set_contactTestPointsBot_13(int32_t value)
	{
		___contactTestPointsBot_13 = value;
	}

	inline static int32_t get_offset_of_contactTestPointsSide_14() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestPointsSide_14)); }
	inline int32_t get_contactTestPointsSide_14() const { return ___contactTestPointsSide_14; }
	inline int32_t* get_address_of_contactTestPointsSide_14() { return &___contactTestPointsSide_14; }
	inline void set_contactTestPointsSide_14(int32_t value)
	{
		___contactTestPointsSide_14 = value;
	}

	inline static int32_t get_offset_of_contactTestPointsTop_15() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestPointsTop_15)); }
	inline int32_t get_contactTestPointsTop_15() const { return ___contactTestPointsTop_15; }
	inline int32_t* get_address_of_contactTestPointsTop_15() { return &___contactTestPointsTop_15; }
	inline void set_contactTestPointsTop_15(int32_t value)
	{
		___contactTestPointsTop_15 = value;
	}

	inline static int32_t get_offset_of_contactTestAngles_16() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___contactTestAngles_16)); }
	inline List_1_t1445631064 * get_contactTestAngles_16() const { return ___contactTestAngles_16; }
	inline List_1_t1445631064 ** get_address_of_contactTestAngles_16() { return &___contactTestAngles_16; }
	inline void set_contactTestAngles_16(List_1_t1445631064 * value)
	{
		___contactTestAngles_16 = value;
		Il2CppCodeGenWriteBarrier(&___contactTestAngles_16, value);
	}

	inline static int32_t get_offset_of_grabRadius_17() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___grabRadius_17)); }
	inline float get_grabRadius_17() const { return ___grabRadius_17; }
	inline float* get_address_of_grabRadius_17() { return &___grabRadius_17; }
	inline void set_grabRadius_17(float value)
	{
		___grabRadius_17 = value;
	}

	inline static int32_t get_offset_of_toothGrabDownRadius_18() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___toothGrabDownRadius_18)); }
	inline float get_toothGrabDownRadius_18() const { return ___toothGrabDownRadius_18; }
	inline float* get_address_of_toothGrabDownRadius_18() { return &___toothGrabDownRadius_18; }
	inline void set_toothGrabDownRadius_18(float value)
	{
		___toothGrabDownRadius_18 = value;
	}

	inline static int32_t get_offset_of_carryToothRadius_19() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___carryToothRadius_19)); }
	inline float get_carryToothRadius_19() const { return ___carryToothRadius_19; }
	inline float* get_address_of_carryToothRadius_19() { return &___carryToothRadius_19; }
	inline void set_carryToothRadius_19(float value)
	{
		___carryToothRadius_19 = value;
	}

	inline static int32_t get_offset_of_spriteBehaviour_20() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___spriteBehaviour_20)); }
	inline PlayerSpriteBehaviour_t3013935373 * get_spriteBehaviour_20() const { return ___spriteBehaviour_20; }
	inline PlayerSpriteBehaviour_t3013935373 ** get_address_of_spriteBehaviour_20() { return &___spriteBehaviour_20; }
	inline void set_spriteBehaviour_20(PlayerSpriteBehaviour_t3013935373 * value)
	{
		___spriteBehaviour_20 = value;
		Il2CppCodeGenWriteBarrier(&___spriteBehaviour_20, value);
	}

	inline static int32_t get_offset_of_rigidBody_21() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rigidBody_21)); }
	inline Rigidbody2D_t502193897 * get_rigidBody_21() const { return ___rigidBody_21; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody_21() { return &___rigidBody_21; }
	inline void set_rigidBody_21(Rigidbody2D_t502193897 * value)
	{
		___rigidBody_21 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_21, value);
	}

	inline static int32_t get_offset_of_groundMask_22() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___groundMask_22)); }
	inline LayerMask_t3188175821  get_groundMask_22() const { return ___groundMask_22; }
	inline LayerMask_t3188175821 * get_address_of_groundMask_22() { return &___groundMask_22; }
	inline void set_groundMask_22(LayerMask_t3188175821  value)
	{
		___groundMask_22 = value;
	}

	inline static int32_t get_offset_of_botTeethMask_23() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___botTeethMask_23)); }
	inline LayerMask_t3188175821  get_botTeethMask_23() const { return ___botTeethMask_23; }
	inline LayerMask_t3188175821 * get_address_of_botTeethMask_23() { return &___botTeethMask_23; }
	inline void set_botTeethMask_23(LayerMask_t3188175821  value)
	{
		___botTeethMask_23 = value;
	}

	inline static int32_t get_offset_of_topTeethMask_24() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___topTeethMask_24)); }
	inline LayerMask_t3188175821  get_topTeethMask_24() const { return ___topTeethMask_24; }
	inline LayerMask_t3188175821 * get_address_of_topTeethMask_24() { return &___topTeethMask_24; }
	inline void set_topTeethMask_24(LayerMask_t3188175821  value)
	{
		___topTeethMask_24 = value;
	}

	inline static int32_t get_offset_of_hairMask_25() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hairMask_25)); }
	inline LayerMask_t3188175821  get_hairMask_25() const { return ___hairMask_25; }
	inline LayerMask_t3188175821 * get_address_of_hairMask_25() { return &___hairMask_25; }
	inline void set_hairMask_25(LayerMask_t3188175821  value)
	{
		___hairMask_25 = value;
	}

	inline static int32_t get_offset_of_rollCollider_26() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rollCollider_26)); }
	inline Collider2D_t646061738 * get_rollCollider_26() const { return ___rollCollider_26; }
	inline Collider2D_t646061738 ** get_address_of_rollCollider_26() { return &___rollCollider_26; }
	inline void set_rollCollider_26(Collider2D_t646061738 * value)
	{
		___rollCollider_26 = value;
		Il2CppCodeGenWriteBarrier(&___rollCollider_26, value);
	}

	inline static int32_t get_offset_of_standCollider_27() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___standCollider_27)); }
	inline Collider2D_t646061738 * get_standCollider_27() const { return ___standCollider_27; }
	inline Collider2D_t646061738 ** get_address_of_standCollider_27() { return &___standCollider_27; }
	inline void set_standCollider_27(Collider2D_t646061738 * value)
	{
		___standCollider_27 = value;
		Il2CppCodeGenWriteBarrier(&___standCollider_27, value);
	}

	inline static int32_t get_offset_of_idleThreshold_28() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___idleThreshold_28)); }
	inline float get_idleThreshold_28() const { return ___idleThreshold_28; }
	inline float* get_address_of_idleThreshold_28() { return &___idleThreshold_28; }
	inline void set_idleThreshold_28(float value)
	{
		___idleThreshold_28 = value;
	}

	inline static int32_t get_offset_of_grabJoint_29() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___grabJoint_29)); }
	inline SpringJoint2D_t523222249 * get_grabJoint_29() const { return ___grabJoint_29; }
	inline SpringJoint2D_t523222249 ** get_address_of_grabJoint_29() { return &___grabJoint_29; }
	inline void set_grabJoint_29(SpringJoint2D_t523222249 * value)
	{
		___grabJoint_29 = value;
		Il2CppCodeGenWriteBarrier(&___grabJoint_29, value);
	}

	inline static int32_t get_offset_of_toothJoint_30() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___toothJoint_30)); }
	inline DistanceJoint2D_t1720565623 * get_toothJoint_30() const { return ___toothJoint_30; }
	inline DistanceJoint2D_t1720565623 ** get_address_of_toothJoint_30() { return &___toothJoint_30; }
	inline void set_toothJoint_30(DistanceJoint2D_t1720565623 * value)
	{
		___toothJoint_30 = value;
		Il2CppCodeGenWriteBarrier(&___toothJoint_30, value);
	}

	inline static int32_t get_offset_of_targetYankTooth_31() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___targetYankTooth_31)); }
	inline ToothBehaviour_t3603608083 * get_targetYankTooth_31() const { return ___targetYankTooth_31; }
	inline ToothBehaviour_t3603608083 ** get_address_of_targetYankTooth_31() { return &___targetYankTooth_31; }
	inline void set_targetYankTooth_31(ToothBehaviour_t3603608083 * value)
	{
		___targetYankTooth_31 = value;
		Il2CppCodeGenWriteBarrier(&___targetYankTooth_31, value);
	}

	inline static int32_t get_offset_of_carryObject_32() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___carryObject_32)); }
	inline GameObject_t1756533147 * get_carryObject_32() const { return ___carryObject_32; }
	inline GameObject_t1756533147 ** get_address_of_carryObject_32() { return &___carryObject_32; }
	inline void set_carryObject_32(GameObject_t1756533147 * value)
	{
		___carryObject_32 = value;
		Il2CppCodeGenWriteBarrier(&___carryObject_32, value);
	}

	inline static int32_t get_offset_of_throwToothMinForce_33() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___throwToothMinForce_33)); }
	inline float get_throwToothMinForce_33() const { return ___throwToothMinForce_33; }
	inline float* get_address_of_throwToothMinForce_33() { return &___throwToothMinForce_33; }
	inline void set_throwToothMinForce_33(float value)
	{
		___throwToothMinForce_33 = value;
	}

	inline static int32_t get_offset_of_throwToothSpeedFactor_34() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___throwToothSpeedFactor_34)); }
	inline float get_throwToothSpeedFactor_34() const { return ___throwToothSpeedFactor_34; }
	inline float* get_address_of_throwToothSpeedFactor_34() { return &___throwToothSpeedFactor_34; }
	inline void set_throwToothSpeedFactor_34(float value)
	{
		___throwToothSpeedFactor_34 = value;
	}

	inline static int32_t get_offset_of_hairGrabSpringFrequency_35() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hairGrabSpringFrequency_35)); }
	inline float get_hairGrabSpringFrequency_35() const { return ___hairGrabSpringFrequency_35; }
	inline float* get_address_of_hairGrabSpringFrequency_35() { return &___hairGrabSpringFrequency_35; }
	inline void set_hairGrabSpringFrequency_35(float value)
	{
		___hairGrabSpringFrequency_35 = value;
	}

	inline static int32_t get_offset_of_botToothGrabSpringFrequency_36() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___botToothGrabSpringFrequency_36)); }
	inline float get_botToothGrabSpringFrequency_36() const { return ___botToothGrabSpringFrequency_36; }
	inline float* get_address_of_botToothGrabSpringFrequency_36() { return &___botToothGrabSpringFrequency_36; }
	inline void set_botToothGrabSpringFrequency_36(float value)
	{
		___botToothGrabSpringFrequency_36 = value;
	}

	inline static int32_t get_offset_of_ignoredColliderList_37() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___ignoredColliderList_37)); }
	inline List_1_t15182870 * get_ignoredColliderList_37() const { return ___ignoredColliderList_37; }
	inline List_1_t15182870 ** get_address_of_ignoredColliderList_37() { return &___ignoredColliderList_37; }
	inline void set_ignoredColliderList_37(List_1_t15182870 * value)
	{
		___ignoredColliderList_37 = value;
		Il2CppCodeGenWriteBarrier(&___ignoredColliderList_37, value);
	}

	inline static int32_t get_offset_of_debugAllContactedList_38() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___debugAllContactedList_38)); }
	inline List_1_t15182870 * get_debugAllContactedList_38() const { return ___debugAllContactedList_38; }
	inline List_1_t15182870 ** get_address_of_debugAllContactedList_38() { return &___debugAllContactedList_38; }
	inline void set_debugAllContactedList_38(List_1_t15182870 * value)
	{
		___debugAllContactedList_38 = value;
		Il2CppCodeGenWriteBarrier(&___debugAllContactedList_38, value);
	}

	inline static int32_t get_offset_of_dropThroughTimeTotal_39() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___dropThroughTimeTotal_39)); }
	inline float get_dropThroughTimeTotal_39() const { return ___dropThroughTimeTotal_39; }
	inline float* get_address_of_dropThroughTimeTotal_39() { return &___dropThroughTimeTotal_39; }
	inline void set_dropThroughTimeTotal_39(float value)
	{
		___dropThroughTimeTotal_39 = value;
	}

	inline static int32_t get_offset_of_dropThroughTime_40() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___dropThroughTime_40)); }
	inline float get_dropThroughTime_40() const { return ___dropThroughTime_40; }
	inline float* get_address_of_dropThroughTime_40() { return &___dropThroughTime_40; }
	inline void set_dropThroughTime_40(float value)
	{
		___dropThroughTime_40 = value;
	}

	inline static int32_t get_offset_of_throwToothXDeadZone_41() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___throwToothXDeadZone_41)); }
	inline float get_throwToothXDeadZone_41() const { return ___throwToothXDeadZone_41; }
	inline float* get_address_of_throwToothXDeadZone_41() { return &___throwToothXDeadZone_41; }
	inline void set_throwToothXDeadZone_41(float value)
	{
		___throwToothXDeadZone_41 = value;
	}

	inline static int32_t get_offset_of_deathLaunchXMin_42() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathLaunchXMin_42)); }
	inline float get_deathLaunchXMin_42() const { return ___deathLaunchXMin_42; }
	inline float* get_address_of_deathLaunchXMin_42() { return &___deathLaunchXMin_42; }
	inline void set_deathLaunchXMin_42(float value)
	{
		___deathLaunchXMin_42 = value;
	}

	inline static int32_t get_offset_of_deathLaunchXMax_43() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathLaunchXMax_43)); }
	inline float get_deathLaunchXMax_43() const { return ___deathLaunchXMax_43; }
	inline float* get_address_of_deathLaunchXMax_43() { return &___deathLaunchXMax_43; }
	inline void set_deathLaunchXMax_43(float value)
	{
		___deathLaunchXMax_43 = value;
	}

	inline static int32_t get_offset_of_deathLaunchYMin_44() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathLaunchYMin_44)); }
	inline float get_deathLaunchYMin_44() const { return ___deathLaunchYMin_44; }
	inline float* get_address_of_deathLaunchYMin_44() { return &___deathLaunchYMin_44; }
	inline void set_deathLaunchYMin_44(float value)
	{
		___deathLaunchYMin_44 = value;
	}

	inline static int32_t get_offset_of_deathLaunchYMax_45() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___deathLaunchYMax_45)); }
	inline float get_deathLaunchYMax_45() const { return ___deathLaunchYMax_45; }
	inline float* get_address_of_deathLaunchYMax_45() { return &___deathLaunchYMax_45; }
	inline void set_deathLaunchYMax_45(float value)
	{
		___deathLaunchYMax_45 = value;
	}

	inline static int32_t get_offset_of_screenBoundsSize_46() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___screenBoundsSize_46)); }
	inline Vector2_t2243707579  get_screenBoundsSize_46() const { return ___screenBoundsSize_46; }
	inline Vector2_t2243707579 * get_address_of_screenBoundsSize_46() { return &___screenBoundsSize_46; }
	inline void set_screenBoundsSize_46(Vector2_t2243707579  value)
	{
		___screenBoundsSize_46 = value;
	}

	inline static int32_t get_offset_of_isInBounds_47() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isInBounds_47)); }
	inline bool get_isInBounds_47() const { return ___isInBounds_47; }
	inline bool* get_address_of_isInBounds_47() { return &___isInBounds_47; }
	inline void set_isInBounds_47(bool value)
	{
		___isInBounds_47 = value;
	}

	inline static int32_t get_offset_of_respawnArmPrefab_48() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___respawnArmPrefab_48)); }
	inline GameObject_t1756533147 * get_respawnArmPrefab_48() const { return ___respawnArmPrefab_48; }
	inline GameObject_t1756533147 ** get_address_of_respawnArmPrefab_48() { return &___respawnArmPrefab_48; }
	inline void set_respawnArmPrefab_48(GameObject_t1756533147 * value)
	{
		___respawnArmPrefab_48 = value;
		Il2CppCodeGenWriteBarrier(&___respawnArmPrefab_48, value);
	}

	inline static int32_t get_offset_of_hairJumpBoost_49() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___hairJumpBoost_49)); }
	inline float get_hairJumpBoost_49() const { return ___hairJumpBoost_49; }
	inline float* get_address_of_hairJumpBoost_49() { return &___hairJumpBoost_49; }
	inline void set_hairJumpBoost_49(float value)
	{
		___hairJumpBoost_49 = value;
	}

	inline static int32_t get_offset_of_isGrabQueued_50() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isGrabQueued_50)); }
	inline bool get_isGrabQueued_50() const { return ___isGrabQueued_50; }
	inline bool* get_address_of_isGrabQueued_50() { return &___isGrabQueued_50; }
	inline void set_isGrabQueued_50(bool value)
	{
		___isGrabQueued_50 = value;
	}

	inline static int32_t get_offset_of_downGravityFactor_51() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___downGravityFactor_51)); }
	inline float get_downGravityFactor_51() const { return ___downGravityFactor_51; }
	inline float* get_address_of_downGravityFactor_51() { return &___downGravityFactor_51; }
	inline void set_downGravityFactor_51(float value)
	{
		___downGravityFactor_51 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
