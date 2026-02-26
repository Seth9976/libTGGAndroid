float* TriNorm(float* param0, float* param1, float* param2) {
    float v0 = *param0;
    float v1 = *(param0 + 1);
    float v2 = *(param0 + 2);
    float v3 = *param1 - v0;
    float v4 = *param2 - v0;
    float v5 = *(param1 + 1) - v1;
    float v6 = *(param1 + 2) - v2;
    float v7 = *(param2 + 1) - v1;
    float v8 = v5 * (*(param2 + 2) - v2) - v6 * v7;
    float v9 = v6 * v4 - v3 * (*(param2 + 2) - v2);
    float v10 = v3 * v7 - v5 * v4;
    float v11 = v10 * v10 + (v8 * v8 + v9 * v9);
    if(v11 < 1.0E-5) {
        return param0;
    }
    FSQRT(v11, v11);
    return param0;
}
