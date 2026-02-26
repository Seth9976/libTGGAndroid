// Package: Botan::CBC_Mode

long Botan::CBC_Mode::valid_nonce_length(long* param0, long param1) {
    if(param1 != 0L) {
        return *(param0 + 6) == param1;
    }
    return 1L;
}
