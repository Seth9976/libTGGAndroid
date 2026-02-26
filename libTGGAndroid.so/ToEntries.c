int ToEntries(long param0, uint64_t* param1) {
    int v0;
    int result = 0;
    char* ptr0 = (char*)(param0 + 1L);
    int v1 = (uint32_t)*(ptr0 - 1L);
    if(*(ptr0 - 1L) == 45) {
        while(*ptr0 != 0) {
            v1 = (uint32_t)*(ptr0 + 1L);
            if(*(ptr0 + 1L) == 32) {
                *(ptr0 - 1L) = 0;
                *(uint64_t*)(result * 8L + (long)param1) = ptr0;
                result = v0 + 1;
                ++ptr0;
                v1 = (uint32_t)*(ptr0 - 1L);
                if(*(ptr0 - 1L) == 45) {
                    continue;
                }
                goto loc_5F97B8;
            }
            else if(v1 == 0) {
                return result;
            }
        loc_5F97BC:
            ++ptr0;
            v1 = (uint32_t)*(ptr0 - 1L);
            if(*(ptr0 - 1L) != 45) {
                goto loc_5F97B8;
            }
        }
    }
    else {
    loc_5F97B8:
        if(v1 != 0) {
            goto loc_5F97BC;
        }
    }
    return result;
}
