long ToPileLoc(int* param0) {
    long result = (uint64_t)*param0;
    if(*param0 == 0 || *param0 == -1) {
        return result;
    }
    return (uint64_t)*(param0 + 1);
}
