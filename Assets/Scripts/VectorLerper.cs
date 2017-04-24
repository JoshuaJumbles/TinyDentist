using UnityEngine;
using System.Collections;


public class VectorLerper:MonoBehaviour{
	public float timeTotal;
	public float time = 0f;

	public Vector3 startValue;
	public Vector3 targetValue;

	public string fieldName;
	public Object targetObject;

	public LerpStyle style;

	public bool shouldLoop = false;
	public bool shouldAutoStart = false;

	public bool isLate = false;
//	void Start(){
//		
//	}

	public void Lerp(Object target, string field, Vector3 start, Vector3 end, float duration, LerpStyle style, bool loop = false){
		startValue = start;
		targetValue = end;
		timeTotal = duration;

		targetObject = target;
		fieldName = field;
		this.style = style;
		shouldLoop = loop;
		shouldAutoStart = true;

	}
	// Update is called once per frame
	void Update(){
		if (!isLate) {
			LerpUpdate ();
		}	
	}

	void LateUpdate(){
		if (isLate) {
			LerpUpdate ();
		}
	}

	void LerpUpdate () {
		
		if (!shouldAutoStart) {
			return;
		}

		time += Time.deltaTime;
		if (time >= timeTotal) {
			time = timeTotal;
		}

		var t = time / timeTotal;
		var modT = LerpMath.ModifyTimeWithStyle (style, t);
		var lerpedVal = Vector3.Lerp (startValue, targetValue, modT);

		var type = targetObject.GetType ();
		var field = type.GetProperty (fieldName);
		field.SetValue (targetObject, lerpedVal, null);

		if (time == timeTotal) {
			if (shouldLoop) {
				var temp = targetValue;
				targetValue = startValue;
				startValue = temp;
				time = 0f;
			} else {
				Destroy (this);
			}
		}
//		targetObject.GetType ().GetField (fieldName).SetValue (targetObject, lerpedVal);
	}
}