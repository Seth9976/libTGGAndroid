// Package: Botan::Salsa20

void Botan::Salsa20::name(char* param0) {
    *param0 = 14;
    *(int*)(param0 + 1L) = 1936482643;
    *(int*)(param0 + 4L) = 808608115;
    *(param0 + 8L) = 0;
}
