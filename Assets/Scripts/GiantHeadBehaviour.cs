using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GiantHeadBehaviour : MonoBehaviour {
	Animator animator;

	public float angerLevel = 0f;
	public float maxAngerLevel = 100f;

	public float animSwitchTimeTotal = 5f; 
	float animSwitchTime = 0f;

	public int debugAnimMouthHeight = -1;
	GameManager manager;

	public List<SpriteRenderer> eyeOrbs;
	public Color eyeAngryEndColor = Color.white;
	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator>();
		animSwitchTime = animSwitchTimeTotal;
		manager = GameObject.FindObjectOfType<GameManager>();
		// animSwitchTime = animator.GetCurrentAnimatorStateInfo
	}
	
	// Update is called once per frame
	void Update () {
		if(manager.gameState == GameState.Game){
			animSwitchTime -= Time.deltaTime;
			if(animSwitchTime <= 0f){
				animSwitchTime = animSwitchTimeTotal;
				ChangeAnimParameters();
			}
		}
		else{
			
			
		}

		foreach(SpriteRenderer eye in eyeOrbs){
			var val = angerLevel / maxAngerLevel;
			val = Mathf.Min(1f,val);
			var clear = new Color(eyeAngryEndColor.r,eyeAngryEndColor.g,eyeAngryEndColor.b,0f);
			eye.color = Color.Lerp(clear,eyeAngryEndColor,val);
		}
		
	}

	public void SwitchToTitleAnim(){
		animator.SetBool("isAngry",false);
		animator.SetInteger("openSize",1);
		animator.SetTrigger("switchAnimTrigger");
	}

	// void StartPeacefulAnimation(){

	// }

	// void StartBiteAnimation(){

	// }

	public void ChangeAnimParameters(){
		
		var angerChance = angerLevel/maxAngerLevel;
		
		animator.SetBool("isAngry",(Random.value < angerChance));

		var val = Random.value;

		if(debugAnimMouthHeight != -1){
			animator.SetInteger("openSize",debugAnimMouthHeight);
		}
		else if(val<0.45f){
			animator.SetInteger("openSize",0);
		}else if(val<0.85){
			animator.SetInteger("openSize",1);
		}else{
			animator.SetInteger("openSize",2);
		}

		
		animator.SetTrigger("switchAnimTrigger");
	}




}
