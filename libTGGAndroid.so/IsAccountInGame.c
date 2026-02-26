long IsAccountInGame(int* param0, int param1) {
    long v0 = (uint64_t)*(param0 + 1131);
    if(*(param0 + 1131) >= 1) {
        long v1 = 0L;
        int* ptr0 = param0 + 25;
        long v2 = 1L;
        while(*(ptr0 - 1) != 1 || *ptr0 != param1) {
            ++v1;
            v2 = v0 > v1;
            ptr0 += 139;
            if(v0 == v1) {
                break;
            }
        }
        return (uint64_t)((uint32_t)v2 & 1);
    }
    return 0L;
}
