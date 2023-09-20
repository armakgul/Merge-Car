using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallObstacle : MonoBehaviour
{
    public float damageAmount;

    private void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        {            
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
            }
        }
            
        } 
}
