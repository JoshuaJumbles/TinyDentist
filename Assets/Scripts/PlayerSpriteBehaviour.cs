using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSpriteBehaviour : MonoBehaviour {


	public List<Sprite> airTimeSprites = new List<Sprite>();
	public List<Sprite> airTimeDescentSprites = new List<Sprite>();
	public List<Sprite> rollSprites = new List<Sprite>();
	public List<Sprite> idleStates = new List<Sprite>();
	public List<Sprite> walkSprites = new List<Sprite>();
	public List<Sprite> grabOnSprites = new List<Sprite>();
	public List<Sprite> carrySprites = new List<Sprite>();
	public List<Sprite> carryJumpSprites = new List<Sprite>();

	public List<Sprite> yankingSprites = new List<Sprite>();
	
	Rigidbody2D rigidBody;
	PlayerController playerController;
	public SpriteRenderer bodyRenderer;

	public Transform graphicsRoot;

	float lastAirTimeTheta = 0f;
	// float airTimeMixFilter = 0.7f;
	public float airTurnSpeed = 0.5f;

	public float turnSpeedThreshold = 0.05f;

	public float hangingKickTimeTotal = 0.15f;
	float hangingKickTime = 0f;

	public float deathRotationSpeedMin = 10f;
	public float deathRotationSpeedMax = 10f;
	public float deathRotationSpeed = 0f;
	public float deathRotation = 0f;
	
	public float targetDeathScale = 3f;
	public float deathScaleLerpTime = 5f;
	VectorLerper deathScaleLerper;
	// Use this for initialization
	void Start () {
		playerController = GetComponent<PlayerController>();
		rigidBody = GetComponent<Rigidbody2D>();
	}

	public void UpdateGraphicsForMotion(){
		switch(playerController.playerState){
			case PlayerState.Airborn:
				UpdateAirbornGraphics();
				break;
			case PlayerState.Grounded:
				UpdateGroundedGraphics();
				break;
			case PlayerState.HoldingHair:
				UpdateHoldingHairGraphics();
				break;
			case PlayerState.CarryingToothAirborn:
				UpdateCarryingAirbornGraphics();
				break;
			case PlayerState.CarryingToothGrounded:
				UpdateCarryingGroundedGraphics();
				break;
			case PlayerState.YankingToothDown:
				UpdateYankingDownGraphics();
				break;
			case PlayerState.YankingToothUp:
				UpdateYankingUpGraphics();
				break;
			case PlayerState.KnockedOut:
				UpdateKnockedOutGraphics();
				break;
		}
	}

	public void DidRespawn(){
		if(deathScaleLerper != null){
			Destroy(deathScaleLerper);
		}
		graphicsRoot.localScale = Vector3.one;
		graphicsRoot.rotation = Quaternion.identity;
	}

	void UpdateGroundedGraphics(){
		if(Mathf.Abs(rigidBody.velocity.x) > turnSpeedThreshold){
			var isFlipped = (rigidBody.velocity.x>0f);
			
			var scaleX = ((isFlipped)? -1f : 1f);
			graphicsRoot.transform.localScale = new Vector2(scaleX,1f);
		}

		if(!playerController.IsRolling()){
			bodyRenderer.sprite = idleStates[Random.Range(0,idleStates.Count)];
			graphicsRoot.transform.rotation = Quaternion.identity;
		}else{
			bodyRenderer.sprite = rollSprites[Random.Range(0,rollSprites.Count)];
		}

	}

	void UpdateHoldingHairGraphics(){
		var springJoint = playerController.grabJoint;
		var bodyLocalPosition = springJoint.connectedAnchor;
		var bodyWorldPosition = springJoint.connectedBody.transform.TransformPoint(bodyLocalPosition);
		UpdateForHangingJoint(bodyWorldPosition);
	}

	

	void UpdateAirbornGraphics(){
		var vel = rigidBody.velocity;
		var theta = Mathf.Atan2(vel.y,vel.x) * Mathf.Rad2Deg;

		if(playerController.lastFramePlayerState != PlayerState.Airborn){	
			
			lastAirTimeTheta = theta;
		}
		bodyRenderer.sprite = airTimeSprites[Random.Range(0,airTimeSprites.Count)];
		if(vel.x == 0f){
			bodyRenderer.sprite = rollSprites[Random.Range(0,rollSprites.Count)];
		}
	
		var displayTheta = Mathf.MoveTowardsAngle(lastAirTimeTheta, theta,airTurnSpeed * Time.deltaTime);
		lastAirTimeTheta = theta;
		//lastAirTimeTheta * (1f- airTimeMixFilter) + theta * airTimeMixFilter;
		var isFlipped = (vel.x>0f);
		if(!isFlipped){
			displayTheta += 180f;
		}

		graphicsRoot.transform.rotation = Quaternion.AngleAxis(displayTheta,Vector3.forward);

		if(Mathf.Abs(rigidBody.velocity.x) > turnSpeedThreshold){				
			var scaleX = ((isFlipped)? -1f : 1f);
			graphicsRoot.transform.localScale = new Vector2(scaleX,1f);
		}
	}

	void UpdateCarryingAirbornGraphics(){
		bodyRenderer.sprite = carryJumpSprites[Random.Range(0,carryJumpSprites.Count)];
		graphicsRoot.transform.rotation = Quaternion.identity;
	}

	void UpdateCarryingGroundedGraphics(){
		graphicsRoot.transform.rotation = Quaternion.identity;
		bodyRenderer.sprite = carrySprites[Random.Range(0,carrySprites.Count)];
	}

	void UpdateYankingDownGraphics(){
		bodyRenderer.sprite = yankingSprites[Random.Range(0,yankingSprites.Count)];
		var targetToothPt = playerController.toothJoint.connectedBody.transform.position;

		var isFlipped = (targetToothPt.x>transform.position.x);
			
		var scaleX = ((isFlipped)? -1f : 1f);
		graphicsRoot.transform.localScale = new Vector2(scaleX,1f);

		graphicsRoot.transform.rotation = Quaternion.identity;
	}

	void UpdateYankingUpGraphics(){
		var joint = playerController.toothJoint;
		var bodyLocalPosition = joint.connectedAnchor;
		var bodyWorldPosition = joint.connectedBody.transform.TransformPoint(bodyLocalPosition);
		UpdateForHangingJoint(bodyWorldPosition);

	}

	void UpdateForHangingJoint(Vector3 worldHangingPosition){
		var disp = worldHangingPosition - gameObject.transform.position;
		var theta = Mathf.Atan2(disp.y,disp.x) * Mathf.Rad2Deg;
		theta -= 90f;
		graphicsRoot.transform.rotation = Quaternion.AngleAxis(theta,Vector3.forward);


		hangingKickTime -= Time.deltaTime;
		if(hangingKickTime < 0f){
			hangingKickTime += hangingKickTimeTotal;
			bodyRenderer.sprite = grabOnSprites[Random.Range(0,grabOnSprites.Count)];
		}
	}

	public void DidDie(){
		deathRotationSpeed = Random.Range(deathRotationSpeedMin,deathRotationSpeedMax);
		deathRotationSpeed *= (Random.value<0.5) ? -1f : 1f;
		deathRotation = 0f;
		bodyRenderer.sprite = airTimeSprites[0];
		deathScaleLerper = gameObject.AddComponent<VectorLerper>();
		var endScale = new Vector3(targetDeathScale,targetDeathScale,targetDeathScale);
		deathScaleLerper.Lerp(graphicsRoot,"localScale",Vector3.one,endScale,deathScaleLerpTime,LerpStyle.OutCubic);
	}
	void UpdateKnockedOutGraphics(){
		deathRotation += deathRotationSpeed * Time.deltaTime;
		graphicsRoot.transform.rotation = Quaternion.AngleAxis(deathRotation,Vector3.forward);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
