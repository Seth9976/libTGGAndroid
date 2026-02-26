long SeparateTypes(int param0, long param1, long* param2) {
    long v0;
    int v1 = 0;
    long v2 = 1L;
    do {
        if(v2 != 0x200000000000L && (param1 & v2) != 0L) {
            *(long*)(v1 * 8L + (long)param2) = v2;
            v1 = param0 + 1;
        }
        v0 = v2 >>> 46L;
        v2 *= 2L;
    }
    while(v0 == 0L);
    return (uint64_t)v1;
}
