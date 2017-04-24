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

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// System.Collections.Generic.List`1<ToothBehaviour>
struct List_1_t2972729215;
// System.Collections.Generic.List`1<UnityEngine.Collider2D>
struct List_1_t15182870;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::BoundsCheck()
extern "C"  bool PlayerController_BoundsCheck_m2997265591 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidGoOutOfBounds()
extern "C"  void PlayerController_DidGoOutOfBounds_m2885348163 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Respawn()
extern "C"  void PlayerController_Respawn_m3466178516 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPopOutFromRespawn()
extern "C"  void PlayerController_DidPopOutFromRespawn_m2436826102 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateDropThrough()
extern "C"  void PlayerController_UpdateDropThrough_m4288964695 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::LateUpdate()
extern "C"  void PlayerController_LateUpdate_m3468395181 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdatePlayerState()
extern "C"  void PlayerController_UpdatePlayerState_m1823964385 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateIgnoredColliders()
extern "C"  void PlayerController_UpdateIgnoredColliders_m217544628 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::AddColliderToIgnoreList(UnityEngine.Collider2D)
extern "C"  void PlayerController_AddColliderToIgnoreList_m2880275845 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SetIgnoreCollisionWithCollider(UnityEngine.Collider2D,System.Boolean)
extern "C"  void PlayerController_SetIgnoreCollisionWithCollider_m2739026286 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___collider0, bool ___shouldIgnore1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::TeethBecameDeadly(System.Collections.Generic.List`1<ToothBehaviour>)
extern "C"  void PlayerController_TeethBecameDeadly_m182845199 (PlayerController_t4148409433 * __this, List_1_t2972729215 * ___teeth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidDie()
extern "C"  void PlayerController_DidDie_m3168981601 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsRolling()
extern "C"  bool PlayerController_IsRolling_m1259237763 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsHairGrabbable()
extern "C"  bool PlayerController_IsHairGrabbable_m476609546 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::GrabbableTeethOnBottom()
extern "C"  List_1_t15182870 * PlayerController_GrabbableTeethOnBottom_m4293023482 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::GrabbableGoldTeeth()
extern "C"  List_1_t15182870 * PlayerController_GrabbableGoldTeeth_m1061598586 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::GrabbableTeethOnTop()
extern "C"  List_1_t15182870 * PlayerController_GrabbableTeethOnTop_m3977178966 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D PlayerController::GrabbableHairCollider()
extern "C"  Collider2D_t646061738 * PlayerController_GrabbableHairCollider_m3677414172 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPressLateralMove(UnityEngine.Vector2)
extern "C"  void PlayerController_DidPressLateralMove_m4009456758 (PlayerController_t4148409433 * __this, Vector2_t2243707579  ___targetDirection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::UpdateNoLateralMovement()
extern "C"  void PlayerController_UpdateNoLateralMovement_m2987702984 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPressJump()
extern "C"  void PlayerController_DidPressJump_m23886314 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPressThrowTooth()
extern "C"  void PlayerController_DidPressThrowTooth_m646748824 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPressGrab()
extern "C"  void PlayerController_DidPressGrab_m2355111616 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidReleaseGrab()
extern "C"  void PlayerController_DidReleaseGrab_m3993373978 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidPressDropThrough()
extern "C"  void PlayerController_DidPressDropThrough_m857778518 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::CreateToothGrabDownJoint(UnityEngine.Collider2D)
extern "C"  void PlayerController_CreateToothGrabDownJoint_m3189226397 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::CreateToothGrabUpJoint(UnityEngine.Collider2D)
extern "C"  void PlayerController_CreateToothGrabUpJoint_m1826896834 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::CreateHairGrabJoint(UnityEngine.Collider2D)
extern "C"  void PlayerController_CreateHairGrabJoint_m3161054281 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerController::HairGrabPosition()
extern "C"  Vector3_t2243707580  PlayerController_HairGrabPosition_m2846288551 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerController::TeethCarryPosition()
extern "C"  Vector3_t2243707580  PlayerController_TeethCarryPosition_m1683913042 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerController::ToothGrabDownPosition()
extern "C"  Vector3_t2243707580  PlayerController_ToothGrabDownPosition_m3272852611 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DestroyGrabJoint()
extern "C"  void PlayerController_DestroyGrabJoint_m1480826550 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DidGrabToothObject(UnityEngine.GameObject)
extern "C"  void PlayerController_DidGrabToothObject_m3327376336 (PlayerController_t4148409433 * __this, GameObject_t1756533147 * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::GroundTestPoints()
extern "C"  List_1_t1612828712 * PlayerController_GroundTestPoints_m839169252 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::RoofTestPoints()
extern "C"  List_1_t1612828712 * PlayerController_RoofTestPoints_m4120250229 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::LeftTestPoints()
extern "C"  List_1_t1612828712 * PlayerController_LeftTestPoints_m3662067194 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::RightTestPoints()
extern "C"  List_1_t1612828712 * PlayerController_RightTestPoints_m4197696721 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Vector3> PlayerController::CreateContactTestPoints(System.Single,System.Single,System.Int32)
extern "C"  List_1_t1612828712 * PlayerController_CreateContactTestPoints_m2682877944 (PlayerController_t4148409433 * __this, float ___baseAngle0, float ___length1, int32_t ___numPoints2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsGrounded()
extern "C"  bool PlayerController_IsGrounded_m587207618 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsHittingRoof()
extern "C"  bool PlayerController_IsHittingRoof_m1572475719 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::IsContactingWithPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C"  bool PlayerController_IsContactingWithPoints_m1548863978 (PlayerController_t4148409433 * __this, List_1_t1612828712 * ___contactPoints0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Collider2D> PlayerController::CollidersInContactWithPoints(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.LayerMask)
extern "C"  List_1_t15182870 * PlayerController_CollidersInContactWithPoints_m2070722442 (PlayerController_t4148409433 * __this, List_1_t1612828712 * ___contactPoints0, LayerMask_t3188175821  ___mask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnDrawGizmosSelected()
extern "C"  void PlayerController_OnDrawGizmosSelected_m1714800197 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
