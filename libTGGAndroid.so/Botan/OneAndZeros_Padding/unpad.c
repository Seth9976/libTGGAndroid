// Package: Botan::OneAndZeros_Padding

long Botan::OneAndZeros_Padding::unpad(long param0, long param1, long param2) {
    int v0;
    long v1;
    int v2;
    int v3;
    long result = param2;
    if(param2 >= 3L) {
        int v4 = 0;
        long v5 = result - 1L;
        long v6 = result;
        do {
            int v7 = (uint32_t)*(char*)(param1 - 1L + v6);
            v2 = v4;
            v1 = v6 - 1L;
            v0 = (((uint32_t)(((uint8_t)v7 + 127) & (uint8_t)v7) | ((uint32_t)((((v7 + 127) & v7) >>> 7) & 1 ? 0xffffff: 0) << 8)) >> 7) | v3;
            v5 -= (uint64_t)(~v0 & 1);
            v4 = ~((((uint32_t)(((uint8_t)v7 - 1) & (uint8_t)~v7) | ((uint32_t)((((v7 - 1) & ~v7) >>> 7) & 1 ? 0xffffff: 0) << 8)) >> 7) | v0) | v2;
            v6 = v1;
        }
        while(v1 != 0L);
        long v8 = (((uint64_t)(~v0 | v2) & 0xffL) - 1L) >> 63L;
        result = (~v8 & result) | (v5 & v8);
    }
    return result;
}
