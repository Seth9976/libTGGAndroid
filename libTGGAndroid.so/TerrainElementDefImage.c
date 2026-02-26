long TerrainElementDefImage(__int128* param0, long param1, int* param2, int param3) {
    *param2 = 0;
    long* ptr0 = (long*)(param3 * 24L + param1);
    *param2 = *(int*)(ptr0 + 5);
    __int128 v0 = *(__int128*)(ptr0 + 3);
    *(long*)(param0 + 1) = *(ptr0 + 5);
    *param0 = v0;
    return param1;
}
