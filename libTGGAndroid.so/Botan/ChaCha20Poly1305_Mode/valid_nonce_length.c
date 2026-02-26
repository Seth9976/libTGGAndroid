// Package: Botan::ChaCha20Poly1305_Mode

long Botan::ChaCha20Poly1305_Mode::valid_nonce_length(long param0, long param1) {
    return (uint64_t)((param1 & 0xfffffffffffffffbL) == 8L | param1 == 24L);
}
