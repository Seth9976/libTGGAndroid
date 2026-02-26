long IsInBlackMarket(long param0, int param1) {
    long v0 = 0L;
loc_6FB80C:
    do {
        int v1 = *(int*)(param0 + v0 + 3788L);
        if(*(int*)(param0 + v0 + 3788L) != 0) {
            if(param1 == v1) {
                return 1L;
            }
            v0 += 4L;
            if(v0 != 240L) {
                goto loc_6FB80C;
            }
            return 0L;
        }
    }
    while(*(int*)(param0 + v0 + 3788L) != 0);
    return 0L;
}
