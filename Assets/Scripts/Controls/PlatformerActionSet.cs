using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InControl;

public class PlatformerActionSet : PlayerActionSet {
	public PlayerAction jump;
	public PlayerAction grab;
	public PlayerAction left;
	public PlayerAction right;
	public PlayerAction crouch;

	public PlayerAction upwardIntent;
	public PlayerAction downwardIntent;
	public PlayerOneAxisAction verticalIntent;


	public PlatformerActionSet(){
		left = CreatePlayerAction("Move Left");
		right = CreatePlayerAction("Move Right");
		jump = CreatePlayerAction("Jump");
		grab = CreatePlayerAction("Grab");
		crouch = CreatePlayerAction("Crouch");
		downwardIntent = CreatePlayerAction("Downward Intent");
		upwardIntent = CreatePlayerAction("Upward Intent");
		verticalIntent = CreateOneAxisPlayerAction(downwardIntent,upwardIntent);
	}
}
