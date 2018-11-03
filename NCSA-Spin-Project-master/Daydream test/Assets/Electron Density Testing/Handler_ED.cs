using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Handler_ED : MonoBehaviour, IPointerClickHandler
{

    // maybe use GvrControllerInput.ClickButtonDown later
    public void OnPointerClick(PointerEventData data)
    {
        //if (EventSystem.current.currentSelectedGameObject.GetComponent<Button>() != null)
        if (gameObject.tag == "b")
        {
            objMessage.loadMessage(gameObject.name);
            Application.LoadLevel("SPIN6.26_electron_density_test");
            objMessage.revolve();

            testasd.molecule_name = GetComponentInChildren<Text>().text;

        }
    }
}
