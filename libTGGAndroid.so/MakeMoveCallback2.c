long MakeMoveCallback2(__int128* param0, long param1, int param2, int param3) {
    *param0 = 0x0X;
    *(param0 + 1) = 0x0X;
    *(long*)param0 = param1;
    *(int*)((char*)param0 + 8L) = param2;
    *(int*)((char*)param0 + 24L) = param3;
    return param1;
}
