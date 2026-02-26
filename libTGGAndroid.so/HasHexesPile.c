long HasHexesPile(long param0) {
    long v0;
    long v1 = -1040L;
    do {
        int* ptr0 = (int*)(param0 + v1);
        if(*(ptr0 + 0x66b) == 0xd3d || *(ptr0 + 0x66c) == 0xd3d) {
            return (uint32_t)v1 + 1152;
        }
        v0 = v1;
        v1 += 16L;
    }
    while(v0 != -16L);
    return 0L;
}
