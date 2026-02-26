// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(GameIndex, GameIndex), GameIndex*>(GameIndex* param0, GameIndex* param1, GameIndex* param2, GameIndex* param3, bool (*&)(GameIndex, GameIndex) param4) {
    GameIndex v0;
    int result;
    int v1;
    long v2 = *(long*)param4((uint64_t)*(GameIndex*)param1, (uint64_t)*(GameIndex*)param0, (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((uint64_t)*(GameIndex*)param2, (uint64_t)*(GameIndex*)param1);
    if(v2 & 0x1L) {
        long v4 = (uint64_t)*(GameIndex*)param0;
        if(v3 & 0x1L) {
            result = 1;
            *(GameIndex*)param0 = *(GameIndex*)param2;
            *(GameIndex*)param2 = (GameIndex)v4;
        }
        else {
            *(GameIndex*)param0 = *(GameIndex*)param1;
            *(GameIndex*)param1 = (GameIndex)v4;
            long v5 = *(long*)param4((uint64_t)*(GameIndex*)param2, v4);
            if(v5 & 0x1L) {
                v0 = *(GameIndex*)param1;
                *(GameIndex*)param1 = *(GameIndex*)param2;
                *(GameIndex*)param2 = v0;
                goto loc_5DD810;
            }
        loc_5DD818:
            result = 1;
        }
    }
    else if(v3 & 0x1L) {
        v0 = *(GameIndex*)param1;
        *(GameIndex*)param1 = *(GameIndex*)param2;
        *(GameIndex*)param2 = v0;
        long v6 = *(long*)param4((uint64_t)*(GameIndex*)param1, (uint64_t)*(GameIndex*)param0);
        if(!(v6 & 0x1L)) {
            goto loc_5DD818;
        }
        v0 = *(GameIndex*)param0;
        *(GameIndex*)param0 = *(GameIndex*)param1;
        *(GameIndex*)param1 = v0;
    loc_5DD810:
        result = 2;
    }
    else {
        result = 0;
    }
    long v7 = *(long*)param4((uint64_t)*(GameIndex*)param3, (uint64_t)*(GameIndex*)param2);
    if(v7 & 0x1L) {
        v0 = *(GameIndex*)param2;
        *(GameIndex*)param2 = *(GameIndex*)param3;
        *(GameIndex*)param3 = v0;
        long v8 = *(long*)param4((uint64_t)*(GameIndex*)param2, (uint64_t)*(GameIndex*)param1);
        if(!(v8 & 0x1L)) {
            return v1 + 1;
        }
        v0 = *(GameIndex*)param1;
        *(GameIndex*)param1 = *(GameIndex*)param2;
        *(GameIndex*)param2 = v0;
        long v9 = *(long*)param4((uint64_t)*(GameIndex*)param1, (uint64_t)*(GameIndex*)param0);
        if(v9 & 0x1L) {
            v0 = *(GameIndex*)param0;
            *(GameIndex*)param0 = *(GameIndex*)param1;
            *(GameIndex*)param1 = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
