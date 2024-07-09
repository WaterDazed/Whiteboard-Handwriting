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
        //重置按钮和进度文字
        buttonText.text = "完成";
        procedureText.text = "实验进度：" + taskPos.ToString() + "/" + (delayQueue.Length - 1).ToString();
        //应用时延或卡顿
        connectReceiveHandle.localDelayTime = delayQueue[taskPos] - 80;
        //开始计时
        timer.TimerStart();
        //展示图画示例
        int index = taskPos % 4;
        objectPic = transform.GetChild(2).GetChild(index).gameObject;
        objectPic.SetActive(true); 
    }
    private void OnDisable()
    {
        //重置完成flag
        selfComplete = remoteComplete = false;
        //计时停止
        timer.TimerEnd();
        //隐藏图画示例
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
            buttonText.text = "请等待...";
    }

}
