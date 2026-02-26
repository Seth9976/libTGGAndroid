int FromSingleInt(int* param0, int param1) {
    *param0 = 2;
    *(param0 + 1) = param1;
    *(param0 + 0x321) = 1;
    return param1;
}
