int DomLocSetCard(int* param0, int param1, int param2, int param3, int param4) {
    *param0 = param1;
    *(param0 + 1) = param2;
    *(param0 + 2) = param3;
    *(param0 + 3) = param4;
    *(__int128*)(param0 + 24) = 0x0X;
    *(__int128*)(param0 + 28) = 0x0X;
    *(__int128*)(param0 + 16) = 0x0X;
    *(__int128*)(param0 + 20) = 0x0X;
    *(__int128*)(param0 + 8) = 0x0X;
    *(__int128*)(param0 + 12) = 0x0X;
    *(__int128*)(param0 + 4) = 0x0X;
    *(param0 + 6) = 0;
    return param1;
}
