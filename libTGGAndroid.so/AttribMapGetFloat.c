long* AttribMapGetFloat(long* param0, int* param1, uint32_t param2) {
    long v0 = (uint64_t)*param1;
    if(*param1 >= 1) {
        int* ptr0 = (int*)(*(long*)(param1 + 2) + 8L);
        while(*(ptr0 - 2) != param2) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 4;
            if(v1 == 0L) {
                return param0;
            }
        }
    }
    return param0;
}
