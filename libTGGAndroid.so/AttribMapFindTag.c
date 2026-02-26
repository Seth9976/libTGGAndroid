int* AttribMapFindTag(uint32_t* param0, int param1) {
    int* result;
    long v0 = (uint64_t)*param0;
    if(*param0 >= 1) {
        result = *(uint64_t*)(param0 + 2);
        while(*result != param1) {
            long v1 = v0 - 1L;
            --v0;
            result += 4;
            if(v1 != 0L) {
                continue;
            }
            return NULL;
        }
    }
    else {
        result = NULL;
    }
    return result;
}
