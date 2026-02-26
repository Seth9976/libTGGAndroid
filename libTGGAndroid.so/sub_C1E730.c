long sub_C1E730(char* param0, int param1, char* param2, int param3) {
    long* ptr0;
    int v0;
    int v1;
    int v2;
    int v3;
    if(param3 != 0) {
        int v4 = 0;
    loc_C1E758:
        do {
            char* ptr1 = (uint64_t)*(param2 + 1L);
            v0 = (uint32_t)*param2;
            int v5 = (uint32_t)(uint8_t)ptr1 | ((uint32_t)*param2 << 8) | ((uint32_t)(uint16_t)(long*)((long)ptr1 >>> 16L) << 16);
            if(((uint32_t)(uint8_t)ptr1 | ((uint32_t)(uint8_t)v0 << 8) | ((uint32_t)(uint16_t)(long*)((long)ptr1 >>> 16L) << 16)) <= 127) {
                if(param1 <= v4 || (uint32_t)*((long)v4 + param0) != v5) {
                    return 0xffffffffL;
                }
                v4 = v1 + 1;
                goto loc_C1E748;
            }
            else if(v5 <= 0x7ff && (v4 + 1 >= param1 || (v2 >>> 6) + 192 != (uint32_t)*((long)v4 + param0) || (uint32_t)*(char*)((char*)((long)v4 + param0) + 1L) != ((uint32_t)(uint8_t)(char*)((long)ptr1 & 0x3fL) | ((uint32_t)2 << 6)))) {
                return 0xffffffffL;
            }
            else if(v5 <= 0x7ff) {
                v4 = v1 + 2;
                goto loc_C1E748;
            }
            else {
                if((v0 & 0xfc) == 216) {
                    if(v4 + 3 >= param1) {
                        return 0xffffffffL;
                    }
                    long v6 = (uint64_t)((uint32_t)*(short*)(param2 + 2L) * &ELFHeader);
                    v5 = v2 * 0x400 + ((uint32_t)(uint8_t)(v6 >>> 24L) | ((uint32_t)(uint8_t)(v6 >>> 16L) << 8) | ((uint32_t)(uint8_t)(v6 >>> 8L) << 16) | ((uint32_t)(uint8_t)v6 << 24));
                    if(((v5 - 56613888) >>> 18) + 240 != (uint32_t)*((long)v4 + param0)) {
                        return 0xffffffffL;
                    }
                    ptr1 = (long)v4 + param0;
                    if((uint32_t)*(ptr1 + 1L) != ((uint32_t)(uint8_t)(((v5 - 56613888) >>> 12) & 0x3F) | ((uint32_t)2 << 6)) || (uint32_t)*(ptr1 + 2L) != ((uint32_t)(uint8_t)(((v5 - 56613888) >>> 6) & 0x3F) | ((uint32_t)2 << 6)) || (uint32_t)*(char*)((char*)((long)v4 + param0) + 3L) != ((uint32_t)(uint8_t)(v5 & 0x3F) | ((uint32_t)2 << 6))) {
                        return 0xffffffffL;
                    }
                    param2 += 2L;
                    v4 = v1 + 4;
                    param3 = v3 - 2;
                    goto loc_C1E748;
                }
                ptr0 = &gFFFFFFFF;
            }
            if(v4 + 2 < param1 && (v0 & 0xfc) != 220) {
                if(((v0 >>> 4) | 0xe0) != (uint32_t)*((long)v4 + param0) || (uint32_t)*(char*)((char*)((long)v4 + param0) + 1L) != ((uint32_t)(uint8_t)((v5 >>> 6) & 0x3F) | ((uint32_t)2 << 6)) || (uint32_t)*(char*)((char*)((long)v4 + param0) + 2L) != ((uint32_t)(uint8_t)(char*)((long)ptr1 & 0x3fL) | ((uint32_t)2 << 6))) {
                    return 0xffffffffL;
                }
                v4 = v1 + 3;
            loc_C1E748:
                int v7 = param3;
                param3 = v3 - 2;
                param2 += 2L;
                ptr0 = (uint64_t)v4;
                if(v7 != 2) {
                    goto loc_C1E758;
                }
                break;
            }
        }
        while(v4 + 2 < param1 && (v0 & 0xfc) != 220);
        return (uint64_t)(uint32_t)ptr0;
    }
    return 0L;
}
