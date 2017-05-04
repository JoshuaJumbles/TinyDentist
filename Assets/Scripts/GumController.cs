using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GumController : MonoBehaviour {

	public List<Transform> gumOpenings = new List<Transform>();
	public float gumOpeningRadius = 0.4f;

	public Transform gumOpeningRoot;
	public Transform replacementTeethRoot;

	public List<ToothBehaviour> teeth = new List<ToothBehaviour>();

	bool lastDeadlyState = false;
	public bool areTeethDeadly = false;

	List<PlayerController> players;
	void Start () {
		
		teeth = new List<ToothBehaviour>( GetComponentsInChildren<ToothBehaviour>());

	}

	public void DidStartGame(){
		players = new List<PlayerController> (GameObject.FindObjectsOfType<PlayerController>());
	}
	
	// Update is called once per frame
	void Update () {
		// areTeethDeadly = (Input.GetKey(KeyCode.T));


		if(areTeethDeadly != lastDeadlyState){
			if(areTeethDeadly){
				TeethBecameDeadly();
			}else{
				TeethBecameSafe();
			}
		}
		lastDeadlyState = areTeethDeadly;

	}

	void TeethBecameDeadly(){
		// var player = GameObject.FindObjectOfType<PlayerController>();
		foreach (PlayerController player in players){
			player.TeethBecameDeadly(teeth);
		}
		
		// var playerColliders = player.GetComponentsInChildren<Collider2D>();
		// foreach(ToothBehaviour tooth in teeth){
		// 	var collider = tooth.GetComponentInChildren<Collider2D>();
		// 	foreach(Collider2D playerCollider in playerColliders){
		// 		Physics2D.IgnoreCollision(playerCollider, collider,true);
		// 	}

		// }
	}

	void TeethBecameSafe(){
	
	}

	public void GumSpotOpened(Transform gumPosition){
		var openingObject = new GameObject("GumOpening");
		openingObject.transform.parent = gumOpeningRoot;
		openingObject.transform.position = gumPosition.position;
		openingObject.transform.rotation = gumPosition.rotation;
		gumOpenings.Add(openingObject.transform);
	}

	public void TakeOpening(GoldToothBehaviour goldTooth, Transform slot){
		var position = slot.position;
		slot.parent = replacementTeethRoot;
		gumOpenings.Remove(slot);
		goldTooth.transform.parent = slot;
		goldTooth.transform.localRotation = Quaternion.identity;
		goldTooth.transform.localPosition = Vector3.zero;
		var collider = goldTooth.GetComponentInChildren<Collider2D>();
		collider.gameObject.layer = gameObject.layer;
	}

	void OnDrawGizmosSelected()
	{
		foreach(Transform transform in gumOpenings){
			Gizmos.DrawWireSphere(transform.position,gumOpeningRadius);
		}
	}
}
