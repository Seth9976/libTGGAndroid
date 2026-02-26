// Package: Botan::GOST_28147_89_Params

long Botan::GOST_28147_89_Params::sbox_pair(long* param0, long param1, long param2) {
    long v0 = *param0;
    return (uint64_t)(uint32_t)((uint64_t)(((uint32_t)*(char*)(((uint64_t)((uint32_t)param2 * 4) & 0x3cL) + param1 + v0) >>> 4) & 0xF) | ((uint64_t)(uint32_t)*(char*)(((param2 >>> 2L) & 0x3ffffffffffffffcL) + param1 + v0) << 4) | ((uint64_t)0 << 36));
}
