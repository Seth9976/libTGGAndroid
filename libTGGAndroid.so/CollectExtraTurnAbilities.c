int* CollectExtraTurnAbilities(int* param0, int* param1, int param2) {
    long v0;
    int v1;
    int v2;
    int* ptr0;
    *(param0 + 0x100) = 0;
    long v3 = (uint64_t)*(param1 + 1648);
    if(*(param1 + 1648) >= 1) {
        v3 = (uint32_t)v3 > 1 ? (uint64_t)(uint32_t)v3: 1L;
        if(*(param1 + 1651) != param2) {
            ptr0 = param1 + 61589;
            do {
                if(*ptr0 == 0 && *(ptr0 + 1) == param2) {
                    v2 = *(param0 + 0x100);
                    v1 = *(ptr0 - 8) * &gvar_10308+2fcf8h;
                    *(param0 + 0x100) = v2 + 1;
                    *(int*)(v2 * 4L + (long)param0) = v1;
                }
                v0 = v3 - 1L;
                --v3;
                ptr0 += 46;
            }
            while(v0 != 0L);
        }
        else if(*(param1 + 1652) == param2) {
            ptr0 = param1 + 61589;
            do {
                if(*ptr0 == 0 && *(ptr0 + 1) == param2 && ((uint32_t)*(char*)(ptr0 + 3) & 0xc) == 0) {
                    v2 = *(param0 + 0x100);
                    v1 = *(ptr0 - 8) * &gvar_10308+2fcf8h;
                    *(param0 + 0x100) = v2 + 1;
                    *(int*)(v2 * 4L + (long)param0) = v1;
                }
                v0 = v3 - 1L;
                --v3;
                ptr0 += 46;
            }
            while(v0 != 0L);
        }
        else {
            ptr0 = param1 + 61589;
            do {
                if(*ptr0 == 0 && *(ptr0 + 1) == param2 && !((*(char*)(ptr0 + 3) >>> 3) & 1)) {
                    v2 = *(param0 + 0x100);
                    v1 = *(ptr0 - 8) * &gvar_10308+2fcf8h;
                    *(param0 + 0x100) = v2 + 1;
                    *(int*)(v2 * 4L + (long)param0) = v1;
                }
                v0 = v3 - 1L;
                --v3;
                ptr0 += 46;
            }
            while(v0 != 0L);
        }
    }
    return param1;
}
