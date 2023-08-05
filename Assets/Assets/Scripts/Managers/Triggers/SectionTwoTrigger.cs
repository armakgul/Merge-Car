using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class SectionTwoTrigger : MonoBehaviour
{

    public event Action onSectionTwoStarted;
    private  void OnTriggerEnter(Collider other) {
        

         if (other.CompareTag("Player")) {
            

            if (onSectionTwoStarted != null)
            {
                onSectionTwoStarted();
            }
            
           
         }
    }
}
