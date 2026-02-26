// Package: Botan::ECDSA_PublicKey

uint64_t* Botan::ECDSA_PublicKey::ECDSA_PublicKey(uint64_t* param0, uint64_t* param1) {
    long* ptr0 = *param1;
    *param0 = *param1;
    *(uint64_t*)(*(ptr0 - 17) + (long)param0) = *(param1 + 1);
    *(uint64_t*)(*(*param0 - 18) + (long)param0) = *(param1 + 2);
    return param0;
}
