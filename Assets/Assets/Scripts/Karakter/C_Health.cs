using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class C_Health : MonoBehaviour, IDamagable, ICurable, IShieldable
{
    [Header ("CONSTRUCTORS")]
    [SerializeField] public float health;
 
    [SerializeField] public float shield;

    [Header ("TEXTS")]
    public TMP_Text healthText;
    public TMP_Text shieldText;

    [Header ("SCRIPTS")]
    public LevelManager levelManager;


    public event Action onHealthIsZero;

    private void Start() {
        
        healthText = GameObject.Find("Health").GetComponent<TMP_Text>();
        healthText.text = health.ToString();

        shieldText = GameObject.Find("Shield").GetComponent<TMP_Text>();
        shieldText.text = shield.ToString();

    }


    // WHAT HAPPENS IF TAKES HIT
    public void Hit(float damageAmount) {   

        if (shield > 0)
        {
            shield -= damageAmount;
            healthText.text = health.ToString();
            shieldText.text = shield.ToString();
            
        } else  
        {
            shield = 0;
            health -= damageAmount;
            healthText.text = health.ToString();
            shieldText.text = shield.ToString();
        }
        
        
        // DEATH SECTION
        if (health<=0)
        {            
            //levelManager.Level3Starts();

                if (onHealthIsZero != null)
                {
                    onHealthIsZero();
                }

            health = 0;
 
        } 

    }

    // WHAT HAPPENS IF GETS CURED
    public void GetCured( float healthAmount) {
        health += healthAmount;
        healthText.text = health.ToString();
    }

    public void GetShield (float shieldAmount) {
        shield += shieldAmount;
        shieldText.text = shield.ToString();
    }

    #region INTERFACE
        
    public void Cure(float healthAmountfromCurer) {
        GetCured(healthAmountfromCurer);
    }

    public void Damage (float damageAmount) {
        Hit(damageAmount);
    }

    public void Shield(float shield) {
        GetShield(shield);
    }

    #endregion

}
