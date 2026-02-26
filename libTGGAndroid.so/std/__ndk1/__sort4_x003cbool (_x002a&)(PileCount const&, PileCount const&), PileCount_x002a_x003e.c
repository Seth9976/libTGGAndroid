// Package: std::__ndk1

unsigned int std::__ndk1::__sort4<bool (*&)(PileCount const&, PileCount const&), PileCount*>(PileCount* param0, PileCount* param1, PileCount* param2, PileCount* param3, bool (*&)(PileCount const&, PileCount const&) param4) {
    PileCount v0;
    PileCount v1;
    PileCount v2;
    PileCount v3;
    int result;
    int v4;
    long v5 = *(long*)param4((long)param1, (long)param0, (long)param2, (long)param3, (long)param4);
    long v6 = *(long*)param4((long)param2, (long)param1);
    if(!(v5 & 0x1L)) {
        if(v6 & 0x1L) {
            PileCount v7 = *(PileCount*)((long)param1 + 16L);
            PileCount v8 = *(PileCount*)((long)param1 + 32L);
            PileCount v9 = *(PileCount*)param1;
            v3 = *(PileCount*)((long)param1 + 48L);
            v2 = v7;
            v1 = v8;
            v0 = v9;
            PileCount v10 = *(PileCount*)((long)param2 + 16L);
            PileCount v11 = *(PileCount*)((long)param2 + 32L);
            PileCount v12 = *(PileCount*)param2;
            *(PileCount*)((long)param1 + 48L) = *(PileCount*)((long)param2 + 48L);
            *(PileCount*)((long)param1 + 16L) = v10;
            *(PileCount*)((long)param1 + 32L) = v11;
            *(PileCount*)param1 = v12;
            *(PileCount*)((long)param2 + 48L) = v3;
            *(PileCount*)((long)param2 + 16L) = v2;
            *(PileCount*)((long)param2 + 32L) = v1;
            *(PileCount*)param2 = v0;
            long v13 = *(long*)param4((long)param1, (long)param0);
            if(v13 & 0x1L) {
                PileCount v14 = *(PileCount*)((long)param0 + 16L);
                PileCount v15 = *(PileCount*)((long)param0 + 32L);
                PileCount v16 = *(PileCount*)param0;
                v3 = *(PileCount*)((long)param0 + 48L);
                v2 = v14;
                v1 = v15;
                v0 = v16;
                PileCount v17 = *(PileCount*)((long)param1 + 16L);
                PileCount v18 = *(PileCount*)((long)param1 + 32L);
                PileCount v19 = *(PileCount*)param1;
                *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param1 + 48L);
                *(PileCount*)((long)param0 + 16L) = v17;
                *(PileCount*)((long)param0 + 32L) = v18;
                *(PileCount*)param0 = v19;
                *(PileCount*)((long)param1 + 48L) = v3;
                *(PileCount*)((long)param1 + 16L) = v2;
                *(PileCount*)((long)param1 + 32L) = v1;
                *(PileCount*)param1 = v0;
            loc_7C5CE4:
                result = 2;
            }
            else {
            loc_7C5CEC:
                result = 1;
            }
        }
        else {
            result = 0;
        }
    }
    else if(v6 & 0x1L) {
        PileCount v20 = *(PileCount*)((long)param0 + 16L);
        PileCount v21 = *(PileCount*)((long)param0 + 32L);
        PileCount v22 = *(PileCount*)param0;
        result = 1;
        v3 = *(PileCount*)((long)param0 + 48L);
        v2 = v20;
        v1 = v21;
        v0 = v22;
        PileCount v23 = *(PileCount*)((long)param2 + 16L);
        PileCount v24 = *(PileCount*)((long)param2 + 32L);
        PileCount v25 = *(PileCount*)param2;
        *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param2 + 48L);
        *(PileCount*)((long)param0 + 16L) = v23;
        *(PileCount*)((long)param0 + 32L) = v24;
        *(PileCount*)param0 = v25;
        *(PileCount*)((long)param2 + 48L) = v3;
        *(PileCount*)((long)param2 + 16L) = v2;
        *(PileCount*)((long)param2 + 32L) = v1;
        *(PileCount*)param2 = v0;
    }
    else {
        PileCount v26 = *(PileCount*)((long)param0 + 16L);
        PileCount v27 = *(PileCount*)((long)param0 + 32L);
        PileCount v28 = *(PileCount*)param0;
        v3 = *(PileCount*)((long)param0 + 48L);
        v2 = v26;
        v1 = v27;
        v0 = v28;
        PileCount v29 = *(PileCount*)((long)param1 + 16L);
        PileCount v30 = *(PileCount*)((long)param1 + 32L);
        PileCount v31 = *(PileCount*)param1;
        *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param1 + 48L);
        *(PileCount*)((long)param0 + 16L) = v29;
        *(PileCount*)((long)param0 + 32L) = v30;
        *(PileCount*)param0 = v31;
        *(PileCount*)((long)param1 + 48L) = v3;
        *(PileCount*)((long)param1 + 16L) = v2;
        *(PileCount*)((long)param1 + 32L) = v1;
        *(PileCount*)param1 = v0;
        long v32 = *(long*)param4((long)param2, (long)param1);
        if(!(v32 & 0x1L)) {
            goto loc_7C5CEC;
        }
        else {
            PileCount v33 = *(PileCount*)((long)param1 + 16L);
            PileCount v34 = *(PileCount*)((long)param1 + 32L);
            PileCount v35 = *(PileCount*)param1;
            v3 = *(PileCount*)((long)param1 + 48L);
            v2 = v33;
            v1 = v34;
            v0 = v35;
            PileCount v36 = *(PileCount*)((long)param2 + 16L);
            PileCount v37 = *(PileCount*)((long)param2 + 32L);
            PileCount v38 = *(PileCount*)param2;
            *(PileCount*)((long)param1 + 48L) = *(PileCount*)((long)param2 + 48L);
            *(PileCount*)((long)param1 + 16L) = v36;
            *(PileCount*)((long)param1 + 32L) = v37;
            *(PileCount*)param1 = v38;
            *(PileCount*)((long)param2 + 48L) = v3;
            *(PileCount*)((long)param2 + 16L) = v2;
            *(PileCount*)((long)param2 + 32L) = v1;
            *(PileCount*)param2 = v0;
            goto loc_7C5CE4;
        }
    }
    long v39 = *(long*)param4((long)param3, (long)param2);
    if(v39 & 0x1L) {
        PileCount v40 = *(PileCount*)((long)param2 + 16L);
        PileCount v41 = *(PileCount*)((long)param2 + 32L);
        PileCount v42 = *(PileCount*)param2;
        v3 = *(PileCount*)((long)param2 + 48L);
        v2 = v40;
        v1 = v41;
        v0 = v42;
        PileCount v43 = *(PileCount*)((long)param3 + 16L);
        PileCount v44 = *(PileCount*)((long)param3 + 32L);
        PileCount v45 = *(PileCount*)param3;
        *(PileCount*)((long)param2 + 48L) = *(PileCount*)((long)param3 + 48L);
        *(PileCount*)((long)param2 + 16L) = v43;
        *(PileCount*)((long)param2 + 32L) = v44;
        *(PileCount*)param2 = v45;
        *(PileCount*)((long)param3 + 48L) = v3;
        *(PileCount*)((long)param3 + 16L) = v40;
        *(PileCount*)((long)param3 + 32L) = v41;
        *(PileCount*)param3 = v42;
        long v46 = *(long*)param4((long)param2, (long)param1);
        if(!(v46 & 0x1L)) {
            return v4 + 1;
        }
        PileCount v47 = *(PileCount*)((long)param1 + 16L);
        PileCount v48 = *(PileCount*)((long)param1 + 32L);
        PileCount v49 = *(PileCount*)param1;
        v3 = *(PileCount*)((long)param1 + 48L);
        v2 = v47;
        v1 = v48;
        v0 = v49;
        PileCount v50 = *(PileCount*)((long)param2 + 16L);
        PileCount v51 = *(PileCount*)((long)param2 + 32L);
        PileCount v52 = *(PileCount*)param2;
        *(PileCount*)((long)param1 + 48L) = *(PileCount*)((long)param2 + 48L);
        *(PileCount*)((long)param1 + 16L) = v50;
        *(PileCount*)((long)param1 + 32L) = v51;
        *(PileCount*)param1 = v52;
        *(PileCount*)((long)param2 + 48L) = v3;
        *(PileCount*)((long)param2 + 16L) = v47;
        *(PileCount*)((long)param2 + 32L) = v48;
        *(PileCount*)param2 = v49;
        long v53 = *(long*)param4((long)param1, (long)param0);
        if(v53 & 0x1L) {
            PileCount v54 = *(PileCount*)((long)param0 + 16L);
            PileCount v55 = *(PileCount*)((long)param0 + 32L);
            PileCount v56 = *(PileCount*)param0;
            v3 = *(PileCount*)((long)param0 + 48L);
            PileCount v57 = *(PileCount*)((long)param1 + 16L);
            PileCount v58 = *(PileCount*)((long)param1 + 32L);
            PileCount v59 = *(PileCount*)param1;
            *(PileCount*)((long)param0 + 48L) = *(PileCount*)((long)param1 + 48L);
            *(PileCount*)((long)param0 + 16L) = v57;
            *(PileCount*)((long)param0 + 32L) = v58;
            *(PileCount*)param0 = v59;
            *(PileCount*)((long)param1 + 48L) = v3;
            *(PileCount*)((long)param1 + 16L) = v54;
            *(PileCount*)((long)param1 + 32L) = v55;
            *(PileCount*)param1 = v56;
            return v4 + 3;
        }
        result = v4 + 2;
    }
    return result;
}
