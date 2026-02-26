long sub_CA2F38(long param0, uint32_t param1, float* param2, float* param3, long param4, long param5, long param6) {
    float* ptr0;
    float* ptr1;
    double* ptr2;
    uint32_t v0;
    float* ptr3;
    float* ptr4;
    int v1;
    int v2;
    int v3;
    long v4 = (uint64_t)((uint32_t)param0 * param1);
    long v5 = (uint64_t)((uint32_t)param0 * 2);
    if((int)param1 >= 1) {
        ptr4 = (uint64_t)((uint32_t)param0 * 4 - 1);
        ptr3 = param3;
        double* ptr5 = param1;
        float* ptr6 = param2;
        do {
            float* ptr7 = (float*)((((__ror__(v5, 62L)) & 0x3fffffffcL) | ((v5 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr6);
            float v6 = *ptr6;
            float v7 = *(float*)((long)(uint32_t)ptr4 * 4L + (long)param2);
            float v8 = *(ptr7 - 1);
            float v9 = *ptr7;
            ptr6 = (((__ror__((uint64_t)((uint32_t)param0 * 4), 62L)) & 0x3fffffffcL) | ((param0 >>> 29L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr6;
            ptr4 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)ptr4);
            float v10 = v6 - v7;
            float v11 = v7 + v6;
            v0 = ptr5;
            ptr5 = (uint64_t)((uint32_t)ptr5 - 1);
            *ptr3 = v11 + (v8 + v8);
            *(float*)((long)(double*)((long)(uint32_t)v4 * 4L) + (long)ptr3) = v10 - (v9 + v9);
            *(float*)((long)(float*)(((__ror__(v4, 61L)) & 0x7fffffff8L) | ((v4 >>> 31L) & 0x1L ? 0xfffffff800000000L: 0L)) + (long)ptr3) = v11 - (v8 + v8);
            *(float*)((long)(double*)((long)(uint32_t)v4 * 12L) + (long)ptr3) = v10 + (v9 + v9);
            ptr3 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr3;
        }
        while(v0 != 1);
    }
    long v12 = (uint64_t)((uint32_t)param0 - 1);
    if((uint32_t)param0 > 1) {
        if((uint32_t)param0 == 2) {
        loc_CA31B4:
            if((int)param1 >= 1) {
                ptr4 = (long)(uint32_t)v12 * 4L + (long)param3;
                v5 = 0L;
                ptr0 = (char*)((long)((uint32_t)param0 * 3) * 4L + (long)param2) - 4L;
                float* ptr8 = (float*)(((long)(uint32_t)v12 + (long)(uint32_t)v4) * 4L + (long)param3);
                ptr2 = (char*)((((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)param2) - 4L;
                do {
                    ptr1 = v5 + (long)ptr2;
                    ptr3 = v5 + (long)ptr0;
                    float v13 = *ptr1;
                    float v14 = *(ptr1 + 1);
                    float v15 = *ptr3;
                    float v16 = *(ptr3 + 1);
                    v0 = param1;
                    param1 = v3 - 1;
                    v5 += ((__ror__((uint64_t)((uint32_t)param0 * 4), 62L)) & 0x3fffffffcL) | ((param0 >>> 29L) & 0x1L ? 0xfffffffc00000000L: 0L);
                    float v17 = v16 + v14;
                    float v18 = v16 - v14;
                    float v19 = v13 - v15;
                    float v20 = v15 + v13;
                    *ptr4 = v20 + v20;
                    *ptr8 = (v19 - v17) * 1.4142135;
                    *(float*)((((__ror__(v4, 61L)) & 0x7fffffff8L) | ((v4 >>> 31L) & 0x1L ? 0xfffffff800000000L: 0L)) + (long)ptr4) = v18 + v18;
                    *(float*)((long)(uint32_t)v4 * 12L + (long)ptr4) = (v19 + v17) * -1.4142135;
                    ptr4 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr4;
                    ptr8 = (((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr8;
                }
                while(v0 != 1);
            }
        }
        else {
            int v21 = (uint32_t)v12;
            long v22 = v4;
            if((int)param1 >= 1) {
                long v23 = 0L;
                ptr4 = NULL;
                float* ptr9 = param3;
                ptr2 = (long)(uint32_t)v4 * 8L + (long)param3;
                ptr1 = (long)(uint32_t)v4 * 4L + (long)param3;
                ptr3 = (uint64_t)((uint32_t)v5 + 1);
                param5 += 4L;
                param4 += 4L;
                double* ptr10 = (double*)((long)(uint32_t)v4 * 12L + (long)param3);
                int v24 = 1;
                int v25 = (uint32_t)param0 * 4;
                do {
                    long v26 = 0L;
                    double* ptr11 = (double*)(v25 * 4L + (long)param2);
                    float* ptr12 = (float*)((long)(uint32_t)ptr3 * 4L + (long)param2);
                    float* ptr13 = (float*)((long)(uint32_t)v5 * 4L + (long)param2);
                    float* ptr14 = (float*)(v24 * 4L + (long)param2);
                    float* ptr15 = (float*)((double*)((long)(uint32_t)v23 * 4L + (long)param2) + 1);
                    long v27 = -12L;
                    long v28 = 2L;
                    do {
                        float* ptr16 = (float*)((long)ptr11 + v27);
                        float v29 = *ptr16;
                        float v30 = *(ptr16 + 1);
                        float* ptr17 = (float*)((long)ptr13 + v27);
                        float v31 = *(float*)(v26 + (long)ptr15);
                        float v32 = *(float*)(v26 + (long)ptr14);
                        float v33 = *(float*)((double*)(v26 + (long)ptr13) + 1);
                        float v34 = *ptr17;
                        float v35 = *(ptr17 + 1);
                        float v36 = *(float*)(v26 + (long)ptr12);
                        float v37 = v31 - v30;
                        float v38 = v29 + v32;
                        float v39 = v33 - v35;
                        float v40 = v34 + v36;
                        float* ptr18 = (float*)((long)ptr9 + v26);
                        *(ptr18 + 1) = v40 + v38;
                        *(ptr18 + 2) = v39 + v37;
                        float* ptr19 = (float*)(param4 + v26);
                        float v41 = v30 + v31;
                        float v42 = v35 + v33;
                        float v43 = v32 - v29;
                        float v44 = v36 - v34 + v41;
                        float v45 = v43 - v42;
                        float* ptr20 = (float*)((long)ptr1 + v26);
                        *(ptr20 + 1) = *(ptr19 - 1) * v45 - *ptr19 * v44;
                        float* ptr21 = (float*)(param5 + v26);
                        float v46 = v41 - (v36 - v34);
                        float v47 = v43 + v42;
                        *(ptr20 + 2) = *(ptr19 - 1) * v44 + *ptr19 * v45;
                        float v48 = v37 - v39;
                        float v49 = v38 - v40;
                        float* ptr22 = (float*)((long)ptr2 + v26);
                        *(ptr22 + 1) = *(ptr21 - 1) * v49 - *ptr21 * v48;
                        float* ptr23 = (float*)(param6 + v26);
                        v28 += 2L;
                        *(ptr22 + 2) = *(ptr21 - 1) * v48 + *ptr21 * v49;
                        ptr0 = (long)ptr10 + v26;
                        v26 += 8L;
                        v27 -= 8L;
                        *(ptr0 + 1) = *ptr23 * v47 - *(ptr23 + 1) * v46;
                        *(ptr0 + 2) = *ptr23 * v46 + *(ptr23 + 1) * v47;
                    }
                    while((long)(uint32_t)param0 > v28);
                    ptr4 = (uint64_t)((uint32_t)ptr4 + 1);
                    v23 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)v23);
                    v5 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)v5);
                    v25 = (uint32_t)param0 * 4 + v2;
                    ptr10 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr10;
                    ptr2 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr2;
                    ptr1 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr1;
                    ptr9 = (long)(float*)(((__ror__(param0, 62L)) & 0x3fffffffcL) | ((param0 >>> 31L) & 0x1L ? 0xfffffffc00000000L: 0L)) + (long)ptr9;
                    ptr3 = (uint64_t)((uint32_t)param0 * 4 + (uint32_t)ptr3);
                    v24 = (uint32_t)param0 * 4 + v1;
                }
                while((uint32_t)ptr4 != param1);
            }
            v12 = (uint64_t)(uint32_t)v12;
            if((uint32_t)param0 - (((uint32_t)param0 < 0 ? (uint32_t)param0 + 1: (uint32_t)param0) & 0xfffffffe) != 1) {
                goto loc_CA31B4;
            }
        }
    }
    return param0;
}
