long sub_CAF768(int param0, float* param1, float* param2, float* param3, float* param4, float* param5) {
    uint32_t result;
    float v0 = *param2;
    float v1 = *param1;
    float v2 = *param3;
    if(v1 > v0) {
        if(v2 < v0) {
            *param1 = v2;
            *param3 = v1;
            result = 1;
            goto loc_CAF7EC;
        }
        else {
            *param1 = v0;
            *param2 = v1;
            v2 = *param3;
            if(*param3 < v1) {
                result = 2;
                *param2 = v2;
                *param3 = v1;
            loc_CAF7EC:
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
        float v3 = *param2;
        float v4 = *param1;
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
    float v5 = *param4;
    if(*param4 < v2) {
        *param3 = v5;
        *param4 = v2;
        float v6 = *param3;
        float v7 = *param2;
        if(*param2 > v6) {
            *param2 = v6;
            *param3 = v7;
            float v8 = *param2;
            float v9 = *param1;
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
    float v10 = *param5;
    float v11 = *param4;
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
