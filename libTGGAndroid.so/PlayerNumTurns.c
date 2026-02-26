long PlayerNumTurns(int* param0, int param1) {
    long v0 = *(param0 + 848) != 0 ? (uint64_t)((*(param0 + 1658) - 1) / *(param0 + 848)): 0L;
    return *(param0 + 1658) - 1 - (uint32_t)v0 * *(param0 + 848) >= param1 ? (uint64_t)((uint32_t)v0 + 1): (uint64_t)(uint32_t)v0;
}
