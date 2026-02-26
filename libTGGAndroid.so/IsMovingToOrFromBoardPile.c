long IsMovingToOrFromBoardPile(int* param0) {
    if(*(param0 + 2014) != 0) {
        if(*(param0 + 194) == 1 && (*(param0 + 0xee) & 0xfffffffe) == 6 && *(param0 + 197) < 73) {
            return 1L;
        }
        if(*(param0 + 0x11e) == 1 && (*(param0 + 0xee) & 0xfffffffe) == 6 && *(param0 + 0x121) < 73) {
            return 1L;
        }
    }
    return 0L;
}
