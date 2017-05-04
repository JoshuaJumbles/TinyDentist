using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmBehaviour : MonoBehaviour {

	// Use this for initialization
	public Transform palmTransform;
	VectorLerper positionLerper;
	public float lerpSpeed = 4f;
	public Transform debugTarget;

	// public SpriteRenderer handRenderer;

	// public Sprite openHand;

	public GameObject closedHand;
	public GameObject openHand;

	public GameObject prefabObject;
	GameObject createdObject;
	public float popUpForce = 2f;

	public float spawnDispY = 0.5f;

	float spawnTime = 0f;
	public bool isHandClosed = true;

	public float palmRadius = 3f;

	Vector3 initialPosition;
	public float retreatSpeed = 2f;
	public bool isRetreating = false;

	float retreatTimer;

	GameManager gameManager;

	public List<SpriteRenderer> skinSprites = new List<SpriteRenderer>();

	GiantHeadBehaviour giantHead;

	Rigidbody2D rb;

	public Color selectedColor;
	public virtual void Start () {
		rb = GetComponent<Rigidbody2D>();
		rb.simulated = false;
		// var colliders = GetComponentsInChildren<Collider2D>();
		// foreach(Collider2D collider in colliders){
		// 	collider.gameObject.SetActive(false);
		// }
		initialPosition = transform.position;
		palmTransform.rotation = Quaternion.identity;

		gameManager = GameObject.FindObjectOfType<GameManager>();
		
		if(debugTarget != null){
			
			SetupWithTarget(debugTarget.position);
		}

		retreatTimer = retreatSpeed;
		if(selectedColor == null || selectedColor.a == 0){
			giantHead = GameObject.FindObjectOfType<GiantHeadBehaviour>();
			SetColor(giantHead.skinColor);
			
		}else{
			SetColor(selectedColor);
		}
		

		
	}

	public void SetColor(Color color){
		foreach(SpriteRenderer sprite in skinSprites){
			sprite.color = color;
		}
	}

	public void SetupWithTarget(Vector3 target){
		if(gameManager.gameState != GameState.Game){
			return;
		}
		spawnTime = lerpSpeed;
		positionLerper = gameObject.AddComponent<VectorLerper>();
		positionLerper.Lerp(transform,"position",transform.position,
							target,lerpSpeed,LerpStyle.InCubic);
	}

	public void RetreatHand(){
		if(isRetreating){
			return;
		}
		if(positionLerper != null){
			Destroy(positionLerper);
		}
		positionLerper = gameObject.AddComponent<VectorLerper>();
		positionLerper.Lerp(transform,"position",transform.position,
							initialPosition,retreatSpeed,LerpStyle.OutQuintic);
		isRetreating = true;
	}
	
	// Update is called once per frame
	public virtual void Update () {
		if(isHandClosed){
			spawnTime -= Time.deltaTime;
			if(spawnTime <= 0f){
				OpenHand();
			}
		}

		if(!isHandClosed && !isRetreating && createdObject != null){
			var playerDistSqr = (transform.position - createdObject.transform.position).sqrMagnitude;
			if(playerDistSqr > (palmRadius *palmRadius)){
				RetreatHand();
			}
		}

		if(isRetreating){
			retreatTimer -= Time.deltaTime;
			if(retreatTimer <= 0f){
				Destroy(gameObject);
			}
		}
	}

	void OpenHand(){
		rb.simulated = true;
		// var colliders = GetComponentsInChildren<Collider2D>();
		// foreach(Collider2D collider in colliders){
		// 	collider.gameObject.SetActive(true);
		// }
		var obj = SpawnedObject();
		obj.transform.position = transform.position + Vector3.up * spawnDispY;
		var objRb = obj.GetComponent<Rigidbody2D>();
		objRb.AddForce(Vector2.up * popUpForce,ForceMode2D.Impulse);

		

		openHand.SetActive(true);
		closedHand.SetActive(false);
		
		isHandClosed = false;
	}

	public virtual GameObject SpawnedObject(){
		var obj = GameObject.Instantiate(prefabObject);
		createdObject = obj;
		return obj;
	}

	
	void OnDrawGizmosSelected()
	{
		Gizmos.DrawWireSphere(transform.position,palmRadius);
	}
}
