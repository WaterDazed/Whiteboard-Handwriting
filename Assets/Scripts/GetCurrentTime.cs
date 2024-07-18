using System;

public static class GetCurrentTime
{
    public static long Get()
    {
        return ((DateTime.Now.ToUniversalTime().Ticks - 621355968000000000) / 10000);//ms
    }
} 