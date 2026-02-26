// Stale decompilation - Refresh this view to re-decompile this code
long AbilitySource(int* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    int* ptr0 = (int*)AbilityGetRegistered((long)param0, param1 & 0xffffffffL);
    long result = (uint64_t)*(ptr0 + 10);
    if(*(ptr0 + 10) != 0) {
        return result;
    }
    long v0 = (uint64_t)*(short*)(ptr0 + 7);
    if(*(short*)(ptr0 + 7) >= 800) {
        long v1 = __emutls_get_address(&__emutls_v.gContextStack_tl);
        uint64_t* ptr1 = (uint64_t*)(*(int*)((long*)((long)&gvar_10308 + v1) + 1439) * 152L + v1);
        *(int*)(*(ptr1 - 18) + 0x345) = -1;
        int* ptr2 = *(ptr1 - 18);
        *(ptr2 + 1675) = *(ptr2 + 1673);
        long v2 = XTrace("game thread yield (error)", param1, param2, param3, param4, param5, param6, param7);
        xco_yield(v2);
        XTrace("game thread resume (error)", param1, param2, param3, param4, param5, param6, param7);
    }
    return *(int*)((long*)(v0 * 104L + (long)param0) + 846) ? 1L: (uint64_t)*(ptr0 + 9);
}
