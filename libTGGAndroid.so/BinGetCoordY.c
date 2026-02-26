long BinGetCoordY(float* param0) {
    float v0;
    float v1 = *(param0 + 11);
    if(v1 + 1.0E-5 < v0) {
        if(*(param0 + 13) + -1.0E-5 > v0) {
            float v2 = (v0 - v1) / *(param0 + 0xF);
            FRINTM((v0 - v1) / *(param0 + 0xF), (v0 - v1) / *(param0 + 0xF));
            return (uint64_t)(int)(v2 + (v2 < 0.0 ? -0.5: 0.5));
        }
        return (uint64_t)(*(param0 + 17) - 1);
    }
    return 0L;
}
