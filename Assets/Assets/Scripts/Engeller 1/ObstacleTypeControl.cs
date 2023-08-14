using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleTypeControl : MonoBehaviour
{
    
    public Obstacle obstacle;
    
    public float speedAmount;

    public float damageAmount;

    private void Start() {
        
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            ISpeedable speedable = other.GetComponent<ISpeedable>();
            if (speedable != null)
            {
                speedable.SpeedUp(speedAmount);
            }

           
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
            }
        }
            
        }


     
}
