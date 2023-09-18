using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyGiver : MonoBehaviour
{
     public int moneyAmount;

    public float damageAmount;


    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 

            SessionEconomy.Instance.EarnSessionMoney(moneyAmount);
           
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damageAmount);
                //Debug.Log("ASDFASDFA");
            }
        }
            
        } 
    
}
