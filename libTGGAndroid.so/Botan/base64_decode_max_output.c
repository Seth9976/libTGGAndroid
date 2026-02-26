// Package: Botan

long Botan::base64_decode_max_output(long param0) {
    return ((((param0 & 0x3L) != 0L ? 4L - (param0 & 0x3L): 0L) + param0) * 3L) >>> 2L;
}
