using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C_Health : MonoBehaviour, IDamagable, ICurable
{
    [SerializeField] public float health;
    [SerializeField] public float damage;


    // WHAT HAPPENS IF TAKES HIT
    public void Hit(float damageAmount) {   

        health -= damageAmount;

        if (health<=0)
        {            
            gameObject.SetActive(false);
        } 

    }

    // WHAT HAPPENS IF GETS CURED
    public void GetCured( float healthAmount) {
        health += healthAmount;
        Debug.Log(health);
    }


    #region INTERFACE
        
    public void Cure(float healthAmountfromCurer) {
        GetCured(healthAmountfromCurer);
    }

    public void Damage (float damageAmount) {
        Hit(damageAmount);
    }

    #endregion


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
    }
}
