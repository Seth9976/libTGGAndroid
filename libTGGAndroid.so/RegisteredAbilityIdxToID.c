long RegisteredAbilityIdxToID(int param0, long param1) {
    return (uint64_t)((uint32_t)0 | ((uint32_t)(uint16_t)(param1 & 0xfffL) << 6) | ((uint32_t)(uint16_t)(param0 & 0x3FFF) << 18));
}
