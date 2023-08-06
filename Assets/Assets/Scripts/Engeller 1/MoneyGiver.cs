using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyGiver : MonoBehaviour
{
     public int moneyAmount;

    public float damageAmount;

    public GameObject gameManager;

    private void Start() {
        gameManager = GameObject.FindGameObjectWithTag("EconomyManager");
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 

            if (gameManager != null)
            {
                gameManager.GetComponent<EconomyManager>().SetMoney(moneyAmount);
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
