long LinesCross(float* param0, float* param1, float* param2, float* param3) {
    float v0;
    float v1;
    float v2;
    float v3;
    float v4 = *param1;
    float v5 = *(param1 + 1);
    float v6 = *param0;
    float v7 = *(param0 + 1);
    float v8 = *param2;
    float v9 = *(param2 + 1);
    float v10 = v5 - v7;
    float v11 = v4 - v6;
    if((v10 * (v8 - v6) - v11 * (v9 - v7)) * (v10 * (*param3 - v6) - v11 * (*(param3 + 1) - v7)) > 0.0) {
        return 0L;
    }
    float v12 = v0 - v8;
    float v13 = v1 - v9;
    return ((v2 - v8) * v13 - (v3 - v9) * v12) * ((v4 - v8) * v13 - (v5 - v9) * v12) <= 0.0;
}
