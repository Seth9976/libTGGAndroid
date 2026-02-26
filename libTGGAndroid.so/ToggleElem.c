int* ToggleElem(int* param0, int* param1, uint32_t param2, int param3) {
    int v0;
    if((int)param2 >= 1) {
        long v1 = param2;
        int* ptr0 = param0;
        while(*ptr0 != param3) {
            long v2 = v1 - 1L;
            --v1;
            ++ptr0;
            if(v2 != 0L) {
                continue;
            }
            goto loc_74B250;
        }
        int v3 = *param1;
        param3 = 0;
        *param1 = v3 - 1;
        *ptr0 = *(int*)((v3 - 1L) * 4L + (long)param0);
        v0 = *param1;
        *(int*)(v0 * 4L + (long)param0) = param3;
        return param0;
    }
loc_74B250:
    v0 = *param1;
    if(*param1 != param2) {
        *param1 = v0 + 1;
        *(int*)(v0 * 4L + (long)param0) = param3;
    }
    return param0;
}
