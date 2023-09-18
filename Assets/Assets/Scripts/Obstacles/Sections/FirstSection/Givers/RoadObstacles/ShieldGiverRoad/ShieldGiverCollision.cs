using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldGiverCollision : MonoBehaviour
{
    private ShieldGiverRoad shieldGiverScript;
    public float deltaAmount;

    private void Start() {
        shieldGiverScript = transform.parent.GetComponent<ShieldGiverRoad>();
    }



    private void OnTriggerStay(Collider other) {
        if (other.tag == "Player")
        {
            shieldGiverScript.shieldAmount += Time.deltaTime*deltaAmount;
        }
    }
}
