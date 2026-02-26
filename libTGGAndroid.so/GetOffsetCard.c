long GetOffsetCard(long* param0, uint32_t param1, int param2) {
    uint32_t result;
    int v0;
    int v1 = *(int*)(param0 + 676);
    do {
        long v2 = (uint64_t)param1 | ((uint64_t)v0 << 32);
        param1 += param2;
        v0 = 0;
        result = 0xffffffff;
        if((uint32_t)v2 + param2 < 0 || (int)param1 >= v1) {
            return result;
        }
        result = param1;
    }
    while(*((long*)(param1 * 32L + (long)param0) + 76) == 0L);
    return result;
}
