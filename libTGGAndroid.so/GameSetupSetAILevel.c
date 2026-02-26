int* GameSetupSetAILevel(int* param0, char param1) {
    *(param0 + 6) = ((uint32_t)(*(param0 + 6) & 0xfffffff) | ((uint32_t)param1 << 28)) + 0x10000000;
    return param0;
}
