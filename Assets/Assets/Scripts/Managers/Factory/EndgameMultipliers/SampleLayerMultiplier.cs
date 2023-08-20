using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SampleLayerMultiplier : MonoBehaviour
{

    public float gainMultiplier;
    public TMP_Text multiplierText;

    private void OnTriggerEnter(Collider other) {
        if (other.CompareTag("Player"))
        {
            SessionEconomy.Instance.SetMultiplier(gainMultiplier);
        }
    }

    private void Start() {
        multiplierText = transform.Find("Canvas/multiText").GetComponent<TMP_Text>();
        multiplierText.text = gainMultiplier.ToString();
    }
}
