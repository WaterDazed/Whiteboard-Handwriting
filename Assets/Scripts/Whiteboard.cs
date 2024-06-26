using UnityEngine;

public class Whiteboard : MonoBehaviour
{
    public GameObject objectRenderSreaming, objectHandPrefab;
    private WhiteboardPen whiteboardPen;
    private ConnectControl connectControl;
    private ConnectSend connectSend;
    private int texturesSizeHorizontal;
    private int texturesSizeVertical;

    private Texture2D texture;

    private bool touching, touchingLast, remoteTouching, remoteTouchingLast;

    private float posX, posY;
    private int lastX, lastY, remoteLastX, remoteLastY;

    //One meter should correspond to 1024 pixels on the whiteboard.
    private const int TEXTURE_SCALE = 1024;

    //The default plane in Unity is 10 units by 10 units. When we dynamically rescale our
    //whiteboard in the future, a localScale of 0.1 will correspond to one meter. To correct for
    //this, we will be multiplying our texture sizes by this constant.
    private const int WHITEBOARD_SCALE = 10;

    public void BoardClear()
    {
        for (int i = 0; i <= texturesSizeHorizontal; i++)
            for (int j = 0; j <= texturesSizeVertical; j++)
                texture.SetPixel(i, j, Color.white);
        texture.Apply();
    }
    public Color NumToColor(int color)
    {
        switch (color)
        {
            case 1:
                return Color.black;
            case 2:
                return Color.red;
            case 3:
                return Color.green;
            case 4:
                return Color.blue;
            case 5:
                return Color.white;
            default:
                return Color.black;
        }
    }
    public int ColorToNum(Color color)
    {
        if (color == Color.black)
            return 1;
        else if (color == Color.red)
            return 2;
        else if (color == Color.green)
            return 3;
        else if (color == Color.blue)
            return 4;
        else if (color == Color.white)
            return 5;
        else return 1;

    }
    public void RemoteBoardClear()
    {
        if (connectControl.connectFlag)
            connectSend.SendData(new BoardData(-1, 0, 0, 0, 0, 0));
    }
    public void RemoteDraw(int type, int x, int y, int color, int drawSize)
    {
        if (connectControl.connectFlag)
            connectSend.SendData(new BoardData(type, x, y, color, drawSize, 0));
    }
    public void ReceiveDraw(int type, int x, int y, int color, int drawSize)
    {
        Color drawColor = NumToColor(color);
        remoteTouching = type == 1 ? true : false;
        if (remoteTouchingLast)
        {
            texture.DrawCircle(drawColor, x, y, drawSize);

            //If we move our finger too fast on the whiteboard, Update can't keep
            //up and our line looks choppy.
            //This loop allows us to interpolate between those points using Lerp.
            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int)Mathf.Lerp(remoteLastX, x, t);
                int lerpY = (int)Mathf.Lerp(remoteLastY, y, t);
                texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
            }

            texture.Apply();
        }

        //Set lastX and lastY coordinates for filling the space between the points
        //placed on the whiteboard.
        remoteLastX = x;
        remoteLastY = y;
        remoteTouchingLast = remoteTouching;
    }
    public void Start()
    {
        //Scale the texture on the whiteboard based on the size of the whiteboard.
        texturesSizeHorizontal = (int)(transform.localScale.x * WHITEBOARD_SCALE * TEXTURE_SCALE);
        texturesSizeVertical = (int)(transform.localScale.z * WHITEBOARD_SCALE * TEXTURE_SCALE);
        //Create a new texture and set it as the default texture of this whiteboard
        Renderer renderer = GetComponent<Renderer>();
        texture = new Texture2D(texturesSizeHorizontal, texturesSizeVertical);
        renderer.material.mainTexture = texture;
        BoardClear();

        connectControl = objectRenderSreaming.GetComponent<ConnectControl>();
        connectSend = objectRenderSreaming.GetComponent<ConnectSend>();
        whiteboardPen = objectHandPrefab.GetComponent<WhiteboardPen>();

    }
    // Update is called once per frame
    void Update()
    {
        int drawSize = whiteboardPen.drawSize;
        Color drawColor = whiteboardPen.drawColor;
        //DrawCircle method draws a circle from the top left of given coordinates, 
        //but we want the circle to be centered at the given coordinates.
        int x = (int)(posX * texturesSizeHorizontal - (drawSize / 2));
        int y = (int)(posY * texturesSizeVertical - (drawSize / 2));

        //If hand is in contact with the whiteboard, start drawing.
        if (touchingLast)
        {
            texture.DrawCircle(drawColor, x, y, drawSize);

            //If we move our finger too fast on the whiteboard, Update can't keep
            //up and our line looks choppy.
            //This loop allows us to interpolate between those points using Lerp.
            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int)Mathf.Lerp(lastX, x, t);
                int lerpY = (int)Mathf.Lerp(lastY, y, t);
                texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
            }

            texture.Apply();

            RemoteDraw(touching ? 1 : 0, x, y, ColorToNum(drawColor), drawSize);
        }

        //Set lastX and lastY coordinates for filling the space between the points
        //placed on the whiteboard.
        lastX = x;
        lastY = y;
        touchingLast = touching;

    }

    //ToggleTouch allows the WhiteboardPen.cs script to tell
    //the whiteboard if the user is touching the whiteboard.
    public void ToggleTouch(bool touching)
    {
        this.touching = touching;
    }

    //SetTouchPosition takes in the coordinates at which our whiteboard
    //pen intersects the board.
    public void SetTouchPosition(float posX, float posY)
    {
        this.posX = posX;
        this.posY = posY;
    }
}