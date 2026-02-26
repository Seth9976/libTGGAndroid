int DlcFilterVisible(int* param0, uint32_t param1, uint64_t* param2) {
    long v0;
    int result;
    int v1;
    if((int)param1 >= 1) {
        int* ptr0 = param0;
        result = 0;
        long v2 = param1;
        do {
            if((*(ptr0 + 1) | 0x4) != 7) {
                *(uint64_t*)(result * 8L + (long)param2) = ptr0;
                result = v1 + 1;
            }
            v0 = v2 - 1L;
            --v2;
            ptr0 += 32;
        }
        while(v0 != 0L);
    }
    else {
        result = 0;
    }
    return result;
}
