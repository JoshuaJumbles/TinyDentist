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
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<ToothBehaviour>
struct List_1_t2972729215;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Transform
struct Transform_t3275118058;
// GiantHeadBehaviour
struct GiantHeadBehaviour_t1108600042;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_GameState1561012519.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// GameState GameManager::gameState
	int32_t ___gameState_4;
	// UnityEngine.GameObject GameManager::intro
	GameObject_t1756533147 * ___intro_5;
	// UnityEngine.GameObject GameManager::game
	GameObject_t1756533147 * ___game_6;
	// UnityEngine.GameObject GameManager::win
	GameObject_t1756533147 * ___win_7;
	// UnityEngine.GameObject GameManager::lose
	GameObject_t1756533147 * ___lose_8;
	// UnityEngine.GameObject GameManager::spawnArmPrefab
	GameObject_t1756533147 * ___spawnArmPrefab_9;
	// System.Int32 GameManager::bonusScore
	int32_t ___bonusScore_10;
	// System.Single GameManager::timeRemaining
	float ___timeRemaining_11;
	// UnityEngine.UI.Text GameManager::looseLabel
	Text_t356221433 * ___looseLabel_12;
	// UnityEngine.UI.Text GameManager::bonusPtsLabel
	Text_t356221433 * ___bonusPtsLabel_13;
	// UnityEngine.UI.Text GameManager::timeLabel
	Text_t356221433 * ___timeLabel_14;
	// System.Collections.Generic.List`1<ToothBehaviour> GameManager::teethList
	List_1_t2972729215 * ___teethList_15;
	// PlayerController GameManager::playerController
	PlayerController_t4148409433 * ___playerController_16;
	// System.Single GameManager::startDelay
	float ___startDelay_17;
	// System.Single GameManager::startDelayBuffer
	float ___startDelayBuffer_18;
	// UnityEngine.Transform GameManager::playerIntroLockPt
	Transform_t3275118058 * ___playerIntroLockPt_19;
	// System.Single GameManager::inputDelayTimeTotal
	float ___inputDelayTimeTotal_20;
	// System.Single GameManager::inputDelay
	float ___inputDelay_21;
	// GiantHeadBehaviour GameManager::head
	GiantHeadBehaviour_t1108600042 * ___head_22;

