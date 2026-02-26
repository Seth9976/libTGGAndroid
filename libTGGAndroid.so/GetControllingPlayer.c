long GetControllingPlayer(int* param0, uint32_t param1) {
    return *(param0 + 1653) == param1 ? (uint64_t)*(param0 + 0x676): param1;
}
