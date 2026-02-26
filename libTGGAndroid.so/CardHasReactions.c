uint64_t* CardHasReactions(int* param0, uint64_t* param1, uint32_t param2, int param3, int param4, char param5) {
    int v0;
    int v1;
    *(param0 + 0x100) = 0;
    int* ptr0 = *((uint64_t*)(param2 * 104L + (long)param1) + 845);
    int v2 = *(ptr0 + 56);
    if(*(ptr0 + 56) != 0) {
        uint64_t* ptr1 = (uint64_t)((uint32_t)((uint32_t)((__ror__(param4, 26)) & &gvar_10308+2fcf7h) & &gvar_10308+2fcb8h) | ((uint32_t)(uint16_t)(param2 & 0x3FFF) << 18) | 0x10);
        int v3 = 0;
        if(param5) {
            ptr0 += 104;
            do {
                if(v2 == 6 && ((*(ptr0 - 3) >>> 2) & 1) && *(ptr0 - 47) == 0 && *(ptr0 - 45) == param3) {
                    v0 = *(param0 + 0x100);
                    *(param0 + 0x100) = v0 + 1;
                    *(int*)(v0 * 4L + (long)param0) = (v3 & 0xF) | (uint32_t)ptr1;
                }
                v2 = *ptr0;
                ptr0 += 48;
                v3 = v1 + 1;
            }
            while(v2 != 0);
        }
        else {
            ptr0 += 57;
            do {
                if(v2 == 6 && *ptr0 == 0 && *(ptr0 + 2) == param3) {
                    v0 = *(param0 + 0x100);
                    *(param0 + 0x100) = v0 + 1;
                    *(int*)(v0 * 4L + (long)param0) = (v3 & 0xF) | (uint32_t)ptr1;
                }
                v2 = *(ptr0 + 47);
                ptr0 += 48;
                v3 = v1 + 1;
            }
            while(v2 != 0);
        }
    }
    return param1;
}
