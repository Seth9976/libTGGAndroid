void ScreenRay(long* param0) {
    FADDP(0x3f800000, 0x3f8000003f800000L);
    FSQRT(2.0, 2.0);
    *(int*)(param0 + 1) = 0;
    *param0 = 0L;
    *(long*)((char*)param0 + 12L) = 0x3f0000003f000000L;
    *(int*)((char*)param0 + 20L) = 0.5;
}
