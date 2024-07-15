using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using Unity.Collections.LowLevel.Unsafe;

public struct BoardData
{

    public int type, x, y, color, drawSize;
    public long time;
    public BoardData(int type, int x, int y, int color, int drawSize, long time)
    {
        this.type = type;
        /*
        -1:清空白板
        0：非起笔点
        1：起笔点
        2：开始绘画
        3：结束绘画
         */
        this.x = x;
        this.y = y;
        this.color = color;
        this.drawSize = drawSize;
        this.time = time;
    }
}


