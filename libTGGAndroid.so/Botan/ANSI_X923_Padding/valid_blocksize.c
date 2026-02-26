// Package: Botan::ANSI_X923_Padding

long Botan::ANSI_X923_Padding::valid_blocksize(long param0, long param1) {
    return param1 - 3L < 253L;
}
