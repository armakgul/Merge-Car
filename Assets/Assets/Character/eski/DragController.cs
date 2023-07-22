using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DragController : MonoBehaviour
{
    private bool _isDragActive = false;
    private Vector2 _screenPosition;
    private Vector3 _worldPosition;
    private Draggable _lastDragged;

     void Awake() {
        DragController[] controllers = FindObjectsOfType<DragController>();
        if (controllers.Length > 1)
        {
            Destroy(gameObject);
        }
    }
     void Update() {
        
        if (_isDragActive && (Input.GetMouseButtonUp(0) || (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Ended )))
        {
            Drop();
            return;
        }
        
        
        
        
        if (Input.GetMouseButton(0))
        {
            Vector3 mousePos = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , Camera.main.nearClipPlane+1));
            _screenPosition = new Vector2 (mousePos.x , mousePos.y);
        } else if (Input.touchCount > 0)
        {
            _screenPosition = Input.GetTouch(0).position;
        } else {
            return;
        }
        _worldPosition = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x , Input.mousePosition.y , Camera.main.nearClipPlane+1));
        //_worldPosition = Camera.main.ScreenToWorldPoint(_screenPosition);

        if (_isDragActive)
        {
            Drag();
        }

    }

    void InitDrag () {
        _isDragActive = true;
    }
    void Drag () {
        
    }
    void Drop () {
        _isDragActive = false;
    }
}
