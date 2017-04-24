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
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// GumController
struct GumController_t2877197229;
// GiantHeadBehaviour
struct GiantHeadBehaviour_t1108600042;
// ArmManager
struct ArmManager_t2575232699;
// GameManager
struct GameManager_t2252321495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "AssemblyU2DCSharp_ToothState193207853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToothBehaviour
struct  ToothBehaviour_t3603608083  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean ToothBehaviour::isLooseTooth
	bool ___isLooseTooth_2;
	// UnityEngine.Animator ToothBehaviour::animator
	Animator_t69676727 * ___animator_3;
	// UnityEngine.LayerMask ToothBehaviour::playerMask
	LayerMask_t3188175821  ___playerMask_4;
	// System.Single ToothBehaviour::warningRadius
	float ___warningRadius_5;
	// PlayerController ToothBehaviour::playerController
	PlayerController_t4148409433 * ___playerController_6;
	// System.Single ToothBehaviour::randomLooseChance
	float ___randomLooseChance_7;
	// System.Single ToothBehaviour::yankTimeLooseTotal
	float ___yankTimeLooseTotal_8;
	// System.Single ToothBehaviour::yankTimeToughTotal
	float ___yankTimeToughTotal_9;
	// System.Single ToothBehaviour::yankTime
	float ___yankTime_10;
	// UnityEngine.Rigidbody2D ToothBehaviour::rigidBody
	Rigidbody2D_t502193897 * ___rigidBody_11;
	// ToothState ToothBehaviour::toothState
	int32_t ___toothState_12;
	// UnityEngine.SpriteRenderer ToothBehaviour::toothFront
	SpriteRenderer_t1209076198 * ___toothFront_13;
	// UnityEngine.SpriteRenderer ToothBehaviour::toothBack
	SpriteRenderer_t1209076198 * ___toothBack_14;
	// System.Int32 ToothBehaviour::carrySortOrderFront
	int32_t ___carrySortOrderFront_15;
	// System.Int32 ToothBehaviour::carrySortOrderBack
	int32_t ___carrySortOrderBack_16;
	// System.Single ToothBehaviour::carryInitialRotationNoise
	float ___carryInitialRotationNoise_17;
	// System.Single ToothBehaviour::throwMinRotationSpeed
	float ___throwMinRotationSpeed_18;
	// System.Single ToothBehaviour::throwMaxRotationSpeed
	float ___throwMaxRotationSpeed_19;
	// GumController ToothBehaviour::gumController
	GumController_t2877197229 * ___gumController_20;
	// System.Single ToothBehaviour::looseAngerFactor
	float ___looseAngerFactor_21;
	// System.Single ToothBehaviour::toughAngerFactor
	float ___toughAngerFactor_22;
	// System.Single ToothBehaviour::looseAngerYank
	float ___looseAngerYank_23;
	// System.Single ToothBehaviour::toughAngerYank
	float ___toughAngerYank_24;
	// GiantHeadBehaviour ToothBehaviour::head
	GiantHeadBehaviour_t1108600042 * ___head_25;
	// ArmManager ToothBehaviour::armManager
	ArmManager_t2575232699 * ___armManager_26;
	// GameManager ToothBehaviour::manager
	GameManager_t2252321495 * ___manager_27;

