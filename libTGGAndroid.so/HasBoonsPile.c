long HasBoonsPile(long param0) {
    long v0;
    long v1 = -1040L;
    do {
        int* ptr0 = (int*)(param0 + v1);
        if(*(ptr0 + 0x66b) == 3376 || *(ptr0 + 0x66c) == 3376) {
            return (uint32_t)v1 + 1152;
        }
        v0 = v1;
        v1 += 16L;
    }
    while(v0 != -16L);
    return 0L;
}
