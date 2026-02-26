float* GlickoUpdate_Inactive(float* param0, int param1) {
    float v0 = *(param0 + 1);
    float v1 = *(param0 + 2);
    FSQRT(v0 * v0 + v1 * (v1 * (float)param1), v0 * v0 + v1 * (v1 * (float)param1));
    return param0;
}
