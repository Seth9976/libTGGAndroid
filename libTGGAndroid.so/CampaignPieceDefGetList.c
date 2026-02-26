long CampaignPieceDefGetList(int* param0, uint64_t* param1) {
    long v0;
    if(*(param0 + 6) == 3) {
        v0 = 0L;
        int* ptr0 = (int*)(v0 * 624L + (long)param0);
        *param1 = (long*)(ptr0 + 8);
        return (uint64_t)*(ptr0 + 160);
    }
    if(*(param0 + 162) == 3) {
        v0 = 1L;
        int* ptr0 = (int*)(v0 * 624L + (long)param0);
        *param1 = (long*)(ptr0 + 8);
        return (uint64_t)*(ptr0 + 160);
    }
    if(*(param0 + 318) == 3) {
        v0 = 2L;
        int* ptr0 = (int*)(v0 * 624L + (long)param0);
        *param1 = (long*)(ptr0 + 8);
        return (uint64_t)*(ptr0 + 160);
    }
    if(*(param0 + 474) == 3) {
        v0 = 3L;
        int* ptr0 = (int*)(v0 * 624L + (long)param0);
        *param1 = (long*)(ptr0 + 8);
        return (uint64_t)*(ptr0 + 160);
    }
    return 0L;
}
