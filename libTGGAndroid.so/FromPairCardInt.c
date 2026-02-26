int FromPairCardInt(int* param0, int param1, int param2) {
    *(param0 + 1) = param1;
    *(param0 + 2) = param2;
    *param0 = 3;
    *(param0 + 0x321) = 2;
    return param1;
}
