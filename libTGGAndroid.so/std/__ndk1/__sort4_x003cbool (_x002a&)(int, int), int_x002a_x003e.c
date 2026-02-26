// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(int, int), int*>(int* param0, int* param1, int* param2, int* param3, bool (*&)(int, int) param4) {
    int v0;
    int result;
    int v1;
    long v2 = *(long*)param4((uint64_t)param1[0], (uint64_t)param0[0], (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((uint64_t)param2[0], (uint64_t)param1[0]);
    if(v2 & 0x1L) {
        long v4 = (uint64_t)param0[0];
        if(v3 & 0x1L) {
            result = 1;
            param0[0] = param2[0];
            param2[0] = (int)v4;
        }
        else {
            param0[0] = param1[0];
            param1[0] = (int)v4;
            long v5 = *(long*)param4((uint64_t)param2[0], v4);
            if(v5 & 0x1L) {
                v0 = param1[0];
                param1[0] = param2[0];
                param2[0] = v0;
                goto loc_8AD334;
            }
        loc_8AD33C:
            result = 1;
        }
    }
    else if(v3 & 0x1L) {
        v0 = param1[0];
        param1[0] = param2[0];
        param2[0] = v0;
        long v6 = *(long*)param4((uint64_t)param1[0], (uint64_t)param0[0]);
        if(!(v6 & 0x1L)) {
            goto loc_8AD33C;
        }
        v0 = param0[0];
        param0[0] = param1[0];
        param1[0] = v0;
    loc_8AD334:
        result = 2;
    }
    else {
        result = 0;
    }
    long v7 = *(long*)param4((uint64_t)param3[0], (uint64_t)param2[0]);
    if(v7 & 0x1L) {
        v0 = param2[0];
        param2[0] = param3[0];
        param3[0] = v0;
        long v8 = *(long*)param4((uint64_t)param2[0], (uint64_t)param1[0]);
        if(!(v8 & 0x1L)) {
            return v1 + 1;
        }
        v0 = param1[0];
        param1[0] = param2[0];
        param2[0] = v0;
        long v9 = *(long*)param4((uint64_t)param1[0], (uint64_t)param0[0]);
        if(v9 & 0x1L) {
            v0 = param0[0];
            param0[0] = param1[0];
            param1[0] = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
