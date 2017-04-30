using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum ControlSchemeType{
	Classic, AutoJumpGrab, GrabJumpJoined
}
public class PlayerControlScheme : MonoBehaviour {

	PlayerController player;
	Rigidbody2D rb;

	public ControlSchemeType schemeType = ControlSchemeType.Classic;
	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D>();
		player = GetComponent<PlayerController>();
	}
	
	// Update is called once per frame
	public void InputUpdate () {
		switch(schemeType){
			case ControlSchemeType.Classic:
				UpdateClassicScheme();
			break;
			case ControlSchemeType.AutoJumpGrab:
				UpdateAutoJumpGrabScheme();
			break;
			case ControlSchemeType.GrabJumpJoined:
				UpdateGrabJumpJoinedScheme();
			break;
		}
	}
	void UpdateGrabJumpJoinedScheme(){
		Vector2 walkVector = Vector2.zero;

		if(Input.GetKey(KeyCode.A)){
			walkVector += Vector2.left;
		}if (Input.GetKey(KeyCode.D)){
			walkVector += Vector2.right;
		}

		if(walkVector.x != 0f || walkVector.y != 0f){
			player.DidPressLateralMove(walkVector);
		}else{
			player.UpdateNoLateralMovement();
		}

		if(Input.GetKeyDown(KeyCode.Space)){
			if(Input.GetKey(KeyCode.S)){
				player.DidReleaseGrab();
				player.DidPressDropThrough();
			}else{
				player.DidPressJump();
			}
		}

		if(Input.GetKey(KeyCode.S)){//IsGrounded() && Input.GetKeyDown(KeyCode.S)){
			player.DidPressGrabDown();	
		}

		if(Input.GetKeyUp(KeyCode.S)){
			player.DidReleaseGrab();
		}


		rb.gravityScale = (Input.GetKey(KeyCode.S)) ?  player.downGravityFactor : 1f;

		if(Input.GetKeyDown(KeyCode.S) && (player.IsGrabbingHair() || player.IsGrabbingTooth())){
			player.DidReleaseGrab();
		}

		// if(Input.GetKeyDown(KeyCode.Space) ){
		// 	if(player.playerState == PlayerState.CarryingToothAirborn || player.playerState == PlayerState.CarryingToothGrounded){
		// 		player.DidPressThrowTooth();
		// 	}else{
		// 		player.DidPressGrabUp();
		// 	}
		// }

		

		if(Input.GetKeyUp(KeyCode.Space)){
			
			if (player.IsGrabbingHair() && !Input.GetKey(KeyCode.S)){
				player.DidPressJump();
			}

			if(player.IsGrounded()){
				player.DidPressJump();
			}

			player.DidReleaseGrab();
		}

		if(player.isGrabQueued){
			player.DidPressGrabAll();
		}
	
	}

	void UpdateClassicScheme(){
		Vector2 walkVector = Vector2.zero;

		if(Input.GetKey(KeyCode.A)){
			walkVector += Vector2.left;
		}if (Input.GetKey(KeyCode.D)){
			walkVector += Vector2.right;
		}

		if(walkVector.x != 0f || walkVector.y != 0f){
			player.DidPressLateralMove(walkVector);
		}else{
			player.UpdateNoLateralMovement();
		}

		if(Input.GetKeyDown(KeyCode.W)){
			player.DidPressJump();
		}

		if(Input.GetKey(KeyCode.S)){//IsGrounded() && Input.GetKeyDown(KeyCode.S)){
			player.DidPressDropThrough();
			
		}
		rb.gravityScale = (Input.GetKey(KeyCode.S)) ?  player.downGravityFactor : 1f;

		if(Input.GetKeyDown(KeyCode.S) && (player.IsGrabbingHair() || player.IsGrabbingTooth())){
			player.DidReleaseGrab();
		}

		if(Input.GetKeyDown(KeyCode.Space) ){
			if(player.playerState == PlayerState.CarryingToothAirborn || player.playerState == PlayerState.CarryingToothGrounded){
				player.DidPressThrowTooth();
			}else{
				player.DidPressGrabAll();
			}
		}

		

		if(Input.GetKeyUp(KeyCode.Space)){
			
			// if (player.IsGrabbingHair() && !Input.GetKey(KeyCode.S)){
			// 	player.DidPressJump();
			// }

			player.DidReleaseGrab();
		}

		if(player.isGrabQueued){
			player.DidPressGrabAll();
		}
	}


	void UpdateAutoJumpGrabScheme(){
		Vector2 walkVector = Vector2.zero;

		if(Input.GetKey(KeyCode.A)){
			walkVector += Vector2.left;
		}if (Input.GetKey(KeyCode.D)){
			walkVector += Vector2.right;
		}

		if(walkVector.x != 0f || walkVector.y != 0f){
			player.DidPressLateralMove(walkVector);
		}else{
			player.UpdateNoLateralMovement();
		}

		if(Input.GetKeyDown(KeyCode.W)){
			player.DidPressJump();
		}

		if(Input.GetKey(KeyCode.S)){//IsGrounded() && Input.GetKeyDown(KeyCode.S)){
			player.DidPressDropThrough();
			
		}
		rb.gravityScale = (Input.GetKey(KeyCode.S)) ?  player.downGravityFactor : 1f;

		if(Input.GetKeyDown(KeyCode.S) && (player.IsGrabbingHair() || player.IsGrabbingTooth())){
			player.DidReleaseGrab();
		}

		if(Input.GetKeyDown(KeyCode.Space) ){
			if(player.playerState == PlayerState.CarryingToothAirborn || player.playerState == PlayerState.CarryingToothGrounded){
				player.DidPressThrowTooth();
			}else{
				player.DidPressGrabAll();
			}
		}

		

		if(Input.GetKeyUp(KeyCode.Space)){
			
			if (player.IsGrabbingHair() && !Input.GetKey(KeyCode.S)){
				player.DidPressJump();
			}

			player.DidReleaseGrab();
		}

		if(player.isGrabQueued){
			player.DidPressGrabAll();
		}
	}

}
