using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TiresMovement : MonoBehaviour
{

    public Transform frontLeftTire;
    public Transform frontRightTire;
    public Transform rearLeftTire;
    public Transform rearRightTire;
    public float rotationSpeed = 10f;
    public float dragSensitivity = 1.5f;

    private Vector2 startPos;
    private Vector2 endPos;
    private float rotationDirection;

    private void Update()
    {
        HandleTireRotation();
    }

    private void HandleTireRotation()
    {
        if (Input.GetMouseButtonDown(0))
        {
            startPos = Input.mousePosition;
        }
        else if (Input.GetMouseButton(0))
        {
            endPos = Input.mousePosition;
            rotationDirection = (endPos.x - startPos.x) * dragSensitivity;
            startPos = endPos;
        }
        else
        {
            rotationDirection = Mathf.Lerp(rotationDirection, 0f, Time.deltaTime);
        }

        RotateTires(rotationDirection);
    }

    private void RotateTires(float direction)
    {
        Quaternion rotation = Quaternion.Euler(0f, direction * rotationSpeed * Time.deltaTime, 0f);

        frontLeftTire.localRotation *= rotation;
        frontRightTire.localRotation *= rotation;
        rearLeftTire.localRotation *= rotation;
        rearRightTire.localRotation *= rotation;
    }
    
}
