int* ToggleBit(int* param0, int param1) {
    int v0 = *param0;
    *param0 = (param1 & v0) != 0 ? ~param1 & v0: param1 | v0;
    return param0;
}
