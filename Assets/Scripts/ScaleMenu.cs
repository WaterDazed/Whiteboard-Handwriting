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
        "ÔÚ°×°åÉÏÐ´»­ºÍ²Ù×÷¶¼·Ç³£Á÷³©¡¢ÊæÊÊÓë×ÔÈ»",
        "Õâ´Î»æ»­ÈÎÎñµÄÍê³ÉÐ§ÂÊ·Ç³£¸ß",
        "ÎÒºÍÎÒµÄÍ¬°éÄÜ»¥Ïà¸ÐÊÜµ½¶Ô·½µÄ´æÔÚ",
        "ÎÒºÍÎÒµÄÍ¬°éÔÚÀí½â¶Ô·½ÉÏÓÐÀ§ÄÑ",
        "ÎÒÄÜÇáÒ×µØÕÆÎÕ¸Ã°×°åµÄÊ¹ÓÃ·½·¨",
        "ÔÚÕû¸ö»æ»­¹ý³ÌÖÐ£¬ÎÒºÍÎÒµÄÍ¬°é¶¼Ã»ÓÐµÃµ½¶Ô·½µÄÈ«²¿¹Ø×¢",
        "ÎÒºÍÎÒµÄÍ¬°é»¥Ïà¶¼¸ÐÊÜ²»µ½¶Ô·½µÄ´æÔÚ",
        "ÓëÍ¬°éµÄ»æ»­Ð­×÷¹ý³ÌÊ®·ÖË³Àû",
        "ÎÒºÍÎÒµÄÍ¬°éÄÜÇáËÉµØÏà»¥Àí½â",
        "ÔÚÕû¸ö»æ»­¹ý³ÌÖÐ£¬ÎÒºÍÎÒµÄÍ¬°é¶¼»¥Ïà¹Ø×¢×Å¶Ô·½"
    };
    private int questionPos;
    // Start is called before the first frame update
    public void WriteResult(int score)
    {
        File.AppendAllText(path,questionPos.ToString()+":"+score.ToString()+"\n");

        questionPos++;
        if (questionPos > questionQueue.Length - 1)
        {
            //²é¿´Ê±ÑÓ»ò¿¨¶ÙÈÎÎñ½ø¶È
            if (taskMenu.taskPos > taskMenu.delayList.Length - 1)
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
        //Ê±ÑÓ»ò¿¨¶ÙµÃ·ÖÐ´Èë
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
