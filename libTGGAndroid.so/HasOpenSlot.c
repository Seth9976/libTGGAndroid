long HasOpenSlot(int* param0) {
    if(*(param0 + 24) == 2 || *(param0 + 163) == 2 || *(param0 + 302) == 2 || *(param0 + 441) == 2 || *(param0 + 0x244) == 2 || *(param0 + 719) == 2 || *(param0 + 858) == 2) {
        return 1L;
    }
    return *(param0 + 997) == 2;
}
