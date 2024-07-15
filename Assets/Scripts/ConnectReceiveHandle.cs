using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
public class ConnectReceiveHandle : MonoBehaviour
{
    public GameObject objectRenderStreaming, objectWhiteboard, objectReadyMenu, objectTaskMenu;
    private Whiteboard whiteboard;
    private ReadyMenu readyMenu;
    private TaskMenu taskMenu;

    Queue<BoardData> boardDataBuffer = new Queue<BoardData>();
    private long preBufferOutTime;
    private const long bufferDeltaTime = 16;//ms

    public long localDelayTime = 0;
    public int stallStartFrame = 0, stallFrame = 0;
    private int stallStartCount = 0, stallCount = 0;

    // Start is called before the first frame update
    void Start()
    {
        var connectReceive = objectRenderStreaming.GetComponent<ConnectReceive>();
        connectReceive.boardChangeEvent.AddListener(ReceiveData);

        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
        readyMenu = objectReadyMenu.GetComponent<ReadyMenu>();
        taskMenu = objectTaskMenu.GetComponent<TaskMenu>();

        long timeNow = GetCurrentTime.Get();
        preBufferOutTime = timeNow;
    }

    // Update is called once per frame
    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        if (timeNow - preBufferOutTime < bufferDeltaTime)
            return;
        else preBufferOutTime = timeNow;
        if (boardDataBuffer.Count > 0)
        {
            var boardData = boardDataBuffer.Peek();
            if (timeNow - boardData.time >= localDelayTime)
            {
                if (stallStartFrame == 0 || stallFrame == 0 || stallStartCount < stallStartFrame)
                {
                    whiteboard.ReceiveDraw(boardData.type, boardData.x, boardData.y, boardData.color, boardData.drawSize);
                    boardDataBuffer.Dequeue();
                    stallStartCount++;
                }
                else if (stallCount < stallFrame)
                {
                    stallCount++;
                }
                else
                {
                    stallStartCount = 0;
                    stallCount = 0;
                }
            }
        }
    }

    public void ReceiveData(BoardData boardData)
    {
        long timeNow = GetCurrentTime.Get();
        if (boardData.type == -1)
            whiteboard.BoardClear();
        else if (boardData.type == 0 || boardData.type == 1)
        {
            boardData.time = timeNow;
            boardDataBuffer.Enqueue(boardData);
        }
        else if (boardData.type == 2)
        {
            readyMenu.remoteReady = true;
        }
        else if (boardData.type == 3)
        {
            taskMenu.remoteComplete = true;
        }
        //Debug.Log(boardData.type + "%" + boardData.x + "%" + boardData.y + "%" + boardData.color + "%" + boardData.time);
    }

}
