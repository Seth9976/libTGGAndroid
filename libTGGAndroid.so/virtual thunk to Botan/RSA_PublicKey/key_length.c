// Package: virtual thunk to Botan::RSA_PublicKey

long virtual thunk to Botan::RSA_PublicKey::key_length(long* param0) {
    return *(long*)(*((long*)(*(long*)(*param0 - 48L) + (long)param0) + 1) + 96L);
}
