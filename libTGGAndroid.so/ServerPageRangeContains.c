int ServerPageRangeContains(int param0, long param1, int param2) {
    if(param2 != -1) {
        return ((uint32_t)127 | ((uint32_t)(param0 & &gGameCenter+1067h) << 7)) >= param2 ? param0 * 128 <= param2: 0L;
    }
    return 1;
}
