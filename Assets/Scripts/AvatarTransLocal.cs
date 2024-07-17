using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using Oculus.Avatar2;
using StreamLOD = Oculus.Avatar2.OvrAvatarEntity.StreamLOD;
using System;
using Unity.Collections;
using UnityEngine.UI;
using TMPro;

//using Unity.WebRTC;

public class AvatarTransLocal : MonoBehaviour
{
    // Const & Static Variables

    // Serialized Variables
    [SerializeField]
    private OvrAvatarEntity _localAvatar = null;

    public GameObject objectAvatarRenderStreaming;


    // Private Variables
    private readonly List<PacketData> _packetPool = new List<PacketData>(32);
    private AvatarChannelOne avatarRenderSend;
    private PacketData GetPacketForEntityAtLOD(OvrAvatarEntity entity, StreamLOD lod)
    {
        PacketData packet;
        int poolCount = _packetPool.Count;
        if (poolCount > 0)
        {
            var lastIdx = poolCount - 1;
            packet = _packetPool[lastIdx];
            _packetPool.RemoveAt(lastIdx);
        }
        else
            packet = new PacketData();

        packet.lod = lod;
        return packet.Retain();
    }
    private void ReturnPacket(PacketData packet)
    {
        Debug.Assert(packet.Unretained);
        _packetPool.Add(packet);
    }

   
    protected void Awake()
    {
        AvatarLODManager.Instance.firstPersonAvatarLod = _localAvatar.AvatarLOD;
        AvatarLODManager.Instance.enableDynamicStreaming = true;
        avatarRenderSend = objectAvatarRenderStreaming.GetComponent<AvatarChannelOne>();
    }

    private void Update()
    {
        if (!avatarRenderSend.IsConnected)
            return;
        SendPacket(StreamLOD.Medium);
    }

    private void SendPacket(StreamLOD lod)
    {
        var packet = GetPacketForEntityAtLOD(_localAvatar, lod);

        packet.dataByteCount = _localAvatar.RecordStreamData_AutoBuffer(lod, ref packet.data);
        Debug.Assert(packet.dataByteCount > 0);

        AvatarData avatarData = new AvatarData(NativeArrayExtension.ToRawBytes(packet.data), packet.dataByteCount, 0);
        avatarRenderSend.SendAvatarData(avatarData);

        if (packet.Release())
            ReturnPacket(packet);
    }
}
