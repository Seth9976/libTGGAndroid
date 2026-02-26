int* CollectSkipTurnAbilities(int* param0, int* param1, int param2) {
    long v0;
    *(param0 + 0x100) = 0;
    long v1 = (uint64_t)*(param1 + 1648);
    if(*(param1 + 1648) >= 1) {
        int* ptr0 = param1 + 61589;
        do {
            if(*ptr0 == 1 && *(ptr0 + 1) == param2) {
                int v2 = *(param0 + 0x100);
                int v3 = *(ptr0 - 8) * &gvar_10308+2fcf8h;
                *(param0 + 0x100) = v2 + 1;
                *(int*)(v2 * 4L + (long)param0) = v3;
            }
            v0 = v1 - 1L;
            --v1;
            ptr0 += 46;
        }
        while(v0 != 0L);
    }
    return param1;
}
