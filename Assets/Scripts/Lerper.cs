using UnityEngine;
using System.Collections;



public class TransformLerper : MonoBehaviour {
	public float duration;
	public Transform obj;
	public Vector3 startPosition;
	public Vector3 targetPosition;

	public float currentTime;

	public EaseType ease = EaseType.None;
	
	public bool isRunning = false;

	public virtual void MoveTo(Transform obj,Vector3 start, Vector3 target, float duration, float delay){
		currentTime = -delay;
		this.obj = obj;
		startPosition = start;
		this.targetPosition = target;
		this.duration = duration;

		isRunning = true;
	}

	void Update () {
		if (isRunning == false) {
			return;
		}

		currentTime += Time.deltaTime;
		var t = Mathf.Max (0f, currentTime);
		t = t / duration;
		t = LerpUtility.EaseValue (t, ease);
		t = Mathf.Min (1f, t);

		if (t > 0f) {
			Lerp (t);
		}

		if (t == 1f) {
			Destroy(this);
		}
	}

	protected virtual void Lerp(float t){
		obj.transform.position = Vector3.Lerp (startPosition, targetPosition, t);
	}
}
//
public class JumpLerper:TransformLerper{
	float gravity = -Physics2D.gravity.y;
	float launchVel;

	public void MoveTo (Transform obj, Vector3 start, Vector3 target, float gravityFactor, float duration, float delay)
	{
		gravity = gravity * gravityFactor;
		launchVel = gravity * 0.5f * duration;
		base.MoveTo (obj, start,target, duration, delay);
	}

	protected override void Lerp (float t)
	{
		base.Lerp (t);

		t = t * duration;
		var ht = (launchVel * t) - (0.5f * gravity * t * t);
		var pt = obj.transform.position;
		obj.transform.position = new Vector3 (pt.x, pt.y+ht, pt.z);
	}
}
