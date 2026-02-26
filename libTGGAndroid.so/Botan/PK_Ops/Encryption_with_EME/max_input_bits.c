// Package: Botan::PK_Ops::Encryption_with_EME

long Botan::PK_Ops::Encryption_with_EME::max_input_bits(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    long v0 = *(*param0 + 5)((long)param0);
    long v1 = *(long*)(*ptr0 + 16L)((long)ptr0, v0);
    return v1 * 8L;
}
