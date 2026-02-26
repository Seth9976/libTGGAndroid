// Package: Botan::PSSR_Raw

long* Botan::PSSR_Raw::PSSR_Raw2(long* param0, long param1, long param2) {
    *(param0 + 2) = 0L;
    *(param0 + 3) = 0L;
    *(param0 + 4) = 0L;
    *(param0 + 5) = param2;
    *param0 = &vftable_Botan::PSSR_Raw;
    *(param0 + 1) = param1;
    *(char*)(param0 + 6) = 1;
    return param0;
}
