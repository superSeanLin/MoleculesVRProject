using UnityEngine;
using UnityEngine.UI;

public class Controller : MonoBehaviour
{
    private SteamVR_TrackedController _controller;
    private PrimitiveType _currentPrimitiveType = PrimitiveType.Sphere;

    public Text tvModeText;
    public Text tvNameText;
    public Text tvInformationText;
    public Text tvInstructionText;
    public Text tvModeLabelText;
    public Text tvModeValueText;
    public Text tvWeightText;
    public Text tvRadiusText;

    public GameObject atomParent;
    public GameObject bondParent;
    public GameObject molParent;

    public GameObject center;
    public GameObject mol;

    private MoleculeLoader.atom_info a1;
    private MoleculeLoader.atom_info a2;
    private MoleculeLoader.atom_info a3;
    MoleculeLoader.atom_info xb;

    private int f1 = 0;
    private int f2 = 0;
    private int f3 = 0;

    private int mode = 0;
    public int molnum = 0;
    private int gripped = 0;

    private int searched = 0;

    private void Start()
    {
        mol = GameObject.FindWithTag("_moleculetag");
        center = GameObject.FindWithTag("_center");
        //mol.transform.renderer.bounds.center
    }

    private void Update()
    {
        if (mode == 0 && (gripped == 1))
        {
            Vector3 ang = _controller.transform.eulerAngles;
            ang.x += -90;
            mol.transform.eulerAngles = ang;
        }

        if (mode == 3 && (gripped == 1))
        {
            
            if (searched == 0)
            {
                xb = MoleculeLoader.findMole(transform.position);
                searched = 1;
            }
            //xb.pos = _controller.transform.position;
            xb.sphere.transform.position = _controller.transform.position;
        }
    }
  
    private void OnEnable()
    {
        _controller = GetComponent<SteamVR_TrackedController>();
        _controller.TriggerClicked += HandleTriggerClicked;
        _controller.PadClicked += HandlePadClicked;
        _controller.Gripped += HandleGripped;
        _controller.Ungripped += HandleUngripped;
        _controller.MenuButtonClicked += HandleMenuClicked;
    }

    private void OnDisable()
    {
        _controller.TriggerClicked -= HandleTriggerClicked;
        _controller.PadClicked -= HandlePadClicked;
    }

    #region Callback functions
    private void HandleMenuClicked(object sender, ClickedEventArgs e)
    {
        molnum = molnum + 1;
        MoleculeLoader.deleteAllBonds();
        MoleculeLoader.deleteAllAtoms();
        MoleculeLoader x = new MoleculeLoader();
        x.AtomUpdate(molnum, molParent, atomParent, bondParent);
    }
    
    private void HandleUngripped(object sender, ClickedEventArgs e)
    {
        gripped = 0;
        searched = 0;
        MoleculeLoader.updateAllPositions();
        if(mode == 3)
        {
            MoleculeLoader.deleteAllBonds();
            MoleculeLoader.updateAllPositions();
            MoleculeLoader.redrawBonds();
        }
    }

    private void HandleGripped(object sender, ClickedEventArgs e)
    {
        gripped = 1;
    }
    #endregion

