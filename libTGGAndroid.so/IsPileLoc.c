long IsPileLoc(int* param0, int param1) {
    if((*param0 & 0xfffffffe) == 6 && *(param0 + 1) == param1) {
        return 1L;
    }
    return 0L;
}
