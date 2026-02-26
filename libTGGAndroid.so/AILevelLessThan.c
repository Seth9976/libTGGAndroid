long AILevelLessThan(int param0, int param1) {
    int v0;
    if(param0 == param1) {
        return 0L;
    }
    switch(param0) {
        case -1: {
            v0 = 0;
            if(param1 != -1) {
            loc_5EAC24:
                if(param1 == 3) {
                    return v0 < 1;
                }
                return param1 + 2 > v0;
            }
            return v0 < 0;
        }
        case 3: {
            v0 = 1;
            if(param1 == -1) {
                return 0L;
            }
            goto loc_5EAC24;
        }
        default: {
            v0 = param0 + 2;
            if(param1 != -1) {
                goto loc_5EAC24;
            }
            return v0 < 0;
        }
    }
}
