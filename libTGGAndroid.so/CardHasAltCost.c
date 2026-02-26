long CardHasAltCost(uint64_t* param0, uint32_t param1, int param2) {
    long* ptr0 = *((uint64_t*)(param1 * 104L + (long)param0) + 845);
    long* ptr1 = NULL;
    int* ptr2 = (int*)(ptr0 + 28);
    int v0 = *ptr2;
    if(*ptr2 != 0) {
        while(v0 != 4) {
            ptr1 = (char*)ptr1 + 1L;
            v0 = *(ptr2 + 48);
            ptr2 += 48;
            if(v0 == 0) {
                return 0L;
            }
        }
        long* ptr3 = (long*)((long)(long*)((long)(long*)((long)ptr1 & 0xffffffffL) * 192L) + (long)ptr0);
        return param2 & 1 ? *(ptr3 + 49): *(ptr3 + 31);
    }
    return 0L;
}
