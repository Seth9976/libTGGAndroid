// Package: Botan::BLAKE2b

long Botan::BLAKE2b::output_length(long* param0) {
    return *(param0 + 1) >>> 3L;
}
