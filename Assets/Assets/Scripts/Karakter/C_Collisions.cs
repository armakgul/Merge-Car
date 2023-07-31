using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C_Collisions : MonoBehaviour
{
       [SerializeField] public float damage;
       public ObsSpawner2 obsSpawner2;

        // TRIGGER
    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Obs")) 
        { 
            
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damage);
            }
        } 

         if (other.CompareTag("Section2Trigger")) {
            obsSpawner2.SpawnObstacleSets();
            Debug.Log("asdgdaga");
         }
    }
}
