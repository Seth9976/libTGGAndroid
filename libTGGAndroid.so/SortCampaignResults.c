long SortCampaignResults(int* param0, int* param1) {
    int v0 = *param0;
    int v1 = *param1;
    return v0 == v1 ? *(param0 + 1) < *(param1 + 1): v0 < v1;
}
