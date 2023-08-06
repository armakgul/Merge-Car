using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class FreefallDeadTrigger : MonoBehaviour
{

    
    private  void OnTriggerEnter(Collider other) {
        

         if (other.CompareTag("Player")) {
            
            LevelManager.Instance.SetState(LevelManager.GameStates.UI);
            Debug.Log("deaddd");
            
         }
    }
}
