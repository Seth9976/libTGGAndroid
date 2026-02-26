long AnyoneResigned(int* param0, int* param1, int* param2) {
    long v0;
    long v1 = (uint64_t)*(param0 + 1133);
    if(*(param0 + 1133) >= 1) {
        int* ptr0 = param0 + 28;
        do {
            int v2 = *(ptr0 + 1);
            if(v2 - 1004 < 2) {
                *param1 = *ptr0;
                *param2 = 6;
                return 1L;
            }
            if(v2 == 1001) {
                *param1 = *ptr0;
                *param2 = 5;
                return 1L;
            }
            v0 = v1 - 1L;
            --v1;
            ptr0 += 139;
        }
        while(v0 != 0L);
    }
    return 0L;
}
