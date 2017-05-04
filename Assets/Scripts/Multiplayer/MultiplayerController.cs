using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using InControl;
using UnityEngine.UI;

public class MultiplayerController : MonoBehaviour {

	public List<PlayerInputManager> inputManagers = new List<PlayerInputManager>();
	public List<PlayerInputManager> activePlayers = new List<PlayerInputManager>();
	public List<GameObject> playerJoinedDisplays = new List<GameObject>();

	public List<InputDevice> availableDevices = new List<InputDevice>();

	public List<Color> randomPlayerColors = new List<Color>();
	public List<Sprite> randomPlayerSprites = new List<Sprite>();

	public List<Color> chosenColors = new List<Color>();

	public GameObject multiplayerAgentPrefab;
	public List<GameObject> playerDebugSpawnRoots;
	public List<GameObject> armRespawnRoots;

	public GameManager gameManager;
	// Use this for initialization
	void Start () {
		gameManager = GameObject.FindObjectOfType<GameManager>();
		foreach(GameObject joinDisplay in playerJoinedDisplays){
			joinDisplay.SetActive(false);
		}

		var devices = InputManager.Devices;
		foreach(InputDevice device in devices){
			if(device.DeviceClass == InputDeviceClass.Controller){// || device.DeviceClass == InputDeviceClass.Keyboard){
				availableDevices.Add(device);
				var inputManager = new PlayerInputManager();
				inputManager.device = device;
				inputManagers.Add(inputManager);
				print(device);
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		if(gameManager.gameState == GameState.MultiplayerSetup){
			CheckJoins();
			CheckLeaves();
			CheckStart();
			UpdateDisplayStatus();
		}
		
	}

	void CheckJoins(){
		var i = 0;
		foreach(PlayerInputManager inputManager in inputManagers){
			if( inputManager.device.Action1.WasPressed){
				if(inputManager.isEnabled){
					RemovePlayer(inputManager);
				}
				inputManager.isEnabled = true;
				
				var color = Color.white;
				do{
					color = randomPlayerColors[Random.Range(0,randomPlayerColors.Count)];
				}while(chosenColors.Contains(color));
				SetPlayerColor(i,color);
				
			}
			i++;
		}

	}

	void SetPlayerColor(int playerIndex, Color color){
		chosenColors.Add(color);
		var root = playerJoinedDisplays[playerIndex];
		var sr = root.GetComponentInChildren<Image>();
		sr.sprite = randomPlayerSprites[Random.Range(0,randomPlayerSprites.Count)];
		sr.color = color;

		var text = root.GetComponentInChildren<Text>();
		text.color = color;

		var player = inputManagers[playerIndex];
		player.playerColor = color;

	}

	void CheckLeaves(){
		foreach(PlayerInputManager inputManager in inputManagers){
			if(inputManager.device.Action2.WasPressed){
				RemovePlayer(inputManager);
			}
		}
	}

	void CheckStart(){
		var activeCount = 0;
		activePlayers = new List<PlayerInputManager>();
		foreach(PlayerInputManager inputManager in inputManagers){
			if(inputManager.isEnabled){
				activePlayers.Add(inputManager);
			}
			
			activeCount += (inputManager.isEnabled) ? 1 : 0;
		}
		if(activeCount == 0){
			return;
		}

		foreach(PlayerInputManager inputManager in inputManagers){
			if(inputManager.device.Command.WasPressed){
				SpawnAllPlayers();
				gameManager.StartGame();
				
			}
		}
	}

	void SpawnAllPlayers(){
		var i = 0;
		foreach(PlayerInputManager player in activePlayers){
			var obj = GameObject.Instantiate(multiplayerAgentPrefab);
			obj.transform.position = playerDebugSpawnRoots[i].transform.position;

			var controlScheme = obj.GetComponentInChildren<PlayerControlScheme>();
			controlScheme.selectedDevice = player.device;

			var sr = obj.GetComponentInChildren<SpriteRenderer>();
			sr.color = player.playerColor;

			var trail = obj.GetComponentInChildren<TrailRenderer>();
			trail.startColor = player.playerColor;
			trail.endColor = player.playerColor;

			var playerController = obj.GetComponentInChildren<PlayerController>();
			playerController.respawnArmRoot = armRespawnRoots[i];



			i++;
		}
	}

	void RemovePlayer(PlayerInputManager player){
		player.isEnabled = false;
		chosenColors.Remove(player.playerColor);
	}


	void UpdateDisplayStatus(){
		for(int i = 0; i<inputManagers.Count; i++){
			playerJoinedDisplays[i].SetActive(inputManagers[i].isEnabled);
		}
	}

	// void SpawnAllPlayers
}
