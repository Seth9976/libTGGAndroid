long IsAtOrMovingAtLoc(int* param0, int param1) {
    if(*(param0 + 2014) != 0) {
        if(*(param0 + 194) == 1 && *(param0 + 196) == param1 && *(param0 + 0x11e) == 1 && *(param0 + 288) == param1) {
            return 1L;
        }
    }
    else if(*(param0 + 236) == 1 && *(param0 + 0xee) == param1) {
        return 1L;
    }
    return 0L;
}
