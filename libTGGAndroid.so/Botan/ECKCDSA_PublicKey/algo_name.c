// Package: Botan::ECKCDSA_PublicKey

void Botan::ECKCDSA_PublicKey::algo_name(char* param0) {
    *param0 = 14;
    *(int*)(param0 + 1L) = 0x434b4345;
    *(int*)(param0 + 4L) = 0x41534443;
    *(param0 + 8L) = 0;
}
