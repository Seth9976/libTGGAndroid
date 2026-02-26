// Package: Botan::Curve25519_PublicKey

void Botan::Curve25519_PublicKey::algo_name(char* param0) {
    *param0 = 20;
    *(short*)(param0 + 9L) = 14641;
    *(long*)(param0 + 1L) = 0x3535326576727543L;
    *(param0 + 11L) = 0;
}
