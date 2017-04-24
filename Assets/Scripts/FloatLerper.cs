using UnityEngine;
using System.Collections;

public class FloatLerper : MonoBehaviour {
	float timeTotal;
	float time = 0f;

	float startValue;
	float targetValue;

	string fieldName;
	Object targetObject;

	LerpStyle style;

	public void Lerp(Object target, string field, float start, float end, float duration, LerpStyle style){
		startValue = start;
		targetValue = end;
		timeTotal = duration;

		targetObject = target;
		fieldName = field;
		this.style = style;
	}
	// Update is called once per frame
	void Update () {
		time += Time.deltaTime;
		if (time >= timeTotal) {
			time = timeTotal;
		}

		var t = time / timeTotal;
		var modT = LerpMath.ModifyTimeWithStyle (style, t);
		var lerpedVal = Mathf.Lerp (startValue, targetValue, modT);
		var type = targetObject.GetType ();
		var field = type.GetProperty (fieldName);
		field.SetValue (targetObject, lerpedVal, null);

		if (time == timeTotal) {
			Destroy (this);
		}

	}
}


