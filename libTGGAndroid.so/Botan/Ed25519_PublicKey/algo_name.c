// Package: Botan::Ed25519_PublicKey

void Botan::Ed25519_PublicKey::algo_name(char* param0) {
    *param0 = 14;
    *(int*)(param0 + 1L) = 0x35326445;
    *(int*)(param0 + 4L) = 0x39313535;
    *(param0 + 8L) = 0;
}
