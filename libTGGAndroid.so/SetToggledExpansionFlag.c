long SetToggledExpansionFlag(long param0, uint32_t param1, int param2) {
    int* ptr0 = (int*)(param1 * 4L + param0);
    *(ptr0 + 0x1dd8) = 1;
    *(ptr0 + 0x1e00) = param2;
    return param0;
}
