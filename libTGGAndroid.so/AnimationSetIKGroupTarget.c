long* AnimationSetIKGroupTarget(long* param0, int param1, __int128* param2, long* param3) {
    __int128 v0 = *(__int128*)((char*)param2 + 12L);
    long* ptr0 = (long*)(param1 * 304L + *(param0 + 7));
    *(__int128*)(ptr0 + 62) = *param2;
    *(__int128*)((char*)ptr0 + 508L) = v0;
    long v1 = *param3;
    *(int*)((char*)ptr0 + 532L) = *(int*)(param3 + 1);
    *(long*)((char*)ptr0 + 524L) = v1;
    *(char*)(ptr0 + 29) = 1;
    return param0;
}
