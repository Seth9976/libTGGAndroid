long sub_616BFC(int param0, float* param1, float* param2, float* param3, float* param4, float* param5) {
    float v0;
    float v1;
    float v2;
    uint32_t result;
    float v3 = *param2;
    float v4 = *param1;
    float v5 = *param3;
    if(v4 < v3) {
        if(v5 > v3) {
            *param1 = v5;
            *param3 = v4;
            result = 1;
            goto loc_616C88;
        }
        else {
            *param1 = v3;
            *param2 = v4;
            v5 = *param3;
        }
        if(*param3 > v4) {
            result = 2;
            *param2 = v5;
            *param3 = v4;
        loc_616C88:
            v5 = v4;
            v2 = *param4;
            if(*param4 > v5) {
                goto loc_616CD8;
            }
            else {
                goto loc_616D2C;
            }
        }
        result = 1;
        v2 = *param4;
        if(*param4 <= v5) {
            goto loc_616D2C;
        }
        goto loc_616CD8;
    }
    else {
        if(v5 > v3) {
            *param2 = v5;
            *param3 = v3;
            float v6 = *param2;
            float v7 = *param1;
            if(*param1 < v6) {
                *param1 = v6;
                *param2 = v7;
                v5 = *param3;
                result = 2;
                v2 = *param4;
                if(*param4 > v5) {
                    goto loc_616CD8;
                }
                goto loc_616D2C;
            }
            result = 1;
            v5 = v3;
            v2 = *param4;
            if(*param4 > v5) {
                goto loc_616CD8;
            }
            goto loc_616D2C;
        }
        result = 0;
        v2 = *param4;
        if(*param4 <= v5) {
            goto loc_616D2C;
        }
    loc_616CD8:
        *param3 = v2;
        *param4 = v5;
        float v8 = *param3;
        float v9 = *param2;
        if(*param2 < v8) {
            *param2 = v8;
            *param3 = v9;
            float v10 = *param2;
            float v11 = *param1;
            if(*param1 < v10) {
                result = param0 + 3;
                *param1 = v10;
                *param2 = v11;
                v1 = *param5;
                v0 = *param4;
                if(*param4 >= v1) {
                    return result;
                }
                goto loc_616D3C;
            }
            else {
                result = param0 + 2;
                v1 = *param5;
                v0 = *param4;
                if(*param4 < v1) {
                    goto loc_616D3C;
                }
            }
        }
        else {
            result = param0 + 1;
        loc_616D2C:
            v1 = *param5;
            v0 = *param4;
            if(*param4 < v1) {
            loc_616D3C:
                *param4 = v1;
                *param5 = v0;
                v1 = *param4;
                v0 = *param3;
                if(*param3 < v1) {
                    *param3 = v1;
                    *param4 = v0;
                    v1 = *param3;
                    v0 = *param2;
                    if(*param2 < v1) {
                        *param2 = v1;
                        *param3 = v0;
                        v1 = *param2;
                        v0 = *param1;
                        if(*param1 < v1) {
                            *param1 = v1;
                            *param2 = v0;
                            return (uint64_t)(param0 + 4);
                        }
                        return result + 3;
                    }
                    return result + 2;
                }
                return result + 1;
            }
        }
    }
    return result;
}
