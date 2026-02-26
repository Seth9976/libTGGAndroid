// Package: Botan::CTS_Encryption

long Botan::CTS_Encryption::minimum_final_size(long* param0) {
    return *(param0 + 6) + 1L;
}
