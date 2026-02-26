// Package: Botan::ChaCha

int Botan::ChaCha::valid_iv_length(long param0, long param1) {
    if(__ror__(param1, 2L) <= 6L) {
        return (uint64_t)((77 >>> (__ror__(param1, 2L))) & 1);
    }
    return 0;
}
