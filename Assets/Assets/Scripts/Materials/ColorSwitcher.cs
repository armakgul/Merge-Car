using System.Collections;
using UnityEngine;

public class ColorSwitcher : MonoBehaviour
{
     public Material material;
    public Color startColor;
    public Color endColor;
    public float time;

    private float startTime;
    private float progress;

    void Start()
    {
        startTime = Time.time;
        progress = 0f;
    }

    void Update()
    {
        // Calculate the progress of the color change.
        progress = (Time.time - startTime) / time;

        // Ping-pong the progress to make it loop.
        progress = Mathf.PingPong(progress, 1f);

        // Set the material color using Lerp.
        material.color = Color.Lerp(startColor, endColor, progress);
    }
}
