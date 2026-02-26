int* operator+=4(int* param0, int param1) {
    int v0 = *(param0 + 0x100);
    *(param0 + 0x100) = v0 + 1;
    *(int*)(v0 * 4L + (long)param0) = param1;
    return param0;
}
