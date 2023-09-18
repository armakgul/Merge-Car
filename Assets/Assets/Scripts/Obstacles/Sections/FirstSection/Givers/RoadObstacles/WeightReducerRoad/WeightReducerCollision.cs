using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeightReducerCollision : MonoBehaviour
{
    private WeightReducerRoad weightGiverScript;
    public float deltaAmount;
    private void Start() {
        weightGiverScript = transform.parent.GetComponent<WeightReducerRoad>();
    }



    private void OnTriggerStay(Collider other) {
        if (other.tag == "Player")
        {
            weightGiverScript.weightAmount += Time.deltaTime*deltaAmount;
        }
    }
}
