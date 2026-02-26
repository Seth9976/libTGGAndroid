double* PickRayCenter(double* param0, double* param1) {
    double v0 = *(param1 + 6);
    *(float*)(param0 + 1) = *(float*)(param1 + 7);
    *param0 = v0;
    float v1 = *(float*)(param1 + 4);
    float v2 = *(float*)((char*)param1 + 36L);
    float v3 = *(float*)(param1 + 5);
    float v4 = *(float*)((char*)param1 + 44L);
    float v5 = v2 * v1 - v3 * v4;
    float v6 = v2 * v3 + v1 * v4;
    *(float*)((char*)param0 + 12L) = v5 + v5;
    *(float*)(param0 + 2) = v2 * v2 - v3 * v3 + v4 * v4 - v1 * v1;
    *(float*)((char*)param0 + 20L) = v6 + v6;
    return param1;
}
