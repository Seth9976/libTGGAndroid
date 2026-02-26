// Package: Botan::DH_PublicKey

void Botan::DH_PublicKey::algo_name(char* param0) {
    *param0 = 4;
    *(short*)(param0 + 1L) = 0x4844;
    *(param0 + 3L) = 0;
}
