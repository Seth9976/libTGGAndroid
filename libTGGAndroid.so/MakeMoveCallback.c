long MakeMoveCallback(long* param0, long param1, int param2, int param3) {
    *(param0 + 2) = 0L;
    *(param0 + 3) = 0L;
    *param0 = param1;
    *(int*)(param0 + 1) = 1;
    *(int*)((char*)param0 + 12L) = param2;
    *(int*)(param0 + 3) = param3;
    return param1;
}
