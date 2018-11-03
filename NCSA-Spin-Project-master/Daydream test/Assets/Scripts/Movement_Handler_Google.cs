using HoloToolkit.Unity.InputModule;
using System.Linq;
using HoloToolkit.Unity.InputModule.Examples.Grabbables;
using HoloToolkit.Unity.InputModule.Tests;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// maybe later use daydream app button
public class Movement_Handler_Google : MonoBehaviour, IPointerClickHandler {
    private string keyword = "Ball";
    private GameObject[] array = null;
    private GameObject molecule = null;
    // use one button toggled
    public GameObject ON_OFF_Button;

    // Use this for initialization
    public void Start()
    {
        //ON_OFF_Button = GameObject.Find("Movement_Controller");
        array = GameObject.FindGameObjectsWithTag("edmc");
    }

    public void Update()
    {
        if (array.Length == 0 && molecule == null)
        {
            array = GameObject.FindGameObjectsWithTag("edmc");
        }
        else
            molecule = array[0];
    }

	public void OnPointerClick(PointerEventData data) {
		// GvrControllerInput.AppButton
        if (ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Movement Mode ON")
        { // not able to move
          // remove old Sphere Collider
            Debug.Log("1");
            List<GameObject> l = new List<Transform>(molecule.transform.GetComponentsInChildren<Transform>()).ConvertAll<GameObject>(delegate (Transform p_it) { return p_it.gameObject; });
            foreach (GameObject i in l)
            {
                GameObject atom = i.gameObject;
                Destroy(atom.GetComponent<SphereCollider>());
            }
            Debug.Log("2");
            // add grabbable script

            //molecule.AddComponent<InputTest>();


            // add Sphere Collider
            molecule.AddComponent<GrabbableSimple>();
            Debug.Log("3");
            SphereCollider collider_molecule = molecule.AddComponent<SphereCollider>() as SphereCollider;
            if (molecule.name == "sucrose_soft")
                collider_molecule.radius = 5;
            else
                collider_molecule.radius = 9;
            ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Movement Mode OFF";
            molecule.AddComponent<HandDraggable>();
            molecule.AddComponent<RotatableObject>();
        }
        else if (ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Movement Mode OFF")
        {
            Destroy(GetComponent<GrabbableSimple>());
            // remove old Sphere Collider
            Destroy(molecule.GetComponent<SphereCollider>());
            Destroy(molecule.GetComponent<HandDraggable>());
            Destroy(molecule.GetComponent<RotatableObject>());
            // add Sphere Collider 
            List<GameObject> l = new List<Transform>(molecule.transform.GetComponentsInChildren<Transform>()).ConvertAll<GameObject>(delegate (Transform p_it) { return p_it.gameObject; });
            foreach (GameObject i in l)
            {
                GameObject atom = i.gameObject;
                if (atom.ToString().Contains(keyword))
                {
                    SphereCollider collider_atom = atom.AddComponent<SphereCollider>() as SphereCollider;
                }
            }
            ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Movement Mode ON";

        }
    }

    
}
