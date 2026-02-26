// Package: std::__ndk1

void std::__ndk1::__insertion_sort_3<bool (*&)(PileCount const&, PileCount const&), PileCount*>(PileCount* param0, PileCount* param1, bool (*&)(PileCount const&, PileCount const&) param2) {
    PileCount* ptr0;
    PileCount v0;
    PileCount v1;
    PileCount v2;
    PileCount v3;
    PileCount* ptr1 = (PileCount*)((long)param0 + 112L);
    long v4 = *(long*)param2((long)(PileCount*)((long)param0 + 56L), (long)param0, (long)param2);
    long v5 = *(long*)param2((long)ptr1, (long)(PileCount*)((long)param0 + 56L));
    if(v4 & 0x1L) {
        if(v5 & 0x1L) {
            PileCount v6 = *(PileCount*)((long)param0 + 16L);
            PileCount v7 = *(PileCount*)((long)param0 + 32L);
            PileCount v8 = *(PileCount*)param0;
            v3 = *(PileCount*)((long)param0 + 48L);
            v2 = v6;
            v1 = v7;
            v0 = v8;
            PileCount v9 = *(PileCount*)((long)ptr1 + 16L);
            PileCount v10 = *(PileCount*)((long)ptr1 + 32L);
            PileCount v11 = *(PileCount*)ptr1;
            *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)ptr1 + 48L);
            *(PileCount*)((long)param0 + 16L) = v9;
            *(PileCount*)((long)param0 + 32L) = v10;
            *(PileCount*)param0 = v11;
            goto loc_7C6008;
        }
        else {
            PileCount v12 = *(PileCount*)((long)param0 + 16L);
            PileCount v13 = *(PileCount*)((long)param0 + 32L);
            PileCount v14 = *(PileCount*)param0;
            v3 = *(PileCount*)((long)param0 + 48L);
            v2 = v12;
            v1 = v13;
            v0 = v14;
            PileCount v15 = *(PileCount*)((long)param0 + 72L);
            PileCount v16 = *(PileCount*)((long)param0 + 88L);
            PileCount v17 = *(PileCount*)((long)param0 + 56L);
            *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param0 + 104L);
            *(PileCount*)((long)param0 + 16L) = v15;
            *(PileCount*)((long)param0 + 32L) = v16;
            *(PileCount*)param0 = v17;
            *(PileCount*)((long)param0 + 104L) = v3;
            *(PileCount*)((long)param0 + 72L) = v2;
            *(PileCount*)((long)param0 + 88L) = v1;
            *(PileCount*)((long)param0 + 56L) = v0;
            v5 = *(long*)param2((long)ptr1, (long)(PileCount*)((long)param0 + 56L));
            if(v5 & 0x1L) {
                PileCount v18 = *(PileCount*)((long)param0 + 72L);
                PileCount v19 = *(PileCount*)((long)param0 + 88L);
                PileCount v20 = *(PileCount*)((long)param0 + 56L);
                v3 = *(PileCount*)((long)param0 + 104L);
                v2 = v18;
                v1 = v19;
                v0 = v20;
                PileCount v21 = *(PileCount*)((long)ptr1 + 16L);
                PileCount v22 = *(PileCount*)((long)ptr1 + 32L);
                PileCount v23 = *(PileCount*)ptr1;
                *(PileCount*)((long)param0 + 104L) = *(PileCount*)((long)ptr1 + 48L);
                *(PileCount*)((long)param0 + 72L) = v21;
                *(PileCount*)((long)param0 + 88L) = v22;
                *(PileCount*)((long)param0 + 56L) = v23;
            loc_7C6008:
                *(PileCount*)((long)ptr1 + 48L) = v3;
                *(PileCount*)((long)ptr1 + 16L) = v2;
                *(PileCount*)((long)ptr1 + 32L) = v1;
                *(PileCount*)ptr1 = v0;
            }
        }
    }
    else if(v5 & 0x1L) {
        PileCount v24 = *(PileCount*)((long)param0 + 72L);
        PileCount v25 = *(PileCount*)((long)param0 + 88L);
        PileCount v26 = *(PileCount*)((long)param0 + 56L);
        v3 = *(PileCount*)((long)param0 + 104L);
        v2 = v24;
        v1 = v25;
        v0 = v26;
        PileCount v27 = *(PileCount*)((long)ptr1 + 16L);
        PileCount v28 = *(PileCount*)((long)ptr1 + 32L);
        PileCount v29 = *(PileCount*)ptr1;
        *(PileCount*)((long)param0 + 104L) = *(PileCount*)((long)ptr1 + 48L);
        *(PileCount*)((long)param0 + 72L) = v27;
        *(PileCount*)((long)param0 + 88L) = v28;
        *(PileCount*)((long)param0 + 56L) = v29;
        *(PileCount*)((long)ptr1 + 48L) = v3;
        *(PileCount*)((long)ptr1 + 16L) = v2;
        *(PileCount*)((long)ptr1 + 32L) = v1;
        *(PileCount*)ptr1 = v0;
        v5 = *(long*)param2((long)(PileCount*)((long)param0 + 56L), (long)param0);
        if(v5 & 0x1L) {
            PileCount v30 = *(PileCount*)((long)param0 + 16L);
            PileCount v31 = *(PileCount*)((long)param0 + 32L);
            PileCount v32 = *(PileCount*)param0;
            v3 = *(PileCount*)((long)param0 + 48L);
            v2 = v30;
            v1 = v31;
            v0 = v32;
            PileCount v33 = *(PileCount*)((long)param0 + 72L);
            PileCount v34 = *(PileCount*)((long)param0 + 88L);
            PileCount v35 = *(PileCount*)((long)param0 + 56L);
            *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param0 + 104L);
            *(PileCount*)((long)param0 + 16L) = v33;
            *(PileCount*)((long)param0 + 32L) = v34;
            *(PileCount*)param0 = v35;
            *(PileCount*)((long)param0 + 104L) = v3;
            *(PileCount*)((long)param0 + 72L) = v2;
            *(PileCount*)((long)param0 + 88L) = v1;
            *(PileCount*)((long)param0 + 56L) = v0;
        }
    }
    PileCount* ptr2 = (PileCount*)((long)param0 + 168L);
    if(param1 != ptr2) {
        long v36 = 0L;
        do {
            PileCount* ptr3 = ptr1;
            ptr1 = ptr2;
            v5 = *(long*)param2((long)ptr2, (long)ptr3);
            if(v5 & 0x1L) {
                PileCount v37 = *(PileCount*)((long)ptr1 + 16L);
                PileCount v38 = *(PileCount*)((long)ptr1 + 32L);
                PileCount v39 = *(PileCount*)ptr1;
                long v40 = v36;
                v3 = *(PileCount*)((long)ptr1 + 48L);
                v2 = v37;
                v1 = v38;
                v0 = v39;
                while(1) {
                    long* ptr4 = (long*)((long)param0 + v40);
                    __int128 v41 = *(__int128*)(ptr4 + 16);
                    __int128 v42 = *(__int128*)(ptr4 + 18);
                    long v43 = *(ptr4 + 20);
                    *(__int128*)(ptr4 + 21) = *(__int128*)(ptr4 + 14);
                    *(__int128*)(ptr4 + 23) = v41;
                    *(__int128*)(ptr4 + 25) = v42;
                    *(ptr4 + 27) = v43;
                    if(v40 != -112L) {
                        v5 = *(long*)param2((long)&v0, (long)(ptr4 + 7));
                        v40 -= 56L;
                        if(v5 & 0x1L) {
                            continue;
                        }
                        break;
                    }
                    ptr0 = param0;
                    goto loc_7C6038;
                }
                ptr0 = (long*)((long)param0 + v40) + 21;
            loc_7C6038:
                *(PileCount*)((long)ptr0 + 48L) = v3;
                *(PileCount*)((long)ptr0 + 16L) = v2;
                *(PileCount*)((long)ptr0 + 32L) = v1;
                *(PileCount*)ptr0 = v0;
            }
            ptr2 = (long)ptr1 + 56L;
            v36 += 56L;
        }
        while(param1 != ptr2);
    }
}
