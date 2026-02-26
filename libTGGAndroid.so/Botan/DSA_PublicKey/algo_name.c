// Package: Botan::DSA_PublicKey

void Botan::DSA_PublicKey::algo_name(char* param0) {
    *param0 = 6;
    *(int*)(param0 + 1L) = 0x415344;
}
