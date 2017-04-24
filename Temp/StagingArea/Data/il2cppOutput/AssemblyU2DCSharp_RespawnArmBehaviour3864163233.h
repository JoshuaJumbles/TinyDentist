#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t4148409433;

#include "AssemblyU2DCSharp_ArmBehaviour322320777.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RespawnArmBehaviour
struct  RespawnArmBehaviour_t3864163233  : public ArmBehaviour_t322320777
{
public:
	// PlayerController RespawnArmBehaviour::player
	PlayerController_t4148409433 * ___player_20;

public:
	inline static int32_t get_offset_of_player_20() { return static_cast<int32_t>(offsetof(RespawnArmBehaviour_t3864163233, ___player_20)); }
	inline PlayerController_t4148409433 * get_player_20() const { return ___player_20; }
	inline PlayerController_t4148409433 ** get_address_of_player_20() { return &___player_20; }
	inline void set_player_20(PlayerController_t4148409433 * value)
	{
		___player_20 = value;
		Il2CppCodeGenWriteBarrier(&___player_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
