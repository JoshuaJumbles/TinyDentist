#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_TransformLerper3367016318.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JumpLerper
struct  JumpLerper_t168384966  : public TransformLerper_t3367016318
{
public:
	// System.Single JumpLerper::gravity
	float ___gravity_9;
	// System.Single JumpLerper::launchVel
	float ___launchVel_10;

public:
	inline static int32_t get_offset_of_gravity_9() { return static_cast<int32_t>(offsetof(JumpLerper_t168384966, ___gravity_9)); }
	inline float get_gravity_9() const { return ___gravity_9; }
	inline float* get_address_of_gravity_9() { return &___gravity_9; }
	inline void set_gravity_9(float value)
	{
		___gravity_9 = value;
	}

	inline static int32_t get_offset_of_launchVel_10() { return static_cast<int32_t>(offsetof(JumpLerper_t168384966, ___launchVel_10)); }
	inline float get_launchVel_10() const { return ___launchVel_10; }
	inline float* get_address_of_launchVel_10() { return &___launchVel_10; }
	inline void set_launchVel_10(float value)
	{
		___launchVel_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
