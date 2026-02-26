// Package: Botan::RSA_PrivateKey

long Botan::RSA_PrivateKey::get_p(long* param0) {
    return *(param0 + 4) + 40L;
}
