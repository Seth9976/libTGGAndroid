long DefIterGetNext(long* param0, int* param1) {
    int v0 = *param1;
    long v1 = *(param0 + 1);
    *param1 = v0 + 1;
    *param1 = v0 + 1 < *(int*)(param0 + 2) ? v0 + 1: -1;
    return v0 * 104L + v1;
}
