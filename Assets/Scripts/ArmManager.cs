using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmManager : MonoBehaviour {
	
	public GameObject goldArmPrefab;

	GameObject goldArm = null;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void DidYankTooth(){
		if(goldArm == null){
			goldArm = GameObject.Instantiate(goldArmPrefab);
		}
	}
}
