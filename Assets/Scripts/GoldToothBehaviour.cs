using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GoldToothBehaviour : MonoBehaviour {

	public ToothState toothState = ToothState.Free;
	List<GumController> gumControllers = new List<GumController>();
	public int sortOrderOnLock = -100;

	public SpriteRenderer frontImage;
	public SpriteRenderer backImage;
	public PlayerController player;
	// Use this for initialization000
	Rigidbody2D rigidBody;


	public float throwMinRotationSpeed = 15f;
	public float throwMaxRotationSpeed = 40f;
	GameManager manager;

	void Start () {
		gumControllers = new List<GumController>(GameObject.FindObjectsOfType<GumController>());
		player = GameObject.FindObjectOfType<PlayerController>();
		rigidBody = GetComponent<Rigidbody2D>();
		manager = GameObject.FindObjectOfType<GameManager>();
	}
	
	// Update is called once per frame
	void Update () {
		if(toothState == ToothState.Free){
			CheckGumControllersForFit();
		}if(toothState == ToothState.Carried){
			transform.position = player.TeethCarryPosition();
		}
		
	}

	void CheckGumControllersForFit(){
		var radSqr = gumControllers[0].gumOpeningRadius;
		radSqr *= radSqr;
		foreach(GumController controller in gumControllers){
			foreach(Transform openSlot in controller.gumOpenings){
				var distSqr = (openSlot.position - transform.position).sqrMagnitude;
				if(distSqr < radSqr){
					DidFindFit();
					controller.TakeOpening(this,openSlot);
					return;
				}
			}
		}
	}

	void DidFindFit(){
		var rb = GetComponent<Rigidbody2D>();
		// rb.constraints = RigidbodyConstraints2D.FreezeAll;
		rb.bodyType = RigidbodyType2D.Kinematic;
		rb.velocity  = Vector3.zero;
		rb.angularVelocity = 0f;
		frontImage.sortingOrder = sortOrderOnLock;
		backImage.sortingOrder = sortOrderOnLock - 1;
		// var srList = GetComponentsInChildren<SpriteRenderer>();
		toothState = ToothState.Anchored;
		manager.bonusScore += 1;
		// rb.bodyType = RigidbodyType2D.Kinematic;
	}

	public void ThrowToothInDirection(Vector2 forceVector){
		toothState = ToothState.Free;
		rigidBody.velocity = Vector3.zero;
		transform.position = player.TeethCarryPosition();
		rigidBody.AddForce(forceVector,ForceMode2D.Impulse);

		var rotationSpeed = Random.Range(throwMinRotationSpeed,throwMaxRotationSpeed);
		rigidBody.angularVelocity = rotationSpeed * ((Random.value<= 0.5f) ? -1f : 1f);
	}
}
