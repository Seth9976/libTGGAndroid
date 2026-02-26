long GetSplitPileShape(long param0, int* param1) {
    if(*(param1 + 11) == 3 && *(param1 + 28) != 0 && *(param1 + 14) != 0) {
        if(*(param1 + 0xF) != 0) {
            return *(param1 + 16) ? 3L: 2L;
        }
        return 1L;
    }
    return 0L;
}
