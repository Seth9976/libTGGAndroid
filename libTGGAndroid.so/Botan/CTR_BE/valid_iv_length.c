// Package: Botan::CTR_BE

long Botan::CTR_BE::valid_iv_length(long* param0, long param1) {
    return *(param0 + 2) >= param1;
}
