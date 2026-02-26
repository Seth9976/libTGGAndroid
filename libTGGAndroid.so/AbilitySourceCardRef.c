long AbilitySourceCardRef(long param0, long param1) {
    long* ptr0 = (long*)AbilityGetRegistered(param0, param1 & 0xffffffffL);
    return *(long*)((char*)ptr0 + 28L);
}
