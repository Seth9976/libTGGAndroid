long DailyResultIsBetter(int* param0, int param1) {
    int v0 = *(param0 + 2);
    int v1 = *(param0 + 3);
    int v2 = *(param0 + 4);
    int v3 = v0 > v1 ? v0: v1;
    return (v3 > v2 ? v3: v2) < param1;
}
