long sub_CAA2D0(int param0, char* param1, char* param2, char* param3, char* param4, char* param5) {
    uint32_t result;
    int v0 = (uint32_t)*param2;
    int v1 = (uint32_t)*param1;
    int v2 = (uint32_t)*param3;
    if(v1 > v0) {
        if(v2 < v0) {
            *param1 = (uint8_t)v2;
            *param3 = (uint8_t)v1;
            result = 1;
            goto loc_CAA354;
        }
        else {
            *param1 = (uint8_t)v0;
            *param2 = (uint8_t)v1;
            v2 = (uint32_t)*param3;
            if((uint32_t)*param3 < v1) {
                result = 2;
                *param2 = (uint8_t)v2;
                *param3 = (uint8_t)v1;
            loc_CAA354:
                v2 = v1;
            }
            else {
                result = 1;
            }
        }
    }
    else if(v2 < v0) {
        *param2 = (uint8_t)v2;
        *param3 = (uint8_t)v0;
        int v3 = (uint32_t)*param2;
        long v4 = (uint64_t)*param1;
        if((uint32_t)*param1 > v3) {
            *param1 = (uint8_t)v3;
            *param2 = (uint8_t)v4;
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
    long v5 = (uint64_t)*param4;
    if((uint32_t)*param4 < v2) {
        *param3 = (uint8_t)v5;
        *param4 = (uint8_t)v2;
        int v6 = (uint32_t)*param3;
        long v7 = (uint64_t)*param2;
        if((uint32_t)*param2 > v6) {
            *param2 = (uint8_t)v6;
            *param3 = (uint8_t)v7;
            int v8 = (uint32_t)*param2;
            long v9 = (uint64_t)*param1;
            if((uint32_t)*param1 > v8) {
                result = param0 + 3;
                *param1 = (uint8_t)v8;
                *param2 = (uint8_t)v9;
            }
            else {
                result = param0 + 2;
            }
        }
        else {
            result = param0 + 1;
        }
    }
    int v10 = (uint32_t)*param5;
    long v11 = (uint64_t)*param4;
    if((uint32_t)*param4 > v10) {
        *param4 = (uint8_t)v10;
        *param5 = (uint8_t)v11;
        v10 = (uint32_t)*param4;
        v11 = (uint64_t)*param3;
        if((uint32_t)*param3 <= v10) {
            return (uint64_t)(param0 + 1);
        }
        *param3 = (uint8_t)v10;
        *param4 = (uint8_t)v11;
        v10 = (uint32_t)*param3;
        v11 = (uint64_t)*param2;
        if((uint32_t)*param2 <= v10) {
            return (uint64_t)(param0 + 2);
        }
        *param2 = (uint8_t)v10;
        *param3 = (uint8_t)v11;
        v10 = (uint32_t)*param2;
        v11 = (uint64_t)*param1;
        if((uint32_t)*param1 <= v10) {
            return (uint64_t)(param0 + 3);
        }
        result = param0 + 4;
        *param1 = (uint8_t)v10;
        *param2 = (uint8_t)v11;
    }
    return result;
}
