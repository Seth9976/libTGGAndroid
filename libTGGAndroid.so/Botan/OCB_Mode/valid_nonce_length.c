// Package: Botan::OCB_Mode

long Botan::OCB_Mode::valid_nonce_length(long* param0, long param1) {
    if(param1 != 0L) {
        long v0 = *(param0 + 11);
        if(v0 == 16L) {
            return param1 < 16L;
        }
        return v0 - 1L > param1;
    }
    return 0L;
}
