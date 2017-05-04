using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InControl;
public enum ControlSchemeType{
	Classic, AutoJumpGrab, GrabJumpJoined
}
public class PlayerControlScheme : MonoBehaviour {

	PlatformerActionSet actionSet;
	PlayerController player;
	Rigidbody2D rb;
	public InputDevice selectedDevice;

	public ControlSchemeType schemeType = ControlSchemeType.Classic;
	// Use this for initialization
	void Start () {
		// actionSet = new PlatformerActionSet();
		SetupBindings();

		rb = GetComponent<Rigidbody2D>();
		player = GetComponent<PlayerController>();
	}


	void SetupBindings(){
		actionSet = new PlatformerActionSet();
		if(selectedDevice != null){
			actionSet.Device = selectedDevice;
		}
		
		actionSet.jump.AddDefaultBinding(Key.W);
		actionSet.jump.AddDefaultBinding(InputControlType.Action1);
		actionSet.left.AddDefaultBinding(Key.A);
		actionSet.left.AddDefaultBinding(InputControlType.DPadLeft);
		actionSet.right.AddDefaultBinding(Key.D);
		actionSet.right.AddDefaultBinding(InputControlType.DPadRight);
		actionSet.grab.AddDefaultBinding(InputControlType.RightTrigger);
		actionSet.grab.AddDefaultBinding(Key.Space);

		actionSet.crouch.AddDefaultBinding(Key.S);
		actionSet.crouch.AddDefaultBinding(InputControlType.DPadDown);
		// actionSet.crouch.AddDefaultBinding(InputControlType.)

		actionSet.ListenOptions.IncludeUnknownControllers = true;
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
		Vector2 verticalIntent = Vector2.zero;

		if(Input.GetKey(KeyCode.A)){
			walkVector += Vector2.left;
		}if (Input.GetKey(KeyCode.D)){
			walkVector += Vector2.right;
		}

		if(Input.GetKey(KeyCode.S)){
			verticalIntent += Vector2.down;
		}if(Input.GetKey(KeyCode.W)){
			verticalIntent += Vector2.up;
		}

		if(walkVector.x != 0f || walkVector.y != 0f){
			player.DidPressLateralMove(walkVector);
		}else{
			player.UpdateNoLateralMovement();
		}

		bool didPressAction = Input.GetKeyDown(KeyCode.Space);
		bool didReleaseAction = Input.GetKeyUp(KeyCode.Space);

		switch(player.playerState){
			case PlayerState.Grounded:
				if(didPressAction){
					if(verticalIntent.y < 0f){
						player.DidPressDropThrough();
					}else{
						player.DidPressJump();
					}
				}else if(verticalIntent.y < 0){
					player.DidPressGrabDown();
				}
			break;
			case PlayerState.Airborn:
				if(didPressAction){
					player.DidPressGrabUp();
				}else if(verticalIntent.y < 0f){
					player.DidPressDropThrough();
				}
			break;
			case PlayerState.YankingToothUp:
			case PlayerState.HoldingHair:
				if(didReleaseAction){
					if(verticalIntent.y < 0f){
						player.DidPressDropThrough();
					}else{
						player.DidPressJump();
					}
				}

			break;
			case PlayerState.YankingToothDown:
				if(didReleaseAction){
					player.DidReleaseGrab();
				}if(didPressAction){
					if(verticalIntent.y < 0f){
						player.DidPressDropThrough();
					}else{
						player.DidPressJump();
					}
				}
			break;
			case PlayerState.CarryingToothAirborn:
			case PlayerState.CarryingToothGrounded:
				if(didPressAction){
					player.DidPressThrowTooth();
				}
			break;
			default:
			break;
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
		// var device = selectedDevice;
		// if(device == null){
		// 	device = InputManager.ActiveDevice;
		// }

		Vector2 walkVector = Vector2.zero;
		// if(device.)
		if(actionSet.left.IsPressed){
			walkVector += Vector2.left;
		}if (actionSet.right.IsPressed){
			walkVector += Vector2.right;
		}

		if(walkVector.x != 0f || walkVector.y != 0f){
			player.DidPressLateralMove(walkVector);
		}else{
			player.UpdateNoLateralMovement();
		}

		if(actionSet.jump.HasChanged && actionSet.jump.IsPressed){
			player.DidPressJump();
		}

		if(actionSet.crouch.IsPressed){//IsGrounded() && Input.GetKeyDown(KeyCode.S)){
			player.DidPressDropThrough();
			
		}
		rb.gravityScale = (Input.GetKey(KeyCode.S)) ?  player.downGravityFactor : 1f;

		if(actionSet.crouch.HasChanged && actionSet.crouch.WasPressed && 
			(player.IsGrabbingHair() || player.IsGrabbingTooth())){
			player.DidReleaseGrab();
		}

		if(actionSet.grab.HasChanged && actionSet.grab.WasPressed ){
			if(player.playerState == PlayerState.CarryingToothAirborn || player.playerState == PlayerState.CarryingToothGrounded){
				player.DidPressThrowTooth();
			}else{
				player.DidPressGrabAll();
			}
		}

		

		if(actionSet.grab.WasReleased){
			
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
