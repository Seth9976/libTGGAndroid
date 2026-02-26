int* PileLookup2(int* param0, int param1, int param2) {
    long v0;
    int* result;
    long v1 = (uint64_t)*(param0 + 168);
    if(*(param0 + 168) >= 1) {
        result = param0;
        while(*result != param2) {
            v0 = v1 - 1L;
            --v1;
            result += 14;
            if(v0 != 0L) {
                continue;
            }
            goto loc_7BB73C;
        }
    }
    else {
    loc_7BB73C:
        v1 = (uint64_t)*(param0 + 0x151);
        if(*(param0 + 0x151) >= 1) {
            result = param0 + 169;
            while(*result != param2) {
                v0 = v1 - 1L;
                --v1;
                result += 14;
                if(v0 != 0L) {
                    continue;
                }
                goto loc_7BB768;
            }
        }
        else {
        loc_7BB768:
            v1 = (uint64_t)*(param0 + 11595);
            if(*(param0 + 11595) >= 1) {
                result = param0 + 395;
                long v2 = v1;
                while(*result != param2) {
                    v0 = v2 - 1L;
                    --v2;
                    result += 14;
                    if(v0 != 0L) {
                        continue;
                    }
                    result = param0 + 395;
                    while(*result != param1) {
                        v0 = v1 - 1L;
                        --v1;
                        result += 14;
                        if(v0 != 0L) {
                            continue;
                        }
                        return NULL;
                    }
                }
            }
            else {
                result = NULL;
            }
        }
    }
    return result;
}
