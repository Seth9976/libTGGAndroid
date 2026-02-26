long DefTypeCanBeInArray(int* param0) {
    long v0 = (uint64_t)(*(param0 + 6) - 1);
    if(*(param0 + 6) - 1 <= 42) {
        return (uint64_t)((uint32_t)(8264589828751L >>> v0) & 1);
    }
    return 0L;
}
