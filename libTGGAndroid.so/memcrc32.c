long memcrc32(char* param0, long param1, int param2) {
    uint32_t result;
    long v0;
    if(param1 != 0L) {
        do {
            int v1 = (uint32_t)*param0;
            ++param0;
            v0 = param1 - 1L;
            --param1;
            result = (param2 >>> 8) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)param2 ^ v1) * 4L + 4422908L);
        }
        while(v0 != 0L);
    }
    return result;
}
