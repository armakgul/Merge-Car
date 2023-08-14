using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShieldGiver : MonoBehaviour
{
    public float shieldAmountRange;
    private float shieldAmount;
    private float shieldAmountCorrected;

    [Header ("Material")]
    private Material shieldMaterial;
    public Color colorForPos;
    public Color colorForNeg;

    private void Start() {
        GetShieldAmount();
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            IShieldable shieldable = other.GetComponent<IShieldable>();
            if (shieldable != null)
            {
                shieldable.Shield(shieldAmountCorrected);
            }
            
        } 
    }

    public float GetShieldAmount() {
        
        shieldMaterial = gameObject.GetComponent<Renderer>().material;

        shieldAmount = Random.Range(-shieldAmountRange*-10, shieldAmountRange*2f);

        shieldAmountCorrected = Mathf.Ceil(shieldAmount);
        
        if (shieldAmountCorrected == 0)
        {
            shieldAmountCorrected = 1;
        }

        if (shieldAmountCorrected < 0)
        {
            shieldMaterial.color = colorForNeg;
        }
        else shieldMaterial.color = colorForPos;


        return shieldAmountCorrected;
    }
}
