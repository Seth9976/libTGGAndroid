long* SetupAfter2(long* param0, long param1) {
    int v0 = *(int*)(param0 + 844);
    *(int*)(param0 + 844) = v0 + 1;
    *((long*)(v0 * 8L + (long)param0) + 839) = param1;
    return param0;
}
