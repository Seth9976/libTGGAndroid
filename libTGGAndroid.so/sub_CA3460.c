long sub_CA3460(int param0, long param1, uint32_t param2, float* param3, float* param4, long param5, long param6) {
    int v0;
    float* ptr0;
    int v1;
    if((int)param2 >= 1) {
        int v2 = (uint32_t)param1 * param2;
        long v3 = (uint64_t)((uint32_t)param1 * 2);
        int v4 = v2 * 2;
        long v5 = (uint64_t)((uint32_t)param1 + (uint32_t)v3);
        long v6 = v2;
        long v7 = v4;
        double* ptr1 = param2;
        float* ptr2 = param4;
        float* ptr3 = param3;
        do {
            ptr0 = (long)(float*)(((__ror__(v3, 62L)) & 0x3fffffffcL) | ((v3 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr3;
            float v8 = *ptr3;
            float v9 = *(ptr0 - 1);
            ptr3 = (((__ror__(v5, 62L)) & 0x3fffffffcL) | ((v5 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr3;
            v0 = (uint32_t)ptr1;
            ptr1 = (uint64_t)((uint32_t)ptr1 - 1);
            *ptr2 = v8 + v9 * 2.0;
            float v10 = v8 - v9;
            float v11 = *ptr0 * 1.7320508 + v10;
            *(float*)(v6 * 4L + (long)ptr2) = v10 - *ptr0 * 1.7320508;
            *(float*)(v7 * 4L + (long)ptr2) = v11;
            ptr2 = (((__ror__(param1, 62L)) & 0x3fffffffcL) | ((param1 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr2;
        }
        while(v0 != 1);
        if((uint32_t)param1 != 1 && (int)param2 >= 1) {
            float* ptr4 = param4 + 2;
            int v12 = 0;
            ptr2 = ptr4;
            while(1) {
                if((uint32_t)param1 >= 3) {
                    param4 = NULL;
                    ptr3 = v2 * 4L + (long)ptr4;
                    ptr0 = v4 * 4L + (long)ptr4;
                    double* ptr5 = (double*)((long)(uint32_t)v3 * 4L + (long)param3);
                    double* ptr6 = (double*)(v12 * 4L + (long)param3) + 1;
                    long v13 = -12L;
                    long v14 = 2L;
                    do {
                        float* ptr7 = (float*)((long)param4 + (long)ptr5);
                        float* ptr8 = (float*)((long)ptr5 + v13);
                        float* ptr9 = (float*)((long)param4 + (long)ptr6);
                        float v15 = *(ptr9 - 1);
                        float* ptr10 = (float*)((long)param4 + (long)ptr2);
                        v14 += 2L;
                        float v16 = *ptr8 + *(ptr7 + 1);
                        *(ptr10 - 1) = v15 + (*ptr8 + *(ptr7 + 1));
                        float v17 = *(ptr7 + 2);
                        float v18 = *(ptr8 + 1);
                        float v19 = *ptr9;
                        float v20 = v15 - v16 * 0.5;
                        float* ptr11 = (float*)((long)param4 + param5);
                        *ptr10 = v19 + (v17 - v18);
                        float v21 = v19 + (v18 - v17) * 0.5;
                        float* ptr12 = (float*)((long)param4 + (long)ptr3);
                        float* ptr13 = (float*)((long)param4 + param6);
                        float v22 = (*(ptr7 + 1) - *ptr8) * 0.8660254;
                        float v23 = (*(ptr8 + 1) + *(ptr7 + 2)) * 0.8660254;
                        float v24 = v22 + v21;
                        *(ptr12 - 1) = (v20 - v23) * *ptr11 - *(ptr11 + 1) * v24;
                        float v25 = v21 - v22;
                        float v26 = v23 + v20;
                        float* ptr14 = (float*)((long)param4 + (long)ptr0);
                        *ptr12 = *ptr11 * v24 + *(ptr11 + 1) * (v20 - v23);
                        param4 += 2;
                        v13 -= 8L;
                        *(ptr14 - 1) = *ptr13 * v26 - *(ptr13 + 1) * v25;
                        *ptr14 = *ptr13 * v25 + *(ptr13 + 1) * v26;
                    }
                    while((long)(uint32_t)param1 > v14);
                }
                v3 = (uint64_t)((uint32_t)v3 + (uint32_t)v5);
                v12 = (uint32_t)v5 + (uint32_t)v6;
                v4 = (uint32_t)param1 + v1;
                v2 = (uint32_t)param1 + param0;
                ptr2 = (((__ror__(param1, 62L)) & 0x3fffffffcL) | ((param1 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr2;
                if((uint32_t)v7 + 1 == param2) {
                    return param1;
                }
            }
        }
    }
    return param1;
}
