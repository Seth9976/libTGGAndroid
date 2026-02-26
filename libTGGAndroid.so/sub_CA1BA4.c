long sub_CA1BA4(long param0, uint32_t param1, float* param2, float* param3, long param4) {
    uint32_t v0;
    long v1;
    int v2;
    int v3;
    int v4;
    int v5;
    if((int)param1 >= 1) {
        long v6 = 0L;
        v1 = (long)((uint32_t)param0 * param1) * 4L;
        long v7 = param1;
        float* ptr0 = param2;
        do {
            double* ptr1 = (uint64_t)((uint32_t)param0 * 2 - 1 + (uint32_t)v6);
            v0 = v7;
            v7 = (uint64_t)((uint32_t)v7 - 1);
            *(float*)((long)(uint32_t)v6 * 4L + (long)param3) = *(float*)(v1 + (long)ptr0) + *ptr0;
            float v8 = *ptr0;
            float v9 = *(float*)(v1 + (long)ptr0);
            ptr0 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr0;
            v6 = (uint64_t)((uint32_t)param0 * 2 + (uint32_t)v6);
            *(float*)((long)(uint32_t)ptr1 * 4L + (long)param3) = v8 - v9;
        }
        while(v0 != 1);
    }
    if((uint32_t)param0 > 1) {
        if((uint32_t)param0 == 2) {
        loc_CA1D14:
            if((int)param1 >= 1) {
                long v10 = (long)((param1 + 1) * (uint32_t)param0 - 1);
                do {
                    float v11 = *(float*)(v10 * 4L + (long)param2);
                    float* ptr2 = (float*)((((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param3);
                    param2 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param2;
                    v0 = param1;
                    param1 = v5 - 1;
                    *ptr2 = (float)(0.0 - v11);
                    param3 = (((__ror__((uint64_t)((uint32_t)param0 * 2), 62L)) & 0x3fffffffcL) | ((param0 >>> 30L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param3;
                    *(ptr2 - 1) = *(param2 - 1);
                }
                while(v0 != 1);
            }
        }
        else {
            if((int)param1 >= 1) {
                int v12 = 0;
                v1 = param4 + 4L;
                double* ptr3 = (double*)((long)((uint32_t)param0 * param1) * 4L + (long)param2) + 1;
                int v13 = 1;
                float* ptr4 = param2;
                param4 = (uint64_t)((uint32_t)param0 * 2);
                do {
                    long v14 = 0L;
                    float* ptr5 = (float*)(v13 * 4L + (long)param3);
                    float* ptr6 = (float*)((long)(param3 - 3) + (long)(uint32_t)param4 * 4L);
                    float* ptr7 = (float*)((double*)(v12 * 4L + (long)param3) + 1);
                    long v15 = 2L;
                    do {
                        float* ptr8 = (float*)(v14 + v1);
                        float* ptr9 = (float*)(v14 + (long)ptr3);
                        float v16 = *(ptr8 - 1);
                        float v17 = *ptr8;
                        float v18 = *(ptr9 - 1);
                        float v19 = *ptr9;
                        float* ptr10 = (float*)(v14 + (long)ptr4);
                        v15 += 2L;
                        *(float*)(v14 + (long)ptr7) = v19 * v16 - v17 * v18 + *(ptr10 + 2);
                        float v20 = v18 * v16 + v19 * v17;
                        *(ptr6 + 1) = v19 * v16 - v17 * v18 - *(ptr10 + 2);
                        *(float*)(v14 + (long)ptr5) = *(ptr10 + 1) + v20;
                        v14 += 8L;
                        *ptr6 = *(ptr10 + 1) - v20;
                        ptr6 -= 2;
                    }
                    while((long)(uint32_t)param0 > v15);
                    v12 = (uint32_t)param0 * 2 + v2;
                    param4 = (uint64_t)((uint32_t)param0 * 2 + (uint32_t)param4);
                    v13 = (uint32_t)param0 * 2 + v3;
                    ptr3 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr3;
                    ptr4 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr4;
                }
                while(v4 + 1 != param1);
            }
            if((uint32_t)param0 - (((uint32_t)param0 < 0 ? (uint32_t)param0 + 1: (uint32_t)param0) & 0xfffffffe) != 1) {
                goto loc_CA1D14;
            }
        }
    }
    return param0;
}
