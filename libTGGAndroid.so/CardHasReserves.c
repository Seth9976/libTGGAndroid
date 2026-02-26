long* CardHasReserves(int* param0, long* param1, uint32_t param2, int param3, int param4) {
    int v0;
    *(param0 + 0x100) = 0;
    int v1 = 0;
    int v2 = (uint32_t)((uint32_t)((__ror__(param4, 26)) & &gvar_10308+2fcf7h) & &gvar_10308+2fcb8h) | ((uint32_t)(uint16_t)(param2 & 0x3FFF) << 18);
    int* ptr0 = (int*)(*((long*)(param2 * 104L + (long)param1) + 845) + 236L);
    while(1) {
        int v3 = *(ptr0 - 3);
        if(*(ptr0 - 3) == 6) {
            if(*(ptr0 - 2) == 5 && *ptr0 == param3) {
                int v4 = *(param0 + 0x100);
                *(param0 + 0x100) = v4 + 1;
                *(int*)(v4 * 4L + (long)param0) = (v1 & 0xF) | v2 | 0x10;
            }
        }
        else if(v3 == 0) {
            return param1;
        }
        v1 = v0 + 1;
        ptr0 += 48;
    }
    return param1;
}
