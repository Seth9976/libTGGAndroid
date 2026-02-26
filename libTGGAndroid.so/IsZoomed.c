long IsZoomed(float* param0, int param1, float* param2) {
    float v0;
    if(*(param0 + 1358) == param1) {
        v0 = *(param0 + 1359);
        *param2 = v0;
        return 1L;
    }
    if(*(param0 + 0x552) == param1) {
        v0 = *(param0 + 0x553);
        if(*(param0 + 0x553) != 0.0) {
            *param2 = v0;
            return 1L;
        }
    }
    return 0L;
}
