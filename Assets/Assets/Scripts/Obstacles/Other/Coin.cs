using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    [SerializeField] float rotationRate;

    public int moneyAmount = 1;

    private void Update() {
        gameObject.transform.Rotate(Vector3.up, rotationRate*Time.deltaTime);
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 

            SessionEconomy.Instance.EarnSessionMoney(moneyAmount);
            Destroy(gameObject);
           
        }
            
        } 
}
