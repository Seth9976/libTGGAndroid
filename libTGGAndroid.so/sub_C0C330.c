int sub_C0C330(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint64_t* ptr0;
    long v0;
    uint64_t* ptr1;
    int v1;
    long v2;
    int v3;
    uint8_t* ptr2 = *(param0 + 23);
    uint64_t* ptr3 = *(param0 + 24);
    uint64_t* ptr4 = param0;
    if((uint64_t)ptr3 > (uint64_t)ptr2) {
        *(ptr4 + 23) = ptr2 + 1L;
        v3 = (uint32_t)*ptr2;
        ++ptr2;
        if((uint64_t)ptr3 <= (uint64_t)ptr2) {
            goto loc_C0C3A8;
        }
    loc_C0C408:
        *(ptr4 + 23) = ptr2 + 1L;
        v0 = (uint64_t)*ptr2;
        ++ptr2;
        if((uint64_t)ptr3 <= (uint64_t)ptr2) {
            goto loc_C0C45C;
        }
    loc_C0C420:
        *(ptr4 + 23) = ptr2 + 1L;
        v2 = (uint64_t)*ptr2;
        ++ptr2;
        if((uint64_t)ptr3 > (uint64_t)ptr2) {
            *(ptr4 + 23) = (uint64_t*)(ptr2 + 1L);
            v1 = (uint32_t)*ptr2;
        }
        else {
        loc_C0C494:
            v1 = *(uint32_t*)(ptr4 + 6);
            if(*(uint32_t*)(ptr4 + 6) != 0) {
                long v4 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                int v5 = (uint32_t)v4;
                if(v5 == 0) {
                    v1 = 0;
                    *(uint32_t*)(ptr4 + 6) = 0;
                    ptr1 = (char*)ptr4 + 57L;
                    *(uint8_t*)(ptr4 + 7) = 0;
                }
                else {
                    v1 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                    ptr1 = (uint64_t*)(v5 + (long)ptr4) + 7;
                }
                *(ptr4 + 23) = (uint64_t*)((char*)ptr4 + 57L);
                *(ptr4 + 24) = ptr1;
            }
        }
    }
    else {
        if(*(uint32_t*)(ptr4 + 6) != 0) {
            long v6 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L), param3, param4, param5, param6, param7);
            int v7 = (uint32_t)v6;
            if(v7 == 0) {
                v3 = 0;
                *(uint32_t*)(ptr4 + 6) = 0;
                ptr3 = (char*)ptr4 + 57L;
                *(uint8_t*)(ptr4 + 7) = 0;
            }
            else {
                v3 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                ptr3 = (uint64_t*)(v7 + (long)ptr4) + 7;
            }
            ptr2 = (uint8_t*)ptr4 + 57L;
            *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
            *(ptr4 + 24) = ptr3;
            if((uint64_t)ptr3 <= (uint64_t)ptr2) {
                goto loc_C0C3A8;
            }
            goto loc_C0C408;
        }
        v3 = 0;
        if((uint64_t)ptr3 > (uint64_t)ptr2) {
            goto loc_C0C408;
        }
    loc_C0C3A8:
        if(*(uint32_t*)(ptr4 + 6) != 0) {
            long v8 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
            int v9 = (uint32_t)v8;
            if(v9 == 0) {
                v0 = 0L;
                *(uint32_t*)(ptr4 + 6) = 0;
                ptr3 = (char*)ptr4 + 57L;
                *(uint8_t*)(ptr4 + 7) = 0;
            }
            else {
                v0 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                ptr3 = (uint64_t*)(v9 + (long)ptr4) + 7;
            }
            ptr2 = (uint8_t*)ptr4 + 57L;
            *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
            *(ptr4 + 24) = ptr3;
            if((uint64_t)ptr3 > (uint64_t)ptr2) {
                goto loc_C0C420;
            }
        loc_C0C45C:
            if(*(uint32_t*)(ptr4 + 6) != 0) {
                long v10 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                int v11 = (uint32_t)v10;
                if(v11 == 0) {
                    v2 = 0L;
                    *(uint32_t*)(ptr4 + 6) = 0;
                    ptr0 = (char*)ptr4 + 57L;
                    *(uint8_t*)(ptr4 + 7) = 0;
                }
                else {
                    v2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                    ptr0 = (uint64_t*)(v11 + (long)ptr4) + 7;
                }
                ptr2 = (uint8_t*)ptr4 + 57L;
                *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
                *(ptr4 + 24) = ptr0;
                if((uint64_t)ptr0 > (uint64_t)ptr2) {
                    *(ptr4 + 23) = (uint64_t*)(ptr2 + 1L);
                    v1 = (uint32_t)*ptr2;
                    long v12 = (uint64_t)(v3 * 0x1000000);
                    long v13 = (uint64_t)((uint32_t)(uint16_t)v12 | ((uint32_t)(uint8_t)v0 << 16) | ((uint32_t)(uint8_t)(v12 >>> 24L) << 24));
                    return (uint32_t)(uint8_t)v13 | ((uint32_t)(uint8_t)v2 << 8) | ((uint32_t)(uint16_t)(v13 >>> 16L) << 16) | v1;
                }
                goto loc_C0C494;
            }
            v2 = 0L;
            if((uint64_t)ptr3 > (uint64_t)ptr2) {
                *(ptr4 + 23) = (uint64_t*)(ptr2 + 1L);
                v1 = (uint32_t)*ptr2;
                long v12 = (uint64_t)(v3 * 0x1000000);
                long v13 = (uint64_t)((uint32_t)(uint16_t)v12 | ((uint32_t)(uint8_t)v0 << 16) | ((uint32_t)(uint8_t)(v12 >>> 24L) << 24));
                return (uint32_t)(uint8_t)v13 | ((uint32_t)(uint8_t)v2 << 8) | ((uint32_t)(uint16_t)(v13 >>> 16L) << 16) | v1;
            }
            goto loc_C0C494;
        }
        v0 = 0L;
        if((uint64_t)ptr3 > (uint64_t)ptr2) {
            goto loc_C0C420;
        }
        goto loc_C0C45C;
    }
    long v12 = (uint64_t)(v3 * 0x1000000);
    long v13 = (uint64_t)((uint32_t)(uint16_t)v12 | ((uint32_t)(uint8_t)v0 << 16) | ((uint32_t)(uint8_t)(v12 >>> 24L) << 24));
    return (uint32_t)(uint8_t)v13 | ((uint32_t)(uint8_t)v2 << 8) | ((uint32_t)(uint16_t)(v13 >>> 16L) << 16) | v1;
}
