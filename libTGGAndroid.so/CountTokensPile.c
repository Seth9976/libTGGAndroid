long CountTokensPile(int param0, int* param1, int param2, int param3, int param4) {
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
    int v9 = param4 == 1142 ? param2 + 1 ? 1009: 6: param4;
    if((uint32_t)v8 >= 1) {
        if((uint32_t)v8 < 3) {
            v4 = 0L;
            result = 0;
            goto loc_7D75CC;
        }
        else {
            v4 = v8 & 0xfffffffeL;
            int* ptr0 = NULL;
            int* ptr1 = param1 + 22498;
            long v10 = v4;
            do {
                int v11 = *(ptr1 - 6);
                if(*(ptr1 - 6) == v9) {
                    v3 = *(ptr1 - 7);
                }
                int v12 = *(ptr1 + 2);
                if(*(ptr1 + 2) == v9) {
                    param4 = *(ptr1 + 1);
                }
                int v13 = v9 == v12;
                int v14 = param2 == v3;
                int v15 = v9 == v11 ? v14 & 1: 0;
                int v16 = param2 == param4;
                if(v15 == 1) {
                    v14 = *(ptr1 - 8);
                }
                int v17 = v13 & v16;
                if((v13 & v16) != 0) {
                    v2 = *ptr1;
                }
                int v18 = param3 != v14;
                int v19 = param3 == v2;
                if(!(~(v15 & 1) | (v18 & 1))) {
                    v18 = *(ptr1 - 3);
                }
                if((v17 & v19) != 0) {
                    v19 = *(ptr1 + 5);
                }
                int v20 = param3 != v2 ? v17 & 1: 0;
                char v21 = v9 == v12;
                char v22 = v9 == v11;
                v2 = v22;
                v3 = (param2 != v5 ? v2 & 1: 0) | (param3 != v14 ? v15 & 1: 0);
                param4 = (v21 ? param2 != v6: 0) | v20;
                v1 = (v22 ? v3: v3 | 1 ? 0: v18) + v7;
                v0 = v10 - 2L;
                v10 -= 2L;
                ptr0 = (uint64_t)((uint32_t)ptr0 + (v21 ? param4: param4 | 1 ? 0: v19));
                ptr1 += 16;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr0 + v1;
            if(v8 != v4) {
            loc_7D75CC:
                ptr0 = (long*)(v4 * 32L + (long)param1) + 11245;
                v8 -= v4;
                do {
                    if(*(ptr0 + 2) == v9 && *(ptr0 + 1) == param2 && *ptr0 == param3) {
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
