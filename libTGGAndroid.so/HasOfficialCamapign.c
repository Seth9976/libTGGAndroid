long HasOfficialCamapign(int* param0) {
    if(*param0 != 0) {
        return 0L;
    }
    return *(long*)(*(param0 + 1) * 168L + 0xd45110L);
}
