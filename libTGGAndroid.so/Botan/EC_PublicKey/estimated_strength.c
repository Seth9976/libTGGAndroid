// Package: Botan::EC_PublicKey

long Botan::EC_PublicKey::estimated_strength(long* param0) {
    long v0 = *(long*)(*param0 + 32L)((long)param0);
    return v0 >>> 1L;
}
