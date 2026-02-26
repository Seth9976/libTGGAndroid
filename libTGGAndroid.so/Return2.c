int* Return2(int* param0, uint32_t param1, int* param2, int* param3) {
    long v0;
    if((int)param1 >= 1) {
        long v1 = param1;
        do {
            int v2 = *param0;
            ++param0;
            int v3 = *param3;
            v0 = v1 - 1L;
            --v1;
            *param3 = v3 + 1;
            *(int*)(v3 * 4L + (long)param2) = v2;
        }
        while(v0 != 0L);
    }
    return param0;
}
