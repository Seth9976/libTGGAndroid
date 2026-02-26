int CalcMateryCutoff(long param0, uint32_t param1) {
    int v0;
    long v1;
    long v2;
    long v3;
    int* ptr0;
    if((int)param1 >= 1) {
        long v4 = param1;
        if(param1 <= 8) {
            v3 = 0L;
        }
        else {
            v3 = v4 - ((v4 & 0x7L) != 0L ? v4 & 0x7L: 8L);
            long v5 = v4 - ((v4 & 0x7L) != 0L ? v4 & 0x7L: 8L);
            do {
                v2 = v5 - 8L;
                v5 -= 8L;
            }
            while(v2 != 0L);
        }
        int* ptr1 = (int*)(v3 * 8L + param0 + 4L);
        long v6 = v4 - v3;
        do {
            int v7 = *ptr1;
            ptr1 += 2;
            v1 = v6 - 1L;
            --v6;
            v0 = (uint32_t)ptr0 + v7;
        }
        while(v1 != 0L);
        ptr0 = param0 + 4L;
        while((uint32_t)((v0 * 0x66666667L) >>> 63L) + (uint32_t)((v0 * 0x66666667L) >> 34L) > (uint32_t)v6 + *ptr0) {
            v1 = v4 - 1L;
            --v4;
            ptr0 += 2;
            if(v1 == 0L) {
                return 0;
            }
        }
        return (uint64_t)*(ptr0 - 1);
    }
    return 0;
}
