long HasAbility2(int* param0, int param1, int param2) {
    long v0;
    long v1 = (uint64_t)*(param0 + 1648);
    if(*(param0 + 1648) >= 1) {
        int* ptr0 = param0 + 0xf088;
        do {
            if((*ptr0 == param1 || *ptr0 == -1) && *(ptr0 + 31) == param2) {
                return 1L;
            }
            v0 = v1 - 1L;
            --v1;
            ptr0 += 46;
        }
        while(v0 != 0L);
    }
    return 0L;
}
