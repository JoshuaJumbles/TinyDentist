using UnityEngine;
using System.Collections;


[System.Serializable]
public enum EaseType{
	None,EaseIn,EaseOut,SmoothStep,SmootherStep
}

public static class LerpUtility{

	public static float EaseValue(float t, EaseType ease){
		if (ease == EaseType.EaseIn) {
			t = Mathf.Sin (t * Mathf.PI * 0.5f);
		} else if (ease == EaseType.EaseOut) {
			t = 1f - Mathf.Cos (t * Mathf.PI * 0.5f);
		} else if (ease == EaseType.SmoothStep) {
			t = t * t * (3f - 2f * t);
		} else if (ease == EaseType.SmoothStep) {
			t = t * t * t * (t * (6f * t - 15f) + 10f);
		}

		return t;
	}

}
