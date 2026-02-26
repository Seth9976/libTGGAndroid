// Stale decompilation - Refresh this view to re-decompile this code
long AbilitySourceItem(int* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long* ptr0 = (long*)AbilityGetRegistered((long)param0, param1 & 0xffffffffL);
    int v0 = *(int*)(ptr0 + 5);
    if(*(int*)(ptr0 + 5) == 0) {
        long v1 = (uint64_t)*(short*)((char*)ptr0 + 28L);
        if(*(short*)((char*)ptr0 + 28L) >= 800) {
            long v2 = __emutls_get_address(&__emutls_v.gContextStack_tl);
            uint64_t* ptr1 = (uint64_t*)(*(int*)((long*)((long)&gvar_10308 + v2) + 1439) * 152L + v2);
            *(int*)(*(ptr1 - 18) + 0x345) = -1;
            int* ptr2 = *(ptr1 - 18);
            *(ptr2 + 1675) = *(ptr2 + 1673);
            long v3 = XTrace("game thread yield (error)", param1, param2, param3, param4, param5, param6, param7);
            xco_yield(v3);
            XTrace("game thread resume (error)", param1, param2, param3, param4, param5, param6, param7);
        }
        v0 = *(int*)((long*)(v1 * 104L + (long)param0) + 846);
    }
    return (uint64_t)2 | ((uint64_t)v0 << 32);
}
