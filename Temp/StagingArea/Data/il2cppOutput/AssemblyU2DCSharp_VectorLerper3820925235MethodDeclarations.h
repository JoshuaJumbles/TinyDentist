#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// VectorLerper
struct VectorLerper_t3820925235;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_LerpStyle2611178886.h"

// System.Void VectorLerper::.ctor()
extern "C"  void VectorLerper__ctor_m1913845528 (VectorLerper_t3820925235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorLerper::Lerp(UnityEngine.Object,System.String,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,LerpStyle,System.Boolean)
extern "C"  void VectorLerper_Lerp_m516048563 (VectorLerper_t3820925235 * __this, Object_t1021602117 * ___target0, String_t* ___field1, Vector3_t2243707580  ___start2, Vector3_t2243707580  ___end3, float ___duration4, int32_t ___style5, bool ___loop6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorLerper::Update()
extern "C"  void VectorLerper_Update_m2259854295 (VectorLerper_t3820925235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorLerper::LateUpdate()
extern "C"  void VectorLerper_LateUpdate_m1195902723 (VectorLerper_t3820925235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VectorLerper::LerpUpdate()
extern "C"  void VectorLerper_LerpUpdate_m2404887634 (VectorLerper_t3820925235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
