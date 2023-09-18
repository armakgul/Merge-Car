using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthGiver : MonoBehaviour
{
    public float cureAmountRange;
    private float cureAmount;
    private float cureAmountCorrected; 

    //public Obstacle obstacle;

    [Header ("Material")]
    private Material healthMaterial;
    public Color colorForPos;
    public Color colorForNeg;

    private void Start() {
        GetCureAmount();
    }

    private  void OnTriggerEnter(Collider other) {
        
        if (other.CompareTag("Player")) 
        { 
            ICurable curable = other.GetComponent<ICurable>();
            if (curable != null)
            {
                curable.Cure(cureAmountCorrected);
            }
            
        } 
    }

    public float GetCureAmount() {

        healthMaterial = gameObject.GetComponent<Renderer>().material;
        
        cureAmount = Random.Range(-cureAmountRange-10, cureAmountRange*2f);
        
        cureAmountCorrected = Mathf.Ceil(cureAmount);

        if (cureAmountCorrected == 0)
        {
            cureAmountCorrected = 1;
        }

        if (cureAmountCorrected < 0)
        {
            healthMaterial.color = colorForNeg;
        }
        else healthMaterial.color = colorForPos;
        
        return cureAmountCorrected;
    }
}
