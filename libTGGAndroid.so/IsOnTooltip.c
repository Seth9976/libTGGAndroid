long IsOnTooltip(int* param0) {
    if(*(param0 + 2) == 2) {
        int v0 = *(param0 + 9);
        return (uint64_t)(v0 == 0x2e7e | v0 > 20000);
    }
    return 0L;
}
