#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_LerpStyle2611178886.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FloatLerper
struct  FloatLerper_t1025062920  : public MonoBehaviour_t1158329972
{
public:
	// System.Single FloatLerper::timeTotal
	float ___timeTotal_2;
	// System.Single FloatLerper::time
	float ___time_3;
	// System.Single FloatLerper::startValue
	float ___startValue_4;
	// System.Single FloatLerper::targetValue
	float ___targetValue_5;
	// System.String FloatLerper::fieldName
	String_t* ___fieldName_6;
	// UnityEngine.Object FloatLerper::targetObject
	Object_t1021602117 * ___targetObject_7;
	// LerpStyle FloatLerper::style
	int32_t ___style_8;

public:
	inline static int32_t get_offset_of_timeTotal_2() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___timeTotal_2)); }
	inline float get_timeTotal_2() const { return ___timeTotal_2; }
	inline float* get_address_of_timeTotal_2() { return &___timeTotal_2; }
	inline void set_timeTotal_2(float value)
	{
		___timeTotal_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_startValue_4() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___startValue_4)); }
	inline float get_startValue_4() const { return ___startValue_4; }
	inline float* get_address_of_startValue_4() { return &___startValue_4; }
	inline void set_startValue_4(float value)
	{
		___startValue_4 = value;
	}

	inline static int32_t get_offset_of_targetValue_5() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___targetValue_5)); }
	inline float get_targetValue_5() const { return ___targetValue_5; }
	inline float* get_address_of_targetValue_5() { return &___targetValue_5; }
	inline void set_targetValue_5(float value)
	{
		___targetValue_5 = value;
	}

	inline static int32_t get_offset_of_fieldName_6() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___fieldName_6)); }
	inline String_t* get_fieldName_6() const { return ___fieldName_6; }
	inline String_t** get_address_of_fieldName_6() { return &___fieldName_6; }
	inline void set_fieldName_6(String_t* value)
	{
		___fieldName_6 = value;
		Il2CppCodeGenWriteBarrier(&___fieldName_6, value);
	}

	inline static int32_t get_offset_of_targetObject_7() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___targetObject_7)); }
	inline Object_t1021602117 * get_targetObject_7() const { return ___targetObject_7; }
	inline Object_t1021602117 ** get_address_of_targetObject_7() { return &___targetObject_7; }
	inline void set_targetObject_7(Object_t1021602117 * value)
	{
		___targetObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_7, value);
	}

	inline static int32_t get_offset_of_style_8() { return static_cast<int32_t>(offsetof(FloatLerper_t1025062920, ___style_8)); }
	inline int32_t get_style_8() const { return ___style_8; }
	inline int32_t* get_address_of_style_8() { return &___style_8; }
	inline void set_style_8(int32_t value)
	{
		___style_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
