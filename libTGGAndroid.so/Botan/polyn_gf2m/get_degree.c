// Package: Botan::polyn_gf2m

long Botan::polyn_gf2m::get_degree(uint32_t* param0) {
    int v0;
    long* ptr0;
    long* ptr1 = *(uint64_t*)(param0 + 2);
    long* ptr2 = (long*)(*(uint64_t*)(param0 + 4) - (long)ptr1);
    long* ptr3 = (long*)((long)(long*)((long)(long*)__ror__((long)ptr2, 1L) & 0xffffffffL) | ((long*)((long)(long*)((long)ptr2 >>> 32L) & 0x1L) ? 0xffffffff00000000L: 0L));
    uint32_t result = (uint32_t)((((uint32_t)(long*)((long)ptr2 >>> 1L) >> 31) & (uint32_t)(long*)((long)ptr2 >>> 1L)) - 1);
    do {
        ptr0 = (char*)ptr3 - 1L;
        if((long)ptr0 < 0L) {
            *param0 = result;
            return result;
        }
        v0 = (uint32_t)*(short*)((long)(short*)((char*)ptr1 - 2L) + (long)(long*)((long)ptr3 * 2L));
        ptr3 = ptr0;
    }
    while(v0 == 0);
    result = ptr0;
    *param0 = result;
    return result;
}
