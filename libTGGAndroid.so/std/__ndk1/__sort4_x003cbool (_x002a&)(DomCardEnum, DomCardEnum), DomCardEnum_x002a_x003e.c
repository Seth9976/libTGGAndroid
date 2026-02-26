// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(DomCardEnum, DomCardEnum), DomCardEnum*>(DomCardEnum* param0, DomCardEnum* param1, DomCardEnum* param2, DomCardEnum* param3, bool (*&)(DomCardEnum, DomCardEnum) param4) {
    DomCardEnum v0;
    int result;
    int v1;
    long v2 = *(long*)param4((uint64_t)*(DomCardEnum*)param1, (uint64_t)*(DomCardEnum*)param0, (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((uint64_t)*(DomCardEnum*)param2, (uint64_t)*(DomCardEnum*)param1);
    if(v2 & 0x1L) {
        long v4 = (uint64_t)*(DomCardEnum*)param0;
        if(v3 & 0x1L) {
            result = 1;
            *(DomCardEnum*)param0 = *(DomCardEnum*)param2;
            *(DomCardEnum*)param2 = (DomCardEnum)v4;
        }
        else {
            *(DomCardEnum*)param0 = *(DomCardEnum*)param1;
            *(DomCardEnum*)param1 = (DomCardEnum)v4;
            long v5 = *(long*)param4((uint64_t)*(DomCardEnum*)param2, v4);
            if(v5 & 0x1L) {
                v0 = *(DomCardEnum*)param1;
                *(DomCardEnum*)param1 = *(DomCardEnum*)param2;
                *(DomCardEnum*)param2 = v0;
                goto loc_7C1038;
            }
        loc_7C1040:
            result = 1;
        }
    }
    else if(v3 & 0x1L) {
        v0 = *(DomCardEnum*)param1;
        *(DomCardEnum*)param1 = *(DomCardEnum*)param2;
        *(DomCardEnum*)param2 = v0;
        long v6 = *(long*)param4((uint64_t)*(DomCardEnum*)param1, (uint64_t)*(DomCardEnum*)param0);
        if(!(v6 & 0x1L)) {
            goto loc_7C1040;
        }
        v0 = *(DomCardEnum*)param0;
        *(DomCardEnum*)param0 = *(DomCardEnum*)param1;
        *(DomCardEnum*)param1 = v0;
    loc_7C1038:
        result = 2;
    }
    else {
        result = 0;
    }
    long v7 = *(long*)param4((uint64_t)*(DomCardEnum*)param3, (uint64_t)*(DomCardEnum*)param2);
    if(v7 & 0x1L) {
        v0 = *(DomCardEnum*)param2;
        *(DomCardEnum*)param2 = *(DomCardEnum*)param3;
        *(DomCardEnum*)param3 = v0;
        long v8 = *(long*)param4((uint64_t)*(DomCardEnum*)param2, (uint64_t)*(DomCardEnum*)param1);
        if(!(v8 & 0x1L)) {
            return v1 + 1;
        }
        v0 = *(DomCardEnum*)param1;
        *(DomCardEnum*)param1 = *(DomCardEnum*)param2;
        *(DomCardEnum*)param2 = v0;
        long v9 = *(long*)param4((uint64_t)*(DomCardEnum*)param1, (uint64_t)*(DomCardEnum*)param0);
        if(v9 & 0x1L) {
            v0 = *(DomCardEnum*)param0;
            *(DomCardEnum*)param0 = *(DomCardEnum*)param1;
            *(DomCardEnum*)param1 = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
