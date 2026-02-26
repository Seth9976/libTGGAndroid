int* CardsetAdd(int* param0, long param1, long param2) {
    int v0 = *(param0 + 1352);
    if(*(param0 + 1352) >= 1) {
        int* ptr0 = param0 + 158;
        long v1 = (uint64_t)v0;
        while(*(long*)(ptr0 - 6) != param1) {
            long v2 = v1 - 1L;
            --v1;
            ptr0 += 8;
            if(v2 != 0L) {
                continue;
            }
            goto loc_5B9B44;
        }
        ++*ptr0;
        return param0;
    }
loc_5B9B44:
    *(param0 + 1352) = v0 + 1;
    long* ptr1 = (long*)((long)v0 * 32L + (long)param0);
    *(ptr1 + 76) = param1;
    *(int*)(ptr1 + 79) = 1;
    *(ptr1 + 77) = param2;
    *(ptr1 + 78) = 0L;
    return param0;
}
