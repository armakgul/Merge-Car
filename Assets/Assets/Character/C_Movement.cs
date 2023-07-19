using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class C_Movement : MonoBehaviour
{
    // bu script sadece karaktere sabit hız hareket verecek
    // physic olmayacak

    [SerializeField] public Camera orthoCamera;
    [SerializeField] public float cameraCorrectionMultiplier;
    public GameObject player;
    public Vector3 p_position;
    public float p_ForwardSpeed = 1;



    public void Start() {
        player = GameObject.FindGameObjectWithTag("Player");
        p_position = player.transform.position;
    }

    public void Update() {
        
        MousePosition();
        Debug.Log(MousePosition());
        MoveCharacter( MousePosition(), p_position, p_ForwardSpeed);
        
    }


    public float MousePosition() {
        /*
        Ray ray = orthoCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out RaycastHit raycastHit))
        {
            transform.position = raycastHit.point;
        }
        */

        if (Input.touchCount > 0)
        {
            return orthoCamera.ScreenToWorldPoint(Input.mousePosition).x; 
        } else return 0;

        
        

    }

    public void MoveCharacter(float xPos, Vector3 position, float speed) {

        player.transform.position = new Vector3(xPos/cameraCorrectionMultiplier, 0.51f , position.z + Time.deltaTime * speed);

    }
}
