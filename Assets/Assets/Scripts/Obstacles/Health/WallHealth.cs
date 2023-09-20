using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallHealth : MonoBehaviour, IDamagable
{
    [SerializeField] public float health;
    public GameObject explosion;

    public void Hit(float damageAmount) {   

        health -= damageAmount;
        
        if (health<=0)
        {   
            Instantiate(explosion, transform.position, Quaternion.identity);
            gameObject.SetActive(false);

        } 

    }

    public void Damage (float damageAmount) {
            Hit(damageAmount);
    }

}
