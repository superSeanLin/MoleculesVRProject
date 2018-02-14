using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotational : MonoBehaviour {
	public GameObject camera;
	public GameObject other;
	int flag;
	// Use this for initialization
	void Start () {
		flag = 0;	
		
	}
	
	// Update is called once per frame
	void Update () {
		if (flag == 0) {
			transform.Rotate (new Vector3 (Time.deltaTime * 10, 0, 0));
			transform.RotateAround (camera.transform.position, camera.transform.up, 10 * Time.deltaTime);
		}

		transform.localRotation = GvrController.Orientation;
	
		if(GvrController.ClickButtonDown)
		{
			if (flag == 0)
				flag = 1;
			else
				flag = 0;
		}
		if (Input.GetKeyDown ("space")) {
			other.active = false;
		}
		if (Input.GetKeyDown("r")){
			other.active = true;
		}
			
	
	}
}
