long sub_CAAC84(int param0, short* param1, short* param2, short* param3, short* param4, short* param5) {
    uint32_t result;
    short v0 = *param2;
    short v1 = *param1;
    int v2 = *param3;
    if(v0 < v1) {
        if(v0 > v2) {
            *param1 = (uint16_t)v2;
            *param3 = v1;
            result = 1;
            goto loc_CAAD08;
        }
        else {
            *param1 = v0;
            *param2 = v1;
            short v3 = *param3;
            v2 = v3;
            if(v1 > v3) {
                result = 2;
                *param2 = (uint16_t)v2;
                *param3 = v1;
            loc_CAAD08:
                v2 = v1;
            }
            else {
                result = 1;
            }
        }
    }
    else if(v0 > v2) {
        *param2 = (uint16_t)v2;
        *param3 = v0;
        short v4 = *param2;
        short v5 = *param1;
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
    short v6 = *param4;
    if((int)(uint16_t)v2 > v6) {
        *param3 = v6;
        *param4 = (uint16_t)v2;
        short v7 = *param3;
        short v8 = *param2;
        if(v7 < v8) {
            *param2 = v7;
            *param3 = v8;
            short v9 = *param2;
            short v10 = *param1;
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
    short v11 = *param5;
    short v12 = *param4;
    if(v11 < v12) {
        *param4 = v11;
        *param5 = v12;
        short v13 = *param4;
        v12 = *param3;
        if(v12 <= v13) {
            return (uint64_t)(param0 + 1);
        }
        *param3 = v13;
        *param4 = v12;
        short v14 = *param3;
        v12 = *param2;
        if(v12 <= v14) {
            return (uint64_t)(param0 + 2);
        }
        *param2 = v14;
        *param3 = v12;
        short v15 = *param2;
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
