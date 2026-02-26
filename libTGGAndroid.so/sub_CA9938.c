long sub_CA9938(int param0, char* param1, char* param2, char* param3, char* param4, char* param5) {
    uint32_t result;
    char v0 = *param2;
    char v1 = *param1;
    int v2 = *param3;
    if(v0 < v1) {
        if(v0 > v2) {
            *param1 = (uint8_t)v2;
            *param3 = v1;
            result = 1;
            goto loc_CA99BC;
        }
        else {
            *param1 = v0;
            *param2 = v1;
            char v3 = *param3;
            v2 = v3;
            if(v1 > v3) {
                result = 2;
                *param2 = (uint8_t)v2;
                *param3 = v1;
            loc_CA99BC:
                v2 = v1;
            }
            else {
                result = 1;
            }
        }
    }
    else if(v0 > v2) {
        *param2 = (uint8_t)v2;
        *param3 = v0;
        char v4 = *param2;
        char v5 = *param1;
        if(v4 < v5) {
            *param1 = v4;
            *param2 = v5;
            v2 = (uint32_t)*param3;
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
    char v6 = *param4;
    if((int)(uint8_t)v2 > v6) {
        *param3 = v6;
        *param4 = (uint8_t)v2;
        char v7 = *param3;
        char v8 = *param2;
        if(v7 < v8) {
            *param2 = v7;
            *param3 = v8;
            char v9 = *param2;
            char v10 = *param1;
            if(v10 > v9) {
                result = param0 + 3;
                *param1 = v9;
                *param2 = v10;
            }
            else {
                result = param0 + 2;
            }
        }
        else {
            result = param0 + 1;
        }
    }
    char v11 = *param5;
    char v12 = *param4;
    if(v11 < v12) {
        *param4 = v11;
        *param5 = v12;
        char v13 = *param4;
        v12 = *param3;
        if(v12 <= v13) {
            return (uint64_t)(param0 + 1);
        }
        *param3 = v13;
        *param4 = v12;
        char v14 = *param3;
        v12 = *param2;
        if(v12 <= v14) {
            return (uint64_t)(param0 + 2);
        }
        *param2 = v14;
        *param3 = v12;
        char v15 = *param2;
        v12 = *param1;
        if(v12 <= v15) {
            return (uint64_t)(param0 + 3);
        }
        result = param0 + 4;
        *param1 = v15;
        *param2 = v12;
    }
    return result;
}
