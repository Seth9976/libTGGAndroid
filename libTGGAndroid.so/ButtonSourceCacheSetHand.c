long ButtonSourceCacheSetHand(long param0, int param1, int param2, int param3) {
    *(char*)(param2 + (param1 ? param0 + 80L: param0 + 72L) - 36L) = (uint8_t)param3 & 1;
    return param0;
}
