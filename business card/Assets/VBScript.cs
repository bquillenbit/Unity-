using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class VBScript : MonoBehaviour, IVirtualButtonEventHandler {
	private	GameObject VBButtonObject;
	private GameObject zombie; 
	// Use this for initialization
	void Start () {
		VBButtonObject = GameObject.Find ("actionButton");
		zombie = GameObject.Find ("zombie");
		VBButtonObject.GetComponent<VirtualButtonBehaviour> ().RegisterEventHandler (this);
	}
	public void OnButtonPressed (VirtualButtonAbstractBehaviour vb) {
		Debug.Log ("button pressed");
		zombie.GetComponent<Animation> ().Play ();

	}


	public void OnButtonReleased(VirtualButtonAbstractBehaviour vb){
		zombie.GetComponent<Animation> ().Stop ();
	}
}