    #region Trigger Handling
    private void HandleTriggerClicked(object sender, ClickedEventArgs e)
    {
        MoleculeLoader.atom_info x = MoleculeLoader.findMole(transform.position);
            tvNameText.text = x.name;

        switch (x.name)
        {
            case "Pb":
                tvRadiusText.text = "1.47" + " Å";
                tvWeightText.text = "207.2";
                break;
            case "I":
                tvRadiusText.text = "1.33" + " Å";
                tvWeightText.text = "126.904";
                break;
            case "C":
                tvRadiusText.text = "0.77" + " Å";
                tvWeightText.text = "12.011";
                break;
            case "H":
                tvRadiusText.text = "0.37" + " Å";
                tvWeightText.text = "1.008";
                break;
            case "N":
                tvRadiusText.text = "0.75" + " Å";
                tvWeightText.text = "14.007";
                break;
            case "Zn":
                tvRadiusText.text = "1.31" + " Å";
                tvWeightText.text = "65.38";
                break;
            case "Cu":
                tvRadiusText.text = "1.38" + " Å";
                tvWeightText.text = "63.546";
                break;
            case "S":
                tvRadiusText.text = "1.02" + " Å";
                tvWeightText.text = "32.06";
                break;
            default:
                tvRadiusText.text = "1" + " Å";
                tvWeightText.text = "10";
                break;
        }


        // Rotate Entire Molecule
        if (mode == 0)
        {
            // Code is in update
        }  

        // Get Distance Between 2
        if (mode == 1)
        {
            if (f1 == 0)
            {
                a1 = x;
                f1 = 1;
            } else
            {
                a2 = x;
                f2 = 1;
            }
            if((f1 == 1)  && (f2 == 1))
            {
                f1 = 0;
                f2 = 0;
                tvModeValueText.text = (Vector3.Distance(a1.pos, a2.pos) * 22).ToString() + " Å";
            }
        }  

        // Get Angle Between 3
        if (mode == 2)
        {
            if (f1 == 0)
            {
                a1 = x;
                f1 = 1;
            }
            else if ((f2 == 0) && (f1 == 1))
            {
                a2 = x;
                f2 = 1;
            } else if ((f2 == 1) && (f1 == 1))
            {
                a3 = x;
                f3 = 1;
            }
            if ((f1 == 1) && (f2 == 1) && (f3 == 1))
            {
                f1 = 0;
                f2 = 0;
                f3 = 0;
                Vector3 AB = a1.pos - a2.pos;
                Vector3 BC = a3.pos - a2.pos;

                tvModeValueText.text = Vector3.Angle(AB, BC).ToString() + " °";
            }
        }

        // Move single molecule and then redraw bonds
        if (mode == 3)     
        {
            
        }

        if (mode == 4)
        {
            MoleculeLoader.writeXYZ();
        }
    }
    #endregion

    #region Mode Selection
    private void HandlePadClicked(object sender, ClickedEventArgs e)
    {
        if (e.padY < 0)
            SelectPreviousMode();
        else
            SelectNextMode();
    }

    private void SelectNextMode()
    {
        if(mode == 4)
        {
            return;
        }
        mode++;
        if (mode == 0)
        {
            tvModeText.text = "Information/Movement";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on an atom to get information about it. Grip and hold to rotate the molecule.";
        }
        if (mode == 1)
        {
            tvModeText.text = "Distance";
            tvModeLabelText.text = "Distance:";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on two atoms to calculate the distance between them.";
        }
        if (mode == 2)
        {
            tvModeText.text = "Angle";
            tvModeLabelText.text = "Angle:";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on three atoms to calculate the angle between them";
        }
        if (mode == 3)
        {
            tvModeText.text = "Move Atom";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Grip and hold on an atom to move it to a new location. Bonds will be redrawn";
        }
        if (mode == 4)
        {
            tvModeText.text = "Save Molecule";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Save Molecule as a XYZ file on the Desktop by pressing the trigger.";
        }
    }

    private void SelectPreviousMode()
    {
        if (mode == 0)
        {
            return;
        }
        mode--;
        if (mode == 0)
        {
            tvModeText.text = "Information/Movement";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on an atom to get information about it. Grip and hold to rotate the molecule.";
        }
        if (mode == 1)
        {
            tvModeText.text = "Distance";
            tvModeLabelText.text = "Distance:";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on two atoms to calculate the distance between them.";
        }
        if (mode == 2)
        {
            tvModeText.text = "Angle";
            tvModeLabelText.text = "Angle:";
            tvModeValueText.text = "";
            tvInstructionText.text = "Click on three atoms to calculate the angle between them";
        }
        if (mode == 3)
        {
            tvModeText.text = "Move Atom";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Grip and hold on an atom to move it to a new location. Bonds will be redrawn";
        }
        if (mode == 4)
        {
            tvModeText.text = "Save Molecule";
            tvModeLabelText.text = "";
            tvModeValueText.text = "";
            tvInstructionText.text = "Save Molecule as a XYZ file on the Desktop";
        }
    }
    #endregion
}