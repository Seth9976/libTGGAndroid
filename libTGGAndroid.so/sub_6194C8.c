long sub_6194C8(int param0, int* param1, int* param2, int* param3, int* param4) {
    int v0;
    uint32_t result;
    int v1 = *param2;
    int v2 = *param3;
    if(*param1 <= v1) {
        if(v1 <= v2) {
            result = 0;
            if(*param3 <= *param4) {
                return result;
            }
            goto loc_619638;
        }
        else {
            long v3 = *(long*)param2;
            v0 = *(param2 + 2);
            long v4 = *(long*)param3;
            *(param2 + 2) = *(param3 + 2);
            *(long*)param2 = v4;
            *(param3 + 2) = v0;
            *(long*)param3 = v3;
            if(*param1 <= *param2) {
            loc_619620:
                result = 1;
                if(*param3 > *param4) {
                    goto loc_619638;
                }
                return result;
            }
            long v5 = *(long*)param1;
            v0 = *(param1 + 2);
            long v6 = *(long*)param2;
            *(param1 + 2) = *(param2 + 2);
            *(long*)param1 = v6;
            *(param2 + 2) = v0;
            *(long*)param2 = v5;
        }
    loc_619618:
        if(*param3 <= *param4) {
            return 2L;
        }
    }
    else if(v1 > v2) {
        long v7 = *(long*)param1;
        v0 = *(param1 + 2);
        long v8 = *(long*)param3;
        *(param1 + 2) = *(param3 + 2);
        *(long*)param1 = v8;
        *(param3 + 2) = v0;
        *(long*)param3 = v7;
        goto loc_619620;
    }
    else {
        long v9 = *(long*)param1;
        v0 = *(param1 + 2);
        long v10 = *(long*)param2;
        *(param1 + 2) = *(param2 + 2);
        *(long*)param1 = v10;
        *(param2 + 2) = v0;
        *(long*)param2 = v9;
        if((uint32_t)v9 <= *param3) {
            goto loc_619620;
        }
        long v11 = *(long*)param2;
        v0 = *(param2 + 2);
        long v12 = *(long*)param3;
        *(param2 + 2) = *(param3 + 2);
        *(long*)param2 = v12;
        *(param3 + 2) = v0;
        *(long*)param3 = v11;
        goto loc_619618;
    }
loc_619638:
    long v13 = *(long*)param3;
    v0 = *(param3 + 2);
    long v14 = *(long*)param4;
    *(param3 + 2) = *(param4 + 2);
    *(long*)param3 = v14;
    *(param4 + 2) = v0;
    *(long*)param4 = v13;
    if(*param2 > *param3) {
        long v15 = *(long*)param2;
        v0 = *(param2 + 2);
        long v16 = *(long*)param3;
        *(param2 + 2) = *(param3 + 2);
        *(long*)param2 = v16;
        *(param3 + 2) = v0;
        *(long*)param3 = v15;
        if(*param1 > *param2) {
            long v17 = *(long*)param1;
            v0 = *(param1 + 2);
            long v18 = *(long*)param2;
            *(param1 + 2) = *(param2 + 2);
            *(long*)param1 = v18;
            *(param2 + 2) = v0;
            *(long*)param2 = v17;
            return (uint64_t)(param0 + 3);
        }
        return (uint64_t)(param0 + 2);
    }
    return (uint64_t)(param0 + 1);
}
