using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testasd : MonoBehaviour {

    public static string molecule_name;

	// Use this for initialization
	void Start () {
        DontDestroyOnLoad(this);

    }
	
	// Update is called once per frame
	void Update () {
        Debug.Log(molecule_name);
    }
}
