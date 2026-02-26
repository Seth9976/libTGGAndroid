long* SimpleMoveTo(long* param0, long* param1, char* param2) {
    float v0;
    float v1;
    *param2 = 0;
    __int128 v2 = (unsigned __int128)*param1;
    __int128 v3 = (unsigned __int128)*param0;
    __int128 v4 = (unsigned __int128)((uint64_t)((uint32_t)v2 - (uint32_t)v3) | ((uint64_t)((uint32_t)(v2 >>> 0x20X) - (uint32_t)(v3 >>> 0x20X)) << 32));
    __int128 v5 = (unsigned __int128)((uint64_t)((uint32_t)v4 * (uint32_t)v4) | ((uint64_t)((uint32_t)(v4 >>> 0x20X) * (uint32_t)(v4 >>> 0x20X)) << 32));
    FADDP((uint32_t)v5, (uint64_t)((uint32_t)v4 * (uint32_t)v4) | ((uint64_t)((uint32_t)(v4 >>> 0x20X) * (uint32_t)(v4 >>> 0x20X)) << 32));
    FSQRT((uint32_t)v5, (uint32_t)v5);
    if((uint32_t)v5 < v1 * v0) {
        *param2 = 1;
    }
    return param0;
}
