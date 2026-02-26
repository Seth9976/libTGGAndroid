long OpponentHasAbility(int* param0, int param1, int param2) {
    long v0 = (uint64_t)*(param0 + 1648);
    if(*(param0 + 1648) >= 1) {
        int* ptr0 = param0 + 0xf088;
        while(*ptr0 != param1 || *(ptr0 + 31) != param2) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 46;
            if(v1 == 0L) {
                return 0L;
            }
        }
        return 1L;
    }
    return 0L;
}
