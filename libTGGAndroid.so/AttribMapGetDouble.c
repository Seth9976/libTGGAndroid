long* AttribMapGetDouble(long* param0, int* param1, uint32_t param2) {
    long v0 = (uint64_t)*param1;
    if(*param1 >= 1) {
        long* ptr0 = (long*)(*(long*)(param1 + 2) + 8L);
    loc_896F0C:
        while(*(int*)(ptr0 - 1) != param2) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 2;
            if(v1 != 0L) {
                goto loc_896F0C;
            }
            goto loc_896F2C;
        }
    loc_896F2C:
    }
    return param0;
}
