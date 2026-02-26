float* QuatFromBasisChange(float* param0, float* param1, float* param2, float* param3) {
    float v0;
    float v1;
    float v2 = *(param0 + 1);
    float v3 = *(param0 + 2);
    float v4 = *(param1 + 1);
    float v5 = *(param1 + 2);
    float v6 = *param0;
    float v7 = *param1;
    float v8 = *(param2 + 1);
    float v9 = *(param2 + 2);
    float v10 = *(param3 + 1);
    float v11 = *(param3 + 2);
    float v12 = *param2;
    float v13 = *param3;
    float v14 = v4 * v3 - v5 * v2;
    float v15 = v5 * v6 - v3 * v7;
    float v16 = v8 * v13 - v10 * v12;
    float v17 = v14 * (v10 * v9 - v11 * v8) + (v6 * v12 + v7 * v13);
    float v18 = v4 * v10 + v2 * v8 + v15 * (v11 * v12 - v9 * v13);
    float v19 = v3 * v9 + v5 * v11 + (v2 * v7 - v4 * v6) * v16;
    float v20 = v17 + v18;
    float v21 = v19 + v20;
    float v22 = v6 * v9 + v7 * v11 + v14 * v16;
    float v23 = v2 * v9 + v4 * v11 + v15 * v16;
    if(v21 > 0.0) {
        FSQRT(v21 + 1.0, v21 + 1.0);
        return param0;
    }
    if(v17 < v18 && v18 < v19) {
        FSQRT(v22, v19 - v20 + 1.0);
        return param0;
    }
    else if(v17 < v18) {
        FSQRT(v23, v18 - (v0 + v19) + 1.0);
        return param0;
    }
    if(v17 < v19) {
        FSQRT(v22, v19 - v20 + 1.0);
        return param0;
    }
    FSQRT(v22, v17 - (v1 + v19) + 1.0);
    return param0;
}
