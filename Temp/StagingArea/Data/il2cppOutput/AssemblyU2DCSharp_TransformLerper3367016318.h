#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_EaseType1512366322.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TransformLerper
struct  TransformLerper_t3367016318  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TransformLerper::duration
	float ___duration_2;
	// UnityEngine.Transform TransformLerper::obj
	Transform_t3275118058 * ___obj_3;
	// UnityEngine.Vector3 TransformLerper::startPosition
	Vector3_t2243707580  ___startPosition_4;
	// UnityEngine.Vector3 TransformLerper::targetPosition
	Vector3_t2243707580  ___targetPosition_5;
	// System.Single TransformLerper::currentTime
	float ___currentTime_6;
	// EaseType TransformLerper::ease
	int32_t ___ease_7;
	// System.Boolean TransformLerper::isRunning
	bool ___isRunning_8;

public:
	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___duration_2)); }
	inline float get_duration_2() const { return ___duration_2; }
	inline float* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(float value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___obj_3)); }
	inline Transform_t3275118058 * get_obj_3() const { return ___obj_3; }
	inline Transform_t3275118058 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(Transform_t3275118058 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier(&___obj_3, value);
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___startPosition_4)); }
	inline Vector3_t2243707580  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t2243707580 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t2243707580  value)
	{
		___startPosition_4 = value;
	}

	inline static int32_t get_offset_of_targetPosition_5() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___targetPosition_5)); }
	inline Vector3_t2243707580  get_targetPosition_5() const { return ___targetPosition_5; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_5() { return &___targetPosition_5; }
	inline void set_targetPosition_5(Vector3_t2243707580  value)
	{
		___targetPosition_5 = value;
	}

	inline static int32_t get_offset_of_currentTime_6() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___currentTime_6)); }
	inline float get_currentTime_6() const { return ___currentTime_6; }
	inline float* get_address_of_currentTime_6() { return &___currentTime_6; }
	inline void set_currentTime_6(float value)
	{
		___currentTime_6 = value;
	}

	inline static int32_t get_offset_of_ease_7() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___ease_7)); }
	inline int32_t get_ease_7() const { return ___ease_7; }
	inline int32_t* get_address_of_ease_7() { return &___ease_7; }
	inline void set_ease_7(int32_t value)
	{
		___ease_7 = value;
	}

	inline static int32_t get_offset_of_isRunning_8() { return static_cast<int32_t>(offsetof(TransformLerper_t3367016318, ___isRunning_8)); }
	inline bool get_isRunning_8() const { return ___isRunning_8; }
	inline bool* get_address_of_isRunning_8() { return &___isRunning_8; }
	inline void set_isRunning_8(bool value)
	{
		___isRunning_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
