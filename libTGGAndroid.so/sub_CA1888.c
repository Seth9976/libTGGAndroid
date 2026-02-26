long sub_CA1888(long param0, uint32_t param1, float* param2, float* param3, long param4, long param5, long param6) {
    float v0;
    uint32_t v1;
    float* ptr0;
    double* ptr1;
    long v2;
    int v3;
    int v4;
    int v5;
    int v6 = (uint32_t)param0 * param1;
    if((int)param1 >= 1) {
        v2 = 0L;
        ptr1 = param1;
        ptr0 = param2;
        do {
            float v7 = *(float*)((long)(float*)(v6 * 3 * 4L) + (long)ptr0) + *(float*)((long)(float*)(v6 * 4L) + (long)ptr0);
            v1 = ptr1;
            ptr1 = (uint64_t)((uint32_t)ptr1 - 1);
            float v8 = *(float*)((long)(double*)(((uint64_t)(v6 * 2) | ((uint64_t)((v6 >>> 30) & 1 ? -1: 0) << 32)) * 4L) + (long)ptr0) + *ptr0;
            *(float*)((long)(uint32_t)v2 * 4L + (long)param3) = v8 + v7;
            *(float*)((long)((uint32_t)param0 * 4 - 1 + (uint32_t)v2) * 4L + (long)param3) = v8 - v7;
            *(float*)((long)((uint32_t)param0 * 2 - 1 + (uint32_t)v2) * 4L + (long)param3) = *ptr0 - *(float*)((long)(double*)(((uint64_t)(v6 * 2) | ((uint64_t)((v6 >>> 30) & 1 ? -1: 0) << 32)) * 4L) + (long)ptr0);
            float v9 = *(float*)((long)(float*)(v6 * 3 * 4L) + (long)ptr0);
            float v10 = *(float*)((long)(float*)(v6 * 4L) + (long)ptr0);
            int v11 = (uint32_t)param0 * 2 + (uint32_t)v2;
            ptr0 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr0;
            v2 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)v2);
            *(float*)(v11 * 4L + (long)param3) = v9 - v10;
        }
        while(v1 != 1);
    }
    if((uint32_t)param0 > 1) {
        if((uint32_t)param0 == 2) {
        loc_CA1ACC:
            if((int)param1 >= 1) {
                long v12 = (long)((uint32_t)param0 + v6 - 1);
                long v13 = (long)((param1 * 3 + 1) * (uint32_t)param0 - 1);
                long v14 = (v6 + v12) * 4L;
                do {
                    float v15 = *(float*)(v12 * 4L + (long)param2);
                    float v16 = *(float*)(v13 * 4L + (long)param2);
                    float* ptr2 = (float*)((((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param2);
                    float* ptr3 = (float*)((((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param3);
                    *(ptr3 - 1) = (v15 - v16) * 0.70710677 + *(ptr2 - 1);
                    float* ptr4 = (float*)(((long)(uint32_t)param0 + ((uint64_t)((uint32_t)param0 * 2) | ((uint64_t)((param0 >>> 30L) & 0x1L ? -1: 0) << 32))) * 4L + (long)param3);
                    float v17 = (v16 + v15) * -0.70710677;
                    *(ptr4 - 1) = *(ptr2 - 1) - (v15 - v16) * 0.70710677;
                    v1 = param1;
                    param1 = v4 - 1;
                    param3 = (((__ror__((uint64_t)((uint32_t)param0 * 4), 62L)) & 0x3fffffffcL) | ((param0 >>> 29L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param3;
                    *ptr3 = v17 - *(float*)((long)param2 + v14);
                    v0 = *(float*)((long)param2 + v14);
                    param2 = ptr2;
                    *ptr4 = v0 + v17;
                }
                while(v1 != 1);
            }
        }
        else {
            if((int)param1 >= 1) {
                int v18 = (uint32_t)param0 * 2;
                v2 = 0L;
                long v19 = 0L;
                double* ptr5 = (double*)(v6 * 8L + (long)param2);
                ptr1 = v6 * 4L + (long)param2;
                ptr0 = v18;
                double* ptr6 = (double*)(v6 * 12L + (long)param2);
                int v20 = 1;
                float* ptr7 = param2;
                do {
                    long v21 = 0L;
                    float* ptr8 = (float*)((long)(param3 - 3) + v18 * 4L);
                    float* ptr9 = (float*)(v20 * 4L + (long)param3);
                    float* ptr10 = (float*)((long)(uint32_t)v2 * 4L + (long)param3);
                    float* ptr11 = (float*)((long)(param3 - 3) + (long)(double*)((long)(double*)(v18 + (long)ptr0) * 4L));
                    double* ptr12 = (double*)((long)(double*)((long)(double*)((long)(uint32_t)v2 + (long)ptr0) * 4L) + (long)param3) + 1;
                    long v22 = 2L;
                    do {
                        float* ptr13 = (float*)(param4 + v21);
                        float* ptr14 = (float*)((long)ptr1 + v21);
                        float v23 = *ptr13;
                        float v24 = *(ptr13 + 1);
                        float* ptr15 = (float*)(param5 + v21);
                        float v25 = *(ptr14 + 1);
                        float v26 = *(ptr14 + 2);
                        float* ptr16 = (float*)((long)ptr5 + v21);
                        float v27 = *ptr15;
                        float v28 = *(ptr15 + 1);
                        float v29 = *(ptr16 + 1);
                        float v30 = *(ptr16 + 2);
                        float* ptr17 = (float*)(param6 + v21);
                        float* ptr18 = (float*)((long)ptr6 + v21);
                        float v31 = v25 * v23 + v26 * v24;
                        float v32 = v26 * v23 - v24 * v25;
                        float v33 = *ptr17;
                        float v34 = *(ptr17 + 1);
                        float v35 = v29 * v27 + v30 * v28;
                        float v36 = v30 * v27 - v28 * v29;
                        float v37 = *(ptr18 + 1);
                        float v38 = *(ptr18 + 2);
                        float* ptr19 = (float*)((long)ptr7 + v21);
                        v22 += 2L;
                        float v39 = v37 * v33 + v38 * v34;
                        float v40 = v38 * v33 - v34 * v37;
                        float v41 = *(ptr19 + 1);
                        float v42 = *(ptr19 + 2);
                        float v43 = v39 + v31;
                        float v44 = v39 - v31;
                        v0 = v40 + v32;
                        float v45 = v32 - v40;
                        float v46 = v42 + v36;
                        float v47 = v42 - v36;
                        float v48 = v41 + v35;
                        float v49 = v41 - v35;
                        float* ptr20 = (float*)(v21 + (long)ptr12);
                        *(float*)(v21 + (long)ptr9) = v43 + v48;
                        *(float*)((double*)(v21 + (long)ptr10) + 1) = v0 + v46;
                        *ptr8 = v49 - v45;
                        *(ptr8 + 1) = v44 - v47;
                        ptr8 -= 2;
                        *(ptr20 - 1) = v45 + v49;
                        *ptr20 = v44 + v47;
                        *ptr11 = v48 - v43;
                        *(ptr11 + 1) = v0 - v46;
                        ptr11 -= 2;
                        v21 += 8L;
                    }
                    while((long)(uint32_t)param0 > v22);
                    v19 = (uint64_t)((uint32_t)v19 + 1);
                    v2 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)v2);
                    v18 = (uint32_t)param0 * 4 + v3;
                    v20 = (uint32_t)param0 * 4 + v5;
                    ptr6 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr6;
                    ptr5 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr5;
                    ptr1 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr1;
                    ptr7 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr7;
                }
                while((uint32_t)v19 != param1);
            }
            if(!(param0 & 0x1L)) {
                goto loc_CA1ACC;
            }
        }
    }
    return param0;
}
