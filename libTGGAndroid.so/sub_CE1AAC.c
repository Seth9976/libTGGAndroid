long sub_CE1AAC(long* param0, long param1, uint64_t* param2, long* param3, long param4, uint64_t* param5, long param6, long param7) {
    long v0;
    long v1;
    *param2 = param0;
    *param5 = param3;
    char* ptr0 = *param2;
    if(((param7 >>> 2L) & 0x1L) && (long)(long*)(param1 - ptr0) >= 3L && *ptr0 == 239 && *(ptr0 + 1L) == 0xbb && *(ptr0 + 2L) == 191) {
        ptr0 += 3L;
        *param2 = ptr0;
    }
    if(param1 > (uint64_t)ptr0) {
        int* ptr1 = *param5;
        while(param4 > (uint64_t)ptr1) {
            long* ptr2 = (uint64_t)*ptr0;
            long* ptr3 = (long*)((long)ptr2 & 0xffL);
            long* ptr4 = (uint64_t)(uint8_t)ptr2;
            if(!(long*)((long)(long*)((long)ptr2 >>> 31L) & 0x1L) && param6 < (uint64_t)ptr3) {
                return 2L;
            }
            else if(!(long*)((long)(long*)((long)ptr2 >>> 31L) & 0x1L)) {
                v1 = 1L;
            }
            else {
                if((uint32_t)ptr3 < 194) {
                    return 2L;
                }
                if((uint32_t)ptr3 > 223) {
                    goto loc_CE1BA0;
                }
                else if((long)(long*)(param1 - ptr0) < 2L) {
                    return 1L;
                }
                else {
                    ptr2 = (uint64_t)*(ptr0 + 1L);
                    if(((uint32_t)*(ptr0 + 1L) & 0xc0) != 128) {
                        return 2L;
                    }
                    ptr4 = (uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)(long*)((long)(long*)((long)(long*)((long)(uint64_t)((uint32_t)ptr3 * 64) & 0x7c0L) >>> 6L) & 0x3ffffffffffffffL) << 6);
                    v1 = 2L;
                }
                if(param6 < (uint64_t)ptr4) {
                    return 2L;
                loc_CE1BA0:
                    if((uint32_t)ptr3 <= 239) {
                        if((long)(long*)(param1 - ptr0) < 3L) {
                            return 1L;
                        }
                        v0 = (uint64_t)*(ptr0 + 1L);
                        ptr2 = (uint64_t)*(ptr0 + 2L);
                        if((uint32_t)ptr4 == 237) {
                            if(((uint32_t)v0 & 0xe0) != 128) {
                                return 2L;
                            }
                        }
                        else if((uint32_t)ptr4 != 224) {
                            if(((uint32_t)v0 & 0xc0) != 128) {
                                return 2L;
                            }
                        }
                        else if(((uint32_t)v0 & 0xe0) != 160) {
                            return 2L;
                        }
                        if(((uint32_t)ptr2 & 0xc0) != 128) {
                            return 2L;
                        }
                        ptr4 = (uint64_t)(uint8_t)(long*)((long)ptr2 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v0 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)ptr3 * 0x1000) & 0xf000L) >>> 12L) & 0xfffffffffffffL) << 6)) << 6);
                        if(param6 < (uint64_t)ptr4) {
                            return 2L;
                        }
                        v1 = 3L;
                    }
                    else {
                        if((uint32_t)ptr3 > 244) {
                            return 2L;
                        }
                        if((long)(long*)(param1 - ptr0) < 4L) {
                            return 1L;
                        }
                        v0 = (uint64_t)*(ptr0 + 1L);
                        ptr2 = (uint64_t)*(ptr0 + 2L);
                        ptr4 = (uint64_t)*(ptr0 + 3L);
                        if((uint32_t)ptr3 == 244) {
                            if(((uint32_t)v0 & 0xf0) != 128) {
                                return 2L;
                            }
                        }
                        else if((uint32_t)ptr3 != 240) {
                            if(((uint32_t)v0 & 0xc0) != 128) {
                                return 2L;
                            }
                        }
                        else if((uint8_t)v0 + 112 >= 48) {
                            return 2L;
                        }
                        if(((uint32_t)ptr2 & 0xc0) != 128 || ((uint32_t)ptr4 & 0xc0) != 128) {
                            return 2L;
                        }
                        ptr3 = (uint64_t)(uint8_t)(long*)((long)ptr4 & 0x3fL) | ((uint64_t)(((uint64_t)((uint16_t)(long*)((long)ptr2 & 0xfffL) & 0x3F) | ((uint64_t)((uint64_t)(uint8_t)(v0 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)ptr3 * &gvar_10308+2fcf8h) & "ivateKeyE56_NS_20PK_Key_Agreement_KeyE") >>> 18L) & 0x3fffffffffffL) << 6)) << 6) | ((uint64_t)0 << 58)) & 0x3ffffffffffffffL) << 6);
                        if(param6 < (uint64_t)ptr3) {
                            return 2L;
                        }
                        ptr4 = (uint64_t)(uint32_t)ptr3;
                        v1 = 4L;
                    }
                }
            }
            *ptr1 = (uint32_t)ptr4;
            *param2 = (long*)(v1 + ptr0);
            ptr1 = (char*)*param5 + 4L;
            *param5 = (int*)((char*)*param5 + 4L);
            ptr0 = *param2;
            if(param1 <= (uint64_t)ptr0) {
                return 0L;
            }
        }
        return 1L;
    }
    return 0L;
}
