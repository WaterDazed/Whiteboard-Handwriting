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
        "�ڰװ���д���Ͳ������ǳ���������������Ȼ",
        "��λ滭��������Ч�ʷǳ���",
        "�Һ��ҵ�ͬ���ܻ�����ܵ��Է��Ĵ���",
        "�Һ��ҵ�ͬ�������Է���������",
        "�������׵����ոðװ��ʹ�÷���",
        "�������滭�����У��Һ��ҵ�ͬ�鶼û�еõ��Է���ȫ����ע",
        "�Һ��ҵ�ͬ�黥�඼���ܲ����Է��Ĵ���",
        "��ͬ��Ļ滭Э������ʮ��˳��",
        "�Һ��ҵ�ͬ�������ɵ��໥���",
        "�������滭�����У��Һ��ҵ�ͬ�鶼�����ע�ŶԷ�"
    };
    private int questionPos;
    // Start is called before the first frame update
    public void WriteResult(int score)
    {
        File.AppendAllText(path,questionPos.ToString()+":"+score.ToString()+"\n");

        questionPos++;
        if (questionPos > questionQueue.Length - 1)
        {
            //�鿴ʱ�ӻ򿨶��������
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
        //ʱ�ӻ򿨶ٵ÷�д��
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
