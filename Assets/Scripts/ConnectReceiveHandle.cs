using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
public class ConnectReceiveHandle : MonoBehaviour
{
    public GameObject objectWhiteboard, objectReadyMenu, objectTaskMenu, objectDebug;
    private Whiteboard whiteboard;
    private ReadyMenu readyMenu;
    private TaskMenu taskMenu;
    private AvatarTransRemote avatarTransRemote;

    public Queue<BoardData> boardDataBuffer = new Queue<BoardData>();

    public long localDelayTime = 100 - 80;
    private long preFrameTime;
    private const int MAX_BOARD_DELTA_TIME = 100;
    public int stallIntervalTime = 0, stallTime = 0;
    public int stallIntervalTimeCount = 0, stallTimeCount = 0;



    void Awake()
    {
        var connectReceive = gameObject.GetComponent<ConnectReceive>();
        connectReceive.boardChangeEvent.AddListener(ReceiveData);

        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
        readyMenu = objectReadyMenu.GetComponent<ReadyMenu>();
        taskMenu = objectTaskMenu.GetComponent<TaskMenu>();
        avatarTransRemote = objectWhiteboard.GetComponent<AvatarTransRemote>();

    }

    private void Start()
    {
        preFrameTime = GetCurrentTime.Get();
    }
    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        int frameDeltaTime = (int)(timeNow - preFrameTime);
        preFrameTime = timeNow;

        while (boardDataBuffer.Count > 0 && boardDataBuffer.Peek().type == 4 && timeNow - boardDataBuffer.Peek().time > MAX_BOARD_DELTA_TIME)
            boardDataBuffer.Dequeue();

        if (boardDataBuffer.Count > 0)
        {
            var boardData = boardDataBuffer.Peek();
            if (timeNow - boardData.time >= localDelayTime)
            {
                if (boardData.type == 4)
                {
                    avatarTransRemote.ApplyAvatarData(boardData);
                    objectDebug.GetComponent<TextMeshProUGUI>().text = (timeNow - boardData.time).ToString();
                    boardDataBuffer.Dequeue();
                }
                else
                {
                    if (stallIntervalTime == 0 || stallTime == 0 || stallIntervalTimeCount < stallIntervalTime)
                    {
                        whiteboard.ReceiveDraw(boardData);
                        avatarTransRemote.ApplyAvatarData(boardData);
                        boardDataBuffer.Dequeue();
                        if (stallIntervalTimeCount < stallIntervalTime)
                            stallIntervalTimeCount += frameDeltaTime;
                    }
                    else if (stallTimeCount < stallTime)
                        stallTimeCount += frameDeltaTime;
                    else
                    {
                        stallIntervalTimeCount = 0;
                        stallTimeCount = 0;
                    }
                }
            }
        }

    }

    public void ReceiveData(BoardData boardData)
    {
        if (boardData.type == -1)
            whiteboard.BoardClear();
        else if (boardData.type == 0 || boardData.type == 1 || boardData.type == 4)
        {
            long timeNow = GetCurrentTime.Get();
            boardData.time = timeNow;
            boardDataBuffer.Enqueue(boardData);
        }
        else if (boardData.type == 2)
            readyMenu.remoteReady = true;
        else if (boardData.type == 3)
            taskMenu.remoteComplete = true;
    }

}
