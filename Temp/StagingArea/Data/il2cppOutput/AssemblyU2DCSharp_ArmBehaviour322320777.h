#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// VectorLerper
struct VectorLerper_t3820925235;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmBehaviour
struct  ArmBehaviour_t322320777  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ArmBehaviour::palmTransform
	Transform_t3275118058 * ___palmTransform_2;
	// VectorLerper ArmBehaviour::positionLerper
	VectorLerper_t3820925235 * ___positionLerper_3;
	// System.Single ArmBehaviour::lerpSpeed
	float ___lerpSpeed_4;
	// UnityEngine.Transform ArmBehaviour::debugTarget
	Transform_t3275118058 * ___debugTarget_5;
	// UnityEngine.GameObject ArmBehaviour::closedHand
	GameObject_t1756533147 * ___closedHand_6;
	// UnityEngine.GameObject ArmBehaviour::openHand
	GameObject_t1756533147 * ___openHand_7;
	// UnityEngine.GameObject ArmBehaviour::prefabObject
	GameObject_t1756533147 * ___prefabObject_8;
	// UnityEngine.GameObject ArmBehaviour::createdObject
	GameObject_t1756533147 * ___createdObject_9;
	// System.Single ArmBehaviour::popUpForce
	float ___popUpForce_10;
	// System.Single ArmBehaviour::spawnDispY
	float ___spawnDispY_11;
	// System.Single ArmBehaviour::spawnTime
	float ___spawnTime_12;
	// System.Boolean ArmBehaviour::isHandClosed
	bool ___isHandClosed_13;
	// System.Single ArmBehaviour::palmRadius
	float ___palmRadius_14;
	// UnityEngine.Vector3 ArmBehaviour::initialPosition
	Vector3_t2243707580  ___initialPosition_15;
	// System.Single ArmBehaviour::retreatSpeed
	float ___retreatSpeed_16;
	// System.Boolean ArmBehaviour::isRetreating
	bool ___isRetreating_17;
	// System.Single ArmBehaviour::retreatTimer
	float ___retreatTimer_18;
	// GameManager ArmBehaviour::gameManager
	GameManager_t2252321495 * ___gameManager_19;

