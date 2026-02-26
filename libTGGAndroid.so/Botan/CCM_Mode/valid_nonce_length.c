// Package: Botan::CCM_Mode

long Botan::CCM_Mode::valid_nonce_length(long* param0, long param1) {
    return 15L - *(param0 + 2) == param1;
}
