float* RevealTempOffset(long double* param0, float* param1, int param2, int param3) {
    float v0;
    float v1;
    float v2 = *param1;
    if(v1 < 0.1) {
        v0 = 0.0;
        if(v1 / 0.1 > 0.0) {
            v0 = 1.0;
            if(v1 / 0.1 < 1.0) {
                v0 = v1 / 0.1 * (float)(2.0 - v1 / 0.1) + 0.0;
            }
        }
    }
    else {
        v0 = 1.0;
        if(v1 > 0.9 && (v1 + -0.9) / 0.100000024 > 0.0) {
            v0 = 0.0;
            if((v1 + -0.9) / 0.100000024 < 1.0) {
                v0 = 1.0 - (v1 + -0.9) / 0.100000024 * ((v1 + -0.9) / 0.100000024);
            }
        }
    }
    long double v3 = *(long double*)(param1 + 4);
    *param0 = *(long double*)param1;
    *(param0 + 1) = v3;
    float v4 = v2 * 1000.0 * v0 + *(float*)((char*)param0 + 24L);
    float v5 = (v0 * 3.0 + 1.0) * *(float*)param0;
    *(float*)((char*)param0 + 20L) = (float)(0.0 - v2 * 1000.0 * (float)(param2 * 2 - param3 + 1) * v0) + (*(float*)((char*)param0 + 20L) + v2 * -700.0 * v0);
    *(float*)((char*)param0 + 24L) = v4;
    *(float*)param0 = v5;
    return param1;
}
