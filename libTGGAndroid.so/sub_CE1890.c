long sub_CE1890(long* param0, long param1, uint64_t* param2, char* param3, long param4, uint64_t* param5, long param6, long param7) {
    long v0;
    long* ptr0;
    long v1;
    long* ptr1;
    char* ptr2;
    long result;
    *param2 = param0;
    *param5 = param3;
    if((param7 >>> 1L) & 0x1L && (long)(long*)(param4 - param3) < 3L) {
        return 1L;
    }
    else if((param7 >>> 1L) & 0x1L) {
        *param5 = (long*)(param3 + 1L);
        *param3 = 239;
        char* ptr3 = *param5;
        *param5 = (long*)(ptr3 + 1L);
        *ptr3 = 0xbb;
        char* ptr4 = *param5;
        *param5 = (long*)(ptr4 + 1L);
        *ptr4 = 191;
    }
    int* ptr5 = *param2;
    if(param1 > (uint64_t)ptr5) {
        result = 2L;
    loc_CE194C:
        do {
            ptr5 = (uint64_t)*ptr5;
            if((uint32_t)ptr5 >>> 11 == 27 || param6 < (uint64_t)ptr5) {
                return result;
            }
            ptr2 = *param5;
            if((uint32_t)ptr5 <= 127) {
                if((long)(long*)(param4 - ptr2) < 1L) {
                    return 1L;
                }
                *param5 = (long*)(ptr2 + 1L);
                *ptr2 = (uint8_t)ptr5;
            }
            else {
                if((uint32_t)ptr5 <= 0x7ff) {
                    if((long)(long*)(param4 - ptr2) < 2L) {
                        return 1L;
                    }
                    ptr1 = ptr2 + 1L;
                    v1 = (uint64_t)(((uint32_t)ptr5 >>> 6) | 0xc0);
                }
                else {
                    long* ptr6 = (long*)(param4 - ptr2);
                    if((uint32_t)ptr5 >>> 16 == 0) {
                        if((long)ptr6 < 3L) {
                            return 1L;
                        }
                        ptr0 = ptr2 + 1L;
                        v0 = (uint64_t)(((uint32_t)ptr5 >>> 12) | 0xe0);
                    }
                    else {
                        if((long)ptr6 < 4L) {
                            return 1L;
                        }
                        *param5 = (long*)(ptr2 + 1L);
                        *ptr2 = (uint8_t)(long*)((long)ptr5 >>> 18L) | 0xf0;
                        ptr2 = *param5;
                        v0 = (uint64_t)((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr5 >>> 12L) & 0x3fL) | ((uint32_t)2 << 6));
                        ptr0 = ptr2 + 1L;
                    }
                    *param5 = ptr0;
                    *ptr2 = (uint8_t)v0;
                    ptr2 = *param5;
                    v1 = (uint64_t)((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr5 >>> 6L) & 0x3fL) | ((uint32_t)2 << 6));
                    ptr1 = ptr2 + 1L;
                }
                *param5 = ptr1;
                *ptr2 = (uint8_t)v1;
                ptr2 = *param5;
                *param5 = (long*)(ptr2 + 1L);
                *ptr2 = (uint8_t)(int*)((long)ptr5 & 0x3fL) | ((uint8_t)2 << 6);
            }
            ptr5 = (char*)*param2 + 4L;
            *param2 = (int*)((char*)*param2 + 4L);
            if(param1 > (uint64_t)ptr5) {
                goto loc_CE194C;
            }
        }
        while(param1 > (uint64_t)ptr5);
    }
    return 0L;
}
