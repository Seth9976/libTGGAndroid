long GetNumPlayerEntries(int param0, int* param1, uint32_t param2) {
    uint32_t result;
    long v0;
    int v1;
    long v2;
    uint32_t v3;
    if((int)param2 >= 1) {
        if(param2 == 1) {
            v2 = 0L;
            goto loc_5C8FA8;
        }
        else {
            v2 = param2 & 0xfffffffeL;
            int* ptr0 = NULL;
            long v4 = v2;
            int* ptr1 = param1;
            do {
                int v5 = *(ptr1 + 24);
                int v6 = *(ptr1 + 163);
                ptr1 += 0x116;
                v1 = v5 != 0 ? param0 + 1: param0;
                ptr0 = v6 != 0 ? (uint64_t)((uint32_t)ptr0 + 1): (uint64_t)(uint32_t)ptr0;
                v0 = v4 - 2L;
                v4 -= 2L;
            }
            while(v0 != 0L);
            result = (uint32_t)ptr0 + v1;
            if(param2 != v2) {
            loc_5C8FA8:
                ptr0 = (long*)(v2 * 556L + (long)param1) + 12;
                long v7 = param2 - v2;
                do {
                    v2 = (uint64_t)*ptr0;
                    ptr0 += 139;
                    result = (uint32_t)v2 != 0 ? v3 + 1: v3;
                    v0 = v7 - 1L;
                    --v7;
                }
                while(v0 != 0L);
            }
        }
        return result;
    }
    return 0L;
}
