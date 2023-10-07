using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieHealth : MonoBehaviour, IDamagable
{
    [SerializeField] public float health;
    //public GameObject explosion;
    

    public void Hit(float damageAmount) {   

        health -= damageAmount;
        
        if (health<=0)
        {   
            
            //GameObject currentexpo = Instantiate(explosion, transform.position, Quaternion.identity);
            gameObject.SetActive(false);
            //Destroy(currentexpo, 2f);
        } 

    }

    public void Damage (float damageAmount) {
            Hit(damageAmount);
    }
}
