// Package: Botan::Scrypt_Family

void Botan::Scrypt_Family::name(char* param0) {
    *param0 = 12;
    *(int*)(param0 + 1L) = 2037539667;
    *(short*)(param0 + 5L) = 0x7470;
    *(param0 + 7L) = 0;
}
