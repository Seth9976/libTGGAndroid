int* CollectRegisteredAllOngoing(int* param0, int* param1, int param2, int param3) {
    int v0;
    long v1;
    int* ptr0;
    int v2 = *(param1 + 1648);
    if(*(param1 + 1648) >= 1) {
        long v3 = 0L;
        if(param3 == 0) {
            ptr0 = param1 + 61589;
            do {
                if(*ptr0 == 3) {
                    v1 = (uint64_t)*(ptr0 + 3);
                    if(((v1 & 0x1L) || *(ptr0 - 13) == param2) && (!((v1 >>> 1L) & 0x1L) || (*(char*)(param1 + 1656) != 0 && *(param1 + 1653) == *(ptr0 - 14))) && (!((v1 >>> 2L) & 0x1L) || (*(char*)(param1 + 1656) != 0 && *(param1 + 1653) == param2))) {
                        v0 = *(param0 + 0x100);
                        int v4 = *(ptr0 - 8) * &gvar_10308+2fcf8h;
                        *(param0 + 0x100) = v0 + 1;
                        *(int*)(v0 * 4L + (long)param0) = v4;
                        v2 = *(param1 + 1648);
                    }
                }
                ++v3;
                ptr0 += 46;
            }
            while(v2 > v3);
        }
        else {
            ptr0 = param1 + 61575;
            do {
                if(*(ptr0 + 14) == 3) {
                    v1 = (uint64_t)*(ptr0 + 17);
                    if(((v1 & 0x1L) || *(ptr0 + 1) == param2) && (!((v1 >>> 1L) & 0x1L) || (*(char*)(param1 + 1656) != 0 && *(param1 + 1653) == *ptr0)) && (!((v1 >>> 2L) & 0x1L) || (*(char*)(param1 + 1656) != 0 && *(param1 + 1653) == param2)) && *(ptr0 + 31) == param3) {
                        v0 = *(param0 + 0x100);
                        int v5 = *(ptr0 + 6) * &gvar_10308+2fcf8h;
                        *(param0 + 0x100) = v0 + 1;
                        *(int*)(v0 * 4L + (long)param0) = v5;
                        v2 = *(param1 + 1648);
                    }
                }
                ++v3;
                ptr0 += 46;
            }
            while(v2 > v3);
        }
    }
    return param0;
}
