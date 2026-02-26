// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(DomTypeDef const*, DomTypeDef const*), DomTypeDef const**>(DomTypeDef const** param0, DomTypeDef const** param1, DomTypeDef const** param2, DomTypeDef const** param3, bool (*&)(DomTypeDef const*, DomTypeDef const*) param4) {
    DomTypeDef const* ptr0;
    int result;
    int v0;
    long v1 = *(long*)param4((long)param1[0], (long)param0[0], (long)param2, (long)param3, (long)param4);
    long v2 = *(long*)param4((long)param2[0], (long)param1[0]);
    if(v1 & 0x1L) {
        DomTypeDef const* ptr1 = param0[0];
        if(v2 & 0x1L) {
            result = 1;
            param0[0] = param2[0];
            param2[0] = ptr1;
        }
        else {
            param0[0] = param1[0];
            param1[0] = ptr1;
            long v3 = *(long*)param4((long)param2[0], (long)ptr1);
            if(v3 & 0x1L) {
                ptr0 = param1[0];
                param1[0] = param2[0];
                param2[0] = ptr0;
                goto loc_7BF7A0;
            }
        loc_7BF7A8:
            result = 1;
        }
    }
    else if(v2 & 0x1L) {
        ptr0 = param1[0];
        param1[0] = param2[0];
        param2[0] = ptr0;
        long v4 = *(long*)param4((long)param1[0], (long)param0[0]);
        if(!(v4 & 0x1L)) {
            goto loc_7BF7A8;
        }
        ptr0 = param0[0];
        param0[0] = param1[0];
        param1[0] = ptr0;
    loc_7BF7A0:
        result = 2;
    }
    else {
        result = 0;
    }
    long v5 = *(long*)param4((long)param3[0], (long)param2[0]);
    if(v5 & 0x1L) {
        ptr0 = param2[0];
        param2[0] = param3[0];
        param3[0] = ptr0;
        long v6 = *(long*)param4((long)param2[0], (long)param1[0]);
        if(!(v6 & 0x1L)) {
            return v0 + 1;
        }
        ptr0 = param1[0];
        param1[0] = param2[0];
        param2[0] = ptr0;
        long v7 = *(long*)param4((long)param1[0], (long)param0[0]);
        if(v7 & 0x1L) {
            ptr0 = param0[0];
            param0[0] = param1[0];
            param1[0] = ptr0;
            return v0 + 3;
        }
        result = v0 + 2;
    }
    return result;
}
