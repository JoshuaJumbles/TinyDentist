using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerState{
	Grounded,Airborn,HoldingHair,CarryingToothGrounded,
	CarryingToothAirborn,YankingToothDown,YankingToothUp,

	KnockedOut
}
public class PlayerController : MonoBehaviour {
	public PlayerState playerState = PlayerState.Airborn;
	public PlayerState lastFramePlayerState = PlayerState.Airborn;
	// public float groundMinSpeedX = 1f;
	public float rollSpeed = 1f;
	public float walkSpeed = 1f;

	public float carryWalkSpeedFactor = 0.8f;
	public float carryJumpSpeedFactor = 0.8f;

	public float airLateralSpeed = 1f;
	// public float
	public float initialJumpVelocity = 2f;
	// public float jumpPackTimeTotal = 1f;
	// float jumpPackTime = 0f;
	// public float jumpPackVelocity = 0.1f;

	public float contactTestLengthRoof = 0.25f;
	public float contactTestLengthSides = 0.25f;
	public float contactTestLengthBot = 0.25f;

	public int contactTestPointsBot = 4;
	public int contactTestPointsSide = 2;
	public int contactTestPointsTop = 5;
	public List<float> contactTestAngles = new List<float>();

	public float grabRadius = 0.2f;
	public float toothGrabDownRadius = 0.2f;

	public float carryToothRadius = 0.3f;

	PlayerSpriteBehaviour spriteBehaviour;


	Rigidbody2D rigidBody;
	
	
	public LayerMask groundMask;
	public LayerMask botTeethMask;
	public LayerMask topTeethMask;
	public LayerMask hairMask;

	public Collider2D rollCollider;
	public Collider2D standCollider;

	public float idleThreshold = 0.2f;

	public SpringJoint2D grabJoint;

	public DistanceJoint2D toothJoint;
	ToothBehaviour targetYankTooth;
	GameObject carryObject;
	public float throwToothMinForce = 0.5f;
	public float throwToothSpeedFactor = 0.3f;

	public float hairGrabSpringFrequency = 4f;
	public float botToothGrabSpringFrequency = 6f;

	public List<Collider2D> ignoredColliderList = new List<Collider2D>();

	public List<Collider2D> debugAllContactedList = new List<Collider2D>();

	public float dropThroughTimeTotal = 0.2f;
	float dropThroughTime = 0f;

	public float throwToothXDeadZone = 0.2f;

	public float deathLaunchXMin = 5f;
	public float deathLaunchXMax = 4f;

	public float deathLaunchYMin = 5f;
	public float deathLaunchYMax = 10f;

	public Vector2 screenBoundsSize = new Vector3(15f,15f);
	bool isInBounds = true;

	public GameObject respawnArmPrefab;
	public float hairJumpBoost = 1.2f;

	bool isGrabQueued = false;

	float downGravityFactor = 1.1f;

	// public float upwardsVelocityForSideRejection = 0.2f;
	void Start () {
		Cursor.visible = false;
		spriteBehaviour = GetComponent<PlayerSpriteBehaviour>();
		rigidBody = GetComponent<Rigidbody2D>();
	}
	
	// Update is called once per frame
	void Update () {
		if(isInBounds && !BoundsCheck()){
			DidGoOutOfBounds();
			return;
		}else if(!isInBounds){
			return;
		}

		if(dropThroughTime > 0f){
			UpdateDropThrough();
		}

		if(playerState == PlayerState.KnockedOut){
			spriteBehaviour.UpdateGraphicsForMotion();

			lastFramePlayerState = playerState;
			return;
		}

		var useStandingCollider = (IsGrounded() && !IsRolling());
		if(IsGrounded() && playerState == PlayerState.CarryingToothGrounded){
			useStandingCollider = true;
		}
		// standCollider.gameObject.SetActive(useStandingCollider);

		
		

		standCollider.isTrigger = (!useStandingCollider);
		rigidBody.constraints = (useStandingCollider) ? RigidbodyConstraints2D.FreezeRotation : RigidbodyConstraints2D.None;

		Vector2 walkVector = Vector2.zero;

		if(Input.GetKey(KeyCode.A)){
			walkVector += Vector2.left;
		}if (Input.GetKey(KeyCode.D)){
			walkVector += Vector2.right;
		}

		// if(Input.GetKeyDown(KeyCode.R)){
		// 	DidDie();
		// }

		if(walkVector.x != 0f || walkVector.y != 0f){
			DidPressLateralMove(walkVector);
		}else{
			UpdateNoLateralMovement();
		}

		if(Input.GetKeyDown(KeyCode.W)){
			DidPressJump();
		}

		if(Input.GetKey(KeyCode.S)){//IsGrounded() && Input.GetKeyDown(KeyCode.S)){
			DidPressDropThrough();
			
		}
		rigidBody.gravityScale = (Input.GetKey(KeyCode.S)) ?  downGravityFactor : 1f;

		if(Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.LeftShift)){
			if(playerState == PlayerState.CarryingToothAirborn || playerState == PlayerState.CarryingToothGrounded){
				DidPressThrowTooth();
			}else{
				DidPressGrab();
			}
		}



