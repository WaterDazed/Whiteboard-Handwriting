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
        -1:��հװ�
        0������ʵ�
        1����ʵ�
        2����ʼ�滭
        3�������滭
         */
        this.x = x;
        this.y = y;
        this.color = color;
        this.drawSize = drawSize;
        this.time = time;
    }
}


