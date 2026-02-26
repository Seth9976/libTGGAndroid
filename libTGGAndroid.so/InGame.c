long InGame(int* param0, int param1) {
    int v0;
    long v1;
    long v2 = (uint64_t)*(param0 + 1354);
    if(*(param0 + 1354) >= 1) {
        if(*(param0 + 1692) == param1) {
            return 1L;
        }
        int* ptr0 = param0 + 0x6b6;
        long v3 = 1L;
        do {
            v1 = v3;
            if(v2 == v3) {
                break;
            }
            v0 = *ptr0;
            ptr0 += 26;
            v3 = v1 + 1L;
        }
        while(param1 != v0);
        return v2 > v1;
    }
    return 0L;
}
