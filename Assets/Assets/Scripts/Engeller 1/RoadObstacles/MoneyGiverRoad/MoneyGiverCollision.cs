using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoneyGiverCollision : MonoBehaviour
{
    private MoneyGiverRoad moneyGiverScript;
    public float deltaAmount;
    
    private void Start() {
        moneyGiverScript = transform.parent.GetComponent<MoneyGiverRoad>();
    }



    private void OnTriggerStay(Collider other) {
        if (other.tag == "Player")
        {
            moneyGiverScript.moneyAmount += Mathf.CeilToInt(Time.deltaTime*deltaAmount);
            Debug.Log(moneyGiverScript.moneyAmount);
        }
    }
}
