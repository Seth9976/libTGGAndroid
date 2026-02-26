// Package: Botan::RFC4880_S2K

long* Botan::RFC4880_S2K::RFC4880_S2K(long* param0, long param1, long param2) {
    *(param0 + 2) = param2;
    *param0 = &vftable_Botan::RFC4880_S2K;
    *(param0 + 1) = param1;
    return param0;
}
