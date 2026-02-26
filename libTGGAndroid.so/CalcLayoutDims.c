long CalcLayoutDims(long param0, long param1, uint32_t param2) {
    uint32_t v0 = (uint32_t)(param1 >>> 32L) - 3 < 2 ? ((uint32_t)(param1 >>> 32L) - 1 < 2 ? param2 + 8: param2) + 24: (uint32_t)(param1 >>> 32L) - 1 < 2 ? param2 + 8: param2;
    long v1 = (uint32_t)param1 == 11 ? v0 + 4: v0;
    if(param1 >>> 32L != 0L || (int)((uint32_t)param1 == 11 ? v0 + 4: v0) >= 9) {
        int v2 = (uint32_t)(param1 >>> 32L) * 3 + param2;
        long v3 = (long)(((uint32_t)param1 == 11 ? v2 + 4: v2) - 5) * 0x2e8ba2e9L;
        return (uint64_t)2 | ((uint64_t)((uint32_t)(v3 >>> 63L) + (uint32_t)(v3 >> 33L) + 5 <= ((uint32_t)param1 != 11 ? 5: 6) ? (uint32_t)(v3 >>> 63L) + (uint32_t)(v3 >> 33L) + 5: (uint32_t)param1 != 11 ? 5: 6) << 32);
    }
    return (uint64_t)2 | ((uint64_t)((((uint32_t)v1 >= -7 ? (uint32_t)v1 + 7: (uint32_t)v1 + 14) >> 3) + 5) << 32);
}
