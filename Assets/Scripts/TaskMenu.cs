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
        //重置按钮和进度文字
        buttonText.text = "完成";
        procedureText.text = "实验进度:" + taskPos.ToString() + "/" + (stallList.Length - 1).ToString();
        //应用时延或卡顿
        connectReceiveHandle.stallIntervalTime = stallList[taskPos].stallIntervalTime;
        connectReceiveHandle.stallTime = stallList[taskPos].stallTime;
        connectReceiveHandle.stallIntervalTimeCount = connectReceiveHandle.stallTimeCount = 0;
        connectReceiveHandle.boardDataBuffer.Clear();
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
        //重置卡顿
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
            buttonText.text = "请等待...";
    }

}
