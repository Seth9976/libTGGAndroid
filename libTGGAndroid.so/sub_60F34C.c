int sub_60F34C(uint64_t* param0, int param1, float* param2, long param3, float param4) {
    __int128 v0;
    __int128 v1;
    int result;
    float v2;
    float v3;
    float v4;
    float v5;
    double* ptr0;
    int v6;
    float* ptr1;
    float* ptr2;
    float* ptr3;
    long v7;
    float* ptr4;
    float v8;
    int v9;
    float v10;
    float v11;
    float v12;
    float v13;
    float v14;
    long v15 = (uint64_t)*(uint32_t*)(param0 + 27);
    if(*(uint32_t*)(param0 + 27) >= 1) {
        double* ptr5 = *(param0 + 26);
        if((uint32_t)v15 == 1) {
            ptr4 = NULL;
            v7 = 0L;
            goto loc_60F3C0;
        }
        else {
            ptr4 = v15 & 0xfffffffeL;
            ptr3 = NULL;
            ptr2 = (char*)ptr5 + 212L;
            ptr1 = ptr4;
            do {
                float v16 = *(ptr2 - 28);
                float v17 = *ptr2;
                ptr2 += 56;
                v6 = (int)v16 > 0 ? v9 | 1: v9;
                ptr0 = (char*)ptr1 - 2L;
                ptr1 = (char*)ptr1 - 2L;
                ptr3 = (uint64_t)((uint32_t)ptr3 | (int)v17 > 0);
            }
            while(ptr0 != 0L);
            v7 = (uint64_t)((uint32_t)ptr3 | v6);
            if(v15 != ptr4) {
            loc_60F3C0:
                float* ptr6 = (float*)((char*)((long)(double*)((long)ptr4 * 112L) + (long)ptr5) + 100L);
                ptr4 = v15 - (long)ptr4;
                do {
                    float v18 = *ptr6;
                    ptr6 += 28;
                    ptr0 = (char*)ptr4 - 1L;
                    ptr4 = (char*)ptr4 - 1L;
                    v7 = (uint64_t)((uint32_t)v7 | (int)v18 > 0);
                }
                while(ptr0 != 0L);
            }
        }
        if((uint32_t)v15 >= 1) {
            ptr4 = *(param0 + 26);
            char v19 = (uint32_t)v15 == 1;
            if(v7 & 0x1L) {
                if(v19) {
                    ptr3 = NULL;
                    v5 = NaN;
                    goto loc_60F578;
                }
                else {
                    ptr3 = v15 & 0xfffffffeL;
                    ptr2 = ptr4 + 48;
                    float v20 = (float)NaN;
                    ptr1 = ptr3;
                    v4 = NaN;
                    do {
                        v3 = *(ptr2 - 23);
                        float v21 = *(ptr2 + 5);
                        v20 = v3 ? (int)v20 >= (int)v10 ? v20: v10: v14;
                        v4 = v21 != 0 ? (int)v11 > (int)v4 ? v11: v4: v12;
                        ptr0 = (char*)ptr1 - 2L;
                        ptr1 = (char*)ptr1 - 2L;
                        ptr2 += 56;
                    }
                    while(ptr0 != 0L);
                    v5 = (int)v20 > (int)v4 ? v20: v4;
                    if(v15 != ptr3) {
                    loc_60F578:
                        ptr4 = (double*)((long)(double*)((long)ptr3 * 112L) + (long)ptr4) + 10;
                        ptr3 = v15 - (long)ptr3;
                        do {
                            if(*(ptr4 + 5) != 0) {
                                v5 = (int)*ptr4 > (int)v8 ? *ptr4: v8;
                            }
                            ptr0 = (char*)ptr3 - 1L;
                            ptr3 = (char*)ptr3 - 1L;
                            ptr4 += 28;
                        }
                        while(ptr0 != 0L);
                    }
                }
            }
            else if(v19) {
                ptr3 = NULL;
                goto loc_60F4D0;
            }
            else {
                ptr3 = v15 & 0xfffffffeL;
                ptr2 = ptr4 + 48;
                ptr1 = ptr3;
                do {
                    v3 = *(ptr2 - 28);
                    float v22 = *ptr2;
                    ptr2 += 56;
                    v2 = (int)v13 >= (int)v3 ? v13: v3;
                    v4 = (int)v12 >= (int)v22 ? v12: v22;
                    ptr0 = (char*)ptr1 - 2L;
                    ptr1 = (char*)ptr1 - 2L;
                }
                while(ptr0 != 0L);
                v5 = (int)v2 > (int)v4 ? v2: v4;
                if(v15 != ptr3) {
                loc_60F4D0:
                    ptr4 = (double*)((long)(double*)((long)ptr3 * 112L) + (long)ptr4) + 10;
                    ptr3 = v15 - (long)ptr3;
                    do {
                        ptr2 = (uint64_t)*ptr4;
                        ptr4 += 28;
                        v5 = (uint32_t)ptr2 > (int)v8 ? (float)ptr2: v8;
                        ptr0 = (char*)ptr3 - 1L;
                        ptr3 = (char*)ptr3 - 1L;
                    }
                    while(ptr0 != 0L);
                }
            }
            if((uint32_t)v15 >= 1) {
                ptr4 = *(param0 + 26);
                ptr3 = param1;
                if(v7 & 0x1L) {
                    v7 = 0L;
                    ptr3 = (char*)((long)ptr3 * 4L) + 44L;
                    result = -1;
                    v1 = 0xC479C000X;
                    do {
                        if(*(ptr4 + 25) != 0 && (int)*(ptr4 + 20) >= (int)v5) {
                            v0 = (unsigned __int128)*(float*)((long)ptr4 + (long)ptr3);
                            if((uint32_t)v1 < *(float*)((long)ptr4 + (long)ptr3)) {
                                result = (uint32_t)v7;
                                v1 = v0;
                            }
                        }
                        ++v7;
                        ptr4 += 28;
                    }
                    while(v15 != v7);
                }
                else {
                    v7 = 0L;
                    ptr4 += 11;
                    result = -1;
                    v1 = 0xC479C000X;
                    do {
                        if((int)*(ptr4 + 9) >= (int)v5) {
                            v0 = (unsigned __int128)*(float*)((long)(double*)((long)ptr3 * 4L) + (long)ptr4);
                            if((uint32_t)v1 < *(float*)((long)(double*)((long)ptr3 * 4L) + (long)ptr4)) {
                                result = (uint32_t)v7;
                                v1 = v0;
                            }
                        }
                        ++v7;
                        ptr4 += 28;
                    }
                    while(v15 != v7);
                }
                *param2 = v5;
                return result;
            }
            *param2 = v5;
            return -1;
        }
    }
    *param2 = (float)NaN;
    return -1;
}
