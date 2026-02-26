long sub_CCFF9C(uint64_t* param0, uint64_t* param1, int* param2, long* param3, long param4, long param5, long param6, long param7) {
    uint32_t v0;
    long v1;
    uint32_t v2;
    uint64_t* ptr0;
    int* ptr1;
    uint32_t result;
    int* ptr1;
    uint32_t result;
    char v3;
    int v4;
    uint64_t* ptr2 = param0;
    uint64_t* ptr3 = *param0;
    int v5 = (uint32_t)param4;
    long* ptr4 = param3;
    int* ptr5 = param2;
    uint64_t* ptr6 = param1;
    if(ptr3 != 0L) {
        int* ptr7 = *(ptr3 + 3);
        if((*(ptr3 + 4) == ptr7 || *ptr7 != -1) && *(ptr3 + 4) != ptr7) {
            goto loc_CCFFF4;
        }
        else if(*(ptr3 + 4) == ptr7 || *ptr7 != -1) {
            long v6 = *(*ptr3 + 9)((long)ptr3, (long)param1, (long)param2, (long)param3, param4, param5, param6, param7);
            if((uint32_t)v6 != -1) {
                goto loc_CCFFF4;
            }
        }
        *ptr2 = NULL;
    }
    char v7 = 1;
    if(ptr6 != 0L) {
        goto loc_CD0028;
    loc_CCFFF4:
        v7 = *ptr2 == 0L;
        if(ptr6 != 0L) {
        loc_CD0028:
            int* ptr8 = *(ptr6 + 3);
            long v8 = *(ptr6 + 4) == ptr8 ? *(*ptr6 + 9)((long)ptr6): (uint64_t)*ptr8;
            v3 = (uint32_t)v8 == -1;
            ptr0 = !v3 ? ptr6: NULL;
            if(!(v3 ^ v7)) {
                result = 0;
                ptr1 = (uint64_t)(*ptr5 | 0x6);
                *ptr5 = (uint32_t)ptr1;
                return result;
            }
            goto loc_CD0060;
        }
    }
    if(v7) {
        result = 0;
        ptr1 = (uint64_t)(*ptr5 | 0x6);
        *ptr5 = (uint32_t)ptr1;
        return result;
    }
    ptr0 = NULL;
loc_CD0060:
    uint64_t* ptr9 = *ptr2;
    uint32_t* ptr10 = *(ptr9 + 3);
    if(*(ptr9 + 4) == ptr10) {
        long v9 = *(*ptr9 + 9)((long)ptr9);
        v2 = v9;
    }
    else {
        v2 = *ptr10;
    }
    long v10 = *(long*)(*ptr4 + 24L)((long)ptr4, 64L, v2);
    if(!(v10 & 0x1L)) {
        result = 0;
        ptr1 = (uint64_t)(*ptr5 | 0x4);
        *ptr5 = (uint32_t)ptr1;
        return result;
    }
    long v11 = *(long*)(*ptr4 + 104L)((long)ptr4, v2, 0L);
    uint64_t* ptr11 = *ptr2;
    uint32_t v12 = (uint32_t)(uint8_t)v11;
    long* ptr12 = *(ptr11 + 3);
    if(*(ptr11 + 4) == ptr12) {
        *(*ptr11 + 10)((long)ptr11);
    }
    else {
        *(ptr11 + 3) = (long*)((char*)ptr12 + 4L);
    }
    uint64_t* ptr13 = *ptr2;
    if(ptr13 == 0L) {
    loc_CD0178:
        v1 = 1L;
        result = v12 - 48;
        if(ptr0 == 0L) {
            goto loc_CD0158;
        }
        else {
            goto loc_CD0184;
        }
    }
loc_CD012C:
    int* ptr14 = *(ptr13 + 3);
    if((*(ptr13 + 4) == ptr14 || *ptr14 != -1) && *(ptr13 + 4) != ptr14) {
    loc_CD014C:
        v1 = *ptr2 == 0L;
        result = v12 - 48;
        if(ptr0 == 0L) {
        loc_CD0158:
            ptr1 = &g1;
        }
        else {
        loc_CD0184:
            int* ptr15 = *(ptr0 + 3);
            long v13 = *(ptr0 + 4) == ptr15 ? *(*ptr0 + 9)((long)ptr0): (uint64_t)*ptr15;
            v3 = (uint32_t)v13 == -1;
            ptr1 = !v3 ? NULL: &g1;
            ptr0 = !v3 ? ptr0: NULL;
        }
        uint64_t* ptr16 = *ptr2;
        if(v5 >= 2 && (uint32_t)ptr1 != (uint32_t)v1) {
            uint32_t* ptr17 = *(ptr16 + 3);
            if(*(ptr16 + 4) == ptr17) {
                long v14 = *(*ptr16 + 9)((long)ptr16);
                v0 = v14;
            }
            else {
                v0 = *ptr17;
            }
            long v15 = *(long*)(*ptr4 + 24L)((long)ptr4, 64L, v0);
            if(!(v15 & 0x1L)) {
                return result;
            }
            v5 = v4 - 1;
            long v16 = *(long*)(*ptr4 + 104L)((long)ptr4, v0, 0L);
            uint64_t* ptr18 = *ptr2;
            v12 = result * 10 + (uint32_t)(uint8_t)v16;
            ptr12 = *(ptr18 + 3);
            if(*(ptr18 + 4) == ptr12) {
                *(*ptr18 + 10)((long)ptr18);
                ptr13 = *ptr2;
                if(ptr13 != 0L) {
                    goto loc_CD012C;
                }
                goto loc_CD0178;
            }
            else {
                *(ptr18 + 3) = (long*)((char*)ptr12 + 4L);
                ptr13 = *ptr2;
                if(ptr13 == 0L) {
                    goto loc_CD0178;
                }
                goto loc_CD012C;
            }
        }
        if(ptr16 != 0L) {
            ptr1 = *(ptr16 + 3);
            if((*(ptr16 + 4) == ptr1 || *ptr1 != -1) && *(ptr16 + 4) != ptr1) {
                goto loc_CD027C;
            }
            else if(*(ptr16 + 4) == ptr1 || *ptr1 != -1) {
                long v17 = *(*ptr16 + 9)((long)ptr16);
                if((uint32_t)v17 != -1) {
                    goto loc_CD027C;
                }
            }
            *ptr2 = NULL;
        }
        int v18 = 1;
        if(ptr0 != 0L) {
            goto loc_CD02AC;
        loc_CD027C:
            v18 = *ptr2 == 0L;
            if(ptr0 != 0L) {
                goto loc_CD02AC;
            }
        }
        if(!(v18 & 1)) {
            return result;
        loc_CD02AC:
            int* ptr19 = *(ptr0 + 3);
            long v19 = *(ptr0 + 4) == ptr19 ? *(*ptr0 + 9)((long)ptr0): (uint64_t)*ptr19;
            if((uint32_t)v19 == -1 ^ (v18 & 1)) {
                return result;
            }
        }
        ptr1 = (uint64_t)(*ptr5 | 0x2);
        *ptr5 = (uint32_t)ptr1;
        return result;
    }
    else if(*(ptr13 + 4) == ptr14 || *ptr14 != -1) {
        long v20 = *(*ptr13 + 9)((long)ptr13);
        if((uint32_t)v20 != -1) {
            goto loc_CD014C;
        }
    }
    *ptr2 = NULL;
    goto loc_CD0178;
}
