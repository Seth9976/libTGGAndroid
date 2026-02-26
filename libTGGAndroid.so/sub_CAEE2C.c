long sub_CAEE2C(int param0, long* param1, long* param2, long* param3, long* param4, long* param5) {
    uint32_t result;
    long v0 = *param2;
    long v1 = *param1;
    long v2 = *param3;
    if(v1 > v0) {
        if(v2 < v0) {
            *param1 = v2;
            *param3 = v1;
            result = 1;
            goto loc_CAEEB0;
        }
        else {
            *param1 = v0;
            *param2 = v1;
            v2 = *param3;
            if(v2 < v1) {
                result = 2;
                *param2 = v2;
                *param3 = v1;
            loc_CAEEB0:
                v2 = v1;
            }
            else {
                result = 1;
            }
        }
    }
    else if(v2 < v0) {
        *param2 = v2;
        *param3 = v0;
        long v3 = *param2;
        long v4 = *param1;
        if(v3 < v4) {
            *param1 = v3;
            *param2 = v4;
            v2 = *param3;
            result = 2;
        }
        else {
            result = 1;
            v2 = v0;
        }
    }
    else {
        result = 0;
    }
    long v5 = *param4;
    if(v2 > v5) {
        *param3 = v5;
        *param4 = v2;
        long v6 = *param3;
        long v7 = *param2;
        if(v6 < v7) {
            *param2 = v6;
            *param3 = v7;
            long v8 = *param2;
            long v9 = *param1;
            if(v8 < v9) {
                result = param0 + 3;
                *param1 = v8;
                *param2 = v9;
            }
            else {
                result = param0 + 2;
            }
        }
        else {
            result = param0 + 1;
        }
    }
    long v10 = *param5;
    long v11 = *param4;
    if(v10 < v11) {
        *param4 = v10;
        *param5 = v11;
        v10 = *param4;
        v11 = *param3;
        if(v10 >= v11) {
            return (uint64_t)(param0 + 1);
        }
        *param3 = v10;
        *param4 = v11;
        v10 = *param3;
        v11 = *param2;
        if(v10 >= v11) {
            return (uint64_t)(param0 + 2);
        }
        *param2 = v10;
        *param3 = v11;
        v10 = *param2;
        v11 = *param1;
        if(v10 >= v11) {
            return (uint64_t)(param0 + 3);
        }
        result = param0 + 4;
        *param1 = v10;
        *param2 = v11;
    }
    return result;
}
