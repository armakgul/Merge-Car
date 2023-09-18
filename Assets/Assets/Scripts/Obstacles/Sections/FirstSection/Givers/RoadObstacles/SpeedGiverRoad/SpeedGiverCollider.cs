using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedGiverCollider : MonoBehaviour
{   
    private SpeedGiverRoad speedGiverScript;
    public float deltaAmount;
    
    private void Start() {
        speedGiverScript = transform.parent.GetComponent<SpeedGiverRoad>();
    }



    private void OnTriggerStay(Collider other) {
        if (other.tag == "Player")
        {
            speedGiverScript.speedAmount += Time.deltaTime*deltaAmount;
        }
    }

    
}
