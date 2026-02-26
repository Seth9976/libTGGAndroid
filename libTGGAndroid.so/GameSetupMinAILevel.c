long GameSetupMinAILevel(uint32_t* param0) {
    uint32_t v0;
    uint32_t result1;
    uint32_t v1;
    uint32_t v2;
    uint32_t result;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7 = *(param0 + 24);
    if(*(param0 + 24) == 0) {
        result1 = 0;
        v1 = 0xffffffff;
        v0 = *(param0 + 163);
        if(*(param0 + 163) == 0) {
            goto loc_5EAD0C;
        }
        else {
        loc_5EACB0:
            if(v0 == 3) {
                v6 = *(param0 + 164);
                if(v1 == -1) {
                    goto loc_5EAD10;
                }
                else {
                    if(v6 == v1) {
                        goto loc_5EAD0C;
                    }
                    switch(v6) {
                        case -1: {
                            v5 = 0;
                            break;
                        }
                        case 3: {
                            v5 = 1;
                            break;
                        }
                        default: {
                            v5 = v6 + 2;
                            break;
                        }
                    }
                    if((int)(v1 != 3 ? v1 + 2: 1) > (int)v5) {
                        goto loc_5EAD10;
                    }
                    goto loc_5EAD0C;
                }
            }
        }
        if(!(result1 & 1)) {
            result1 = 1;
        loc_5EAD0C:
            v6 = v1;
        loc_5EAD10:
            v1 = *(param0 + 302);
            if(*(param0 + 302) != 0) {
                if(v1 == 3) {
                    v1 = *(param0 + 303);
                    if(v6 == -1) {
                        goto loc_5EAD7C;
                    }
                    else {
                        if(v6 != v1) {
                            switch(v1) {
                                case -1: {
                                    v5 = 0;
                                    break;
                                }
                                case 3: {
                                    v5 = 1;
                                    break;
                                }
                                default: {
                                    v5 = v1 + 2;
                                    break;
                                }
                            }
                            if((int)(v6 != 3 ? v6 + 2: 1) > (int)v5) {
                                goto loc_5EAD7C;
                            }
                        }
                        goto loc_5EAD78;
                    }
                }
                if(result1 & 1) {
                    goto loc_5EAF6C;
                }
                else {
                    result1 = 1;
                }
            }
        loc_5EAD78:
            v1 = v6;
        loc_5EAD7C:
            uint32_t v8 = *(param0 + 441);
            if(*(param0 + 441) != 0) {
                if(v8 == 3) {
                    v4 = *(param0 + 442);
                    if(v1 == -1) {
                        goto loc_5EADE8;
                    }
                    else {
                        if(v4 != v1) {
                            switch(v4) {
                                case -1: {
                                    v5 = 0;
                                    break;
                                }
                                case 3: {
                                    v5 = 1;
                                    break;
                                }
                                default: {
                                    v5 = v4 + 2;
                                    break;
                                }
                            }
                            if((int)(v1 != 3 ? v1 + 2: 1) > (int)v5) {
                                goto loc_5EADE8;
                            }
                        }
                        goto loc_5EADE4;
                    }
                }
                if(result1 & 1) {
                    goto loc_5EAF6C;
                }
                result1 = 1;
            }
        loc_5EADE4:
            v4 = v1;
        loc_5EADE8:
            v1 = *(param0 + 0x244);
            if(*(param0 + 0x244) != 0) {
                if(v1 == 3) {
                    v1 = *(param0 + 581);
                    if(v4 == -1) {
                        goto loc_5EAE54;
                    }
                    else {
                        if(v4 != v1) {
                            switch(v1) {
                                case -1: {
                                    v5 = 0;
                                    break;
                                }
                                case 3: {
                                    v5 = 1;
                                    break;
                                }
                                default: {
                                    v5 = v1 + 2;
                                    break;
                                }
                            }
                            if((int)(v4 != 3 ? v4 + 2: 1) > (int)v5) {
                                goto loc_5EAE54;
                            }
                        }
                        goto loc_5EAE50;
                    }
                }
                if(result1 & 1) {
                    goto loc_5EAF6C;
                }
                result1 = 1;
            }
        loc_5EAE50:
            v1 = v4;
        loc_5EAE54:
            uint32_t v9 = *(param0 + 719);
            if(*(param0 + 719) != 0) {
                if(v9 == 3) {
                    v5 = *(param0 + 720);
                    if(v1 == -1) {
                        goto loc_5EAEC0;
                    }
                    else {
                        if(v1 != v5) {
                            switch(v5) {
                                case -1: {
                                    v3 = 0;
                                    break;
                                }
                                case 3: {
                                    v3 = 1;
                                    break;
                                }
                                default: {
                                    v3 = v5 + 2;
                                    break;
                                }
                            }
                            if((int)(v1 != 3 ? v1 + 2: 1) > (int)v3) {
                                goto loc_5EAEC0;
                            }
                        }
                        goto loc_5EAEBC;
                    }
                }
                if(result1 & 1) {
                    goto loc_5EAF6C;
                }
                result1 = 1;
            }
        loc_5EAEBC:
            v5 = v1;
        loc_5EAEC0:
            uint32_t v10 = *(param0 + 858);
            if(*(param0 + 858) != 0) {
                if(v10 == 3) {
                    result = *(param0 + 859);
                    if(v5 == -1) {
                        goto loc_5EAF2C;
                    }
                    else {
                        if(result != v5) {
                            switch(result) {
                                case -1: {
                                    v2 = 0;
                                    break;
                                }
                                case 3: {
                                    v2 = 1;
                                    break;
                                }
                                default: {
                                    v2 = result + 2;
                                    break;
                                }
                            }
                            if((int)(v5 != 3 ? v5 + 2: 1) > (int)v2) {
                                goto loc_5EAF2C;
                            }
                        }
                        goto loc_5EAF28;
                    }
                }
                if(result1 & 1) {
                    goto loc_5EAF6C;
                }
                result1 = 1;
            }
        loc_5EAF28:
            result = v5;
        loc_5EAF2C:
            v1 = *(param0 + 997);
            if(*(param0 + 997) == 0) {
                return result;
            }
            if(v1 == 3) {
                result1 = *(param0 + 998);
                if(result != -1) {
                    if(result == result1) {
                        return result;
                    }
                    switch(result1) {
                        case -1: {
                            v1 = 0;
                            break;
                        }
                        case 3: {
                            v1 = 1;
                            break;
                        }
                        default: {
                            v1 = result1 + 2;
                            break;
                        }
                    }
                    if((int)(result != 3 ? result + 2: 1) <= (int)v1) {
                        return result;
                    }
                }
                return result1;
            }
            if(!(result1 & 1)) {
                return result;
            }
        }
    loc_5EAF6C:
        result = 0xffffffff;
    }
    else if(v7 == 3) {
        v1 = *(param0 + 25);
        result1 = 0;
        v0 = *(param0 + 163);
        if(*(param0 + 163) == 0) {
            goto loc_5EAD0C;
        }
        else {
            goto loc_5EACB0;
        }
    }
    else {
        result1 = 1;
        v1 = 0xffffffff;
        v0 = *(param0 + 163);
        if(*(param0 + 163) == 0) {
            goto loc_5EAD0C;
        }
        goto loc_5EACB0;
    }
    return result;
}
