long BinGetCoord(float* param0, float* param1) {
    uint32_t result;
    float v0 = *(param0 + 10);
    float v1 = *param1;
    if(v0 + 1.0E-5 >= *param1) {
        result = 0;
    }
    else if(*(param0 + 12) + -1.0E-5 > v1) {
        float v2 = (v1 - v0) / *(param0 + 14);
        FRINTM((v1 - v0) / *(param0 + 14), (v1 - v0) / *(param0 + 14));
        result = (int)(v2 + (v2 < 0.0 ? -0.5: 0.5));
    }
    else {
        result = *(param0 + 16) - 1;
    }
    float v3 = *(param0 + 11);
    float v4 = *(param1 + 1);
    if(v3 + 1.0E-5 < v4) {
        if(*(param0 + 13) + -1.0E-5 > v4) {
            float v5 = (v4 - v3) / *(param0 + 0xF);
            FRINTM((v4 - v3) / *(param0 + 0xF), (v4 - v3) / *(param0 + 0xF));
            return (uint64_t)result | ((uint64_t)(int)(v5 + (v5 < 0.0 ? -0.5: 0.5)) << 32);
        }
        return (uint64_t)result | ((uint64_t)(*(param0 + 17) - 1) << 32);
    }
    return result;
}
