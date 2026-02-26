long sub_CCE170(uint64_t* param0, uint64_t* param1, int* param2, long* param3, long param4, long param5, long param6, long param7) {
    uint64_t* ptr0;
    char* ptr1;
    uint32_t result;
    char* ptr1;
    uint32_t result;
    int v0;
    uint64_t* ptr2 = *param0;
    int v1 = (uint32_t)param4;
    long* ptr3 = param3;
    int* ptr4 = param2;
    uint64_t* ptr5 = param0;
    uint64_t* ptr6 = param1;
    if(ptr2 != 0L && *(ptr2 + 3) == *(ptr2 + 4)) {
        long v2 = *(*ptr2 + 9)((long)ptr2, (long)param1, (long)param2, (long)param3, param4, param5, param6, param7);
        if((uint32_t)v2 == -1) {
            ptr2 = NULL;
            *ptr5 = NULL;
            if(ptr6 == 0L) {
                goto loc_CCE20C;
            }
            else {
            loc_CCE1DC:
                if(*(ptr6 + 3) == *(ptr6 + 4)) {
                    long v3 = *(*ptr6 + 9)((long)ptr6);
                    if((uint32_t)v3 == -1) {
                        goto loc_CCE20C;
                    }
                }
                if(ptr2 != 0L) {
                    result = 0;
                    ptr1 = (uint64_t)(*ptr4 | 0x6);
                    *ptr4 = (uint32_t)ptr1;
                    return result;
                }
                goto loc_CCE214;
            }
        }
        else {
            ptr2 = *ptr5;
            goto loc_CCE1D0;
        }
    }
    else {
    loc_CCE1D0:
        if(ptr6 != 0L) {
            goto loc_CCE1DC;
        }
    loc_CCE20C:
        if(ptr2 == 0L) {
            result = 0;
            ptr1 = (uint64_t)(*ptr4 | 0x6);
            *ptr4 = (uint32_t)ptr1;
            return result;
        }
        ptr6 = NULL;
    loc_CCE214:
        uint64_t* ptr7 = *ptr5;
        char* ptr8 = *(ptr7 + 3);
        if(*(ptr7 + 4) == ptr8) {
            long v4 = *(*ptr7 + 9)((long)ptr7);
            param1 = (uint64_t)(uint32_t)v4;
            if((long*)((long)(long*)((long)param1 >>> 7L) & 0x1L)) {
                result = 0;
                ptr1 = (uint64_t)(*ptr4 | 0x4);
                *ptr4 = (uint32_t)ptr1;
                return result;
            }
        }
        else {
            param1 = (uint64_t)*ptr8;
            if((long*)((long)(long*)((long)param1 >>> 7L) & 0x1L)) {
                result = 0;
                ptr1 = (uint64_t)(*ptr4 | 0x4);
                *ptr4 = (uint32_t)ptr1;
                return result;
            }
        }
        if(!((*(long*)((uint64_t)(uint8_t)param1 * 8L + *(ptr3 + 2)) >>> 6L) & 0x1L)) {
            result = 0;
            ptr1 = (uint64_t)(*ptr4 | 0x4);
            *ptr4 = (uint32_t)ptr1;
            return result;
        }
        long v5 = *(long*)(*ptr3 + 72L)((long)ptr3, (long)param1, 0L);
        long* ptr9 = *ptr5;
        uint32_t v6 = (uint32_t)(uint8_t)v5;
        long v7 = *(ptr9 + 3);
        if(*(ptr9 + 4) == v7) {
            *(long*)(*ptr9 + 80L)((long)ptr9);
        }
        else {
            *(ptr9 + 3) = v7 + 1L;
        }
        long* ptr10 = *ptr5;
        if(ptr10 != 0L) {
        loc_CCE300:
            if(*(ptr10 + 3) == *(ptr10 + 4)) {
                long v8 = *(long*)(*ptr10 + 72L)((long)ptr10);
                if((uint32_t)v8 == -1) {
                    ptr10 = NULL;
                    *ptr5 = NULL;
                }
                else {
                    ptr10 = *ptr5;
                }
            }
        loc_CCE32C:
            do {
                result = v6 - 48;
                if(ptr6 != 0L && *(ptr6 + 3) == *(ptr6 + 4)) {
                    long v9 = *(*ptr6 + 9)((long)ptr6);
                    ptr6 = (uint32_t)v9 != -1 ? ptr6: NULL;
                }
                ptr0 = *ptr5;
                if(v1 >= 2 && ptr6 == 0L != (ptr10 == 0L)) {
                    ptr1 = *(ptr0 + 3);
                    if(*(ptr0 + 4) == ptr1) {
                        goto loc_CCE3A0;
                    }
                    else {
                        param1 = (uint64_t)*ptr1;
                    }
                    if((long*)((long)(long*)((long)param1 >>> 7L) & 0x1L)) {
                        return result;
                    loc_CCE3A0:
                        long v10 = *(*ptr0 + 9)((long)ptr0);
                        param1 = (uint64_t)(uint32_t)v10;
                        if((long*)((long)(long*)((long)param1 >>> 7L) & 0x1L)) {
                            return result;
                        }
                    }
                    if(!((*(long*)((uint64_t)(uint8_t)param1 * 8L + *(ptr3 + 2)) >>> 6L) & 0x1L)) {
                        return result;
                    }
                    v1 = v0 - 1;
                    long v11 = *(long*)(*ptr3 + 72L)((long)ptr3, (long)param1, 0L);
                    long* ptr11 = *ptr5;
                    v6 = result * 10 + (uint32_t)(uint8_t)v11;
                    long v12 = *(ptr11 + 3);
                    if(*(ptr11 + 4) == v12) {
                        *(long*)(*ptr11 + 80L)((long)ptr11);
                        ptr10 = *ptr5;
                        if(ptr10 != 0L) {
                            goto loc_CCE300;
                        }
                        goto loc_CCE32C;
                    }
                    *(ptr11 + 3) = v12 + 1L;
                    ptr10 = *ptr5;
                    if(ptr10 == 0L) {
                        goto loc_CCE32C;
                    }
                    goto loc_CCE300;
                }
            }
            while(v1 >= 2 && ptr6 == 0L != (ptr10 == 0L));
            if(ptr0 != 0L && *(ptr0 + 3) == *(ptr0 + 4)) {
                long v13 = *(*ptr0 + 9)((long)ptr0);
                if((uint32_t)v13 == -1) {
                    ptr0 = NULL;
                    *ptr5 = NULL;
                }
                else {
                    ptr0 = *ptr5;
                }
            }
            if(ptr6 == 0L) {
                goto loc_CCE470;
            }
            else if(*(ptr6 + 3) == *(ptr6 + 4)) {
                long v14 = *(*ptr6 + 9)((long)ptr6);
                if((uint32_t)v14 == -1) {
                    goto loc_CCE470;
                }
            }
            if(ptr0 == 0L) {
                return result;
            loc_CCE470:
                if(ptr0 != 0L) {
                    return result;
                }
            }
            ptr1 = (uint64_t)(*ptr4 | 0x2);
            *ptr4 = (uint32_t)ptr1;
            return result;
        }
        goto loc_CCE32C;
    }
}
