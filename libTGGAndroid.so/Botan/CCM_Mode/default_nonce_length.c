// Package: Botan::CCM_Mode

long Botan::CCM_Mode::default_nonce_length(long* param0) {
    return 15L - *(param0 + 2);
}
