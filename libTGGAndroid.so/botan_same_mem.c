long botan_same_mem(char* param0, char* param1, long param2) {
    long v0;
    uint8_t v1 = 0;
    if(param2 != 0L) {
        do {
            long v2 = (uint64_t)*param0;
            ++param0;
            long v3 = (uint64_t)*param1;
            ++param1;
            v0 = param2 - 1L;
            --param2;
            v1 |= (uint8_t)v2 ^ (uint8_t)v3;
        }
        while(v0 != 0L);
    }
    return (uint64_t)~(((uint32_t)((v1 - 1) & (uint8_t)~v1) | ((uint32_t)((((v1 - 1) & ~v1) >>> 7) & 1 ? 0xffffff: 0) << 8)) >> 7);
}