public:
	inline static int32_t get_offset_of_palmTransform_2() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___palmTransform_2)); }
	inline Transform_t3275118058 * get_palmTransform_2() const { return ___palmTransform_2; }
	inline Transform_t3275118058 ** get_address_of_palmTransform_2() { return &___palmTransform_2; }
	inline void set_palmTransform_2(Transform_t3275118058 * value)
	{
		___palmTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___palmTransform_2, value);
	}

	inline static int32_t get_offset_of_positionLerper_3() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___positionLerper_3)); }
	inline VectorLerper_t3820925235 * get_positionLerper_3() const { return ___positionLerper_3; }
	inline VectorLerper_t3820925235 ** get_address_of_positionLerper_3() { return &___positionLerper_3; }
	inline void set_positionLerper_3(VectorLerper_t3820925235 * value)
	{
		___positionLerper_3 = value;
		Il2CppCodeGenWriteBarrier(&___positionLerper_3, value);
	}

	inline static int32_t get_offset_of_lerpSpeed_4() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___lerpSpeed_4)); }
	inline float get_lerpSpeed_4() const { return ___lerpSpeed_4; }
	inline float* get_address_of_lerpSpeed_4() { return &___lerpSpeed_4; }
	inline void set_lerpSpeed_4(float value)
	{
		___lerpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_debugTarget_5() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___debugTarget_5)); }
	inline Transform_t3275118058 * get_debugTarget_5() const { return ___debugTarget_5; }
	inline Transform_t3275118058 ** get_address_of_debugTarget_5() { return &___debugTarget_5; }
	inline void set_debugTarget_5(Transform_t3275118058 * value)
	{
		___debugTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___debugTarget_5, value);
	}

	inline static int32_t get_offset_of_closedHand_6() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___closedHand_6)); }
	inline GameObject_t1756533147 * get_closedHand_6() const { return ___closedHand_6; }
	inline GameObject_t1756533147 ** get_address_of_closedHand_6() { return &___closedHand_6; }
	inline void set_closedHand_6(GameObject_t1756533147 * value)
	{
		___closedHand_6 = value;
		Il2CppCodeGenWriteBarrier(&___closedHand_6, value);
	}

	inline static int32_t get_offset_of_openHand_7() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___openHand_7)); }
	inline GameObject_t1756533147 * get_openHand_7() const { return ___openHand_7; }
	inline GameObject_t1756533147 ** get_address_of_openHand_7() { return &___openHand_7; }
	inline void set_openHand_7(GameObject_t1756533147 * value)
	{
		___openHand_7 = value;
		Il2CppCodeGenWriteBarrier(&___openHand_7, value);
	}

	inline static int32_t get_offset_of_prefabObject_8() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___prefabObject_8)); }
	inline GameObject_t1756533147 * get_prefabObject_8() const { return ___prefabObject_8; }
	inline GameObject_t1756533147 ** get_address_of_prefabObject_8() { return &___prefabObject_8; }
	inline void set_prefabObject_8(GameObject_t1756533147 * value)
	{
		___prefabObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___prefabObject_8, value);
	}

	inline static int32_t get_offset_of_createdObject_9() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___createdObject_9)); }
	inline GameObject_t1756533147 * get_createdObject_9() const { return ___createdObject_9; }
	inline GameObject_t1756533147 ** get_address_of_createdObject_9() { return &___createdObject_9; }
	inline void set_createdObject_9(GameObject_t1756533147 * value)
	{
		___createdObject_9 = value;
		Il2CppCodeGenWriteBarrier(&___createdObject_9, value);
	}

	inline static int32_t get_offset_of_popUpForce_10() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___popUpForce_10)); }
	inline float get_popUpForce_10() const { return ___popUpForce_10; }
	inline float* get_address_of_popUpForce_10() { return &___popUpForce_10; }
	inline void set_popUpForce_10(float value)
	{
		___popUpForce_10 = value;
	}

	inline static int32_t get_offset_of_spawnDispY_11() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___spawnDispY_11)); }
	inline float get_spawnDispY_11() const { return ___spawnDispY_11; }
	inline float* get_address_of_spawnDispY_11() { return &___spawnDispY_11; }
	inline void set_spawnDispY_11(float value)
	{
		___spawnDispY_11 = value;
	}

	inline static int32_t get_offset_of_spawnTime_12() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___spawnTime_12)); }
	inline float get_spawnTime_12() const { return ___spawnTime_12; }
	inline float* get_address_of_spawnTime_12() { return &___spawnTime_12; }
	inline void set_spawnTime_12(float value)
	{
		___spawnTime_12 = value;
	}

	inline static int32_t get_offset_of_isHandClosed_13() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___isHandClosed_13)); }
	inline bool get_isHandClosed_13() const { return ___isHandClosed_13; }
	inline bool* get_address_of_isHandClosed_13() { return &___isHandClosed_13; }
	inline void set_isHandClosed_13(bool value)
	{
		___isHandClosed_13 = value;
	}

	inline static int32_t get_offset_of_palmRadius_14() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___palmRadius_14)); }
	inline float get_palmRadius_14() const { return ___palmRadius_14; }
	inline float* get_address_of_palmRadius_14() { return &___palmRadius_14; }
	inline void set_palmRadius_14(float value)
	{
		___palmRadius_14 = value;
	}

	inline static int32_t get_offset_of_initialPosition_15() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___initialPosition_15)); }
	inline Vector3_t2243707580  get_initialPosition_15() const { return ___initialPosition_15; }
	inline Vector3_t2243707580 * get_address_of_initialPosition_15() { return &___initialPosition_15; }
	inline void set_initialPosition_15(Vector3_t2243707580  value)
	{
		___initialPosition_15 = value;
	}

	inline static int32_t get_offset_of_retreatSpeed_16() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___retreatSpeed_16)); }
	inline float get_retreatSpeed_16() const { return ___retreatSpeed_16; }
	inline float* get_address_of_retreatSpeed_16() { return &___retreatSpeed_16; }
	inline void set_retreatSpeed_16(float value)
	{
		___retreatSpeed_16 = value;
	}

	inline static int32_t get_offset_of_isRetreating_17() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___isRetreating_17)); }
	inline bool get_isRetreating_17() const { return ___isRetreating_17; }
	inline bool* get_address_of_isRetreating_17() { return &___isRetreating_17; }
	inline void set_isRetreating_17(bool value)
	{
		___isRetreating_17 = value;
	}

	inline static int32_t get_offset_of_retreatTimer_18() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___retreatTimer_18)); }
	inline float get_retreatTimer_18() const { return ___retreatTimer_18; }
	inline float* get_address_of_retreatTimer_18() { return &___retreatTimer_18; }
	inline void set_retreatTimer_18(float value)
	{
		___retreatTimer_18 = value;
	}

	inline static int32_t get_offset_of_gameManager_19() { return static_cast<int32_t>(offsetof(ArmBehaviour_t322320777, ___gameManager_19)); }
	inline GameManager_t2252321495 * get_gameManager_19() const { return ___gameManager_19; }
	inline GameManager_t2252321495 ** get_address_of_gameManager_19() { return &___gameManager_19; }
	inline void set_gameManager_19(GameManager_t2252321495 * value)
	{
		___gameManager_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
