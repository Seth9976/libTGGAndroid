// Package: Botan

long Botan::base64_encode_max_output(uint64_t param0) {
    return ((uint64_t)((((param0 / 3L * 3L != param0 ? (param0 - param0 / 3L * 3L) ^ 0x3L: 0L) + param0) * 0xAAAAAAAAAAAAAAABX) >>> 0x40X) * 2L) & 0xfffffffffffffffcL;
}
