int* TrimChoices(int* param0, int* param1) {
    int v0;
    int v1 = *(param1 + 0x100);
    if(*(param1 + 0x100) >= 1) {
        int v2 = 0;
        do {
            long v3 = (uint64_t)*(param0 + 0x100);
            if(*(param0 + 0x100) >= 1) {
                int v4 = *(int*)(v2 * 4L + (long)param1);
                int* ptr0 = param0;
                while(*ptr0 != v4) {
                    long v5 = v3 - 1L;
                    --v3;
                    ++ptr0;
                    if(v5 != 0L) {
                        continue;
                    }
                    goto loc_7E8BBC;
                }
            }
            else {
            loc_7E8BBC:
                *(param1 + 0x100) = v1 - 1;
                *(int*)(v2 * 4L + (long)param1) = *(int*)((v1 - 1L) * 4L + (long)param1);
                v1 = *(param1 + 0x100);
            }
            v2 = v0 + 1;
        }
        while(v1 > v2);
    }
    return param0;
}
