// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(ScoreEntry* param0, ScoreEntry* param1, ScoreEntry* param2, ScoreEntry* param3, bool (*&)(ScoreEntry const&, ScoreEntry const&) param4) {
    ScoreEntry v0;
    int result;
    char v1;
    ScoreEntry v2;
    int v3;
    long v4 = *(long*)param4((long)param1, (long)param0, (long)param2, (long)param3, (long)param4);
    long v5 = *(long*)param4((long)param2, (long)param1);
    if(!(v4 & 0x1L)) {
        if(v5 & 0x1L) {
            *(ScoreEntry*)&v1 = *(ScoreEntry*)param1;
            ScoreEntry v6 = *(ScoreEntry*)param2;
            *(ScoreEntry*)((long)param1 + 12L) = *(ScoreEntry*)((long)param2 + 12L);
            *(ScoreEntry*)param1 = v6;
            v0 = *(ScoreEntry*)&v1;
            *(ScoreEntry*)((long)param2 + 12L) = v2;
            *(ScoreEntry*)param2 = v0;
            long v7 = *(long*)param4((long)param1, (long)param0);
            if(v7 & 0x1L) {
                *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
                ScoreEntry v8 = *(ScoreEntry*)param1;
                *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param1 + 12L);
                *(ScoreEntry*)param0 = v8;
                v0 = *(ScoreEntry*)&v1;
                *(ScoreEntry*)((long)param1 + 12L) = v2;
                *(ScoreEntry*)param1 = v0;
            loc_817698:
                result = 2;
            }
            else {
            loc_8176A0:
                result = 1;
            }
        }
        else {
            result = 0;
        }
    }
    else if(v5 & 0x1L) {
        result = 1;
        *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
        ScoreEntry v9 = *(ScoreEntry*)param2;
        *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param2 + 12L);
        *(ScoreEntry*)param0 = v9;
        v0 = *(ScoreEntry*)&v1;
        *(ScoreEntry*)((long)param2 + 12L) = v2;
        *(ScoreEntry*)param2 = v0;
    }
    else {
        *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
        ScoreEntry v10 = *(ScoreEntry*)param1;
        *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param1 + 12L);
        *(ScoreEntry*)param0 = v10;
        v0 = *(ScoreEntry*)&v1;
        *(ScoreEntry*)((long)param1 + 12L) = v2;
        *(ScoreEntry*)param1 = v0;
        long v11 = *(long*)param4((long)param2, (long)param1);
        if(!(v11 & 0x1L)) {
            goto loc_8176A0;
        }
        else {
            *(ScoreEntry*)&v1 = *(ScoreEntry*)param1;
            ScoreEntry v12 = *(ScoreEntry*)param2;
            *(ScoreEntry*)((long)param1 + 12L) = *(ScoreEntry*)((long)param2 + 12L);
            *(ScoreEntry*)param1 = v12;
            v0 = *(ScoreEntry*)&v1;
            *(ScoreEntry*)((long)param2 + 12L) = v2;
            *(ScoreEntry*)param2 = v0;
            goto loc_817698;
        }
    }
    long v13 = *(long*)param4((long)param3, (long)param2);
    if(v13 & 0x1L) {
        *(ScoreEntry*)&v1 = *(ScoreEntry*)param2;
        ScoreEntry v14 = *(ScoreEntry*)param3;
        *(ScoreEntry*)((long)param2 + 12L) = *(ScoreEntry*)((long)param3 + 12L);
        *(ScoreEntry*)param2 = v14;
        v0 = *(ScoreEntry*)&v1;
        *(ScoreEntry*)((long)param3 + 12L) = v2;
        *(ScoreEntry*)param3 = v0;
        long v15 = *(long*)param4((long)param2, (long)param1);
        if(!(v15 & 0x1L)) {
            return v3 + 1;
        }
        *(ScoreEntry*)&v1 = *(ScoreEntry*)param1;
        ScoreEntry v16 = *(ScoreEntry*)param2;
        *(ScoreEntry*)((long)param1 + 12L) = *(ScoreEntry*)((long)param2 + 12L);
        *(ScoreEntry*)param1 = v16;
        v0 = *(ScoreEntry*)&v1;
        *(ScoreEntry*)((long)param2 + 12L) = v2;
        *(ScoreEntry*)param2 = v0;
        long v17 = *(long*)param4((long)param1, (long)param0);
        if(v17 & 0x1L) {
            *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
            ScoreEntry v18 = *(ScoreEntry*)param1;
            *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param1 + 12L);
            *(ScoreEntry*)param0 = v18;
            v0 = *(ScoreEntry*)&v1;
            *(ScoreEntry*)((long)param1 + 12L) = v2;
            *(ScoreEntry*)param1 = v0;
            return v3 + 3;
        }
        result = v3 + 2;
    }
    return result;
}
