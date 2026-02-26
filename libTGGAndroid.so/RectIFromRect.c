long RectIFromRect(float* param0) {
    float v0 = *param0;
    float v1 = *(param0 + 1);
    return (uint64_t)(int)(v0 + (v0 < 0.0 ? -0.5: 0.5)) | ((uint64_t)(int)(v1 + (v1 < 0.0 ? -0.5: 0.5)) << 32);
}
