long CardsetIsZoomed(uint64_t* param0, int* param1) {
    int v0;
    uint64_t v1;
    int v2;
    uint32_t v3 = *(uint32_t*)(param0 + 679);
    if(*(uint32_t*)(param0 + 679) != -1) {
        *param1 = 0;
        uint32_t v4 = *(uint32_t*)(param0 + 679);
        uint32_t v5 = *(uint32_t*)(param0 + 676);
        if((int)*(uint32_t*)(param0 + 676) >= (int)v4) {
            long v6 = v4;
        loc_5B9D34:
            do {
                if((uint32_t)v6 < 1) {
                    goto loc_5B9D1C;
                }
                else {
                    v1 = *((uint64_t*)((uint64_t)((uint32_t)v6 - 1) * 32L + (long)param0) + 76);
                    --v6;
                    if(v1 == 0L) {
                        goto loc_5B9D34;
                    }
                    *param1 = 2;
                    v5 = *(uint32_t*)(param0 + 676);
                    v0 = 6;
                    if((int)*(uint32_t*)(param0 + 679) >= -1) {
                        goto loc_5B9D68;
                    }
                }
            }
            while((int)*(uint32_t*)(param0 + 679) >= -1);
        }
        else {
        loc_5B9D1C:
            v0 = 4;
            if((int)v4 >= -1) {
            loc_5B9D68:
                v4 = v2 + 1;
                while((int)v5 > (int)v4) {
                    v1 = *((uint64_t*)(v4 * 32L + (long)param0) + 76);
                    v4 = v2 + 1;
                    if(v1 == 0L) {
                        continue;
                    }
                    if(v4 != 0) {
                        *param1 = v0;
                        return v3 + 1;
                    }
                    break;
                }
            }
        }
    }
    return v3 + 1;
}
