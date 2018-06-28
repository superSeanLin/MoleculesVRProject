using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// may transfer to scroll controller later
public class Rotation_Handler : MonoBehaviour, IPointerClickHandler {
	private GameObject molecule;
	// use one button toggled
	public GameObject ON_OFF_Button;

	// Use this for initialization
	void Start () {
		ON_OFF_Button = GameObject.Find("Rotation_Controller");
		molecule = GameObject.FindGameObjectsWithTag("edmc")[0];
	}
	
	public void OnPointerClick(PointerEventData data) {
		if(ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Rotation Mode OFF"){ // rotating
			objMessage.pause();
			ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Rotation Mode ON";
		}
		else if(ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Rotation Mode ON"){
			objMessage.revolve();
			ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Rotation Mode OFF";
		}
	}
}
