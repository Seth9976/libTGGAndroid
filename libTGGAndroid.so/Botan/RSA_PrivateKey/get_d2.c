// Package: Botan::RSA_PrivateKey

long Botan::RSA_PrivateKey::get_d2(long* param0) {
    return *(param0 + 4) + 160L;
}
