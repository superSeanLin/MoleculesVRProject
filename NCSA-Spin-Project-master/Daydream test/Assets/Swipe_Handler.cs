using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Swipe_Handler : MonoBehaviour {
	// GvrControllerInput inherited from MonoBehaviour
	private GameObject molecule;
	private Vector3 offset;
	private Vector2 previous_scale;
	public UIManager uiManager;

	// Use this for initialization
	IEnumerator Start () {
		uiManager = GameObject.Find("UIManager").GetComponent<UIManager>();
		// wait ReadManifest finish and update the count
        yield return uiManager.count;
		molecule = GameObject.FindGameObjectsWithTag("edmc")[0];
		// The touch position is given as a Vector2 where X and Y range from 0 to 1. (0, 0) is the top left of the touchpad and (1, 1) is the bottom right of the touchpad
		if(GvrControllerInput.IsTouching){
			previous_scale = GvrControllerInput.TouchPos;
		}
	}
	
	// Update is called once per frame
	void Update () {
		bool beingScale = objMessage.loadScale();
		if(GvrControllerInput.AppButtonDown){
			if(beingScale){
				objMessage.disable_scale();
			}
			else{
				objMessage.enable_scale();
			}
		}
		
		if(beingScale && GvrControllerInput.IsTouching){
			Vector2 current_sclae = GvrControllerInput.TouchPos;
			offset = (convert(current_sclae) - convert(previous_scale)) * 7.0f;
			molecule.transform.localScale = molecule.transform.localScale + offset;
			previous_scale = current_sclae;
		}
	}

	Vector3 convert(Vector2 position){
		float scale = Mathf.Sqrt((position.x - 0.5f) * (position.x - 0.5f) +  Mathf.Abs(position.y - 0.5f) * Mathf.Abs(position.y - 0.5f));
		return new Vector3(scale, scale, scale);
	}
}
