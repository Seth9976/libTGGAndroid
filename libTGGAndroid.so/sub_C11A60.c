long sub_C11A60(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint8_t* ptr0;
    long v0;
    uint8_t* ptr1 = *(param0 + 23);
    uint8_t* ptr2 = *(param0 + 24);
    uint64_t* ptr3 = param0;
    long result = param1;
    if(ptr2 > ptr1) {
        *(ptr3 + 23) = ptr1 + 1L;
        v0 = (uint64_t)*ptr1;
        ++ptr1;
    }
    else if(*(uint32_t*)(ptr3 + 6) != 0) {
        long v1 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)(ptr3 + 7), (uint64_t)*(uint32_t*)((char*)ptr3 + 52L), param3, param4, param5, param6, param7);
        int v2 = (uint32_t)v1;
        if(v2 == 0) {
            v0 = 0L;
            *(uint32_t*)(ptr3 + 6) = 0;
            ptr2 = (uint8_t*)ptr3 + 57L;
            *(uint8_t*)(ptr3 + 7) = 0;
        }
        else {
            v0 = (uint64_t)*(uint8_t*)(ptr3 + 7);
            ptr2 = (uint64_t*)(v2 + (long)ptr3) + 7;
        }
        ptr1 = (uint8_t*)ptr3 + 57L;
        *(ptr3 + 23) = (uint8_t*)((uint8_t*)ptr3 + 57L);
        *(ptr3 + 24) = ptr2;
    }
    else {
        v0 = 0L;
    }
    long v3 = 0L;
    uint64_t* ptr4 = ptr3 + 7;
    uint8_t* ptr5 = (uint8_t*)((uint8_t*)ptr3 + 57L);
    while(1) {
        if(*(ptr3 + 2) != 0L) {
            long v4 = *(ptr3 + 4)((long)*(ptr3 + 5));
            if((uint32_t)v4 != 0 && *(uint32_t*)(ptr3 + 6) == 0) {
                *(char*)(result + v3) = 0;
                return result;
            }
            else if((uint32_t)v4 != 0) {
                ptr1 = *(ptr3 + 23);
                ptr2 = *(ptr3 + 24);
            }
            else {
                ptr0 = NULL;
                if((uint8_t)v0 == 10) {
                    *(char*)(result + v3) = 0;
                    return result;
                }
                goto loc_C11B50;
            }
        }
        ptr0 = ptr2 > ptr1 ? NULL: &g1;
        if((uint8_t)v0 == 10) {
            *(char*)(result + v3) = 0;
            return result;
        }
    loc_C11B50:
        if((uint32_t)ptr0 != 0) {
            *(char*)(result + v3) = 0;
            return result;
        }
        *(char*)(result + v3) = (uint8_t)v0;
        if(v3 == 1022L) {
            break;
        }
        ptr1 = *(ptr3 + 23);
        ptr2 = *(ptr3 + 24);
        ++v3;
        if(ptr2 <= ptr1) {
            v0 = 0L;
            if(*(uint32_t*)(ptr3 + 6) == 0) {
                continue;
            }
            long v5 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)ptr4, (uint64_t)*(uint32_t*)((char*)ptr3 + 52L));
            int v6 = (uint32_t)v5;
            if(v6 == 0) {
                v0 = 0L;
                *(uint32_t*)(ptr3 + 6) = 0;
                *(uint8_t*)(ptr3 + 7) = 0;
                ptr2 = ptr5;
            }
            else {
                v0 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                ptr2 = (uint64_t*)(v6 + (long)ptr3) + 7;
            }
            *(ptr3 + 23) = ptr5;
            *(ptr3 + 24) = ptr2;
            ptr1 = ptr5;
            continue;
        }
        *(ptr3 + 23) = ptr1 + 1L;
        v0 = (uint64_t)*ptr1;
        ++ptr1;
    }
    v3 = 0x3ffL;
    do {
        if(*(ptr3 + 2) == 0L) {
        loc_C11BF8:
            ptr0 = *(ptr3 + 23);
            ptr1 = *(ptr3 + 24);
            if(ptr0 >= ptr1) {
                break;
            }
            if(ptr0 < ptr1) {
            loc_C11BCC:
                *(ptr3 + 23) = (uint64_t*)(ptr0 + 1L);
                ptr0 = (uint64_t)*ptr0;
                continue;
            }
        loc_C11C0C:
            ptr0 = (uint64_t)*(uint32_t*)(ptr3 + 6);
            if(*(uint32_t*)(ptr3 + 6) != 0) {
                long v7 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)ptr4, (uint64_t)*(uint32_t*)((char*)ptr3 + 52L));
                int v8 = (uint32_t)v7;
                if(v8 == 0) {
                    ptr0 = NULL;
                    *(uint32_t*)(ptr3 + 6) = 0;
                    *(uint8_t*)(ptr3 + 7) = 0;
                    ptr1 = ptr5;
                }
                else {
                    ptr0 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                    ptr1 = (uint64_t*)(v8 + (long)ptr3) + 7;
                }
                *(ptr3 + 23) = ptr5;
                *(ptr3 + 24) = ptr1;
            }
        }
        else {
            long v9 = *(ptr3 + 4)((long)*(ptr3 + 5));
            if((uint32_t)v9 == 0) {
                ptr0 = *(ptr3 + 23);
                if((uint64_t)*(ptr3 + 24) > (uint64_t)ptr0) {
                    goto loc_C11BCC;
                }
                else {
                    goto loc_C11C0C;
                }
            }
            else {
                if(*(uint32_t*)(ptr3 + 6) == 0) {
                    break;
                }
                goto loc_C11BF8;
            }
        }
    }
    while((uint32_t)ptr0 != 10);
    *(char*)(result + v3) = 0;
    return result;
}
