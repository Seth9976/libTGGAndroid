long ElemOf(int* param0, int param1) {
    long v0;
    long v1 = (uint64_t)*(param0 + 800);
    if(*(param0 + 800) >= 1) {
        if(*param0 == param1) {
            return 1L;
        }
        long v2 = 1L;
        do {
            v0 = v2;
            if(v1 == v2) {
                break;
            }
            v2 = v0 + 1L;
        }
        while(*(int*)(v0 * 4L + (long)param0) != param1);
        return v1 > v0;
    }
    return 0L;
}
