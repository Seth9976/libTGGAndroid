long sub_CA3280(long param0, uint32_t param1, long param2, float* param3, long param4, long param5, int param6, int param7) {
    float* ptr0;
    uint32_t v0;
    int v1;
    int v2;
    float* ptr1 = (uint64_t)((uint32_t)param0 * param1);
    if((int)param1 >= 1) {
        long v3 = 0L;
        double* ptr2 = param1;
        float* ptr3 = param3;
        do {
            long v4 = (uint64_t)((uint32_t)param0 * 2 - 1 + (uint32_t)v3);
            long v5 = ((__ror__(v3, 62L)) & 0x3fffffffcL) | ((v3 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L);
            v0 = ptr2;
            ptr2 = (uint64_t)((uint32_t)ptr2 - 1);
            v3 = (uint64_t)((uint32_t)param0 * 2 + (uint32_t)v3);
            *ptr3 = *(float*)((((__ror__(v4, 62L)) & 0x3fffffffcL) | ((v4 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + param2) + *(float*)(param2 + v5);
            *(float*)((long)(uint32_t)ptr1 * 4L + (long)ptr3) = *(float*)(param2 + v5) - *(float*)((((__ror__(v4, 62L)) & 0x3fffffffcL) | ((v4 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + param2);
            ptr3 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr3;
        }
        while(v0 != 1);
    }
    if((uint32_t)param0 > 1) {
        if((uint32_t)param0 == 2) {
        loc_CA3414:
            if((int)param1 >= 1) {
                long v6 = ((__ror__((uint64_t)((uint32_t)param0 - 1), 62L)) & 0x3fffffffcL) | ((uint32_t)param0 < 1 ? 0xfffffffc00000000L: 0L);
                ptr1 = (long)(uint32_t)ptr1 * 4L + (long)param3;
                ptr0 = param2 + v6 + 4L;
                do {
                    float v7 = *(ptr0 - 1);
                    v0 = param1;
                    param1 = v1 - 1;
                    *(float*)((long)param3 + v6) = v7 + v7;
                    float v8 = *ptr0;
                    ptr0 = (((__ror__((uint64_t)((uint32_t)param0 * 2), 62L)) & 0x3fffffffcL) | ((param0 >>> 30L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr0;
                    *(float*)((long)ptr1 + v6) = (float)(0.0 - (v8 + v8));
                    v6 += ((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L);
                }
                while(v0 != 1);
            }
        }
        else {
            if((int)param1 >= 1) {
                int v9 = 0;
                ptr0 = NULL;
                long v10 = param4 + 4L;
                param4 = 1L;
                double* ptr4 = (double*)(param3 + 2);
                int v11 = (uint32_t)param0 * 2;
                int v12 = (uint32_t)ptr1;
                do {
                    long v13 = 0L;
                    long v14 = v9 * 4L + param2 + 8L;
                    float* ptr5 = (float*)(param2 - 12L + v11 * 4L);
                    long v15 = (long)(uint32_t)param4 * 4L + param2;
                    double* ptr6 = (double*)(v12 * 4L + (long)param3) + 1;
                    long v16 = 2L;
                    do {
                        float* ptr7 = (float*)((long)ptr4 + v13);
                        float* ptr8 = (float*)(v13 + (long)ptr6);
                        v16 += 2L;
                        *(ptr7 - 1) = *ptr5 + *(float*)(v13 + v15);
                        float v17 = *ptr5;
                        float v18 = *(float*)(v13 + v15);
                        *ptr7 = *(float*)(v13 + v14) - *(ptr5 + 1);
                        float v19 = *(float*)(v13 + v14);
                        float* ptr9 = (float*)(v10 + v13);
                        float v20 = v18 - v17;
                        v13 += 8L;
                        float v21 = *(ptr5 + 1) + v19;
                        ptr5 -= 2;
                        *(ptr8 - 1) = *(ptr9 - 1) * v20 - *ptr9 * v21;
                        *ptr8 = *(ptr9 - 1) * v21 + *ptr9 * v20;
                    }
                    while((long)(uint32_t)param0 > v16);
                    ptr0 = (uint64_t)((uint32_t)ptr0 + 1);
                    v9 = (uint32_t)param0 * 2 + v2;
                    v12 = (uint32_t)param0 + param7;
                    v11 = (uint32_t)param0 * 2 + param6;
                    ptr4 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr4;
                    param4 = (uint64_t)((uint32_t)param0 * 2 + (uint32_t)param4);
                }
                while((uint32_t)ptr0 != param1);
            }
            if((uint32_t)param0 - (((uint32_t)param0 < 0 ? (uint32_t)param0 + 1: (uint32_t)param0) & 0xfffffffe) != 1) {
                goto loc_CA3414;
            }
        }
    }
    return param0;
}
