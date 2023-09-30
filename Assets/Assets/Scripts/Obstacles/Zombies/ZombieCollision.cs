using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieCollision : MonoBehaviour
{
 public int damage = 10;

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            ICurable curable = other.GetComponent<ICurable>();
            if (curable != null)
            {
                curable.Cure(damage);
            }
            
        } 
    }
}
