long* sub_A18748(uint64_t* param0, long* param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    long* ptr0;
    long* ptr1;
    long* ptr2;
    long* ptr3 = *(param0 + 1);
    long* ptr4 = param1 + 0xF;
    if(ptr3 == ptr4) {
        ptr0 = param1;
    loc_A18850:
        do {
            long v0 = *(ptr4 - 11);
            *(ptr4 - 12) = &vftable_Botan::Ed25519_PublicKey;
            if(v0 != 0L) {
                *(ptr4 - 10) = v0;
                operator delete(v0, (long)param1, param2, param3, param4, param5, param6, param7);
            }
            long v1 = *(ptr4 - 0xF);
            ptr2 = ptr4 - 0xF;
            if(v1 != 0L) {
                *(ptr4 - 14) = v1;
                operator delete(v1, (long)param1, param2, param3, param4, param5, param6, param7);
            }
            ptr4 = ptr2;
        }
        while(ptr0 != ptr2);
    }
    else {
        long* ptr5 = param1;
        do {
            long v2 = *ptr5;
            if(v2 != 0L) {
                *(ptr5 + 1) = v2;
                operator delete(v2, (long)param1, param2, param3, param4, param5, param6, param7);
                *ptr5 = 0L;
                *(ptr5 + 1) = 0L;
                *(ptr5 + 2) = 0L;
            }
            __int128 v3 = *(__int128*)(ptr5 + 0xF);
            long v4 = *(ptr5 + 17);
            long v5 = *(ptr5 + 4);
            *(ptr5 + 0xF) = 0L;
            *(ptr5 + 16) = 0L;
            *(__int128*)ptr5 = v3;
            *(ptr5 + 2) = v4;
            *(ptr5 + 17) = 0L;
            if(v5 != 0L) {
                *(ptr5 + 5) = v5;
                operator delete(v5, (long)param1, param2, param3, param4, param5, param6, param7);
                *(ptr5 + 4) = 0L;
                *(ptr5 + 5) = 0L;
                *(ptr5 + 6) = 0L;
            }
            __int128 v6 = *(__int128*)(ptr5 + 22);
            __int128 v7 = *(__int128*)(ptr5 + 24);
            ptr1 = (long)(ptr5 + 30) - (long)ptr3;
            *(__int128*)(ptr5 + 4) = *(__int128*)(ptr5 + 19);
            *(__int128*)(ptr5 + 7) = v6;
            __int128 v8 = *(__int128*)(ptr5 + 26);
            __int128 v9 = *(__int128*)(ptr5 + 28);
            long v10 = *(ptr5 + 21);
            ptr0 = ptr5 + 0xF;
            *(__int128*)(ptr5 + 9) = v7;
            *(__int128*)(ptr5 + 11) = v8;
            *(ptr5 + 19) = 0L;
            *(ptr5 + 20) = 0L;
            *(ptr5 + 21) = 0L;
            *(ptr5 + 6) = v10;
            *(__int128*)(ptr5 + 13) = v9;
            ptr5 = ptr0;
        }
        while(ptr1 != 0L);
        ptr4 = *(param0 + 1);
        if(ptr4 != ptr0) {
            goto loc_A18850;
        }
    }
    *(param0 + 1) = ptr0;
    return param1;
}
