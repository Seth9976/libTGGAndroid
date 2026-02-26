// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(PlayerRank&, PlayerRank&), PlayerRank*>(PlayerRank* param0, PlayerRank* param1, PlayerRank* param2, PlayerRank* param3, bool (*&)(PlayerRank&, PlayerRank&) param4) {
    PlayerRank v0;
    int result;
    int v1;
    long v2 = *(long*)param4((long)param1, (long)param0, (long)param2, (long)param3, (long)param4);
    long v3 = *(long*)param4((long)param2, (long)param1);
    if(!(v2 & 0x1L)) {
        if(v3 & 0x1L) {
            v0 = *(PlayerRank*)param1;
            *(PlayerRank*)param1 = *(PlayerRank*)param2;
            *(PlayerRank*)param2 = v0;
            long v4 = *(long*)param4((long)param1, (long)param0);
            if(v4 & 0x1L) {
                v0 = *(PlayerRank*)param0;
                *(PlayerRank*)param0 = *(PlayerRank*)param1;
                *(PlayerRank*)param1 = v0;
            loc_813D20:
                result = 2;
            }
            else {
            loc_813D28:
                result = 1;
            }
        }
        else {
            result = 0;
        }
    }
    else if(v3 & 0x1L) {
        result = 1;
        v0 = *(PlayerRank*)param0;
        *(PlayerRank*)param0 = *(PlayerRank*)param2;
        *(PlayerRank*)param2 = v0;
    }
    else {
        v0 = *(PlayerRank*)param0;
        *(PlayerRank*)param0 = *(PlayerRank*)param1;
        *(PlayerRank*)param1 = v0;
        long v5 = *(long*)param4((long)param2, (long)param1);
        if(!(v5 & 0x1L)) {
            goto loc_813D28;
        }
        else {
            v0 = *(PlayerRank*)param1;
            *(PlayerRank*)param1 = *(PlayerRank*)param2;
            *(PlayerRank*)param2 = v0;
            goto loc_813D20;
        }
    }
    long v6 = *(long*)param4((long)param3, (long)param2);
    if(v6 & 0x1L) {
        v0 = *(PlayerRank*)param2;
        *(PlayerRank*)param2 = *(PlayerRank*)param3;
        *(PlayerRank*)param3 = v0;
        long v7 = *(long*)param4((long)param2, (long)param1);
        if(!(v7 & 0x1L)) {
            return v1 + 1;
        }
        v0 = *(PlayerRank*)param1;
        *(PlayerRank*)param1 = *(PlayerRank*)param2;
        *(PlayerRank*)param2 = v0;
        long v8 = *(long*)param4((long)param1, (long)param0);
        if(v8 & 0x1L) {
            v0 = *(PlayerRank*)param0;
            *(PlayerRank*)param0 = *(PlayerRank*)param1;
            *(PlayerRank*)param1 = v0;
            return v1 + 3;
        }
        result = v1 + 2;
    }
    return result;
}
