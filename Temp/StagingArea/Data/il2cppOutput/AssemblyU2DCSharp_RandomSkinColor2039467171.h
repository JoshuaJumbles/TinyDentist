#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomSkinColor
struct  RandomSkinColor_t2039467171  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Color> RandomSkinColor::skinColors
	List_1_t1389513207 * ___skinColors_2;

public:
	inline static int32_t get_offset_of_skinColors_2() { return static_cast<int32_t>(offsetof(RandomSkinColor_t2039467171, ___skinColors_2)); }
	inline List_1_t1389513207 * get_skinColors_2() const { return ___skinColors_2; }
	inline List_1_t1389513207 ** get_address_of_skinColors_2() { return &___skinColors_2; }
	inline void set_skinColors_2(List_1_t1389513207 * value)
	{
		___skinColors_2 = value;
		Il2CppCodeGenWriteBarrier(&___skinColors_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
