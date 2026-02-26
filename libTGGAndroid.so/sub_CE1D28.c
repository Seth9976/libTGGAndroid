long sub_CE1D28(char* param0, long param1, long param2, long param3, long param4) {
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
        long* ptr1 = (long*)&g1;
    loc_CE1D84:
        do {
            long v0 = (uint64_t)*ptr0;
            long v1 = v0 & 0xffL;
            if((v0 >>> 31L) & 0x1L) {
                if((uint32_t)v1 >= 194) {
                    if((uint32_t)v1 <= 223 && ((long)(long*)(param1 - ptr0) < 2L || ((uint32_t)*(ptr0 + 1L) & 0xc0) != 128 || ((uint64_t)(uint8_t)(*(ptr0 + 1L) & 0x3F) | ((uint64_t)((((uint64_t)((uint32_t)v1 * 64) & 0x7c0L) >>> 6L) & 0x3ffffffffffffffL) << 6)) > param3)) {
                        goto loc_CE1F20;
                    }
                    else if((uint32_t)v1 <= 223) {
                        v1 = 2L;
                    }
                    else if((uint32_t)v1 <= 239) {
                        if((long)(long*)(param1 - ptr0) < 3L) {
                            goto loc_CE1F20;
                        }
                        long v2 = (uint64_t)*(ptr0 + 1L);
                        long* ptr2 = (uint64_t)*(ptr0 + 2L);
                        int v3 = (uint32_t)(uint8_t)v0;
                        if((uint8_t)v0 == 237) {
                            goto loc_CE1E6C;
                        }
                        else if(v3 != 224) {
                            goto loc_CE1E74;
                        }
                        if(((uint32_t)v2 & 0xe0) != 160) {
                            return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
                        loc_CE1E74:
                            v0 = (uint64_t)((uint32_t)v2 & 0xc0);
                            goto loc_CE1E7C;
                        loc_CE1E6C:
                            v0 = (uint64_t)((uint32_t)v2 & 0xe0);
                        loc_CE1E7C:
                            if((uint32_t)v0 != 128) {
                                goto loc_CE1F20;
                            }
                        }
                        if(((uint32_t)ptr2 & 0xc0) != 128 || ((uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v2 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)v1 * 0x1000) & 0xf000L) >>> 12L) & 0xfffffffffffffL) << 6)) << 6)) > param3) {
                            goto loc_CE1F20;
                        }
                        v1 = 3L;
                    }
                    else {
                        if((uint32_t)v1 > 244 || (long)(long*)(param1 - ptr0) < 4L) {
                            goto loc_CE1F20;
                        }
                        v0 = (uint64_t)*(ptr0 + 1L);
                        v2 = (uint64_t)*(ptr0 + 2L);
                        ptr2 = (uint64_t)*(ptr0 + 3L);
                        if((uint32_t)v1 == 244) {
                            goto loc_CE1EB0;
                        }
                        else if((uint32_t)v1 != 240) {
                            goto loc_CE1EB8;
                        }
                        if((uint8_t)v0 + 112 >= 48) {
                            return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
                        loc_CE1EB8:
                            int v4 = (uint32_t)v0 & 0xc0;
                            goto loc_CE1EC0;
                        loc_CE1EB0:
                            v4 = (uint32_t)v0 & 0xf0;
                        loc_CE1EC0:
                            if(v4 != 128) {
                                goto loc_CE1F20;
                            }
                        }
                        if(((uint32_t)v2 & 0xc0) != 128 || ((uint32_t)ptr2 & 0xc0) != 128 || ((uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)(((uint64_t)((uint16_t)(v2 & 0xfffL) & 0x3F) | ((uint64_t)((uint64_t)(uint8_t)(v0 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)v1 * &gvar_10308+2fcf8h) & "ivateKeyE56_NS_20PK_Key_Agreement_KeyE") >>> 18L) & 0x3fffffffffffL) << 6)) << 6) | ((uint64_t)0 << 58)) & 0x3ffffffffffffffL) << 6)) > param3) {
                            goto loc_CE1F20;
                        }
                        v1 = 4L;
                    }
                loc_CE1F08:
                    ptr0 += v1;
                    if(param2 <= (uint64_t)ptr1) {
                        goto loc_CE1F20;
                    }
                    ptr1 = (char*)ptr1 + 1L;
                    if(param1 > (uint64_t)ptr0) {
                        goto loc_CE1D84;
                    }
                }
                goto loc_CE1F20;
            }
            else if(param3 < v1) {
                goto loc_CE1F20;
            }
            else {
                v1 = 1L;
                goto loc_CE1F08;
            }
        }
        while(1);
    }
loc_CE1F20:
    return (uint64_t)((uint32_t)ptr0 - (uint32_t)param0);
}
