using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public struct STALL
{
    public int stallIntervalTime;
    public int stallTime;
}
public class TaskMenu : MonoBehaviour
{
    public GameObject objectScaleMenu, objectTimer, objectRenderStreaming, objectButtonText, objectProcedureText;
    private GameObject objectPic1, objectPic2;
    private TextMeshPro buttonText;
    private TextMeshProUGUI procedureText;
    private ConnectReceiveHandle connectReceiveHandle;
    private ConnectSend connectSend;
    private Timer timer;

    public bool remoteComplete = false;
    private bool selfComplete = false;

    //delay
    const int inherentDelay = 80;

    //stall
    public STALL[] stallList = new STALL[16]
    {
        new STALL {stallIntervalTime=0,stallTime=0 },
        new STALL {stallIntervalTime=500, stallTime=100},
        new STALL {stallIntervalTime=500, stallTime=300},
        new STALL {stallIntervalTime=500, stallTime=500},
        new STALL {stallIntervalTime=500, stallTime=750},
        new STALL {stallIntervalTime=500, stallTime=1000},
        new STALL {stallIntervalTime=500, stallTime=1500},
        new STALL {stallIntervalTime=500, stallTime=2000},
        new STALL {stallIntervalTime=250, stallTime=100},
        new STALL {stallIntervalTime=250, stallTime=500},
        new STALL {stallIntervalTime=250, stallTime=1000},
        new STALL {stallIntervalTime=250, stallTime=2000},
        new STALL {stallIntervalTime=125, stallTime=100},
        new STALL {stallIntervalTime=125, stallTime=300},
        new STALL {stallIntervalTime=125, stallTime=750},
        new STALL {stallIntervalTime=125, stallTime=1500}

    };

    public int taskPos = 1;

    public void SetSelfComplete()
    {
        selfComplete = true;
        connectSend.SendData(new BoardData(3, default, default, default, default, default, default, default));
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
        procedureText.text = "ʵ�����:" + taskPos.ToString() + "/" + (stallList.Length - 1).ToString();
        //Ӧ��ʱ�ӻ򿨶�
        connectReceiveHandle.stallIntervalTime = stallList[taskPos].stallIntervalTime;
        connectReceiveHandle.stallTime = stallList[taskPos].stallTime;
        connectReceiveHandle.stallIntervalTimeCount = connectReceiveHandle.stallTimeCount = 0;
        connectReceiveHandle.boardDataBuffer.Clear();
        //��ʼ��ʱ
        timer.TimerStart();
        //չʾͼ��ʾ��
        int index1 = taskPos % 5, index2 = (taskPos + 1) % 5;
        objectPic1 = transform.GetChild(2).GetChild(index1).gameObject;
        objectPic2 = transform.GetChild(2).GetChild(index2).gameObject;
        objectPic1.SetActive(true);
        objectPic2.SetActive(true);
    }
    private void OnDisable()
    {
        //�������flag
        selfComplete = remoteComplete = false;
        //��ʱֹͣ
        timer.TimerEnd();
        //����ͼ��ʾ��
        objectPic1.SetActive(false);
        objectPic2.SetActive(false);
        //���ÿ���
        connectReceiveHandle.stallIntervalTime = connectReceiveHandle.stallTime
            = connectReceiveHandle.stallIntervalTimeCount = connectReceiveHandle.stallTimeCount = 0;
        connectReceiveHandle.boardDataBuffer.Clear();

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
