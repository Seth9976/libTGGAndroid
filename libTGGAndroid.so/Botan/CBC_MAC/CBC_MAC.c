// Package: Botan::CBC_MAC

long* Botan::CBC_MAC::CBC_MAC(long* param0, long param1) {
    *(__int128*)(param0 + 3) = 0x0X;
    *(__int128*)(param0 + 5) = 0x0X;
    *param0 = &vftable_Botan::CBC_MAC;
    *(param0 + 1) = &vftable_Botan::CBC_MAC2;
    *(param0 + 2) = param1;
    return param0;
}
