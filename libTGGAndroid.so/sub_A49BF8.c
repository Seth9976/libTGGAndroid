long* sub_A49BF8(long* param0, long param1, uint8_t* param2, uint8_t* param3, long* param4, long param5, long param6, long param7) {
    char v0;
    long v1;
    long* ptr0;
    long v2;
    long v3;
    long v4;
    long v5;
    *(short*)&v0 = 0;
    Botan::HashFunction::create_or_throw(param1, (long)&v0, (long)param2, (long)param3, (long)param4);
    if(v0 & 1) {
        operator delete(v1, param1, (long)param2, (long)param3, (long)param4, param5, param6, param7);
    }
    char v6 = ((uint32_t)*param2 & 1) == 0;
    *(long*)(*ptr0 + 24L)((long)ptr0, (long)(v6 ? (uint64_t*)(param2 + 1L): *(uint64_t*)(param2 + 16L)), (long)(v6 ? (long*)((uint64_t)*param2 >>> 1L): *(uint64_t*)(param2 + 8L)));
    *(short*)&v0 = 14850;
    char v7 = 0;
    *(long*)(*ptr0 + 24L)((long)ptr0, (long)(long*)((long)&v0 | 0x1L), 1L);
    if(v0 & 1) {
        operator delete(v1, param1, (long)param2, (long)param3, (long)param4, param5, param6, param7);
    }
    char v8 = ((uint32_t)*param3 & 1) == 0;
    *(long*)(*ptr0 + 24L)((long)ptr0, (long)(v8 ? (uint64_t*)(param3 + 1L): *(uint64_t*)(param3 + 16L)), (long)(v8 ? (long*)((uint64_t)*param3 >>> 1L): *(uint64_t*)(param3 + 8L)));
    Botan::Buffered_Computation::final((long)ptr0);
    long v9 = *param4;
    *(long*)(*ptr0 + 24L)((long)ptr0, v9, *(param4 + 1) - v9);
    long v10 = *(long*)&v0;
    *(long*)(*ptr0 + 24L)((long)ptr0, v10, v2 - v10);
    Botan::Buffered_Computation::final((long)ptr0);
    *param0 = 0L;
    *(param0 + 1) = 0L;
    *(param0 + 2) = 0L;
    *(param0 + 3) = -1L;
    *(int*)(param0 + 4) = 1;
    Botan::BigInt::binary_decode((long)param0, v3, v4 - v3);
    if(v3 != 0L) {
        v4 = v3;
        Botan::deallocate_memory(v3, v5 - v3, 1L);
    }
    long v11 = *(long*)&v0;
    if(v11 != 0L) {
        v2 = v11;
        Botan::deallocate_memory(v11, v1 - v11, 1L);
    }
    long* result = ptr0;
    ptr0 = NULL;
    if(result != 0L) {
        result = *(long*)(*result + 16L)((long)result);
    }
    return result;
}
