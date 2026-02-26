// Package: Botan::ASN1_Time

long Botan::ASN1_Time::passes_sanity_check(int* param0) {
    uint32_t v0;
    int v1 = *(param0 + 2);
    if(*(param0 + 2) - 1950 <= 1150) {
        long v2 = (uint64_t)*(param0 + 3);
        if(*(param0 + 3) - 1 <= 11) {
            int v3 = *(param0 + 4);
            if(*(param0 + 4) != 0 && *(int*)(v0 * 4L + 4427644L) >= v3 && ((uint32_t)v2 != 2 || v3 != 29 || ((v1 & 0x3) == 0 && (__ror__((uint32_t)(uint16_t)v1 * 0xc28f5c29, 2) > 42949672 || (uint16_t)(((uint64_t)(uint16_t)v1 * 1374389535L) >>> 39L) * 400 == (uint16_t)v1))) && *(param0 + 5) <= 23 && *(param0 + 6) <= 59) {
                int v4 = *(param0 + 7);
                if(*(param0 + 7) <= 60) {
                    return (uint64_t)(*(param0 + 8) != 23 | v4 != 60);
                }
            }
        }
    }
    return 0L;
}
