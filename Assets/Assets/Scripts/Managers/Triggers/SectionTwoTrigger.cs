using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SectionTwoTrigger : MonoBehaviour
{

    
    private  void OnTriggerEnter(Collider other) {
        

         if (other.CompareTag("Player")) {
            
            LevelManager.Instance.SetState(LevelManager.GameStates.section2);
            
         }
    }
}
