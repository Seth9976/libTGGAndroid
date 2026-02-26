int CardHasOngoing(uint64_t* param0, int param1, int param2, uint32_t param3, int param4) {
    int result;
    uint64_t* ptr0;
    int* ptr1 = *((uint64_t*)(param3 * 104L + (long)param0) + 845);
    int v0 = *(ptr1 + 56);
    if(*(ptr1 + 56) != 0) {
        int v1 = *(uint32_t*)((char*)param0 + 6612L);
        int v2 = *(uint8_t*)(param0 + 0x33c);
        long v3 = param2 == v1 ? (uint64_t)(v2 & 1): 0L;
        long v4 = param1 == v1 ? (uint64_t)(v2 & 1): 0L;
        if(param1 == param2) {
            if(!(v3 & 0x1L)) {
                goto loc_7D4704;
            }
            else {
                ptr0 = NULL;
                ptr1 += 104;
                result = -1;
            }
            while(1) {
                if(((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || ((*(char*)(ptr1 - 3) >>> 2) & 1)) && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || (v0 == 7 && (v4 & 0x1L))) && *(ptr1 - 42) == param4) {
                    return (uint32_t)((uint32_t)(uint64_t*)((long)ptr0 & &gvar_10308+2fcf7h) & 0xF) | ((uint32_t)(uint16_t)(param3 & 0x3FFF) << 18) | 0x10;
                }
                v0 = *ptr1;
                ptr1 += 48;
                ptr0 = (char*)ptr0 + 1L;
                if(v0 == 0) {
                    return result;
                }
                continue;
            loc_7D4704:
                ptr0 = NULL;
                ptr1 += 104;
                result = -1;
                do {
                    if(!((*(char*)(ptr1 - 7) >>> 1) & 1) && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || ((*(char*)(ptr1 - 3) >>> 2) & 1)) && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || (v0 == 7 && (v4 & 0x1L))) && *(ptr1 - 42) == param4) {
                        return (uint32_t)((uint32_t)(uint64_t*)((long)ptr0 & &gvar_10308+2fcf7h) & 0xF) | ((uint32_t)(uint16_t)(param3 & 0x3FFF) << 18) | 0x10;
                    }
                    v0 = *ptr1;
                    ptr1 += 48;
                    ptr0 = (char*)ptr0 + 1L;
                }
                while(v0 != 0);
            }
        }
        else {
            ptr0 = NULL;
            ptr1 += 104;
            result = -1;
            if(!(v3 & 0x1L)) {
                goto loc_7D4790;
            }
            while(1) {
                if(*(char*)(ptr1 - 7) & 1 && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || ((*(char*)(ptr1 - 3) >>> 2) & 1)) && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || (v0 == 7 && (v4 & 0x1L))) && *(ptr1 - 42) == param4) {
                    return (uint32_t)((uint32_t)(uint64_t*)((long)ptr0 & &gvar_10308+2fcf7h) & 0xF) | ((uint32_t)(uint16_t)(param3 & 0x3FFF) << 18) | 0x10;
                }
                v0 = *ptr1;
                ptr1 += 48;
                ptr0 = (char*)ptr0 + 1L;
                if(v0 == 0) {
                    return result;
                }
                continue;
            loc_7D4790:
                while(1) {
                    if((*(ptr1 - 7) & 0x3) == 1 && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || ((*(char*)(ptr1 - 3) >>> 2) & 1)) && ((!((*(char*)(ptr1 - 3) >>> 2) & 1) && v0 == 7) || (v0 == 7 && (v4 & 0x1L))) && *(ptr1 - 42) == param4) {
                        return (uint32_t)((uint32_t)(uint64_t*)((long)ptr0 & &gvar_10308+2fcf7h) & 0xF) | ((uint32_t)(uint16_t)(param3 & 0x3FFF) << 18) | 0x10;
                    }
                    v0 = *ptr1;
                    ptr1 += 48;
                    ptr0 = (char*)ptr0 + 1L;
                    if(v0 == 0) {
                        return result;
                    }
                }
            }
        }
        return result;
    }
    return -1;
}
