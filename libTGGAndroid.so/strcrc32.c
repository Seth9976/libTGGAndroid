int strcrc32(char* param0, int param1) {
    int v0;
    int v1 = (uint32_t)*param0;
    int result = param1;
    if(v1 != 0) {
        char* ptr0 = param0 + 1L;
        do {
            int v2 = (uint32_t)(uint8_t)v1 - 65 < 26 ? (uint32_t)(uint8_t)v1 | 0x20: (uint32_t)(uint8_t)v1;
            v1 = (uint32_t)*ptr0;
            ++ptr0;
            result = (v0 >>> 8) ^ *(int*)((uint64_t)((uint32_t)(uint8_t)v0 ^ (v2 != 92 ? v2: 47)) * 4L + 4422908L);
        }
        while(v1 != 0);
    }
    return result;
}
