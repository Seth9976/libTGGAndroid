// Package: Botan::ChaCha20Poly1305_Encryption

long Botan::ChaCha20Poly1305_Encryption::process(uint64_t* param0, long param1, long param2) {
    long* ptr0 = *(param0 + 1);
    *(long*)(*ptr0 + 48L)((long)ptr0, param1, param1, param2);
    long* ptr1 = *(param0 + 2);
    *(long*)(*ptr1 + 24L)((long)ptr1, param1, param2);
    *(param0 + 7) = (long*)((long)*(param0 + 7) + param2);
    return param2;
}
