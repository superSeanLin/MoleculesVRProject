using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Electron_Density_Test : MonoBehaviour {

    GameObject objPrefab;
    GameObject obj;

    // Use this for initialization
    void Start () {
        objPrefab = Resources.Load("ethene") as GameObject;
        obj = Instantiate(objPrefab) as GameObject;
        obj.AddComponent<EditMaterials>();
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
