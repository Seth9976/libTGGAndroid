int* TestSet(int* param0, int param1, int param2, int* param3, uint32_t param4, int param5, int param6, int* param7) {
    int v0;
    int v1;
    int* ptr0;
    int* ptr1;
    if(param1 == param2) {
        ptr1 = (uint64_t)*(param7 + 516);
        ptr0 = ((uint64_t)*(param7 + 516) | ((uint64_t)((long*)((long)(long*)((long)ptr1 >>> 31L) & 0x1L) ? -1: 0) << 32)) * 1032L + (long)param7;
        *(ptr0 + 0x101) = param6;
        if((int)param4 >= 1) {
            long v2 = 0L;
            int* ptr2 = (int*)((long)(uint32_t)ptr1 * 1032L + (long)param7);
            do {
                long v3 = (uint64_t)*(param0 + 1354);
                if(*(param0 + 1354) >= 1) {
                    int v4 = *(int*)(v2 * 4L + (long)param3);
                    if(*(int*)(v2 * 4L + (long)param3) == *(param0 + 1692)) {
                    loc_6FF528:
                        v1 = *(ptr0 + 0x100);
                        *(ptr0 + 0x100) = v1 + 1;
                        *(int*)(v1 * 4L + (long)ptr2) = v4;
                    }
                    else {
                        long v5 = 0L;
                        int* ptr3 = param0 + 0x6b6;
                        while(v3 - 1L != v5) {
                            param6 = *ptr3;
                            ptr3 += 26;
                            ++v5;
                            if(param6 != v4) {
                                continue;
                            }
                            if(v3 <= v5) {
                                break;
                            }
                            goto loc_6FF528;
                        }
                    }
                }
                ++v2;
            }
            while(param4 != v2);
            ptr1 = (uint64_t)*(param7 + 516);
        }
        *(param7 + 516) = (uint32_t)ptr1 + 1;
    }
    if((int)param4 >= 1) {
        if(*param3 == param1) {
        loc_6FF5DC:
            long v6 = (uint64_t)*(param0 + 1354);
            if(*(param0 + 1354) >= 1) {
                if(*(param0 + 1692) == param2) {
                loc_6FF62C:
                    int* ptr4 = (int*)(*(param7 + 516) * 1032L + (long)param7);
                    v1 = *(ptr4 + 0x100);
                    *(ptr4 + 0x101) = param5;
                    *(ptr4 + 0x100) = v1 + 1;
                    *(int*)((long)(long*)((long)v1 * 4L) + (long)ptr4) = param2;
                    ++*(param7 + 516);
                }
                else {
                    ptr1 = param0 + 0x6b6;
                    int* ptr5 = (int*)&g1;
                    do {
                        ptr0 = ptr5;
                        if(v6 == ptr5) {
                            break;
                        }
                        v0 = *ptr1;
                        ptr1 += 26;
                        ptr5 = (char*)ptr0 + 1L;
                    }
                    while(param2 != v0);
                    if(v6 > (uint64_t)ptr0) {
                        goto loc_6FF62C;
                    }
                }
            }
        }
        else {
            ptr0 = &g1;
            do {
                ptr1 = ptr0;
                if(param4 == ptr0) {
                    break;
                }
                ptr0 = (char*)ptr1 + 1L;
            }
            while(*(int*)((long)(long*)((long)ptr1 * 4L) + (long)param3) != param1);
            if(param4 > (uint64_t)ptr1) {
                goto loc_6FF5DC;
            }
        }
    }
    return param0;
}
