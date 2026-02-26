double* ToTransform(float* param0, double* param1) {
    double v0 = *param1;
    *(param0 + 7) = (float)0.0;
    *(double*)(param0 + 5) = v0;
    float v1 = *(float*)((char*)param1 + 36L);
    FSQRT((v1 + 1.0) * 0.5, (v1 + 1.0) * 0.5);
    FSQRT((float)(1.0 - v1) * 0.5, (float)(1.0 - v1) * 0.5);
    float v2 = *(float*)(param1 + 4) < 0.0 ? (float)(0.0 - (v1 + 1.0) * 0.5): (v1 + 1.0) * 0.5;
    *(double*)(param0 + 1) = (uint64_t)(float)(0.0 * ((float)(1.0 - v1) * 0.5)) | ((uint64_t)(float)(0.0 * ((float)(1.0 - v1) * 0.5)) << 32);
    *(param0 + 3) = (float)(1.0 - v1) * 0.5 * 1.0;
    *(param0 + 4) = v2;
    *param0 = *(float*)((char*)param1 + 12L);
    return param1;
}
