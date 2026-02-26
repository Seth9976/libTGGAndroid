// Package: Botan::polyn_gf2m

long Botan::polyn_gf2m::calc_degree_secure(int param0, uint32_t* param1) {
    uint32_t result;
    long* ptr0;
    int v0;
    short* ptr1 = *(uint64_t*)(param1 + 2);
    long* ptr2 = (long*)((long)*(uint64_t*)(param1 + 4) - (long)ptr1);
    if((uint32_t)(long*)((long)ptr2 >>> 1L) >= 1) {
        ptr2 = (long)(long*)((long)(long*)__ror__((long)ptr2, 1L) & 0xffffffffL) | ((long*)((long)(long*)((long)ptr2 >>> 32L) & 0x1L) ? 0xffffffff00000000L: 0L);
        --ptr1;
        int v1 = 0xffff;
        do {
            int v2 = *(short*)((long)(long*)((long)ptr2 * 2L) + (long)ptr1) ? 0xffff: 0;
            ptr0 = (char*)ptr2 - 1L;
            ptr2 = (char*)ptr2 - 1L;
            result = ((uint32_t)ptr2 & v1 & v2) | param0;
            v1 = ~v2 & v0;
        }
        while((long)ptr0 > 0L);
        *param1 = result;
        return result;
    }
    *param1 = 0;
    return 0L;
}
