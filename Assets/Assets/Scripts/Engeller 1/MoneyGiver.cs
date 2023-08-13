using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyGiver : MonoBehaviour
{
     public int moneyAmount;

    public float damageAmount;

    public GameObject economyManager;

    private void Start() {
        economyManager = GameObject.FindGameObjectWithTag("EconomyManager");
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 

            if (economyManager != null)
            {
                economyManager.GetComponent<EconomyManager>().EarnMoney(moneyAmount);
            } 
           
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
                //Debug.Log("ASDFASDFA");
            }
        }
            
        } 
    
}
