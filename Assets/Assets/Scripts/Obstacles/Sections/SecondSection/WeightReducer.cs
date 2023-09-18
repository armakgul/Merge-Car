using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeightReducer : MonoBehaviour
{
    public float weightAmount;

    public float damageAmount;

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            IWeightable weightable = other.GetComponent<IWeightable>();
            if (weightable != null)
            {
                weightable.WeightDown(weightAmount);
            }

           
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
            }
        }
            
        } 
}
