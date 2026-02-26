float* PickRay(double* param0, float* param1, float* param2) {
    float v0 = *(param1 + 4);
    float v1 = *(param1 + 5);
    float v2 = *param1;
    float v3 = *(param1 + 1);
    float v4 = *(param1 + 8);
    float v5 = *(param1 + 9);
    float v6 = *(param1 + 10);
    float v7 = *(param1 + 11);
    float v8 = v5 * v4;
    float v9 = v6 * v7;
    float v10 = v5 * v6;
    float v11 = v5 * v7;
    float v12 = v4 * v7;
    float v13 = v4 * v6;
    float v14 = v8 - v9;
    float v15 = v8 + v9;
    float v16 = v13 - v11;
    float v17 = v13 + v11;
    float v18 = v10 + v12;
    float v19 = v10 - v12;
    float v20 = v2 + (*param2 - v0) / (*(param1 + 6) - v0) * (*(param1 + 2) - v2);
    float v21 = v3 + (*(param2 + 1) - v1) / (*(param1 + 7) - v1) * (*(param1 + 3) - v3);
    float v22 = v14 + v14 + v20 * (v4 * v4 + v7 * v7 - v6 * v6 - v5 * v5) - v21 * (v17 + v17);
    float v23 = v5 * v5 - v6 * v6 + v7 * v7 - v4 * v4 + v20 * (v15 + v15) - v21 * (v19 + v19);
    float v24 = v18 + v18 + v20 * (v16 + v16) - v21 * (v7 * v7 + (v6 * v6 - v5 * v5 - v4 * v4));
    double v25 = *(double*)(param1 + 12);
    *(float*)(param0 + 1) = *(param1 + 14);
    float v26 = v24 * v24 + (v23 * v23 + v22 * v22);
    FSQRT(v26, v26);
    *param0 = v25;
    if(v26 < 1.0E-5) {
        *(float*)((char*)param0 + 12L) = (float)0.0;
        *(float*)(param0 + 2) = (float)0.0;
        *(float*)((char*)param0 + 20L) = (float)0.0;
        return param1;
    }
    float v27 = v22 * (float)(1.0 / (v26 + 1.0E-5));
    float v28 = v23 * (float)(1.0 / (v26 + 1.0E-5));
    float v29 = v24 * (float)(1.0 / (v26 + 1.0E-5));
    FSQRT(v29 * v29 + (v27 * v27 + v28 * v28), v29 * v29 + (v27 * v27 + v28 * v28));
    v26 = 1.0 / (v29 * v29 + (v27 * v27 + v28 * v28));
    *(float*)((char*)param0 + 12L) = v27 * (float)(1.0 / (v29 * v29 + (v27 * v27 + v28 * v28)));
    *(float*)(param0 + 2) = v28 * v26;
    *(float*)((char*)param0 + 20L) = v29 * v26;
    return param1;
}
