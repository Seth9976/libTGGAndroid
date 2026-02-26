long IsAtBoardPileLoc(int* param0) {
    if(*(param0 + 2014) != 0) {
        if(*(param0 + 236) == 1 && (*(param0 + 0xee) & 0xfffffffe) == 6 && *(param0 + 239) <= 72 && *(param0 + 0x11e) == 1 && (*(param0 + 288) & 0xfffffffe) == 6 && *(param0 + 239) == *(param0 + 0x121)) {
            return 1L;
        }
    }
    else if((*(param0 + 0xee) & 0xfffffffe) == 6 && *(param0 + 236) == 1 && *(param0 + 239) < 73) {
        return 1L;
    }
    return 0L;
}
