using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using StreamLOD = Oculus.Avatar2.OvrAvatarEntity.StreamLOD;
using Unity.Collections.LowLevel.Unsafe;

public struct BoardData
{

    public int type, x, y, color, drawSize;
    public long time;
    public byte[] customData;
    public UInt32 byteCount;

    public BoardData(int type, int x, int y, int color, int drawSize, long time, byte[] customData, UInt32 byteCount)
    {
        this.type = type;
        /*
        -1:清空白板
        1：起笔点
        2：开始绘画
        3：结束绘画
        4：只有数字人
         */
        this.x = x;
        this.y = y;
        this.color = color;
        this.drawSize = drawSize;
        this.time = time;
        this.customData = customData;
        this.byteCount = byteCount;
    }
}
public class PacketData : IDisposable
{
    public NativeArray<byte> data;
    public StreamLOD lod;
    public float fakeLatency;
    public UInt32 dataByteCount;

    private uint refCount = 0;

    public PacketData() { }

    ~PacketData()
    {
        Dispose(false);
    }

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    private void Dispose(bool disposing)
    {
        if (data.IsCreated)
        {
            data.Dispose();
        }
        data = default;
    }

    public bool Unretained => refCount == 0;
    public PacketData Retain() { ++refCount; return this; }
    public bool Release()
    {
        return --refCount == 0;
    }
};


public static class NativeArrayExtension
{
    public static byte[] ToRawBytes<T>(this NativeArray<T> arr) where T : struct
    {
        var slice = new NativeSlice<T>(arr).SliceConvert<byte>();
        var bytes = new byte[slice.Length];
        slice.CopyTo(bytes);
        return bytes;
    }

    public static void CopyFromRawBytes<T>(this NativeArray<T> arr, byte[] bytes) where T : struct
    {
        var byteArr = new NativeArray<byte>(bytes, Allocator.Temp);
        var slice = new NativeSlice<byte>(byteArr).SliceConvert<T>();

        UnityEngine.Debug.Assert(arr.Length == slice.Length);
        slice.CopyTo(arr);
    }
    public static NativeArray<T> FromRawBytes<T>(byte[] bytes, Allocator allocator) where T : struct
    {
        int structSize = UnsafeUtility.SizeOf<T>();

        UnityEngine.Debug.Assert(bytes.Length % structSize == 0);

        int length = bytes.Length / UnsafeUtility.SizeOf<T>();
        var arr = new NativeArray<T>(length, allocator);
        arr.CopyFromRawBytes(bytes);
        return arr;
    }
}