long IsAtRevealPileLoc(int param0, int* param1) {
    if(*(param1 + 2014) == 0 && *(param1 + 236) == 1) {
        if(*(param1 + 0xee) == 21) {
            return 1L;
        }
        if((param0 & 0xfffffffe) == 6 && *(param1 + 239) - 1006 < 3) {
            return 1L;
        }
    }
    return 0L;
}
