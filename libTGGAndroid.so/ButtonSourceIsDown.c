long ButtonSourceIsDown(long param0, int param1, int param2) {
    uint32_t result;
    if(param1 >= 36) {
        char* ptr0 = (char*)((long)param1 + param0);
        result = param2 ? (uint32_t)*(ptr0 + 44L): (uint32_t)*(ptr0 + 36L);
    }
    else {
        result = *(char*)((uint64_t)param1 + param0);
        if(param1 <= 6 && ((1 << param1) & 0x43) != 0) {
            return ((uint64_t)*(char*)((uint64_t)param1 + param0 + 36L) * 0x100L) | result;
        }
    }
    return result;
}
