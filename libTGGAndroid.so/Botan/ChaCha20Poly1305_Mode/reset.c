// Package: Botan::ChaCha20Poly1305_Mode

long* Botan::ChaCha20Poly1305_Mode::reset(long* param0) {
    long v0 = *(param0 + 3);
    *(param0 + 6) = 0L;
    *(param0 + 7) = 0L;
    *(param0 + 4) = v0;
    return param0;
}
