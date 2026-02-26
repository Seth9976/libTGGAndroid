// Package: std::__ndk1

unsigned int std::__ndk1::__sort3<std::__ndk1::__less<AssocCard, AssocCard>&, AssocCard*>(AssocCard* param0, AssocCard* param1, AssocCard* param2, std::__ndk1::__less<AssocCard, AssocCard>& param3) {
    AssocCard v0;
    char v1;
    char v2;
    char v3;
    AssocCard v4;
    char v5;
    AssocCard v6 = (AssocCard)*(AssocCard*)param1;
    AssocCard v7 = *(AssocCard*)param0;
    char v8 = (uint32_t)v6 < *(AssocCard*)param0;
    char v9 = (uint32_t)v6 == v7;
    char v10 = ((((uint32_t)v6 - v7) ^ (uint32_t)v6) & ((uint32_t)v6 ^ v7)) < 0;
    if((uint32_t)v6 >= v7) {
        if(v9 || v10 != v8) {
            AssocCard v11 = *(AssocCard*)((long)param1 + 8L);
            AssocCard v12 = *(AssocCard*)((long)param0 + 8L);
            v5 = v11 >= v12;
            if(!v5 || ((!v5 || v11 == v12) && *(AssocCard*)((long)param0 + 16L) > *(AssocCard*)((long)param1 + 16L))) {
                goto loc_7BE7EC;
            }
        }
        v4 = *(AssocCard*)param2;
        v3 = (uint32_t)v6 > *(AssocCard*)param2;
        v2 = (uint32_t)v6 == (uint32_t)v4;
        v1 = ((((uint32_t)v4 - (uint32_t)v6) ^ (uint32_t)v4) & ((uint32_t)v6 ^ (uint32_t)v4)) < 0;
        if((uint32_t)v6 <= (uint32_t)v4) {
            if(!v2 && v1 == v3) {
                return 0;
            }
            v6 = *(AssocCard*)((long)param2 + 8L);
            v4 = *(AssocCard*)((long)param1 + 8L);
            v2 = v6 == v4;
            v5 = v6 >= v4;
            if(v5) {
                if(v5 && !v2) {
                    return 0;
                }
                if(*(AssocCard*)((long)param1 + 16L) <= *(AssocCard*)((long)param2 + 16L)) {
                    return 0;
                }
            }
        }
        AssocCard v13 = *(AssocCard*)param1;
        v0 = *(AssocCard*)((long)param1 + 16L);
        AssocCard v14 = *(AssocCard*)param2;
        *(AssocCard*)((long)param1 + 16L) = *(AssocCard*)((long)param2 + 16L);
        *(AssocCard*)param1 = v14;
        *(AssocCard*)((long)param2 + 16L) = v0;
        *(AssocCard*)param2 = v13;
        v6 = *(AssocCard*)param1;
        v4 = *(AssocCard*)param0;
        v3 = (uint32_t)v6 < *(AssocCard*)param0;
        v2 = (uint32_t)v6 == (uint32_t)v4;
        v1 = ((((uint32_t)v6 - (uint32_t)v4) ^ (uint32_t)v6) & ((uint32_t)v6 ^ (uint32_t)v4)) < 0;
        if((uint32_t)v6 >= (uint32_t)v4) {
            if(!v2 && v1 == v3) {
                return 1;
            }
            v6 = *(AssocCard*)((long)param1 + 8L);
            v4 = *(AssocCard*)((long)param0 + 8L);
            v2 = v6 == v4;
            v5 = v6 >= v4;
            if(v5) {
                if(v5 && !v2) {
                    return 1;
                }
                if(*(AssocCard*)((long)param0 + 16L) <= *(AssocCard*)((long)param1 + 16L)) {
                    return 1;
                }
            }
        }
        AssocCard v15 = *(AssocCard*)param0;
        v0 = *(AssocCard*)((long)param0 + 16L);
        AssocCard v16 = *(AssocCard*)param1;
        *(AssocCard*)((long)param0 + 16L) = *(AssocCard*)((long)param1 + 16L);
        *(AssocCard*)param0 = v16;
        *(AssocCard*)((long)param1 + 16L) = v0;
        *(AssocCard*)param1 = v15;
        return 2;
    }
loc_7BE7EC:
    v4 = *(AssocCard*)param2;
    v3 = (uint32_t)v6 > *(AssocCard*)param2;
    v2 = (uint32_t)v6 == (uint32_t)v4;
    v1 = ((((uint32_t)v4 - (uint32_t)v6) ^ (uint32_t)v4) & ((uint32_t)v6 ^ (uint32_t)v4)) < 0;
    if((uint32_t)v6 <= (uint32_t)v4) {
        if(v2 || v1 != v3) {
            AssocCard v17 = *(AssocCard*)((long)param2 + 8L);
            v4 = *(AssocCard*)((long)param1 + 8L);
            v5 = v17 >= v4;
            if(!v5 || ((!v5 || v17 == v4) && *(AssocCard*)((long)param1 + 16L) > *(AssocCard*)((long)param2 + 16L))) {
                goto loc_7BE964;
            }
        }
        AssocCard v18 = *(AssocCard*)param0;
        v0 = *(AssocCard*)((long)param0 + 16L);
        AssocCard v19 = *(AssocCard*)param1;
        *(AssocCard*)((long)param0 + 16L) = *(AssocCard*)((long)param1 + 16L);
        *(AssocCard*)param0 = v19;
        *(AssocCard*)((long)param1 + 16L) = v0;
        *(AssocCard*)param1 = v18;
        v6 = *(AssocCard*)param2;
        v4 = *(AssocCard*)param1;
        v3 = (uint32_t)v6 < *(AssocCard*)param1;
        v2 = (uint32_t)v6 == (uint32_t)v4;
        v1 = ((((uint32_t)v6 - (uint32_t)v4) ^ (uint32_t)v6) & ((uint32_t)v6 ^ (uint32_t)v4)) < 0;
        if((uint32_t)v6 >= (uint32_t)v4) {
            if(!v2 && v1 == v3) {
                return 1;
            }
            v6 = *(AssocCard*)((long)param2 + 8L);
            v4 = *(AssocCard*)((long)param1 + 8L);
            v2 = v6 == v4;
            v5 = v6 >= v4;
            if(v5) {
                if(v5 && !v2) {
                    return 1;
                }
                if(*(AssocCard*)((long)param1 + 16L) <= *(AssocCard*)((long)param2 + 16L)) {
                    return 1;
                }
            }
        }
        AssocCard v20 = *(AssocCard*)param1;
        v0 = *(AssocCard*)((long)param1 + 16L);
        AssocCard v21 = *(AssocCard*)param2;
        *(AssocCard*)((long)param1 + 16L) = *(AssocCard*)((long)param2 + 16L);
        *(AssocCard*)param1 = v21;
        *(AssocCard*)((long)param2 + 16L) = v0;
        *(AssocCard*)param2 = v20;
        return 2;
    }
loc_7BE964:
    AssocCard v22 = *(AssocCard*)param0;
    v0 = *(AssocCard*)((long)param0 + 16L);
    AssocCard v23 = *(AssocCard*)param2;
    *(AssocCard*)((long)param0 + 16L) = *(AssocCard*)((long)param2 + 16L);
    *(AssocCard*)param0 = v23;
    *(AssocCard*)((long)param2 + 16L) = v0;
    *(AssocCard*)param2 = v22;
    return 1;
}
