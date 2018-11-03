using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class rotationalED : MonoBehaviour
{
    private Material[] m_Materials;

    // Use this for initialization
    public void Start()
    {
        string moleculename = testasd.molecule_name;

        GameObject molecule = Instantiate(Resources.Load(moleculename)) as GameObject;

        Vector3 size = new Vector3(0.1f, 0.1f, 0.1f);
        // coordinate with camera
        Vector3 slideRight = new Vector3(0.557f, 1f, 0.843f);
        Vector3 rotation = new Vector3(0.0f, 0.0f, 0.0f);
        molecule.transform.localScale = size;
        molecule.transform.position = slideRight;
        molecule.tag = "edmc";

        GameObject Electron_Density = molecule.transform.Find("Electron_Density").gameObject;

        m_Materials = molecule.transform.Find("Electron_Density").GetComponent<Renderer>().materials;

        foreach (Material m in m_Materials)
        {
            Color color = m.color;
            color.a = 0.4f;
            m.color = color;
            m.SetFloat("_Metallic", 0.039f);
            m.SetFloat("_Mode", 3);
            m.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
            m.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            m.SetInt("_ZWrite", 0);
            m.DisableKeyword("_ALPHATEST_ON");
            m.EnableKeyword("_ALPHABLEND_ON");
            m.DisableKeyword("_ALPHAPREMULTIPLY_ON");
            m.renderQueue = 3000;
        }
        Electron_Density.SetActive(false);

    }

    public void Update()
    {
        GameObject[] copy = GameObject.FindGameObjectsWithTag("edmc");
        if (objMessage.loadBoolean() == true)
        {
            foreach (GameObject i in copy)
                i.transform.Rotate(Vector3.down * Time.deltaTime * 10.0f);
        }
        else
        {
            foreach (GameObject i in copy)
                i.transform.Rotate(Vector3.zero);
        }
    }
}
