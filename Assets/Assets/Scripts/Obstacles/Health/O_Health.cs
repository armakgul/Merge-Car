using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class O_Health : MonoBehaviour, IDamagable
{
    [SerializeField] public float health;

    public void Hit(float damageAmount) {   

        health -= damageAmount;
        
        if (health<=0)
        {            
            gameObject.SetActive(false);
        } 

    }

    public void Damage (float damageAmount) {
            Hit(damageAmount);
    }

    
}
