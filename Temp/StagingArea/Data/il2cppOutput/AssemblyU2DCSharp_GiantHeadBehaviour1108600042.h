#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// GameManager
struct GameManager_t2252321495;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t578197330;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GiantHeadBehaviour
struct  GiantHeadBehaviour_t1108600042  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator GiantHeadBehaviour::animator
	Animator_t69676727 * ___animator_2;
	// System.Single GiantHeadBehaviour::angerLevel
	float ___angerLevel_3;
	// System.Single GiantHeadBehaviour::maxAngerLevel
	float ___maxAngerLevel_4;
	// System.Single GiantHeadBehaviour::animSwitchTimeTotal
	float ___animSwitchTimeTotal_5;
	// System.Single GiantHeadBehaviour::animSwitchTime
	float ___animSwitchTime_6;
	// System.Int32 GiantHeadBehaviour::debugAnimMouthHeight
	int32_t ___debugAnimMouthHeight_7;
	// GameManager GiantHeadBehaviour::manager
	GameManager_t2252321495 * ___manager_8;
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> GiantHeadBehaviour::eyeOrbs
	List_1_t578197330 * ___eyeOrbs_9;
	// UnityEngine.Color GiantHeadBehaviour::eyeAngryEndColor
	Color_t2020392075  ___eyeAngryEndColor_10;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_angerLevel_3() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___angerLevel_3)); }
	inline float get_angerLevel_3() const { return ___angerLevel_3; }
	inline float* get_address_of_angerLevel_3() { return &___angerLevel_3; }
	inline void set_angerLevel_3(float value)
	{
		___angerLevel_3 = value;
	}

	inline static int32_t get_offset_of_maxAngerLevel_4() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___maxAngerLevel_4)); }
	inline float get_maxAngerLevel_4() const { return ___maxAngerLevel_4; }
	inline float* get_address_of_maxAngerLevel_4() { return &___maxAngerLevel_4; }
	inline void set_maxAngerLevel_4(float value)
	{
		___maxAngerLevel_4 = value;
	}

	inline static int32_t get_offset_of_animSwitchTimeTotal_5() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___animSwitchTimeTotal_5)); }
	inline float get_animSwitchTimeTotal_5() const { return ___animSwitchTimeTotal_5; }
	inline float* get_address_of_animSwitchTimeTotal_5() { return &___animSwitchTimeTotal_5; }
	inline void set_animSwitchTimeTotal_5(float value)
	{
		___animSwitchTimeTotal_5 = value;
	}

	inline static int32_t get_offset_of_animSwitchTime_6() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___animSwitchTime_6)); }
	inline float get_animSwitchTime_6() const { return ___animSwitchTime_6; }
	inline float* get_address_of_animSwitchTime_6() { return &___animSwitchTime_6; }
	inline void set_animSwitchTime_6(float value)
	{
		___animSwitchTime_6 = value;
	}

	inline static int32_t get_offset_of_debugAnimMouthHeight_7() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___debugAnimMouthHeight_7)); }
	inline int32_t get_debugAnimMouthHeight_7() const { return ___debugAnimMouthHeight_7; }
	inline int32_t* get_address_of_debugAnimMouthHeight_7() { return &___debugAnimMouthHeight_7; }
	inline void set_debugAnimMouthHeight_7(int32_t value)
	{
		___debugAnimMouthHeight_7 = value;
	}

	inline static int32_t get_offset_of_manager_8() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___manager_8)); }
	inline GameManager_t2252321495 * get_manager_8() const { return ___manager_8; }
	inline GameManager_t2252321495 ** get_address_of_manager_8() { return &___manager_8; }
	inline void set_manager_8(GameManager_t2252321495 * value)
	{
		___manager_8 = value;
		Il2CppCodeGenWriteBarrier(&___manager_8, value);
	}

	inline static int32_t get_offset_of_eyeOrbs_9() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___eyeOrbs_9)); }
	inline List_1_t578197330 * get_eyeOrbs_9() const { return ___eyeOrbs_9; }
	inline List_1_t578197330 ** get_address_of_eyeOrbs_9() { return &___eyeOrbs_9; }
	inline void set_eyeOrbs_9(List_1_t578197330 * value)
	{
		___eyeOrbs_9 = value;
		Il2CppCodeGenWriteBarrier(&___eyeOrbs_9, value);
	}

	inline static int32_t get_offset_of_eyeAngryEndColor_10() { return static_cast<int32_t>(offsetof(GiantHeadBehaviour_t1108600042, ___eyeAngryEndColor_10)); }
	inline Color_t2020392075  get_eyeAngryEndColor_10() const { return ___eyeAngryEndColor_10; }
	inline Color_t2020392075 * get_address_of_eyeAngryEndColor_10() { return &___eyeAngryEndColor_10; }
	inline void set_eyeAngryEndColor_10(Color_t2020392075  value)
	{
		___eyeAngryEndColor_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
