using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSkinColor : MonoBehaviour {
	public List<Color> skinColors;
	// public List<SpriteRenderer> srList;
	// Use this for initialization
	GiantHeadBehaviour giantHead;
	public float hueProxMin = 0.3f;
	void Start () {

		var srList = GetComponentsInChildren<SpriteRenderer>();

		

		giantHead = GameObject.FindObjectOfType<GiantHeadBehaviour>();
		// print("SkinColorTest:");
		// CheckAllSkinCombos(giantHead.AdjustedSkinColorSet(),skinColors,hueProxMin);
		
		
		var color = PickColorWithMinDistance(giantHead.skinColor,skinColors,hueProxMin);
		
		foreach(SpriteRenderer sr in srList){
			sr.color  = color;
		}
	}

	public static Color PickColorWithMinDistance(Color baseColor,List<Color> pickColors, float dist){

	
		float colorDist;
		int count = 0;
		
		Color color = pickColors[Random.Range(0,pickColors.Count)];
		float h,s,v;
		float h2,s2,v2;
		Color.RGBToHSV(baseColor,out h2,out s2, out v2);
		bool isTooClose = false;

		var options = new List<Color>(pickColors);
		do{
			if(options.Count== 0){
				print("No Color Options At This Distance");
				break;
			}
			color = options[Random.Range(0,options.Count)];
			Color.RGBToHSV(color,out h,out s,out v);
			// hAdjusted = h / 255f;
			colorDist = (new Vector3(h,s,v).normalized - new Vector3(h2,s2,v2).normalized).magnitude;
			isTooClose = (Mathf.Abs(colorDist)< dist);
			if(isTooClose){
				options.Remove(color);
			}
		}while(isTooClose);
		
		return color;
		
	}
	public static void CheckAllSkinCombos(List<Color> baseColors,List<Color> testColors, float limit){

		float h,s,v;
		float hAdjusted;
		float colorDist;
		int count = 0;
		var metaNoFitCount = 0;
		foreach(Color skinColor in baseColors){
			float h2,s2,v2;

			Color.RGBToHSV(skinColor,out h2,out s2, out v2);
			
			var hasAPair = false;
			foreach(Color playerColor in testColors){
				
				Color.RGBToHSV(playerColor,out h,out s,out v);
				
				colorDist = (new Vector3(h,s,v).normalized - new Vector3(h2,s2,v2).normalized).magnitude;
				count += 1;
				if(Mathf.Abs(colorDist)> limit){
					hasAPair = true;
					break;
				}
			}
			if(!hasAPair){
				metaNoFitCount += 1;
			}
		}

		print("NoFitPairs:" + metaNoFitCount);
	}
	Color PickColor(){
		return skinColors[Random.Range(0,skinColors.Count)];
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
