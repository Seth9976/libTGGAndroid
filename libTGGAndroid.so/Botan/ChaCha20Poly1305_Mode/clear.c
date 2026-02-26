// Package: Botan::ChaCha20Poly1305_Mode

long Botan::ChaCha20Poly1305_Mode::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    *(long*)(*ptr0 + 16L)((long)ptr0);
    long* ptr1 = *(param0 + 2);
    *(long*)(*(ptr1 + 1) + 16L)((long)(ptr1 + 1));
    jump *(*param0 + 14);
}
