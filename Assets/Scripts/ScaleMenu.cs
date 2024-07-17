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
    public string[] questionQueue = new string[11]
    {
        " ",
        "在白板上写画和操作都非常流畅、舒适与自然",
        "这次绘画任务的完成效率非常高",
        "我和我的同伴能互相感受到对方的存在",
        "我和我的同伴在理解对方上有困难",
        "我能轻易地掌握该白板的使用方法",
        "在整个绘画过程中，我和我的同伴都没有得到对方的全部关注",
        "我和我的同伴互相都感受不到对方的存在",
        "与同伴的绘画协作过程十分顺利",
        "我和我的同伴能轻松地相互理解",
        "在整个绘画过程中，我和我的同伴都互相关注着对方"
    };
    private int questionPos;
    // Start is called before the first frame update
    public void WriteResult(int score)
    {
        File.AppendAllText(path,questionPos.ToString()+":"+score.ToString()+"\n");

        questionPos++;
        if (questionPos > questionQueue.Length - 1)
        {
            //查看时延或卡顿任务进度
            if (taskMenu.taskPos > taskMenu.stallList.Length - 1)
                objectGoodbyeMenu.SetActive(true);
            else
                objectReadyMenu.SetActive(true);
            gameObject.SetActive(false);
        }
        else
            questionText.text = questionQueue[questionPos];
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
        questionText.text = questionQueue[questionPos];
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
