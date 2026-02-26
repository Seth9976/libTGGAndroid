// Package: Botan::Argon2

long* Botan::Argon2::Argon2(long* param0, char param1, long param2, long param3, long param4) {
    *(char*)(param0 + 1) = param1;
    *(param0 + 2) = param2;
    *(param0 + 3) = param3;
    *(param0 + 4) = param4;
    *param0 = &vftable_Botan::Argon2;
    return param0;
}
