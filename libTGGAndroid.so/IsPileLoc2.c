long IsPileLoc2(int* param0, int param1) {
    if(*param0 == 1 && (*(param0 + 2) & 0xfffffffe) == 6) {
        return *(param0 + 3) == param1;
    }
    return 0L;
}
