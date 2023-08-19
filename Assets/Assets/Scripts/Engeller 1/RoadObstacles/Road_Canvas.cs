using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Road_Canvas : MonoBehaviour
{

    [Header("CANVAS")]
    [SerializeField] public TMP_Text valueText, description;
    [SerializeField] public Sprite sprite;


    private float value;

    private void Start() {
        
        valueText = transform.Find("Canvas/ValueText").GetComponent<TMP_Text>();
        
        description = transform.Find("Canvas/Description").GetComponent<TMP_Text>();   

        
       
    }

    private void Update() {
        UpdateUI();
    }

    public void UpdateUI () {
        value = GetComponent<SpeedGiverRoad>().speedAmount; 
        valueText.text = value.ToString("F1");
    }

   
}
