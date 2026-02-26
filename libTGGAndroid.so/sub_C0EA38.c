int sub_C0EA38(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long v0;
    uint64_t* ptr0;
    long v1;
    long v2;
    uint8_t* ptr1 = *(param0 + 23);
    uint64_t* ptr2 = *(param0 + 24);
    uint64_t* ptr3 = param0;
    if((uint64_t)ptr2 <= (uint64_t)ptr1) {
        if(*(uint32_t*)(ptr3 + 6) != 0) {
            long v3 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)(ptr3 + 7), (uint64_t)*(uint32_t*)((char*)ptr3 + 52L), param3, param4, param5, param6, param7);
            int v4 = (uint32_t)v3;
            if(v4 == 0) {
                v0 = 0L;
                *(uint32_t*)(ptr3 + 6) = 0;
                ptr2 = (char*)ptr3 + 57L;
                *(uint8_t*)(ptr3 + 7) = 0;
            }
            else {
                v0 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                ptr2 = (uint64_t*)(v4 + (long)ptr3) + 7;
            }
            ptr1 = (uint8_t*)ptr3 + 57L;
            *(ptr3 + 23) = (uint8_t*)((uint8_t*)ptr3 + 57L);
            *(ptr3 + 24) = ptr2;
            if((uint64_t)ptr2 <= (uint64_t)ptr1) {
                goto loc_C0EAB0;
            }
            else {
            loc_C0EB10:
                *(ptr3 + 23) = ptr1 + 1L;
                v1 = (uint64_t)*ptr1;
                ++ptr1;
                if((uint64_t)ptr2 > (uint64_t)ptr1) {
                loc_C0EB28:
                    *(ptr3 + 23) = ptr1 + 1L;
                    v2 = (uint64_t)*ptr1;
                    ++ptr1;
                    if((uint64_t)ptr2 <= (uint64_t)ptr1) {
                    loc_C0EB9C:
                        long v5 = (uint64_t)*(uint32_t*)(ptr3 + 6);
                        if(*(uint32_t*)(ptr3 + 6) != 0) {
                            long v6 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)(ptr3 + 7), (uint64_t)*(uint32_t*)((char*)ptr3 + 52L));
                            int v7 = (uint32_t)v6;
                            if(v7 == 0) {
                                v5 = 0L;
                                *(uint32_t*)(ptr3 + 6) = 0;
                                ptr1 = (uint8_t*)ptr3 + 57L;
                                *(uint8_t*)(ptr3 + 7) = 0;
                            }
                            else {
                                v5 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                                ptr1 = (uint64_t*)(v7 + (long)ptr3) + 7;
                            }
                            *(ptr3 + 23) = (uint64_t*)((char*)ptr3 + 57L);
                            *(ptr3 + 24) = ptr1;
                        }
                        return (uint32_t)((uint32_t)((uint16_t)(uint8_t)v0 | ((uint16_t)(uint8_t)v1 << 8)) | ((uint32_t)(uint8_t)v2 << 16)) | ((uint32_t)(uint8_t)v5 << 24);
                    }
                    *(ptr3 + 23) = (uint64_t*)(ptr1 + 1L);
                    return (uint32_t)((uint32_t)((uint16_t)(uint8_t)v0 | ((uint16_t)(uint8_t)v1 << 8)) | ((uint32_t)(uint8_t)v2 << 16)) | ((uint32_t)*ptr1 << 24);
                }
                goto loc_C0EB64;
            }
        }
        v0 = 0L;
        if((uint64_t)ptr2 > (uint64_t)ptr1) {
            goto loc_C0EB10;
        }
    loc_C0EAB0:
        if(*(uint32_t*)(ptr3 + 6) != 0) {
            long v8 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)(ptr3 + 7), (uint64_t)*(uint32_t*)((char*)ptr3 + 52L));
            int v9 = (uint32_t)v8;
            if(v9 == 0) {
                v1 = 0L;
                *(uint32_t*)(ptr3 + 6) = 0;
                ptr2 = (char*)ptr3 + 57L;
                *(uint8_t*)(ptr3 + 7) = 0;
            }
            else {
                v1 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                ptr2 = (uint64_t*)(v9 + (long)ptr3) + 7;
            }
            ptr1 = (uint8_t*)ptr3 + 57L;
            *(ptr3 + 23) = (uint8_t*)((uint8_t*)ptr3 + 57L);
            *(ptr3 + 24) = ptr2;
            if((uint64_t)ptr2 > (uint64_t)ptr1) {
                goto loc_C0EB28;
            }
        loc_C0EB64:
            if(*(uint32_t*)(ptr3 + 6) != 0) {
                long v10 = *(ptr3 + 2)((long)*(ptr3 + 5), (long)(ptr3 + 7), (uint64_t)*(uint32_t*)((char*)ptr3 + 52L));
                int v11 = (uint32_t)v10;
                if(v11 == 0) {
                    v2 = 0L;
                    *(uint32_t*)(ptr3 + 6) = 0;
                    ptr0 = (char*)ptr3 + 57L;
                    *(uint8_t*)(ptr3 + 7) = 0;
                }
                else {
                    v2 = (uint64_t)*(uint8_t*)(ptr3 + 7);
                    ptr0 = (uint64_t*)(v11 + (long)ptr3) + 7;
                }
                ptr1 = (uint8_t*)ptr3 + 57L;
                *(ptr3 + 23) = (uint8_t*)((uint8_t*)ptr3 + 57L);
                *(ptr3 + 24) = ptr0;
                if((uint64_t)ptr0 > (uint64_t)ptr1) {
                    *(ptr3 + 23) = (uint64_t*)(ptr1 + 1L);
                    return (uint32_t)((uint32_t)((uint16_t)(uint8_t)v0 | ((uint16_t)(uint8_t)v1 << 8)) | ((uint32_t)(uint8_t)v2 << 16)) | ((uint32_t)*ptr1 << 24);
                }
                goto loc_C0EB9C;
            }
            v2 = 0L;
            if((uint64_t)ptr2 > (uint64_t)ptr1) {
                *(ptr3 + 23) = (uint64_t*)(ptr1 + 1L);
                return (uint32_t)((uint32_t)((uint16_t)(uint8_t)v0 | ((uint16_t)(uint8_t)v1 << 8)) | ((uint32_t)(uint8_t)v2 << 16)) | ((uint32_t)*ptr1 << 24);
            }
            goto loc_C0EB9C;
        }
        v1 = 0L;
        if((uint64_t)ptr2 > (uint64_t)ptr1) {
            goto loc_C0EB28;
        }
        goto loc_C0EB64;
    }
    *(ptr3 + 23) = ptr1 + 1L;
    v0 = (uint64_t)*ptr1;
    ++ptr1;
    if((uint64_t)ptr2 <= (uint64_t)ptr1) {
        goto loc_C0EAB0;
    }
    else {
        goto loc_C0EB10;
    }
}
