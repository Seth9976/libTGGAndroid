long ValidateChoices(int* param0, uint32_t param1, int* param2, uint32_t param3) {
    long v0;
    int v1;
    if((int)param3 >= 1) {
        if((int)param1 < 1) {
            return 0L;
        }
        int v2 = *param0;
        long v3 = 0L;
        v1 = 1;
    loc_7AA8DC:
        do {
            int v4 = *(int*)(v3 * 4L + (long)param2);
            if(*(int*)(v3 * 4L + (long)param2) == v2) {
            loc_7AA8CC:
                ++v3;
                v1 = param3 > v3;
                if(param3 != v3) {
                    goto loc_7AA8DC;
                }
                break;
            }
            long v5 = 1L;
            do {
                v0 = v5;
                if(param1 == v5) {
                    break;
                }
                v5 = v0 + 1L;
            }
            while(*(int*)(v0 * 4L + (long)param0) != v4);
            if(param1 > v0) {
                goto loc_7AA8CC;
            }
        }
        while(param1 > v0);
    }
    else {
        v1 = 0;
    }
    return (uint64_t)(~v1 & 1);
}
