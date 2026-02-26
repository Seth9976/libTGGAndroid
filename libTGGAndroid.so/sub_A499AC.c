long* sub_A499AC(long* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    char v0;
    long v1;
    long* ptr0;
    long v2;
    *(short*)&v0 = 0;
    Botan::HashFunction::create_or_throw(param1, (long)&v0, param2, param3, param4);
    if(v0 & 1) {
        operator delete(v1, param1, param2, param3, param4, param5, param6, param7);
    }
    Botan::BigInt::encode_1363();
    long v3 = *(long*)&v0;
    *(long*)(*ptr0 + 24L)((long)ptr0, v3, v2 - v3);
    long v4 = *(long*)&v0;
    if(v4 != 0L) {
        v2 = v4;
        Botan::deallocate_memory(v4, v1 - v4, 1L);
    }
    Botan::BigInt::encode_1363();
    long v5 = *(long*)&v0;
    *(long*)(*ptr0 + 24L)((long)ptr0, v5, v2 - v5);
    long v6 = *(long*)&v0;
    if(v6 != 0L) {
        v2 = v6;
        Botan::deallocate_memory(v6, v1 - v6, 1L);
    }
    Botan::Buffered_Computation::final((long)ptr0);
    long v7 = *(long*)&v0;
    *param0 = 0L;
    *(param0 + 1) = 0L;
    *(param0 + 2) = 0L;
    *(param0 + 3) = -1L;
    *(int*)(param0 + 4) = 1;
    Botan::BigInt::binary_decode((long)param0, v7, v2 - v7);
    long v8 = *(long*)&v0;
    if(v8 != 0L) {
        v2 = v8;
        Botan::deallocate_memory(v8, v1 - v8, 1L);
    }
    long* result = ptr0;
    ptr0 = NULL;
    if(result != 0L) {
        result = *(long*)(*result + 16L)((long)result);
    }
    return result;
}
