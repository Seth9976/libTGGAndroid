long sub_CE3AB0(long* param0, long param1, uint64_t* param2, long* param3, long param4, uint64_t* param5, long param6, long param7) {
    long v0;
    long* ptr0;
    long* ptr1;
    *param2 = param0;
    *param5 = param3;
    char* ptr2 = *param2;
    if(((param7 >>> 2L) & 0x1L) && (long)(long*)(param1 - ptr2) >= 3L && *ptr2 == 239 && *(ptr2 + 1L) == 0xbb && *(ptr2 + 2L) == 191) {
        ptr2 += 3L;
        *param2 = ptr2;
    }
    if(param1 > (uint64_t)ptr2) {
        int* ptr3 = *param5;
        while(param4 > (uint64_t)ptr3) {
            long* ptr4 = (uint64_t)*ptr2;
            if(param6 >= (uint64_t)ptr4) {
                if((long*)((long)(long*)((long)ptr4 >>> 7L) & 0x1L) && (uint32_t)ptr4 < 194) {
                    return 2L;
                }
                else if(!(long*)((long)(long*)((long)ptr4 >>> 7L) & 0x1L)) {
                    *ptr3 = (uint32_t)ptr4;
                    ptr0 = ptr2 + 1L;
                }
                else if((uint32_t)ptr4 <= 223 && (long)(long*)(param1 - ptr2) < 2L) {
                    return 1L;
                }
                else if((uint32_t)ptr4 <= 223) {
                    ptr1 = (uint64_t)*(ptr2 + 1L);
                    if(((uint32_t)*(ptr2 + 1L) & 0xc0) != 128) {
                        return 2L;
                    }
                    ptr4 = (uint64_t)(uint8_t)(long*)((long)ptr1 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)ptr4 * 64) & 0x7c0L) >>> 6L) & 0x3ffffffffffffffL) << 6);
                    if(param6 < (uint64_t)ptr4) {
                        return 2L;
                    }
                    *ptr3 = (uint32_t)ptr4;
                    ptr0 = ptr2 + 2L;
                }
                else if((uint32_t)ptr4 <= 239) {
                    if((long)(long*)(param1 - ptr2) < 3L) {
                        return 1L;
                    }
                    v0 = (uint64_t)*(ptr2 + 1L);
                    ptr1 = (uint64_t)*(ptr2 + 2L);
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
                    if(((uint32_t)ptr1 & 0xc0) != 128) {
                        return 2L;
                    }
                    ptr4 = (uint64_t)(uint8_t)(long*)((long)ptr1 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v0 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)ptr4 * 0x1000) & 0xf000L) >>> 12L) & 0xfffffffffffffL) << 6)) << 6);
                    if(param6 < (uint64_t)ptr4) {
                        return 2L;
                    }
                    *ptr3 = (uint32_t)ptr4;
                    ptr0 = ptr2 + 3L;
                }
                else {
                    if((uint32_t)ptr4 > 244) {
                        return 2L;
                    }
                    if((long)(long*)(param1 - ptr2) < 4L) {
                        return 1L;
                    }
                    v0 = (uint64_t)*(ptr2 + 1L);
                    ptr1 = (uint64_t)*(ptr2 + 2L);
                    ptr2 = (uint64_t)*(ptr2 + 3L);
                    if((uint32_t)ptr4 == 244) {
                        if(((uint32_t)v0 & 0xf0) != 128) {
                            return 2L;
                        }
                    }
                    else if((uint32_t)ptr4 != 240) {
                        if(((uint32_t)v0 & 0xc0) != 128) {
                            return 2L;
                        }
                    }
                    else if((uint8_t)v0 + 112 >= 48) {
                        return 2L;
                    }
                    if(((uint32_t)ptr1 & 0xc0) != 128 || ((uint32_t)ptr2 & 0xc0) != 128) {
                        return 2L;
                    }
                    if((long)(long*)(param4 - (long)ptr3) < 8L) {
                        return 1L;
                    }
                    if(((uint64_t)(uint8_t)(char*)((long)ptr2 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(long*)((long)ptr1 & 0x3fL) | ((uint64_t)((uint64_t)(uint8_t)(v0 & 0x3fL) | ((uint64_t)((((uint64_t)((uint32_t)ptr4 * &gvar_10308+2fcf8h) & "ivateKeyE56_NS_20PK_Key_Agreement_KeyE") >>> 18L) & 0x3fffffffffffL) << 6)) << 6)) << 6)) > param6) {
                        return 2L;
                    }
                    long v1 = (uint64_t)((__ror__((uint32_t)v0, 30)) & 0x3c);
                    long* ptr5 = (long*)((long)ptr2 & 0x3fL);
                    *ptr3 = (((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr1 >>> 4L) & 0x3L) | ((uint32_t)(((uint32_t)(((uint8_t)(v1 & 0x3fL) >>> 2) & 0xF) | ((uint32_t)(uint8_t)(((uint32_t)(uint8_t)((v0 >>> 4L) & 0x3L) | ((uint32_t)(long*)((long)ptr4 & 0x3fffffffL) << 2)) & 0x1f) << 4) | ((uint32_t)((v1 >>> 11L) & "ctIwLb1EE16do_positive_signEv") << 9) | ((uint32_t)0 << 30)) & 0x3fffffff) << 2)) - 64) | 0xd800;
                    *param5 = (long*)(ptr3 + 1);
                    *(ptr3 + 1) = (uint32_t)(uint8_t)(long*)((long)ptr5 & 0x3fL) | ((uint32_t)(uint8_t)(long*)((long)ptr1 & 0xfL) << 6) | ((uint32_t)(long*)((long)(long*)((long)ptr5 >>> 10L) & 0x3fffffL) << 10) | 0xdc00;
                    ptr0 = (char*)*param2 + 4L;
                }
                *param2 = ptr0;
                ptr3 = (char*)*param5 + 4L;
                *param5 = (int*)((char*)*param5 + 4L);
                ptr2 = *param2;
                if(param1 <= (uint64_t)ptr2) {
                    return 0L;
                }
                continue;
            }
            return 2L;
        }
        return 1L;
    }
    return 0L;
}
