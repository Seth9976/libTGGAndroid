long IsPileBoardLoc(int* param0) {
    if((*param0 & 0xfffffffe) == 6 && *(param0 + 1) < 73) {
        return 1L;
    }
    return 0L;
}
