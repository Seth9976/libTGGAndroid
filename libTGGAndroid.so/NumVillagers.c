long NumVillagers(int param0, int* param1, int param2, int param3) {
    long v0;
    int v1;
    int v2;
    int v3;
    uint32_t result;
    long v4;
    int v5;
    int v6;
    int v7;
    long v8 = (uint64_t)*(param1 + 0x66b);
    if(*(param1 + 0x66b) >= 1) {
        if((uint32_t)v8 < 3) {
            v4 = 0L;
            result = 0;
            goto loc_7D17A8;
        }
        else {
            v4 = v8 & 0xfffffffeL;
            int* ptr0 = NULL;
            int* ptr1 = param1 + 22498;
            long v9 = v4;
            do {
                int v10 = *(ptr1 - 6);
                if((param2 + 1 ? 1009: 6) == *(ptr1 - 6)) {
                    v3 = *(ptr1 - 7);
                }
                int v11 = *(ptr1 + 2);
                if((param2 + 1 ? 1009: 6) == *(ptr1 + 2)) {
                    param3 = *(ptr1 + 1);
                }
                int v12 = (param2 + 1 ? 1009: 6) == v11;
                int v13 = param2 == v3;
                int v14 = (param2 + 1 ? 1009: 6) == v10 ? v13 & 1: 0;
                int v15 = param2 == param3;
                if(v14 == 1) {
                    v13 = *(ptr1 - 8);
                }
                int v16 = v12 & v15;
                if((v12 & v15) != 0) {
                    v2 = *ptr1;
                }
                int v17 = v13 != 0xe00;
                int v18 = v2 == 0xe00;
                if(!(~(v14 & 1) | (v17 & 1))) {
                    v17 = *(ptr1 - 3);
                }
                if((v16 & v18) != 0) {
                    v18 = *(ptr1 + 5);
                }
                int v19 = v2 != 0xe00 ? v16 & 1: 0;
                char v20 = (param2 + 1 ? 1009: 6) == v11;
                char v21 = (param2 + 1 ? 1009: 6) == v10;
                v2 = v21;
                v3 = (param2 != v5 ? v2 & 1: 0) | (v13 != 0xe00 ? v14 & 1: 0);
                param3 = (v20 ? param2 != v6: 0) | v19;
                v1 = (v21 ? v3: v3 | 1 ? 0: v17) + v7;
                v0 = v9 - 2L;
                v9 -= 2L;
                ptr0 = (uint64_t)((uint32_t)ptr0 + (v20 ? param3: param3 | 1 ? 0: v18));
                ptr1 += 16;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr0 + v1;
            if(v8 != v4) {
            loc_7D17A8:
                ptr0 = (long*)(v4 * 32L + (long)param1) + 11245;
                v8 -= v4;
                do {
                    if((param2 + 1 ? 1009: 6) == *(ptr0 + 2) && *(ptr0 + 1) == param2 && *ptr0 == 0xe00) {
                        result = *(ptr0 + 5) + param0;
                    }
                    v0 = v8 - 1L;
                    --v8;
                    ptr0 += 8;
                }
                while(v0 != 0L);
            }
        }
        return result;
    }
    return 0L;
}
