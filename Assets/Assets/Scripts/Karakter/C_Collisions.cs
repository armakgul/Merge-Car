using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class C_Collisions : MonoBehaviour
{
       [SerializeField] float damage;

      
    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Obs")) 
        { 
            
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damage);
            }
        } 
        
    }
}
