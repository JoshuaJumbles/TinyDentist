using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public enum ToothType{
	Normal,Fang,Piranha
}
public class TeethGenerator : MonoBehaviour {
	public List<ToothType> botToothConfig = new List<ToothType>();
	public List<ToothType> topToothConfig = new List<ToothType>();
	public float spacing = 0.5f;

	public GameObject normalPrefab;
	public GameObject fangPrefab;
	public GameObject piranhaPrefab;
	
	public Transform buildRoot;
	public Transform buildRootTop;
	public bool isTopRow = false;
	
	public LayerMask topToothMask;
	public void BuildTeeth(){
		// var root = new GameObject("")
		var config = (isTopRow)? topToothConfig : botToothConfig;
		
		for(int i = 0; i<config.Count; i++){
			var disp = i * spacing;

			GameObject prototype = normalPrefab;
			switch(config[i]){
				case ToothType.Normal:
					prototype = normalPrefab;
					break;
				case ToothType.Fang:
					prototype = fangPrefab;
					break;
				case ToothType.Piranha:
					prototype = piranhaPrefab;
					break;
			}
			
			var obj = PrefabUtility.InstantiatePrefab(prototype) as GameObject;
			
			obj.name = "Tooth" + ((isTopRow) ? "Top" : "") + i;
			obj.transform.parent = (!isTopRow) ? buildRoot : buildRootTop;
			obj.transform.localPosition = new Vector3(disp,0f,0f);
			if(isTopRow){
				obj.transform.rotation = Quaternion.AngleAxis(180f,Vector3.forward);
			}

			var sr = obj.GetComponentInChildren<SpriteRenderer>();
			sr.sortingOrder = sr.sortingOrder - i + ((isTopRow) ? 0 : -20);//overbit always

			// if(isTopRow){
			// 	SetLayerRecursively(obj,topToothMask.value);
			// }
		}
	}

	public void ClearTeeth(){
		var anchor = (!isTopRow) ? buildRoot : buildRootTop;
		var children = new List<GameObject>();
		foreach (Transform child in anchor) children.Add(child.gameObject);
		children.ForEach(child => DestroyImmediate(child));
	}

	void SetLayerRecursively(GameObject obj, int newLayer){
		obj.layer = newLayer;
		
		foreach(Transform child in obj.transform){
			SetLayerRecursively(child.gameObject,newLayer);
		}
	}

}
