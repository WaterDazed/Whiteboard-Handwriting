using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.RenderStreaming;
using Oculus.Avatar2;
using UnityEngine.UI;
using System;
using UnityEngine.Events;
using Newtonsoft.Json;

[Serializable]
public class GetAvatarEvent : UnityEvent<AvatarData> { };
public class AvatarChannelTwo : DataChannelBase
{

    public GetAvatarEvent OnGetAvatar;
    protected override void OnMessage(byte[] bytes)
    {
        string str = System.Text.Encoding.UTF8.GetString(bytes);
        var message = JsonUtility.FromJson<AvatarData>(str);

        OnGetAvatar?.Invoke(message);
    }
}

