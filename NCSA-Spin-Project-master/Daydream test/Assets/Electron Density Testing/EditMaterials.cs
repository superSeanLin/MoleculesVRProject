using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EditMaterials : MonoBehaviour {

    public Material[] m_Materials;

    // Use this for initialization
    void Start () {
        m_Materials = transform.Find("Electron_Density").GetComponent<Renderer>().materials;

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
    }
}
