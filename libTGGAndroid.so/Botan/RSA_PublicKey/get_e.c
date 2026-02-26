// Package: Botan::RSA_PublicKey

long Botan::RSA_PublicKey::get_e(long* param0) {
    return *(param0 + 1) + 40L;
}
