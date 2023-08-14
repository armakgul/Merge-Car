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



        EconomyManager.Instance.OnCurrentMoneyChanged += UpdateCurrentMoneyUI;
        UpdateCurrentMoneyUI(EconomyManager.Instance.CurrentMoney);

        //SetValues();
    }

    private void OnDestroy()
    {
        if (EconomyManager.Instance != null)
        {
            EconomyManager.Instance.OnCurrentMoneyChanged -= UpdateCurrentMoneyUI;
        }
    }

    private void LateUpdate() {
        SetValues();
    }

    public void SetValues() {
        
        speedText.text = player.GetComponent<C_Movement>().GetSpeed.ToString();
        weightText.text = player.GetComponent<C_Movement>().GetWeight.ToString();
       //moneyText.text = economyManager.GetComponent<EconomyManager>().CurrentMoney().ToString();
    }

    private void UpdateCurrentMoneyUI(int newAmount)
    {
        moneyText.text = newAmount.ToString();
    }
}
