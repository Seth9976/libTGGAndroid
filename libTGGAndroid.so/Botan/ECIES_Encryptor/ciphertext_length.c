// Package: Botan::ECIES_Encryptor

long* Botan::ECIES_Encryptor::ciphertext_length(uint64_t* param0, long param1) {
    uint64_t* ptr0 = *(param0 + 26);
    long* ptr1 = (long*)((long)*(param0 + 29) - (long)*(param0 + 28));
    long v0 = **ptr0((long)ptr0, param1);
    long* ptr2 = *(param0 + 27);
    long v1 = *(long*)(*ptr2 + 72L)((long)ptr2, param1);
    return (long*)(v0 + v1 + (long)ptr1);
}
