#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<ToothBehaviour>
struct List_1_t2972729215;
// PlayerController
struct PlayerController_t4148409433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GumController
struct  GumController_t2877197229  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> GumController::gumOpenings
	List_1_t2644239190 * ___gumOpenings_2;
	// System.Single GumController::gumOpeningRadius
	float ___gumOpeningRadius_3;
	// UnityEngine.Transform GumController::gumOpeningRoot
	Transform_t3275118058 * ___gumOpeningRoot_4;
	// UnityEngine.Transform GumController::replacementTeethRoot
	Transform_t3275118058 * ___replacementTeethRoot_5;
	// System.Collections.Generic.List`1<ToothBehaviour> GumController::teeth
	List_1_t2972729215 * ___teeth_6;
	// System.Boolean GumController::lastDeadlyState
	bool ___lastDeadlyState_7;
	// System.Boolean GumController::areTeethDeadly
	bool ___areTeethDeadly_8;
	// PlayerController GumController::player
	PlayerController_t4148409433 * ___player_9;

public:
	inline static int32_t get_offset_of_gumOpenings_2() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___gumOpenings_2)); }
	inline List_1_t2644239190 * get_gumOpenings_2() const { return ___gumOpenings_2; }
	inline List_1_t2644239190 ** get_address_of_gumOpenings_2() { return &___gumOpenings_2; }
	inline void set_gumOpenings_2(List_1_t2644239190 * value)
	{
		___gumOpenings_2 = value;
		Il2CppCodeGenWriteBarrier(&___gumOpenings_2, value);
	}

	inline static int32_t get_offset_of_gumOpeningRadius_3() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___gumOpeningRadius_3)); }
	inline float get_gumOpeningRadius_3() const { return ___gumOpeningRadius_3; }
	inline float* get_address_of_gumOpeningRadius_3() { return &___gumOpeningRadius_3; }
	inline void set_gumOpeningRadius_3(float value)
	{
		___gumOpeningRadius_3 = value;
	}

	inline static int32_t get_offset_of_gumOpeningRoot_4() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___gumOpeningRoot_4)); }
	inline Transform_t3275118058 * get_gumOpeningRoot_4() const { return ___gumOpeningRoot_4; }
	inline Transform_t3275118058 ** get_address_of_gumOpeningRoot_4() { return &___gumOpeningRoot_4; }
	inline void set_gumOpeningRoot_4(Transform_t3275118058 * value)
	{
		___gumOpeningRoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___gumOpeningRoot_4, value);
	}

	inline static int32_t get_offset_of_replacementTeethRoot_5() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___replacementTeethRoot_5)); }
	inline Transform_t3275118058 * get_replacementTeethRoot_5() const { return ___replacementTeethRoot_5; }
	inline Transform_t3275118058 ** get_address_of_replacementTeethRoot_5() { return &___replacementTeethRoot_5; }
	inline void set_replacementTeethRoot_5(Transform_t3275118058 * value)
	{
		___replacementTeethRoot_5 = value;
		Il2CppCodeGenWriteBarrier(&___replacementTeethRoot_5, value);
	}

	inline static int32_t get_offset_of_teeth_6() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___teeth_6)); }
	inline List_1_t2972729215 * get_teeth_6() const { return ___teeth_6; }
	inline List_1_t2972729215 ** get_address_of_teeth_6() { return &___teeth_6; }
	inline void set_teeth_6(List_1_t2972729215 * value)
	{
		___teeth_6 = value;
		Il2CppCodeGenWriteBarrier(&___teeth_6, value);
	}

	inline static int32_t get_offset_of_lastDeadlyState_7() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___lastDeadlyState_7)); }
	inline bool get_lastDeadlyState_7() const { return ___lastDeadlyState_7; }
	inline bool* get_address_of_lastDeadlyState_7() { return &___lastDeadlyState_7; }
	inline void set_lastDeadlyState_7(bool value)
	{
		___lastDeadlyState_7 = value;
	}

	inline static int32_t get_offset_of_areTeethDeadly_8() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___areTeethDeadly_8)); }
	inline bool get_areTeethDeadly_8() const { return ___areTeethDeadly_8; }
	inline bool* get_address_of_areTeethDeadly_8() { return &___areTeethDeadly_8; }
	inline void set_areTeethDeadly_8(bool value)
	{
		___areTeethDeadly_8 = value;
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(GumController_t2877197229, ___player_9)); }
	inline PlayerController_t4148409433 * get_player_9() const { return ___player_9; }
	inline PlayerController_t4148409433 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(PlayerController_t4148409433 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
