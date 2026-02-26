long sub_98F9F0(uint64_t* param0, long* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long* ptr0 = *param0;
    *param0 = param1;
    if(ptr0 != 0L) {
        long v0 = *(ptr0 + 5);
        if(v0 != 0L) {
            long v1 = *(ptr0 + 7);
            *(ptr0 + 6) = v0;
            Botan::deallocate_memory(v0, (v1 - v0) >> 2L, 4L);
        }
        long v2 = *ptr0;
        if(v2 != 0L) {
            long v3 = *(ptr0 + 2);
            *(ptr0 + 1) = v2;
            Botan::deallocate_memory(v2, (v3 - v2) >> 2L, 4L);
        }
        operator delete((long)ptr0, (long)param1, param2, param3, param4, param5, param6, param7);
        return (long)ptr0;
    }
    return (long)param0;
}
