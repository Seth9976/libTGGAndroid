long EntitlementLookupByDLC(int param0) {
    char v0;
    long v1;
    int v2 = param0;
    long result = &gvar_3B9764;
    if(param0 <= 0xff) {
        v1 = 0L;
        switch(v2) {
            case 0: {
                goto loc_5F3508;
            }
            case 1: {
                break;
            }
            case 2: {
                v1 = 5L;
                goto loc_5F3508;
            }
            case 3: {
                v1 = 7L;
                goto loc_5F3508;
            }
            case 4: {
                v1 = 10L;
                goto loc_5F3508;
            }
            case 5: {
                v1 = 11L;
                goto loc_5F3508;
            }
            case 6: {
                v1 = 14L;
                goto loc_5F3508;
            }
            case 7: {
                v1 = 17L;
                goto loc_5F3508;
            }
            case 8: {
                v1 = 20L;
                goto loc_5F3508;
            }
            case 9: {
                v1 = 21L;
                goto loc_5F3508;
            }
            case 10: {
                v1 = 24L;
                goto loc_5F3508;
            }
            case 11: {
                v1 = 25L;
                goto loc_5F3508;
            }
            case 12: {
                v1 = 26L;
                goto loc_5F3508;
            }
            case 13: {
                v1 = 27L;
                goto loc_5F3508;
            }
            case 14: {
                v1 = 28L;
                goto loc_5F3508;
            }
            case 15: {
                v1 = 29L;
                goto loc_5F3508;
            }
            case 16: {
                v1 = 30L;
                goto loc_5F3508;
            }
            case 17: {
                v1 = 31L;
                goto loc_5F3508;
            }
            default: {
                return result;
            }
        }
        v1 = 3L;
        goto loc_5F3508;
    }
    else if(v2 == 0x101) {
        v1 = 33L;
        goto loc_5F3508;
    }
    else if(v2 == 0x1000) {
        v1 = 4L;
        goto loc_5F3508;
    }
    else if(v2 == 0x3000) {
        v1 = 9L;
        goto loc_5F3508;
    }
    else if(v2 == 0x4001) {
        v1 = 12L;
        goto loc_5F3508;
    }
    else if(v2 == 258 || v2 == 0x1000) {
        v1 = 34L;
        goto loc_5F3508;
    }
    else if(v2 == 0x2000 || v2 == 0x3000) {
        v1 = 6L;
        goto loc_5F3508;
    }
    else if(v2 >= 0x100 && v2 <= 0x101) {
        v1 = 32L;
        goto loc_5F3508;
    }
    else if(v2 == 258 || v2 == 0x1000 || v2 >= 0x5000) {
        if(v2 >= 0x9000) {
            v0 = v2 == "GainCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle";
            if(v2 >= "GainCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle") {
                if(!v0) {
                    if(v2 == "inCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle") {
                        v1 = 38L;
                        goto loc_5F3508;
                    }
                    else if(v2 != "ainCard6CardID8DomWhere7LogFlag16TriggerEventFlag13CardMoveStyle") {
                        return result;
                    }
                    v1 = 37L;
                    goto loc_5F3508;
                }
                v1 = 36L;
                goto loc_5F3508;
            }
            if(v2 == 0x9001) {
                v1 = 22L;
                goto loc_5F3508;
            }
            else if(v2 != 0x9000) {
                return result;
            }
            v1 = 23L;
            goto loc_5F3508;
        }
        v0 = v2 == 0x8000;
        if(v2 == 0x5000) {
            v1 = 19L;
            goto loc_5F3508;
        }
        else if(v2 == 0x5001) {
            v1 = 18L;
            goto loc_5F3508;
        }
        else if(v2 < 0x8000) {
            return result;
        }
        if(!v0) {
            if(v2 != 0x8001) {
                return result;
            }
            v1 = 15L;
            goto loc_5F3508;
        }
        v1 = 16L;
    loc_5F3508:
        result = v1 * 268L + &gvar_3B9764;
    }
    else if(v2 >= 0x4000 && v2 < 0x4002) {
        v1 = 13L;
        goto loc_5F3508;
    }
    else if(v2 == 0x3001 || (v2 >= 0x4000 && v2 < 0x4002)) {
        v1 = 8L;
        goto loc_5F3508;
    }
    return result;
}
