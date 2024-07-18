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
    public string[] questionList = new string[11]
    {
        " ",
        "在白板上写画和操作都非常流畅、舒适与自然",
        "我能感受到我的同伴与我同在，我的同伴也能感受到我与他同在",
        "我能轻易地掌握该白板的使用方法",
        "我感觉有点孤单，我的同伴也觉得有点孤单",
        "这次绘画任务的完成效率非常高",
        "我能轻松地理解我的同伴，我的同伴也能轻松理解我",
        "与同伴的绘画协作过程十分顺利",
        "我一直都关注着我的同伴，我的同伴也一直关注着我",
        "我和我的同伴难以相互理解",
        "我和我的同伴没有一直关注着对方"
    };
    private int questionPos;
    // Start is called before the first frame update
    public void WriteResult(int score)
    {
        File.AppendAllText(path,questionPos.ToString()+":"+score.ToString()+"\n");

        questionPos++;
        if (questionPos > questionList.Length - 1)
        {
            if (taskMenu.taskPos > taskMenu.delayList.Length - 1)
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
        File.AppendAllText(path, "delay:" + taskMenu.delayList[taskMenu.taskPos].ToString() + "\n");
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
