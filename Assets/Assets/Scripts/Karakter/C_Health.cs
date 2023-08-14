using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class C_Health : MonoBehaviour, IDamagable, ICurable, IShieldable
{
    [Header ("CONSTRUCTORS")]
    
    public Car car;
    float health;
    float shield;

    [Header ("TEXTS")]
    public TMP_Text healthText;
    public TMP_Text shieldText;

    [Header ("SCRIPTS")]
    public LevelManager levelManager;
    


    //public event Action onHealthIsZero;

    private void Start() {

        health = car.health;
        shield = car.shield;
        
        healthText = GameObject.Find("Health").GetComponent<TMP_Text>();
        healthText.text = health.ToString();

        shieldText = GameObject.Find("Shield").GetComponent<TMP_Text>();
        shieldText.text = shield.ToString();

    }


    // WHAT HAPPENS IF TAKES HIT
    public void Hit(float damageAmount) {   
        
        if ((shield - damageAmount) > 0)
        {
            shield -= damageAmount;
            UpdateUI();
            
        } else 
        {
            float restDamage = MathF.Abs(shield - damageAmount);
            shield = 0;
            health -= restDamage;
            UpdateUI();
        }
        
        
        // DEATH SECTION
        if (health<=0)
        {            
            levelManager.SetState(LevelManager.GameStates.section3);
            health = 0;
            UpdateUI();
        } 

    }

    // WHAT HAPPENS IF GETS CURED
    public void GetCured( float healthAmount) {
        if ((shield + healthAmount) > 0)
        {
            shield += healthAmount;
            UpdateUI();
            
        } else 
        {
            float restDamage = MathF.Abs(shield + healthAmount);
            shield = 0;
            health -= restDamage;
            UpdateUI();
        }
    }

    public void GetShield (float shieldAmount) {
        
        if ((shield + shieldAmount) > 0)
        {
            shield += shieldAmount;
            UpdateUI();
            
        } else 
        {
            float restDamage = MathF.Abs(shield + shieldAmount);
            shield = 0;
            health -= restDamage;
            UpdateUI();
        }
    }

    public void HealthUpgrade(int amount) {
        health += amount;
        UpdateUI();
    }

    public void ShieldUpgrade(int amount) {
        shield += amount;
        UpdateUI();
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
    
    public void UpdateUI() {
        healthText.text = health.ToString();
        shieldText.text = shield.ToString();
    }

}
