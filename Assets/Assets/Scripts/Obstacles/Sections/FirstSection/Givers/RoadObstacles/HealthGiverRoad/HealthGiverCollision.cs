using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthGiverCollision : MonoBehaviour
{   
    private HealthGiverRoad healthGiverScript;
    public float deltaAmount;
    
    private void Start() {
        healthGiverScript = transform.parent.GetComponent<HealthGiverRoad>();
    }



    private void OnTriggerStay(Collider other) {
        if (other.tag == "Player")
        {
            healthGiverScript.cureAmount += Time.deltaTime*deltaAmount;
        }
    }

    
}
