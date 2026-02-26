long ButtonSourceCacheSet(long param0, uint32_t param1, int param2) {
    *(param1 + param0) = (uint8_t)param2 & 1;
    if(param2 & 1) {
        *(param1 + param0 + 36L) = (uint8_t)param2 & 1;
    }
    return param0;
}
