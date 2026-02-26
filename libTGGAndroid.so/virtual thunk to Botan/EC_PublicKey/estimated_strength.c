// Package: virtual thunk to Botan::EC_PublicKey

long virtual thunk to Botan::EC_PublicKey::estimated_strength(long* param0) {
    long* ptr0 = (long*)(*(long*)(*param0 - 40L) + (long)param0);
    long v0 = *(long*)(*ptr0 + 32L)((long)ptr0);
    return v0 >>> 1L;
}
