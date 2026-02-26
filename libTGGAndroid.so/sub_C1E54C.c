long sub_C1E54C(long param0, uint32_t param1, char* param2, int param3, int param4, int param5) {
    int v0;
    short* ptr0 = (short*)(param1 + param0);
    long v1 = (uint64_t)*(ptr0 + 1);
    if(((uint32_t)(uint8_t)(v1 >>> 8L) | ((uint32_t)(uint8_t)v1 << 8) | ((uint32_t)0 << 16)) != 0) {
        long v2 = (uint64_t)((uint32_t)*(ptr0 + 2) * &ELFHeader);
        long v3 = 0L;
        uint32_t v4 = param1 + 6;
        long v5 = (long)(((uint32_t)(uint8_t)(v2 >>> 24L) | ((uint32_t)(uint8_t)(v2 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v2 >>> 8L) << 16) | ((uint32_t)(uint8_t)v2 << 24)) + param1) + param0;
        do {
            short* ptr1 = (short*)(v4 + param0);
            long v6 = (uint64_t)((uint32_t)*(ptr1 + 3) * &ELFHeader);
            if(((uint32_t)(uint8_t)(v6 >>> 24L) | ((uint32_t)(uint8_t)(v6 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v6 >>> 8L) << 16) | ((uint32_t)(uint8_t)v6 << 24)) == param4) {
                long v7 = (uint64_t)*ptr1;
                long v8 = (uint64_t)*(ptr1 + 1);
                long v9 = (uint64_t)*(ptr1 + 2);
                if(((uint32_t)(uint8_t)(v7 >>> 8L) | ((uint32_t)(uint8_t)v7 << 8) | ((uint32_t)0 << 16)) == 0 || (((uint32_t)(uint8_t)(v7 >>> 8L) | ((uint32_t)(uint8_t)v7 << 8) | ((uint32_t)0 << 16)) == 3 && (((uint32_t)(uint8_t)(v8 >>> 8L) | ((uint32_t)(uint8_t)v8 << 8) | ((uint32_t)0 << 16)) == 1 | ((uint32_t)(uint8_t)(v8 >>> 8L) | ((uint32_t)(uint8_t)v8 << 8) | ((uint32_t)0 << 16)) == 10) != 0)) {
                    long v10 = (uint64_t)((uint32_t)*(ptr1 + 4) * &ELFHeader);
                    long v11 = (uint64_t)*(ptr1 + 5) * 0x1000000000000L;
                    long v12 = sub_C1E730(param2, param3, (char*)(((uint64_t)(uint8_t)(v11 >>> 56L) | ((uint64_t)(uint8_t)(v11 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v11 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v11 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v11 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v11 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v11 >>> 8L) << 48) | ((uint64_t)(uint8_t)v11 << 56)) + v5), (uint32_t)(uint8_t)(v10 >>> 24L) | ((uint32_t)(uint8_t)(v10 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v10 >>> 8L) << 16) | ((uint32_t)(uint8_t)v10 << 24));
                    uint32_t v13 = (uint32_t)v12;
                    if(v13 < 0x80000000) {
                        if(v3 + 1L < ((uint64_t)(uint8_t)(v1 >>> 8L) | ((uint64_t)(uint8_t)v1 << 8) | ((uint64_t)0L << 16))) {
                            long v14 = (uint64_t)((uint32_t)*(ptr1 + 9) * &ELFHeader);
                            if(((uint32_t)(uint8_t)(v14 >>> 24L) | ((uint32_t)(uint8_t)(v14 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v14 >>> 8L) << 16) | ((uint32_t)(uint8_t)v14 << 24)) == param5) {
                                long v15 = (uint64_t)*(ptr1 + 6);
                                if(((uint32_t)(uint8_t)(v7 >>> 8L) | ((uint32_t)(uint8_t)v7 << 8) | ((uint32_t)0 << 16)) == ((uint32_t)(uint8_t)(v15 >>> 8L) | ((uint32_t)(uint8_t)v15 << 8) | ((uint32_t)0 << 16))) {
                                    long v16 = (uint64_t)*(ptr1 + 7);
                                    if(((uint32_t)(uint8_t)(v16 >>> 8L) | ((uint32_t)(uint8_t)v16 << 8) | ((uint32_t)0 << 16)) == ((uint32_t)(uint8_t)(v8 >>> 8L) | ((uint32_t)(uint8_t)v8 << 8) | ((uint32_t)0 << 16))) {
                                        long v17 = (uint64_t)*(ptr1 + 8);
                                        if(((uint32_t)(uint8_t)(v17 >>> 8L) | ((uint32_t)(uint8_t)v17 << 8) | ((uint32_t)0 << 16)) == ((uint32_t)(uint8_t)(v9 >>> 8L) | ((uint32_t)(uint8_t)v9 << 8) | ((uint32_t)0 << 16))) {
                                            ptr0 = (uint64_t)((uint32_t)*(ptr1 + 10) * &ELFHeader);
                                            if(((uint32_t)(uint8_t)(long*)((long)ptr0 >>> 24L) | ((uint32_t)(uint8_t)(long*)((long)ptr0 >>> 16L) << 8) | ((uint32_t)(uint8_t)(long*)((long)ptr0 >>> 8L) << 16) | ((uint32_t)(uint8_t)ptr0 << 24)) == 0) {
                                                goto loc_C1E5B8;
                                            }
                                            else if((int)v13 < param3 && param2[v13] == 32) {
                                                int v18 = param3 - (v13 + 1);
                                                long v19 = (uint64_t)*(ptr1 + 11) * 0x1000000000000L;
                                                long v20 = sub_C1E730(&param2[(long)(v13 + 1)], v18, (char*)(((uint64_t)(uint8_t)(v19 >>> 56L) | ((uint64_t)(uint8_t)(v19 >>> 48L) << 8) | ((uint64_t)(uint8_t)(v19 >>> 40L) << 16) | ((uint64_t)(uint8_t)(v19 >>> 32L) << 24) | ((uint64_t)(uint8_t)(v19 >>> 24L) << 32) | ((uint64_t)(uint8_t)(v19 >>> 16L) << 40) | ((uint64_t)(uint8_t)(v19 >>> 8L) << 48) | ((uint64_t)(uint8_t)v19 << 56)) + v5), (uint32_t)(uint8_t)(long*)((long)ptr0 >>> 24L) | ((uint32_t)(uint8_t)(long*)((long)ptr0 >>> 16L) << 8) | ((uint32_t)(uint8_t)(long*)((long)ptr0 >>> 8L) << 16) | ((uint32_t)(uint8_t)ptr0 << 24));
                                                if((uint32_t)v20 == v18) {
                                                    return 1L;
                                                }
                                            }
                                        }
                                        else {
                                            goto loc_C1E5B8;
                                        }
                                    }
                                    else {
                                        goto loc_C1E5B8;
                                    }
                                }
                                else {
                                    goto loc_C1E5B8;
                                }
                            }
                            else {
                                goto loc_C1E5B8;
                            }
                        }
                        else {
                        loc_C1E5B8:
                            if(v13 == param3) {
                                return 1L;
                            }
                        }
                    }
                }
            }
            ++v3;
            v4 = v0 + 12;
        }
        while(((uint64_t)(uint8_t)(v1 >>> 8L) | ((uint64_t)(uint8_t)v1 << 8) | ((uint64_t)0L << 16)) != v3);
    }
    return 0L;
}
