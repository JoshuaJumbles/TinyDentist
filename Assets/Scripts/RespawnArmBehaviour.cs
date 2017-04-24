using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RespawnArmBehaviour : ArmBehaviour {

	PlayerController player;
	
	public override void Start(){
		player = GameObject.FindObjectOfType<PlayerController>();
		

		base.Start();
	}

	public override void Update () {
		

		base.Update();

		if(!isHandClosed && !isRetreating){
			var playerDistSqr = (transform.position - player.transform.position).sqrMagnitude;
			if(playerDistSqr > (palmRadius *palmRadius)){
				RetreatHand();
			}
		}
		
		// if()

	}

	public override GameObject SpawnedObject(){
		player.DidPopOutFromRespawn();
		return player.gameObject;
	}

}
