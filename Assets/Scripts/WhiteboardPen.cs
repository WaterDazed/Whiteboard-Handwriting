using UnityEngine;
using UnityEngine.SceneManagement;

public class WhiteboardPen : MonoBehaviour
{
    public GameObject objectWhiteboard;

    private Whiteboard whiteboard;
    private RaycastHit touch;

    private OVRHand m_hand;
    private OVRSkeleton m_skeleton;

    private Transform indexTip;
    private Transform thumbTip;
    private Transform indexDistal;
    private Transform thumbDistal;

    private Vector3 indexoriginPoint;
    private Vector3 indextargetPoint;
    private Vector3 thumboriginPoint;
    private Vector3 thumbtargetPoint;

    public Color penColor = Color.black, drawColor = Color.black;
    public int penSize = 2, drawSize = 2;

    private const int WHITEBOARD_LAYER = 10;

    public void PenColorSet(int color)
    {
        penColor = whiteboard.NumToColor(color);
    }
    private void Awake()
    {
        //Get the scripts that hold information about hand tracking
        m_hand = GetComponent<OVRHand>();
        m_skeleton = GetComponent<OVRSkeleton>();
        whiteboard = objectWhiteboard.GetComponent<Whiteboard>();
    }

    // Update is called once per frame
    void Update()
    {
        // Hands are not initialized immediately, so we need to wait until they appear
        // and are initialized.
        if (indexTip == null && m_skeleton.IsInitialized)
        {
            indexTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_IndexTip].Transform;
            indexDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Index2].Transform;
            thumbTip = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_ThumbTip].Transform;
            thumbDistal = m_skeleton.Bones[(int)OVRPlugin.BoneId.Hand_Thumb2].Transform;
        }

        // If hands aren't initialized yet, don't execute the rest of the script.
        if (!indexTip || !thumbTip) return;

        // Since we're going to be using our index finger as the pen
        // for this whiteboard, we need to cast a ray from the second joint
        // of our index finger to the tip of the finger.

        indexoriginPoint = indexDistal.position;
        indextargetPoint = indexTip.position;
        thumboriginPoint = thumbDistal.position;
        thumbtargetPoint = thumbTip.position;

        Vector3 indexdirection = Vector3.Normalize(indextargetPoint - indexoriginPoint);
        Vector3 thumbdirection = Vector3.Normalize(thumbtargetPoint - thumboriginPoint);
        float indexdistance = Vector3.Distance(indexoriginPoint, indextargetPoint);
        float thumbdistance = Vector3.Distance(thumboriginPoint, thumbtargetPoint);

        //Cast a ray starting from the second index finger joint to the tip of the index finger.
        //Only check for objects that are in the whiteboard layer.
        if (Physics.Raycast(indexoriginPoint, indexdirection, out touch, indexdistance, 1 << WHITEBOARD_LAYER))
        {
            //Get the Whiteboard component of the whiteboard we obtain from the raycast.
            drawColor = penColor;
            drawSize = penSize;
            //touch.textureCoord gives us the texture coordinates at which our raycast
            //intersected the whiteboard. We can use this to tell the whiteboard where to
            //render the next circle.
            whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);

            //If the raycast intersects the board, it means we are touching the board
            whiteboard.ToggleTouch(true);
        }
        else if (Physics.Raycast(thumboriginPoint, thumbdirection, out touch, thumbdistance, 1 << WHITEBOARD_LAYER))
        {
            //Get the Whiteboard component of the whiteboard we obtain from the raycast.
            drawColor = Color.white;
            drawSize = 16;

            //touch.textureCoord gives us the texture coordinates at which our raycast
            //intersected the whiteboard. We can use this to tell the whiteboard where to
            //render the next circle.
            whiteboard.SetTouchPosition(touch.textureCoord.x, touch.textureCoord.y);

            //If the raycast intersects the board, it means we are touching the board
            whiteboard.ToggleTouch(true);
        }
        else
        {
            //If the raycast no longer intersects, stop drawing on the board.
            whiteboard?.ToggleTouch(false);
        }

    }
}