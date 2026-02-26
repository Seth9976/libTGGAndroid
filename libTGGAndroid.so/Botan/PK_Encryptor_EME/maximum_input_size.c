// Package: Botan::PK_Encryptor_EME

long Botan::PK_Encryptor_EME::maximum_input_size(uint64_t* param0) {
    long* ptr0 = *(param0 + 1);
    long v0 = *(long*)(*ptr0 + 8L)((long)ptr0);
    return v0 >>> 3L;
}
