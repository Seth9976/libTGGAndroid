// Package: Botan::Buffered_Computation

long Botan::Buffered_Computation::update_be3(long* param0, long param1) {
    long v0 = (uint64_t)(uint8_t)(param1 >>> 56L) | ((uint64_t)(uint8_t)(param1 >>> 48L) << 8) | ((uint64_t)(uint8_t)(param1 >>> 40L) << 16) | ((uint64_t)(uint8_t)(param1 >>> 32L) << 24) | ((uint64_t)(uint8_t)(param1 >>> 24L) << 32) | ((uint64_t)(uint8_t)(param1 >>> 16L) << 40) | ((uint64_t)(uint8_t)(param1 >>> 8L) << 48) | ((uint64_t)(uint8_t)param1 << 56);
    return *(long*)(*param0 + 24L)((long)param0, (long)&v0, 8L);
}
