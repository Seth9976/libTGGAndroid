long HasAnyDistinct(int* param0) {
    long v0;
    long v1 = (uint64_t)*(param0 + 800);
    if(*(param0 + 800) < 2) {
        return 0L;
    }
    int v2 = *param0;
    long v3 = 1L;
    do {
        v0 = v3;
        if(v1 == v3) {
            break;
        }
        v3 = v0 + 1L;
    }
    while(*(int*)(v0 * 4L + (long)param0) == v2);
    return v1 > v0;
}
