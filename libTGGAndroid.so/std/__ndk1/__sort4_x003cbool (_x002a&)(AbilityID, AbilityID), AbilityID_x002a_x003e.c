// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(AbilityID, AbilityID), AbilityID*>(AbilityID* param0, AbilityID* param1, AbilityID* param2, AbilityID* param3, bool (*&)(AbilityID, AbilityID) param4) {
    AbilityID v0;
    int result;
    int v1;
    long v2 = *(long*)param4((uint64_t)*(AbilityID*)param1, (uint64_t)*(AbilityID*)param0, (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((uint64_t)*(AbilityID*)param2, (uint64_t)*(AbilityID*)param1);
    if(v2 & 0x1L) {
        long v4 = (uint64_t)*(AbilityID*)param0;
        if(v3 & 0x1L) {
            result = 1;
            *(AbilityID*)param0 = *(AbilityID*)param2;
            *(AbilityID*)param2 = (AbilityID)v4;
        }
        else {
            *(AbilityID*)param0 = *(AbilityID*)param1;
            *(AbilityID*)param1 = (AbilityID)v4;
            long v5 = *(long*)param4((uint64_t)*(AbilityID*)param2, v4);
            if(v5 & 0x1L) {
                v0 = *(AbilityID*)param1;
                *(AbilityID*)param1 = *(AbilityID*)param2;
                *(AbilityID*)param2 = v0;
                goto loc_812FCC;
            }
        loc_812FD4:
            result = 1;
        }
    }
    else if(v3 & 0x1L) {
        v0 = *(AbilityID*)param1;
        *(AbilityID*)param1 = *(AbilityID*)param2;
        *(AbilityID*)param2 = v0;
        long v6 = *(long*)param4((uint64_t)*(AbilityID*)param1, (uint64_t)*(AbilityID*)param0);
        if(!(v6 & 0x1L)) {
            goto loc_812FD4;
        }
        v0 = *(AbilityID*)param0;
        *(AbilityID*)param0 = *(AbilityID*)param1;
        *(AbilityID*)param1 = v0;
    loc_812FCC:
        result = 2;
    }
    else {
        result = 0;
    }
    long v7 = *(long*)param4((uint64_t)*(AbilityID*)param3, (uint64_t)*(AbilityID*)param2);
    if(v7 & 0x1L) {
        v0 = *(AbilityID*)param2;
        *(AbilityID*)param2 = *(AbilityID*)param3;
        *(AbilityID*)param3 = v0;
        long v8 = *(long*)param4((uint64_t)*(AbilityID*)param2, (uint64_t)*(AbilityID*)param1);
        if(!(v8 & 0x1L)) {
            return v1 + 1;
        }
        v0 = *(AbilityID*)param1;
        *(AbilityID*)param1 = *(AbilityID*)param2;
        *(AbilityID*)param2 = v0;
        long v9 = *(long*)param4((uint64_t)*(AbilityID*)param1, (uint64_t)*(AbilityID*)param0);
        if(v9 & 0x1L) {
            v0 = *(AbilityID*)param0;
            *(AbilityID*)param0 = *(AbilityID*)param1;
            *(AbilityID*)param1 = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
