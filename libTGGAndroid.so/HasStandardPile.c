long HasStandardPile(long param0, int param1) {
    long v0;
    if(param1 != 0) {
        long v1 = -1040L;
        do {
            int* ptr0 = (int*)(param0 + v1);
            if(*(ptr0 + 0x66b) == param1 || *(ptr0 + 0x66c) == param1) {
                return (uint32_t)v1 + 1152;
            }
            v0 = v1;
            v1 += 16L;
        }
        while(v0 != -16L);
    }
    return 0L;
}
