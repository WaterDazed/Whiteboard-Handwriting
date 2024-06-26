using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class ConnectReceiveHandle : MonoBehaviour
{
    public GameObject objectRenderStreaming, objectWhiteboard;
    private Whiteboard whiteboard;
    Queue<BoardData> boardDataBuffer = new Queue<BoardData>();

    public long localDelayTime = 0;

    public void LoaclDelayTimeSet(int time)
    {
        localDelayTime = time;
    }
    // Start is called before the first frame update
    void Start()
    {
        var connectReceive = objectRenderStreaming.GetComponent<ConnectReceive>();
        connectReceive.boardChangeEvent.AddListener(ReceiveData);

        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
    }

    // Update is called once per frame
    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        if (boardDataBuffer.Count > 0)
        {
            var boardData = boardDataBuffer.Peek();
            if (timeNow - boardData.time >= localDelayTime)
            {
                whiteboard.ReceiveDraw(boardData.type, boardData.x, boardData.y, boardData.color, boardData.drawSize);
                boardDataBuffer.Dequeue();
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
