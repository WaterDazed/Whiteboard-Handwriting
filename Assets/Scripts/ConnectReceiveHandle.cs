using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
public class ConnectReceiveHandle : MonoBehaviour
{
    public GameObject objectRenderStreaming, objectWhiteboard;
    private Whiteboard whiteboard;
    Queue<BoardData> boardDataBuffer = new Queue<BoardData>();
    private long bufferOutTime;
    private const long bufferDeltaTime = 16;//ms

    public long localDelayTime = 0;
    public int lagStartFrame = 0, lagFrame = 0;
    private int lagStartCount = 0, lagCount = 0;

    public void LoaclDelayTimeSet(int localDelayTime)
    {
        this.localDelayTime = localDelayTime;
    }
    public void LocalLagStartFrameSet(int lagStartFrame)
    {
        this.lagStartFrame = lagStartFrame;
    }
    public void LocalLagFrameSet(int lagFrame)
    {
        this.lagFrame = lagFrame;
    }
    // Start is called before the first frame update
    void Start()
    {
        var connectReceive = objectRenderStreaming.GetComponent<ConnectReceive>();
        connectReceive.boardChangeEvent.AddListener(ReceiveData);
        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
        long timeNow = GetCurrentTime.Get();
        bufferOutTime = timeNow;
    }

    // Update is called once per frame
    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        if (timeNow - bufferOutTime < bufferDeltaTime)
            return;
        bufferOutTime = timeNow;
        if (boardDataBuffer.Count > 0)
        {
            var boardData = boardDataBuffer.Peek();
            if (timeNow - boardData.time >= localDelayTime)
            {
                if (lagStartFrame == 0|| lagFrame ==0 || lagStartCount < lagStartFrame)
                {
                    whiteboard.ReceiveDraw(boardData.type, boardData.x, boardData.y, boardData.color, boardData.drawSize);
                    boardDataBuffer.Dequeue();
                    lagStartCount++;
                }
                else if(lagCount<lagFrame)
                {
                    lagCount++;
                }
                else
                {
                    lagStartCount = 0;
                    lagCount = 0;
                }
            }
        }
    }

    public void ReceiveData(BoardData boardData)
    {
        long timeNow = GetCurrentTime.Get();
        if (boardData.type == -1)
            whiteboard.BoardClear();
        else
        {
            boardData.time = timeNow;
            boardDataBuffer.Enqueue(boardData);
        }
        //Debug.Log(boardData.type + "%" + boardData.x + "%" + boardData.y + "%" + boardData.color + "%" + boardData.time);
    }

}
