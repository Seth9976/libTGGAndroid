float* KingdomViewAddBlank(float* param0) {
    float v0 = *(param0 + 0xe88);
    double* ptr0 = (double*)((long)v0 * 116L + (long)param0);
    *(param0 + 0xe88) = v0 + 1;
    *(ptr0 + 4) = (double)0.0;
    float v1 = *(param0 + 1);
    float v2 = *(param0 + 2);
    *(float*)(ptr0 + 5) = (float)0.0;
    *(float*)((char*)ptr0 + 44L) = v2;
    *(param0 + 1) = v1 > 2690.0 ? v1: 2690.0;
    *(param0 + 2) = v2 + 15.0 + 120.0;
    return param0;
}
