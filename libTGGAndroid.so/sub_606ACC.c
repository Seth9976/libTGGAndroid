// Stale decompilation - Refresh this view to re-decompile this code
uint32_t* sub_606ACC(int param0, uint32_t* param1, int* param2, long param3, long param4, int param5) {
    uint32_t v0;
    int v1;
    int v2;
    int v3;
    long v4;
    int v5;
    uint32_t v6;
    int v7;
    int v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t v12;
    char v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18 = *(param2 + 18);
    int* ptr0 = param2;
    uint32_t* ptr1 = param1;
    if(v18 == 2) {
        int* ptr2 = (uint64_t)*(ptr0 + 29);
        int* ptr3 = (int*)&g1;
        if((uint32_t)ptr2 >= 1) {
            uint32_t v19 = 0;
            int* ptr4 = ptr0 + 30;
            int* ptr5 = (int*)&g71;
            int* ptr6 = (int*)&g2000020081;
            uint32_t* ptr7 = (uint32_t*)&g1102;
            param1 = &gFFFFEEFD;
            param2 = &g1309;
            long v20 = 0x8000020001L;
            int* ptr8 = ptr2;
            do {
                long v21 = (uint64_t)*ptr4;
                uint32_t v22 = v19;
                if(*(uint32_t*)((char*)(v21 * 104L + (long)ptr1) + 6772L) == 1002) {
                    v21 = *(uint32_t*)((uint64_t*)(v21 * 104L + (long)ptr1) + 846);
                    v19 = 1;
                    if((uint32_t)v21 <= 0xaff) {
                        if((uint32_t)v21 > 0x5ff) {
                            if((uint32_t)v21 <= 1806 && (uint32_t)v21 - 0x600 <= 32 && ((1L << v21) & 0x100210181L) != 0L) {
                                goto loc_606C54;
                            }
                            else if((uint32_t)v21 <= 1806) {
                                goto loc_606C58;
                            }
                            else {
                                if((uint32_t)v21 <= 2349) {
                                    if((uint32_t)v21 == 1807 || (uint32_t)v21 == 2062) {
                                        goto loc_606C54;
                                    }
                                    goto loc_606C58;
                                }
                                if((uint32_t)v21 == 2350 || (uint32_t)v21 == 2563) {
                                    goto loc_606C54;
                                }
                                goto loc_606C58;
                            }
                        }
                        if((uint32_t)v21 <= 791) {
                            if((uint32_t)v21 - 0x100 <= 6 && ((1 << v21) & 0x71) != 0) {
                                goto loc_606C54;
                            }
                            goto loc_606C58;
                        }
                        if((uint32_t)v21 <= 0x4ff) {
                            if((uint32_t)v21 == 792 || (uint32_t)v21 == 1050) {
                                goto loc_606C54;
                            }
                            goto loc_606C58;
                        }
                        if((uint32_t)v21 == 0x500 || (uint32_t)v21 == 1289) {
                            goto loc_606C54;
                        }
                        goto loc_606C58;
                    }
                    if((uint32_t)v21 <= 0xe00) {
                        if((uint32_t)v21 <= 3360) {
                            if(((uint32_t)v21 - 3077 <= 37 && ((1L << ((uint8_t)(v21 & 0x3fL) - 5)) & 0x2000020081L) != 0L) || (uint32_t)v21 == 0xb00 || (uint32_t)v21 == 2839) {
                                goto loc_606C54;
                            }
                            goto loc_606C58;
                        }
                        if((uint32_t)v21 - 3361 > 6 || ((1 << ((uint8_t)(v21 & 0x1fL) - 1)) & 0x79) == 0) {
                            goto loc_606C58;
                        }
                        goto loc_606C54;
                    }
                    if((uint32_t)v21 > 0x1102) {
                        if(((uint32_t)v21 - 0x1103 <= 39 && ((1L << ((uint8_t)(v21 & 0x3fL) - 3)) & 0x8000020001L) != 0L) || (uint32_t)v21 == 4873) {
                            goto loc_606C54;
                        }
                        goto loc_606C58;
                    }
                    if((uint32_t)v21 == 3585 || (uint32_t)v21 == 3605 || (uint32_t)v21 == 3842) {
                        goto loc_606C54;
                    }
                }
                else {
                loc_606C54:
                    v19 = v22;
                }
            loc_606C58:
                long* ptr9 = (long*)((char*)ptr8 - 1L);
                ptr8 = (char*)ptr8 - 1L;
                ++ptr4;
            }
            while(ptr9 != 0L);
            int* ptr10 = ptr0 + 29;
            do {
                int* ptr11 = (int*)((char*)ptr2 - 1L);
                if((*(uint32_t*)((char*)((uint64_t)*(int*)((long)(long*)((long)ptr2 * 4L) + (long)ptr10) * 104L + (long)ptr1) + 6772L) & 0xfffffffe) != 1002) {
                    long v23 = *(ptr0 + 29) - 1L;
                    *(ptr0 + 29) = (uint32_t)v23;
                    ptr5 = (uint64_t)*(int*)((long*)(v23 * 4L + (long)ptr0) + 0xF);
                    *(int*)((long)(long*)((long)ptr2 * 4L) + (long)ptr10) = *(int*)((long*)(v23 * 4L + (long)ptr0) + 0xF);
                }
                ptr2 = ptr11;
            }
            while((long)(long*)((char*)ptr11 + 1L) > 1L);
            int* ptr12 = (uint64_t)*(ptr0 + 29);
            if(*(ptr0 + 29) >= 2) {
                ptr2 = *(uint32_t*)((uint64_t*)((uint64_t)*(ptr0 + 30) * 104L + (long)ptr1) + 846);
                long* ptr13 = (long*)((char*)ptr12 - 1L);
                if((uint64_t)ptr13 < 2L) {
                    ptr11 = &g1;
                    ptr3 = &g1;
                    goto loc_606DE4;
                }
                else {
                    ptr5 = (long)ptr13 & 0xfffffffffffffffeL;
                    ptr11 = (long)ptr13 | 0x1L;
                    ptr6 = ptr0 + 32;
                    ptr7 = ptr1 + 1690;
                    param2 = ptr5;
                    param1 = &g1;
                    goto loc_606D9C;
                }
            }
            else {
                ptr3 = &g1;
                goto loc_606E18;
            loc_606D9C:
                do {
                    long v24 = (uint64_t)*(ptr6 - 1);
                    long v25 = (uint64_t)*ptr6;
                    ptr6 += 2;
                    v20 = (uint32_t)ptr2 == *(uint32_t*)((uint64_t*)(v24 * 104L + (long)ptr7) + 1);
                    ptr8 = (uint32_t)ptr2 != *(uint32_t*)((uint64_t*)(v25 * 104L + (long)ptr7) + 1) ? NULL: &g1;
                    int v26 = (uint32_t)ptr2 == *(uint32_t*)((uint64_t*)(v24 * 104L + (long)ptr7) + 1);
                    long* ptr14 = (long*)((char*)param2 - 2L);
                    param2 = (char*)param2 - 2L;
                    param1 = (uint32_t)ptr2 == *(uint32_t*)((uint64_t*)(v25 * 104L + (long)ptr7) + 1) ? (uint64_t)((uint32_t)param1 & 1): NULL;
                }
                while(ptr14 != 0L);
                ptr3 = (uint64_t)((uint32_t)param1 & v26);
                if(ptr13 == ptr5) {
                    goto loc_606E18;
                }
            loc_606DE4:
                ptr12 = (long)ptr12 - (long)ptr11;
                ptr11 = (long*)((long)(long*)((long)ptr11 * 4L) + (long)ptr0) + 0xF;
                ptr5 = &g68;
                do {
                    long v27 = (uint64_t)*ptr11;
                    ++ptr11;
                    ptr9 = (char*)ptr12 - 1L;
                    ptr12 = (char*)ptr12 - 1L;
                    ptr3 = (uint32_t)ptr2 == *(uint32_t*)((uint64_t*)(v27 * 104L + (long)ptr1) + 846) ? (uint64_t)((uint32_t)ptr3 & 1): NULL;
                }
                while(ptr9 != 0L);
            }
        loc_606E18:
            if(v19 & 1) {
                *(ptr0 + 25) = 1;
            }
        }
        int* ptr15 = *(ptr1 + 1648);
        if((int)*(ptr1 + 1648) >= 1) {
            ptr2 = *(ptr0 + 21);
            ptr12 = ptr1 + 61575;
            do {
                ptr11 = (uint64_t)*(ptr12 + 14);
                if(*(ptr12 + 14) == 2) {
                    ptr11 = (uint64_t)*(ptr12 + 0xF);
                    if(*(ptr12 + 0xF) == 9) {
                        ptr11 = (uint64_t)*ptr12;
                        if((uint32_t)ptr2 != *ptr12 && *ptr12 != -1) {
                            goto loc_606E44;
                        }
                        else {
                            ptr11 = (uint64_t)*(ptr12 + 32);
                            if(*(ptr12 + 32) == 33) {
                                v28 = 0L;
                            }
                            else {
                                if((uint32_t)ptr11 != 84) {
                                    goto loc_606E44;
                                }
                                uint64_t* ptr16 = (uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)ptr1);
                                ptr2 = &gvar_10308+7ec4h;
                                long v28 = *(uint32_t*)((char*)((long)&gvar_10308 + (long)ptr16) + 32452L);
                            }
                            if(!((v28 & 0x1L) | (int*)((long)ptr3 & 0x1L))) {
                                *(ptr0 + 25) = 1;
                            }
                            goto loc_606EC4;
                        }
                    }
                    else {
                        goto loc_606E44;
                    }
                }
                else {
                loc_606E44:
                    ptr9 = (char*)ptr15 - 1L;
                    ptr15 = (char*)ptr15 - 1L;
                    ptr12 += 46;
                    if(ptr9 == 0L) {
                        goto loc_606EC4;
                    }
                }
            }
            while(1);
        }
    loc_606EC4:
        v18 = *(ptr0 + 18);
    }
    if(v18 == 3) {
        int v29 = *(ptr0 + 29);
        if(*(ptr0 + 29) >= 1) {
            int v30 = 0;
            do {
                int* ptr17 = (int*)(v30 * 4L + (long)ptr0);
                int v31 = *(ptr17 + 30);
                int* ptr18 = ptr17 + 30;
                if(v31 != 0) {
                    int v32 = *(ptr0 + 21);
                    param1 = DomDefGet2((long)ptr1, (uint64_t)v31);
                    if((*(uint8_t*)((uint8_t*)param1 + 201L) >>> 2) & 1) {
                        uint32_t v33 = *(param1 + 456);
                        uint32_t* ptr19 = param1;
                        if(v33 == 29) {
                            long v34 = 0L;
                            goto loc_606F84;
                        }
                        else if(v33 != 0) {
                            uint32_t v35 = *(ptr19 + 462);
                            if(*(ptr19 + 462) != 0) {
                                if(v35 == 29) {
                                    v34 = 1L;
                                    goto loc_606F84;
                                }
                                uint32_t v36 = *(ptr19 + 468);
                                if(*(ptr19 + 468) != 0) {
                                    if(v36 == 29) {
                                        v34 = 2L;
                                        goto loc_606F84;
                                    }
                                    if(*(ptr19 + 474) == 29) {
                                        v34 = 3L;
                                    loc_606F84:
                                        long v37 = DomPushHintContext((long)ptr1, (uint64_t)v32, (uint64_t)v31);
                                        long v38 = *((uint64_t*)(v34 * 24L + (long)ptr19) + 229)(v37);
                                        param1 = DomPopContext(v4);
                                        if((uint32_t)v38 != 0) {
                                            long v39 = *(ptr0 + 29) - 1L;
                                            *(ptr0 + 29) = (uint32_t)v39;
                                            *ptr18 = *(int*)((long*)(v39 * 4L + (long)ptr0) + 0xF);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v29 = *(ptr0 + 29);
                v30 = v15 + 1;
            }
            while(v29 > v30);
        }
        if(v29 >= 1) {
            long v40 = *(ptr0 + 22);
            ptr3 = &gvar_10B71B0;
            ptr2 = v40 * 132L + &gvar_10B71B0;
            v20 = (uint64_t)*(ptr2 + 0x151);
            if(*(ptr2 + 0x151) != 0) {
                int* ptr20 = ptr2 + 0x151;
                long v41 = v40 * 132L + &gvar_10B71B0;
                int* ptr21 = (int*)(v41 + 0x558L);
                int* ptr22 = (int*)(v41 + 0x554L);
                ptr2 = v41 + 0x55cL;
                int* ptr23 = (int*)(v41 + 1352L);
                int* ptr24 = (int*)(v41 + 1356L);
                int* ptr25 = (int*)(v41 + 0x550L);
                int* ptr26 = (int*)(v41 + 1376L);
                int* ptr27 = (int*)(v41 + 0x55cL);
                ptr3 = v41 + 1380L;
                int* ptr28 = (int*)(v41 + 1384L);
                int* ptr29 = (int*)(v41 + 1380L);
                long v42 = (uint64_t)*(ptr0 + 30);
                int* ptr30 = ptr0 + 30;
                if((uint32_t)v20 == 0) {
                    goto loc_6071B0;
                }
                else {
                    goto loc_60703C;
                }
            }
        }
    }
loc_6071D0:
    int v43 = *(ptr0 + 18);
    if(*(ptr0 + 18) == 1) {
        ptr2 = *(ptr0 + 22);
        if(*(ptr0 + 21) == *(ptr0 + 22)) {
            if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f19)) != 0) {
            loc_607218:
                while(1) {
                    if(*(uint32_t*)((uint64_t*)(v10 * 104L + (long)ptr1) + 857) != 0) {
                        goto loc_607218;
                    }
                    goto loc_607234;
                }
            }
        loc_607234:
            ptr3 = *(Elf64_Word*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1a));
            ptr12 = NULL;
            if(*(Elf64_Word*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1a)) == 0) {
                goto loc_607274;
            loc_607250:
                do {
                    ptr12 = (uint64_t)((uint32_t)ptr12 + 1);
                }
                while(*(uint32_t*)((uint64_t*)(v9 * 104L + (long)ptr1) + 857) != 0);
            }
            else {
                goto loc_607250;
            }
        loc_607274:
            ptr11 = NULL;
            if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1b)) == 0) {
                goto loc_6072A8;
            loc_607288:
                do {
                    ptr11 = (uint64_t)((uint32_t)ptr11 + 1);
                }
                while(*(uint32_t*)((uint64_t*)(v0 * 104L + (long)ptr1) + 857) != 0);
            }
            else {
                goto loc_607288;
            }
        loc_6072A8:
            ptr5 = *(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1c));
            if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr2 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1c)) == 0) {
                ptr2 = NULL;
            }
            else {
                ptr2 = NULL;
                goto loc_6072BC;
            }
            if((uint32_t)ptr3 != 0) {
                goto loc_6072E8;
            loc_6072BC:
                do {
                    ptr5 = *(uint32_t*)((uint64_t*)((uint64_t)(uint32_t)ptr5 * 104L + (long)ptr1) + 857);
                    ptr2 = (uint64_t)((uint32_t)ptr2 + 1);
                }
                while((uint32_t)ptr5 != 0);
                if((uint32_t)ptr3 == 0) {
                    return param1;
                }
            loc_6072E8:
                if((uint32_t)ptr2 + (uint32_t)ptr12 + ((uint32_t)ptr11 + v1) <= 5) {
                    do {
                        ptr3 = *(uint32_t*)((uint64_t*)((uint64_t)(uint32_t)ptr3 * 104L + (long)ptr1) + 857);
                        v43 = v1 - 1;
                    }
                    while((uint32_t)ptr3 != 0);
                    if(v43 != 0) {
                        ptr2 = (uint64_t)*(ptr0 + 29);
                        if(*(ptr0 + 29) >= 1) {
                            int v44 = 0;
                            ptr3 = &g68;
                            ptr12 = &g1;
                            ptr11 = &g4000005;
                            ptr5 = &g1005;
                            ptr6 = &g131;
                            ptr7 = &g1006;
                            param1 = &g1033;
                            param2 = &g1211;
                            v20 = 0x1111L;
                            do {
                                int* ptr31 = (int*)(v44 * 4L + (long)ptr0);
                                ptr8 = ptr31 + 30;
                                v22 = *(uint32_t*)((uint64_t*)((uint64_t)*(ptr31 + 30) * 104L + (long)ptr1) + 846);
                                if((int)*(uint32_t*)((uint64_t*)((uint64_t)*(ptr31 + 30) * 104L + (long)ptr1) + 846) > 3082) {
                                    if((int)v22 <= 0x1005) {
                                        if(v22 - 3592 <= 8 && ((1 << ((uint8_t)(v22 & 0x1f) - 8)) & 0x131) != 0) {
                                            goto loc_607450;
                                        }
                                        else {
                                            v22 = param5 - 3083;
                                            if(param5 - 3083 <= 8) {
                                                v22 = 1 << param5;
                                                if(((1 << param5) & 0x181) != 0) {
                                                    goto loc_607450;
                                                }
                                            }
                                            goto loc_60746C;
                                        }
                                    }
                                    if((int)v22 <= 0x1110) {
                                        if(v22 == 0x1006 || v22 == 0x1033) {
                                            goto loc_607450;
                                        }
                                        goto loc_60746C;
                                    }
                                    if(v22 != 0x1211 && v22 != 0x1111) {
                                        goto loc_60746C;
                                    }
                                loc_607450:
                                    long v45 = (long)(uint32_t)ptr2 - 1L;
                                    *(ptr0 + 29) = (uint32_t)v45;
                                    *ptr8 = *(int*)((long*)(v45 * 4L + (long)ptr0) + 0xF);
                                    ptr2 = (uint64_t)*(ptr0 + 29);
                                }
                                else if((int)v22 <= 1538) {
                                    if((int)v22 > 1038) {
                                        if(v22 == 1039 || v22 == 1281 || v22 == 1291) {
                                            goto loc_607450;
                                        }
                                        goto loc_60746C;
                                    }
                                    if(v22 == 790 || v22 == 1031) {
                                        goto loc_607450;
                                    }
                                }
                                else if((int)v22 <= 2307) {
                                    v22 = param5 - 1539;
                                    if(param5 - 1539 <= 26) {
                                        v22 = 1 << param5;
                                        if(((1 << param5) & 0x4000005) != 0) {
                                            goto loc_607450;
                                        }
                                    }
                                }
                                else if(v22 == 2308 || v22 == 2331 || v22 == 2820) {
                                    goto loc_607450;
                                }
                            loc_60746C:
                                v44 = v14 + 1;
                            }
                            while((uint32_t)ptr2 > v44);
                            v43 = *(ptr0 + 18);
                            goto loc_607480;
                        }
                    }
                }
            }
        }
    }
    else {
    loc_607480:
        if(v43 == 7) {
            ptr3 = *(ptr0 + 22);
            if(*(ptr0 + 21) == *(ptr0 + 22)) {
                if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr3 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f19)) == 0) {
                    goto loc_607A50;
                }
                else {
                    goto loc_6074C4;
                }
            }
        }
        else if(v43 == 50) {
            int* ptr32 = (int*)DomBoardPile2((long)ptr1, 7L);
            if(*(ptr32 + 2) == 0) {
                v46 = 0;
            }
            else {
                uint32_t v46 = 1;
                int v47 = *ptr32;
            }
            int* ptr33 = (int*)DomBoardPile2((long)ptr1, 8L);
            if(*(ptr33 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr33;
                v46 = v5 + 1;
            }
            int* ptr34 = (int*)DomBoardPile2((long)ptr1, 9L);
            if(*(ptr34 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr34;
                v46 = v5 + 1;
            }
            int* ptr35 = (int*)DomBoardPile2((long)ptr1, 10L);
            if(*(ptr35 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr35;
                v46 = v5 + 1;
            }
            int* ptr36 = (int*)DomBoardPile2((long)ptr1, 11L);
            if(*(ptr36 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr36;
                v46 = v5 + 1;
            }
            int* ptr37 = (int*)DomBoardPile2((long)ptr1, 12L);
            if(*(ptr37 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr37;
                v46 = v5 + 1;
            }
            int* ptr38 = (int*)DomBoardPile2((long)ptr1, 13L);
            if(*(ptr38 + 2) != 0) {
                ptr3 = v46 + 1;
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr38;
                v46 = v5 + 1;
            }
            int* ptr39 = (int*)DomBoardPile2((long)ptr1, 14L);
            if(*(ptr39 + 2) != 0) {
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr39;
                v46 = v5 + 1;
            }
            int* ptr40 = (int*)DomBoardPile2((long)ptr1, 15L);
            if(*(ptr40 + 2) != 0) {
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr40;
                v46 = v5 + 1;
            }
            int* ptr41 = (int*)DomBoardPile2((long)ptr1, 16L);
            if(*(ptr41 + 2) != 0) {
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr41;
                v46 = v5 + 1;
            }
            int* ptr42 = (int*)DomBoardPile2((long)ptr1, 17L);
            if(*(ptr42 + 2) != 0) {
                ptr2 = &v47;
                *(int*)(v46 * 4L + (long)&v47) = *ptr42;
                v46 = v5 + 1;
            }
            int* ptr43 = (int*)DomBoardPile2((long)ptr1, 18L);
            if(*(ptr43 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr43;
                v46 = v5 + 1;
            }
            int* ptr44 = (int*)DomBoardPile2((long)ptr1, 19L);
            if(*(ptr44 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr44;
                v46 = v5 + 1;
            }
            int* ptr45 = (int*)DomBoardPile2((long)ptr1, 20L);
            if(*(ptr45 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr45;
                v46 = v5 + 1;
            }
            int* ptr46 = (int*)DomBoardPile2((long)ptr1, 21L);
            if(*(ptr46 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr46;
                v46 = v5 + 1;
            }
            int* ptr47 = (int*)DomBoardPile2((long)ptr1, 22L);
            if(*(ptr47 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr47;
                v46 = v5 + 1;
            }
            int* ptr48 = (int*)DomBoardPile2((long)ptr1, 23L);
            if(*(ptr48 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr48;
                v46 = v5 + 1;
            }
            int* ptr49 = (int*)DomBoardPile2((long)ptr1, 24L);
            if(*(ptr49 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr49;
                v46 = v5 + 1;
            }
            int* ptr50 = (int*)DomBoardPile2((long)ptr1, 25L);
            if(*(ptr50 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr50;
                v46 = v5 + 1;
            }
            int* ptr51 = (int*)DomBoardPile2((long)ptr1, 26L);
            if(*(ptr51 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr51;
                v46 = v5 + 1;
            }
            int* ptr52 = (int*)DomBoardPile2((long)ptr1, 27L);
            if(*(ptr52 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr52;
                v46 = v5 + 1;
            }
            int* ptr53 = (int*)DomBoardPile2((long)ptr1, 28L);
            if(*(ptr53 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr53;
                v46 = v5 + 1;
            }
            int* ptr54 = (int*)DomBoardPile2((long)ptr1, 29L);
            if(*(ptr54 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr54;
                v46 = v5 + 1;
            }
            int* ptr55 = (int*)DomBoardPile2((long)ptr1, 30L);
            if(*(ptr55 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr55;
                v46 = v5 + 1;
            }
            int* ptr56 = (int*)DomBoardPile2((long)ptr1, 31L);
            if(*(ptr56 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *ptr56;
                v46 = v5 + 1;
            }
            param1 = DomBoardPile2((long)ptr1, 32L);
            if(*(param1 + 2) != 0) {
                *(int*)(v46 * 4L + (long)&v47) = *param1;
                v46 = v5 + 1;
            }
            if(*(ptr0 + 29) > 0) {
                if((int)v46 > 0) {
                    int v48 = 0;
                    long v49 = v46;
                    uint32_t* ptr57 = ptr1 + 61591;
                    goto loc_60795C;
                }
                else {
                    param1 = (uint64_t)*(ptr0 + 30);
                    goto loc_607A20;
                loc_607A50:
                    int v50 = -5;
                    goto loc_607A68;
                loc_6074C4:
                    do {
                        v50 = param0 + 1;
                    }
                    while(*(uint32_t*)((uint64_t*)(v6 * 104L + (long)ptr1) + 857) != 0);
                    goto loc_607A68;
                loc_607A20:
                    do {
                        int* ptr58 = (int*)DomDefGet((long)param1, *(ptr1 + 852));
                        CardCostParse((long)&v13, (uint64_t)*(ptr58 + 49));
                        int v51 = *(ptr0 + 29);
                        v43 = v51 - 1;
                        *(ptr0 + 29) = v51 - 1;
                        param1 = (uint64_t)*(int*)((long*)(v43 * 4L + (long)ptr0) + 0xF);
                        *(ptr0 + 30) = *(int*)((long*)(v43 * 4L + (long)ptr0) + 0xF);
                    }
                    while(v51 > 1);
                    return param1;
                loc_607A68:
                    if(*(Elf64_Word*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr3 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1a)) == 0) {
                        int v52 = 0;
                    }
                    else {
                        do {
                            v52 = v2 + 1;
                        }
                        while(*(uint32_t*)((uint64_t*)(v11 * 104L + (long)ptr1) + 857) != 0);
                    }
                    if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr3 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1b)) == 0) {
                        int v53 = 0;
                    }
                    else {
                        do {
                            v53 = v3 + 1;
                        }
                        while(*(uint32_t*)((uint64_t*)(v12 * 104L + (long)ptr1) + 857) != 0);
                    }
                    ptr11 = *(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr3 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1c));
                    if(*(uint32_t*)((long)(uint64_t*)((long)(uint64_t*)((long)ptr3 * 23088L) + (long)&gvar_10308) + (long)(uint64_t*)(ptr1 + 0x1f1c)) == 0) {
                        ptr3 = NULL;
                        goto loc_607B04;
                    loc_607AE8:
                        do {
                            ptr11 = *(uint32_t*)((uint64_t*)((uint64_t)(uint32_t)ptr11 * 104L + (long)ptr1) + 857);
                            ptr3 = (uint64_t)((uint32_t)ptr3 + 1);
                        }
                        while((uint32_t)ptr11 != 0);
                    }
                    else {
                        ptr3 = NULL;
                        goto loc_607AE8;
                    }
                loc_607B04:
                    ptr2 = (uint64_t)*(ptr0 + 26);
                    v43 = (uint32_t)ptr3 + v50 + (v52 + v53) >= *(ptr0 + 26) ? (uint32_t)ptr3 + v50 + (v52 + v53): *(ptr0 + 26);
                }
                if(((uint32_t)ptr3 + v50 + (v52 + v53) >= (uint32_t)ptr2 ? (uint32_t)ptr3 + v50 + (v52 + v53): (uint32_t)ptr2) < *(ptr0 + 25)) {
                    *(ptr0 + 25) = v43;
                    return param1;
                loc_60795C:
                    do {
                        int* ptr59 = (int*)(v48 * 4L + (long)ptr0);
                        long v54 = (uint64_t)*(ptr59 + 30);
                        int* ptr60 = ptr59 + 30;
                        if((uint32_t)v54 == v47) {
                            long v55 = *(ptr1 + 1648);
                            long v56 = 0L;
                            if((uint32_t)v55 > 0) {
                                goto loc_6079C0;
                            }
                        }
                        else {
                            long v57 = 1L;
                            do {
                                long v58 = v57;
                                if(v57 == v49) {
                                    goto loc_6079B0;
                                }
                                else {
                                    v57 = v58 + 1L;
                                }
                            }
                            while((uint32_t)v54 != *(int*)(v58 * 4L + (long)&v47));
                        loc_6079B0:
                            v55 = *(ptr1 + 1648);
                            v56 = v58 >= v49;
                            if((uint32_t)v55 > 0) {
                            loc_6079C0:
                                ptr3 = ptr57;
                                while(*(ptr3 - 2) != 3 || *(ptr3 - 1) != 30 || (uint32_t)v54 != *ptr3) {
                                    ptr9 = v55 - 1L;
                                    --v55;
                                    ptr3 += 46;
                                    if(ptr9 == 0L) {
                                        goto loc_607914;
                                    }
                                }
                                v56 = 1L;
                            }
                        }
                    loc_607914:
                        int* ptr61 = (int*)DomDefGet(v54, *(ptr1 + 852));
                        param1 = CardCostParse((long)&v13, (uint64_t)*(ptr61 + 49));
                        if(v8 > 0 || !(v7 < 1 & ~(uint32_t)v56 & 1)) {
                            long v59 = *(ptr0 + 29) - 1L;
                            *(ptr0 + 29) = (uint32_t)v59;
                            *ptr60 = *(int*)((long*)(v59 * 4L + (long)ptr0) + 0xF);
                        }
                        v48 = v16 + 1;
                    }
                    while(*(ptr0 + 29) > v48);
                }
            }
        }
    }
    return param1;
loc_60703C:
    uint32_t* ptr62 = (uint32_t*)((uint64_t*)(v42 * 104L + (long)ptr1) + 846);
    param2 = *ptr62;
    if((uint32_t)v20 == *ptr62) {
    loc_607198:
        long v60 = *(ptr0 + 29) - 1L;
        *(ptr0 + 29) = (uint32_t)v60;
        *ptr30 = *(int*)((long*)(v60 * 4L + (long)ptr0) + 0xF);
    }
    else {
        param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
        if(!(uint32_t*)((long)param1 & 0x1L)) {
            v20 = (uint64_t)*ptr23;
            if(*ptr23 == 0) {
                goto loc_6071B0;
            }
            param2 = *ptr62;
            if((uint32_t)v20 != *ptr62) {
                param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                if(!(uint32_t*)((long)param1 & 0x1L)) {
                    v20 = (uint64_t)*ptr24;
                    if(*ptr24 == 0) {
                        goto loc_6071B0;
                    }
                    param2 = *ptr62;
                    if((uint32_t)v20 != *ptr62) {
                        param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                        if(!(uint32_t*)((long)param1 & 0x1L)) {
                            v20 = (uint64_t)*ptr25;
                            if(*ptr25 == 0) {
                                goto loc_6071B0;
                            }
                            param2 = *ptr62;
                            if((uint32_t)v20 != *ptr62) {
                                param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                if(!(uint32_t*)((long)param1 & 0x1L)) {
                                    v20 = (uint64_t)*ptr22;
                                    if(*ptr22 == 0) {
                                        goto loc_6071B0;
                                    }
                                    param2 = *ptr62;
                                    if((uint32_t)v20 != *ptr62) {
                                        param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                        if(!(uint32_t*)((long)param1 & 0x1L)) {
                                            v20 = (uint64_t)*ptr21;
                                            if(*ptr21 == 0) {
                                                goto loc_6071B0;
                                            }
                                            param2 = *ptr62;
                                            if((uint32_t)v20 != *ptr62) {
                                                param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                                if(!(uint32_t*)((long)param1 & 0x1L)) {
                                                    v20 = (uint64_t)*ptr27;
                                                    if(*ptr27 == 0) {
                                                        goto loc_6071B0;
                                                    }
                                                    param2 = *ptr62;
                                                    if((uint32_t)v20 != *ptr62) {
                                                        param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                                        if(!(uint32_t*)((long)param1 & 0x1L)) {
                                                            v20 = (uint64_t)*ptr26;
                                                            if(*ptr26 == 0) {
                                                                goto loc_6071B0;
                                                            }
                                                            param2 = *ptr62;
                                                            if((uint32_t)v20 != *ptr62) {
                                                                param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                                                if(!(uint32_t*)((long)param1 & 0x1L)) {
                                                                    v20 = (uint64_t)*ptr29;
                                                                    if(*ptr29 == 0) {
                                                                        goto loc_6071B0;
                                                                    }
                                                                    param2 = *ptr62;
                                                                    if((uint32_t)v20 != *ptr62) {
                                                                        param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                                                        if(!(uint32_t*)((long)param1 & 0x1L)) {
                                                                            v20 = (uint64_t)*ptr28;
                                                                            if(*ptr28 == 0) {
                                                                                goto loc_6071B0;
                                                                            }
                                                                            param2 = *ptr62;
                                                                            if((uint32_t)v20 != *ptr62) {
                                                                                param1 = IsPileSubtype((long)ptr1, (long)param2, v20);
                                                                                if(!(uint32_t*)((long)param1 & 0x1L)) {
                                                                                    goto loc_6071B0;
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
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        goto loc_607198;
    }
loc_6071B0:
    while(1) {
        int v61 = v17 + 1;
        if(*(ptr0 + 29) <= v61) {
            goto loc_6071D0;
        }
        v20 = (uint64_t)*ptr20;
        int* ptr63 = (int*)(v61 * 4L + (long)ptr0);
        v42 = (uint64_t)*(ptr63 + 30);
        ptr30 = ptr63 + 30;
        if((uint32_t)v20 != 0) {
            goto loc_60703C;
        }
    }
}
