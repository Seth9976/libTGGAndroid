int* operator-=(int* param0, int param1) {
    int v0 = *(param0 + 800);
    if(*(param0 + 800) >= 1) {
        long v1 = (uint64_t)v0;
        int* ptr0 = param0;
        while(*ptr0 != param1) {
            long v2 = v1 - 1L;
            --v1;
            ++ptr0;
            if(v2 == 0L) {
                return param0;
            }
        }
        *(param0 + 800) = v0 - 1;
        *ptr0 = *(int*)(((long)v0 - 1L) * 4L + (long)param0);
    }
    return param0;
}
