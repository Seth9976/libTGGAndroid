// Stale decompilation - Refresh this view to re-decompile this code
void sub_D059B0(long* param0, uint64_t* param1) {
    long* ptr0;
    void* ptr1;
    long v0;
    long v1 = (uint64_t)(v0 & 0xffffffffffffL) | ((uint64_t)80 << 48);
    if(*(param0 + 1) != 0L) {
        long* ptr2 = *(param1 + 1);
        long v2 = 0L;
        char v3 = 1;
        do {
            long* ptr3 = ptr2;
            if(!v3) {
                size_t v4 = *(size_t*)(param1 + 2);
                if((size_t)((char*)ptr2 + 2L) < v4) {
                    ptr1 = *param1;
                    ptr0 = ptr2;
                }
                else {
                    void* __ptr = *param1;
                    v4 *= 2L;
                    *(size_t*)(param1 + 2) = (size_t)((char*)ptr2 + 2L) > v4 ? (size_t)((char*)ptr2 + 2L): v4;
                    ptr1 = realloc2(__ptr, (size_t)((char*)ptr2 + 2L) > v4 ? (size_t)((char*)ptr2 + 2L): v4);
                    *param1 = ptr1;
                    if(ptr1 == 0L) {
                        /*NO_RETURN*/ std::terminate(0L);
                    }
                    ptr0 = *(param1 + 1);
                }
                *(short*)((long)ptr1 + (long)ptr0) = 0x202c;
                ptr3 = (char*)*(param1 + 1) + 2L;
                *(param1 + 1) = (long*)((char*)*(param1 + 1) + 2L);
            }
            long* ptr4 = *(uint64_t*)(v2 * 8L + *param0);
            *(long*)(*ptr4 + 32L)((long)ptr4, (long)param1);
            if(*(char*)((char*)ptr4 + 9L) != 1) {
                *(long*)(*ptr4 + 40L)((long)ptr4, (long)param1);
            }
            long* ptr5 = *(param1 + 1);
            if(ptr5 == ptr3) {
                *(param1 + 1) = ptr2;
            }
            else {
                v3 = 0;
                ptr2 = ptr5;
            }
            ++v2;
        }
        while(*(param0 + 1) != v2);
    }
    jump (uint64_t)(v1 & 0xffffffffffffL);
}
