long LookupBannerDef(int param0) {
    switch(param0) {
        case 3364: {
            return (long)"$\r";
        }
        case 4130: {
            return &gvar_D64528;
        }
        case 4878: {
            return &gvar_D641E0;
        }
        default: {
            if(param0 > 3113 && param0 <= 3363) {
                switch((uint64_t)(param0 - 3114)) {
                    case 0: {
                        return &gvar_D642F8;
                    }
                    case 7: {
                        return &gvar_D64320;
                    }
                    case 10: {
                        return &gvar_D64348;
                    }
                    case 16: {
                        return &gvar_D64370;
                    }
                    case 17: {
                        return &gvar_D64398;
                    }
                    case 20: {
                        return &gvar_D643C0;
                    }
                    case 21: {
                        return &gvar_D643E8;
                    }
                    case 22: {
                        return &gvar_D64410;
                    }
                    case 23: {
                        return &gvar_D64438;
                    }
                    case 25: {
                        return &gvar_D64460;
                    }
                    case 26: {
                        return &gvar_D64488;
                    }
                    case 27: {
                        return &gvar_D644B0;
                    }
                    case 28: {
                        return &gvar_D644D8;
                    }
                    default: {
                        return 0L;
                    }
                }
            }
            else if(param0 > 3113) {
                return 0L;
            }
            break;
        }
    }
    switch(param0) {
        case 521: {
            return &gvar_D64208;
        }
        case 785: {
            return &gvar_D64230;
        }
        case 1282: {
            return &gvar_D64258;
        }
        default: {
            if(param0 <= 1803) {
                return 0L;
            }
            break;
        }
    }
    if(param0 == 2059) {
        return &gvar_D642D0;
    }
    else if(param0 == 2316) {
        return &gvar_D642A8;
    }
    else if(param0 != 1804) {
        return 0L;
    }
    return &gvar_D64280;
}
