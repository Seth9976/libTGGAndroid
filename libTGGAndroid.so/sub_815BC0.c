// Stale decompilation - Refresh this view to re-decompile this code
long sub_815BC0(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    int* ptr0 = *param0;
    int* ptr1 = *param0;
    if((uint16_t)param1 >= 800) {
        long v0 = __emutls_get_address(&__emutls_v.gContextStack_tl, param1, param2, param3, param4, param5, param6, param7);
        uint64_t* ptr2 = (uint64_t*)(*(int*)((long*)((long)&gvar_10308 + v0) + 1439) * 152L + v0);
        *(int*)(*(ptr2 - 18) + 0x345) = -1;
        int* ptr3 = *(ptr2 - 18);
        *(ptr3 + 1675) = *(ptr3 + 1673);
        long v1 = XTrace("game thread yield (error)", param1, param2, param3, param4, param5, param6, param7);
        xco_yield(v1);
        XTrace("game thread resume (error)", param1, param2, param3, param4, param5, param6, param7);
        ptr1 = *param0;
    }
    int v2 = *(int*)((long*)((uint64_t)(uint16_t)param1 * 104L + (long)ptr0) + 846);
    if((uint16_t)param2 >= 800) {
        long v3 = __emutls_get_address(&__emutls_v.gContextStack_tl, param1, param2, param3, param4, param5, param6, param7);
        uint64_t* ptr4 = (uint64_t*)(*(int*)((long*)((long)&gvar_10308 + v3) + 1439) * 152L + v3);
        *(int*)(*(ptr4 - 18) + 0x345) = -1;
        int* ptr5 = *(ptr4 - 18);
        *(ptr5 + 1675) = *(ptr5 + 1673);
        long v4 = XTrace("game thread yield (error)", param1, param2, param3, param4, param5, param6, param7);
        xco_yield(v4);
        XTrace("game thread resume (error)", param1, param2, param3, param4, param5, param6, param7);
    }
    int v5 = *(int*)((long*)((uint64_t)(uint16_t)param2 * 104L + (long)ptr1) + 846);
    return v5 <= v2 ? (uint64_t)((v5 != v2 && (((v2 - v5) ^ v2) & (v5 ^ v2)) < 0 == *(int*)((long*)((uint64_t)(uint16_t)param2 * 104L + (long)ptr1) + 846) > v2) | (uint32_t)param1 < (uint32_t)param2): 0L;
}
