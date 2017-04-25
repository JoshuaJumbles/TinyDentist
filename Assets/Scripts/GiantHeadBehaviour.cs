using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.SerializableAttribute]
public class SkinHairConfig{
	public Color skinColor;
	public List<Color> hairColors;
}
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

	// public List<SkinHairConfig> skinHairConfigs = new List<SkinHairConfig>();
	public List<Color> skinColors;
	public List<Color> hairColors;
	public Color skinColor;
	public Color hairColor;
	public List<SpriteRenderer> skinSprites = new List<SpriteRenderer>();
	public List<SpriteRenderer> hairSprites = new List<SpriteRenderer>();
	// Use this for initialization
	public float skinSaturationDampen = 0.7f;
	public float hairHueProxMin = 0f;
	void Start () {
		// var chosenSkinConfig = skinHairConfigs[Random.Range(0,skinHairConfigs.Count)];
		// skinColor = chosenSkinConfig.skinColor;
		// hairColor = chosenSkinConfig.hairColors[Random.Range(0,chosenSkinConfig.hairColors.Count)];
		
		skinColor = skinColors[Random.Range(0,skinColors.Count)];
		float h,s,v;
		Color.RGBToHSV(skinColor,out h,out s, out v);
		skinColor = Color.HSVToRGB(h,s * skinSaturationDampen, v);

		


		// print("HairColorTest:");
		// // var obj = GameObject.FindObjectOfType<PlayerController>();
		// RandomSkinColor.CheckAllSkinCombos(AdjustedSkinColorSet(),hairColors,hairHueProxMin);

		hairColor = RandomSkinColor.PickColorWithMinDistance(skinColor,hairColors, hairHueProxMin);


		foreach(SpriteRenderer sprite in skinSprites){
			sprite.color = skinColor;
		}

		foreach(SpriteRenderer sprite in hairSprites){
			sprite.color = hairColor;
		}


		animator = GetComponent<Animator>();
		animSwitchTime = animSwitchTimeTotal;
		manager = GameObject.FindObjectOfType<GameManager>();
		// animSwitchTime = animator.GetCurrentAnimatorStateInfo
	}

	public List<Color> AdjustedSkinColorSet(){
		var adjustedColors = new List<Color>();
		var color = skinColors[Random.Range(0,skinColors.Count)];
		float h,s,v;
		Color.RGBToHSV(color,out h,out s, out v);
		var adjusted = Color.HSVToRGB(h,s * skinSaturationDampen, v);
		adjustedColors.Add(adjusted);
		return adjustedColors;
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
