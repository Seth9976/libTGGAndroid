// Package: Botan::CTS_Decryption

long Botan::CTS_Decryption::minimum_final_size(long* param0) {
    return *(param0 + 6) + 1L;
}
