// Package: Botan::BigInt

long Botan::BigInt::byte_at(uint64_t* param0, long param1) {
    int* ptr0 = *param0;
    if(param1 >>> 2L < (uint64_t)(long*)((long)(long*)((long)*(param0 + 1) - (long)ptr0) >> 2L)) {
        return (uint64_t)(*(int*)((param1 >>> 2L) * 4L + (long)ptr0) >>> ((uint8_t)((__ror__((uint32_t)param1, 29)) & 0x1f) & 0x18));
    }
    return 0L;
}
