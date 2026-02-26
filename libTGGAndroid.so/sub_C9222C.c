long sub_C9222C(int* param0, int param1, int* param2, int* param3, float* param4) {
    uint32_t result;
    int v0;
    double v1;
    double v2;
    double v3;
    double v4;
    double v5;
    long v6;
    double v7;
    int v8;
    double v9;
    double v10;
    double v11;
    double v12;
    int v13 = *param0;
    int v14 = *(int*)((char*)((long)param1 * 56L + (long)param0) - 52L);
    if(param1 >= 1) {
        float v15 = *(param4 + 0x115);
        long v16 = (uint64_t)param1;
        int* ptr0 = param0 + 7;
        do {
            int v17 = *(ptr0 + 6);
            int v18 = *ptr0;
            v6 = v16 - 1L;
            --v16;
            int v19 = v18 + v17;
            double v20 = v15 * (float)v19 / (float)(v18 + 1) + 1.0;
            v5 = v12 + (double)(long)*(ptr0 + 1) + (v15 * (float)v19 / (float)(v18 + 1) + 1.0) * (double)(long)*(ptr0 - 5);
            v4 = v7 + (double)(long)*(ptr0 + 3) + v20 * (double)(long)*(ptr0 - 3);
            v3 = v9 + (double)(long)*(ptr0 + 2) + v20 * (double)(long)*(ptr0 - 4);
            v2 = v10 + (double)(long)*(ptr0 + 5) + v20 * (double)(long)*(ptr0 - 1);
            v1 = v11 + (double)v17 + v20 * (double)v18;
            ptr0 += 14;
        }
        while(v6 != 0L);
        v0 = *param2;
        if(v0 >= 0) {
            goto loc_C92340;
        }
    }
    else {
        v1 = 0.0;
        v2 = 0.0;
        v4 = 0.0;
        v3 = 0.0;
        v5 = 0.0;
        v0 = *param2;
        if(v0 >= 0) {
        loc_C92340:
            v5 = v12 + (double)v13;
            v3 = v9 + (double)v0;
            v4 = v7 + (double)(v13 * v13);
            v2 = v10 + (double)(v13 * v0);
            v1 = v11 + 1.0;
        }
    }
    int v21 = *param3;
    if(v21 >= 0) {
        v5 = v12 + (double)v14;
        v3 = v9 + (double)v21;
        v4 = v7 + (double)(v14 * v14);
        v2 = v10 + (double)(v14 * v8);
        v1 = v11 + 1.0;
    }
    double v22 = v4 * v1 - v5 * v5;
    if(v4 * v1 - v5 * v5 > 0.0) {
        double v23 = v2 * v1 - v5 * v3;
        v5 = (v3 * v4 - v5 * v2) / v22;
        double v24 = v23 / v22;
        v2 = v5 + v24 * (double)v14;
        FRINTX(v5, v5 + v24 * (double)v13);
        FRINTX(v2, v2);
        v14 = v2;
        *param2 = (int)v5;
        *param3 = v14;
        long v25 = (uint64_t)*param2;
        if(*param2 >= 0x400) {
            v25 = 0x3ffL;
            *param2 = 0x3ff;
            v14 = *param3;
            if(*param3 < 0x400) {
                goto loc_C923F8;
            }
        loc_C92454:
            v14 = 0x3ff;
            *param3 = 0x3ff;
            if(*param2 < 0) {
                goto loc_C92464;
            loc_C923F8:
                if((v25 >>> 31L) & 0x1L) {
                loc_C92464:
                    *param2 = 0;
                    v14 = *param3;
                }
            }
        }
        else if(v14 >= 0x400) {
            goto loc_C92454;
        }
        else {
            goto loc_C923F8;
        }
        result = 0;
        if(v14 >= 0) {
            return 0L;
        }
    }
    else {
        result = 1;
        *param2 = 0;
    }
    *param3 = 0;
    return result;
}
