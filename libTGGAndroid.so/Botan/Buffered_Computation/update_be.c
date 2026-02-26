// Package: Botan::Buffered_Computation

long Botan::Buffered_Computation::update_be(long* param0, long param1) {
    short v0 = (uint16_t)(uint8_t)(param1 >>> 8L) | ((uint16_t)(uint8_t)param1 << 8);
    return *(long*)(*param0 + 24L)((long)param0, (long)&v0, 2L);
}
