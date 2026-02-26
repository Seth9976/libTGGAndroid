int FromWeeklyCampaign(int param0, int* param1, int* param2) {
    *param1 = param0 >> 4;
    *param2 = param0 & 0xF;
    return param0;
}
