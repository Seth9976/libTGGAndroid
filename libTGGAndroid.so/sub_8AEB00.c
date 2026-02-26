char* sub_8AEB00(int param0, char* param1, long param2, short* param3, short* param4) {
    long v0;
    int v1;
    uint32_t v2 = (uint32_t)*param3;
    uint32_t v3 = (uint32_t)*param4;
    if(param2 >= 16L) {
        do {
            param2 -= 16L;
            int v4 = (uint32_t)*param1 + v2;
            int v5 = (uint32_t)*(param1 + 1L) + v4;
            int v6 = (uint32_t)*(param1 + 2L) + v5;
            int v7 = (uint32_t)*(param1 + 3L) + v6;
            int v8 = (uint32_t)*(param1 + 4L) + v7;
            int v9 = (uint32_t)*(param1 + 5L) + v8;
            int v10 = (uint32_t)*(param1 + 6L) + v9;
            int v11 = (uint32_t)*(param1 + 7L) + v10;
            int v12 = (uint32_t)*(param1 + 8L) + v11;
            int v13 = (uint32_t)*(param1 + 9L) + v12;
            int v14 = (uint32_t)*(param1 + 10L) + v13;
            int v15 = (uint32_t)*(param1 + 11L) + v14;
            int v16 = (uint32_t)*(param1 + 12L) + v15;
            int v17 = (uint32_t)*(param1 + 13L) + v16;
            int v18 = (uint32_t)*(param1 + 14L) + v17;
            int v19 = (uint32_t)*(param1 + 15L);
            param1 += 16L;
            v2 = v18 + v19;
            v3 = v18 * 2 + param0 + (v4 + v13) + (v14 + v15 + (v16 + v17)) + (v5 + v6 + (v7 + v8) + (v9 + v10 + (v11 + v12))) + v19;
        }
        while(param2 > 15L);
    }
    if(param2 != 0L) {
        do {
            int v20 = (uint32_t)*param1;
            ++param1;
            v0 = param2 - 1L;
            --param2;
            v2 = v1 + v20;
            v3 = param0 + v2;
        }
        while(v0 != 0L);
    }
    *param3 = (uint16_t)v2 - (uint16_t)((v2 * 0x80078071L) >>> 47L) * 0xfff1;
    *param4 = (uint16_t)v3 - (uint16_t)((v3 * 0x80078071L) >>> 47L) * 0xfff1;
    return param1;
}
