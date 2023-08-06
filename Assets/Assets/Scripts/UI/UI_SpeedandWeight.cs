using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UI_SpeedandWeight : MonoBehaviour
{
    public TMP_Text speedText;
    public TMP_Text weightText;
    public TMP_Text moneyText;

    private GameObject player;
    private GameObject economyManager;

    private void Start() {
        
        player = GameObject.FindGameObjectWithTag("Player");
        economyManager = GameObject.FindGameObjectWithTag("EconomyManager");

        speedText = transform.Find("SpeedandWeight/Speedvalue").GetComponent<TMP_Text>();
        weightText = transform.Find("SpeedandWeight/Weightvalue").GetComponent<TMP_Text>();
        moneyText = transform.Find("SpeedandWeight/Moneyvalue").GetComponent<TMP_Text>();

        SetValues();
    }

    private void LateUpdate() {
        SetValues();
    }

    public void SetValues() {
        
        speedText.text = player.GetComponent<C_Movement>().speed.ToString();
        weightText.text = player.GetComponent<C_Movement>().weight.ToString();
        moneyText.text = economyManager.GetComponent<EconomyManager>().GetMoney().ToString();
    }
}
