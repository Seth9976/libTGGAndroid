// Stale decompilation - Refresh this view to re-decompile this code
long* sub_B33AB4(long* param0, long param1, long param2, long param3, long* param4, long __ch, long param6, long param7) {
    void* ptr0;
    void* __dst;
    char v0;
    char v1;
    long* result = param0;
    if(param0 != 0L) {
        long v2 = *(param4 + 3);
        long v3 = param3 - param1;
        long v4 = param2 - param1;
        size_t __n = v2 > v3 ? (size_t)(v2 - v3): 0L;
        if(v4 >= 1L) {
            long v5 = *(long*)(*result + 96L)((long)result, param1, v4, param3, (long)param4, __ch, param6, param7);
            if(v5 == v4) {
                goto loc_B33B20;
            }
        }
        else {
        loc_B33B20:
            if((long)__n < 1L) {
            loc_B33BB8:
                long v6 = param3 - param2;
                if(v6 >= 1L) {
                    long v7 = *(long*)(*result + 96L)((long)result, param2, v6);
                    if(v7 != v6) {
                        return NULL;
                    }
                }
                *(param4 + 3) = 0L;
                return result;
            }
            if(__n < 23L) {
                __dst = (long)&v0 | 0x1L;
                v0 = (uint8_t)((uint32_t)0 | ((uint32_t)(__n & 0x7fffffffL) << 1));
            }
            else {
                void* ptr1 = (void*)operator new((__n + 16L) & 0xfffffffffffffff0L, param1, param2, param3, (long)param4, __ch, param6, param7);
                __dst = ptr1;
                size_t v8 = __n;
                ptr0 = ptr1;
                *(long*)&v0 = ((__n + 16L) & 0xfffffffffffffff0L) | 0x1L;
            }
            memset2(__dst, (int)__ch, __n);
            *(char*)(__n + (long)__dst) = 0;
            long v9 = *(long*)(*result + 96L)((long)result, (long)(v0 & 1 ? ptr0: &v1), (long)__n);
            if(v0 & 1) {
                operator delete((long)ptr0);
            }
            if(__n == v9) {
                goto loc_B33BB8;
            }
        }
        result = NULL;
    }
    return result;
}
