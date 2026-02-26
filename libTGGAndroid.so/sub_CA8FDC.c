long sub_CA8FDC(int param0, int* param1, int* param2, int* param3, int* param4, int* param5) {
    uint32_t result;
    int v0 = *param2;
    int v1 = *param1;
    int v2 = *param3;
    if(v1 > v0) {
        if(v2 < v0) {
            *param1 = v2;
            *param3 = v1;
            result = 1;
            goto loc_CA9060;
        }
        else {
            *param1 = v0;
            *param2 = v1;
            v2 = *param3;
            if(*param3 < v1) {
                result = 2;
                *param2 = v2;
                *param3 = v1;
            loc_CA9060:
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
        int v3 = *param2;
        int v4 = *param1;
        if(*param1 > v3) {
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
    int v5 = *param4;
    if(*param4 < v2) {
        *param3 = v5;
        *param4 = v2;
        int v6 = *param3;
        int v7 = *param2;
        if(*param2 > v6) {
            *param2 = v6;
            *param3 = v7;
            int v8 = *param2;
            int v9 = *param1;
            if(*param1 > v8) {
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
    int v10 = *param5;
    int v11 = *param4;
    if(*param4 > v10) {
        *param4 = v10;
        *param5 = v11;
        v10 = *param4;
        v11 = *param3;
        if(*param3 <= v10) {
            return (uint64_t)(param0 + 1);
        }
        *param3 = v10;
        *param4 = v11;
        v10 = *param3;
        v11 = *param2;
        if(*param2 <= v10) {
            return (uint64_t)(param0 + 2);
        }
        *param2 = v10;
        *param3 = v11;
        v10 = *param2;
        v11 = *param1;
        if(*param1 <= v10) {
            return (uint64_t)(param0 + 3);
        }
        result = param0 + 4;
        *param1 = v10;
        *param2 = v11;
    }
    return result;
}
