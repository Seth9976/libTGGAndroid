long sub_CE15C0(char* param0, long param1, long param2, long param3, long param4) {
    char* ptr0 = param0;
    if((param4 >>> 2L) & 0x1L) {
        ptr0 = param0;
        if((long)(long*)(param1 - param0) >= 3L) {
            ptr0 = param0;
            if(*param0 == 239) {
                ptr0 = param0;
                if(*(param0 + 1L) == 0xbb) {
                    ptr0 = *(param0 + 2L) == 191 ? param0 + 3L: param0;
                }
            }
        }
    }
    if(param2 != 0L && param1 > (uint64_t)ptr0) {
        long* ptr1 = NULL;
        do {
            long v0 = (uint64_t)*ptr0;
            if(param3 < v0) {
                goto loc_CE17BC;
            }
            else {
                if(!((v0 >>> 7L) & 0x1L)) {
                    ++ptr0;
                }
                else {
                    if((uint32_t)v0 < 194) {
                        goto loc_CE17BC;
                    }
                    if((uint32_t)v0 <= 223) {
                        if((long)(long*)(param1 - ptr0) < 2L || ((uint32_t)*(ptr0 + 1L) & 0xc0) != 128 || ((uint64_t)(uint8_t)(*(ptr0 + 1L) & 0x3F) | ((uint64_t)((((uint64_t)((uint32_t)v0 * 64) & 0x7c0L) >>> 6L) & 0x3ffffffffffffffL) << 6)) > param3) {
                            goto loc_CE17BC;
                        }
                        ptr0 += 2L;
                    }
                    else if((uint32_t)v0 <= 239) {
                        if((long)(long*)(param1 - ptr0) < 3L) {
                            goto loc_CE17BC;
                        }
                        long v1 = (uint64_t)*(ptr0 + 1L);
                        long* ptr2 = (uint64_t)*(ptr0 + 2L);
                        if((uint32_t)v0 == 237) {
                            goto loc_CE1708;
                        }
                        else if((uint32_t)v0 != 224) {
                            goto loc_CE1710;
                        }
                        if(((uint32_t)v1 & 0xe0) != 160) {
                            return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
                        loc_CE1710:
                            long v2 = (uint64_t)((uint32_t)v1 & 0xc0);
                            goto loc_CE1718;
                        loc_CE1708:
                            v2 = (uint64_t)((uint32_t)v1 & 0xe0);
                        loc_CE1718:
                            if((uint32_t)v2 != 128) {
                                goto loc_CE17BC;
                            }
                        }
                        if(((uint32_t)ptr2 & 0xc0) != 128 || ((uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v1 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)v0 * 0x1000) & 0xf000L) >>> 12L) & 0xfffffffffffffL) << 6)) << 6)) > param3) {
                            goto loc_CE17BC;
                        }
                        ptr0 += 3L;
                    }
                    else {
                        if((uint32_t)v0 > 244 || (uint64_t)(long*)(param2 - (long)ptr1) < 2L || (long)(long*)(param1 - ptr0) < 4L) {
                            goto loc_CE17BC;
                        }
                        v2 = (uint64_t)*(ptr0 + 1L);
                        v1 = (uint64_t)*(ptr0 + 2L);
                        ptr2 = (uint64_t)*(ptr0 + 3L);
                        if((uint32_t)v0 == 244) {
                            goto loc_CE174C;
                        }
                        else if((uint32_t)v0 != 240) {
                            goto loc_CE1754;
                        }
                        if((uint8_t)v2 + 112 >= 48) {
                            return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
                        loc_CE1754:
                            int v3 = (uint32_t)v2 & 0xc0;
                            goto loc_CE175C;
                        loc_CE174C:
                            v3 = (uint32_t)v2 & 0xf0;
                        loc_CE175C:
                            if(v3 != 128) {
                                goto loc_CE17BC;
                            }
                        }
                        if(((uint32_t)v1 & 0xc0) != 128 || ((uint32_t)ptr2 & 0xc0) != 128 || ((uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v1 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v2 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)v0 * &gvar_10308+2fcf8h) & "ivateKeyE56_NS_20PK_Key_Agreement_KeyE") >>> 18L) & 0x3fffffffffffL) << 6)) << 6)) << 6)) > param3) {
                            goto loc_CE17BC;
                        }
                        ptr1 = (char*)ptr1 + 1L;
                        ptr0 += 4L;
                    }
                }
                ptr1 = (char*)ptr1 + 1L;
            }
        }
        while(param2 > (uint64_t)ptr1 && param1 > (uint64_t)ptr0);
    }
loc_CE17BC:
    return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
}
