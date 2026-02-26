int* CardHasAllOngoing(int* param0, uint64_t* param1, int param2, int param3, uint32_t param4) {
    int v0;
    int v1;
    int* ptr0 = *((uint64_t*)(param4 * 104L + (long)param1) + 845);
    int v2 = *(ptr0 + 56);
    if(*(ptr0 + 56) != 0) {
        int v3 = 0;
        ptr0 += 104;
        if(param2 == param3) {
            do {
                if(!((*(char*)(ptr0 - 7) >>> 1) & 1) || (*(uint8_t*)(param1 + 0x33c) != 0 && *(uint32_t*)((char*)param1 + 6612L) == param3)) {
                    if((*(char*)(ptr0 - 3) >>> 2) & 1) {
                        if(v2 == 7 && *(uint8_t*)(param1 + 0x33c) != 0 && *(uint32_t*)((char*)param1 + 6612L) == param3) {
                        loc_7D4804:
                            v0 = *(param0 + 0x100);
                            *(param0 + 0x100) = v0 + 1;
                            *(int*)(v0 * 4L + (long)param0) = (v3 & 0xF) | (uint32_t)16 | ((uint32_t)(uint16_t)(param4 & 0x3FFF) << 18);
                        }
                    }
                    else if(v2 == 7) {
                        goto loc_7D4804;
                    }
                }
                v2 = *ptr0;
                ptr0 += 48;
                v3 = v1 + 1;
            }
            while(v2 != 0);
        }
        else {
            do {
                long v4 = (uint64_t)*(ptr0 - 7);
                if((v4 & 0x1L) && (!((v4 >>> 1L) & 0x1L) || (*(uint8_t*)(param1 + 0x33c) != 0 && *(uint32_t*)((char*)param1 + 6612L) == param3))) {
                    if((*(char*)(ptr0 - 3) >>> 2) & 1) {
                        if(v2 == 7 && *(uint8_t*)(param1 + 0x33c) != 0 && *(uint32_t*)((char*)param1 + 6612L) == param2) {
                        loc_7D4878:
                            v0 = *(param0 + 0x100);
                            *(param0 + 0x100) = v0 + 1;
                            *(int*)(v0 * 4L + (long)param0) = (v3 & 0xF) | (uint32_t)16 | ((uint32_t)(uint16_t)(param4 & 0x3FFF) << 18);
                        }
                    }
                    else if(v2 == 7) {
                        goto loc_7D4878;
                    }
                }
                v2 = *ptr0;
                ptr0 += 48;
                v3 = v1 + 1;
            }
            while(v2 != 0);
        }
    }
    return param0;
}
