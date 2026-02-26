// Package: Botan::ESP_Padding

long Botan::ESP_Padding::unpad(long param0, long param1, long param2) {
    int v0;
    int v1;
    long result = param2;
    if(param2 - 3L <= 252L) {
        int v2 = (uint32_t)*(char*)(result + param1 - 1L);
        long v3 = result - 2L;
        long v4 = (uint64_t)((uint32_t)result - v2);
        int v5 = ((uint32_t)result - v2) ^ (uint32_t)result;
        long v6 = (v4 & 0xffL) - result + 1L;
        while(1) {
            int v7 = (v2 - 1) ^ (uint32_t)*(char*)(param1 + v3);
            v0 = (~(((uint32_t)(((uint8_t)v7 - 1) & (uint8_t)~v7) | ((uint32_t)((((v7 - 1) & ~v7) >>> 7) & 1 ? 0xffffff: 0) << 8)) >> 7) & (uint32_t)(((v3 + 1L) | v6) >> 63L)) | v1;
            if(v3 == 0L) {
                break;
            }
            v2 = (uint32_t)*(char*)(param1 + v3);
            --v3;
            ++v6;
        }
        result = (uint64_t)((v5 & v0) ^ (uint32_t)v4) & 0xffL;
    }
    return result;
}
