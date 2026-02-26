// Package: Botan::ChaCha20Poly1305_Mode

long Botan::ChaCha20Poly1305_Mode::update_len(uint64_t* param0, long param1) {
    long v0;
    long* ptr0 = *(param0 + 2);
    return *(long*)(*ptr0 + 24L)((long)ptr0, (long)&v0, 8L);
}
