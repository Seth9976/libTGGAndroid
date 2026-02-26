long ExpansionsHaveLandscapes(long param0) {
    long v0 = 0L;
    do {
        int* ptr0 = (int*)(param0 + v0);
        if(*(ptr0 + 2) != *(ptr0 + 3)) {
            int v1 = *(int*)(param0 + v0);
            if(*(int*)(param0 + v0) != 13 && *(int*)(param0 + v0) != 16) {
                if(v1 != 19 && v1 > 10) {
                    return 1L;
                }
                else if(v1 == 19 && ((*(char*)(param0 + v0 + 4L) >>> 2) & 1)) {
                    return 1L;
                }
            }
        }
        v0 += 16L;
    }
    while(v0 != 0x200L);
    return 0L;
}
