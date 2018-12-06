using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class GazeInput : MonoBehaviour {
    [SerializeField]
    private float _gazeTime = 2.0f;
    private float _timer;

    private bool _isGazedAt;

    Scene currentScene;

    PointerEventData pointer = new PointerEventData(EventSystem.current);
    void Start () {
        currentScene = SceneManager.GetActiveScene();
        _timer = 0.0f;
	}
	
	void Update () {
        if(_isGazedAt) {
            _timer += Time.deltaTime;

            if(_timer >=_gazeTime) {
                PointerGaze();
                _timer = 0.0f;
            }
        }
	}

    public void PointerEnter() {
        _isGazedAt = true;
    }
    public void PointerExit() {
        _isGazedAt = false;
        _timer = 0.0f;
    }
    public void PointerGaze() {
        if(currentScene.name == "New_Menu") {
            if (this.gameObject.tag == "b")
            {
                //ExecuteEvents.Execute(this.gameObject, pointer, ExecuteEvents.submitHandler); // doesnt work?
                objMessage.loadMessage(gameObject.name);
                Application.LoadLevel("SPIN6.26");
                objMessage.revolve();
            }
        }
    }
}
