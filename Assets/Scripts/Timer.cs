using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Timer : MonoBehaviour
{
    private const long timerDeltaTime = 100;//ms
    private long preTime;
    public float time = 0.0f;
    private bool startFlag = false;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        if (timeNow - preTime < timerDeltaTime)
            return;
        else preTime = timeNow;
        if (startFlag)
            time += 0.1f;//s 
    }
    public void TimerStart()
    {
        startFlag = true;
        time = 0.0f;
    }
    public void TimerEnd()
    {
        startFlag = false;
    }
}
