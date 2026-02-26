uint32_t* TestSetPotentialArray(uint32_t* param0, uint32_t* param1, int* param2, uint32_t param3, int* param4, uint32_t param5, int param6, uint32_t* param7, int* param8) {
    int* ptr0;
    int* ptr1;
    long v0;
    long v1;
    long v2;
    int v3;
    int v4;
    long v5;
    int* ptr2;
    uint32_t* ptr3;
    int* ptr4 = param8;
    if((int)param3 >= 1) {
        if((uint32_t)param1 == *param2) {
        loc_6FF7C4:
            ptr0 = (uint64_t)*(ptr4 + 516);
            ptr1 = ((uint64_t)*(ptr4 + 516) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 31L) & 0x1L) ? -1: 0) << 32)) * 1032L + (long)ptr4;
            *(ptr1 + 0x101) = (uint32_t)param7;
            if((int)param5 >= 1) {
                long v6 = 0L;
                int* ptr5 = ptr1 + 0x100;
                ptr1 = param5;
                ptr3 = param0 + 0x6b6;
                ptr2 = (long)(uint32_t)ptr0 * 1032L + (long)ptr4;
                do {
                    v5 = *(param0 + 1354);
                    if((int)*(param0 + 1354) >= 1) {
                        v4 = *(int*)(v6 * 4L + (long)param4);
                        if(*(int*)(v6 * 4L + (long)param4) == *(param0 + 1692)) {
                        loc_6FF800:
                            v3 = *ptr5;
                            *ptr5 = v3 + 1;
                            *(int*)(v3 * 4L + (long)ptr2) = v4;
                        }
                        else {
                            v2 = 0L;
                            v1 = v5 - 1L;
                            param7 = ptr3;
                            while(v2 != v1) {
                                uint32_t v7 = *param7;
                                param7 += 26;
                                ++v2;
                                if(v4 != v7) {
                                    continue;
                                }
                                if(v5 <= v2) {
                                    break;
                                }
                                goto loc_6FF800;
                            }
                        }
                    }
                    ++v6;
                }
                while(v6 != ptr1);
                ptr0 = (uint64_t)*(ptr4 + 516);
            }
            *(ptr4 + 516) = (uint32_t)ptr0 + 1;
        }
        else {
            v0 = param3;
            ptr1 = &g1;
            do {
                ptr0 = ptr1;
                if(v0 == ptr1) {
                    break;
                }
                ptr1 = (char*)ptr0 + 1L;
            }
            while((uint32_t)param1 != *(int*)((long)(long*)((long)ptr0 * 4L) + (long)param2));
            if(v0 > (uint64_t)ptr0) {
                goto loc_6FF7C4;
            }
        }
    }
    if((int)param5 >= 1) {
        if((uint32_t)param1 == *param4) {
        loc_6FF8B4:
            ptr0 = (uint64_t)*(ptr4 + 516);
            ptr1 = ((uint64_t)*(ptr4 + 516) | ((uint64_t)((long*)((long)(long*)((long)ptr0 >>> 31L) & 0x1L) ? -1: 0) << 32)) * 1032L + (long)ptr4;
            *(ptr1 + 0x101) = param6;
            if((int)param3 >= 1) {
                long v8 = 0L;
                int* ptr6 = ptr1 + 0x100;
                ptr1 = param3;
                ptr3 = param0 + 0x6b6;
                ptr2 = (long)(uint32_t)ptr0 * 1032L + (long)ptr4;
                do {
                    v5 = *(param0 + 1354);
                    if((int)*(param0 + 1354) >= 1) {
                        v4 = *(int*)(v8 * 4L + (long)param2);
                        if(*(int*)(v8 * 4L + (long)param2) == *(param0 + 1692)) {
                        loc_6FF8F0:
                            v3 = *ptr6;
                            *ptr6 = v3 + 1;
                            *(int*)(v3 * 4L + (long)ptr2) = v4;
                        }
                        else {
                            v2 = 0L;
                            v1 = v5 - 1L;
                            param1 = ptr3;
                            while(v2 != v1) {
                                param3 = *param1;
                                param1 += 26;
                                ++v2;
                                if(param3 != v4) {
                                    continue;
                                }
                                if(v5 <= v2) {
                                    break;
                                }
                                goto loc_6FF8F0;
                            }
                        }
                    }
                    ++v8;
                }
                while(v8 != ptr1);
                ptr0 = (uint64_t)*(ptr4 + 516);
            }
            *(ptr4 + 516) = (uint32_t)ptr0 + 1;
        }
        else {
            v0 = param5;
            ptr1 = &g1;
            do {
                ptr0 = ptr1;
                if(v0 == ptr1) {
                    break;
                }
                ptr1 = (char*)ptr0 + 1L;
            }
            while((uint32_t)param1 != *(int*)((long)(long*)((long)ptr0 * 4L) + (long)param4));
            if(v0 > (uint64_t)ptr0) {
                goto loc_6FF8B4;
            }
        }
    }
    return param0;
}
