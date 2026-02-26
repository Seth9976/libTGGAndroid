// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(ScoreEntry const&, ScoreEntry const&), ScoreEntry*>(ScoreEntry* param0, ScoreEntry* param1, bool (*&)(ScoreEntry const&, ScoreEntry const&) param2) {
    ScoreEntry* ptr0;
    ScoreEntry v0;
    char v1;
    ScoreEntry v2;
    ScoreEntry* ptr1 = (ScoreEntry*)((long)param0 + 56L);
    long v3 = *(long*)param2((long)(ScoreEntry*)((long)param0 + 28L), (long)param0, (long)param2);
    long v4 = *(long*)param2((long)ptr1, (long)(ScoreEntry*)((long)param0 + 28L));
    if(v3 & 0x1L) {
        *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
        if(v4 & 0x1L) {
            ScoreEntry v5 = *(ScoreEntry*)ptr1;
            *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)ptr1 + 12L);
            *(ScoreEntry*)param0 = v5;
            goto loc_817904;
        }
        else {
            ScoreEntry v6 = *(ScoreEntry*)((long)param0 + 28L);
            *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param0 + 40L);
            *(ScoreEntry*)param0 = v6;
            v0 = *(ScoreEntry*)&v1;
            *(ScoreEntry*)((long)param0 + 40L) = v2;
            *(ScoreEntry*)((long)param0 + 28L) = v0;
            v4 = *(long*)param2((long)ptr1, (long)(ScoreEntry*)((long)param0 + 28L));
            if(v4 & 0x1L) {
                *(ScoreEntry*)&v1 = *(ScoreEntry*)((long)param0 + 28L);
                ScoreEntry v7 = *(ScoreEntry*)ptr1;
                *(ScoreEntry*)((long)param0 + 40L) = *(ScoreEntry*)((long)ptr1 + 12L);
                *(ScoreEntry*)((long)param0 + 28L) = v7;
            loc_817904:
                v0 = *(ScoreEntry*)&v1;
                *(ScoreEntry*)((long)ptr1 + 12L) = v2;
                *(ScoreEntry*)ptr1 = v0;
            }
        }
    }
    else if(v4 & 0x1L) {
        *(ScoreEntry*)&v1 = *(ScoreEntry*)((long)param0 + 28L);
        ScoreEntry v8 = *(ScoreEntry*)ptr1;
        *(ScoreEntry*)((long)param0 + 40L) = *(ScoreEntry*)((long)ptr1 + 12L);
        *(ScoreEntry*)((long)param0 + 28L) = v8;
        v0 = *(ScoreEntry*)&v1;
        *(ScoreEntry*)((long)ptr1 + 12L) = v2;
        *(ScoreEntry*)ptr1 = v0;
        v4 = *(long*)param2((long)(ScoreEntry*)((long)param0 + 28L), (long)param0);
        if(v4 & 0x1L) {
            *(ScoreEntry*)&v1 = *(ScoreEntry*)param0;
            ScoreEntry v9 = *(ScoreEntry*)((long)param0 + 28L);
            *(ScoreEntry*)((long)param0 + 12L) = *(ScoreEntry*)((long)param0 + 40L);
            *(ScoreEntry*)param0 = v9;
            v0 = *(ScoreEntry*)&v1;
            *(ScoreEntry*)((long)param0 + 40L) = v2;
            *(ScoreEntry*)((long)param0 + 28L) = v0;
        }
    }
    ScoreEntry* ptr2 = (ScoreEntry*)((long)param0 + 84L);
    if(param1 != ptr2) {
        long v10 = 0L;
        do {
            ScoreEntry* ptr3 = ptr1;
            ptr1 = ptr2;
            v4 = *(long*)param2((long)ptr2, (long)ptr3);
            if(v4 & 0x1L) {
                long v11 = v10;
                *(ScoreEntry*)&v1 = *(ScoreEntry*)ptr1;
                while(1) {
                    __int128* ptr4 = (__int128*)((long)param0 + v11);
                    __int128 v12 = *(__int128*)((char*)ptr4 + 68L);
                    *(__int128*)((char*)ptr4 + 84L) = *(__int128*)((char*)ptr4 + 56L);
                    *(ptr4 + 6) = v12;
                    if(v11 != -56L) {
                        v4 = *(long*)param2((long)&v1, (long)(long*)((char*)ptr4 + 28L));
                        v11 -= 28L;
                        if(v4 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_81792C;
                }
                ptr0 = (char*)((long)param0 + v11) + 84L;
            loc_81792C:
                v0 = *(ScoreEntry*)&v1;
                *(ScoreEntry*)((long)ptr0 + 12L) = v2;
                *(ScoreEntry*)ptr0 = v0;
            }
            ptr2 = (long)ptr1 + 28L;
            v10 += 28L;
        }
        while(param1 != ptr2);
    }
}
