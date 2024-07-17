using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.RenderStreaming;
using Oculus.Avatar2;
using UnityEngine.Events;
using Newtonsoft.Json;
using System;


public class AvatarChannelOne : DataChannelBase
{

    public void SendAvatarData(AvatarData avatarData)
    {
        Send(JsonUtility.ToJson(avatarData));
    }
}

