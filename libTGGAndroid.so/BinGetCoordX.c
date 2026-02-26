long BinGetCoordX(float* param0) {
    float v0;
    float v1 = *(param0 + 10);
    if(v1 + 1.0E-5 < v0) {
        if(*(param0 + 12) + -1.0E-5 > v0) {
            float v2 = (v0 - v1) / *(param0 + 14);
            FRINTM((v0 - v1) / *(param0 + 14), (v0 - v1) / *(param0 + 14));
            return (uint64_t)(int)(v2 + (v2 < 0.0 ? -0.5: 0.5));
        }
        return (uint64_t)(*(param0 + 16) - 1);
    }
    return 0L;
}
