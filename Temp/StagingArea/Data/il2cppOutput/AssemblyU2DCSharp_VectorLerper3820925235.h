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
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_LerpStyle2611178886.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VectorLerper
struct  VectorLerper_t3820925235  : public MonoBehaviour_t1158329972
{
public:
	// System.Single VectorLerper::timeTotal
	float ___timeTotal_2;
	// System.Single VectorLerper::time
	float ___time_3;
	// UnityEngine.Vector3 VectorLerper::startValue
	Vector3_t2243707580  ___startValue_4;
	// UnityEngine.Vector3 VectorLerper::targetValue
	Vector3_t2243707580  ___targetValue_5;
	// System.String VectorLerper::fieldName
	String_t* ___fieldName_6;
	// UnityEngine.Object VectorLerper::targetObject
	Object_t1021602117 * ___targetObject_7;
	// LerpStyle VectorLerper::style
	int32_t ___style_8;
	// System.Boolean VectorLerper::shouldLoop
	bool ___shouldLoop_9;
	// System.Boolean VectorLerper::shouldAutoStart
	bool ___shouldAutoStart_10;
	// System.Boolean VectorLerper::isLate
	bool ___isLate_11;

public:
	inline static int32_t get_offset_of_timeTotal_2() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___timeTotal_2)); }
	inline float get_timeTotal_2() const { return ___timeTotal_2; }
	inline float* get_address_of_timeTotal_2() { return &___timeTotal_2; }
	inline void set_timeTotal_2(float value)
	{
		___timeTotal_2 = value;
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}

	inline static int32_t get_offset_of_startValue_4() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___startValue_4)); }
	inline Vector3_t2243707580  get_startValue_4() const { return ___startValue_4; }
	inline Vector3_t2243707580 * get_address_of_startValue_4() { return &___startValue_4; }
	inline void set_startValue_4(Vector3_t2243707580  value)
	{
		___startValue_4 = value;
	}

	inline static int32_t get_offset_of_targetValue_5() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___targetValue_5)); }
	inline Vector3_t2243707580  get_targetValue_5() const { return ___targetValue_5; }
	inline Vector3_t2243707580 * get_address_of_targetValue_5() { return &___targetValue_5; }
	inline void set_targetValue_5(Vector3_t2243707580  value)
	{
		___targetValue_5 = value;
	}

	inline static int32_t get_offset_of_fieldName_6() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___fieldName_6)); }
	inline String_t* get_fieldName_6() const { return ___fieldName_6; }
	inline String_t** get_address_of_fieldName_6() { return &___fieldName_6; }
	inline void set_fieldName_6(String_t* value)
	{
		___fieldName_6 = value;
		Il2CppCodeGenWriteBarrier(&___fieldName_6, value);
	}

	inline static int32_t get_offset_of_targetObject_7() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___targetObject_7)); }
	inline Object_t1021602117 * get_targetObject_7() const { return ___targetObject_7; }
	inline Object_t1021602117 ** get_address_of_targetObject_7() { return &___targetObject_7; }
	inline void set_targetObject_7(Object_t1021602117 * value)
	{
		___targetObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___targetObject_7, value);
	}

	inline static int32_t get_offset_of_style_8() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___style_8)); }
	inline int32_t get_style_8() const { return ___style_8; }
	inline int32_t* get_address_of_style_8() { return &___style_8; }
	inline void set_style_8(int32_t value)
	{
		___style_8 = value;
	}

	inline static int32_t get_offset_of_shouldLoop_9() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___shouldLoop_9)); }
	inline bool get_shouldLoop_9() const { return ___shouldLoop_9; }
	inline bool* get_address_of_shouldLoop_9() { return &___shouldLoop_9; }
	inline void set_shouldLoop_9(bool value)
	{
		___shouldLoop_9 = value;
	}

	inline static int32_t get_offset_of_shouldAutoStart_10() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___shouldAutoStart_10)); }
	inline bool get_shouldAutoStart_10() const { return ___shouldAutoStart_10; }
	inline bool* get_address_of_shouldAutoStart_10() { return &___shouldAutoStart_10; }
	inline void set_shouldAutoStart_10(bool value)
	{
		___shouldAutoStart_10 = value;
	}

	inline static int32_t get_offset_of_isLate_11() { return static_cast<int32_t>(offsetof(VectorLerper_t3820925235, ___isLate_11)); }
	inline bool get_isLate_11() const { return ___isLate_11; }
	inline bool* get_address_of_isLate_11() { return &___isLate_11; }
	inline void set_isLate_11(bool value)
	{
		___isLate_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
