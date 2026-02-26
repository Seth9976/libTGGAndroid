int CalcTurnInfo(int* param0, int param1, long* param2) {
    int v0 = *(int*)(param2 + 0x345);
    *param0 = param1;
    *(param0 + 1) = v0;
    int v1 = *(int*)((char*)param2 + 6612L);
    int v2 = *(int*)(param2 + 0xF);
    *(param0 + 2) = v1;
    *(param0 + 3) = v2;
    int v3 = *(int*)(param2 + 424);
    int v4 = (v3 != 0 ? (*(int*)(param2 + 0x33d) - 1) / v3: 0) + 1;
    *(param0 + 4) = *(int*)((char*)param2 + 6636L);
    *(param0 + 5) = v4;
    if(v1 != v2 || ((*(char*)(param2 + 14) >>> 3) & 1)) {
        *(param0 + 4) = -1;
    }
    return param1;
}
