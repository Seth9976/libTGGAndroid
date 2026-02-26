long IsAtPileLoc(int* param0, int param1) {
    if(*(param0 + 2014) == 0 && *(param0 + 236) == 1 && (*(param0 + 0xee) & 0xfffffffe) == 6 && *(param0 + 239) == param1) {
        return 1L;
    }
    return 0L;
}
