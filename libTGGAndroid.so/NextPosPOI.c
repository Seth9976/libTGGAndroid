long* NextPosPOI(long* param0) {
    float v0;
    float v1;
    float v2;
    float v3;
    float v4;
    __int128 v5 = (unsigned __int128)*param0;
    __int128 v6 = (unsigned __int128)*(param0 + 1);
    __int128 v7 = (unsigned __int128)((uint64_t)((uint32_t)v6 - (uint32_t)v5) | ((uint64_t)((uint32_t)(v6 >>> 0x20X) - (uint32_t)(v5 >>> 0x20X)) << 32));
    FADDP(v4, (uint64_t)((uint32_t)v6 - (uint32_t)v5) | ((uint64_t)((uint32_t)(v6 >>> 0x20X) - (uint32_t)(v5 >>> 0x20X)) << 32));
    float v8 = v4 + v4;
    float v9 = (v4 + v4) * v0;
    if(((v4 + v4) * v0 >= v1 || v1 / v8 <= v0) && ((uint32_t)v7 - v1 <= v9 || ((uint32_t)v7 - v1) / v8 <= v0) && ((uint32_t)v7 <= v9 || (uint32_t)v7 / v8 <= v0) && ((uint32_t)v7 + v1 <= v9 || ((uint32_t)v7 + v1) / v8 <= v0) && (v4 - v1 <= v9 || (v4 - v1) / v8 <= v0) && (v9 >= v4 || v4 / v8 <= v0) && (v4 + v1 <= v9 || (v4 + v1) / v8 <= v0)) {
        v4 = (uint32_t)v7 + v2;
        if((v4 - v1 <= v9 || (v4 - v1) / v8 <= v0) && (v9 >= v4 || v4 / v8 <= v0) && (v4 + v1 <= v9 || (v4 + v1) / v8 <= v0)) {
            v1 = (uint32_t)(v7 >>> 0x20X) + v4 - v3;
            if(v1 <= v9 || v1 / v8 <= v0) {
                return param0;
            }
        }
    }
    return param0;
}
