#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<GumController>
struct List_1_t2246318361;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ToothState193207853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoldToothBehaviour
struct  GoldToothBehaviour_t3914130451  : public MonoBehaviour_t1158329972
{
public:
	// ToothState GoldToothBehaviour::toothState
	int32_t ___toothState_2;
	// System.Collections.Generic.List`1<GumController> GoldToothBehaviour::gumControllers
	List_1_t2246318361 * ___gumControllers_3;
	// System.Int32 GoldToothBehaviour::sortOrderOnLock
	int32_t ___sortOrderOnLock_4;
	// UnityEngine.SpriteRenderer GoldToothBehaviour::frontImage
	SpriteRenderer_t1209076198 * ___frontImage_5;
	// UnityEngine.SpriteRenderer GoldToothBehaviour::backImage
	SpriteRenderer_t1209076198 * ___backImage_6;
	// PlayerController GoldToothBehaviour::player
	PlayerController_t4148409433 * ___player_7;
	// UnityEngine.Rigidbody2D GoldToothBehaviour::rigidBody
	Rigidbody2D_t502193897 * ___rigidBody_8;
	// System.Single GoldToothBehaviour::throwMinRotationSpeed
	float ___throwMinRotationSpeed_9;
	// System.Single GoldToothBehaviour::throwMaxRotationSpeed
	float ___throwMaxRotationSpeed_10;
	// GameManager GoldToothBehaviour::manager
	GameManager_t2252321495 * ___manager_11;

public:
	inline static int32_t get_offset_of_toothState_2() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___toothState_2)); }
	inline int32_t get_toothState_2() const { return ___toothState_2; }
	inline int32_t* get_address_of_toothState_2() { return &___toothState_2; }
	inline void set_toothState_2(int32_t value)
	{
		___toothState_2 = value;
	}

	inline static int32_t get_offset_of_gumControllers_3() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___gumControllers_3)); }
	inline List_1_t2246318361 * get_gumControllers_3() const { return ___gumControllers_3; }
	inline List_1_t2246318361 ** get_address_of_gumControllers_3() { return &___gumControllers_3; }
	inline void set_gumControllers_3(List_1_t2246318361 * value)
	{
		___gumControllers_3 = value;
		Il2CppCodeGenWriteBarrier(&___gumControllers_3, value);
	}

	inline static int32_t get_offset_of_sortOrderOnLock_4() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___sortOrderOnLock_4)); }
	inline int32_t get_sortOrderOnLock_4() const { return ___sortOrderOnLock_4; }
	inline int32_t* get_address_of_sortOrderOnLock_4() { return &___sortOrderOnLock_4; }
	inline void set_sortOrderOnLock_4(int32_t value)
	{
		___sortOrderOnLock_4 = value;
	}

	inline static int32_t get_offset_of_frontImage_5() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___frontImage_5)); }
	inline SpriteRenderer_t1209076198 * get_frontImage_5() const { return ___frontImage_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of_frontImage_5() { return &___frontImage_5; }
	inline void set_frontImage_5(SpriteRenderer_t1209076198 * value)
	{
		___frontImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___frontImage_5, value);
	}

	inline static int32_t get_offset_of_backImage_6() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___backImage_6)); }
	inline SpriteRenderer_t1209076198 * get_backImage_6() const { return ___backImage_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_backImage_6() { return &___backImage_6; }
	inline void set_backImage_6(SpriteRenderer_t1209076198 * value)
	{
		___backImage_6 = value;
		Il2CppCodeGenWriteBarrier(&___backImage_6, value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___player_7)); }
	inline PlayerController_t4148409433 * get_player_7() const { return ___player_7; }
	inline PlayerController_t4148409433 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(PlayerController_t4148409433 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}

	inline static int32_t get_offset_of_rigidBody_8() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___rigidBody_8)); }
	inline Rigidbody2D_t502193897 * get_rigidBody_8() const { return ___rigidBody_8; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody_8() { return &___rigidBody_8; }
	inline void set_rigidBody_8(Rigidbody2D_t502193897 * value)
	{
		___rigidBody_8 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_8, value);
	}

	inline static int32_t get_offset_of_throwMinRotationSpeed_9() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___throwMinRotationSpeed_9)); }
	inline float get_throwMinRotationSpeed_9() const { return ___throwMinRotationSpeed_9; }
	inline float* get_address_of_throwMinRotationSpeed_9() { return &___throwMinRotationSpeed_9; }
	inline void set_throwMinRotationSpeed_9(float value)
	{
		___throwMinRotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_throwMaxRotationSpeed_10() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___throwMaxRotationSpeed_10)); }
	inline float get_throwMaxRotationSpeed_10() const { return ___throwMaxRotationSpeed_10; }
	inline float* get_address_of_throwMaxRotationSpeed_10() { return &___throwMaxRotationSpeed_10; }
	inline void set_throwMaxRotationSpeed_10(float value)
	{
		___throwMaxRotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_manager_11() { return static_cast<int32_t>(offsetof(GoldToothBehaviour_t3914130451, ___manager_11)); }
	inline GameManager_t2252321495 * get_manager_11() const { return ___manager_11; }
	inline GameManager_t2252321495 ** get_address_of_manager_11() { return &___manager_11; }
	inline void set_manager_11(GameManager_t2252321495 * value)
	{
		___manager_11 = value;
		Il2CppCodeGenWriteBarrier(&___manager_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
