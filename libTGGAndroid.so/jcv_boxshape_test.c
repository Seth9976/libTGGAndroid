long jcv_boxshape_test(float* param0) {
    float v0;
    float v1;
    if(*(param0 + 6) > v1) {
        return 0L;
    }
    if(*(param0 + 8) < v1) {
        return 0L;
    }
    if(*(param0 + 7) > v0) {
        return 0L;
    }
    return *(param0 + 9) >= v0;
}
