long CardEnumAbilityIdxToID(long param0, long param1, long param2) {
    long v0 = (uint64_t)((uint32_t)((uint32_t)(param1 & &gvar_10308+2fcf7h) & 0xF) | ((uint32_t)(uint16_t)(param0 & 0x3fffL) << 18));
    return (uint64_t)((uint32_t)(uint8_t)(v0 & 0x3fL) | ((uint32_t)(uint16_t)(param2 & 0xfffL) << 6) | ((uint32_t)(uint16_t)((v0 >>> 18L) & 0x3fffL) << 18) | 0x20);
}
