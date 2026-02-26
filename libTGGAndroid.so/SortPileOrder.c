long SortPileOrder(int* param0, int* param1) {
    int v0 = *(param0 + 11);
    int v1 = *(param1 + 11);
    char v2 = *(param1 + 11) > v0;
    char v3 = v1 == v0;
    char v4 = (((v0 - v1) ^ v0) & (v1 ^ v0)) < 0;
    if(v1 > v0) {
        return 0L;
    }
    if(!v3 && v4 == v2) {
        return 1L;
    }
    int v5 = v0 != 4 ? *(param0 + 22): *(param0 + 113);
    int v6 = v1 != 4 ? *(param1 + 22): *(param1 + 113);
    v2 = (v1 != 4 ? *(param1 + 22): *(param1 + 113)) > v5;
    v3 = v6 == v5;
    v4 = (((v5 - v6) ^ v5) & (v6 ^ v5)) < 0;
    if(v6 > v5) {
        return 0L;
    }
    if(!v3 && v4 == v2) {
        return 1L;
    }
    if(v0 != 4) {
        v0 = 0;
        if(v1 != 4) {
            goto loc_6FB5B0;
        }
    loc_6FB5D0:
        v1 = *(param1 + 111);
        v2 = *(param1 + 111) > v0;
        v3 = v1 == v0;
        v4 = (((v0 - v1) ^ v0) & (v1 ^ v0)) < 0;
        if(v1 > v0) {
            return 0L;
        loc_6FB5B0:
            v2 = v0 < 0;
            v3 = v0 == 0;
            v4 = 0;
            if(v0 < 0) {
                return 0L;
            }
        }
        if(!v3 && v4 == v2) {
            return 1L;
        }
        return *(param0 + 2128) > *(param1 + 2128);
    }
    v0 = *(param0 + 111);
    if(v1 == 4) {
        goto loc_6FB5D0;
    }
    else {
        goto loc_6FB5B0;
    }
}
