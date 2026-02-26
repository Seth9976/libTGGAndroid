uint64_t* sub_C11C80(uint64_t* param0, char* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint64_t* ptr0;
    int v0;
    uint64_t* ptr1;
    int v1;
    uint8_t* ptr2 = *(param0 + 23);
    long* ptr3 = *(param0 + 24);
    uint64_t* ptr4 = param0;
    if((uint64_t)ptr3 > (uint64_t)ptr2) {
        *(ptr4 + 23) = ptr2 + 1L;
        v1 = (uint32_t)*ptr2;
        ++ptr2;
        if((uint64_t)ptr3 <= (uint64_t)ptr2) {
            goto loc_C11CF4;
        }
        else {
        loc_C11D48:
            *(ptr4 + 23) = (uint64_t*)(ptr2 + 1L);
            v0 = (uint32_t)*ptr2;
        }
    }
    else {
        if(*(uint32_t*)(ptr4 + 6) != 0) {
            param0 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L), param3, param4, param5, param6, param7);
            if((uint32_t)param0 == 0) {
                v1 = 0;
                *(uint32_t*)(ptr4 + 6) = 0;
                ptr1 = (char*)ptr4 + 57L;
                *(uint8_t*)(ptr4 + 7) = 0;
            }
            else {
                v1 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                ptr1 = (uint64_t*)((long)(uint32_t)param0 + (long)ptr4) + 7;
            }
            ptr2 = (uint8_t*)ptr4 + 57L;
            *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
            *(ptr4 + 24) = ptr1;
            if((uint64_t)ptr1 <= (uint64_t)ptr2) {
                goto loc_C11CF4;
            }
            goto loc_C11D48;
        }
        v1 = 0;
        if((uint64_t)ptr3 > (uint64_t)ptr2) {
            goto loc_C11D48;
        }
    loc_C11CF4:
        v0 = *(uint32_t*)(ptr4 + 6);
        if(*(uint32_t*)(ptr4 + 6) != 0) {
            param0 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
            if((uint32_t)param0 == 0) {
                v0 = 0;
                *(uint32_t*)(ptr4 + 6) = 0;
                ptr0 = (char*)ptr4 + 57L;
                *(uint8_t*)(ptr4 + 7) = 0;
            }
            else {
                v0 = (uint32_t)*(uint8_t*)(ptr4 + 7);
                ptr0 = (uint64_t*)((long)(uint32_t)param0 + (long)ptr4) + 7;
            }
            *(ptr4 + 23) = (uint64_t*)((char*)ptr4 + 57L);
            *(ptr4 + 24) = ptr0;
        }
    }
    uint32_t v2 = (uint32_t)(((__ror__((uint32_t)(uint8_t)v1 | ((uint32_t)(uint8_t)v0 << 8) | ((uint32_t)(uint16_t)(v1 >>> 16) << 16), 5)) & 0x1f) * 0xff);
    *param1 = (uint8_t)((((((__ror__(v0, 2)) & 0x1f) * 0xff - (uint32_t)(((uint64_t)(((__ror__(v0, 2)) & 0x1f) * 0xff) * 138547333L) >>> 32L)) >>> 1) + (uint32_t)(((uint64_t)(((__ror__(v0, 2)) & 0x1f) * 0xff) * 138547333L) >>> 32L)) >>> 4);
    *(param1 + 1L) = (uint8_t)((((v2 - (uint32_t)((v2 * 138547333L) >>> 32L)) >>> 1) + (uint32_t)((v2 * 138547333L) >>> 32L)) >>> 4);
    *(param1 + 2L) = (uint8_t)(((((v1 & 0x1f) * 0xff - (uint32_t)(((uint64_t)((v1 & 0x1f) * 0xff) * 138547333L) >>> 32L)) >>> 1) + (uint32_t)(((uint64_t)((v1 & 0x1f) * 0xff) * 138547333L) >>> 32L)) >>> 4);
    return param0;
}
