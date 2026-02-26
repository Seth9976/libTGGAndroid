// Package: Botan::Cascade_Cipher

long Botan::Cascade_Cipher::clear(uint64_t* param0) {
    long* ptr0 = *(param0 + 2);
    *(long*)(*ptr0 + 16L)((long)ptr0);
    jump *(long*)(**(param0 + 3) + 16L);
}
