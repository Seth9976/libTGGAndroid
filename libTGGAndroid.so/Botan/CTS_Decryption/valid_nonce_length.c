// Package: Botan::CTS_Decryption

long Botan::CTS_Decryption::valid_nonce_length(long* param0, long param1) {
    return *(param0 + 6) == param1;
}
