int* operator-=2(int* param0, int* param1) {
    int v0 = *(param1 + 800);
    if(*(param1 + 800) >= 1) {
        long v1 = 0L;
        do {
            int v2 = *(param0 + 800);
            if(*(param0 + 800) >= 1) {
                int v3 = *(int*)(v1 * 4L + (long)param1);
                long v4 = (uint64_t)v2;
                int* ptr0 = param0;
                while(*ptr0 != v3) {
                    long v5 = v4 - 1L;
                    --v4;
                    ++ptr0;
                    if(v5 != 0L) {
                        continue;
                    }
                    goto loc_6ED060;
                }
                *(param0 + 800) = v2 - 1;
                *ptr0 = *(int*)(((long)v2 - 1L) * 4L + (long)param0);
                v0 = *(param1 + 800);
            }
        loc_6ED060:
            ++v1;
        }
        while(v0 > v1);
    }
    return param0;
}
