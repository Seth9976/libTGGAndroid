long PlayerNumProjectCubes(int param0, int* param1, int param2) {
    long v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    uint32_t result;
    long v6;
    int v7;
    long v8 = (uint64_t)*(param1 + 0x66b);
    if(*(param1 + 0x66b) >= 1) {
        if((uint32_t)v8 < 3) {
            v6 = 0L;
            result = 0;
            goto loc_7DB334;
        }
        else {
            v6 = v8 & 0xfffffffeL;
            int* ptr0 = NULL;
            int* ptr1 = param1 + 22498;
            long v9 = v6;
            do {
                int v10 = *(ptr1 - 7);
                if(*(ptr1 - 7) == param2) {
                    v5 = *(ptr1 - 8);
                }
                int v11 = *(ptr1 + 1);
                if(*(ptr1 + 1) == param2) {
                    v4 = *ptr1;
                }
                int v12 = param2 == v11;
                int v13 = v5 == 3585;
                int v14 = param2 == v10 ? v13 & 1: 0;
                int v15 = v4 == 3585;
                if(v14 == 1) {
                    v13 = *(ptr1 - 6);
                }
                int v16 = v12 & v15;
                if((v12 & v15) != 0) {
                    v15 = *(ptr1 + 2);
                }
                if(!(~(v14 & 1) | v13 != 1009)) {
                    v3 = *(ptr1 - 3);
                    v2 = v15 == 1009 ? v16 & 1: 0;
                    if((v15 == 1009 ? v16 & 1: 0) != 0) {
                        goto loc_7DB30C;
                    }
                }
                else {
                    v3 = 0;
                    v2 = v15 == 1009 ? v16 & 1: 0;
                    if((v15 == 1009 ? v16 & 1: 0) != 0) {
                    loc_7DB30C:
                        v2 = *(ptr1 + 5);
                    }
                }
                v4 = v15 != 1009;
                v5 = v13 != 1009;
                v1 = (v14 & v5 ? 0: v3) + v7;
                v0 = v9 - 2L;
                v9 -= 2L;
                ptr0 = (uint64_t)((uint32_t)ptr0 + (v16 & v4 ? 0: v2));
                ptr1 += 16;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr0 + v1;
            if(v8 != v6) {
            loc_7DB334:
                ptr0 = (long*)(v6 * 32L + (long)param1) + 11245;
                v8 -= v6;
                do {
                    if(*(ptr0 + 1) == param2 && *ptr0 == 3585 && *(ptr0 + 2) == 1009) {
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
