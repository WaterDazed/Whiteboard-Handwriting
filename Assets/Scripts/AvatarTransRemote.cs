using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using Oculus.Avatar2;
using StreamLOD = Oculus.Avatar2.OvrAvatarEntity.StreamLOD;
using System;
using Unity.Collections;
using UnityEngine.UI;
using System.Threading;
using TMPro;

public class AvatarTransRemote : MonoBehaviour
{

    // Public functions
    // Configure the local and loopback avatars programmatically instead of from serialized fields. Must be called
    // immediately after adding the component


    #region Internal Classes

    

    [System.Serializable]
    public class SimulatedLatencySettings
    {
        [Range(0.0f, 0.5f)]
        public float fakeLatencyMax = 0.25f; //250 ms max latency

        [Range(0.0f, 0.5f)]
        public float fakeLatencyMin = 0.02f; //20ms min latency

        [Range(0.0f, 1.0f)]
        public float latencyWeight = 0.25f; // How much the latest sample impacts the current latency

        [Range(0, 10)]
        public int maxSamples = 4; //How many samples in our window

        internal float averageWindow = 0f;
        internal float latencySum = 0f;
        internal List<float> latencyValues = new List<float>();

        public float NextValue()
        {
            averageWindow = latencySum / (float)latencyValues.Count;
            float randomLatency = UnityEngine.Random.Range(fakeLatencyMin, fakeLatencyMax);
            float fakeLatency = averageWindow * (1f - latencyWeight) + latencyWeight * randomLatency;

            if (latencyValues.Count >= maxSamples)
            {
                latencySum -= latencyValues.First().Value;
                latencyValues.RemoveFirst();
            }

            latencySum += fakeLatency;
            latencyValues.AddLast(fakeLatency);

            return fakeLatency;
        }
    };

    #endregion

    // Serialized Variables
    [SerializeField]
    private OvrAvatarEntity _remoteAvatar = null;



    void Awake()
    {
        AvatarLODManager.Instance.enableDynamicStreaming = true;
    }

    private void Update()
    {


    }

    public void ApplyAvatarData(BoardData datatemp)
    {
        NativeArray<byte> data = NativeArrayExtension.FromRawBytes<byte>(datatemp.customData, Allocator.Temp);
        var dataSlice = data.Slice(0, (int)datatemp.byteCount);
        _remoteAvatar.ApplyStreamData(in dataSlice);
    }
}
