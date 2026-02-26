int* GetClickedGroup(int* param0, int* param1) {
    int v0 = *(param0 + 2080);
    if(v0 != 0) {
        long* ptr0 = (long*)((long)v0 + (long)param0);
        while(1) {
            v0 = *param0;
            if(v0 < 1) {
            loc_703790:
                int* ptr1 = (int*)(v0 * 12 + 8 + (long)param0);
                param0 = ptr0 != ptr1 ? ptr1: NULL;
                if(param0 == 0L) {
                    return param0;
                }
                continue;
            }
            int v1 = *(param1 + 2164);
            long v2 = 0L;
            long v3 = 12L;
            while(1) {
                if(*(int*)((long)param0 + v3) == v1) {
                    return param0;
                }
                ++v2;
                v3 += 12L;
                if((long)v0 > v2) {
                    continue;
                }
                goto loc_703790;
            }
            return param0;
        }
        return param0;
    }
    return NULL;
}