public:
	inline static int32_t get_offset_of_isLooseTooth_2() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___isLooseTooth_2)); }
	inline bool get_isLooseTooth_2() const { return ___isLooseTooth_2; }
	inline bool* get_address_of_isLooseTooth_2() { return &___isLooseTooth_2; }
	inline void set_isLooseTooth_2(bool value)
	{
		___isLooseTooth_2 = value;
	}

	inline static int32_t get_offset_of_animator_3() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___animator_3)); }
	inline Animator_t69676727 * get_animator_3() const { return ___animator_3; }
	inline Animator_t69676727 ** get_address_of_animator_3() { return &___animator_3; }
	inline void set_animator_3(Animator_t69676727 * value)
	{
		___animator_3 = value;
		Il2CppCodeGenWriteBarrier(&___animator_3, value);
	}

	inline static int32_t get_offset_of_playerMask_4() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___playerMask_4)); }
	inline LayerMask_t3188175821  get_playerMask_4() const { return ___playerMask_4; }
	inline LayerMask_t3188175821 * get_address_of_playerMask_4() { return &___playerMask_4; }
	inline void set_playerMask_4(LayerMask_t3188175821  value)
	{
		___playerMask_4 = value;
	}

	inline static int32_t get_offset_of_warningRadius_5() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___warningRadius_5)); }
	inline float get_warningRadius_5() const { return ___warningRadius_5; }
	inline float* get_address_of_warningRadius_5() { return &___warningRadius_5; }
	inline void set_warningRadius_5(float value)
	{
		___warningRadius_5 = value;
	}

	inline static int32_t get_offset_of_playerController_6() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___playerController_6)); }
	inline PlayerController_t4148409433 * get_playerController_6() const { return ___playerController_6; }
	inline PlayerController_t4148409433 ** get_address_of_playerController_6() { return &___playerController_6; }
	inline void set_playerController_6(PlayerController_t4148409433 * value)
	{
		___playerController_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerController_6, value);
	}

	inline static int32_t get_offset_of_randomLooseChance_7() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___randomLooseChance_7)); }
	inline float get_randomLooseChance_7() const { return ___randomLooseChance_7; }
	inline float* get_address_of_randomLooseChance_7() { return &___randomLooseChance_7; }
	inline void set_randomLooseChance_7(float value)
	{
		___randomLooseChance_7 = value;
	}

	inline static int32_t get_offset_of_yankTimeLooseTotal_8() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___yankTimeLooseTotal_8)); }
	inline float get_yankTimeLooseTotal_8() const { return ___yankTimeLooseTotal_8; }
	inline float* get_address_of_yankTimeLooseTotal_8() { return &___yankTimeLooseTotal_8; }
	inline void set_yankTimeLooseTotal_8(float value)
	{
		___yankTimeLooseTotal_8 = value;
	}

	inline static int32_t get_offset_of_yankTimeToughTotal_9() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___yankTimeToughTotal_9)); }
	inline float get_yankTimeToughTotal_9() const { return ___yankTimeToughTotal_9; }
	inline float* get_address_of_yankTimeToughTotal_9() { return &___yankTimeToughTotal_9; }
	inline void set_yankTimeToughTotal_9(float value)
	{
		___yankTimeToughTotal_9 = value;
	}

	inline static int32_t get_offset_of_yankTime_10() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___yankTime_10)); }
	inline float get_yankTime_10() const { return ___yankTime_10; }
	inline float* get_address_of_yankTime_10() { return &___yankTime_10; }
	inline void set_yankTime_10(float value)
	{
		___yankTime_10 = value;
	}

	inline static int32_t get_offset_of_rigidBody_11() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___rigidBody_11)); }
	inline Rigidbody2D_t502193897 * get_rigidBody_11() const { return ___rigidBody_11; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody_11() { return &___rigidBody_11; }
	inline void set_rigidBody_11(Rigidbody2D_t502193897 * value)
	{
		___rigidBody_11 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_11, value);
	}

	inline static int32_t get_offset_of_toothState_12() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___toothState_12)); }
	inline int32_t get_toothState_12() const { return ___toothState_12; }
	inline int32_t* get_address_of_toothState_12() { return &___toothState_12; }
	inline void set_toothState_12(int32_t value)
	{
		___toothState_12 = value;
	}

	inline static int32_t get_offset_of_toothFront_13() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___toothFront_13)); }
	inline SpriteRenderer_t1209076198 * get_toothFront_13() const { return ___toothFront_13; }
	inline SpriteRenderer_t1209076198 ** get_address_of_toothFront_13() { return &___toothFront_13; }
	inline void set_toothFront_13(SpriteRenderer_t1209076198 * value)
	{
		___toothFront_13 = value;
		Il2CppCodeGenWriteBarrier(&___toothFront_13, value);
	}

	inline static int32_t get_offset_of_toothBack_14() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___toothBack_14)); }
	inline SpriteRenderer_t1209076198 * get_toothBack_14() const { return ___toothBack_14; }
	inline SpriteRenderer_t1209076198 ** get_address_of_toothBack_14() { return &___toothBack_14; }
	inline void set_toothBack_14(SpriteRenderer_t1209076198 * value)
	{
		___toothBack_14 = value;
		Il2CppCodeGenWriteBarrier(&___toothBack_14, value);
	}

	inline static int32_t get_offset_of_carrySortOrderFront_15() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___carrySortOrderFront_15)); }
	inline int32_t get_carrySortOrderFront_15() const { return ___carrySortOrderFront_15; }
	inline int32_t* get_address_of_carrySortOrderFront_15() { return &___carrySortOrderFront_15; }
	inline void set_carrySortOrderFront_15(int32_t value)
	{
		___carrySortOrderFront_15 = value;
	}

	inline static int32_t get_offset_of_carrySortOrderBack_16() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___carrySortOrderBack_16)); }
	inline int32_t get_carrySortOrderBack_16() const { return ___carrySortOrderBack_16; }
	inline int32_t* get_address_of_carrySortOrderBack_16() { return &___carrySortOrderBack_16; }
	inline void set_carrySortOrderBack_16(int32_t value)
	{
		___carrySortOrderBack_16 = value;
	}

	inline static int32_t get_offset_of_carryInitialRotationNoise_17() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___carryInitialRotationNoise_17)); }
	inline float get_carryInitialRotationNoise_17() const { return ___carryInitialRotationNoise_17; }
	inline float* get_address_of_carryInitialRotationNoise_17() { return &___carryInitialRotationNoise_17; }
	inline void set_carryInitialRotationNoise_17(float value)
	{
		___carryInitialRotationNoise_17 = value;
	}

	inline static int32_t get_offset_of_throwMinRotationSpeed_18() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___throwMinRotationSpeed_18)); }
	inline float get_throwMinRotationSpeed_18() const { return ___throwMinRotationSpeed_18; }
	inline float* get_address_of_throwMinRotationSpeed_18() { return &___throwMinRotationSpeed_18; }
	inline void set_throwMinRotationSpeed_18(float value)
	{
		___throwMinRotationSpeed_18 = value;
	}

	inline static int32_t get_offset_of_throwMaxRotationSpeed_19() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___throwMaxRotationSpeed_19)); }
	inline float get_throwMaxRotationSpeed_19() const { return ___throwMaxRotationSpeed_19; }
	inline float* get_address_of_throwMaxRotationSpeed_19() { return &___throwMaxRotationSpeed_19; }
	inline void set_throwMaxRotationSpeed_19(float value)
	{
		___throwMaxRotationSpeed_19 = value;
	}

	inline static int32_t get_offset_of_gumController_20() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___gumController_20)); }
	inline GumController_t2877197229 * get_gumController_20() const { return ___gumController_20; }
	inline GumController_t2877197229 ** get_address_of_gumController_20() { return &___gumController_20; }
	inline void set_gumController_20(GumController_t2877197229 * value)
	{
		___gumController_20 = value;
		Il2CppCodeGenWriteBarrier(&___gumController_20, value);
	}

	inline static int32_t get_offset_of_looseAngerFactor_21() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___looseAngerFactor_21)); }
	inline float get_looseAngerFactor_21() const { return ___looseAngerFactor_21; }
	inline float* get_address_of_looseAngerFactor_21() { return &___looseAngerFactor_21; }
	inline void set_looseAngerFactor_21(float value)
	{
		___looseAngerFactor_21 = value;
	}

	inline static int32_t get_offset_of_toughAngerFactor_22() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___toughAngerFactor_22)); }
	inline float get_toughAngerFactor_22() const { return ___toughAngerFactor_22; }
	inline float* get_address_of_toughAngerFactor_22() { return &___toughAngerFactor_22; }
	inline void set_toughAngerFactor_22(float value)
	{
		___toughAngerFactor_22 = value;
	}

	inline static int32_t get_offset_of_looseAngerYank_23() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___looseAngerYank_23)); }
	inline float get_looseAngerYank_23() const { return ___looseAngerYank_23; }
	inline float* get_address_of_looseAngerYank_23() { return &___looseAngerYank_23; }
	inline void set_looseAngerYank_23(float value)
	{
		___looseAngerYank_23 = value;
	}

	inline static int32_t get_offset_of_toughAngerYank_24() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___toughAngerYank_24)); }
	inline float get_toughAngerYank_24() const { return ___toughAngerYank_24; }
	inline float* get_address_of_toughAngerYank_24() { return &___toughAngerYank_24; }
	inline void set_toughAngerYank_24(float value)
	{
		___toughAngerYank_24 = value;
	}

	inline static int32_t get_offset_of_head_25() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___head_25)); }
	inline GiantHeadBehaviour_t1108600042 * get_head_25() const { return ___head_25; }
	inline GiantHeadBehaviour_t1108600042 ** get_address_of_head_25() { return &___head_25; }
	inline void set_head_25(GiantHeadBehaviour_t1108600042 * value)
	{
		___head_25 = value;
		Il2CppCodeGenWriteBarrier(&___head_25, value);
	}

	inline static int32_t get_offset_of_armManager_26() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___armManager_26)); }
	inline ArmManager_t2575232699 * get_armManager_26() const { return ___armManager_26; }
	inline ArmManager_t2575232699 ** get_address_of_armManager_26() { return &___armManager_26; }
	inline void set_armManager_26(ArmManager_t2575232699 * value)
	{
		___armManager_26 = value;
		Il2CppCodeGenWriteBarrier(&___armManager_26, value);
	}

	inline static int32_t get_offset_of_manager_27() { return static_cast<int32_t>(offsetof(ToothBehaviour_t3603608083, ___manager_27)); }
	inline GameManager_t2252321495 * get_manager_27() const { return ___manager_27; }
	inline GameManager_t2252321495 ** get_address_of_manager_27() { return &___manager_27; }
	inline void set_manager_27(GameManager_t2252321495 * value)
	{
		___manager_27 = value;
		Il2CppCodeGenWriteBarrier(&___manager_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
