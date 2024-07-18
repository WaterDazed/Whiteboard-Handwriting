using Newtonsoft.Json.Bson;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ReadyMenu : MonoBehaviour
{
    public GameObject objectTaskMenu, objectWhiteboard, objectButtonText, objectRenderStreaming;
    private TextMeshPro buttonText;
    private Whiteboard whiteboard;
    private ConnectSend connectSend;

    public bool remoteReady = false;
    private bool selfReady = false;

    public void SetSelfReady()
    {
        selfReady = true;
        connectSend.SendData(new BoardData(2, default, default, default, default, default, default, default));
    }

    // Start is called before the first frame update
    private void Awake()
    {
        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
        buttonText = objectButtonText.GetComponent<TextMeshPro>();
        connectSend = objectRenderStreaming.GetComponent<ConnectSend>();
    }
    private void OnEnable()
    {
        //���ð�ť����
        buttonText.text = "����";
        //��ջ���
        whiteboard.BoardClear();
    }
    // Update is called once per frame
    void Update()
    {
        if(selfReady&&remoteReady)
        {
            objectTaskMenu.SetActive(true);
            gameObject.SetActive(false);
        }
        else if(selfReady)
            buttonText.text = "��ȴ�...";
    }
    private void OnDisable()
    {
        //���þ���flag
        selfReady = remoteReady = false;
    }
}
