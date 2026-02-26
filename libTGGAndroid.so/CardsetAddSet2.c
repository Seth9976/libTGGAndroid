int* CardsetAddSet2(int* param0, long* param1, long* param2, long* param3, uint32_t param4) {
    *(param0 + 1352) = 0;
    if((int)param4 >= 1) {
        int v0 = 0;
        long v1 = param4 - 1L;
        while(1) {
            *(param0 + 1352) = v0 + 1;
            long v2 = *param1;
            long* ptr0 = (long*)(v0 * 32L + (long)param0);
            *(int*)(ptr0 + 79) = 1;
            *(ptr0 + 76) = v2;
            *(ptr0 + 77) = *param2;
            *(ptr0 + 78) = *param3;
            if(v1 == 0L) {
                goto loc_5B9C40;
            }
            else {
                v0 = *(param0 + 1352);
                ++param3;
                ++param2;
                ++param1;
                --v1;
            }
        }
    loc_5B9C40:
    }
    return param0;
}
