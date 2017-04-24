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

// TransformLerper
struct TransformLerper_t3367016318;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void TransformLerper::.ctor()
extern "C"  void TransformLerper__ctor_m3137240115 (TransformLerper_t3367016318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformLerper::MoveTo(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  void TransformLerper_MoveTo_m767073058 (TransformLerper_t3367016318 * __this, Transform_t3275118058 * ___obj0, Vector3_t2243707580  ___start1, Vector3_t2243707580  ___target2, float ___duration3, float ___delay4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformLerper::Update()
extern "C"  void TransformLerper_Update_m1072361672 (TransformLerper_t3367016318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformLerper::Lerp(System.Single)
extern "C"  void TransformLerper_Lerp_m1329477473 (TransformLerper_t3367016318 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
