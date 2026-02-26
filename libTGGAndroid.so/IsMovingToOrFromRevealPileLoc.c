long IsMovingToOrFromRevealPileLoc(int* param0) {
    if(*(param0 + 2014) != 0) {
        if(*(param0 + 152) == 1 && *(param0 + 154) == 21) {
            return 1L;
        }
        int v0 = *(param0 + 194);
        if(*(param0 + 194) == 1 && *(param0 + 196) == 21) {
            return 1L;
        }
        int v1 = *(param0 + 0x11e);
        if(*(param0 + 0x11e) == 1 && *(param0 + 288) == 21) {
            return 1L;
        }
        if(v0 == 1 && (*(param0 + 196) & 0xfffffffe) == 6 && *(param0 + 197) - 1006 < 3) {
            return 1L;
        }
        if(v1 == 1 && (*(param0 + 288) & 0xfffffffe) == 6 && *(param0 + 0x121) - 1006 < 3) {
            return 1L;
        }
    }
    return 0L;
}
