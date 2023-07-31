using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EconomyManager : MonoBehaviour
{
    private float money = 100;

    // float moneyIncrement = 0;

    #region Singleton
    public static EconomyManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    #endregion


    public float GetMoney() {
        return money;
    }

    public void SetMoney (float moneyIncrement) {
        money += moneyIncrement;
    }
}
