long GameIsValidToCreate(int param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12 = *(param1 + 24);
    int v13 = 0;
    if(v12 == 1) {
        goto loc_5C7C28;
    }
    else if(v12 == 2) {
        v13 = 0;
        v1 = 0;
        v2 = *(param1 + 25) == 0;
        v0 = *(param1 + 163);
        if(*(param1 + 163) <= 999) {
            goto loc_5C7C44;
        }
        else {
            goto loc_5C7C94;
        }
    }
    else if(v12 > 999) {
        v2 = 0;
        v1 = 0;
        if(v12 - 1000 <= 1) {
        loc_5C7C28:
            v2 = 0;
            v1 = 0;
            v13 = 1;
        }
    loc_5C7C34:
        v0 = *(param1 + 163);
        if(*(param1 + 163) > 999) {
            goto loc_5C7C94;
        }
    loc_5C7C44:
        if(v0 == 2) {
            v2 = *(param1 + 164) ? v11: v11 + 1;
            v8 = *(param1 + 302);
            if(*(param1 + 302) <= 999) {
                goto loc_5C7CAC;
            }
            else {
                goto loc_5C7CF4;
            loc_5C7C94:
                if(v0 - 1000 >= 2) {
                    goto loc_5C7C9C;
                }
            }
        }
        else if(v0 == 3) {
            v1 = v10 + 1;
            v8 = *(param1 + 302);
            if(*(param1 + 302) <= 999) {
                goto loc_5C7CAC;
            }
            else {
                goto loc_5C7CF4;
            }
        }
        else if(v0 < 1 || v0 >= 4) {
            goto loc_5C7C9C;
        }
        v13 = param0 + 1;
    loc_5C7C9C:
        v8 = *(param1 + 302);
        if(*(param1 + 302) > 999) {
            goto loc_5C7CF4;
        }
    loc_5C7CAC:
        if(v8 == 2) {
            v2 = *(param1 + 303) ? v11: v11 + 1;
            v7 = *(param1 + 441);
            if(*(param1 + 441) <= 999) {
                goto loc_5C7D0C;
            }
            else {
                goto loc_5C7D54;
            loc_5C7CF4:
                if(v8 - 1000 >= 2) {
                    goto loc_5C7CFC;
                }
            }
        }
        else if(v8 == 3) {
            v1 = v10 + 1;
            v7 = *(param1 + 441);
            if(*(param1 + 441) <= 999) {
                goto loc_5C7D0C;
            }
            else {
                goto loc_5C7D54;
            }
        }
        else if(v8 < 1 || v8 >= 4) {
            goto loc_5C7CFC;
        }
        v13 = param0 + 1;
    loc_5C7CFC:
        v7 = *(param1 + 441);
        if(*(param1 + 441) > 999) {
            goto loc_5C7D54;
        }
    loc_5C7D0C:
        if(v7 == 2) {
            v2 = *(param1 + 442) ? v11: v11 + 1;
            v6 = *(param1 + 0x244);
            if(*(param1 + 0x244) <= 999) {
                goto loc_5C7D6C;
            }
            else {
                goto loc_5C7DB4;
            loc_5C7D54:
                if(v7 - 1000 >= 2) {
                    goto loc_5C7D5C;
                }
            }
        }
        else if(v7 == 3) {
            v1 = v10 + 1;
            v6 = *(param1 + 0x244);
            if(*(param1 + 0x244) <= 999) {
                goto loc_5C7D6C;
            }
            else {
                goto loc_5C7DB4;
            }
        }
        else if(v7 < 1 || v7 >= 4) {
            goto loc_5C7D5C;
        }
        v13 = param0 + 1;
    loc_5C7D5C:
        v6 = *(param1 + 0x244);
        if(*(param1 + 0x244) > 999) {
            goto loc_5C7DB4;
        }
    loc_5C7D6C:
        if(v6 == 2) {
            v2 = *(param1 + 581) ? v11: v11 + 1;
            v5 = *(param1 + 719);
            if(*(param1 + 719) <= 999) {
                goto loc_5C7DCC;
            }
            else {
                goto loc_5C7E14;
            loc_5C7DB4:
                if(v6 - 1000 >= 2) {
                    goto loc_5C7DBC;
                }
            }
        }
        else if(v6 == 3) {
            v1 = v10 + 1;
            v5 = *(param1 + 719);
            if(*(param1 + 719) <= 999) {
                goto loc_5C7DCC;
            }
            else {
                goto loc_5C7E14;
            }
        }
        else if(v6 < 1 || v6 >= 4) {
            goto loc_5C7DBC;
        }
        v13 = param0 + 1;
    loc_5C7DBC:
        v5 = *(param1 + 719);
        if(*(param1 + 719) > 999) {
            goto loc_5C7E14;
        }
    loc_5C7DCC:
        if(v5 == 2) {
            v2 = *(param1 + 720) ? v11: v11 + 1;
            v4 = *(param1 + 858);
            if(*(param1 + 858) <= 999) {
                goto loc_5C7E2C;
            }
            else {
                goto loc_5C7E74;
            loc_5C7E14:
                if(v5 - 1000 >= 2) {
                    goto loc_5C7E1C;
                }
            }
        }
        else if(v5 == 3) {
            v1 = v10 + 1;
            v4 = *(param1 + 858);
            if(*(param1 + 858) <= 999) {
                goto loc_5C7E2C;
            }
            else {
                goto loc_5C7E74;
            }
        }
        else if(v5 < 1 || v5 >= 4) {
            goto loc_5C7E1C;
        }
        v13 = param0 + 1;
    loc_5C7E1C:
        v4 = *(param1 + 858);
        if(*(param1 + 858) > 999) {
            goto loc_5C7E74;
        }
    loc_5C7E2C:
        if(v4 == 2) {
            v2 = *(param1 + 859) ? v11: v11 + 1;
            v3 = *(param1 + 997);
            if(*(param1 + 997) <= 999) {
                goto loc_5C7E8C;
            }
            else {
            loc_5C7EC8:
                if(v9 - 1000 >= 2) {
                    return ((param2 & 1) != 0 ? v2: v1) + v13 > 1;
                }
                return ((param2 & 1) != 0 ? v2: v1) + param0 + 1 > 1;
            loc_5C7E74:
                if(v4 - 1000 >= 2) {
                    goto loc_5C7E7C;
                }
            }
        }
        else if(v4 == 3) {
            v1 = v10 + 1;
            v3 = *(param1 + 997);
            if(*(param1 + 997) <= 999) {
                goto loc_5C7E8C;
            }
            else {
                goto loc_5C7EC8;
            }
        }
        else if(v4 < 1 || v4 >= 4) {
            goto loc_5C7E7C;
        }
        v13 = param0 + 1;
    loc_5C7E7C:
        v3 = *(param1 + 997);
        if(*(param1 + 997) > 999) {
            goto loc_5C7EC8;
        }
    loc_5C7E8C:
        if(v3 == 1) {
            return ((param2 & 1) != 0 ? v2: v1) + param0 + 1 > 1;
        }
        if(v3 == 2) {
            v2 = *(param1 + 998) ? v11: v11 + 1;
        }
        else if(v3 == 3) {
            return ((param2 & 1) == 0 ? v10 + 1: v2) + v13 > 1;
        }
    }
    else {
        v2 = 0;
        v1 = 0;
        if(v12 == 3) {
            v13 = 0;
            v2 = 0;
            v1 = 1;
            v0 = *(param1 + 163);
            if(*(param1 + 163) <= 999) {
                goto loc_5C7C44;
            }
            else {
                goto loc_5C7C94;
            }
        }
        else {
            goto loc_5C7C34;
        }
    }
    return ((param2 & 1) != 0 ? v2: v1) + v13 > 1;
}
