int Return(int param0, int* param1, int* param2) {
    int v0 = *param2;
    *param2 = v0 + 1;
    *(int*)(v0 * 4L + (long)param1) = param0;
    return param0;
}
