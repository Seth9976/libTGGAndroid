long* CardsetAddSet(long* param0, long param1, long* param2, uint32_t param3) {
    long v0;
    *(int*)(param0 + 676) = 0;
    if((int)param3 >= 1) {
        *(int*)(param0 + 676) = 1;
        long v1 = *param2;
        *(int*)(param0 + 79) = 1;
        *(param0 + 77) = param1;
        *(param0 + 76) = v1;
        *(param0 + 78) = 0L;
        if(param3 != 1) {
            v1 = param3 - 1L;
            long* ptr0 = param2 + 1;
            do {
                int v2 = *(int*)(param0 + 676);
                v0 = v1 - 1L;
                --v1;
                *(int*)(param0 + 676) = v2 + 1;
                long v3 = *ptr0;
                ++ptr0;
                long* ptr1 = (long*)(v2 * 32L + (long)param0);
                *(int*)(ptr1 + 79) = 1;
                *(ptr1 + 77) = param1;
                *(ptr1 + 76) = v3;
                *(ptr1 + 78) = 0L;
            }
            while(v0 != 0L);
        }
    }
    return param0;
}
