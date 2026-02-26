int DomLocSet(__int128* param0, int param1, int param2, long param3, int param4, int param5, long param6) {
    *param0 = 0x0X;
    *(param0 + 1) = 0x0X;
    *(param0 + 5) = 0x0X;
    *(param0 + 6) = 0x0X;
    *(param0 + 3) = 0x0X;
    *(param0 + 4) = 0x0X;
    *(param0 + 2) = 0x0X;
    *(int*)param0 = param1;
    *(int*)((char*)param0 + 4L) = param2;
    *(int*)((char*)param0 + 8L) = param4;
    *(int*)((char*)param0 + 12L) = param5;
    *(long*)(param0 + 1) = param3;
    *(int*)((char*)param0 + 24L) = 0;
    *(long*)(param0 + 7) = 0L;
    *(long*)((char*)param0 + 120L) = param6;
    return param1;
}
