long IsInBanList(long param0, int param1) {
    long v0 = 0L;
loc_80357C:
    do {
        int v1 = *(int*)(param0 + v0 + 3076L);
        if(*(int*)(param0 + v0 + 3076L) != 0) {
            if(param1 == v1) {
                return 1L;
            }
            v0 += 4L;
            if(v0 != 2800L) {
                goto loc_80357C;
            }
            return 0L;
        }
    }
    while(*(int*)(param0 + v0 + 3076L) != 0);
    return 0L;
}
