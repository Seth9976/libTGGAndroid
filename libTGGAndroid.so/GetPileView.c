long GetPileView(int* param0) {
    int v0 = (int)*(param0 + 35);
    if(*(param0 + 35) != 0) {
        return (long)v0;
    }
    int* ptr0 = (uint64_t)*(param0 + 23);
    if(*(param0 + 23) <= 1100) {
        if((uint32_t)ptr0 != 1001 && (uint32_t)ptr0 != 1002) {
            return (uint32_t)ptr0 - 1106 >= 34 ? 0L: 3L;
        }
        else if((uint32_t)ptr0 != 1001) {
            return 0L;
        }
        return 2L;
    }
    if((uint32_t)ptr0 != 1101) {
        if((uint32_t)ptr0 != 1102) {
            return (uint32_t)ptr0 - 1106 >= 34 ? 0L: 3L;
        }
        return 4L;
    }
    return 3L;
}
