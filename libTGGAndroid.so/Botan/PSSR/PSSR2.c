// Package: Botan::PSSR

long* Botan::PSSR::PSSR2(long* param0, long param1, long param2) {
    *(param0 + 1) = param1;
    *(param0 + 2) = param2;
    *(char*)(param0 + 3) = 1;
    *param0 = &vftable_Botan::PSSR;
    return param0;
}
