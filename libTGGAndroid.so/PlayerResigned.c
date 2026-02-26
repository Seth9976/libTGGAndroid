long PlayerResigned(int* param0, int param1) {
    long v0 = (uint64_t)*(param0 + 1133);
    if(*(param0 + 1133) >= 1) {
        int* ptr0 = param0 + 29;
        while(*(ptr0 - 1) != param1) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 139;
            if(v1 == 0L) {
                return 0L;
            }
        }
        v0 = (uint64_t)(*ptr0 - 1001);
        if(*ptr0 - 1001 <= 4) {
            return (uint64_t)((25 >>> v0) & 1);
        }
    }
    return 0L;
}
