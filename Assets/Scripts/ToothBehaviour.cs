using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ToothState{
	Anchored, Carried, Free
}
public class ToothBehaviour : MonoBehaviour {
	public bool isLooseTooth = false;

	public Animator animator;

	public LayerMask playerMask;

	public float warningRadius = 2f;

	PlayerController playerController;

	public float randomLooseChance = 0.15f;
	public float yankTimeLooseTotal = 1.75f;
	public float yankTimeToughTotal = 6f;
	float yankTime = 0f;

	Rigidbody2D rigidBody;

	public ToothState toothState = ToothState.Anchored;

	public SpriteRenderer toothFront;
	public SpriteRenderer toothBack;

	public int carrySortOrderFront = 120;
	public int carrySortOrderBack = 117;
	
	public float carryInitialRotationNoise = 5f;

	public float throwMinRotationSpeed = 15f;
	public float throwMaxRotationSpeed = 40f;
	
	public GumController gumController;

	public float looseAngerFactor = 0.5f;
	public float toughAngerFactor = 2f;
	public float looseAngerYank = 5f;
	public float toughAngerYank = 20f;
	GiantHeadBehaviour head;

	ArmManager armManager;
	GameManager manager;
	void Start () {
		head = GameObject.FindObjectOfType<GiantHeadBehaviour>();
		playerController = GameObject.FindObjectOfType<PlayerController>();
		manager = GameObject.FindObjectOfType<GameManager>();
		rigidBody = GetComponent<Rigidbody2D>();

		gumController = GetComponentInParent<GumController>();
		armManager = GameObject.FindObjectOfType<ArmManager>();

		if(GameManager.looseTeeth < GameManager.maxLooseTeeth && Random.value<=randomLooseChance){
			isLooseTooth = true;
			GameManager.looseTeeth += 1;
		}
	}

	void Update(){
		switch(toothState){
			case ToothState.Anchored:
				UpdateAnchored();
				break;
			case ToothState.Carried:
				UpdateCarried();
				break;
			case ToothState.Free:
				UpdateFree();
				break;
		
		}
	}

	void UpdateAnchored(){
		if(isLooseTooth){
			if(playerController == null){
				playerController = GameObject.FindObjectOfType<PlayerController>();
				if(playerController == null){
					return;
				}
			}
			var disp = playerController.transform.position - transform.position;
			var withinRad = disp.sqrMagnitude < warningRadius * warningRadius;
			animator.SetBool("IsWarningLoose",withinRad);
		}
	}

	void UpdateCarried(){

		transform.position = playerController.TeethCarryPosition();
	}

	void UpdateFree(){
		//boundscheck
		//goal check
	}

	public void PlayerDidYank(){
		yankTime += Time.deltaTime;
		head.angerLevel += Time.deltaTime * ((isLooseTooth) ? looseAngerFactor : toughAngerFactor);
		var total = (isLooseTooth) ? yankTimeLooseTotal : yankTimeToughTotal;
		if(yankTime>total){
			DidYankOut();
		}
	}

	void DidYankOut(){

		animator.SetBool("IsWarningLoose",false);
		Destroy(animator);
		armManager.DidYankTooth();
		head.angerLevel += ((isLooseTooth) ? looseAngerYank : toughAngerYank);
		gumController.GumSpotOpened(transform);

		playerController.DidGrabToothObject(gameObject);
		toothState = ToothState.Carried;

		
		rigidBody.constraints = RigidbodyConstraints2D.None;

		transform.position = playerController.TeethCarryPosition();

		toothFront.sortingOrder = carrySortOrderFront;
		toothBack.sortingOrder = carrySortOrderBack;

		var zRot = transform.rotation.eulerAngles.z;
		var newRot = zRot + (Random.Range(-carryInitialRotationNoise/2f,carryInitialRotationNoise/2f));
		transform.rotation = Quaternion.AngleAxis(newRot,Vector3.forward);

		
	}

	public void ThrowToothInDirection(Vector2 forceVector){
		rigidBody.bodyType = RigidbodyType2D.Dynamic;
		toothState = ToothState.Free;
		rigidBody.velocity = Vector3.zero;
		rigidBody.AddForce(forceVector,ForceMode2D.Impulse);

		var rotationSpeed = Random.Range(throwMinRotationSpeed,throwMaxRotationSpeed);
		rigidBody.angularVelocity = rotationSpeed * ((Random.value<= 0.5f) ? -1f : 1f);
	}
	
	void OnDrawGizmosSelected()
	{
		Gizmos.color = Color.HSVToRGB(0.4f,0.9f,1f);
		Gizmos.DrawWireSphere(transform.position,warningRadius);
	}


}
