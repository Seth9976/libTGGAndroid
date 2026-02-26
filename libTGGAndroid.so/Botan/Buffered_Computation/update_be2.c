// Package: Botan::Buffered_Computation

long Botan::Buffered_Computation::update_be2(long* param0, long param1) {
    int v0 = (uint32_t)(uint8_t)(param1 >>> 24L) | ((uint32_t)(uint8_t)(param1 >>> 16L) << 8) | ((uint32_t)(uint8_t)(param1 >>> 8L) << 16) | ((uint32_t)(uint8_t)param1 << 24);
    return *(long*)(*param0 + 24L)((long)param0, (long)&v0, 4L);
}
