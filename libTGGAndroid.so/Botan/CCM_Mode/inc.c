// Package: Botan::CCM_Mode

void Botan::CCM_Mode::inc(long param0, long* param1) {
    long v0 = *param1;
    long v1 = *(param1 + 1) - v0;
    if(v1 != 0L) {
        long v2 = 0L;
        long v3 = -1L;
        do {
            v0 += v1;
            v1 = (uint64_t)((uint32_t)*(char*)(v3 + v0) + 1);
            *(char*)(v3 + v0) = (uint8_t)v1;
            if(!((v1 >>> 8L) & 0x1L)) {
                goto loc_902B1C;
            }
            else {
                v0 = *param1;
                ++v2;
                --v3;
                v1 = *(param1 + 1) - v0;
            }
        }
        while(v2 != v1);
    loc_902B1C:
    }
}
