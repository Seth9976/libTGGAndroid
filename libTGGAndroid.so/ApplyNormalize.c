long ApplyNormalize(long param0, uint32_t param1) {
    double* ptr0;
    float v0;
    float v1;
    float v2;
    if((int)param1 >= 1) {
        float* ptr1 = (float*)(param0 + 8L);
        float* ptr2 = param1;
        do {
            float v3 = *ptr1;
            ptr1 += 3;
            v0 = v1 <= v3 ? v1: v3;
            ptr0 = (char*)ptr2 - 1L;
            ptr2 = (char*)ptr2 - 1L;
        }
        while(ptr0 != 0L);
        float v4 = v2 - v0;
        if(param1 < 3) {
            ptr1 = NULL;
            goto loc_825E20;
        }
        else {
            ptr1 = (long)param1 & 0xfffffffeL;
            ptr2 = param0 + 20L;
            float* ptr3 = ptr1;
            do {
                float v5 = (*ptr2 - v0) / v4;
                float v6 = (*(ptr2 - 3) - v0) / v4;
                *ptr2 = v5 > 0.0 ? v5 < 1.0: 1 ? v5 > 0.0 ? v5 + v5 + -1.0: -1.0: 1.0;
                ptr0 = (char*)ptr3 - 2L;
                ptr3 = (char*)ptr3 - 2L;
                *(ptr2 - 3) = v6 > 0.0 ? v6 < 1.0: 1 ? v6 > 0.0 ? v6 + v6 + -1.0: -1.0: 1.0;
                ptr2 += 6;
            }
            while(ptr0 != 0L);
            if(param1 != ptr1) {
            loc_825E20:
                float* ptr4 = (float*)((long)param1 - (long)ptr1);
                ptr1 = (double*)((long)(double*)((long)ptr1 * 12L) + param0) + 1;
                do {
                    float v7 = (*ptr1 - v0) / v4;
                    float v8 = (float)-1.0;
                    if(v7 > 0.0) {
                        v8 = 1.0;
                        if(v7 < 1.0) {
                            v8 = v7 + v7 + -1.0;
                        }
                    }
                    ptr0 = (char*)ptr4 - 1L;
                    ptr4 = (char*)ptr4 - 1L;
                    *ptr1 = v8;
                    ptr1 += 3;
                }
                while(ptr0 != 0L);
            }
        }
    }
    return param0;
}
