long CalcCols_2Plus(long param0, int param1) {
    int v0 = (uint32_t)(param0 >>> 32L) * 3 + param1;
    long v1 = (long)(((uint32_t)param0 == 11 ? v0 + 4: v0) - 5) * 0x2e8ba2e9L;
    return ((uint32_t)(v1 >>> 32L) >> 1) + (uint32_t)(v1 >>> 63L) + 5 <= ((uint32_t)param0 != 11 ? 5: 6) ? (uint64_t)(((uint32_t)(v1 >>> 32L) >> 1) + (uint32_t)(v1 >>> 63L) + 5): (uint32_t)param0 != 11 ? 5L: 6L;
}
