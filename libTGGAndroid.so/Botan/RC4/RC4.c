// Package: Botan::RC4

long* Botan::RC4::RC4(long* param0, long param1) {
    *(short*)(param0 + 2) = 0;
    *(__int128*)(param0 + 3) = 0x0X;
    *(__int128*)(param0 + 5) = 0x0X;
    *(__int128*)(param0 + 7) = 0x0X;
    *param0 = &vftable_Botan::RC4;
    *(param0 + 1) = param1;
    *(param0 + 9) = 0L;
    return param0;
}
