long IsNearEdge(float* param0) {
    float v0 = *param0;
    long result = 1L;
    if(v0 >= 0.025 && v0 <= 1.975) {
        v0 = *(param0 + 1);
        if(v0 < 0.025) {
            return 1L;
        }
        result = v0 > 0.975;
    }
    return result;
}
