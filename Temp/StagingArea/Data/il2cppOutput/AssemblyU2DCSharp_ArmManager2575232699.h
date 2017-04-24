#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ArmManager
struct  ArmManager_t2575232699  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ArmManager::goldArmPrefab
	GameObject_t1756533147 * ___goldArmPrefab_2;
	// UnityEngine.GameObject ArmManager::goldArm
	GameObject_t1756533147 * ___goldArm_3;

public:
	inline static int32_t get_offset_of_goldArmPrefab_2() { return static_cast<int32_t>(offsetof(ArmManager_t2575232699, ___goldArmPrefab_2)); }
	inline GameObject_t1756533147 * get_goldArmPrefab_2() const { return ___goldArmPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_goldArmPrefab_2() { return &___goldArmPrefab_2; }
	inline void set_goldArmPrefab_2(GameObject_t1756533147 * value)
	{
		___goldArmPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___goldArmPrefab_2, value);
	}

	inline static int32_t get_offset_of_goldArm_3() { return static_cast<int32_t>(offsetof(ArmManager_t2575232699, ___goldArm_3)); }
	inline GameObject_t1756533147 * get_goldArm_3() const { return ___goldArm_3; }
	inline GameObject_t1756533147 ** get_address_of_goldArm_3() { return &___goldArm_3; }
	inline void set_goldArm_3(GameObject_t1756533147 * value)
	{
		___goldArm_3 = value;
		Il2CppCodeGenWriteBarrier(&___goldArm_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
