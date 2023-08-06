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


    //public event Action onHealthIsZero;

    private void Start() {
        
        healthText = GameObject.Find("Health").GetComponent<TMP_Text>();
        healthText.text = health.ToString();

        shieldText = GameObject.Find("Shield").GetComponent<TMP_Text>();
        shieldText.text = shield.ToString();

    }


    // WHAT HAPPENS IF TAKES HIT
    public void Hit(float damageAmount) {   
 
        // shield - amount > 0 ise shield dan çıkar başka birşey yapma
        //shield - damage amount 0 veya küçükse shield = 0
            // shield - damage amount tun absolut değerini healtten çıkar
        // health - damage amount 0 dan küçükse level 1 deyse biter
        // level 3 teyse devam et
        
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

            // level managerdan sctionu al
            // bir veya iki ise oyun biter
            // üç ise obslar kapanır ve devam eder
            health = 0;
            UpdateUI();
        } 

    }

    // WHAT HAPPENS IF GETS CURED
    public void GetCured( float healthAmount) {
        health += healthAmount;
        UpdateUI();
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
