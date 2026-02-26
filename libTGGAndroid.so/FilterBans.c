long FilterBans(int param0, long param1, int* param2, int* param3) {
    int v0 = *param3;
    if(*param3 >= 1) {
        int v1 = 0;
        do {
            int v2 = *(int*)(v1 * 4L + (long)param2);
            long v3 = 0L;
            do {
                int v4 = *(int*)(param1 + v3 + 3076L);
                if(*(int*)(param1 + v3 + 3076L) == 0) {
                    break;
                }
                else if(v2 == v4) {
                    *param3 = v0 - 1;
                    *(int*)(v1 * 4L + (long)param2) = *(int*)((long)(v0 - 1) * 4L + (long)param2);
                    v0 = *param3;
                    break;
                }
                else {
                    v3 += 4L;
                }
            }
            while(v3 != 2800L);
            v1 = param0 + 1;
        }
        while(v1 < v0);
    }
    return param1;
}
