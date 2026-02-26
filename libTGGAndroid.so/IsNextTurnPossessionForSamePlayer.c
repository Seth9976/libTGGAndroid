long IsNextTurnPossessionForSamePlayer(int* param0, int param1, int param2, long param3, int param4, int param5) {
    int v0;
    int v1;
    long v2;
    int v3;
    char v4;
    int v5;
    int v6;
    int v7;
    int v8;
    long v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    long v16 = (uint64_t)*(param0 + 1648);
    if(*(param0 + 1648) >= 1) {
        if((uint32_t)v16 == 1) {
            v9 = 0L;
            v8 = 0;
            v7 = 0;
            goto loc_7FF554;
        }
        else {
            v9 = v16 & 0xfffffffeL;
            int* ptr0 = NULL;
            int* ptr1 = param0 + 61637;
            long v17 = v9;
            do {
                int v18 = *(ptr1 - 48);
                if(*(ptr1 - 48) == 0) {
                    v6 = *(ptr1 - 47);
                    v5 = *(ptr1 - 2);
                    if(*(ptr1 - 2) == 0) {
                    loc_7FF51C:
                        param4 = *(ptr1 - 1);
                    }
                }
                else {
                    v5 = *(ptr1 - 2);
                    if(*(ptr1 - 2) == 0) {
                        goto loc_7FF51C;
                    }
                }
                int v19 = v5 == 0;
                long v20 = param1 == param4;
                if(param1 == v6 && v18 == 0) {
                    param5 = *(ptr1 - 46);
                }
                if(((uint32_t)v20 & v19) != 0) {
                    v19 = *ptr1;
                }
                char v21 = param2 == param5;
                v4 = param2 == v19;
                int v22 = (param1 != v6 ? v18 == 0: 0) ^ 1;
                param4 = (param1 != v15 ? v5 == 0: 0) ^ 1;
                param5 = v4 ? 0: v5 == 0;
                v6 = param4 & param5;
                v3 = (v21 && v18 == 0 ? v22 & 1: 0) | v13;
                v2 = v17 - 2L;
                v17 -= 2L;
                v1 = (v21 ? 0: v18 == 0 ? v22 & 1: 0) | v14;
                v0 = v12 | v6;
                ptr0 = (uint64_t)((uint32_t)ptr0 | (v4 && v5 == 0 ? param4 & 1: 0));
                ptr1 += 92;
            }
            while(v2 != 0L);
            v7 = v1 | v0;
            v8 = (uint32_t)ptr0 | v3;
            if(v16 != v9) {
            loc_7FF554:
                ptr0 = (char*)(v9 * 184L + (long)param0) + &gvar_10308+2bf54h;
                long v23 = v16 - v9;
                do {
                    if(*(ptr0 - 2) == 0 && *(ptr0 - 1) == param1) {
                        v4 = *ptr0 == param2;
                        v7 = v4 ? v10: v10 | 1;
                        v8 = v4 ? v11 | 1: v11;
                    }
                    v2 = v23 - 1L;
                    --v23;
                    ptr0 += 46;
                }
                while(v2 != 0L);
            }
        }
        return (uint64_t)(~v7 & v8 & 1);
    }
    return 0L;
}
