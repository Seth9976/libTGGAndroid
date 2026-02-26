// Package: Botan::polyn_gf2m

uint32_t* Botan::polyn_gf2m::patchup_deg_secure(uint32_t* param0, uint32_t param1, short param2) {
    long* ptr0;
    long* ptr1;
    int v0;
    short v1 = param2;
    short* ptr2 = *(uint64_t*)(param0 + 2);
    long* ptr3 = *(uint64_t*)(param0 + 4);
    if((uint64_t)(long*)((long)(long*)((long)ptr3 - (long)ptr2) >> 1L) >= param1) {
        if(ptr3 == ptr2) {
        loc_9B8630:
            ptr3 = NULL;
        }
        else {
            long v2 = 0L;
            do {
                long v3 = v2 * 2L;
                char v4 = (uint32_t)v2 == param1;
                v2 = (uint64_t)((uint32_t)v2 + 1);
                *(short*)((long)ptr2 + v3) |= v1;
                v1 = !v4 ? v1: 0;
                ptr2 = *(uint64_t*)(param0 + 2);
                ptr1 = (long)*(uint64_t*)(param0 + 4) - (long)ptr2;
            }
            while((uint64_t)(long*)((long)ptr1 >> 1L) > v2);
            if((uint32_t)(long*)((long)ptr1 >>> 1L) < 1) {
                goto loc_9B8630;
            }
            else {
                ptr3 = NULL;
                ptr1 = (long)(long*)((long)(long*)__ror__((long)ptr1, 1L) & 0xffffffffL) | ((long*)((long)(long*)((long)ptr1 >>> 32L) & 0x1L) ? 0xffffffff00000000L: 0L);
                --ptr2;
                int v5 = 0xffff;
                do {
                    int v6 = *(short*)((long)(long*)((long)ptr1 * 2L) + (long)ptr2) ? 0xffff: 0;
                    ptr0 = (char*)ptr1 - 1L;
                    ptr1 = (char*)ptr1 - 1L;
                    ptr3 = ((uint32_t)ptr1 & v5 & v6) | (uint32_t)ptr3;
                    v5 = ~v6 & v0;
                }
                while((long)ptr0 > 0L);
            }
        }
        *param0 = (uint32_t)ptr3;
    }
    return param0;
}
