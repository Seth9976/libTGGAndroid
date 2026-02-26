long GetOfficialCampaign(int param0, int* param1) {
    *param1 = param0 != 4 ? param0: 6;
    if((uint32_t)(param0 - 8) <= 10 && ((1859 >>> (param0 - 8)) & 1)) {
        *param1 = (param0 != 4 ? param0: 6) + *(int*)((param0 - 8) * 4L + 4135808L);
    }
    return *(long*)(param0 * 168L + 0xd45110L);
}
