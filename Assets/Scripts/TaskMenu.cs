using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public struct STALL
{
    public int stallStartFrame;
    public int stallFrame;
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
    public int[] delayList = new int[8] { 0, 100, 500, 1000, 1750, 2500, 3500, 4500 };//ms
    const int inherentDelay = 80;

    //stall
    public STALL[] stallList = new STALL[16]
    {
        new STALL {stallStartFrame=0,stallFrame=0 },
        new STALL {stallStartFrame=20,stallFrame=6 },
        new STALL {stallStartFrame=20,stallFrame=18 },
        new STALL {stallStartFrame=20,stallFrame=30 },
        new STALL {stallStartFrame=20,stallFrame=45 },
        new STALL {stallStartFrame=20,stallFrame=60 },
        new STALL {stallStartFrame=20,stallFrame=90 },
        new STALL {stallStartFrame=20,stallFrame=120 },
        new STALL {stallStartFrame=10,stallFrame=6 },
        new STALL {stallStartFrame=10,stallFrame=30 },
        new STALL {stallStartFrame=10,stallFrame=60 },
        new STALL {stallStartFrame=10,stallFrame=120 },
        new STALL {stallStartFrame=5,stallFrame=6 },
        new STALL {stallStartFrame=5,stallFrame=18 },
        new STALL {stallStartFrame=5,stallFrame=45 },
        new STALL {stallStartFrame=5,stallFrame=90 },
    };

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
        //重置按钮和进度文字
        buttonText.text = "完成";
        procedureText.text = "实验进度:" + taskPos.ToString() + "/" + (delayList.Length - 1).ToString();
        //应用时延或卡顿
        connectReceiveHandle.localDelayTime = delayList[taskPos] - inherentDelay;
        //开始计时
        timer.TimerStart();
        //展示图画示例
        int index1 = taskPos % 5, index2 = (taskPos + 1) % 5;
        objectPic1 = transform.GetChild(2).GetChild(index1).gameObject;
        objectPic2 = transform.GetChild(2).GetChild(index2).gameObject;
        objectPic1.SetActive(true);
        objectPic2.SetActive(true);
    }
    private void OnDisable()
    {
        //重置完成flag
        selfComplete = remoteComplete = false;
        //计时停止
        timer.TimerEnd();
        //隐藏图画示例
        objectPic1.SetActive(false);
        objectPic2.SetActive(false);

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
            buttonText.text = "请等待...";
    }

}
