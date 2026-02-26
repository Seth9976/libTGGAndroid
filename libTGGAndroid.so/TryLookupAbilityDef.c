long* TryLookupAbilityDef(int* param0, int param1) {
    if(*(param0 + 440) == param1) {
        return (long*)(param0 + 440);
    }
    if(*(param0 + 444) == param1) {
        return (long*)(param0 + 444);
    }
    if(*(param0 + 448) == param1) {
        return (long*)(param0 + 448);
    }
    return *(param0 + 452) == param1 ? (long*)(param0 + 452): NULL;
}
