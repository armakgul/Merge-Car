using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyer : MonoBehaviour
{
    
    [SerializeField] float damage;

      
    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Obs")) 
        { 
            Destroy(other);
            /*
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damage);
            }
            */
        } 
        
    }
}
