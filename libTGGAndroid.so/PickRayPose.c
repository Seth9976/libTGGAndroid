float* PickRayPose(double* param0, float* param1) {
    double v0 = *(double*)(param1 + 4);
    *(float*)(param0 + 1) = *(param1 + 6);
    *param0 = v0;
    float v1 = *param1;
    float v2 = *(param1 + 1);
    float v3 = *(param1 + 2);
    float v4 = *(param1 + 3);
    float v5 = v2 * v1 - v3 * v4;
    float v6 = v2 * v3 + v1 * v4;
    *(float*)((char*)param0 + 12L) = v5 + v5;
    *(float*)(param0 + 2) = v2 * v2 - v3 * v3 + v4 * v4 - v1 * v1;
    *(float*)((char*)param0 + 20L) = v6 + v6;
    return param1;
}
