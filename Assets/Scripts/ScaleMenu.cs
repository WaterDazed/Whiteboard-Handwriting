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
        "�ڰװ���д���Ͳ������ǳ���������������Ȼ",
        "���ܸ��ܵ��Է����Լ�ͬ��",
        "�������׵����ոðװ��ʹ�÷���",
        "�Ҹо��е�µ�",
        "��λ滭��������Ч�ʷǳ���",
        "�������ɵ�����ҵ�ͬ��",
        "��ͬ��Ļ滭Э������ʮ��˳��",
        "�������滭�����У��Ҷ���ע���ҵ�ͬ��",
        "��������ҵ�ͬ����������",
        "�������滭�����У��Ҹо��ҵ�ͬ��û��ʱ�̹�ע����"
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
