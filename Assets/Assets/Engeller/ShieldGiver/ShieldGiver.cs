using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldGiver : MonoBehaviour
{
    public float shieldAmount;


    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            IShieldable shieldable = other.GetComponent<IShieldable>();
            if (shieldable != null)
            {
                shieldable.Shield(shieldAmount);
            }
            
        } 
    }
}