		if(Input.GetKeyUp(KeyCode.Space) || Input.GetKeyUp(KeyCode.LeftShift)){
			isGrabQueued = false;
			DidReleaseGrab();
		}

		if(isGrabQueued){
			DidPressGrab();
		}

		UpdatePlayerState();
		
		if(targetYankTooth != null && (
		playerState == PlayerState.YankingToothUp 
		|| playerState == PlayerState.YankingToothDown)){
			// var toothBehaviour = carryObject.GetComponentInParent<ToothBehaviour>();
			// if(toothBehaviour != null){
				targetYankTooth.PlayerDidYank();
			// }
			
		}

		spriteBehaviour.UpdateGraphicsForMotion();

		lastFramePlayerState = playerState;
		
	}

	bool BoundsCheck(){
		var rect = new Rect(Vector2.zero,screenBoundsSize);
		rect.center = Vector2.zero;
		return rect.Contains(transform.position);

	}

	void DidGoOutOfBounds(){
		isInBounds = false;
		rigidBody.simulated = false;
		Respawn();
	}

	void Respawn(){
		spriteBehaviour.DidRespawn();
		rollCollider.gameObject.SetActive(true);
		standCollider.gameObject.SetActive(true);
		var respawnArm = GameObject.Instantiate(respawnArmPrefab);
	}

	public void DidPopOutFromRespawn(){
		isInBounds = true;
		playerState = PlayerState.Airborn;
		rigidBody.simulated = true;
		rigidBody.velocity = Vector3.zero;
		rigidBody.angularVelocity = 0f;
	}


	void UpdateDropThrough(){
		dropThroughTime -= Time.deltaTime;
		var colliders = CollidersInContactWithPoints(GroundTestPoints(),groundMask);
		foreach(Collider2D collider in colliders){
			
			AddColliderToIgnoreList(collider);
		}
	}

	
	void LateUpdate()
	{
		UpdateIgnoredColliders();
	}

	public void UpdatePlayerState(){
		var isCarryingTooth = (playerState == PlayerState.CarryingToothAirborn ||
							playerState == PlayerState.CarryingToothGrounded);
		var isYankingTooth = (playerState == PlayerState.YankingToothDown ||
							playerState == PlayerState.YankingToothUp);

		if(playerState != PlayerState.HoldingHair && 
		!isCarryingTooth && 
		!isYankingTooth &&
		playerState != PlayerState.KnockedOut ){
			playerState = (IsGrounded())? PlayerState.Grounded : PlayerState.Airborn;
		}

		if(isCarryingTooth){
			playerState = (IsGrounded())? PlayerState.CarryingToothGrounded : PlayerState.CarryingToothAirborn;
		}


	}

	void UpdateIgnoredColliders(){
		var ptList = new List<Vector3>(RoofTestPoints());
		// if(rigidBody.velocity.y > upwardsVelocityForSideRejection){
		ptList.AddRange(LeftTestPoints());
		ptList.AddRange(RightTestPoints());
		// }
		
		var colliders = CollidersInContactWithPoints(ptList,groundMask);

		var downwardSimultaneousColliders = CollidersInContactWithPoints(GroundTestPoints(),groundMask);

		ptList.AddRange(GroundTestPoints());

		var allHits = (CollidersInContactWithPoints(ptList,groundMask));//Physics2D.CircleCastAll(transform.position,contactTestLengthSides,Vector2.zero,0f,groundMask,-100,100));
		// debugAllContactedList = new List<Collider2D>(Physics2D.OverlapCircleAll(transform.position,contactTestLengthSides,groundMask,-100,100));
			
		foreach(Collider2D ignored in ignoredColliderList){
			if(downwardSimultaneousColliders.Contains(ignored)){
				downwardSimultaneousColliders.Remove(ignored);
			}
		}

		foreach(Collider2D hitGroundAtSameTimeCollider in downwardSimultaneousColliders){
			if(colliders.Contains(hitGroundAtSameTimeCollider)){
				colliders.Remove(hitGroundAtSameTimeCollider);
			}
		}

		foreach(Collider2D collider in colliders){
			
			if(!ignoredColliderList.Contains(collider)){
				AddColliderToIgnoreList(collider);
			}
		}


		List<Collider2D> removalList = new List<Collider2D>();
		foreach(Collider2D possibleFreeCollider in ignoredColliderList){
			var isFree = true;
			// foreach(RaycastHit2D rayHit in allHits){
			// 	if(rayHit.collider == possibleFreeCollider){
			// 		isFree = false;
			// 		break;
			// 	}
			// }

			if(allHits.Contains(possibleFreeCollider)){
				isFree = false;
				break;
			}

			if(isFree){
				removalList.Add(possibleFreeCollider);
			}
		}

		foreach(Collider2D removal in removalList){
			SetIgnoreCollisionWithCollider(removal,false);
			ignoredColliderList.Remove(removal);
		}

	}

	void AddColliderToIgnoreList(Collider2D collider){
		if(!ignoredColliderList.Contains(collider)){
			SetIgnoreCollisionWithCollider(collider,true);
		ignoredColliderList.Add(collider);
		}
		
	}

	void SetIgnoreCollisionWithCollider(Collider2D collider, bool shouldIgnore){
		Physics2D.IgnoreCollision(rollCollider, collider,shouldIgnore);
		Physics2D.IgnoreCollision(standCollider, collider,shouldIgnore);
	}

	public void TeethBecameDeadly(List<ToothBehaviour> teeth){
		if(playerState == PlayerState.HoldingHair || playerState == PlayerState.KnockedOut){//PlayerState.Grounded|| playerState != PlayerState.CarryingToothGrounded){
			return;
		}
		foreach(ToothBehaviour tooth in teeth){
			if(tooth.toothState == ToothState.Anchored){
				var collider = tooth.GetComponentInChildren<Collider2D>();
				var isColliding = collider.OverlapPoint(transform.position);
				isColliding = isColliding || collider.OverlapPoint(ToothGrabDownPosition());
				isColliding = isColliding || collider.OverlapPoint(HairGrabPosition());
				if(isColliding){
					DidDie();
					return;
				}
				continue;
			}
		}
	}

	void DidDie(){
		DidReleaseGrab();
		if(carryObject != null){
			DidPressThrowTooth();
		}

		playerState = PlayerState.KnockedOut;
		// dropThroughTime = 10f;
		var xForce = Random.Range(deathLaunchXMin,deathLaunchXMax);
		xForce *= (Random.value <= 0.5f) ? -1f : 1f;
		var yForce = Random.Range(deathLaunchYMin,deathLaunchYMax);
		rigidBody.AddForce(new Vector2(xForce,yForce),ForceMode2D.Impulse);
		spriteBehaviour.DidDie();
		rollCollider.gameObject.SetActive(false);
		standCollider.gameObject.SetActive(false);
		
	}


	public bool IsRolling(){
		return (Mathf.Abs(rigidBody.velocity.x) >= idleThreshold);
	}

	public bool IsHairGrabbable(){
		return Physics2D.OverlapPoint(HairGrabPosition(),hairMask,-100,100);
			//OverlapCircle(transform.position,grabRadius,hairMask,-100,100);
	}

	public List<Collider2D> GrabbableTeethOnBottom(){
		var colliderList =  Physics2D.OverlapPointAll(ToothGrabDownPosition(),groundMask,-100,100);
		var resultList = new List<Collider2D>();
		foreach(Collider2D collider in colliderList){
			if(collider.gameObject.tag == "botTeeth"){
				resultList.Add(collider);
			}
		}

		//TODO- deal with overlapping hair case, sort by z
		return resultList;
	}

	public List<Collider2D> GrabbableGoldTeeth(){
		var colliderList = new List<Collider2D>(  Physics2D.OverlapPointAll(ToothGrabDownPosition(),groundMask,-100,100));
		colliderList.AddRange( Physics2D.OverlapPointAll(transform.position,groundMask,-100,100));
		colliderList.AddRange( Physics2D.OverlapPointAll(HairGrabPosition(),groundMask,-100,100));
		var resultList = new List<Collider2D>();
		foreach(Collider2D collider in colliderList){
			if(collider.gameObject.tag == "goldTeeth"){
				var goldToothBehaviour = collider.gameObject.GetComponentInParent<GoldToothBehaviour>();
				if(goldToothBehaviour != null && goldToothBehaviour.toothState == ToothState.Free){
					resultList.Add(collider);
				}				
			}
		}

		return resultList;
	}

	public List<Collider2D> GrabbableTeethOnTop(){
		var colliderList =  new List<Collider2D>(Physics2D.OverlapPointAll(HairGrabPosition(),topTeethMask,-100,100));
		return colliderList;
	}

	public Collider2D GrabbableHairCollider(){
		var colliderList =  Physics2D.OverlapPointAll(HairGrabPosition(),hairMask,-100,100);
		//TODO- deal with overlapping hair case, sort by z
		return colliderList[0];
	}


	void DidPressLateralMove(Vector2 targetDirection){
		//TODO: less abrupt turn
		if((rigidBody.velocity.x < 0 && targetDirection.x > 0) ||
			(rigidBody.velocity.x > 0 && targetDirection.x < 0)){
				rigidBody.velocity = new Vector2(0f,rigidBody.velocity.y);
				rigidBody.angularVelocity = 0f;
		}
		var speed = 0f;
		if(IsGrounded()){
			speed = (IsRolling())? rollSpeed : walkSpeed;
			if(playerState == PlayerState.CarryingToothGrounded){
				speed *= carryWalkSpeedFactor;
			}
		}else{
			speed = airLateralSpeed;
		}
		rigidBody.velocity += speed * targetDirection * Time.deltaTime;
	}

	void UpdateNoLateralMovement(){

	}

	void DidPressJump(){
		if(playerState != PlayerState.Airborn && playerState != PlayerState.CarryingToothAirborn){
			DidReleaseGrab();
			var jumpVel = initialJumpVelocity;
			if(playerState == PlayerState.HoldingHair){
				jumpVel *= hairJumpBoost;
			}
			if(playerState == PlayerState.CarryingToothGrounded){
				jumpVel *= carryJumpSpeedFactor;
			}

			rigidBody.AddForce(Vector2.up * jumpVel, ForceMode2D.Impulse);
		}
	}

	void DidPressThrowTooth(){
		var throwDirection = Vector3.up;
		if(rigidBody.velocity.x < -throwToothXDeadZone){
			throwDirection = Vector3.left + Vector3.up;
		}else if(rigidBody.velocity.x > throwToothXDeadZone){
			throwDirection = Vector3.right + Vector3.up;
		}
		// var throwSpeed = rigidBody.velocity.magnitude * throwToothSpeedFactor 
		// 					+ throwToothMinForce;

		var vel3 = new Vector3(rigidBody.velocity.x,rigidBody.velocity.y,0f);
		var forceVector = throwDirection.normalized * (throwToothMinForce + vel3.magnitude * throwToothSpeedFactor);
							// + throwToothMinForce * throwDirection;
		var toothBehaviour = carryObject.GetComponent<ToothBehaviour>();
		if(toothBehaviour != null){
			toothBehaviour.ThrowToothInDirection(forceVector);
		}else{
			var goldToothBehaviour = carryObject.GetComponentInParent<GoldToothBehaviour>();
			if(goldToothBehaviour != null){
				goldToothBehaviour.ThrowToothInDirection(forceVector);
			}
		}
		
		carryObject = null;
		playerState = (IsGrounded())?PlayerState.Grounded : PlayerState.Airborn;
	}

	void DidPressGrab(){
		var grabbableGoldTeeth = GrabbableGoldTeeth();
		if(grabbableGoldTeeth.Count > 0){
			var goldToothBehaviour = grabbableGoldTeeth[0].GetComponentInParent<GoldToothBehaviour>();
			goldToothBehaviour.toothState = ToothState.Carried;
			DidGrabToothObject(grabbableGoldTeeth[0].gameObject);
			isGrabQueued = false;
			return;
		}

		var grabbableBotTeeth = GrabbableTeethOnBottom();
		
		if(grabbableBotTeeth.Count >0){
			CreateToothGrabDownJoint(grabbableBotTeeth[0]);
			isGrabQueued = false;
			return;
		}

		var grabbableTopTeeth = GrabbableTeethOnTop();
		if(grabbableTopTeeth.Count > 0){
			CreateToothGrabUpJoint(grabbableTopTeeth[0]);
			isGrabQueued = false;
			return;
		}

		if(IsHairGrabbable()){
			var collider = GrabbableHairCollider();
			CreateHairGrabJoint(collider);
			isGrabQueued = false;
			return;
		}

		isGrabQueued = true;
	}

	void DidReleaseGrab(){
		if(grabJoint != null || toothJoint != null){
			DestroyGrabJoint();
		}

		
	}

	void DidPressDropThrough(){
		dropThroughTime = dropThroughTimeTotal;
	}

	void CreateToothGrabDownJoint(Collider2D collider){
		playerState = PlayerState.YankingToothDown;
		toothJoint = gameObject.AddComponent<DistanceJoint2D>();
		// toothJoint.frequency = botToothGrabSpringFrequency;
		var otherRigidBody2D = collider.GetComponentInParent<Rigidbody2D>();
		toothJoint.connectedBody = otherRigidBody2D;
		toothJoint.anchor = Vector2.zero;

		var worldGrabPoint = ToothGrabDownPosition();
		var colliderRelativeGrabPoint = collider.transform.InverseTransformPoint(worldGrabPoint);
		toothJoint.connectedAnchor = new Vector2(0f,colliderRelativeGrabPoint.y);

		toothJoint.maxDistanceOnly = true;
		toothJoint.enableCollision = true;
		toothJoint.distance *= 1.05f;

		targetYankTooth = collider.gameObject.GetComponentInParent<ToothBehaviour>();

		// grabJoint.distance *= grabJoint.distance * 0.8f;
		toothJoint.autoConfigureDistance = false;
	}

	void CreateToothGrabUpJoint(Collider2D collider){
		playerState = PlayerState.YankingToothUp;
		toothJoint = gameObject.AddComponent<DistanceJoint2D>();
		// toothJoint.frequency = botToothGrabSpringFrequency;
		var otherRigidBody2D = collider.GetComponentInParent<Rigidbody2D>();
		toothJoint.connectedBody = otherRigidBody2D;
		toothJoint.anchor = Vector2.zero;

		var worldGrabPoint = HairGrabPosition();
		var colliderRelativeGrabPoint = collider.transform.InverseTransformPoint(worldGrabPoint);
		toothJoint.connectedAnchor = new Vector2(0f,colliderRelativeGrabPoint.y);

		toothJoint.maxDistanceOnly = true;
		toothJoint.enableCollision = true;
		// toothJoint.distance *= 1.05f;

		targetYankTooth = collider.gameObject.GetComponentInParent<ToothBehaviour>();
		toothJoint.autoConfigureDistance = false;
	}


	void CreateHairGrabJoint(Collider2D collider){
		playerState = PlayerState.HoldingHair;
		grabJoint = gameObject.AddComponent<SpringJoint2D>();
		grabJoint.frequency = hairGrabSpringFrequency;
		var otherRigidBody2D = collider.GetComponentInParent<Rigidbody2D>();
		grabJoint.connectedBody = otherRigidBody2D;
		grabJoint.anchor = Vector2.zero;

		var worldGrabPoint = HairGrabPosition();
		var colliderRelativeGrabPoint = collider.transform.InverseTransformPoint(worldGrabPoint);
		grabJoint.connectedAnchor = colliderRelativeGrabPoint;
		grabJoint.autoConfigureDistance = false;
		
	}

	Vector3 HairGrabPosition(){
		return transform.position + Vector3.up * grabRadius;
	}

	public Vector3 TeethCarryPosition(){
		return transform.position + Vector3.up * carryToothRadius;
	}

	Vector3 ToothGrabDownPosition(){
		return transform.position + Vector3.down * toothGrabDownRadius;
	}

	void DestroyGrabJoint(){
		playerState = PlayerState.Airborn;
		if(grabJoint != null){
			Destroy(grabJoint);
		}

		if(toothJoint != null){
			Destroy(toothJoint);
		}
		
	}


	public void DidGrabToothObject(GameObject target){
		print("yanked tooth!");
		carryObject = target;
		DidReleaseGrab();
		// Destroy(tooth.gameObject);
		playerState = PlayerState.CarryingToothAirborn;
	}
	

	List<Vector3> GroundTestPoints(){
		return CreateContactTestPoints(270f,contactTestLengthBot,contactTestPointsBot);
	}

	List<Vector3> RoofTestPoints(){
		return CreateContactTestPoints(90f,contactTestLengthRoof,contactTestPointsTop);
	}

	List<Vector3> LeftTestPoints(){
		return CreateContactTestPoints(180f,contactTestLengthSides,contactTestPointsSide);
	}

	List<Vector3> RightTestPoints(){
		return CreateContactTestPoints(0f,contactTestLengthSides,contactTestPointsSide);
	}

	List<Vector3> CreateContactTestPoints(float baseAngle, float length,int numPoints){
		var checkPoints = new List<Vector3>();

		var dispX = Mathf.Cos(baseAngle * Mathf.Deg2Rad);
		var dispY = Mathf.Sin(baseAngle * Mathf.Deg2Rad);
		var vect = new Vector3(dispX,dispY,0f) * length;
		var pt = transform.position + vect;
		checkPoints.Add(pt);

		var angleRad = baseAngle * Mathf.Deg2Rad;
		for(int i = 0;i<numPoints;i++){
			float testAngle = contactTestAngles[i];
			var adjustedAngle = baseAngle + testAngle;
			dispX = Mathf.Cos(adjustedAngle * Mathf.Deg2Rad);
			dispY = Mathf.Sin(adjustedAngle * Mathf.Deg2Rad);
			vect = new Vector3(dispX,dispY,0f) * length;
			pt = transform.position + vect;
			pt += new Vector3(rigidBody.velocity.x,rigidBody.velocity.y,0f) * Time.smoothDeltaTime;
			checkPoints.Add(pt);

			var flippedAngle = baseAngle - testAngle;
			dispX = Mathf.Cos(flippedAngle * Mathf.Deg2Rad);
			dispY = Mathf.Sin(flippedAngle * Mathf.Deg2Rad);
			vect = new Vector3(dispX,dispY,0f) * length;
			pt = transform.position + vect;
			pt += new Vector3(rigidBody.velocity.x,rigidBody.velocity.y,0f) * Time.smoothDeltaTime;
			checkPoints.Add(pt);
		}

		return checkPoints;
	}

	public bool IsGrounded(){
		// return IsContactingWithPoints(GroundTestPoints());
		var colliders = CollidersInContactWithPoints(GroundTestPoints(),groundMask);
		colliders.AddRange(CollidersInContactWithPoints(GroundTestPoints(),botTeethMask));
		foreach(Collider2D collider in colliders){
			if(!ignoredColliderList.Contains(collider)){
				return true;
			}
		}
		return false;
	}
	
	public bool IsHittingRoof(){
		return IsContactingWithPoints(RoofTestPoints());
	}

	bool IsContactingWithPoints(List<Vector3> contactPoints){
		var contactTest = false;
		foreach(Vector3 pt in contactPoints){
			if(Physics2D.OverlapPoint(pt,groundMask.value,-100,100)){
				return true;
			}
		}
		return contactTest;
	}

	List<Collider2D> CollidersInContactWithPoints(List<Vector3> contactPoints, LayerMask mask){
		var contactList = new List<Collider2D>();
		foreach(Vector3 pt in contactPoints){
			contactList.AddRange(Physics2D.OverlapPointAll(pt,mask.value,-100,100));
		}
		return contactList;
	}

	


	void OnDrawGizmosSelected()
	{
		Gizmos.color = Color.HSVToRGB(0.2f,0.9f,1f);
		foreach(Vector3 pt in GroundTestPoints()){
			Gizmos.DrawLine(transform.position,pt);
		}

		Gizmos.color = Color.HSVToRGB(0.5f,0.9f,1f);
		foreach(Vector3 pt in RoofTestPoints()){
			Gizmos.DrawLine(transform.position,pt);
		}

		Gizmos.color = Color.HSVToRGB(0.7f,0.9f,1f);
		foreach(Vector3 pt in LeftTestPoints()){
			Gizmos.DrawLine(transform.position,pt);
		}

		Gizmos.color = Color.HSVToRGB(0.8f,0.9f,1f);
		foreach(Vector3 pt in RightTestPoints()){
			Gizmos.DrawLine(transform.position,pt);
		}

		Gizmos.color = Color.HSVToRGB(0.05f,0.7f,0.6f);
		Gizmos.DrawWireSphere(HairGrabPosition(),0.1f);

		Gizmos.color = Color.HSVToRGB(0.15f,0.7f,0.6f);
		Gizmos.DrawWireSphere(ToothGrabDownPosition(),0.1f);
		

		Gizmos.color = Color.HSVToRGB(0.4f,0.7f,0.9f);
		Gizmos.DrawWireSphere(TeethCarryPosition(),0.1f);

		Gizmos.color = Color.red;
		Gizmos.DrawWireCube(Vector2.zero,screenBoundsSize);
	}
	
	
}
