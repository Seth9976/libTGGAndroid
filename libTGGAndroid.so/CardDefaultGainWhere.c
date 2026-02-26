long CardDefaultGainWhere(uint64_t* param0, uint32_t param1) {
    int* ptr0 = *((uint64_t*)(param1 * 104L + (long)param0) + 845);
    long v0 = 0L;
    int* ptr1 = ptr0 + 56;
    int v1 = *ptr1;
    if(*ptr1 != 0) {
        while(v1 != 5) {
            ++v0;
            v1 = *(ptr1 + 48);
            ptr1 += 48;
            if(v1 == 0) {
                return 1004L;
            }
        }
        return (uint64_t)*((int*)((v0 & 0xffffffffL) * 192L + (long)ptr0) + 62);
    }
    return 1004L;
}
