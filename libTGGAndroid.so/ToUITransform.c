int* ToUITransform(long* param0, int* param1) {
    *(param0 + 11) = 0L;
    *(__int128*)(param0 + 9) = 0x0X;
    *(__int128*)(param0 + 7) = 0x0X;
    *(__int128*)(param0 + 5) = 0x0X;
    *(__int128*)(param0 + 3) = 0x0X;
    *(__int128*)(param0 + 1) = 0x0X;
    *param0 = *(long*)(param1 + 5);
    *(param0 + 4) = 0x3f80000000000000L;
    *(int*)((char*)param0 + 12L) = *param1;
    return param1;
}
