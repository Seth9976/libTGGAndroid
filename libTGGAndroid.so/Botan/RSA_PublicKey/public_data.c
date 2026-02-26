// Package: Botan::RSA_PublicKey

uint64_t* Botan::RSA_PublicKey::public_data(uint64_t* param0, uint64_t* param1) {
    long* ptr0 = *(param1 + 2);
    *param0 = *(param1 + 1);
    *(param0 + 1) = ptr0;
    if(ptr0 != 0L) {
        ++*(ptr0 + 1);
    }
    return param1;
}
