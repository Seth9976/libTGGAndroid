int* IncrementRange(int* param0) {
    int v0 = *param0;
    int v1 = *(param0 + 1);
    *param0 = v0 + 1;
    *(param0 + 1) = v0 >= v1 ? v0 + 1: v1;
    return param0;
}
