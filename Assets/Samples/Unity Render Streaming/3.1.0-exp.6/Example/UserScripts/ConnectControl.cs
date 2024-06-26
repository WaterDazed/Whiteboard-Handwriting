using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Unity.RenderStreaming.Samples;
using Unity.RenderStreaming;


public class ConnectControl: MonoBehaviour
{
#pragma warning disable 0649
    public string connectID;
    public bool connectFlag = false;
    [SerializeField] private SignalingManager objectSignalingManager;
    //[SerializeField] private Dropdown microphoneSelectDropdown;
    //[SerializeField] private AudioStreamSender microphoneStreamer;
    //[SerializeField] private AudioStreamReceiver receiveAudioViewer;
    //[SerializeField] private AudioSource receiveAudioSource;
    //[SerializeField] private RawImage remoteVideoImage;
    //[SerializeField] private VideoStreamSender videoStreamSender;
    //[SerializeField] private VideoStreamReceiver videoStreamReceiver;
    [SerializeField] private SingleConnection objectSingleConnection;

#pragma warning restore 0649

    private Unity.RenderStreaming.Samples.RenderStreamingSettings settings;


    void Awake()
    {
        //videoStreamReceiver.enabled = true;
        //videoStreamSender.enabled = true;
        settings = SampleManager.Instance.Settings;
        //videoStreamSender.sourceTexture = remoteVideoImage.texture;
        //videoStreamReceiver.OnUpdateReceiveTexture += texture => remoteVideoImage.texture = texture;
        //microphoneSelectDropdown.onValueChanged.AddListener(index => microphoneStreamer.sourceDeviceIndex = index);
        //microphoneSelectDropdown.options =
        //    Microphone.devices.Select(x => new Dropdown.OptionData(x)).ToList();
        //receiveAudioViewer.targetAudioSource = receiveAudioSource;
        //receiveAudioViewer.OnUpdateReceiveAudioSource += source =>
        //{
        //    source.loop = true;
        //    source.Play();
        //};
    }

    void Start()
    {

        if (objectSignalingManager.runOnAwake)
            return;
        if (settings?.SignalingSettings != null)
            objectSignalingManager.SetSignalingSettings(settings.SignalingSettings);
        objectSignalingManager.Run();
    }


    public void SetUp()
    {
        objectSingleConnection.CreateConnection(connectID);
        connectFlag = true;
    }

    public void HangUp()
    {
        objectSingleConnection.DeleteConnection(connectID);
        connectFlag = false;
    }


}

