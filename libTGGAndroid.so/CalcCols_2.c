long CalcCols_2(long param0, int param1, char* param2) {
    int v0 = (uint32_t)(param0 >>> 32L) - 1 < 2 ? param1 + 8: param1;
    int v1 = (uint32_t)param0 == 11 ? ((uint32_t)(param0 >>> 32L) - 3 < 2 ? v0 + 24: v0) + 4: (uint32_t)(param0 >>> 32L) - 3 < 2 ? v0 + 24: v0;
    *param2 = (uint32_t)(param0 >>> 32L) - 1 < 2;
    return (uint64_t)(((v1 >= -7 ? v1 + 7: v1 + 14) >> 3) + 5);
}
