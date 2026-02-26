// Package: Botan

long Botan::decode_gf2m(short* param0) {
    long v0 = (uint64_t)*param0;
    return (uint64_t)((uint32_t)(uint8_t)(v0 >>> 8L) | ((uint32_t)(uint8_t)v0 << 8) | ((uint32_t)0 << 16));
}
