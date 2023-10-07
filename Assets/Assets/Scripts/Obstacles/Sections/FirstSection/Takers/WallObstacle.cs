using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class WallObstacle : MonoBehaviour
{
    public float damageAmount;
    private void Start() {
        gameObject.tag = "Obs";
    }

    private void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        {            
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
                gameObject.tag = "wall";
                gameObject.GetComponentInChildren<GameObject>().tag = "wall";
            }
        }
            
        } 
}
