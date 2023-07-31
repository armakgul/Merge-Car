using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartTapAnim : MonoBehaviour
{
    private Animator animator;

    public C_Movement movementScript;

    void Start() {  

    animator = GetComponent<Animator>();
    
    if (!movementScript.gameStarted)
    {
        animator.speed = 1;
        animator.enabled = true;
    } else {
        animator.speed = 0;
        animator.enabled = false;   
    }
    
    }
}
