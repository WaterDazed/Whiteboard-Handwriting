using UnityEngine;
using UnityEngine.SceneManagement;

public class WhiteboardPen : MonoBehaviour
{
    public GameObject objectWhiteboard;

    private Whiteboard whiteboard;
    private RaycastHit touch;

    private OVRSkeleton m_skeleton;

    private Transform indexTip;
    private Transform indexDistal;

    private Vector3 indexoriginPoint;
    private Vector3 indextargetPoint;


    public Color penColor = Color.black, drawColor = Color.black;
    public int penSize = 2, drawSize = 2;

    private const int WHITEBOARD_LAYER = 10;

    public void PenColorSet(int color)
    {
        penColor = whiteboard.NumToColor(color);
    }
    void Start()
    {
        m_skeleton = GetComponent<OVRSkeleton>();
        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
    }

    void Update()
    {
        if (indexTip == null && m_skeleton.IsInitialized)
        {
            indexTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_IndexTip].Transform;
            indexDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Index2].Transform;
        }

        if (!indexTip) return;


        indexoriginPoint = indexDistal.position;
        indextargetPoint = indexTip.position;

        Vector3 indexdirection = Vector3.Normalize(indextargetPoint - indexoriginPoint);
        float indexdistance = Vector3.Distance(indexoriginPoint, indextargetPoint);

        if (Physics.Raycast(indexoriginPoint, indexdirection, out touch, indexdistance, 1 << WHITEBOARD_LAYER))
        {
            drawColor = penColor;
            drawSize = penSize;

            whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);

            whiteboard.ToggleTouch(true);
        }
        else
        {
            whiteboard?.ToggleTouch(false);
        }

    }
}