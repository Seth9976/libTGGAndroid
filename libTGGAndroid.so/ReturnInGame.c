int* ReturnInGame(int* param0, int* param1, uint32_t param2, int* param3, int* param4) {
    int v0;
    long v1;
    if((int)param2 >= 1) {
        long v2 = 0L;
        do {
            long v3 = (uint64_t)*(param0 + 1354);
            if(*(param0 + 1354) >= 1) {
                int v4 = *(int*)(v2 * 4L + (long)param1);
                if(*(int*)(v2 * 4L + (long)param1) == *(param0 + 1692)) {
                loc_6FF478:
                    int v5 = *param4;
                    *param4 = v5 + 1;
                    *(int*)(v5 * 4L + (long)param3) = v4;
                }
                else {
                    int* ptr0 = param0 + 0x6b6;
                    long v6 = 1L;
                    do {
                        v1 = v6;
                        if(v3 == v6) {
                            break;
                        }
                        v0 = *ptr0;
                        ptr0 += 26;
                        v6 = v1 + 1L;
                    }
                    while(v4 != v0);
                    if(v3 > v1) {
                        goto loc_6FF478;
                    }
                }
            }
            ++v2;
        }
        while(param2 != v2);
    }
    return param0;
}
