int sub_C110B8(uint64_t* param0, char* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint8_t* ptr0;
    int v0;
    uint8_t* ptr1 = *(param0 + 23);
    uint8_t* ptr2 = *(param0 + 24);
    char* ptr3 = param1;
    uint64_t* ptr4 = param0;
    uint64_t* ptr5 = param0 + 7;
    uint8_t* ptr6 = (uint8_t*)((uint8_t*)param0 + 57L);
    if(ptr2 > ptr1) {
        *(ptr4 + 23) = ptr1 + 1L;
        v0 = (uint32_t)*ptr1;
        ++ptr1;
    }
    else {
        v0 = *(uint32_t*)(ptr4 + 6);
        if(*(uint32_t*)(ptr4 + 6) != 0) {
            long v1 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)ptr5, (uint64_t)*(uint32_t*)((char*)ptr4 + 52L), param3, param4, param5, param6, param7);
            int v2 = (uint32_t)v1;
            if(v2 == 0) {
                v0 = 0;
                *(uint32_t*)(ptr4 + 6) = 0;
                *(uint8_t*)(ptr4 + 7) = 0;
                ptr2 = ptr6;
            }
            else {
                v0 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                ptr2 = (uint64_t*)(v2 + (long)ptr4) + 7;
            }
            ptr1 = ptr6;
            *(ptr4 + 23) = ptr6;
            *(ptr4 + 24) = ptr2;
        }
    }
    if((uint32_t)*ptr3 == v0) {
        if(ptr2 > ptr1) {
            *(ptr4 + 23) = ptr1 + 1L;
            v0 = (uint32_t)*ptr1;
            ++ptr1;
        }
        else {
            v0 = *(uint32_t*)(ptr4 + 6);
            if(*(uint32_t*)(ptr4 + 6) != 0) {
                long v3 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)ptr5, (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                int v4 = (uint32_t)v3;
                if(v4 == 0) {
                    v0 = 0;
                    ptr2 = ptr6;
                    *(uint32_t*)(ptr4 + 6) = 0;
                    *(uint8_t*)(ptr4 + 7) = 0;
                }
                else {
                    v0 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                    ptr2 = (uint64_t*)(v4 + (long)ptr4) + 7;
                }
                *(ptr4 + 23) = ptr6;
                *(ptr4 + 24) = ptr2;
                ptr1 = ptr6;
            }
        }
        if((uint32_t)*(ptr3 + 1L) == v0) {
            if(ptr2 > ptr1) {
                *(ptr4 + 23) = ptr1 + 1L;
                v0 = (uint32_t)*ptr1;
                ++ptr1;
            }
            else {
                v0 = *(uint32_t*)(ptr4 + 6);
                if(*(uint32_t*)(ptr4 + 6) != 0) {
                    long v5 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)ptr5, (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                    int v6 = (uint32_t)v5;
                    if(v6 == 0) {
                        v0 = 0;
                        ptr2 = ptr6;
                        *(uint32_t*)(ptr4 + 6) = 0;
                        *(uint8_t*)(ptr4 + 7) = 0;
                    }
                    else {
                        v0 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                        ptr2 = (uint64_t*)(v6 + (long)ptr4) + 7;
                    }
                    *(ptr4 + 23) = ptr6;
                    *(ptr4 + 24) = ptr2;
                    ptr1 = ptr6;
                }
            }
            if((uint32_t)*(ptr3 + 2L) == v0) {
                if(ptr2 > ptr1) {
                    *(ptr4 + 23) = (uint64_t*)(ptr1 + 1L);
                    return (uint32_t)*(ptr3 + 3L) == (uint32_t)*ptr1;
                }
                ptr2 = (uint64_t)*(uint32_t*)(ptr4 + 6);
                if(*(uint32_t*)(ptr4 + 6) != 0) {
                    long v7 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)ptr5, (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                    int v8 = (uint32_t)v7;
                    if(v8 == 0) {
                        ptr2 = NULL;
                        ptr0 = ptr6;
                        *(uint32_t*)(ptr4 + 6) = 0;
                        *(uint8_t*)(ptr4 + 7) = 0;
                    }
                    else {
                        ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                        ptr0 = (uint64_t*)(v8 + (long)ptr4) + 7;
                    }
                    *(ptr4 + 23) = ptr6;
                    *(ptr4 + 24) = ptr0;
                }
                return (uint32_t)*(ptr3 + 3L) == (uint32_t)ptr2;
            }
        }
    }
    return 0;
}
