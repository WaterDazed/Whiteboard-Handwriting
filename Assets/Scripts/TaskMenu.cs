using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TaskMenu : MonoBehaviour
{
    public GameObject objectScaleMenu, objectTimer, objectRenderStreaming, objectButtonText, objectProcedureText;
    private GameObject objectPic;
    private TextMeshPro buttonText;
    private TextMeshProUGUI procedureText;
    private ConnectReceiveHandle connectReceiveHandle;
    private ConnectSend connectSend;
    private Timer timer;

    public bool remoteComplete = false;
    private bool selfComplete = false;
    public int[] delayQueue = new int[4];//ms
    //public int[] stallQueueStartFrame = new int[20];
    //public int[] stallQueueFrame = new int[20];
    public int taskPos = 1;
     
    public void SetSelfComplete()
    {
        selfComplete = true;
        connectSend.SendData(new BoardData(3, 0, 0, 0, 0, 0));
    }

    // Start is called before the first frame update
    private void Awake()
    {
        timer = objectTimer.GetComponent<Timer>();
        connectReceiveHandle = objectRenderStreaming.GetComponent<ConnectReceiveHandle>();
        buttonText = objectButtonText.GetComponent<TextMeshPro>();
        connectSend = objectRenderStreaming.GetComponent<ConnectSend>();
        procedureText = objectProcedureText.GetComponent<TextMeshProUGUI>();
    }

    private void OnEnable()
    {
        //���ð�ť�ͽ�������
        buttonText.text = "���";
        procedureText.text = "ʵ����ȣ�" + taskPos.ToString() + "/" + (delayQueue.Length - 1).ToString();
        //Ӧ��ʱ�ӻ򿨶�
        connectReceiveHandle.localDelayTime = delayQueue[taskPos] - 80;
        //��ʼ��ʱ
        timer.TimerStart();
        //չʾͼ��ʾ��
        int index = taskPos % 4;
        objectPic = transform.GetChild(2).GetChild(index).gameObject;
        objectPic.SetActive(true); 
    }
    private void OnDisable()
    {
        //�������flag
        selfComplete = remoteComplete = false;
        //��ʱֹͣ
        timer.TimerEnd();
        //����ͼ��ʾ��
        objectPic.SetActive(false);

        taskPos++;
    }
    // Update is called once per frame
    void Update()
    {
        if (selfComplete && remoteComplete)
        {
            objectScaleMenu.SetActive(true);
            gameObject.SetActive(false);
        }
        else if (selfComplete)
            buttonText.text = "��ȴ�...";
    }

}
