using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthGiver : MonoBehaviour
{
    public float cureAmount;


    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            ICurable curable = other.GetComponent<ICurable>();
            if (curable != null)
            {
                curable.Cure(cureAmount);
            }
            
        } 
    }
}
