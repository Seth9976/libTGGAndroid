long sub_CE1048(long* param0, long param1, uint64_t* param2, char* param3, long param4, uint64_t* param5, long param6, long param7) {
    *param2 = param0;
    *param5 = param3;
    if((param7 >>> 1L) & 0x1L && (long)(long*)(param4 - param3) < 3L) {
        return 1L;
    }
    else if((param7 >>> 1L) & 0x1L) {
        *param5 = (long*)(param3 + 1L);
        *param3 = 239;
        char* ptr0 = *param5;
        *param5 = (long*)(ptr0 + 1L);
        *ptr0 = 0xbb;
        char* ptr1 = *param5;
        *param5 = (long*)(ptr1 + 1L);
        *ptr1 = 191;
    }
    char* ptr2 = *param2;
    if(param1 > (uint64_t)ptr2) {
    loc_CE1108:
        do {
            long* ptr3 = (long*)*(short*)ptr2;
            if(param6 >= (uint64_t)ptr3) {
                if((uint32_t)ptr3 <= 127) {
                    ptr2 = *param5;
                    if((long)(long*)(param4 - ptr2) < 1L) {
                        return 1L;
                    }
                    *param5 = (long*)(ptr2 + 1L);
                    *ptr2 = (uint8_t)ptr3;
                }
                else {
                    if((uint32_t)ptr3 > 0x7ff) {
                        if(((uint32_t)(long*)__ror__((long)ptr3, 11L) & "ctIwLb1EE16do_positive_signEv") > 26) {
                            if(((uint32_t)(long*)__ror__((long)ptr3, 10L) & 0x3fffff) <= 54) {
                                if((long)(long*)(param1 - ptr2) < 4L) {
                                    return 1L;
                                }
                                long* ptr4 = (uint64_t)*(short*)(ptr2 + 2L);
                                ptr2 += 2L;
                                if(((uint32_t)ptr4 & 0xfc00) != 0xdc00) {
                                    return 2L;
                                }
                                if((long)(long*)(param4 - (long)*param5) < 4L) {
                                    return 1L;
                                }
                                if(((uint64_t)(uint16_t)(long*)((long)ptr4 & 0x3ffL) | ((uint64_t)((((uint64_t)((uint32_t)ptr3 * 0x400) & "hopkeepers_OnPlayv") >>> 10L) & 0x3fffffffffffffL) << 10)) + &ELFHeader > param6) {
                                    return 2L;
                                }
                                *param2 = ptr2;
                                char* ptr5 = *param5;
                                *param5 = (long*)(ptr5 + 1L);
                                *ptr5 = (uint8_t)((((__ror__((uint32_t)ptr3, 6)) & 0xF) + 1) >>> 2) | 0xf0;
                                char* ptr6 = *param5;
                                *param5 = (long*)(ptr6 + 1L);
                                *ptr6 = (uint8_t)((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr3 >>> 2L) & 0xfL) | ((uint32_t)((((__ror__(((__ror__((uint32_t)ptr3, 6)) & 0xF) + 1, 28)) & 0x30) >>> 4) & 0xfffffff) << 4)) | 0x80;
                                char* ptr7 = *param5;
                                *param5 = (long*)(ptr7 + 1L);
                                *ptr7 = (uint8_t)((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr4 >>> 6L) & 0xfL) | ((uint32_t)((((__ror__((uint32_t)ptr3, 28)) & 0x30) >>> 4) & 0xfffffff) << 4)) | 0x80;
                                char* ptr8 = *param5;
                                *param5 = (long*)(ptr8 + 1L);
                                *ptr8 = (uint8_t)(long*)((long)ptr4 & 0x3fL) | ((uint8_t)2 << 6);
                                goto loc_CE10F8;
                            }
                            else if((uint32_t)ptr3 < 0xe000) {
                                return 2L;
                            }
                        }
                        ptr2 = *param5;
                        if((long)(long*)(param4 - ptr2) < 3L) {
                            return 1L;
                        }
                        *param5 = (long*)(ptr2 + 1L);
                        *ptr2 = (uint8_t)(long*)__ror__((long)ptr3, 12L) | 0xe0;
                        ptr2 = *param5;
                        long v0 = (uint64_t)((uint32_t)(uint8_t)(long*)((long)(long*)((long)ptr3 >>> 6L) & 0x3fL) | ((uint32_t)2 << 6));
                        long* ptr9 = (long*)(ptr2 + 1L);
                    }
                    else {
                        ptr2 = *param5;
                        if((long)(long*)(param4 - ptr2) < 2L) {
                            return 1L;
                        }
                        ptr9 = ptr2 + 1L;
                        v0 = (uint64_t)(((uint32_t)(long*)__ror__((long)ptr3, 6L) & 0x3ffffff) | 0xc0);
                    }
                    *param5 = ptr9;
                    *ptr2 = (uint8_t)v0;
                    char* ptr10 = *param5;
                    *param5 = (long*)(ptr10 + 1L);
                    *ptr10 = (uint8_t)(long*)((long)ptr3 & 0x3fL) | ((uint8_t)2 << 6);
                }
            loc_CE10F8:
                ptr2 = (char*)*param2 + 2L;
                *param2 = (char*)((char*)*param2 + 2L);
                if(param1 <= (uint64_t)ptr2) {
                    goto loc_CE125C;
                }
                else {
                    goto loc_CE1108;
                }
            }
            return 2L;
        }
        while(1);
    }
loc_CE125C:
    return 0L;
}
