int* DomMove_QueueDelay(int* param0, __int128* param1, int param2, char param3) {
    if(!param3) {
        int v0 = *(param0 + 1864);
        *(param0 + 1864) = v0 + 1;
        __int128 v1 = *(__int128*)(param0 + 94);
        __int128 v2 = *(__int128*)(param0 + 86);
        long* ptr0 = (long*)(v0 * 216L + (long)param0);
        *(__int128*)(ptr0 + 70) = *(__int128*)(param0 + 90);
        *(__int128*)(ptr0 + 72) = v1;
        *(__int128*)(ptr0 + 68) = v2;
        __int128 v3 = *(__int128*)(param0 + 110);
        __int128 v4 = *(__int128*)(param0 + 98);
        __int128 v5 = *(__int128*)(param0 + 102);
        *(__int128*)(ptr0 + 78) = *(__int128*)(param0 + 106);
        *(__int128*)(ptr0 + 80) = v3;
        *(__int128*)(ptr0 + 74) = v4;
        *(__int128*)(ptr0 + 76) = v5;
        __int128 v6 = *(__int128*)(param0 + 118);
        __int128 v7 = *(__int128*)(param0 + 122);
        __int128 v8 = *(__int128*)(param0 + 114);
        *(ptr0 + 88) = *(long*)(param0 + 126);
        *(__int128*)(ptr0 + 84) = v6;
        *(__int128*)(ptr0 + 86) = v7;
        *(__int128*)(ptr0 + 82) = v8;
        __int128 v9 = *param1;
        __int128 v10 = *(param1 + 1);
        *(int*)(ptr0 + 94) = param2;
        *(__int128*)(ptr0 + 90) = v9;
        *(__int128*)(ptr0 + 92) = v10;
        *(int*)(ptr0 + 89) = 11;
    }
    return param0;
}
