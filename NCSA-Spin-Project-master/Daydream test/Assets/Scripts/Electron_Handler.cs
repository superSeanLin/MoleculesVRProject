using HoloToolkit.Unity.InputModule.Tests;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// may transfer to scroll controller later
public class Electron_Handler : MonoBehaviour
{  //, IPointerClickHandler {

    private GameObject molecule;
    public GameObject ON_OFF_Button;

    [SerializeField]
    private TestButton button = null;

    private GameObject Electron_Density;

    private void Awake()
    {
        button.Activated += OnButtonPressed;
    }

    // Use this for initialization
    public void Start()
    {
        molecule = GameObject.FindGameObjectWithTag("edmc");
        Electron_Density = molecule.transform.Find("Electron_Density").gameObject;
    }


    // FOR the BUTTON SYSTEM
    private void OnButtonPressed(TestButton data)
    {
        if (ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Electron Density OFF")
        {
            Electron_Density.SetActive(false);
            ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Electron Density ON";
        }
        else if (ON_OFF_Button.GetComponentsInChildren<Text>()[0].text == "Electron Density ON")
        {
            Electron_Density.SetActive(true);
            ON_OFF_Button.GetComponentsInChildren<Text>()[0].text = "Electron Density OFF";
        }
    }
}
