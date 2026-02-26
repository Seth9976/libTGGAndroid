// Package: Botan::CFB_Mode

long Botan::CFB_Mode::valid_nonce_length(long* param0, long param1) {
    if(param1 != 0L) {
        return *(param0 + 9) == param1;
    }
    return 1L;
}
