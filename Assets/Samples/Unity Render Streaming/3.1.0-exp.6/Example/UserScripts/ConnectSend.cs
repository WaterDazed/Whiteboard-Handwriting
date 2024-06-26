using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.RenderStreaming;
using System;
using UnityEngine.Events;




public class ConnectSend : DataChannelBase
{
    public void SendData(BoardData boardData)
    {
        Send(JsonUtility.ToJson(boardData));
    }

}




