using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSkinColor : MonoBehaviour {
	public List<Color> skinColors;
	// public List<SpriteRenderer> srList;
	// Use this for initialization
	void Start () {
		var srList = GetComponentsInChildren<SpriteRenderer>();
		var color = skinColors[Random.Range(0,skinColors.Count)];
		foreach(SpriteRenderer sr in srList){
			sr.color  = color;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
