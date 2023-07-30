using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EconomyManager : MonoBehaviour
{
    private float money = 100;

    // float moneyIncrement = 0;

    public float GetMoney() {
        return money;
    }

    public void SetMoney (float moneyIncrement) {
        money += moneyIncrement;
    }
}
