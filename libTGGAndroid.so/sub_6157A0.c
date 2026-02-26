long sub_6157A0(int param0, int* param1, int* param2, int* param3, int* param4, int* param5) {
    int v0;
    int v1;
    int v2;
    uint32_t result;
    int v3 = *param2;
    int v4 = *param1;
    int v5 = *param3;
    if(v4 < v3) {
        if(v5 > v3) {
            *param1 = v5;
            *param3 = v4;
            result = 1;
            goto loc_61582C;
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
        loc_61582C:
            v5 = v4;
            v2 = *param4;
            if(*param4 > v5) {
                goto loc_61587C;
            }
            else {
                goto loc_6158D0;
            }
        }
        result = 1;
        v2 = *param4;
        if(*param4 <= v5) {
            goto loc_6158D0;
        }
        goto loc_61587C;
    }
    else {
        if(v5 > v3) {
            *param2 = v5;
            *param3 = v3;
            int v6 = *param2;
            int v7 = *param1;
            if(*param1 < v6) {
                *param1 = v6;
                *param2 = v7;
                v5 = *param3;
                result = 2;
                v2 = *param4;
                if(*param4 > v5) {
                    goto loc_61587C;
                }
                goto loc_6158D0;
            }
            result = 1;
            v5 = v3;
            v2 = *param4;
            if(*param4 > v5) {
                goto loc_61587C;
            }
            goto loc_6158D0;
        }
        result = 0;
        v2 = *param4;
        if(*param4 <= v5) {
            goto loc_6158D0;
        }
    loc_61587C:
        *param3 = v2;
        *param4 = v5;
        int v8 = *param3;
        int v9 = *param2;
        if(*param2 < v8) {
            *param2 = v8;
            *param3 = v9;
            int v10 = *param2;
            int v11 = *param1;
            if(*param1 < v10) {
                result = param0 + 3;
                *param1 = v10;
                *param2 = v11;
                v1 = *param5;
                v0 = *param4;
                if(*param4 >= v1) {
                    return result;
                }
                goto loc_6158E0;
            }
            else {
                result = param0 + 2;
                v1 = *param5;
                v0 = *param4;
                if(*param4 < v1) {
                    goto loc_6158E0;
                }
            }
        }
        else {
            result = param0 + 1;
        loc_6158D0:
            v1 = *param5;
            v0 = *param4;
            if(*param4 < v1) {
            loc_6158E0:
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
