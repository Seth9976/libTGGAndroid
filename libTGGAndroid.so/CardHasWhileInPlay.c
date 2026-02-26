long CardHasWhileInPlay(int param0, long* param1, uint32_t param2, int param3, int param4) {
    int v0 = 0;
    int* ptr0 = (int*)(*((long*)(param2 * 104L + (long)param1) + 845) + 236L);
    while(1) {
        int v1 = *(ptr0 - 3);
        if(*(ptr0 - 3) == 6 && (*(ptr0 - 2) != 1 || *ptr0 != param3)) {
            goto loc_7E3B64;
        }
        else if(*(ptr0 - 3) == 6) {
            return (uint64_t)((uint32_t)(uint8_t)(v0 & 0xF) | ((uint32_t)(((uint32_t)((((uint32_t)((__ror__(param4, 26)) & &gvar_10308+2fcf7h) & &gvar_10308+2fcb8h) >>> 4) & 0x3FFF) | ((uint32_t)(uint16_t)(param2 & 0x3FFF) << 14) | ((uint32_t)0 << 28)) & 0xfffffff) << 4) | 0x10);
        }
        if(v1 == 0) {
            return 0xffffffffL;
        }
    loc_7E3B64:
        v0 = param0 + 1;
        ptr0 += 48;
    }
    return 0xffffffffL;
}
