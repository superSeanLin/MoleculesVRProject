using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class MoleculeLoader : MonoBehaviour
{

    public static string c_filename; //.xyz file
    public static string cv_filename;   // .vesta file

    public GameObject Atom_Parent;
    public GameObject Bond_Parent;
    public GameObject overallParent;

    private static GameObject ap;
    private static GameObject bp;

    Color[] colors = { Color.red, Color.green, Color.blue, Color.cyan, Color.yellow, Color.white, Color.magenta };


    public void AtomUpdate(int mol_num, GameObject molparent, GameObject atomparent, GameObject bondparent)
    {
        Atom_Parent = atomparent;
        Bond_Parent = bondparent;
        overallParent = molparent;
        switch (mol_num % 5)
        {
            case 0:
                read_atom("Assets\\Molecules\\mol1.xyz");
                read_bond("Assets\\Molecules\\mol1.vesta");
                c_filename = "Assets\\Molecules\\mol1.xyz";
                cv_filename = "Assets\\Molecules\\mol1.vesta";
                draw_bond();
                break;
            case 1:
                read_atom("Assets\\Molecules\\CuZnSnS.xyz");
                read_bond("Assets\\Molecules\\CuZnSnS.vesta");
                c_filename = "Assets\\Molecules\\CuZnSnS.xyz";
                cv_filename = "Assets\\Molecules\\CuZnSnS.vesta";
                draw_bond();
                break;
            case 2:
                read_atom("Assets\\Molecules\\Ammonium-Iron-Sulfate-Hexahydrate.xyz");
                read_bond("Assets\\Molecules\\Ammonium-Iron-Sulfate-Hexahydrate.vesta");
                c_filename = "Assets\\Molecules\\Ammonium-Iron-Sulfate-Hexahydrate.xyz";
                cv_filename = "Assets\\Molecules\\Ammonium-Iron-Sulfate-Hexahydrate.vesta";
                draw_bond();
                break;
            case 3:
                read_atom("Assets\\Molecules\\Borax.xyz");
                read_bond("Assets\\Molecules\\Borax.vesta");
                c_filename = "Assets\\Molecules\\Borax.xyz";
                cv_filename = "Assets\\Molecules\\Borax.vesta";
                draw_bond();
                break;
            case 4:
                read_atom("Assets\\Molecules\\Alum.xyz");
                read_bond("Assets\\Molecules\\Alum.vesta");
                c_filename = "Assets\\Molecules\\Alum.xyz";
                cv_filename = "Assets\\Molecules\\Alum.vesta";
                draw_bond();
                break;
            default:
                read_atom("Assets\\Molecules\\mol1.xyz");
                read_bond("Assets\\Molecules\\mol1.vesta");
                c_filename = "Assets\\Molecules\\mol1.xyz";
                cv_filename = "Assets\\Molecules\\mol1.vesta";
                draw_bond();
                break;
        }
    }

    #region Data Structures
    public struct atom_info
    {
        public String name;
        public Vector3 pos;
        public GameObject sphere;
        public float weight;
        public float radius;

        // constructor
        public atom_info(String name, float x, float y, float z, GameObject sphere)
        {
            this.name = name;
            pos.x = x;
            pos.y = y;
            pos.z = z;
            this.sphere = sphere;
            weight = 0;
            radius = 0;
        }

        public void set_sphere(GameObject sphere)
        {
            this.sphere = sphere;
        }

        public void set_radius(float r)
        {
            this.radius = r;
        }

        public void set_weight(float w)
        {
            this.weight = w;
        }
    }
    public struct atom_bond
    {
        public atom_info atom1;
        public atom_info atom2;
        //public LineRenderer lineRenderer;

        public atom_bond(atom_info atom1, atom_info atom2)
        {
            this.atom1 = atom1;
            this.atom2 = atom2;
        }

    }
    #endregion

    public static List<atom_info> atomlist = new List<atom_info>();
    public static List<atom_bond> bondlist = new List<atom_bond>();
 
    void Start()
    {
        ap = Atom_Parent;
        bp = Bond_Parent;

        read_atom("Assets\\Molecules\\mol1.xyz");
        read_bond("Assets\\Molecules\\mol1.vesta");
        c_filename = "Assets\\Molecules\\mol1.xyz";
        cv_filename = "Assets\\Molecules\\mol1.vesta";
        draw_bond();

    }

    #region Atom Drawing
    GameObject draw_atom(atom_info i)
    {
        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.parent = Atom_Parent.transform;
        sphere.name = i.name + "\t" + i.pos.ToString();
        sphere.transform.position = i.pos;
        switch (i.name)
        {
            case "Pb":
                sphere.transform.localScale = new Vector3(0.08f, 0.08f, 0.08f);
                sphere.GetComponent<Renderer>().material.color = colors[1];
                i.set_radius(1.47f);
                i.set_weight(207.2f);
                break;
            case "I":
                sphere.transform.localScale = new Vector3(0.07f, 0.07f, 0.07f);
                sphere.GetComponent<Renderer>().material.color = colors[2];
                i.set_radius(1.33f);
                i.set_weight(126.904f);
                break;
            case "C":
                sphere.transform.localScale = new Vector3(0.06f, 0.06f, 0.06f);
                sphere.GetComponent<Renderer>().material.color = colors[3];
                i.set_radius(0.77f);
                i.set_weight(12.011f);
                break;
            case "H":
                sphere.transform.localScale = new Vector3(0.03f, 0.03f, 0.03f);
                sphere.GetComponent<Renderer>().material.color = colors[4];
                i.set_radius(0.37f);
                i.set_weight(1.008f);
                break;
            case "N":
                sphere.transform.localScale = new Vector3(0.06f, 0.06f, 0.06f);
                sphere.GetComponent<Renderer>().material.color = colors[5];
                i.set_radius(0.75f);
                i.set_weight(14.007f);
                break;
            case "Zn":
                sphere.transform.localScale = new Vector3(0.07f, 0.07f, 0.07f);
                sphere.GetComponent<Renderer>().material.color = colors[6];
                i.set_radius(1.31f);
                i.set_weight(65.38f);
                break;
            case "Cu":
                sphere.transform.localScale = new Vector3(0.07f, 0.07f, 0.07f);
                sphere.GetComponent<Renderer>().material.color = colors[0];
                i.set_radius(1.38f);
                i.set_weight(63.546f);
                break;
            case "S":
                sphere.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
                sphere.GetComponent<Renderer>().material.color = colors[2];
                i.set_radius(1.02f);
                i.set_weight(32.06f);
                break;
            default:
                sphere.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
                sphere.GetComponent<Renderer>().material.color = colors[6];
                i.set_radius(1f);
                i.set_weight(10f);
                break;
        }
        i.set_sphere(sphere);
        return sphere;
    }
    private void read_atom(String filename)
    {
        atomlist = new List<atom_info>();
        try
        {
            string line;
            StreamReader fileReader = new StreamReader(filename, Encoding.Default);

            // The first two lines of the file are metadata
            // The first line is the number of atoms
            // The second line is the types of atoms
            line = fileReader.ReadLine();

            // Convert this line to a int
            int numAtoms;
            numAtoms = int.Parse(line);

            line = fileReader.ReadLine();
            string[] atomTypesRAW = line.Split(' ');
            List<string> atomTypes = new List<string>();
            // This line is harder to read because VESTA XYZ files are dumb IMO...
            for (int i = 0; i < atomTypesRAW.Length; i++)
            {
                // Make sure split string is valid
                // If so add it to our array
                if (atomTypesRAW[i].Length > 0)
                {
                    atomTypes.Add(atomTypesRAW[i]);
                }
            }

            // Now read all the atoms in the file. We can read lines for the numAtoms in the file
            for (int i = 0; i < numAtoms; i++)
            {
                line = fileReader.ReadLine();
                // For right now, just make a sphere for every atom we see (sphere size of .5 or something)
                string[] atomDataRAW = line.Split(' ');
                // There should be 4 pieces of valid data. The first one is the atom name. The rest are float values of position in the molecule
                bool readName = false; // Simple check to see if we have read a name or not
                string atomName = "C";
                float? x = null;
                float? y = null;
                float? z = null;
                for (int j = 0; j < atomDataRAW.Length; j++)
                {
                    if (atomDataRAW[j].Length > 0)
                    {
                        if (!readName)
                        {
                            atomName = atomDataRAW[j];
                            readName = true;
                        }
                        else
                        {
                            if (x == null)
                            {
                                x = float.Parse(atomDataRAW[j], System.Globalization.CultureInfo.InvariantCulture.NumberFormat);
                            }
                            else if (y == null)
                            {
                                y = float.Parse(atomDataRAW[j], System.Globalization.CultureInfo.InvariantCulture.NumberFormat);
                            }
                            else
                            {
                                z = float.Parse(atomDataRAW[j], System.Globalization.CultureInfo.InvariantCulture.NumberFormat);
                            }
                        }
                    }
                }
                atom_info atm = new atom_info(atomName, x.GetValueOrDefault() / 22.0f, y.GetValueOrDefault() / 22.0f, z.GetValueOrDefault() / 22.0f, null);
                atm.set_sphere(draw_atom(atm));
                atomlist.Add(atm);
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Something Went Wrong: " + e.Message + "\n" + e.StackTrace + " " + e.Source);
            Debug.LogError(filename);
            return;
        }
        Atom_Parent.transform.parent = null;
        var children = Atom_Parent.transform.Cast<Transform>().ToList();
        var pos = Vector3.zero;
        foreach (var C in children)
        {
            pos += C.position;
            C.parent = null;
        }
        pos /= children.Count;
        Atom_Parent.transform.position = pos;
        overallParent.transform.position = pos;
        foreach (var C in children)
        {
            C.parent = Atom_Parent.transform;
        }
        Atom_Parent.transform.parent = overallParent.transform;
    }
    #endregion

    #region Bond Drawing
    public static void create_vessel(atom_info a1, atom_info a2)
    {
        Vector3 p1 = a1.pos;
        Vector3 p2 = a2.pos;
        Vector3 pos = Vector3.Lerp(p1, p2, (float)0.5);
        GameObject segObj = GameObject.CreatePrimitive(PrimitiveType.Cylinder);
        segObj.transform.parent = bp.transform;
        segObj.name = a1.name + "-" + a2.name + " " + pos;
        Vector3 newScale = segObj.transform.localScale;
        newScale.y = Vector3.Distance(p1, p2)*.5f;
        newScale.x = .01f;
        newScale.z = .01f;
        segObj.transform.localScale = newScale;
        segObj.transform.position = pos;
        segObj.transform.up = p2 - p1;
    }
    public static void draw_bond()
    {
        foreach (var i in bondlist)
        {
            create_vessel(i.atom1, i.atom2);
        }
    }
    public static void read_bond(String filename_v)
    {
        bondlist = new List<atom_bond>();
        try
        {
            string line;

            // parse the vesta file and look for bonds
            StreamReader fileReader = new StreamReader(filename_v, Encoding.Default);

            // Find bond information in vesta file
            while (fileReader.ReadLine() != "SBOND"){}

            while (true)
            {
                line = fileReader.ReadLine();
                if (line == "  0 0 0 0") break;

                string[] line_split = line.Split(new char[0], StringSplitOptions.RemoveEmptyEntries);
                String atom1 = line_split[1];
                String atom2 = line_split[2];
                

                float max = Convert.ToSingle(line_split[4]);
                float max_dist = (1 * max) * (1 * max);
                foreach (var i in atomlist)
                {
                    if (atom1 == i.name)
                    {
                        foreach (var j in atomlist)
                        {
                            if (atom2 == j.name)
                            {

                                if (Vector3.Distance(i.pos, j.pos) < max_dist/90)
                                {
                                    bondlist.Add(new atom_bond(i, j));
                                }
                            }
                        }

                    }
                }


            }

        }
        catch (Exception e)
        {
            Debug.LogError("Something Went Wrong: " + e.Message);
            return;
        }
    }
    #endregion

    #region Utility functions
    public static atom_info findMole(Vector3 pos)
    {
        float best_dist = 100;
        atom_info c_best = new atom_info("null", 0, 0, 0, null);

        foreach (var i in atomlist)
        {
            float c = Vector3.Distance(pos, i.pos);
            if (c < 0.15 && c < best_dist)
            {
                c_best = i;
                best_dist = c;
            }
        }
        return c_best;
    }

    public static void updateAllPositions()
    {
        var children = ap.transform.Cast<Transform>().ToList();

        atomlist = new List<atom_info>();

        foreach (var c in children)
        {
            String objname = c.gameObject.name;
            string[] objSplit = objname.Split('\t');
            atomlist.Add(new atom_info(objSplit[0], c.position.x, c.position.y, c.position.z, c.gameObject));
        }
    }

    public static void deleteAllBonds()
    {
        var children = bp.transform.Cast<Transform>().ToList();
        foreach (var c in children)
        {
            DestroyImmediate(c.gameObject);
            //c.gameObject.SetActive(false);
            //c.gameObject.GetComponent<Renderer>().enabled = false;
            //c.localScale = Vector3.zero;
        }
        bondlist = new List<atom_bond>();
    }

    public static void deleteAllAtoms()
    {
        var children = ap.transform.Cast<Transform>().ToList();
        foreach (var c in children)
        {
            DestroyImmediate(c.gameObject);
            //c.gameObject.SetActive(false);
            //c.gameObject.GetComponent<Renderer>().enabled = false;
            //c.localScale = Vector3.zero;
        }
        atomlist = new List<atom_info>();
    }


    public static void redrawBonds()
    {
        read_bond(cv_filename);
        draw_bond();
    }

    public static void writeXYZ()
    {
        var filename = "C:\\Users\\tdubey3\\Desktop\\mol.xyz";
        var sr = File.CreateText(filename);
        sr.WriteLine(atomlist.Count.ToString());
        List<String> mols = new List<String>();
        foreach (var a in atomlist)
        {
            if(mols.IndexOf(a.name) < 0)
            {
                mols.Add(a.name);
            }
        }
        String molString = "";
        foreach (var b in mols)
        {
            molString += b + " ";
        }

        sr.WriteLine(molString);

        foreach (var a in atomlist)
        {
            sr.WriteLine("{0}\t{1}\t{2}\t{3}", a.name, a.pos.x * 22f, a.pos.y * 22f, a.pos.z * 22f);
        }
        sr.Close();
    }
    #endregion
}