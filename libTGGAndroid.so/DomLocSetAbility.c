int DomLocSetAbility(__int128* param0, int param1, int param2, int param3) {
    *param0 = 0x0X;
    *(param0 + 1) = 0x0X;
    *(param0 + 6) = 0x0X;
    *(param0 + 7) = 0x0X;
    *(param0 + 4) = 0x0X;
    *(param0 + 5) = 0x0X;
    *(param0 + 2) = 0x0X;
    *(param0 + 3) = 0x0X;
    *(int*)param0 = param1;
    *(int*)((char*)param0 + 8L) = param2;
    *(int*)((char*)param0 + 12L) = param3;
    *(int*)((char*)param0 + 24L) = 0;
    return param1;
}
