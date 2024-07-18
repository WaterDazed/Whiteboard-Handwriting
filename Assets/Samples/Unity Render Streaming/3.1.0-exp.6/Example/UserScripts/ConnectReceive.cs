using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.RenderStreaming;
using System;
using UnityEngine.Events;

[Serializable]public class BoardChangeEvent : UnityEvent<BoardData> { };
public class ConnectReceive : DataChannelBase
{
    public BoardChangeEvent boardChangeEvent;
    protected override void OnMessage(byte[] bytes)
    {
        string str = System.Text.Encoding.UTF8.GetString(bytes);

        var boardData = JsonUtility.FromJson<BoardData>(str);
        boardChangeEvent?.Invoke(boardData);
    }
}
