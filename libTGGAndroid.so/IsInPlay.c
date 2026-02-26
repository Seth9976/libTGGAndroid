long IsInPlay(int* param0, uint32_t param1, int param2) {
    if(*(int*)((char*)(param1 * 104L + (long)param0) + 6772L) == 1001) {
        return *(int*)((long*)(param1 * 104L + (long)param0) + 847) == param2;
    }
    return 0L;
}
