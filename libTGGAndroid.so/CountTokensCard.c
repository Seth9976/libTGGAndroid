long CountTokensCard(int param0, int* param1, int param2, int param3, long param4) {
    int v0;
    long* ptr0;
    int v1;
    long v2;
    long v3;
    int v4;
    int v5;
    uint32_t result;
    int* ptr1;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    long v12 = (uint64_t)v8 | ((uint64_t)v6 << 32);
    long* ptr2 = (uint64_t)*(param1 + 0x66b);
    if(*(param1 + 0x66b) >= 1) {
        if((uint32_t)ptr2 < 3) {
            ptr1 = NULL;
            result = 0;
            goto loc_7F1FBC;
        }
        else {
            ptr1 = (long)ptr2 & 0xfffffffeL;
            int* ptr3 = param1 + 22498;
            int* ptr4 = ptr1;
            do {
                int v13 = *(ptr3 - 6);
                if(*(ptr3 - 6) == 0x474) {
                    v5 = *(ptr3 - 5);
                }
                int v14 = *(ptr3 + 2);
                if(*(ptr3 + 2) == 0x474) {
                    v4 = *(ptr3 + 3);
                }
                int v15 = param2 == v5;
                int v16 = v13 == 0x474 ? v15 & 1: 0;
                int v17 = param2 == v4;
                if(v16 == 1) {
                    v15 = *(ptr3 - 8);
                }
                int v18 = v14 == 0x474 ? v17 & 1: 0;
                if((v14 == 0x474 ? v17 & 1: 0) != 0) {
                    v8 = *ptr3;
                }
                int v19 = param3 == v15 ? v16 & 1: 0;
                int v20 = param3 == v8;
                if(v19 == 1) {
                    v3 = *(long*)(ptr3 - 2);
                }
                int v21 = v18 & v20;
                if((v18 & v20) != 0) {
                    v2 = *(long*)(ptr3 + 6);
                }
                int v22 = param4 != v3;
                int v23 = param4 == v2;
                if(!(~(v19 & 1) | (v22 & 1))) {
                    v22 = *(ptr3 - 3);
                }
                if((v21 & v23) != 0) {
                    v23 = *(ptr3 + 5);
                }
                v2 = param4 != v2;
                v3 = param4 != v3;
                char v24 = param3 == v8;
                v8 = (uint32_t)v2 & v21;
                v5 = ((uint32_t)v3 & v19) | (param3 != v15 ? v16 & 1: 0) | (v13 == 0x474 ? param2 != v9: 0);
                v4 = (v24 ? 0: v18 & 1) | v8 | (v14 == 0x474 ? param2 != v10: 0);
                v1 = (v13 != 0x474 ? v5 | 1: v5 ? 0: v22) + v11;
                ptr0 = (char*)ptr4 - 2L;
                ptr4 = (char*)ptr4 - 2L;
                v0 = (v14 != 0x474 ? v4 | 1: v4 ? 0: v23) + v7;
                ptr3 += 16;
            }
            while(ptr0 != 0L);
            result = v1 + v0;
            if(ptr2 != ptr1) {
            loc_7F1FBC:
                ptr2 = (long)ptr2 - (long)ptr1;
                ptr1 = (char*)((long)(long*)((long)ptr1 * 32L) + (long)param1) + &gvar_10308+5c6ch;
                do {
                    if(*(ptr1 - 1) == 0x474 && *ptr1 == param2 && *(ptr1 - 3) == param3 && *(long*)(ptr1 + 3) == param4) {
                        result = *(ptr1 + 2) + param0;
                    }
                    ptr0 = (char*)ptr2 - 1L;
                    ptr2 = (char*)ptr2 - 1L;
                    ptr1 += 8;
                }
                while(ptr0 != 0L);
            }
        }
        return result;
    }
    return 0L;
}
