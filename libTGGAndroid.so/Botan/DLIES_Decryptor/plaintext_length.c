// Package: Botan::DLIES_Decryptor

long* Botan::DLIES_Decryptor::plaintext_length(uint64_t* param0, long param1) {
    uint64_t* ptr0 = *(param0 + 6);
    long* ptr1 = *(param0 + 1);
    long v0 = **ptr0((long)ptr0, param1);
    if((uint64_t)(long*)(v0 + (long)ptr1) > param1) {
        return NULL;
    }
    uint64_t* ptr2 = *(param0 + 6);
    long* ptr3 = *(param0 + 1);
    long v1 = **ptr2((long)ptr2);
    return (long*)((long)(long*)(param1 - (long)ptr3) - v1);
}
