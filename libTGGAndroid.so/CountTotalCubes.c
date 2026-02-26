long CountTotalCubes(uint32_t param0, int* param1, int param2) {
    long v0;
    int v1;
    long v2;
    long v3;
    uint32_t result;
    long v4;
    int v5;
    long v6 = (uint64_t)*(param1 + 0x66b);
    if(*(param1 + 0x66b) >= 1) {
        if((uint32_t)v6 < 3) {
            v4 = 0L;
            result = 0;
            goto loc_7D05EC;
        }
        else {
            v4 = v6 & 0xfffffffeL;
            int* ptr0 = NULL;
            int* ptr1 = param1 + 22498;
            long v7 = v4;
            do {
                int v8 = *(ptr1 - 8);
                if(*(ptr1 - 8) == 3585) {
                    v3 = (uint64_t)*(ptr1 - 7);
                }
                int v9 = *ptr1;
                if(*ptr1 == 3585) {
                    v2 = (uint64_t)*(ptr1 + 1);
                }
                v3 = (uint32_t)v3 == param2;
                v2 = (uint32_t)v2 == param2;
                v1 = (v8 == 3585 ? (uint32_t)v3 & 1: 0) + v5;
                v0 = v7 - 2L;
                v7 -= 2L;
                ptr0 = (uint64_t)((uint32_t)ptr0 + (v9 == 3585 ? (uint32_t)v2 & 1: 0));
                ptr1 += 16;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr0 + v1;
            if(v6 != v4) {
            loc_7D05EC:
                ptr0 = (char*)(v4 * 32L + (long)param1) + &gvar_10308+5c64h;
                v6 -= v4;
                do {
                    if(*(ptr0 - 1) == 3585) {
                        result = *ptr0 == param2 ? param0 + 1: param0;
                    }
                    v0 = v6 - 1L;
                    --v6;
                    ptr0 += 8;
                }
                while(v0 != 0L);
            }
        }
        return result;
    }
    return 0L;
}
