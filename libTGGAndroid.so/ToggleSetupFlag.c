int* ToggleSetupFlag(int* param0, long param1, int param2) {
    int v0 = *param0;
    *param0 = (param2 & v0) != 0 ? ~param2 & v0: param2 | v0;
    return param0;
}
