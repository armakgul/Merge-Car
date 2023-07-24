using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class C_Health : MonoBehaviour, IDamagable, ICurable, IShieldable
{
    [SerializeField] public float health;
    [SerializeField] public float damage;

    [SerializeField] public float shield;

    public TMP_Text healthText;
    public TMP_Text shieldText;

    private void Start() {
        
        healthText = GameObject.Find("Health").GetComponent<TMP_Text>();
        healthText.text = health.ToString();

        shieldText = GameObject.Find("Shield").GetComponent<TMP_Text>();
        shieldText.text = shield.ToString();
    }


    // WHAT HAPPENS IF TAKES HIT
    public void Hit(float damageAmount) {   

        health -= damageAmount;

        if (health<=0)
        {            
            gameObject.SetActive(false);
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


    // TRIGGER
    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Obs")) 
        { 
            
            IDamagable damagable = other.GetComponent<IDamagable>();
            if (damagable != null)
            {
                damagable.Damage(damage);
            }
        } 
    }
}
