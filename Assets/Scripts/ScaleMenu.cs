using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using TMPro;

public class ScaleMenu : MonoBehaviour
{
    public GameObject objectTaskMenu, objectGoodbyeMenu ,objectReadyMenu, objectTimer, objectText;
    private TaskMenu taskMenu;
    private TextMeshProUGUI questionText;
    private Timer timer;

    private string fileName, path;
    public string[] questionList = new string[9]
    {
        " ",
        "我与我的同伴交互时的体验非常好",
        "我能感受到我的同伴与我同在，我的同伴也能感受到我与他同在",
        "我感觉有点孤单，我的同伴也觉得有点孤单",
        "这次绘画任务的完成得非常迅速",
        "我能轻松地理解我的同伴，我的同伴也能轻松理解我",
        "我一直都关注着我的同伴，我的同伴也一直关注着我",
        "我和我的同伴难以相互理解",
        "我和我的同伴没有一直相互关注",
    };
    private int questionPos;
    // Start is called before the first frame update
    public void WriteResult(int score)
    {
        File.AppendAllText(path,questionPos.ToString()+":"+score.ToString()+"\n");

        questionPos++;
        if (questionPos > questionList.Length - 1)
        {
            //查看时延或卡顿任务进度
            if (taskMenu.taskPos > taskMenu.stallList.Length - 1)
                objectGoodbyeMenu.SetActive(true);
            else
                objectReadyMenu.SetActive(true);
            gameObject.SetActive(false);
        }
        else
            questionText.text = questionList[questionPos];
    }
    private void Awake()
    {
        fileName = GetCurrentTime.Get().ToString();
        path = Application.persistentDataPath + "/" + fileName + ".txt";

        Debug.Log(questionPos);
        taskMenu = objectTaskMenu.GetComponent<TaskMenu>();
        timer = objectTimer.GetComponent<Timer>();
        questionText = objectText.GetComponent<TextMeshProUGUI>();


    }

    private void OnEnable()
    {
        questionPos = 1;
        questionText.text = questionList[questionPos];
        //时延或卡顿得分写入
        //File.AppendAllText(path, "delay:" + taskMenu.delayList[taskMenu.taskPos].ToString() + "\n");
        File.AppendAllText(path, "stallIntervalTime:" + taskMenu.stallList[taskMenu.taskPos].stallIntervalTime + 
            "stallTime:" + taskMenu.stallList[taskMenu.taskPos].stallTime + 
            "\n");
        File.AppendAllText(path, "time:" + timer.time.ToString("0.0") + "\n");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnDisable()
    {
        
    }
}
