// Package: Botan::OAEP

long Botan::OAEP::maximum_input_size(long* param0, long param1) {
    long v0 = *(param0 + 2) - *(param0 + 1);
    return param1 >>> 3L > ((uint64_t)1 | ((uint64_t)(v0 & 0x7fffffffffffffffL) << 1)) ? ~(v0 * 2L) + (param1 >>> 3L): 0L;
}
