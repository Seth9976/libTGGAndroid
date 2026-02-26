// Package: Botan::RSA_PublicKey

long Botan::RSA_PublicKey::key_length(long* param0) {
    return *(long*)(*(param0 + 1) + 96L);
}
