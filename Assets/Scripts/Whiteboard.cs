using UnityEngine;

public class Whiteboard : MonoBehaviour
{
    public GameObject objectRenderSreaming, objectHandPrefab;
    private WhiteboardPen whiteboardPen;
    private ConnectSend connectSend;
    private AvatarTransLocal avatarTransLocal;
    private AvatarTransRemote avatarTransRemote;
    private int texturesSizeHorizontal;
    private int texturesSizeVertical;

    private Texture2D texture;

    private bool touching, touchingLast, remoteTouching, remoteTouchingLast;

    private float posX, posY;
    private int lastX, lastY, remoteLastX, remoteLastY;

    private const int TEXTURE_SCALE = 1024;

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
        if (!connectSend.IsConnected)
            return;
        connectSend.SendData(new BoardData(-1, default, default, default, default, default, default, default));
    }
    public void RemoteDraw(BoardData boardData)
    {
        if (!connectSend.IsConnected)
            return;
        connectSend.SendData(boardData);
    }
    public void ReceiveDraw(BoardData boardData)
    {
        int type = boardData.type;
        int x = boardData.x;
        int y = boardData.y;
        Color drawColor = NumToColor(boardData.color);
        int drawSize = boardData.drawSize;

        remoteTouching = type == 1;
        if (remoteTouchingLast)
        {
            texture.DrawCircle(drawColor, x, y, drawSize);

            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int)Mathf.Lerp(remoteLastX, x, t);
                int lerpY = (int)Mathf.Lerp(remoteLastY, y, t);
                texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
            }

            texture.Apply();
        }


        remoteLastX = x;
        remoteLastY = y;
        remoteTouchingLast = remoteTouching;


    }
    public void Awake()
    {
        texturesSizeHorizontal = (int)(transform.localScale.x * WHITEBOARD_SCALE * TEXTURE_SCALE);
        texturesSizeVertical = (int)(transform.localScale.z * WHITEBOARD_SCALE * TEXTURE_SCALE);

        Renderer renderer = GetComponent<Renderer>();
        texture = new Texture2D(texturesSizeHorizontal, texturesSizeVertical);
        renderer.material.mainTexture = texture;
        BoardClear();

        connectSend = objectRenderSreaming.GetComponent<ConnectSend>();
        whiteboardPen = objectHandPrefab.GetComponent<WhiteboardPen>();
        avatarTransLocal = gameObject.GetComponent<AvatarTransLocal>();
        avatarTransRemote = gameObject.GetComponent<AvatarTransRemote>();
    }
    void Update()
    {
        BoardData boardData = avatarTransLocal.GetAvatarData();
        int drawSize = whiteboardPen.drawSize;
        Color drawColor = whiteboardPen.drawColor;
        int x = (int)(posX * texturesSizeHorizontal - (drawSize / 2));
        int y = (int)(posY * texturesSizeVertical - (drawSize / 2));

        if (touchingLast)
        {
            texture.DrawCircle(drawColor, x, y, drawSize);
            for (float t = 0.01f; t < 1.00f; t += 0.01f)
            {
                int lerpX = (int)Mathf.Lerp(lastX, x, t);
                int lerpY = (int)Mathf.Lerp(lastY, y, t);
                texture.DrawCircle(drawColor, lerpX, lerpY, drawSize);
            }

            texture.Apply();

            boardData.type = touching ? 1 : 0;
            boardData.x = x;
            boardData.y = y;
            boardData.color = ColorToNum(drawColor);
            boardData.drawSize = drawSize;
        }
        RemoteDraw(boardData);

        lastX = x;
        lastY = y;
        touchingLast = touching;

    }

    public void ToggleTouch(bool touching)
    {
        this.touching = touching;
    }
    public void SetTouchPosition(float posX, float posY)
    {
        this.posX = posX;
        this.posY = posY;
    }
}