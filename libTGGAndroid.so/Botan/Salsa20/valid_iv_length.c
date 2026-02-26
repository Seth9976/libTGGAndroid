// Package: Botan::Salsa20

long Botan::Salsa20::valid_iv_length(long param0, long param1) {
    return (uint64_t)((param1 & 0xfffffffffffffff7L) == 0L | param1 == 24L);
}
