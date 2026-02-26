long sub_831234(int param0, int* param1, int* param2, int* param3, int* param4, uint64_t* param5) {
    uint32_t result;
    long v0;
    int v1 = *param2;
    float* ptr0 = *param5;
    int v2 = *param1;
    int v3 = *param3;
    float v4 = *(float*)((double*)(v1 * 12L + (long)ptr0) + 1);
    float v5 = *(float*)((double*)(v3 * 12L + (long)ptr0) + 1);
    if(*(float*)((double*)(v2 * 12L + (long)ptr0) + 1) < v4) {
        v0 = v2;
        if(v4 < v5) {
            *param1 = v3;
            *param3 = v2;
            result = 1;
            goto loc_831314;
        }
        else {
            *param1 = v1;
            *param2 = v2;
            v3 = *param3;
            float* ptr1 = *param5;
            if(*(float*)((double*)(v3 * 12L + (long)ptr1) + 1) > *(float*)((double*)(v0 * 12L + (long)ptr1) + 1)) {
                result = 2;
                *param2 = v3;
                *param3 = v2;
            loc_831314:
                v3 = v2;
            }
            else {
                v0 = v3;
                result = 1;
            }
        }
    }
    else if(v4 < v5) {
        *param2 = v3;
        *param3 = v1;
        int v6 = *param2;
        float* ptr2 = *param5;
        int v7 = *param1;
        if(*(float*)((double*)(v6 * 12L + (long)ptr2) + 1) > *(float*)((double*)(v7 * 12L + (long)ptr2) + 1)) {
            *param1 = v6;
            *param2 = v7;
            v3 = *param3;
            result = 2;
            v0 = v3;
        }
        else {
            v0 = v1;
            result = 1;
            v3 = v1;
        }
    }
    else {
        result = 0;
        v0 = v3;
    }
    int v8 = *param4;
    float* ptr3 = *param5;
    if(*(float*)((double*)((long)(double*)((long)v8 * 12L) + (long)ptr3) + 1) > *((float*)(v0 * 12L + (long)ptr3) + 2)) {
        *param3 = v8;
        *param4 = v3;
        int v9 = *param3;
        float* ptr4 = *param5;
        v8 = *param2;
        if(*((float*)((long)(double*)((long)v8 * 12L) + (long)ptr4) + 2) >= *((float*)(v9 * 12L + (long)ptr4) + 2)) {
            return result + 1;
        }
        *param2 = v9;
        *param3 = v8;
        int v10 = *param2;
        float* ptr5 = *param5;
        v8 = *param1;
        if(*((float*)((long)(double*)((long)v8 * 12L) + (long)ptr5) + 2) >= *((float*)(v10 * 12L + (long)ptr5) + 2)) {
            return result + 2;
        }
        result = param0 + 3;
        *param1 = v10;
        *param2 = v8;
    }
    return result;
}
