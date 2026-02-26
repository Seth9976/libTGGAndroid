// Package: Botan

long Botan::encode_gf2m(long param0, short* param1) {
    *param1 = (uint16_t)(uint8_t)(param0 >>> 8L) | ((uint16_t)(uint8_t)param0 << 8);
    return 2L;
}
