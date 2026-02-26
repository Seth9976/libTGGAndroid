long AttribMapTagExists(uint32_t* param0, int param1) {
    long v0 = (uint64_t)*param0;
    if(*param0 >= 1) {
        int* ptr0 = *(uint64_t*)(param0 + 2);
        while(*ptr0 != param1) {
            long v1 = v0 - 1L;
            --v0;
            ptr0 += 4;
            if(v1 != 0L) {
                continue;
            }
            ptr0 = NULL;
            break;
        }
        return ptr0;
    }
    return 0L;
}
