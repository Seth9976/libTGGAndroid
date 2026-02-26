// Package: Botan::RSA_PublicKey

void Botan::RSA_PublicKey::algo_name(char* param0) {
    *param0 = 6;
    *(int*)(param0 + 1L) = 0x415352;
}
