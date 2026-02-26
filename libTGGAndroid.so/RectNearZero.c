long RectNearZero(float* param0) {
    float v0 = *param0;
    if((v0 < 0.0 ? (float)(0.0 - v0): v0) > 1.0E-5) {
        return 0L;
    }
    float v1 = *(param0 + 2);
    if((v1 < 0.0 ? (float)(0.0 - v1): v1) > 1.0E-5) {
        return 0L;
    }
    float v2 = *(param0 + 1);
    if((v2 < 0.0 ? (float)(0.0 - v2): v2) > 1.0E-5) {
        return 0L;
    }
    float v3 = *(param0 + 3);
    return (v3 < 0.0 ? (float)(0.0 - v3): v3) <= 1.0E-5;
}
