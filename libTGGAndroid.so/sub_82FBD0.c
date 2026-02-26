int sub_82FBD0(uint64_t* param0, float* param1) {
    float v0;
    float v1;
    float v2;
    float v3;
    float v4;
    double* ptr0 = *param0;
    float v5 = *param1;
    int v6 = *(uint32_t*)((char*)param0 + 36L);
    float* ptr1 = *(uint64_t*)(ptr0 + 2);
    float v7 = *ptr1;
    if(*ptr1 < v5) {
        if(v6 == 0) {
            return 1;
        }
    }
    else if(v6 == 1) {
        return 0;
    }
    float v8 = *(float*)(ptr0 + 5);
    if(*(float*)(ptr0 + 5) == 1.0) {
        float v9 = *(float*)((char*)ptr0 + 44L);
        float v10 = v5 - v7;
        v0 = *(param1 + 1) - *(ptr1 + 1);
        if((v7 < v5 ? v9 >= 0.0: v9 < 0.0) == 1 && v10 * v9 > v0) {
            goto loc_82FCF0;
        }
        else if((v7 < v5 ? v9 >= 0.0: v9 < 0.0) == 1) {
            return !v6;
        }
        float v11 = *(float*)(ptr0 + 6);
        v5 = v1 + v2 * v9;
        if(v9 >= 0.0) {
            if(v5 > v11) {
            loc_82FCF0:
                float v12 = v10 * v10 - v0 * v0;
                float v13 = v7 - **(uint64_t*)(ptr0 + 1);
                v10 = (v4 + v4) / v13;
                v0 = v3 * v13;
                v7 = v9 * v12;
                v5 = v0 * (v9 * v9 + (v10 + 1.0));
                ptr0 = v0 * (v9 * v9 + (v10 + 1.0)) <= v7 ? NULL: &g1;
                if(v9 < 0.0) {
                    return (uint64_t)(v7 >= v5 ^ v6);
                }
                return (uint64_t)((uint32_t)ptr0 ^ v6);
            }
        }
        else if(v5 <= v11) {
            goto loc_82FCF0;
        }
        return v6;
    }
    float v14 = v5 - v7;
    float v15 = *(float*)(ptr0 + 6) - v5 * v8 - *(ptr1 + 1);
    v0 = *(param1 + 1) - (*(float*)(ptr0 + 6) - v5 * v8);
    return (uint64_t)(v14 * v14 + v15 * v15 < v0 * v0 ^ v6);
}
