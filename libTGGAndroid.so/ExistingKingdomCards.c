long ExistingKingdomCards(int param0, int* param1, __int128* param2) {
    int v0 = *param1;
    if(*param1 != 0) {
        *param2 = *(__int128*)param1;
        __int128* ptr0 = (__int128*)(param1 + 4);
        if(*(param1 + 4) == 0) {
            v0 = 1;
        }
        else {
            *(param2 + 1) = *ptr0;
            __int128* ptr1 = (__int128*)(param1 + 8);
            if(*(param1 + 8) == 0) {
                v0 = 2;
            }
            else {
                *(param2 + 2) = *ptr1;
                __int128* ptr2 = (__int128*)(param1 + 12);
                if(*(param1 + 12) == 0) {
                    v0 = 3;
                }
                else {
                    *(param2 + 3) = *ptr2;
                    __int128* ptr3 = (__int128*)(param1 + 16);
                    if(*(param1 + 16) == 0) {
                        v0 = 4;
                    }
                    else {
                        *(param2 + 4) = *ptr3;
                        __int128* ptr4 = (__int128*)(param1 + 20);
                        if(*(param1 + 20) == 0) {
                            v0 = 5;
                        }
                        else {
                            *(param2 + 5) = *ptr4;
                            __int128* ptr5 = (__int128*)(param1 + 24);
                            if(*(param1 + 24) == 0) {
                                v0 = 6;
                            }
                            else {
                                *(param2 + 6) = *ptr5;
                                __int128* ptr6 = (__int128*)(param1 + 28);
                                if(*(param1 + 28) == 0) {
                                    v0 = 7;
                                }
                                else {
                                    *(param2 + 7) = *ptr6;
                                    __int128* ptr7 = (__int128*)(param1 + 32);
                                    if(*(param1 + 32) == 0) {
                                        v0 = 8;
                                    }
                                    else {
                                        *(param2 + 8) = *ptr7;
                                        __int128* ptr8 = (__int128*)(param1 + 36);
                                        if(*(param1 + 36) == 0) {
                                            v0 = 9;
                                        }
                                        else {
                                            v0 = 10;
                                            *(param2 + 9) = *ptr8;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    long v1 = 0L;
    do {
        long* ptr9 = (long*)((long)param1 + v1);
        if(*(int*)(ptr9 + 20) == 0) {
            break;
        }
        *(__int128*)(v0 * 16L + (long)param2) = *(__int128*)(ptr9 + 20);
        int* ptr10 = (uint64_t)*(int*)(ptr9 + 22);
        long v2 = (uint64_t)(v0 + 1);
        if((uint32_t)ptr10 == 0) {
        loc_73ABB8:
            v0 = (uint32_t)v2;
        }
        else {
            long v3 = (long)(uint32_t)v2;
            int* ptr11 = (int*)(v3 * 16L + (long)param2);
            *ptr11 = 1;
            *(ptr11 + 1) = (uint32_t)ptr10;
            *(ptr11 + 2) = 0;
            ptr10 = (long)param1 + v1;
            int* ptr12 = (uint64_t)*(ptr10 + 45);
            int* ptr13 = (int*)(v3 + 1L);
            if((uint32_t)ptr12 != 0) {
                ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                *ptr13 = 1;
                *(ptr13 + 1) = (uint32_t)ptr12;
                *(ptr13 + 2) = 0;
                ptr10 = (uint64_t)*(ptr10 + 46);
                ptr12 = v3 + 2L;
                if((uint32_t)ptr10 != 0) {
                    int* ptr14 = (int*)((long)(long*)((long)ptr12 * 16L) + (long)param2);
                    *ptr14 = 1;
                    *(ptr14 + 1) = (uint32_t)ptr10;
                    *(ptr14 + 2) = 0;
                    ptr10 = (long)param1 + v1;
                    ptr12 = (uint64_t)*(ptr10 + 47);
                    ptr13 = v3 + 3L;
                    if((uint32_t)ptr12 == 0) {
                        goto loc_73AA1C;
                    }
                    else {
                        ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                        *ptr13 = 1;
                        *(ptr13 + 1) = (uint32_t)ptr12;
                        *(ptr13 + 2) = 0;
                        ptr10 = (uint64_t)*(ptr10 + 48);
                        ptr12 = v3 + 4L;
                        if((uint32_t)ptr10 != 0) {
                            int* ptr15 = (int*)((long)(long*)((long)ptr12 * 16L) + (long)param2);
                            *ptr15 = 1;
                            *(ptr15 + 1) = (uint32_t)ptr10;
                            *(ptr15 + 2) = 0;
                            ptr10 = (long)param1 + v1;
                            ptr12 = (uint64_t)*(ptr10 + 49);
                            ptr13 = v3 + 5L;
                            if((uint32_t)ptr12 == 0) {
                                goto loc_73AA1C;
                            }
                            ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                            *ptr13 = 1;
                            *(ptr13 + 1) = (uint32_t)ptr12;
                            *(ptr13 + 2) = 0;
                            ptr10 = (uint64_t)*(ptr10 + 50);
                            ptr12 = v3 + 6L;
                            if((uint32_t)ptr10 != 0) {
                                int* ptr16 = (int*)((long)(long*)((long)ptr12 * 16L) + (long)param2);
                                *ptr16 = 1;
                                *(ptr16 + 1) = (uint32_t)ptr10;
                                *(ptr16 + 2) = 0;
                                ptr10 = (long)param1 + v1;
                                ptr12 = (uint64_t)*(ptr10 + 51);
                                ptr13 = v3 + 7L;
                                if((uint32_t)ptr12 == 0) {
                                    goto loc_73AA1C;
                                }
                                ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                                *ptr13 = 1;
                                *(ptr13 + 1) = (uint32_t)ptr12;
                                *(ptr13 + 2) = 0;
                                ptr10 = (uint64_t)*(ptr10 + 52);
                                ptr12 = v3 + 8L;
                                if((uint32_t)ptr10 != 0) {
                                    int* ptr17 = (int*)((long)(long*)((long)ptr12 * 16L) + (long)param2);
                                    *ptr17 = 1;
                                    *(ptr17 + 1) = (uint32_t)ptr10;
                                    *(ptr17 + 2) = 0;
                                    ptr10 = (long)param1 + v1;
                                    ptr12 = (uint64_t)*(ptr10 + 53);
                                    ptr13 = v3 + 9L;
                                    if((uint32_t)ptr12 == 0) {
                                        goto loc_73AA1C;
                                    }
                                    ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                                    *ptr13 = 1;
                                    *(ptr13 + 1) = (uint32_t)ptr12;
                                    *(ptr13 + 2) = 0;
                                    ptr10 = (uint64_t)*(ptr10 + 54);
                                    ptr12 = v3 + 10L;
                                    if((uint32_t)ptr10 != 0) {
                                        int* ptr18 = (int*)((long)(long*)((long)ptr12 * 16L) + (long)param2);
                                        *ptr18 = 1;
                                        *(ptr18 + 1) = (uint32_t)ptr10;
                                        *(ptr18 + 2) = 0;
                                        ptr10 = (long)param1 + v1;
                                        ptr12 = (uint64_t)*(ptr10 + 55);
                                        ptr13 = v3 + 11L;
                                        if((uint32_t)ptr12 == 0) {
                                            goto loc_73AA1C;
                                        }
                                        ptr13 = (long)(long*)((long)ptr13 * 16L) + (long)param2;
                                        *ptr13 = 1;
                                        *(ptr13 + 1) = (uint32_t)ptr12;
                                        *(ptr13 + 2) = 0;
                                        ptr10 = (uint64_t)*(ptr10 + 56);
                                        ptr12 = v3 + 12L;
                                        if((uint32_t)ptr10 != 0) {
                                            ptr12 = (long)(long*)((long)ptr12 * 16L) + (long)param2;
                                            *ptr12 = 1;
                                            *(ptr12 + 1) = (uint32_t)ptr10;
                                            *(ptr12 + 2) = 0;
                                            ptr10 = (uint64_t)*(int*)((char*)((long)param1 + v1) + 228L);
                                            v2 = v3 + 13L;
                                            if((uint32_t)ptr10 == 0) {
                                                goto loc_73ABB8;
                                            }
                                            else {
                                                int* ptr19 = (int*)(v2 * 16L + (long)param2);
                                                v0 = param0 + 0xF;
                                                *ptr19 = 1;
                                                *(ptr19 + 1) = (uint32_t)ptr10;
                                                *(ptr19 + 2) = 0;
                                                goto loc_73AA20;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v0 = (uint32_t)ptr12;
                goto loc_73AA20;
            }
        loc_73AA1C:
            v0 = (uint32_t)ptr13;
        }
    loc_73AA20:
        v1 += 72L;
    }
    while(v1 != 288L);
    long v4 = 0L;
    long* ptr20 = (long*)(param1 + 112);
    do {
        if(*(int*)(v4 + (long)ptr20) != 0) {
            *(__int128*)(v0 * 16L + (long)param2) = *(__int128*)(v4 + (long)ptr20);
            v0 = param0 + 1;
        }
        v4 += 16L;
    }
    while(v4 != 1712L);
    return (uint64_t)v0;
}
