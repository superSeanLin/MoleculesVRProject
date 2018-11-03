using UnityEngine;
using System.Collections;
using AssetBundles;
using System.Collections.Generic;
using UnityEngine.UI;

public class LoadAssetsED : MonoBehaviour
{
    public GameObject myCanvas;
    public UIManager uiManager;

    public Material[] m_Materials;

    public GameObject[] molecules;

    public void Start()
    {
        //uiManager = GameObject.Find("UIManager").GetComponent<UIManager>();
        // wait ReadManifest finish and update the count
        //myCanvas = GameObject.Find("Menu_Canvas");
        int random_number = Mathf.RoundToInt(Random.value * (uiManager.count - 1));
        // copy and set

        molecules = Resources.FindObjectsOfTypeAll<GameObject>();

        GameObject molecule = Instantiate(molecules[random_number]) as GameObject;
        Vector3 size = new Vector3(5f, 5f, 5f);
        // scale : 4
        Vector3 position = new Vector3(50f, 0.0f, -250.0f);

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

        molecule.transform.localScale = size;
        molecule.transform.position = position;
        molecule.tag = "mc";
        molecule.name = UIManager.moleculeNames[random_number];



        // set molecule parent and set relative position
        molecule.transform.SetParent(myCanvas.transform, false);
    }


}
