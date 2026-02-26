long GetNextCard(long* param0, int param1) {
    uint32_t result;
    int v0;
    int v1 = *(int*)(param0 + 676);
    do {
        result = 0xffffffff;
        if(param1 < -1 || v0 + 1 >= v1) {
            return result;
        }
        result = v0 + 1;
    }
    while(*((long*)((uint64_t)(v0 + 1) * 32L + (long)param0) + 76) == 0L);
    return result;
}
