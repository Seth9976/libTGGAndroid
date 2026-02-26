long SortRanks(int* param0, int* param1) {
    int v0 = *param0;
    int v1 = *param1;
    char v2 = *param1 > v0;
    char v3 = (((v0 - v1) ^ v0) & (v0 ^ v1)) < 0;
    if(v0 > v1) {
        return 1L;
    }
    if(v3 != v2) {
        return 0L;
    }
    return *(param0 + 1) > *(param1 + 1);
}
