long SetExpansionFlag(long param0, int param1, int param2) {
    long v0 = 0L;
    do {
        long v1 = (uint64_t)*(int*)(param0 + v0 + 2504L);
        if(*(int*)(param0 + v0 + 2504L) == 0) {
            return param0;
        }
        if((uint32_t)v1 == param1) {
            *(int*)(param0 + v0 + 0x9ccL) = param2;
        }
        v0 += 16L;
    }
    while(v0 != 0x200L);
    return param0;
}
