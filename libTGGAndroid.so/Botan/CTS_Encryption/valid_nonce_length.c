// Package: Botan::CTS_Encryption

long Botan::CTS_Encryption::valid_nonce_length(long* param0, long param1) {
    return *(param0 + 6) == param1;
}
