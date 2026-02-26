// Package: Botan::EME_PKCS1v15

long Botan::EME_PKCS1v15::maximum_input_size(long param0, long param1) {
    return param1 > 87L ? (param1 >>> 3L) - 10L: 0L;
}
