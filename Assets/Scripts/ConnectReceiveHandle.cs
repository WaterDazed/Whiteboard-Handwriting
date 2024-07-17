using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
public class ConnectReceiveHandle : MonoBehaviour
{
    public GameObject objectRenderStreaming, objectWhiteboard, objectReadyMenu, objectTaskMenu, objectAvatarManager;
    private Whiteboard whiteboard;
    private ReadyMenu readyMenu;
    private TaskMenu taskMenu;
    private AvatarTransRemote avatarTransRemote;

    public Queue<BoardData> boardDataBuffer = new Queue<BoardData>();
    public Queue<AvatarData> avatarDataBuffer = new Queue<AvatarData>();

    public long localDelayTime = 0;
    public long preFrameTime;
    public int stallIntervalTime = 0, stallTime = 0;
    public int stallIntervalTimeCount = 0, stallTimeCount = 0;

    void Awake()
    {
        var connectReceive = objectRenderStreaming.GetComponent<ConnectReceive>();
        connectReceive.boardChangeEvent.AddListener(ReceiveData);

        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
        readyMenu = objectReadyMenu.GetComponent<ReadyMenu>();
        taskMenu = objectTaskMenu.GetComponent<TaskMenu>();
        avatarTransRemote = objectAvatarManager.GetComponent<AvatarTransRemote>();

        preFrameTime = GetCurrentTime.Get(); 

    }

    void Update()
    {
        long timeNow = GetCurrentTime.Get();
        int frameDeltaTime = (int)(timeNow - preFrameTime);
        preFrameTime = timeNow;
        if (boardDataBuffer.Count > 0)
        {
            var boardData = boardDataBuffer.Peek();
            if (timeNow - boardData.time >= localDelayTime)
            {
                if (stallIntervalTime == 0 || stallTime == 0 || stallIntervalTimeCount < stallIntervalTime)
                {
                    whiteboard.ReceiveDraw(boardData.type, boardData.x, boardData.y, boardData.color, boardData.drawSize);
                    boardDataBuffer.Dequeue();

                    if (avatarDataBuffer.Count > 0)
                        avatarTransRemote.ApplyAvatarData(avatarDataBuffer.Dequeue());

                    stallIntervalTimeCount += frameDeltaTime;
                }
                else if (stallTimeCount < stallTime)
                {
                    stallTimeCount += frameDeltaTime;
                }
                else
                {
                    stallIntervalTimeCount = 0;
                    stallTimeCount = 0;
                }
            }
        }
        else if (avatarDataBuffer.Count > 0)
            avatarTransRemote.ApplyAvatarData(avatarDataBuffer.Dequeue());
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
            readyMenu.remoteReady = true;
        else if (boardData.type == 3)
            taskMenu.remoteComplete = true;
    }

}
