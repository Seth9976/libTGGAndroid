uint64_t* sub_BF9598(uint64_t* param0, int param1, int param2, long param3, char* param4, long param5, long param6, long param7) {
    char v0;
    char v1;
    char v2;
    long* ptr0;
    long* ptr1;
    uint64_t* ptr2 = param0;
    if(param2 < 0) {
        param0 = *ptr2((long)*(ptr2 + 1), (long)(long*)((char*)(param1 + param4) - 1L), 1L, param3, (long)param4, param5, param6, param7);
        if((uint32_t)(param1 - 1) >= 2) {
        loc_BF95D0:
            if(param1 != 3 && param1 != 4) {
                goto loc_BF965C;
            }
            else if(param1 != 3 && param2 == 0) {
                int v3 = ((uint32_t)*param4 - 0xff) * (uint32_t)*(param4 + 3L);
                int v4 = ((uint32_t)*(param4 + 2L) - 0xff) * (uint32_t)*(param4 + 3L);
                ptr1 = *ptr2;
                long* ptr3 = *(ptr2 + 1);
                v1 = (uint8_t)(((uint64_t)((uint32_t)*(param4 + 1L) * (uint32_t)*(param4 + 3L)) * 0x80808081L) >>> 39L);
                v2 = (uint8_t)(((uint32_t)((v4 * 0xffffffff80808081L) >>> 32L) + v4) >>> 7) - (uint8_t)(((uint32_t)((v4 * 0xffffffff80808081L) >>> 32L) + v4) >> 31) - 1;
                v0 = (uint8_t)(((uint32_t)((v3 * 0xffffffff80808081L) >>> 32L) + v3) >>> 7) - (uint8_t)(((uint32_t)((v3 * 0xffffffff80808081L) >>> 32L) + v3) >> 31) - 1;
                return ptr1((long)ptr3, (long)&v2, 3L);
            }
            ptr0 = (uint64_t)*(param4 + 1L);
            long v5 = (uint64_t)*param4;
            ptr1 = *ptr2;
            long* ptr4 = *(ptr2 + 1);
            v2 = *(param4 + 2L);
            v1 = (uint8_t)ptr0;
            v0 = (uint8_t)v5;
            param0 = ptr1((long)ptr4, (long)&v2, 3L);
        }
        else {
        loc_BF9634:
            if((uint32_t)param3 == 0) {
                param0 = *ptr2((long)*(ptr2 + 1), (long)param4, 1L);
            }
            else {
                long v6 = (uint64_t)*param4;
                ptr0 = *ptr2;
                long* ptr5 = *(ptr2 + 1);
                v2 = (uint8_t)v6;
                v1 = (uint8_t)v6;
                v0 = (uint8_t)v6;
                param0 = ptr0((long)ptr5, (long)&v2, 3L);
            loc_BF965C:
                if(param2 < 1) {
                    return param0;
                }
                goto loc_BF9670;
            }
        }
        if(param2 < 1) {
            return param0;
        }
    loc_BF9670:
        param0 = *ptr2((long)*(ptr2 + 1), (long)(long*)((char*)(param1 + param4) - 1L), 1L);
    }
    else if((uint32_t)(param1 - 1) < 2) {
        goto loc_BF9634;
    }
    else {
        goto loc_BF95D0;
    }
    return param0;
}
