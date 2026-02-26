long sub_C009D8(uint64_t* param0, long param1, long param2, long param3, long param4, long param5, long param6, long param7) {
    uint8_t* ptr0;
    uint8_t* ptr1;
    uint8_t* ptr2 = *(param0 + 23);
    uint64_t* ptr3 = *(param0 + 24);
    uint64_t* ptr4 = param0;
    if((uint64_t)ptr3 > (uint64_t)ptr2) {
        ptr1 = ptr2 + 1L;
        *(ptr4 + 23) = ptr2 + 1L;
        if(*ptr2 == 71) {
            goto loc_C00A68;
        }
    }
    else if(*(uint32_t*)(ptr4 + 6) != 0) {
        long v0 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L), param3, param4, param5, param6, param7);
        int v1 = (uint32_t)v0;
        if(v1 == 0) {
            *(uint32_t*)(ptr4 + 6) = 0;
            *(uint8_t*)(ptr4 + 7) = 0;
            *(ptr4 + 23) = (uint64_t*)((char*)ptr4 + 57L);
            *(ptr4 + 24) = (uint64_t*)((char*)ptr4 + 57L);
            *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
            return 0L;
        }
        ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
        ptr3 = (uint64_t*)(v1 + (long)ptr4) + 7;
        ptr1 = (uint8_t*)ptr4 + 57L;
        *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
        *(ptr4 + 24) = ptr3;
        if((uint32_t)ptr2 != 71) {
            *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
            return 0L;
        }
    loc_C00A68:
        if((uint64_t)ptr3 > (uint64_t)ptr1) {
            ptr0 = ptr1 + 1L;
            *(ptr4 + 23) = ptr1 + 1L;
            if(*ptr1 != 73) {
                *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                return 0L;
            }
            goto loc_C00AD8;
        }
        else {
            if(*(uint32_t*)(ptr4 + 6) == 0) {
                *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                return 0L;
            }
            long v2 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
            int v3 = (uint32_t)v2;
            if(v3 == 0) {
                ptr2 = NULL;
                *(uint32_t*)(ptr4 + 6) = 0;
                ptr3 = (char*)ptr4 + 57L;
                *(uint8_t*)(ptr4 + 7) = 0;
            }
            else {
                ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                ptr3 = (uint64_t*)(v3 + (long)ptr4) + 7;
            }
            ptr0 = (uint8_t*)ptr4 + 57L;
            *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
            *(ptr4 + 24) = ptr3;
            if((uint32_t)ptr2 != 73) {
                *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                return 0L;
            }
        loc_C00AD8:
            if((uint64_t)ptr3 > (uint64_t)ptr0) {
                ptr1 = ptr0 + 1L;
                *(ptr4 + 23) = ptr0 + 1L;
                if(*ptr0 != 70) {
                    *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                    return 0L;
                }
                goto loc_C00B48;
            }
            else {
                if(*(uint32_t*)(ptr4 + 6) == 0) {
                    *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                    return 0L;
                }
                long v4 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                int v5 = (uint32_t)v4;
                if(v5 == 0) {
                    ptr2 = NULL;
                    *(uint32_t*)(ptr4 + 6) = 0;
                    ptr3 = (char*)ptr4 + 57L;
                    *(uint8_t*)(ptr4 + 7) = 0;
                }
                else {
                    ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                    ptr3 = (uint64_t*)(v5 + (long)ptr4) + 7;
                }
                ptr1 = (uint8_t*)ptr4 + 57L;
                *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
                *(ptr4 + 24) = ptr3;
                if((uint32_t)ptr2 != 70) {
                    *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                    return 0L;
                }
            loc_C00B48:
                if((uint64_t)ptr3 > (uint64_t)ptr1) {
                    ptr0 = ptr1 + 1L;
                    *(ptr4 + 23) = ptr1 + 1L;
                    if(*ptr1 != 56) {
                        *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                        return 0L;
                    }
                    goto loc_C00BB8;
                }
                else {
                    if(*(uint32_t*)(ptr4 + 6) == 0) {
                        *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                        return 0L;
                    }
                    long v6 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                    int v7 = (uint32_t)v6;
                    if(v7 == 0) {
                        ptr2 = NULL;
                        *(uint32_t*)(ptr4 + 6) = 0;
                        ptr3 = (char*)ptr4 + 57L;
                        *(uint8_t*)(ptr4 + 7) = 0;
                    }
                    else {
                        ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                        ptr3 = (uint64_t*)(v7 + (long)ptr4) + 7;
                    }
                    ptr0 = (uint8_t*)ptr4 + 57L;
                    *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
                    *(ptr4 + 24) = ptr3;
                    if((uint32_t)ptr2 != 56) {
                        *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                        return 0L;
                    }
                loc_C00BB8:
                    if((uint64_t)ptr3 > (uint64_t)ptr0) {
                        ptr1 = ptr0 + 1L;
                        *(ptr4 + 23) = ptr0 + 1L;
                        ptr2 = (uint64_t)*ptr0;
                        goto loc_C00C18;
                    }
                    else {
                        if(*(uint32_t*)(ptr4 + 6) == 0) {
                            *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                            return 0L;
                        }
                        long v8 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                        int v9 = (uint32_t)v8;
                        if(v9 == 0) {
                            ptr2 = NULL;
                            *(uint32_t*)(ptr4 + 6) = 0;
                            ptr3 = (char*)ptr4 + 57L;
                            *(uint8_t*)(ptr4 + 7) = 0;
                        }
                        else {
                            ptr2 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                            ptr3 = (uint64_t*)(v9 + (long)ptr4) + 7;
                        }
                        ptr1 = (uint8_t*)ptr4 + 57L;
                        *(ptr4 + 23) = (uint8_t*)((uint8_t*)ptr4 + 57L);
                        *(ptr4 + 24) = ptr3;
                    loc_C00C18:
                        if((uint32_t)ptr2 == 57 || (uint32_t)ptr2 == 55) {
                            if((uint64_t)ptr3 > (uint64_t)ptr1) {
                                *(ptr4 + 23) = (uint64_t*)(ptr1 + 1L);
                                ptr3 = (uint64_t)*ptr1;
                            }
                            else {
                                if(*(uint32_t*)(ptr4 + 6) == 0) {
                                    *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                                    return 0L;
                                }
                                long v10 = *(ptr4 + 2)((long)*(ptr4 + 5), (long)(ptr4 + 7), (uint64_t)*(uint32_t*)((char*)ptr4 + 52L));
                                int v11 = (uint32_t)v10;
                                if(v11 == 0) {
                                    ptr3 = NULL;
                                    *(uint32_t*)(ptr4 + 6) = 0;
                                    ptr2 = (uint8_t*)ptr4 + 57L;
                                    *(uint8_t*)(ptr4 + 7) = 0;
                                }
                                else {
                                    ptr3 = (uint64_t)*(uint8_t*)(ptr4 + 7);
                                    ptr2 = (uint64_t*)(v11 + (long)ptr4) + 7;
                                }
                                *(ptr4 + 23) = (uint64_t*)((char*)ptr4 + 57L);
                                *(ptr4 + 24) = ptr2;
                            }
                            *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
                            return (uint32_t)ptr3 == 97;
                        }
                    }
                }
            }
        }
    }
    *(unsigned __int128*)(ptr4 + 23) = *(unsigned __int128*)(ptr4 + 25);
    return 0L;
}
