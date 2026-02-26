// Package: Botan::GOST_28147_89_Params

long Botan::GOST_28147_89_Params::sbox_entry(long* param0, long param1, long param2) {
    return (param1 & 0x1L) != 0L ? (uint64_t)((uint32_t)*(char*)(param2 * 4L + (param1 >>> 1L) + *param0) & 0xF): (uint64_t)((uint32_t)*(char*)(param2 * 4L + (param1 >>> 1L) + *param0) >>> 4);
}
