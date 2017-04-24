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

// JumpLerper
struct JumpLerper_t168384966;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void JumpLerper::.ctor()
extern "C"  void JumpLerper__ctor_m465245505 (JumpLerper_t168384966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JumpLerper::MoveTo(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,System.Single)
extern "C"  void JumpLerper_MoveTo_m3631543733 (JumpLerper_t168384966 * __this, Transform_t3275118058 * ___obj0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___target2, float ___gravityFactor3, float ___duration4, float ___delay5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JumpLerper::Lerp(System.Single)
extern "C"  void JumpLerper_Lerp_m2162919631 (JumpLerper_t168384966 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
