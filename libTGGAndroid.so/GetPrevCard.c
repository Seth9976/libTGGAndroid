long GetPrevCard(long* param0, uint32_t param1) {
    uint32_t result;
    int v0;
    int v1 = *(int*)(param0 + 676);
    uint32_t v2 = param1;
    do {
        uint32_t v3 = v2;
        v2 = v0 - 1;
        result = 0xffffffff;
        if((int)v3 < 1 || (int)param1 > v1) {
            return result;
        }
        result = v2;
    }
    while(*((long*)(v2 * 32L + (long)param0) + 76) == 0L);
    return result;
}
