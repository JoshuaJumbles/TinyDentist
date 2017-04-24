﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_RigidbodyType2D1116729369.h"
#include "UnityEngine_UnityEngine_RigidbodyConstraints2D1256536801.h"
#include "UnityEngine_UnityEngine_ForceMode2D4177575466.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"

// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_get_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_get_velocity_m3018296454 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_set_velocity(UnityEngine.Vector2&)
extern "C"  void Rigidbody2D_INTERNAL_set_velocity_m1537663346 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularVelocity(System.Single)
extern "C"  void Rigidbody2D_set_angularVelocity_m4146431763 (Rigidbody2D_t502193897 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
extern "C"  void Rigidbody2D_set_gravityScale_m1426625078 (Rigidbody2D_t502193897 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
extern "C"  void Rigidbody2D_set_bodyType_m2943264019 (Rigidbody2D_t502193897 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
extern "C"  void Rigidbody2D_set_constraints_m1595222955 (Rigidbody2D_t502193897 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_simulated(System.Boolean)
extern "C"  void Rigidbody2D_set_simulated_m2089192866 (Rigidbody2D_t502193897 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddForce_m4245830473 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  ___force0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m1958598324 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___self0, Vector2_t2243707579 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;