public:
	inline static int32_t get_offset_of_gameState_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameState_4)); }
	inline int32_t get_gameState_4() const { return ___gameState_4; }
	inline int32_t* get_address_of_gameState_4() { return &___gameState_4; }
	inline void set_gameState_4(int32_t value)
	{
		___gameState_4 = value;
	}

	inline static int32_t get_offset_of_intro_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___intro_5)); }
	inline GameObject_t1756533147 * get_intro_5() const { return ___intro_5; }
	inline GameObject_t1756533147 ** get_address_of_intro_5() { return &___intro_5; }
	inline void set_intro_5(GameObject_t1756533147 * value)
	{
		___intro_5 = value;
		Il2CppCodeGenWriteBarrier(&___intro_5, value);
	}

	inline static int32_t get_offset_of_game_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___game_6)); }
	inline GameObject_t1756533147 * get_game_6() const { return ___game_6; }
	inline GameObject_t1756533147 ** get_address_of_game_6() { return &___game_6; }
	inline void set_game_6(GameObject_t1756533147 * value)
	{
		___game_6 = value;
		Il2CppCodeGenWriteBarrier(&___game_6, value);
	}

	inline static int32_t get_offset_of_win_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___win_7)); }
	inline GameObject_t1756533147 * get_win_7() const { return ___win_7; }
	inline GameObject_t1756533147 ** get_address_of_win_7() { return &___win_7; }
	inline void set_win_7(GameObject_t1756533147 * value)
	{
		___win_7 = value;
		Il2CppCodeGenWriteBarrier(&___win_7, value);
	}

	inline static int32_t get_offset_of_lose_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___lose_8)); }
	inline GameObject_t1756533147 * get_lose_8() const { return ___lose_8; }
	inline GameObject_t1756533147 ** get_address_of_lose_8() { return &___lose_8; }
	inline void set_lose_8(GameObject_t1756533147 * value)
	{
		___lose_8 = value;
		Il2CppCodeGenWriteBarrier(&___lose_8, value);
	}

	inline static int32_t get_offset_of_spawnArmPrefab_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___spawnArmPrefab_9)); }
	inline GameObject_t1756533147 * get_spawnArmPrefab_9() const { return ___spawnArmPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_spawnArmPrefab_9() { return &___spawnArmPrefab_9; }
	inline void set_spawnArmPrefab_9(GameObject_t1756533147 * value)
	{
		___spawnArmPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___spawnArmPrefab_9, value);
	}

	inline static int32_t get_offset_of_bonusScore_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bonusScore_10)); }
	inline int32_t get_bonusScore_10() const { return ___bonusScore_10; }
	inline int32_t* get_address_of_bonusScore_10() { return &___bonusScore_10; }
	inline void set_bonusScore_10(int32_t value)
	{
		___bonusScore_10 = value;
	}

	inline static int32_t get_offset_of_timeRemaining_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___timeRemaining_11)); }
	inline float get_timeRemaining_11() const { return ___timeRemaining_11; }
	inline float* get_address_of_timeRemaining_11() { return &___timeRemaining_11; }
	inline void set_timeRemaining_11(float value)
	{
		___timeRemaining_11 = value;
	}

	inline static int32_t get_offset_of_looseLabel_12() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___looseLabel_12)); }
	inline Text_t356221433 * get_looseLabel_12() const { return ___looseLabel_12; }
	inline Text_t356221433 ** get_address_of_looseLabel_12() { return &___looseLabel_12; }
	inline void set_looseLabel_12(Text_t356221433 * value)
	{
		___looseLabel_12 = value;
		Il2CppCodeGenWriteBarrier(&___looseLabel_12, value);
	}

	inline static int32_t get_offset_of_bonusPtsLabel_13() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___bonusPtsLabel_13)); }
	inline Text_t356221433 * get_bonusPtsLabel_13() const { return ___bonusPtsLabel_13; }
	inline Text_t356221433 ** get_address_of_bonusPtsLabel_13() { return &___bonusPtsLabel_13; }
	inline void set_bonusPtsLabel_13(Text_t356221433 * value)
	{
		___bonusPtsLabel_13 = value;
		Il2CppCodeGenWriteBarrier(&___bonusPtsLabel_13, value);
	}

	inline static int32_t get_offset_of_timeLabel_14() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___timeLabel_14)); }
	inline Text_t356221433 * get_timeLabel_14() const { return ___timeLabel_14; }
	inline Text_t356221433 ** get_address_of_timeLabel_14() { return &___timeLabel_14; }
	inline void set_timeLabel_14(Text_t356221433 * value)
	{
		___timeLabel_14 = value;
		Il2CppCodeGenWriteBarrier(&___timeLabel_14, value);
	}

	inline static int32_t get_offset_of_teethList_15() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___teethList_15)); }
	inline List_1_t2972729215 * get_teethList_15() const { return ___teethList_15; }
	inline List_1_t2972729215 ** get_address_of_teethList_15() { return &___teethList_15; }
	inline void set_teethList_15(List_1_t2972729215 * value)
	{
		___teethList_15 = value;
		Il2CppCodeGenWriteBarrier(&___teethList_15, value);
	}

	inline static int32_t get_offset_of_playerController_16() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerController_16)); }
	inline PlayerController_t4148409433 * get_playerController_16() const { return ___playerController_16; }
	inline PlayerController_t4148409433 ** get_address_of_playerController_16() { return &___playerController_16; }
	inline void set_playerController_16(PlayerController_t4148409433 * value)
	{
		___playerController_16 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_16, value);
	}

	inline static int32_t get_offset_of_startDelay_17() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startDelay_17)); }
	inline float get_startDelay_17() const { return ___startDelay_17; }
	inline float* get_address_of_startDelay_17() { return &___startDelay_17; }
	inline void set_startDelay_17(float value)
	{
		___startDelay_17 = value;
	}

	inline static int32_t get_offset_of_startDelayBuffer_18() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___startDelayBuffer_18)); }
	inline float get_startDelayBuffer_18() const { return ___startDelayBuffer_18; }
	inline float* get_address_of_startDelayBuffer_18() { return &___startDelayBuffer_18; }
	inline void set_startDelayBuffer_18(float value)
	{
		___startDelayBuffer_18 = value;
	}

	inline static int32_t get_offset_of_playerIntroLockPt_19() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___playerIntroLockPt_19)); }
	inline Transform_t3275118058 * get_playerIntroLockPt_19() const { return ___playerIntroLockPt_19; }
	inline Transform_t3275118058 ** get_address_of_playerIntroLockPt_19() { return &___playerIntroLockPt_19; }
	inline void set_playerIntroLockPt_19(Transform_t3275118058 * value)
	{
		___playerIntroLockPt_19 = value;
		Il2CppCodeGenWriteBarrier(&___playerIntroLockPt_19, value);
	}

	inline static int32_t get_offset_of_inputDelayTimeTotal_20() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___inputDelayTimeTotal_20)); }
	inline float get_inputDelayTimeTotal_20() const { return ___inputDelayTimeTotal_20; }
	inline float* get_address_of_inputDelayTimeTotal_20() { return &___inputDelayTimeTotal_20; }
	inline void set_inputDelayTimeTotal_20(float value)
	{
		___inputDelayTimeTotal_20 = value;
	}

	inline static int32_t get_offset_of_inputDelay_21() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___inputDelay_21)); }
	inline float get_inputDelay_21() const { return ___inputDelay_21; }
	inline float* get_address_of_inputDelay_21() { return &___inputDelay_21; }
	inline void set_inputDelay_21(float value)
	{
		___inputDelay_21 = value;
	}

	inline static int32_t get_offset_of_head_22() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___head_22)); }
	inline GiantHeadBehaviour_t1108600042 * get_head_22() const { return ___head_22; }
	inline GiantHeadBehaviour_t1108600042 ** get_address_of_head_22() { return &___head_22; }
	inline void set_head_22(GiantHeadBehaviour_t1108600042 * value)
	{
		___head_22 = value;
		Il2CppCodeGenWriteBarrier(&___head_22, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// System.Int32 GameManager::maxLooseTeeth
	int32_t ___maxLooseTeeth_2;
	// System.Int32 GameManager::looseTeeth
	int32_t ___looseTeeth_3;

public:
	inline static int32_t get_offset_of_maxLooseTeeth_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___maxLooseTeeth_2)); }
	inline int32_t get_maxLooseTeeth_2() const { return ___maxLooseTeeth_2; }
	inline int32_t* get_address_of_maxLooseTeeth_2() { return &___maxLooseTeeth_2; }
	inline void set_maxLooseTeeth_2(int32_t value)
	{
		___maxLooseTeeth_2 = value;
	}

	inline static int32_t get_offset_of_looseTeeth_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___looseTeeth_3)); }
	inline int32_t get_looseTeeth_3() const { return ___looseTeeth_3; }
	inline int32_t* get_address_of_looseTeeth_3() { return &___looseTeeth_3; }
	inline void set_looseTeeth_3(int32_t value)
	{
		___looseTeeth_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
