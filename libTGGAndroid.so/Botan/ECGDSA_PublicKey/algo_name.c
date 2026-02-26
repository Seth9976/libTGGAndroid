// Package: Botan::ECGDSA_PublicKey

void Botan::ECGDSA_PublicKey::algo_name(char* param0) {
    *param0 = 12;
    *(int*)(param0 + 1L) = 0x44474345;
    *(short*)(param0 + 5L) = 16723;
    *(param0 + 7L) = 0;
}
