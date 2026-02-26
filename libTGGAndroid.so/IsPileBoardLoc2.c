long IsPileBoardLoc2(int* param0) {
    if(*param0 == 1 && (*(param0 + 2) & 0xfffffffe) == 6) {
        return *(param0 + 3) < 73;
    }
    return 0L;
}
