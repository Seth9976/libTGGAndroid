long AttribMapGetInt(long* param0, int* param1, uint32_t param2) {
    int* ptr0;
    long v0 = (uint64_t)*param1;
    if(*param1 >= 1) {
        ptr0 = *(long*)(param1 + 2) + 8L;
        while(*(ptr0 - 2) != param2) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 4;
            if(v1 != 0L) {
                continue;
            }
            ptr0 = *(long*)(param2 * 8L + *(param0 + 3)) + 72L;
            return (uint64_t)*ptr0;
        }
    }
    else {
        ptr0 = *(long*)(param2 * 8L + *(param0 + 3)) + 72L;
    }
    return (uint64_t)*ptr0;
}
