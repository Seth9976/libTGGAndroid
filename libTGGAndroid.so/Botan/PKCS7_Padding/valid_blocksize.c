// Package: Botan::PKCS7_Padding

long Botan::PKCS7_Padding::valid_blocksize(long param0, long param1) {
    return param1 - 3L < 253L;
}
